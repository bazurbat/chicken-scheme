/* Generated from lolevel.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-22 11:31
   Version 4.3.5 
   windows-mingw32-x86 [ manyargs dload ptables ]
   compiled 2010-02-17 on lenovo-1 (MINGW32_NT-6.0)
   command line: lolevel.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file lolevel.c
   unit: lolevel
*/

#include "chicken.h"

#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__)
# include <sys/types.h>
#endif
#ifndef C_NONUNIX
# include <sys/mman.h>
#endif

#define C_w2b(x)                   C_fix(C_wordstobytes(C_unfix(x)))
#define C_pointer_eqp(x, y)        C_mk_bool(C_c_pointer_nn(x) == C_c_pointer_nn(y))
#define C_memmove_o(to, from, n, toff, foff) C_memmove((char *)(to) + (toff), (char *)(from) + (foff), (n))

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_srfi_69_toplevel)
C_externimport void C_ccall C_srfi_69_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[131];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,29),40,35,35,115,121,115,35,99,104,101,99,107,45,98,108,111,99,107,32,120,49,53,32,108,111,99,49,54,41,0,0,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,41),40,35,35,115,121,115,35,99,104,101,99,107,45,103,101,110,101,114,105,99,45,115,116,114,117,99,116,117,114,101,32,120,52,54,32,108,111,99,52,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,33),40,35,35,115,121,115,35,99,104,101,99,107,45,112,111,105,110,116,101,114,32,120,55,53,32,46,32,108,111,99,55,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,10),40,110,111,115,105,122,101,114,114,41,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,16),40,115,105,122,101,114,114,32,97,114,103,115,49,57,53,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,29),40,99,104,101,99,107,110,49,32,110,49,57,54,32,110,109,97,120,49,57,55,32,111,102,102,49,57,56,41,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,47),40,99,104,101,99,107,110,50,32,110,50,48,51,32,110,109,97,120,50,48,52,32,110,109,97,120,50,50,48,53,32,111,102,102,49,50,48,54,32,111,102,102,50,50,48,55,41,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,20),40,109,111,118,101,32,102,114,111,109,50,50,55,32,116,111,50,50,56,41,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,36),40,98,111,100,121,49,55,56,32,110,49,56,56,32,102,111,102,102,115,101,116,49,56,57,32,116,111,102,102,115,101,116,49,57,48,41,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,40),40,100,101,102,45,116,111,102,102,115,101,116,49,56,50,32,37,110,49,55,53,51,50,54,32,37,102,111,102,102,115,101,116,49,55,54,51,50,55,41};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,25),40,100,101,102,45,102,111,102,102,115,101,116,49,56,49,32,37,110,49,55,53,51,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,10),40,100,101,102,45,110,49,56,48,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,40),40,109,111,118,101,45,109,101,109,111,114,121,33,32,102,114,111,109,49,54,57,32,116,111,49,55,48,32,46,32,116,109,112,49,54,56,49,55,49,41};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,51,53,57,32,105,51,54,51,41};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,11),40,99,111,112,121,32,120,51,52,49,41,0,0,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,18),40,111,98,106,101,99,116,45,99,111,112,121,32,120,51,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,18),40,97,108,108,111,99,97,116,101,32,97,51,54,56,51,55,49,41,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,14),40,102,114,101,101,32,97,51,55,51,51,55,55,41,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,15),40,112,111,105,110,116,101,114,63,32,120,51,56,48,41,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,20),40,112,111,105,110,116,101,114,45,108,105,107,101,63,32,120,51,56,53,41,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,26),40,97,100,100,114,101,115,115,45,62,112,111,105,110,116,101,114,32,97,100,100,114,51,57,50,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,25),40,112,111,105,110,116,101,114,45,62,97,100,100,114,101,115,115,32,112,116,114,51,57,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,22),40,110,117,108,108,45,112,111,105,110,116,101,114,63,32,112,116,114,51,57,56,41,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,22),40,111,98,106,101,99,116,45,62,112,111,105,110,116,101,114,32,120,52,48,49,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,24),40,112,111,105,110,116,101,114,45,62,111,98,106,101,99,116,32,112,116,114,52,49,50,41};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,23),40,112,111,105,110,116,101,114,61,63,32,112,49,52,49,53,32,112,50,52,49,54,41,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,26),40,112,111,105,110,116,101,114,43,32,97,52,50,48,52,50,52,32,97,52,49,57,52,50,53,41,0,0,0,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,20),40,97,108,105,103,110,45,116,111,45,119,111,114,100,32,120,52,51,52,41,0,0,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,27),40,116,97,103,45,112,111,105,110,116,101,114,32,112,116,114,52,52,55,32,116,97,103,52,52,56,41,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,34),40,116,97,103,103,101,100,45,112,111,105,110,116,101,114,63,32,120,52,54,53,32,46,32,116,109,112,52,54,52,52,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,18),40,112,111,105,110,116,101,114,45,116,97,103,32,120,52,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,33),40,109,97,107,101,45,108,111,99,97,116,105,118,101,32,111,98,106,52,57,51,32,46,32,105,110,100,101,120,52,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,38),40,109,97,107,101,45,119,101,97,107,45,108,111,99,97,116,105,118,101,32,111,98,106,53,48,48,32,46,32,105,110,100,101,120,53,48,49,41,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,25),40,108,111,99,97,116,105,118,101,45,115,101,116,33,32,120,53,48,55,32,121,53,48,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,23),40,108,111,99,97,116,105,118,101,45,62,111,98,106,101,99,116,32,120,53,49,48,41,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,16),40,108,111,99,97,116,105,118,101,63,32,120,53,49,50,41};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,33),40,112,111,105,110,116,101,114,45,117,56,45,115,101,116,33,32,97,53,49,54,53,50,48,32,97,53,49,53,53,50,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,33),40,112,111,105,110,116,101,114,45,115,56,45,115,101,116,33,32,97,53,50,52,53,50,56,32,97,53,50,51,53,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,34),40,112,111,105,110,116,101,114,45,117,49,54,45,115,101,116,33,32,97,53,51,50,53,51,54,32,97,53,51,49,53,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,34),40,112,111,105,110,116,101,114,45,115,49,54,45,115,101,116,33,32,97,53,52,48,53,52,52,32,97,53,51,57,53,52,53,41,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,34),40,112,111,105,110,116,101,114,45,117,51,50,45,115,101,116,33,32,97,53,52,56,53,53,50,32,97,53,52,55,53,53,51,41,0,0,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,34),40,112,111,105,110,116,101,114,45,115,51,50,45,115,101,116,33,32,97,53,53,54,53,54,48,32,97,53,53,53,53,54,49,41,0,0,0,0,0,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,34),40,112,111,105,110,116,101,114,45,102,51,50,45,115,101,116,33,32,97,53,54,52,53,54,56,32,97,53,54,51,53,54,57,41,0,0,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,34),40,112,111,105,110,116,101,114,45,102,54,52,45,115,101,116,33,32,97,53,55,50,53,55,54,32,97,53,55,49,53,55,55,41,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,12),40,97,50,50,55,51,32,120,54,51,52,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,17),40,97,50,50,56,57,32,120,54,51,55,32,105,54,51,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,34),40,101,120,116,101,110,100,45,112,114,111,99,101,100,117,114,101,32,112,114,111,99,54,51,50,32,100,97,116,97,54,51,51,41,0,0,0,0,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,12),40,97,50,51,49,54,32,120,54,53,51,41,0,0,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,26),40,101,120,116,101,110,100,101,100,45,112,114,111,99,101,100,117,114,101,63,32,120,54,52,51,41,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,12),40,97,50,51,52,57,32,120,54,54,57,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,21),40,112,114,111,99,101,100,117,114,101,45,100,97,116,97,32,120,54,53,55,41,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,34),40,115,101,116,45,112,114,111,99,101,100,117,114,101,45,100,97,116,97,33,32,112,114,111,99,54,55,51,32,120,54,55,52,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,22),40,110,117,109,98,101,114,45,111,102,45,115,108,111,116,115,32,120,54,55,55,41,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,22),40,110,117,109,98,101,114,45,111,102,45,98,121,116,101,115,32,120,54,56,48,41,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,40),40,109,97,107,101,45,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,32,116,121,112,101,54,56,56,32,46,32,97,114,103,115,54,56,57,41};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,35),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,63,32,120,54,57,56,32,46,32,116,109,112,54,57,55,54,57,57,41,0,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,27),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,116,121,112,101,32,120,55,49,56,41,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,29),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,108,101,110,103,116,104,32,120,55,50,49,41,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,42),40,114,101,99,111,114,100,45,105,110,115,116,97,110,99,101,45,115,108,111,116,45,115,101,116,33,32,120,55,50,52,32,105,55,50,53,32,121,55,50,54,41,0,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,11),40,100,111,108,111,111,112,55,51,56,41,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,21),40,114,101,99,111,114,100,45,62,118,101,99,116,111,114,32,120,55,51,52,41,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,22),40,111,98,106,101,99,116,45,101,118,105,99,116,101,100,63,32,120,55,52,55,41,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,16),40,102,95,50,54,56,54,32,97,55,53,51,55,53,54,41};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,55,55,57,32,105,55,56,51,41};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,55,53,57,41,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,34),40,111,98,106,101,99,116,45,101,118,105,99,116,32,120,55,52,57,32,46,32,97,108,108,111,99,97,116,111,114,55,53,48,41,0,0,0,0,0,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,56,51,57,32,105,56,52,51,41};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,56,49,52,41,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,49),40,111,98,106,101,99,116,45,101,118,105,99,116,45,116,111,45,108,111,99,97,116,105,111,110,32,120,55,57,55,32,112,116,114,55,57,56,32,46,32,108,105,109,105,116,55,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,16),40,102,95,50,57,51,57,32,97,56,54,51,56,54,55,41};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,56,56,48,32,105,56,56,52,41};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,14),40,114,101,108,101,97,115,101,32,120,56,55,48,41,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,35),40,111,98,106,101,99,116,45,114,101,108,101,97,115,101,32,120,56,53,57,32,46,32,114,101,108,101,97,115,101,114,56,54,48,41,0,0,0,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,57,48,54,32,105,57,49,48,41};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,12),40,101,118,105,99,116,32,120,56,57,52,41,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,18),40,111,98,106,101,99,116,45,115,105,122,101,32,120,56,57,49,41,0,0,0,0,0,0};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,16),40,100,111,108,111,111,112,57,53,54,32,105,57,54,48,41};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,11),40,99,111,112,121,32,120,57,51,55,41,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,33),40,111,98,106,101,99,116,45,117,110,101,118,105,99,116,32,120,57,50,56,32,46,32,116,109,112,57,50,55,57,50,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,12),40,108,111,111,112,32,108,115,116,50,55,41,0,0,0,0};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,24),40,111,98,106,101,99,116,45,98,101,99,111,109,101,33,32,97,108,115,116,57,54,55,41};
static C_char C_TLS li81[] C_aligned={C_lihdr(0,0,33),40,109,117,116,97,116,101,45,112,114,111,99,101,100,117,114,101,32,111,108,100,57,55,52,32,112,114,111,99,57,55,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li82[] C_aligned={C_lihdr(0,0,19),40,103,108,111,98,97,108,45,114,101,102,32,115,121,109,57,56,52,41,0,0,0,0,0};
static C_char C_TLS li83[] C_aligned={C_lihdr(0,0,25),40,103,108,111,98,97,108,45,115,101,116,33,32,115,121,109,57,56,55,32,120,57,56,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li84[] C_aligned={C_lihdr(0,0,22),40,103,108,111,98,97,108,45,98,111,117,110,100,63,32,115,121,109,57,57,49,41,0,0};
static C_char C_TLS li85[] C_aligned={C_lihdr(0,0,29),40,103,108,111,98,97,108,45,109,97,107,101,45,117,110,98,111,117,110,100,33,32,115,121,109,57,57,52,41,0,0,0};
static C_char C_TLS li86[] C_aligned={C_lihdr(0,0,17),40,97,51,50,51,56,32,120,55,50,57,32,105,55,51,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li87[] C_aligned={C_lihdr(0,0,15),40,97,51,50,54,50,32,97,54,50,52,54,50,56,41,0};
static C_char C_TLS li88[] C_aligned={C_lihdr(0,0,15),40,97,51,50,55,50,32,97,54,49,55,54,50,49,41,0};
static C_char C_TLS li89[] C_aligned={C_lihdr(0,0,15),40,97,51,50,56,50,32,97,54,49,48,54,49,52,41,0};
static C_char C_TLS li90[] C_aligned={C_lihdr(0,0,15),40,97,51,50,57,50,32,97,54,48,51,54,48,55,41,0};
static C_char C_TLS li91[] C_aligned={C_lihdr(0,0,15),40,97,51,51,48,50,32,97,53,57,55,54,48,49,41,0};
static C_char C_TLS li92[] C_aligned={C_lihdr(0,0,15),40,97,51,51,49,50,32,97,53,57,49,53,57,53,41,0};
static C_char C_TLS li93[] C_aligned={C_lihdr(0,0,15),40,97,51,51,50,50,32,97,53,56,53,53,56,57,41,0};
static C_char C_TLS li94[] C_aligned={C_lihdr(0,0,15),40,97,51,51,51,50,32,97,53,55,57,53,56,51,41,0};
static C_char C_TLS li95[] C_aligned={C_lihdr(0,0,14),67,95,108,111,99,97,116,105,118,101,95,114,101,102,0,0};
static C_char C_TLS li96[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k2942 */
static C_word C_fcall stub864(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub864(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k2689 */
static C_word C_fcall stub754(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub754(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_flonum(&C_a,(x))); goto C_ret; C_cblockend
static C_word C_fcall stub625(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub625(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((double *)p));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_flonum(&C_a,(x))); goto C_ret; C_cblockend
static C_word C_fcall stub618(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub618(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((float *)p));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_int_to_num(&C_a,(x))); goto C_ret; C_cblockend
static C_word C_fcall stub611(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub611(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((C_s32 *)p));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_int_to_num(&C_a,(x))); goto C_ret; C_cblockend
static C_word C_fcall stub604(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub604(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((C_u32 *)p));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub598(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub598(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((short *)p));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub592(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub592(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((unsigned short *)p));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub586(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub586(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((signed char *)p));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub580(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub580(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
return(*((unsigned char *)p));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub573(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub573(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
float n=(float )C_c_double(C_a1);
*((double *)p) = n;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub565(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub565(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
double n=(double )C_c_double(C_a1);
*((float *)p) = n;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub557(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub557(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((C_s32 *)p) = n;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub549(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub549(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((C_u32 *)p) = n;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub541(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub541(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((short *)p) = n;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub533(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub533(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((unsigned short *)p) = n;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub525(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub525(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((char *)p) = n;
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub517(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub517(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * p=(void * )C_c_pointer_or_null(C_a0);
int n=(int )C_unfix(C_a1);
*((unsigned char *)p) = n;
C_ret:
#undef return

return C_r;}

/* from k1916 */
static C_word C_fcall stub430(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub430(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_int_to_num(&C_a,C_align(t0));
return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub421(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub421(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * ptr=(void * )C_c_pointer_or_null(C_a0);
int off=(int )C_num_to_int(C_a1);
return((unsigned char *)ptr + off);
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub407(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub407(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word x=(C_word )(C_a0);
return((void *)x);
C_ret:
#undef return

return C_r;}

/* from k1814 */
static C_word C_fcall stub374(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub374(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_free(t0);
return C_r;}

/* from k1807 */
static C_word C_fcall stub369(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub369(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_malloc(t0));
return C_r;}

/* from k1346 */
static C_word C_fcall stub149(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub149(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1318 */
static C_word C_fcall stub133(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub133(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1290 */
static C_word C_fcall stub117(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub117(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

/* from k1262 */
static C_word C_fcall stub101(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4) C_regparm;
C_regparm static C_word C_fcall stub101(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
C_memmove_o(t0,t1,t2,t3,t4);
return C_r;}

C_noret_decl(C_lolevel_toplevel)
C_externexport void C_ccall C_lolevel_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1080)
static void C_ccall f_1080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1083)
static void C_ccall f_1083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2106)
static void C_ccall f_2106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3333)
static void C_ccall f_3333(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3323)
static void C_ccall f_3323(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2235)
static void C_ccall f_2235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3293)
static void C_ccall f_3293(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2247)
static void C_ccall f_2247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3283)
static void C_ccall f_3283(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2251)
static void C_ccall f_2251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2255)
static void C_ccall f_2255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3263)
static void C_ccall f_3263(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2393)
static void C_ccall f_2393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3243)
static void C_ccall f_3243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2532)
static void C_ccall f_2532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3226)
static void C_ccall f_3226(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3217)
static void C_ccall f_3217(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3208)
static void C_ccall f_3208(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3202)
static void C_ccall f_3202(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3178)
static void C_ccall f_3178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3185)
static void C_ccall f_3185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3200)
static void C_ccall f_3200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3188)
static void C_ccall f_3188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3162)
static void C_ccall f_3162(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1113)
static void C_fcall f_1113(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1135)
static void C_ccall f_1135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1138)
static void C_ccall f_1138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3166)
static void C_ccall f_3166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3033)
static void C_ccall f_3033r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3037)
static void C_ccall f_3037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3040)
static void C_ccall f_3040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3045)
static void C_fcall f_3045(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3104)
static void C_ccall f_3104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3116)
static void C_fcall f_3116(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3137)
static void C_ccall f_3137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3110)
static void C_ccall f_3110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3093)
static void C_ccall f_3093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3074)
static void C_ccall f_3074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3077)
static void C_ccall f_3077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2949)
static void C_ccall f_2949(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2953)
static void C_ccall f_2953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2958)
static void C_fcall f_2958(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2971)
static void C_ccall f_2971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3028)
static void C_ccall f_3028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2977)
static void C_fcall f_2977(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2990)
static void C_fcall f_2990(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2992)
static void C_fcall f_2992(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2983)
static void C_ccall f_2983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2866)
static void C_fcall f_2866(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2911)
static void C_fcall f_2911(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f3720)
static void C_ccall f3720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2895)
static void C_ccall f_2895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2902)
static void C_ccall f_2902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2939)
static void C_ccall f_2939(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2697)
static void C_ccall f_2697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2700)
static void C_fcall f_2700(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2714)
static void C_fcall f_2714(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2724)
static void C_ccall f_2724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2839)
static void C_ccall f_2839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2733)
static void C_fcall f_2733(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2736)
static void C_ccall f_2736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2739)
static void C_fcall f_2739(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2796)
static void C_ccall f_2796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2742)
static void C_ccall f_2742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2745)
static void C_ccall f_2745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2755)
static void C_fcall f_2755(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2757)
static void C_fcall f_2757(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2778)
static void C_ccall f_2778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2748)
static void C_ccall f_2748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2709)
static void C_ccall f_2709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2582)
static void C_ccall f_2582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2590)
static void C_fcall f_2590(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2613)
static void C_ccall f_2613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2616)
static void C_fcall f_2616(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2619)
static void C_ccall f_2619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2629)
static void C_fcall f_2629(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2631)
static void C_fcall f_2631(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2686)
static void C_ccall f_2686(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2534)
static void C_ccall f_2534(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2549)
static C_word C_fcall f_2549(C_word t0,C_word t1);
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2510)
static void C_ccall f_2510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2497)
static void C_ccall f_2497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2484)
static void C_ccall f_2484(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2488)
static void C_ccall f_2488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2450)
static void C_fcall f_2450(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2426)
static void C_ccall f_2426(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2426)
static void C_ccall f_2426r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2404)
static void C_ccall f_2404(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2395)
static void C_ccall f_2395(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1204)
static void C_fcall f_1204(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2399)
static void C_ccall f_2399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2350)
static void C_ccall f_2350(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2265)
static void C_ccall f_2265(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2269)
static void C_ccall f_2269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2290)
static void C_ccall f_2290(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2274)
static void C_ccall f_2274(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2215)
static void C_ccall f_2215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2201)
static void C_ccall f_2201(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2187)
static void C_ccall f_2187(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2173)
static void C_ccall f_2173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2145)
static void C_ccall f_2145(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2131)
static void C_ccall f_2131(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2108)
static void C_ccall f_2108(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2101)
static void C_ccall f_2101(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2072)
static void C_ccall f_2072(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2072)
static void C_ccall f_2072r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2080)
static void C_ccall f_2080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2043)
static void C_ccall f_2043(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2043)
static void C_ccall f_2043r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2051)
static void C_ccall f_2051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2032)
static void C_fcall f_2032(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1980)
static void C_ccall f_1980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1960)
static void C_ccall f_1960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1971)
static void C_fcall f_1971(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1963)
static void C_ccall f_1963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1919)
static void C_ccall f_1919(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1940)
static void C_fcall f_1940(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1951)
static void C_ccall f_1951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1889)
static void C_ccall f_1889(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1893)
static void C_ccall f_1893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1896)
static void C_ccall f_1896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1872)
static void C_ccall f_1872(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1859)
static void C_ccall f_1859(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1863)
static void C_ccall f_1863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1849)
static void C_ccall f_1849(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1853)
static void C_ccall f_1853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1840)
static void C_ccall f_1840(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1844)
static void C_ccall f_1844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1804)
static void C_ccall f_1804(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1723)
static void C_ccall f_1723(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1729)
static void C_fcall f_1729(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1774)
static void C_fcall f_1774(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1795)
static void C_ccall f_1795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1762)
static void C_ccall f_1762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1360)
static void C_ccall f_1360(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1360)
static void C_ccall f_1360r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1660)
static void C_fcall f_1660(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1655)
static void C_fcall f_1655(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1650)
static void C_fcall f_1650(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1362)
static void C_fcall f_1362(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1420)
static void C_ccall f_1420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1423)
static void C_ccall f_1423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1426)
static void C_ccall f_1426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1429)
static void C_ccall f_1429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1434)
static void C_fcall f_1434(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1503)
static void C_fcall f_1503(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1568)
static void C_ccall f_1568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1590)
static void C_fcall f_1590(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1597)
static void C_ccall f_1597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1519)
static void C_fcall f_1519(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1535)
static void C_ccall f_1535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1549)
static void C_ccall f_1549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1545)
static void C_ccall f_1545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1393)
static void C_fcall f_1393(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_1400)
static void C_fcall f_1400(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1377)
static void C_fcall f_1377(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1371)
static void C_fcall f_1371(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1365)
static void C_fcall f_1365(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1158)
static void C_fcall f_1158(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1170)
static void C_fcall f_1170(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1085)
static void C_fcall f_1085(C_word t0,C_word t1,C_word t2) C_noret;

C_noret_decl(trf_1113)
static void C_fcall trf_1113(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1113(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1113(t0,t1,t2);}

C_noret_decl(trf_3045)
static void C_fcall trf_3045(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3045(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3045(t0,t1,t2);}

C_noret_decl(trf_3116)
static void C_fcall trf_3116(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3116(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3116(t0,t1,t2);}

C_noret_decl(trf_2958)
static void C_fcall trf_2958(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2958(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2958(t0,t1,t2);}

C_noret_decl(trf_2977)
static void C_fcall trf_2977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2977(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2977(t0,t1);}

C_noret_decl(trf_2990)
static void C_fcall trf_2990(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2990(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2990(t0,t1);}

C_noret_decl(trf_2992)
static void C_fcall trf_2992(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2992(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2992(t0,t1,t2);}

C_noret_decl(trf_2866)
static void C_fcall trf_2866(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2866(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2866(t0,t1,t2);}

C_noret_decl(trf_2911)
static void C_fcall trf_2911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2911(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2911(t0,t1,t2);}

C_noret_decl(trf_2700)
static void C_fcall trf_2700(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2700(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2700(t0,t1);}

C_noret_decl(trf_2714)
static void C_fcall trf_2714(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2714(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2714(t0,t1,t2);}

C_noret_decl(trf_2733)
static void C_fcall trf_2733(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2733(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2733(t0,t1);}

C_noret_decl(trf_2739)
static void C_fcall trf_2739(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2739(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2739(t0,t1);}

C_noret_decl(trf_2755)
static void C_fcall trf_2755(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2755(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2755(t0,t1);}

C_noret_decl(trf_2757)
static void C_fcall trf_2757(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2757(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2757(t0,t1,t2);}

C_noret_decl(trf_2590)
static void C_fcall trf_2590(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2590(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2590(t0,t1,t2);}

C_noret_decl(trf_2616)
static void C_fcall trf_2616(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2616(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2616(t0,t1);}

C_noret_decl(trf_2629)
static void C_fcall trf_2629(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2629(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2629(t0,t1);}

C_noret_decl(trf_2631)
static void C_fcall trf_2631(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2631(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2631(t0,t1,t2);}

C_noret_decl(trf_2450)
static void C_fcall trf_2450(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2450(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2450(t0,t1);}

C_noret_decl(trf_1204)
static void C_fcall trf_1204(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1204(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1204(t0,t1);}

C_noret_decl(trf_2032)
static void C_fcall trf_2032(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2032(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2032(t0,t1);}

C_noret_decl(trf_1971)
static void C_fcall trf_1971(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1971(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1971(t0,t1);}

C_noret_decl(trf_1940)
static void C_fcall trf_1940(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1940(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1940(t0,t1);}

C_noret_decl(trf_1729)
static void C_fcall trf_1729(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1729(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1729(t0,t1,t2);}

C_noret_decl(trf_1774)
static void C_fcall trf_1774(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1774(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1774(t0,t1,t2);}

C_noret_decl(trf_1660)
static void C_fcall trf_1660(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1660(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1660(t0,t1);}

C_noret_decl(trf_1655)
static void C_fcall trf_1655(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1655(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1655(t0,t1,t2);}

C_noret_decl(trf_1650)
static void C_fcall trf_1650(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1650(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1650(t0,t1,t2,t3);}

C_noret_decl(trf_1362)
static void C_fcall trf_1362(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1362(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1362(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1434)
static void C_fcall trf_1434(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1434(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1434(t0,t1,t2,t3);}

C_noret_decl(trf_1503)
static void C_fcall trf_1503(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1503(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1503(t0,t1);}

C_noret_decl(trf_1590)
static void C_fcall trf_1590(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1590(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1590(t0,t1);}

C_noret_decl(trf_1519)
static void C_fcall trf_1519(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1519(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1519(t0,t1);}

C_noret_decl(trf_1393)
static void C_fcall trf_1393(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1393(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_1393(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_1400)
static void C_fcall trf_1400(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1400(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1400(t0,t1);}

C_noret_decl(trf_1377)
static void C_fcall trf_1377(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1377(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1377(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1371)
static void C_fcall trf_1371(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1371(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1371(t0,t1,t2);}

C_noret_decl(trf_1365)
static void C_fcall trf_1365(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1365(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1365(t0,t1);}

C_noret_decl(trf_1158)
static void C_fcall trf_1158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1158(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1158(t0,t1,t2);}

C_noret_decl(trf_1170)
static void C_fcall trf_1170(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1170(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1170(t0,t1);}

C_noret_decl(trf_1085)
static void C_fcall trf_1085(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1085(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1085(t0,t1,t2);}

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
C_lolevel_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_lolevel_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("lolevel_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1247)){
C_save(t1);
C_rereclaim2(1247*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,131);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[3]=C_h_intern(&lf[3],14,"\003syserror-hook");
lf[5]=C_h_intern(&lf[5],15,"\003syssignal-hook");
lf[6]=C_h_intern(&lf[6],11,"\000type-error");
lf[7]=C_decode_literal(C_heaptop,"\376B\000\000#bad argument type - not a structure");
lf[8]=C_h_intern(&lf[8],17,"\003syscheck-pointer");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000!bad argument type - not a pointer");
lf[10]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\004mmap\376\003\000\000\002\376\001\000\000\010u8vector\376\003\000\000\002\376\001\000\000\011u16vector\376\003\000\000\002\376\001\000\000\011u32vector\376\003\000\000\002\376\001\000\000\010"
"s8vector\376\003\000\000\002\376\001\000\000\011s16vector\376\003\000\000\002\376\001\000\000\011s32vector\376\003\000\000\002\376\001\000\000\011f32vector\376\003\000\000\002\376\001\000\000\011f64ve"
"ctor\376\377\016");
lf[11]=C_h_intern(&lf[11],12,"move-memory!");
lf[12]=C_h_intern(&lf[12],9,"\003syserror");
lf[13]=C_decode_literal(C_heaptop,"\376B\000\000\034need number of bytes to move");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000!number of bytes to move too large");
lf[15]=C_h_intern(&lf[15],15,"\003sysbytevector\077");
lf[16]=C_decode_literal(C_heaptop,"\376B\000\000\033negative destination offset");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\026negative source offset");
lf[18]=C_h_intern(&lf[18],11,"object-copy");
lf[19]=C_h_intern(&lf[19],15,"\003sysmake-vector");
lf[20]=C_h_intern(&lf[20],8,"allocate");
lf[21]=C_h_intern(&lf[21],4,"free");
lf[22]=C_h_intern(&lf[22],8,"pointer\077");
lf[23]=C_h_intern(&lf[23],13,"pointer-like\077");
lf[24]=C_h_intern(&lf[24],16,"address->pointer");
lf[25]=C_h_intern(&lf[25],20,"\003sysaddress->pointer");
lf[26]=C_h_intern(&lf[26],17,"\003syscheck-integer");
lf[27]=C_h_intern(&lf[27],16,"pointer->address");
lf[28]=C_h_intern(&lf[28],20,"\003syspointer->address");
lf[29]=C_h_intern(&lf[29],17,"\003syscheck-special");
lf[30]=C_h_intern(&lf[30],12,"null-pointer");
lf[31]=C_h_intern(&lf[31],16,"\003sysnull-pointer");
lf[32]=C_h_intern(&lf[32],13,"null-pointer\077");
lf[33]=C_h_intern(&lf[33],15,"object->pointer");
lf[34]=C_h_intern(&lf[34],15,"pointer->object");
lf[35]=C_h_intern(&lf[35],9,"pointer=\077");
lf[36]=C_h_intern(&lf[36],8,"pointer+");
lf[37]=C_h_intern(&lf[37],14,"pointer-offset");
lf[38]=C_h_intern(&lf[38],13,"align-to-word");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000,bad argument type - not a pointer or integer");
lf[40]=C_h_intern(&lf[40],11,"tag-pointer");
lf[41]=C_h_intern(&lf[41],23,"\003sysmake-tagged-pointer");
lf[42]=C_h_intern(&lf[42],15,"tagged-pointer\077");
lf[43]=C_h_intern(&lf[43],11,"pointer-tag");
lf[44]=C_h_intern(&lf[44],13,"make-locative");
lf[45]=C_h_intern(&lf[45],17,"\003sysmake-locative");
lf[46]=C_h_intern(&lf[46],18,"make-weak-locative");
lf[47]=C_h_intern(&lf[47],13,"locative-set!");
lf[48]=C_h_intern(&lf[48],12,"locative-ref");
lf[49]=C_h_intern(&lf[49],16,"locative->object");
lf[50]=C_h_intern(&lf[50],9,"locative\077");
lf[51]=C_h_intern(&lf[51],15,"pointer-u8-set!");
lf[52]=C_h_intern(&lf[52],15,"pointer-s8-set!");
lf[53]=C_h_intern(&lf[53],16,"pointer-u16-set!");
lf[54]=C_h_intern(&lf[54],16,"pointer-s16-set!");
lf[55]=C_h_intern(&lf[55],16,"pointer-u32-set!");
lf[56]=C_h_intern(&lf[56],16,"pointer-s32-set!");
lf[57]=C_h_intern(&lf[57],16,"pointer-f32-set!");
lf[58]=C_h_intern(&lf[58],16,"pointer-f64-set!");
lf[59]=C_h_intern(&lf[59],14,"pointer-u8-ref");
lf[60]=C_h_intern(&lf[60],14,"pointer-s8-ref");
lf[61]=C_h_intern(&lf[61],15,"pointer-u16-ref");
lf[62]=C_h_intern(&lf[62],15,"pointer-s16-ref");
lf[63]=C_h_intern(&lf[63],15,"pointer-u32-ref");
lf[64]=C_h_intern(&lf[64],15,"pointer-s32-ref");
lf[65]=C_h_intern(&lf[65],15,"pointer-f32-ref");
lf[66]=C_h_intern(&lf[66],15,"pointer-f64-ref");
lf[67]=C_h_intern(&lf[67],8,"extended");
lf[69]=C_h_intern(&lf[69],16,"extend-procedure");
lf[70]=C_h_intern(&lf[70],19,"\003sysdecorate-lambda");
lf[71]=C_h_intern(&lf[71],17,"\003syscheck-closure");
lf[72]=C_h_intern(&lf[72],19,"extended-procedure\077");
lf[73]=C_h_intern(&lf[73],21,"\003syslambda-decoration");
lf[74]=C_h_intern(&lf[74],14,"procedure-data");
lf[75]=C_h_intern(&lf[75],19,"set-procedure-data!");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000-bad argument type - not an extended procedure");
lf[77]=C_h_intern(&lf[77],10,"block-set!");
lf[78]=C_h_intern(&lf[78],14,"\003sysblock-set!");
lf[79]=C_h_intern(&lf[79],9,"block-ref");
lf[80]=C_h_intern(&lf[80],15,"number-of-slots");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000,bad argument type - not a vector-like object");
lf[82]=C_h_intern(&lf[82],15,"number-of-bytes");
lf[83]=C_decode_literal(C_heaptop,"\376B\000\0002cannot compute number of bytes of immediate object");
lf[84]=C_h_intern(&lf[84],20,"make-record-instance");
lf[85]=C_h_intern(&lf[85],18,"\003sysmake-structure");
lf[86]=C_h_intern(&lf[86],16,"record-instance\077");
lf[87]=C_h_intern(&lf[87],20,"record-instance-type");
lf[88]=C_h_intern(&lf[88],22,"record-instance-length");
lf[89]=C_h_intern(&lf[89],25,"record-instance-slot-set!");
lf[90]=C_h_intern(&lf[90],15,"\003syscheck-range");
lf[91]=C_h_intern(&lf[91],20,"record-instance-slot");
lf[92]=C_h_intern(&lf[92],14,"record->vector");
lf[93]=C_h_intern(&lf[93],15,"object-evicted\077");
lf[94]=C_h_intern(&lf[94],12,"object-evict");
lf[95]=C_h_intern(&lf[95],15,"hash-table-set!");
lf[96]=C_h_intern(&lf[96],19,"\003sysundefined-value");
lf[97]=C_h_intern(&lf[97],22,"hash-table-ref/default");
lf[98]=C_h_intern(&lf[98],15,"make-hash-table");
lf[99]=C_h_intern(&lf[99],3,"eq\077");
lf[100]=C_h_intern(&lf[100],24,"object-evict-to-location");
lf[101]=C_h_intern(&lf[101],24,"\003sysset-pointer-address!");
lf[102]=C_h_intern(&lf[102],6,"signal");
lf[103]=C_h_intern(&lf[103],24,"make-composite-condition");
lf[104]=C_h_intern(&lf[104],23,"make-property-condition");
lf[105]=C_h_intern(&lf[105],5,"evict");
lf[106]=C_h_intern(&lf[106],5,"limit");
lf[107]=C_h_intern(&lf[107],3,"exn");
lf[108]=C_h_intern(&lf[108],8,"location");
lf[109]=C_h_intern(&lf[109],7,"message");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000$cannot evict object - limit exceeded");
lf[111]=C_h_intern(&lf[111],9,"arguments");
lf[112]=C_h_intern(&lf[112],14,"object-release");
lf[113]=C_h_intern(&lf[113],11,"object-size");
lf[114]=C_h_intern(&lf[114],14,"object-unevict");
lf[115]=C_h_intern(&lf[115],15,"\003sysmake-string");
lf[116]=C_h_intern(&lf[116],14,"object-become!");
lf[117]=C_h_intern(&lf[117],11,"\003sysbecome!");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000:bad argument type - not an a-list of non-immediate objects");
lf[119]=C_h_intern(&lf[119],16,"mutate-procedure");
lf[120]=C_h_intern(&lf[120],10,"global-ref");
lf[121]=C_h_intern(&lf[121],11,"global-set!");
lf[122]=C_h_intern(&lf[122],13,"global-bound\077");
lf[123]=C_h_intern(&lf[123],32,"\003syssymbol-has-toplevel-binding\077");
lf[124]=C_h_intern(&lf[124],20,"global-make-unbound!");
lf[125]=C_h_intern(&lf[125],28,"\003sysarbitrary-unbound-symbol");
lf[126]=C_h_intern(&lf[126],18,"getter-with-setter");
lf[127]=C_h_intern(&lf[127],13,"\003sysblock-ref");
lf[128]=C_h_intern(&lf[128],15,"pointer-s6-set!");
lf[129]=C_h_intern(&lf[129],17,"register-feature!");
lf[130]=C_h_intern(&lf[130],7,"lolevel");
C_register_lf2(lf,131,create_ptable());
t2=C_mutate(&lf[0] /* (set! c337 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1080,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_srfi_69_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k1078 */
static void C_ccall f_1080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1080,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1083,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 75   register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[129]+1)))(3,*((C_word*)lf[129]+1),t2,lf[130]);}

/* k1081 in k1078 */
static void C_ccall f_1083(C_word c,C_word t0,C_word t1){
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
C_word ab[76],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1083,2,t0,t1);}
t2=C_mutate(&lf[2] /* (set! check-block ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1085,a[2]=((C_word)li0),tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[4] /* (set! check-generic-structure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1158,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[8]+1 /* (set! check-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1219,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t5=lf[10];
t6=C_mutate((C_word*)lf[11]+1 /* (set! move-memory! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1360,a[2]=t5,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[18]+1 /* (set! object-copy ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1723,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[20]+1 /* (set! allocate ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1804,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[21]+1 /* (set! free ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1811,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[22]+1 /* (set! pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1821,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[23]+1 /* (set! pointer-like? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1829,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[24]+1 /* (set! address->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1840,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[27]+1 /* (set! pointer->address ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1849,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[30]+1 /* (set! null-pointer ...) */,*((C_word*)lf[31]+1));
t15=C_mutate((C_word*)lf[32]+1 /* (set! null-pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1859,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[33]+1 /* (set! object->pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1872,a[2]=((C_word)li23),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[34]+1 /* (set! pointer->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1883,a[2]=((C_word)li24),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[35]+1 /* (set! pointer=? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1889,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[36]+1 /* (set! pointer+ ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1898,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[37]+1 /* (set! pointer-offset ...) */,*((C_word*)lf[36]+1));
t21=C_mutate((C_word*)lf[38]+1 /* (set! align-to-word ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1919,a[2]=((C_word)li27),tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[40]+1 /* (set! tag-pointer ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1956,a[2]=((C_word)li28),tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[42]+1 /* (set! tagged-pointer? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1976,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[43]+1 /* (set! pointer-tag ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2020,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[44]+1 /* (set! make-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2043,a[2]=((C_word)li31),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[46]+1 /* (set! make-weak-locative ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2072,a[2]=((C_word)li32),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[47]+1 /* (set! locative-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2101,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t28=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2106,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t29=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)C_locative_ref,a[2]=((C_word)li95),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 353  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[126]+1)))(4,*((C_word*)lf[126]+1),t28,t29,*((C_word*)lf[47]+1));}

/* k2104 in k1081 in k1078 */
static void C_ccall f_2106(C_word c,C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2106,2,t0,t1);}
t2=C_mutate((C_word*)lf[48]+1 /* (set! locative-ref ...) */,t1);
t3=C_mutate((C_word*)lf[49]+1 /* (set! locative->object ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2108,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[50]+1 /* (set! locative? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2111,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[51]+1 /* (set! pointer-u8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2117,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[52]+1 /* (set! pointer-s8-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2131,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[53]+1 /* (set! pointer-u16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2145,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[54]+1 /* (set! pointer-s16-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2159,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[55]+1 /* (set! pointer-u32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2173,a[2]=((C_word)li40),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[56]+1 /* (set! pointer-s32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2187,a[2]=((C_word)li41),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[57]+1 /* (set! pointer-f32-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2201,a[2]=((C_word)li42),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[58]+1 /* (set! pointer-f64-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2215,a[2]=((C_word)li43),tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2231,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3333,a[2]=((C_word)li94),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 370  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[126]+1)))(4,*((C_word*)lf[126]+1),t13,t14,*((C_word*)lf[51]+1));}

/* a3332 in k2104 in k1081 in k1078 */
static void C_ccall f_3333(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3333,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub580(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub580(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2231,2,t0,t1);}
t2=C_mutate((C_word*)lf[59]+1 /* (set! pointer-u8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2235,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3323,a[2]=((C_word)li93),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 375  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[126]+1)))(4,*((C_word*)lf[126]+1),t3,t4,*((C_word*)lf[52]+1));}

/* a3322 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3323(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3323,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub586(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub586(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2235,2,t0,t1);}
t2=C_mutate((C_word*)lf[60]+1 /* (set! pointer-s8-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2239,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3313,a[2]=((C_word)li92),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 380  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[126]+1)))(4,*((C_word*)lf[126]+1),t3,t4,*((C_word*)lf[53]+1));}

/* a3312 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3313(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3313,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub592(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub592(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2239,2,t0,t1);}
t2=C_mutate((C_word*)lf[61]+1 /* (set! pointer-u16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2243,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3303,a[2]=((C_word)li91),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 385  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[126]+1)))(4,*((C_word*)lf[126]+1),t3,t4,*((C_word*)lf[128]+1));}

/* a3302 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3303(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3303,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub598(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub598(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2243,2,t0,t1);}
t2=C_mutate((C_word*)lf[62]+1 /* (set! pointer-s16-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2247,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3293,a[2]=((C_word)li90),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 390  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[126]+1)))(4,*((C_word*)lf[126]+1),t3,t4,*((C_word*)lf[55]+1));}

/* a3292 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3293(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3293,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(4));
if(C_truep(t2)){
t4=C_i_foreign_pointer_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub604(t3,t4));}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub604(t3,C_SCHEME_FALSE));}}

/* k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2247,2,t0,t1);}
t2=C_mutate((C_word*)lf[63]+1 /* (set! pointer-u32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2251,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3283,a[2]=((C_word)li89),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 395  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[126]+1)))(4,*((C_word*)lf[126]+1),t3,t4,*((C_word*)lf[56]+1));}

/* a3282 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3283(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3283,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(4));
if(C_truep(t2)){
t4=C_i_foreign_pointer_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub611(t3,t4));}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub611(t3,C_SCHEME_FALSE));}}

/* k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2251,2,t0,t1);}
t2=C_mutate((C_word*)lf[64]+1 /* (set! pointer-s32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2255,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3273,a[2]=((C_word)li88),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 400  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[126]+1)))(4,*((C_word*)lf[126]+1),t3,t4,*((C_word*)lf[57]+1));}

/* a3272 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3273(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3273,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(4));
if(C_truep(t2)){
t4=C_i_foreign_pointer_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub618(t3,t4));}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub618(t3,C_SCHEME_FALSE));}}

/* k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2255,2,t0,t1);}
t2=C_mutate((C_word*)lf[65]+1 /* (set! pointer-f32-ref ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2259,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3263,a[2]=((C_word)li87),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 405  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[126]+1)))(4,*((C_word*)lf[126]+1),t3,t4,*((C_word*)lf[58]+1));}

/* a3262 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3263(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3263,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(4));
if(C_truep(t2)){
t4=C_i_foreign_pointer_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub625(t3,t4));}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub625(t3,C_SCHEME_FALSE));}}

/* k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2259(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2259,2,t0,t1);}
t2=C_mutate((C_word*)lf[66]+1 /* (set! pointer-f64-ref ...) */,t1);
t3=C_a_i_vector(&a,1,lf[67]);
t4=C_mutate(&lf[68] /* (set! xproc-tag ...) */,t3);
t5=C_mutate((C_word*)lf[69]+1 /* (set! extend-procedure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2265,a[2]=((C_word)li46),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[72]+1 /* (set! extended-procedure? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2300,a[2]=((C_word)li48),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[74]+1 /* (set! procedure-data ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2336,a[2]=((C_word)li50),tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[69]+1);
t9=C_mutate((C_word*)lf[75]+1 /* (set! set-procedure-data! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2375,a[2]=t8,a[3]=((C_word)li51),tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[77]+1 /* (set! block-set! ...) */,*((C_word*)lf[78]+1));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2393,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 449  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[126]+1)))(4,*((C_word*)lf[126]+1),t11,*((C_word*)lf[127]+1),*((C_word*)lf[78]+1));}

/* k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2393(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2393,2,t0,t1);}
t2=C_mutate((C_word*)lf[79]+1 /* (set! block-ref ...) */,t1);
t3=C_mutate((C_word*)lf[80]+1 /* (set! number-of-slots ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2395,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[82]+1 /* (set! number-of-bytes ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2404,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[84]+1 /* (set! make-record-instance ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2426,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[86]+1 /* (set! record-instance? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2435,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[87]+1 /* (set! record-instance-type ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2484,a[2]=((C_word)li56),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[88]+1 /* (set! record-instance-length ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2493,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[89]+1 /* (set! record-instance-slot-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2506,a[2]=((C_word)li58),tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2532,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3239,a[2]=((C_word)li86),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 496  getter-with-setter */
((C_proc4)C_retrieve_proc(*((C_word*)lf[126]+1)))(4,*((C_word*)lf[126]+1),t10,t11,*((C_word*)lf[89]+1));}

/* a3238 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3239,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3243,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 498  ##sys#check-generic-structure */
f_1158(t4,t2,C_a_i_list(&a,1,lf[91]));}

/* k3241 in a3238 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3243,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3246,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[2]);
t4=C_fixnum_difference(t3,C_fix(1));
/* lolevel.scm: 499  ##sys#check-range */
((C_proc6)C_retrieve_proc(*((C_word*)lf[90]+1)))(6,*((C_word*)lf[90]+1),t2,((C_word*)t0)[4],C_fix(0),t4,lf[91]);}

/* k3244 in k3241 in a3238 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(((C_word*)t0)[2],t2));}

/* k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2532(C_word c,C_word t0,C_word t1){
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
C_word ab[39],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2532,2,t0,t1);}
t2=C_mutate((C_word*)lf[91]+1 /* (set! record-instance-slot ...) */,t1);
t3=C_mutate((C_word*)lf[92]+1 /* (set! record->vector ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2534,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[93]+1 /* (set! object-evicted? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2572,a[2]=((C_word)li61),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[94]+1 /* (set! object-evict ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2575,a[2]=((C_word)li65),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[100]+1 /* (set! object-evict-to-location ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2693,a[2]=((C_word)li68),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[112]+1 /* (set! object-release ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2857,a[2]=((C_word)li72),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[113]+1 /* (set! object-size ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2949,a[2]=((C_word)li75),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[114]+1 /* (set! object-unevict ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3033,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[116]+1 /* (set! object-become! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3162,a[2]=((C_word)li80),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[119]+1 /* (set! mutate-procedure ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3171,a[2]=((C_word)li81),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[120]+1 /* (set! global-ref ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3202,a[2]=((C_word)li82),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[121]+1 /* (set! global-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3208,a[2]=((C_word)li83),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[122]+1 /* (set! global-bound? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3217,a[2]=((C_word)li84),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[124]+1 /* (set! global-make-unbound! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3226,a[2]=((C_word)li85),tmp=(C_word)a,a+=3,tmp));
t16=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_UNDEFINED);}

/* global-make-unbound! in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3226(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3226,3,t0,t1,t2);}
t3=C_i_check_symbol_2(t2,lf[124]);
t4=C_slot(lf[125],C_fix(0));
t5=C_i_setslot(t2,C_fix(0),t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}

/* global-bound? in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3217(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3217,3,t0,t1,t2);}
t3=C_i_check_symbol_2(t2,lf[122]);
/* lolevel.scm: 667  ##sys#symbol-has-toplevel-binding? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[123]+1)))(3,*((C_word*)lf[123]+1),t1,t2);}

/* global-set! in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3208(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3208,4,t0,t1,t2,t3);}
t4=C_i_check_symbol_2(t2,lf[121]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(0),t3));}

/* global-ref in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3202(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3202,3,t0,t1,t2);}
t3=C_i_check_symbol_2(t2,lf[120]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_retrieve(t2));}

/* mutate-procedure in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3171,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3175,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 646  ##sys#check-closure */
t5=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[119]);}

/* k3173 in mutate-procedure in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3175,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 647  ##sys#check-closure */
t3=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],lf[119]);}

/* k3176 in k3173 in mutate-procedure in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3178,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[4]);
t3=C_words(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 650  ##sys#make-vector */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k3183 in k3176 in k3173 in mutate-procedure in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3185,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[4],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3188,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3200,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 651  proc */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k3198 in k3183 in k3176 in k3173 in mutate-procedure in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3200,2,t0,t1);}
t2=C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=C_a_i_list(&a,1,t2);
/* lolevel.scm: 651  ##sys#become! */
t4=*((C_word*)lf[117]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],t3);}

/* k3186 in k3183 in k3176 in k3173 in mutate-procedure in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* object-become! in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3162(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_3162,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3166,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_i_check_list_2(t4,lf[116]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1113,a[2]=t4,a[3]=t7,a[4]=((C_word)li79),tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1113(t9,t3,t4);}

/* loop in object-become! in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_1113(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1113,NULL,3,t0,t1,t2);}
t3=C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=C_i_check_pair_2(t4,lf[116]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1135,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_i_car(t4);
/* lolevel.scm: 116  ##sys#check-block */
f_1085(t6,t7,C_a_i_list(&a,1,lf[116]));}
else{
/* lolevel.scm: 120  ##sys#signal-hook */
t4=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[6],lf[116],lf[118],((C_word*)t0)[2]);}}}

/* k1133 in loop in object-become! in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_1135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1135,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1138,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_i_cdr(((C_word*)t0)[2]);
/* lolevel.scm: 117  ##sys#check-block */
f_1085(t2,t3,C_a_i_list(&a,1,lf[116]));}

/* k1136 in k1133 in loop in object-become! in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_1138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[4]);
/* lolevel.scm: 118  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1113(t3,((C_word*)t0)[2],t2);}

/* k3164 in object-become! in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 643  ##sys#become! */
t2=*((C_word*)lf[117]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* object-unevict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3033(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_3033r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3033r(t0,t1,t2,t3);}}

static void C_ccall f_3033r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3037,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_3037(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_3037(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k3035 in object-unevict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3037,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3040,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 614  make-hash-table */
t3=*((C_word*)lf[98]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[99]+1));}

/* k3038 in k3035 in object-unevict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3040,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3045,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li77),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_3045(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* copy in k3038 in k3035 in object-unevict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_3045(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3045,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_permanentp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 618  hash-table-ref/default */
t4=*((C_word*)lf[97]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3059 in copy in k3038 in k3035 in object-unevict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3061(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3061,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_byteblockp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3074,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_block_size(((C_word*)t0)[5]);
/* lolevel.scm: 621  ##sys#make-string */
t4=*((C_word*)lf[115]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3090,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=C_slot(((C_word*)t0)[5],C_fix(1));
/* lolevel.scm: 626  ##sys#intern-symbol */
C_string_to_symbol(3,0,t2,t3);}
else{
t2=C_block_size(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3104,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 631  ##sys#make-vector */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}}}}

/* k3102 in k3059 in copy in k3038 in k3035 in object-unevict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3104,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3107,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 632  hash-table-set! */
t4=*((C_word*)lf[95]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],((C_word*)t0)[6],t2);}

/* k3105 in k3102 in k3059 in copy in k3038 in k3035 in object-unevict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3107,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3110,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_truep(C_specialp(((C_word*)t0)[4]))?C_fix(1):C_fix(0));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3116,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word)li76),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_3116(t7,t2,t3);}

/* doloop956 in k3105 in k3102 in k3059 in copy in k3038 in k3035 in object-unevict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_3116(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3116,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3137,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
/* lolevel.scm: 635  copy */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3045(t5,t3,t4);}}

/* k3135 in doloop956 in k3105 in k3102 in k3059 in copy in k3038 in k3035 in object-unevict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3116(t4,((C_word*)t0)[2],t3);}

/* k3108 in k3105 in k3102 in k3059 in copy in k3038 in k3035 in object-unevict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k3088 in k3059 in copy in k3038 in k3035 in object-unevict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3090,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3093,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 627  hash-table-set! */
t3=*((C_word*)lf[95]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3091 in k3088 in k3059 in copy in k3038 in k3035 in object-unevict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3072 in k3059 in copy in k3038 in k3035 in object-unevict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3074,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[4],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3077,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 622  hash-table-set! */
t4=*((C_word*)lf[95]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],((C_word*)t0)[4],t2);}

/* k3075 in k3072 in k3059 in copy in k3038 in k3035 in object-unevict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* object-size in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2949(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2949,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2953,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 597  make-hash-table */
t4=*((C_word*)lf[98]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[99]+1));}

/* k2951 in object-size in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2953,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2958,a[2]=t1,a[3]=t3,a[4]=((C_word)li74),tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2958(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* evict in k2951 in object-size in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2958(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2958,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 600  hash-table-ref/default */
t4=*((C_word*)lf[97]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[2],t2,C_SCHEME_FALSE);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fix(0));}}

/* k2969 in evict in k2951 in object-size in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2971,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=C_block_size(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3028,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
/* lolevel.scm: 604  align-to-word */
((C_proc3)C_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t4,t2);}
else{
t5=C_bytes(t2);
t6=t3;
f_2977(t6,C_fixnum_plus(t5,C_bytes(C_fix(1))));}}}

/* k3026 in k2969 in evict in k2951 in object-size in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2977(t2,C_fixnum_plus(t1,C_bytes(C_fix(1))));}

/* k2975 in k2969 in evict in k2951 in object-size in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2977(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2977,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2980,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 606  hash-table-set! */
t5=*((C_word*)lf[95]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[2],((C_word*)t0)[5],C_SCHEME_TRUE);}

/* k2978 in k2975 in k2969 in evict in k2951 in object-size in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2983,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)((C_word*)t0)[5])[1]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2990,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t4=C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2990(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2990(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* k2988 in k2978 in k2975 in k2969 in evict in k2951 in object-size in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2990(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2990,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2992,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li73),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2992(t5,((C_word*)t0)[2],t1);}

/* doloop906 in k2988 in k2978 in k2975 in k2969 in evict in k2951 in object-size in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2992(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2992,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3014,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 610  evict */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2958(t5,t3,t4);}}

/* k3012 in doloop906 in k2988 in k2978 in k2975 in k2969 in evict in k2951 in object-size in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_3014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_fixnum_plus(t1,((C_word*)((C_word*)t0)[5])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,t2);
t4=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_2992(t5,((C_word*)t0)[2],t4);}

/* k2981 in k2978 in k2975 in k2969 in evict in k2951 in object-size in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* object-release in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2857(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_2857r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2857r(t0,t1,t2,t3);}}

static void C_ccall f_2857r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(13);
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_i_car(t3):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2939,a[2]=((C_word)li69),tmp=(C_word)a,a+=3,tmp));
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2866,a[2]=t9,a[3]=t5,a[4]=t7,a[5]=((C_word)li71),tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2866(t11,t1,t2);}

/* release in object-release in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2866(C_word t0,C_word t1,C_word t2){
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
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2866,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_permanentp(t2))){
if(C_truep(C_i_memq(t2,((C_word*)((C_word*)t0)[4])[1]))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_block_size(t2);
t4=C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[4])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[4])+1,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2895,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_byteblockp(t2))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f3720,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 594  ##sys#address->pointer */
t8=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,C_block_address(&a,1,t2));}
else{
t7=(C_truep(C_specialp(t2))?C_fix(1):C_fix(0));
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2911,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t9,a[5]=t3,a[6]=((C_word)li70),tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_2911(t11,t6,t7);}}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* doloop880 in release in object-release in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2911(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2911,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2921,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 593  release */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2866(t5,t3,t4);}}

/* k2919 in doloop880 in release in object-release in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2911(t3,((C_word*)t0)[2],t2);}

/* f3720 in release in object-release in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f3720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 594  free */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2893 in release in object-release in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2895,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2902,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 594  ##sys#address->pointer */
t3=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_block_address(&a,1,((C_word*)t0)[2]));}

/* k2900 in k2893 in release in object-release in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 594  free */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* f_2939 in object-release in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2939(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2939,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub864(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub864(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2693(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2693r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2693r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2693r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2697,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 541  ##sys#check-special */
t6=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t3,lf[100]);}

/* k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2697,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2700,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t3=C_i_car(((C_word*)t0)[2]);
t4=C_i_check_exact_2(t3,lf[100]);
t5=t2;
f_2700(t5,t3);}
else{
t3=t2;
f_2700(t3,C_SCHEME_FALSE);}}

/* k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2700(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2700,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2703,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2846,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 546  ##sys#pointer->address */
t6=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* k2844 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 546  ##sys#address->pointer */
t2=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2703,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 547  make-hash-table */
t3=*((C_word*)lf[98]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,*((C_word*)lf[99]+1));}

/* k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2706,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2709,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2714,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=((C_word)li67),tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2714(t6,t2,((C_word*)t0)[2]);}

/* evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2714(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2714,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2724,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* lolevel.scm: 551  hash-table-ref/default */
t4=*((C_word*)lf[97]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2722 in evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2724,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_block_size(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2839,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[6]))){
/* lolevel.scm: 555  align-to-word */
((C_proc3)C_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t4,t2);}
else{
t5=C_bytes(t2);
t6=t3;
f_2733(t6,C_fixnum_plus(t5,C_bytes(C_fix(1))));}}}

/* k2837 in k2722 in evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2733(t2,C_fixnum_plus(t1,C_bytes(C_fix(1))));}

/* k2731 in k2722 in evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2733(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2733,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2736,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=C_fixnum_difference(((C_word*)((C_word*)t0)[2])[1],t1);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
if(C_truep(C_fixnum_lessp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2823,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2827,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=C_a_i_list(&a,2,((C_word*)t0)[8],((C_word*)((C_word*)t0)[2])[1]);
/* lolevel.scm: 562  make-property-condition */
t8=*((C_word*)lf[104]+1);
((C_proc9)(void*)(*((C_word*)t8+1)))(9,t8,t6,lf[107],lf[108],lf[100],lf[109],lf[110],lf[111],t7);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t2;
f_2736(2,t6,t5);}}
else{
t3=t2;
f_2736(2,t3,C_SCHEME_UNDEFINED);}}

/* k2825 in k2731 in k2722 in evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2827,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2831,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 566  make-property-condition */
t3=*((C_word*)lf[104]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[105],lf[106],((C_word*)((C_word*)t0)[2])[1]);}

/* k2829 in k2825 in k2731 in k2722 in evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 561  make-composite-condition */
t2=*((C_word*)lf[103]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2821 in k2731 in k2722 in evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 560  signal */
t2=*((C_word*)lf[102]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2734 in k2731 in k2722 in evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2736,2,t0,t1);}
t2=C_evict_block(((C_word*)t0)[8],((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2739,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[8]))){
t4=*((C_word*)lf[96]+1);
t5=t3;
f_2739(t5,C_i_set_i_slot(t2,C_fix(0),t4));}
else{
t4=t3;
f_2739(t4,C_SCHEME_UNDEFINED);}}

/* k2737 in k2734 in k2731 in k2722 in evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2739(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2739,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2742,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2796,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 569  ##sys#pointer->address */
t4=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k2794 in k2737 in k2734 in k2731 in k2722 in evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2796,2,t0,t1);}
t2=C_a_i_plus(&a,2,t1,((C_word*)t0)[4]);
/* lolevel.scm: 569  ##sys#set-pointer-address! */
t3=*((C_word*)lf[101]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k2740 in k2737 in k2734 in k2731 in k2722 in evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2742,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2745,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 570  hash-table-set! */
t3=*((C_word*)lf[95]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2743 in k2740 in k2737 in k2734 in k2731 in k2722 in evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2745,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2748,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2755,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t4=C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2755(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2755(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* k2753 in k2743 in k2740 in k2737 in k2734 in k2731 in k2722 in evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2755(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2755,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2757,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li66),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2757(t5,((C_word*)t0)[2],t1);}

/* doloop839 in k2753 in k2743 in k2740 in k2737 in k2734 in k2731 in k2722 in evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2757(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2757,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2778,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 574  evict */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2714(t5,t3,t4);}}

/* k2776 in doloop839 in k2753 in k2743 in k2740 in k2737 in k2734 in k2731 in k2722 in evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_set_i_slot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2757(t4,((C_word*)t0)[2],t3);}

/* k2746 in k2743 in k2740 in k2737 in k2734 in k2731 in k2722 in evict in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2707 in k2704 in k2701 in k2698 in k2695 in object-evict-to-location in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 576  values */
C_values(4,0,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* object-evict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2575(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2575r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2575r(t0,t1,t2,t3);}}

static void C_ccall f_2575r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t4=C_i_pairp(t3);
t5=(C_truep(t4)?C_i_car(t3):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2686,a[2]=((C_word)li62),tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2582,a[2]=t2,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 522  make-hash-table */
t7=*((C_word*)lf[98]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,*((C_word*)lf[99]+1));}

/* k2580 in object-evict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2582,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 523  ##sys#check-closure */
t3=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[94]);}

/* k2583 in k2580 in object-evict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2585,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2590,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word)li64),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2590(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* evict in k2583 in k2580 in object-evict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2590(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2590,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2600,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 526  hash-table-ref/default */
t4=*((C_word*)lf[97]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[3],t2,C_SCHEME_FALSE);}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2598 in evict in k2583 in k2580 in object-evict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2600,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_block_size(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2609,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[5]))){
/* lolevel.scm: 529  align-to-word */
((C_proc3)C_retrieve_proc(*((C_word*)lf[38]+1)))(3,*((C_word*)lf[38]+1),t3,t2);}
else{
t4=t3;
f_2609(2,t4,C_bytes(t2));}}}

/* k2607 in k2598 in evict in k2583 in k2580 in object-evict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2609,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2613,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_fixnum_plus(t1,C_bytes(C_fix(1)));
/* lolevel.scm: 530  allocator */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* k2611 in k2607 in k2598 in evict in k2583 in k2580 in object-evict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2613,2,t0,t1);}
t2=C_evict_block(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[6]))){
t4=*((C_word*)lf[96]+1);
t5=t3;
f_2616(t5,C_i_set_i_slot(t2,C_fix(0),t4));}
else{
t4=t3;
f_2616(t4,C_SCHEME_UNDEFINED);}}

/* k2614 in k2611 in k2607 in k2598 in evict in k2583 in k2580 in object-evict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2616(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2616,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2619,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* lolevel.scm: 532  hash-table-set! */
t3=*((C_word*)lf[95]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[6]);}

/* k2617 in k2614 in k2611 in k2607 in k2598 in evict in k2583 in k2580 in object-evict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2622,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_byteblockp(((C_word*)t0)[4]))){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2629,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t4=C_specialp(((C_word*)t0)[4]);
if(C_truep(t4)){
t5=t3;
f_2629(t5,(C_truep(t4)?C_fix(1):C_fix(0)));}
else{
t5=C_i_symbolp(((C_word*)t0)[4]);
t6=t3;
f_2629(t6,(C_truep(t5)?C_fix(1):C_fix(0)));}}}

/* k2627 in k2617 in k2614 in k2611 in k2607 in k2598 in evict in k2583 in k2580 in object-evict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2629(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2629,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2631,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li63),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2631(t5,((C_word*)t0)[2],t1);}

/* doloop779 in k2627 in k2617 in k2614 in k2611 in k2607 in k2598 in evict in k2583 in k2580 in object-evict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2631(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2631,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2652,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[3],t2);
/* lolevel.scm: 537  evict */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2590(t5,t3,t4);}}

/* k2650 in doloop779 in k2627 in k2617 in k2614 in k2611 in k2607 in k2598 in evict in k2583 in k2580 in object-evict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_set_i_slot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2631(t4,((C_word*)t0)[2],t3);}

/* k2620 in k2617 in k2614 in k2611 in k2607 in k2598 in evict in k2583 in k2580 in object-evict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2686 in object-evict in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2686(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2686,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub754(t3,t4));}

/* object-evicted? in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2572(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2572,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_permanentp(t2));}

/* record->vector in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2534(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2534,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2538,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 504  ##sys#check-generic-structure */
f_1158(t3,t2,C_a_i_list(&a,1,lf[92]));}

/* k2536 in record->vector in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2538,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 506  ##sys#make-vector */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2542 in k2536 in record->vector in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2544,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2549,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word)li59),tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,f_2549(t2,C_fix(0)));}

/* doloop738 in k2542 in k2536 in record->vector in k2530 in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static C_word C_fcall f_2549(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
C_stack_check;
if(C_truep(C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[4]))){
t2=((C_word*)t0)[3];
return(t2);}
else{
t2=C_slot(((C_word*)t0)[2],t1);
t3=C_i_setslot(((C_word*)t0)[3],t1,t2);
t4=C_fixnum_plus(t1,C_fix(1));
t7=t4;
t1=t7;
goto loop;}}

/* record-instance-slot-set! in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2506,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2510,a[2]=t4,a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 491  ##sys#check-generic-structure */
f_1158(t5,t2,C_a_i_list(&a,1,lf[89]));}

/* k2508 in record-instance-slot-set! in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2510,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2513,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_block_size(((C_word*)t0)[3]);
t4=C_fixnum_difference(t3,C_fix(1));
/* lolevel.scm: 492  ##sys#check-range */
((C_proc6)C_retrieve_proc(*((C_word*)lf[90]+1)))(6,*((C_word*)lf[90]+1),t2,((C_word*)t0)[5],C_fix(0),t4,lf[89]);}

/* k2511 in k2508 in record-instance-slot-set! in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_setslot(((C_word*)t0)[3],t2,((C_word*)t0)[2]));}

/* record-instance-length in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2493(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2493,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2497,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 487  ##sys#check-generic-structure */
f_1158(t3,t2,C_a_i_list(&a,1,lf[88]));}

/* k2495 in record-instance-length in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_block_size(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_difference(t2,C_fix(1)));}

/* record-instance-type in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2484(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2484,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2488,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 483  ##sys#check-generic-structure */
f_1158(t3,t2,C_a_i_list(&a,1,lf[87]));}

/* k2486 in record-instance-type in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_slot(((C_word*)t0)[2],C_fix(0)));}

/* record-instance? in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2435(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2435r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2435r(t0,t1,t2,t3);}}

static void C_ccall f_2435r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2439,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_2439(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_2439(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2437 in record-instance? in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2450,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
if(C_truep(C_blockp(t3))){
t4=C_structurep(t3);
t5=t2;
f_2450(t5,t4);}
else{
t4=t2;
f_2450(t4,C_SCHEME_FALSE);}}

/* k2448 in k2437 in record-instance? in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_2450(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_i_not(((C_word*)t0)[4]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=C_slot(((C_word*)t0)[2],C_fix(0));
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(((C_word*)t0)[4],t3));}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* make-record-instance in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2426(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_2426r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2426r(t0,t1,t2,t3);}}

static void C_ccall f_2426r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
t4=C_i_check_symbol_2(t2,lf[84]);
C_apply(5,0,t1,*((C_word*)lf[85]+1),t2,t3);}

/* number-of-bytes in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2404(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2404,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_byteblockp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_block_size(t2));}
else{
t3=C_block_size(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_w2b(t3));}}
else{
/* lolevel.scm: 457  ##sys#signal-hook */
t3=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t1,lf[6],lf[82],lf[83],t2);}}

/* number-of-slots in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2395(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2395,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2399,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=C_a_i_list(&a,1,lf[80]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1204,a[2]=t4,a[3]=t3,a[4]=t5,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_blockp(t4))){
t7=C_specialp(t4);
if(C_truep(t7)){
t8=t6;
f_1204(t8,C_i_not(t7));}
else{
t8=C_byteblockp(t4);
t9=t6;
f_1204(t9,C_i_not(t8));}}
else{
t7=t6;
f_1204(t7,C_SCHEME_FALSE);}}

/* k1202 in number-of-slots in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_fcall f_1204(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_block_size(((C_word*)t0)[5]));}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t2=C_i_car(((C_word*)t0)[4]);
/* lolevel.scm: 134  ##sys#signal-hook */
t3=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[3],lf[6],t2,lf[81],((C_word*)t0)[2]);}
else{
/* lolevel.scm: 134  ##sys#signal-hook */
t2=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[6],C_SCHEME_FALSE,lf[81],((C_word*)t0)[2]);}}}

/* k2397 in number-of-slots in k2391 in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_block_size(((C_word*)t0)[2]));}

/* set-procedure-data! in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2375,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2379,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 438  extend-procedure */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,t2,t3);}

/* k2377 in set-procedure-data! in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(t1,((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* lolevel.scm: 441  ##sys#signal-hook */
t3=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[2],lf[6],lf[75],lf[76],((C_word*)t0)[3]);}}

/* procedure-data in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2336(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2336,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2367,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2350,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 423  ##sys#lambda-decoration */
t6=*((C_word*)lf[73]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a2349 in procedure-data in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2350(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2350,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(lf[68],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2365 in procedure-data in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_slot(t1,C_fix(1)):C_SCHEME_FALSE));}

/* extended-procedure? in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2300(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2300,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_closurep(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2334,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2317,a[2]=((C_word)li47),tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 423  ##sys#lambda-decoration */
t6=*((C_word*)lf[73]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a2316 in extended-procedure? in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2317(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2317,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(lf[68],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2332 in extended-procedure? in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* extend-procedure in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2265(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2265,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2269,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 416  ##sys#check-closure */
t5=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[69]);}

/* k2267 in extend-procedure in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2269,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2274,a[2]=((C_word)li44),tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2290,a[2]=((C_word*)t0)[4],a[3]=((C_word)li45),tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 417  ##sys#decorate-lambda */
t4=*((C_word*)lf[70]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a2289 in k2267 in extend-procedure in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2290(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2290,4,t0,t1,t2,t3);}
t4=C_a_i_cons(&a,2,lf[68],((C_word*)t0)[2]);
t5=C_i_setslot(t2,t3,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}

/* a2273 in k2267 in extend-procedure in k2257 in k2253 in k2249 in k2245 in k2241 in k2237 in k2233 in k2229 in k2104 in k1081 in k1078 */
static void C_ccall f_2274(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2274,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=C_slot(t2,C_fix(0));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_eqp(lf[68],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* pointer-f64-set! in k2104 in k1081 in k1078 */
static void C_ccall f_2215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2215,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=C_i_foreign_pointer_argumentp(t2);
t5=C_i_foreign_flonum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub573(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=C_i_foreign_flonum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub573(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* pointer-f32-set! in k2104 in k1081 in k1078 */
static void C_ccall f_2201(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2201,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=C_i_foreign_pointer_argumentp(t2);
t5=C_i_foreign_flonum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub565(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=C_i_foreign_flonum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub565(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* pointer-s32-set! in k2104 in k1081 in k1078 */
static void C_ccall f_2187(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2187,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=C_i_foreign_pointer_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub557(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=C_i_foreign_fixnum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub557(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* pointer-u32-set! in k2104 in k1081 in k1078 */
static void C_ccall f_2173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2173,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=C_i_foreign_pointer_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub549(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=C_i_foreign_fixnum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub549(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* pointer-s16-set! in k2104 in k1081 in k1078 */
static void C_ccall f_2159(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2159,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=C_i_foreign_pointer_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub541(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=C_i_foreign_fixnum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub541(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* pointer-u16-set! in k2104 in k1081 in k1078 */
static void C_ccall f_2145(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2145,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=C_i_foreign_pointer_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub533(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=C_i_foreign_fixnum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub533(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* pointer-s8-set! in k2104 in k1081 in k1078 */
static void C_ccall f_2131(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2131,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=C_i_foreign_pointer_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub525(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=C_i_foreign_fixnum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub525(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* pointer-u8-set! in k2104 in k1081 in k1078 */
static void C_ccall f_2117(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2117,4,t0,t1,t2,t3);}
if(C_truep(t2)){
t4=C_i_foreign_pointer_argumentp(t2);
t5=C_i_foreign_fixnum_argumentp(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub517(C_SCHEME_UNDEFINED,t4,t5));}
else{
t4=C_i_foreign_fixnum_argumentp(t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub517(C_SCHEME_UNDEFINED,C_SCHEME_FALSE,t4));}}

/* locative? in k2104 in k1081 in k1078 */
static void C_ccall f_2111(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2111,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=C_locativep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* locative->object in k2104 in k1081 in k1078 */
static void C_ccall f_2108(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2108,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_locative_to_object(t2));}

/* locative-set! in k1081 in k1078 */
static void C_ccall f_2101(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2101,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_locative_set(t2,t3));}

/* make-weak-locative in k1081 in k1078 */
static void C_ccall f_2072(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2072r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2072r(t0,t1,t2,t3);}}

static void C_ccall f_2072r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2080,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* lolevel.scm: 350  ##sys#make-locative */
t5=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,t2,C_fix(0),C_SCHEME_TRUE,lf[46]);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=C_i_car(t3);
/* lolevel.scm: 350  ##sys#make-locative */
t7=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t1,t2,t6,C_SCHEME_TRUE,lf[46]);}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2078 in make-weak-locative in k1081 in k1078 */
static void C_ccall f_2080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 350  ##sys#make-locative */
t2=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_TRUE,lf[46]);}

/* make-locative in k1081 in k1078 */
static void C_ccall f_2043(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_2043r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2043r(t0,t1,t2,t3);}}

static void C_ccall f_2043r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2051,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
/* lolevel.scm: 347  ##sys#make-locative */
t5=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,t2,C_fix(0),C_SCHEME_FALSE,lf[44]);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=C_i_car(t3);
/* lolevel.scm: 347  ##sys#make-locative */
t7=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t1,t2,t6,C_SCHEME_FALSE,lf[44]);}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2049 in make-locative in k1081 in k1078 */
static void C_ccall f_2051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 347  ##sys#make-locative */
t2=*((C_word*)lf[45]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_FALSE,lf[44]);}

/* pointer-tag in k1081 in k1078 */
static void C_ccall f_2020(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2020,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2032,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
if(C_truep(C_blockp(t4))){
t5=C_specialp(t4);
t6=t3;
f_2032(t6,t5);}
else{
t5=t3;
f_2032(t5,C_SCHEME_FALSE);}}

/* k2030 in pointer-tag in k1081 in k1078 */
static void C_fcall f_2032(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(C_taggedpointerp(((C_word*)t0)[2]))?C_slot(((C_word*)t0)[2],C_fix(1)):C_SCHEME_FALSE));}
else{
/* lolevel.scm: 324  ##sys#error-hook */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR),lf[43],((C_word*)t0)[2]);}}

/* tagged-pointer? in k1081 in k1078 */
static void C_ccall f_1976(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1976r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1976r(t0,t1,t2,t3);}}

static void C_ccall f_1976r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1980,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_1980(2,t5,C_SCHEME_FALSE);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_1980(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1978 in tagged-pointer? in k1081 in k1078 */
static void C_ccall f_1980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(C_blockp(((C_word*)t0)[3]))){
if(C_truep(C_taggedpointerp(((C_word*)t0)[3]))){
t2=C_i_not(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=C_slot(((C_word*)t0)[3],C_fix(1));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_equalp(t1,t3));}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* tag-pointer in k1081 in k1078 */
static void C_ccall f_1956(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1956,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1960,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 309  ##sys#make-tagged-pointer */
t5=*((C_word*)lf[41]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}

/* k1958 in tag-pointer in k1081 in k1078 */
static void C_ccall f_1960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1963,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1971,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)t0)[2];
if(C_truep(C_blockp(t4))){
t5=C_specialp(t4);
t6=t3;
f_1971(t6,t5);}
else{
t5=t3;
f_1971(t5,C_SCHEME_FALSE);}}

/* k1969 in k1958 in tag-pointer in k1081 in k1078 */
static void C_fcall f_1971(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=C_copy_pointer(((C_word*)t0)[5],((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
/* lolevel.scm: 312  ##sys#error-hook */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR),lf[40],((C_word*)t0)[5]);}}

/* k1961 in k1958 in tag-pointer in k1081 in k1078 */
static void C_ccall f_1963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* align-to-word in k1081 in k1078 */
static void C_ccall f_1919(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1919,3,t0,t1,t2);}
if(C_truep(C_i_integerp(t2))){
t3=t1;
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(4));
t6=C_i_foreign_integer_argumentp(t4);
t7=t3;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,stub430(t5,t6));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1940,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
if(C_truep(C_blockp(t4))){
t5=C_specialp(t4);
t6=t3;
f_1940(t6,t5);}
else{
t5=t3;
f_1940(t5,C_SCHEME_FALSE);}}}

/* k1938 in align-to-word in k1081 in k1078 */
static void C_fcall f_1940(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1940,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1951,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 299  ##sys#pointer->address */
t3=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
/* lolevel.scm: 301  ##sys#signal-hook */
t2=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[6],lf[38],lf[39],((C_word*)t0)[2]);}}

/* k1949 in k1938 in align-to-word in k1081 in k1078 */
static void C_ccall f_1951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1951,2,t0,t1);}
t2=C_a_i_bytevector(&a,1,C_fix(4));
t3=C_i_foreign_integer_argumentp(t1);
t4=stub430(t2,t3);
/* lolevel.scm: 299  ##sys#address->pointer */
t5=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[2],t4);}

/* pointer+ in k1081 in k1078 */
static void C_ccall f_1898(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1898,4,t0,t1,t2,t3);}
t4=C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_truep(t2)?C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t6=C_i_foreign_integer_argumentp(t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,stub421(t4,t5,t6));}

/* pointer=? in k1081 in k1078 */
static void C_ccall f_1889(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1889,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1893,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 283  ##sys#check-special */
t5=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[35]);}

/* k1891 in pointer=? in k1081 in k1078 */
static void C_ccall f_1893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1893,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1896,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* lolevel.scm: 284  ##sys#check-special */
t3=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],lf[35]);}

/* k1894 in k1891 in pointer=? in k1081 in k1078 */
static void C_ccall f_1896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_pointer_eqp(((C_word*)t0)[3],((C_word*)t0)[2]));}

/* pointer->object in k1081 in k1078 */
static void C_ccall f_1883(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1883,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1887,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 279  ##sys#check-pointer */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[34]);}

/* k1885 in pointer->object in k1081 in k1078 */
static void C_ccall f_1887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_pointer_to_object(((C_word*)t0)[2]));}

/* object->pointer in k1081 in k1078 */
static void C_ccall f_1872(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1872,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=t1;
t4=t2;
t5=C_a_i_bytevector(&a,1,C_fix(3));
t6=t3;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,stub407(t5,t4));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* null-pointer? in k1081 in k1078 */
static void C_ccall f_1859(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1859,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1863,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 271  ##sys#check-special */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[32]);}

/* k1861 in null-pointer? in k1081 in k1078 */
static void C_ccall f_1863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1870,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* lolevel.scm: 272  ##sys#pointer->address */
t3=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1868 in k1861 in null-pointer? in k1081 in k1078 */
static void C_ccall f_1870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(C_fix(0),t1));}

/* pointer->address in k1081 in k1078 */
static void C_ccall f_1849(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1849,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1853,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 265  ##sys#check-special */
t4=*((C_word*)lf[29]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[27]);}

/* k1851 in pointer->address in k1081 in k1078 */
static void C_ccall f_1853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 266  ##sys#pointer->address */
t2=*((C_word*)lf[28]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* address->pointer in k1081 in k1078 */
static void C_ccall f_1840(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1840,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1844,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* lolevel.scm: 261  ##sys#check-integer */
t4=*((C_word*)lf[26]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[24]);}

/* k1842 in address->pointer in k1081 in k1078 */
static void C_ccall f_1844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* lolevel.scm: 262  ##sys#address->pointer */
t2=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* pointer-like? in k1081 in k1078 */
static void C_ccall f_1829(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1829,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
t3=C_specialp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* pointer? in k1081 in k1078 */
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1821,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_safe_pointerp(t2));}

/* free in k1081 in k1078 */
static void C_ccall f_1811(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1811,3,t0,t1,t2);}
if(C_truep(t2)){
t3=C_i_foreign_pointer_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,stub374(C_SCHEME_UNDEFINED,t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,stub374(C_SCHEME_UNDEFINED,C_SCHEME_FALSE));}}

/* allocate in k1081 in k1078 */
static void C_ccall f_1804(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1804,3,t0,t1,t2);}
t3=C_a_i_bytevector(&a,1,C_fix(3));
t4=C_i_foreign_fixnum_argumentp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,stub369(t3,t4));}

/* object-copy in k1081 in k1078 */
static void C_ccall f_1723(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1723,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1729,a[2]=t4,a[3]=((C_word)li14),tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1729(t6,t1,t2);}

/* copy in object-copy in k1081 in k1078 */
static void C_fcall f_1729(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1729,NULL,3,t0,t1,t2);}
if(C_truep(C_blockp(t2))){
if(C_truep(C_i_symbolp(t2))){
t3=C_slot(t2,C_fix(1));
/* lolevel.scm: 239  ##sys#intern-symbol */
C_string_to_symbol(3,0,t1,t3);}
else{
t3=C_block_size(t2);
t4=(C_truep(C_byteblockp(t2))?C_words(t3):t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1759,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* lolevel.scm: 243  ##sys#make-vector */
t6=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1757 in copy in object-copy in k1081 in k1078 */
static void C_ccall f_1759(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1759,2,t0,t1);}
t2=C_copy_block(((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1762,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_byteblockp(((C_word*)t0)[5]);
t5=(C_truep(t4)?t4:C_i_symbolp(((C_word*)t0)[5]));
if(C_truep(t5)){
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}
else{
t6=(C_truep(C_specialp(((C_word*)t0)[5]))?C_fix(1):C_fix(0));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1774,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word)li13),tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_1774(t10,t3,t6);}}

/* doloop359 in k1757 in copy in object-copy in k1081 in k1078 */
static void C_fcall f_1774(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1774,NULL,3,t0,t1,t2);}
if(C_truep(C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[5]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1795,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=C_slot(((C_word*)t0)[4],t2);
/* lolevel.scm: 247  copy */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1729(t5,t3,t4);}}

/* k1793 in doloop359 in k1757 in copy in object-copy in k1081 in k1078 */
static void C_ccall f_1795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_1774(t4,((C_word*)t0)[2],t3);}

/* k1760 in k1757 in copy in object-copy in k1081 in k1078 */
static void C_ccall f_1762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* move-memory! in k1081 in k1078 */
static void C_ccall f_1360(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr4r,(void*)f_1360r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1360r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1360r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(18);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1362,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=((C_word)li8),tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1650,a[2]=t5,a[3]=((C_word)li9),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1655,a[2]=t6,a[3]=((C_word)li10),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1660,a[2]=t7,a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t4))){
/* def-n180330 */
t9=t8;
f_1660(t9,t1);}
else{
t9=C_i_car(t4);
t10=C_i_cdr(t4);
if(C_truep(C_i_nullp(t10))){
/* def-foffset181328 */
t11=t7;
f_1655(t11,t1,t9);}
else{
t11=C_i_car(t10);
t12=C_i_cdr(t10);
if(C_truep(C_i_nullp(t12))){
/* def-toffset182325 */
t13=t6;
f_1650(t13,t1,t9,t11);}
else{
t13=C_i_car(t12);
t14=C_i_cdr(t12);
if(C_truep(C_i_nullp(t14))){
/* body178187 */
t15=t5;
f_1362(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}}}}

/* def-n180 in move-memory! in k1081 in k1078 */
static void C_fcall f_1660(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1660,NULL,2,t0,t1);}
/* def-foffset181328 */
t2=((C_word*)t0)[2];
f_1655(t2,t1,C_SCHEME_FALSE);}

/* def-foffset181 in move-memory! in k1081 in k1078 */
static void C_fcall f_1655(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1655,NULL,3,t0,t1,t2);}
/* def-toffset182325 */
t3=((C_word*)t0)[2];
f_1650(t3,t1,t2,C_fix(0));}

/* def-toffset182 in move-memory! in k1081 in k1078 */
static void C_fcall f_1650(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1650,NULL,4,t0,t1,t2,t3);}
/* body178187 */
t4=((C_word*)t0)[2];
f_1362(t4,t1,t2,t3,C_fix(0));}

/* body178 in move-memory! in k1081 in k1078 */
static void C_fcall f_1362(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t17;
C_word t18;
C_word ab[41],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1362,NULL,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1365,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li3),tmp=(C_word)a,a+=5,tmp));
t14=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1371,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp));
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1377,a[2]=t8,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1393,a[2]=t8,a[3]=((C_word)li6),tmp=(C_word)a,a+=4,tmp));
t17=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1420,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t12,a[6]=t10,a[7]=t6,a[8]=t3,a[9]=t4,a[10]=t2,a[11]=((C_word*)t0)[2],tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm: 197  ##sys#check-block */
f_1085(t17,((C_word*)t0)[4],C_a_i_list(&a,1,lf[11]));}

/* k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_ccall f_1420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* lolevel.scm: 198  ##sys#check-block */
f_1085(t2,((C_word*)t0)[2],C_a_i_list(&a,1,lf[11]));}

/* k1421 in k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_ccall f_1423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1423,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1426,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[8],C_fix(0)))){
/* lolevel.scm: 201  ##sys#error */
t3=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[11],lf[17],((C_word*)t0)[8]);}
else{
t3=t2;
f_1426(2,t3,C_SCHEME_UNDEFINED);}}

/* k1424 in k1421 in k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_ccall f_1426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1429,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(C_fixnum_lessp(((C_word*)t0)[9],C_fix(0)))){
/* lolevel.scm: 204  ##sys#error */
t3=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[11],lf[16],((C_word*)t0)[9]);}
else{
t3=t2;
f_1429(2,t3,C_SCHEME_UNDEFINED);}}

/* k1427 in k1424 in k1421 in k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_ccall f_1429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1429,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1434,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=t3,a[9]=((C_word*)t0)[11],a[10]=((C_word)li7),tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_1434(t5,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* move in k1427 in k1424 in k1421 in k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_fcall f_1434(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(11);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1434,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_structurep(t2))){
t4=C_slot(t2,C_fix(0));
if(C_truep(C_i_memq(t4,((C_word*)t0)[9]))){
t5=C_slot(t2,C_fix(1));
/* lolevel.scm: 208  move */
t17=t1;
t18=t5;
t19=t3;
t1=t17;
t2=t18;
t3=t19;
goto loop;}
else{
t5=t1;
t6=t2;
/* lolevel.scm: 173  ##sys#error-hook */
t7=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR),lf[11],t6);}}
else{
if(C_truep(C_structurep(t3))){
t4=C_slot(t3,C_fix(0));
if(C_truep(C_i_memq(t4,((C_word*)t0)[9]))){
t5=C_slot(t3,C_fix(1));
/* lolevel.scm: 212  move */
t17=t1;
t18=t2;
t19=t5;
t1=t17;
t2=t18;
t3=t19;
goto loop;}
else{
t5=t1;
t6=t3;
/* lolevel.scm: 173  ##sys#error-hook */
t7=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR),lf[11],t6);}}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=t3,a[9]=t1,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
t5=t2;
t6=C_i_safe_pointerp(t5);
if(C_truep(t6)){
t7=t4;
f_1503(t7,t6);}
else{
t7=C_locativep(t5);
t8=t4;
f_1503(t8,t7);}}}}

/* k1501 in move in k1427 in k1424 in k1421 in k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_fcall f_1503(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1503,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1519,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[8];
t4=C_i_safe_pointerp(t3);
if(C_truep(t4)){
t5=t2;
f_1519(t5,t4);}
else{
t5=C_locativep(t3);
t6=t2;
f_1519(t6,t5);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1568,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm: 221  ##sys#bytevector? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[7]);}}

/* k1566 in k1501 in move in k1427 in k1424 in k1421 in k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_ccall f_1568(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1568,2,t0,t1);}
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[9]));
if(C_truep(t2)){
t3=C_block_size(((C_word*)t0)[9]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1590,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t5=((C_word*)t0)[7];
t6=C_i_safe_pointerp(t5);
if(C_truep(t6)){
t7=t4;
f_1590(t7,t6);}
else{
t7=C_locativep(t5);
t8=t4;
f_1590(t8,t7);}}
else{
t3=((C_word*)t0)[8];
t4=((C_word*)t0)[9];
/* lolevel.scm: 173  ##sys#error-hook */
t5=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR),lf[11],t4);}}

/* k1588 in k1566 in k1501 in move in k1427 in k1424 in k1421 in k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_fcall f_1590(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1590,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1597,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[5];
if(C_truep(t3)){
/* lolevel.scm: 224  checkn1 */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1377(t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[6]);}
else{
/* lolevel.scm: 224  checkn1 */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1377(t4,t2,((C_word*)t0)[3],((C_word*)t0)[3],((C_word*)t0)[6]);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm: 225  ##sys#bytevector? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[9]);}}

/* k1605 in k1588 in k1566 in k1501 in move in k1427 in k1424 in k1421 in k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_ccall f_1607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1607,2,t0,t1);}
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[9]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1617,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[4];
t5=(C_truep(t4)?t4:((C_word*)t0)[3]);
t6=C_block_size(((C_word*)t0)[9]);
/* lolevel.scm: 226  checkn2 */
t7=((C_word*)((C_word*)t0)[2])[1];
f_1393(t7,t3,t5,((C_word*)t0)[3],t6,((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t3=((C_word*)t0)[8];
t4=((C_word*)t0)[9];
/* lolevel.scm: 173  ##sys#error-hook */
t5=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR),lf[11],t4);}}

/* k1615 in k1605 in k1588 in k1566 in k1501 in move in k1427 in k1424 in k1421 in k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_ccall f_1617(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[2];
t7=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t8=(C_truep(t4)?C_i_foreign_block_argumentp(t4):C_SCHEME_FALSE);
t9=C_i_foreign_fixnum_argumentp(t1);
t10=C_i_foreign_fixnum_argumentp(t5);
t11=C_i_foreign_fixnum_argumentp(t6);
t12=t2;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,stub149(C_SCHEME_UNDEFINED,t7,t8,t9,t10,t11));}

/* k1595 in k1588 in k1566 in k1501 in move in k1427 in k1424 in k1421 in k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_ccall f_1597(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[2];
t7=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t8=(C_truep(t4)?C_i_foreign_block_argumentp(t4):C_SCHEME_FALSE);
t9=C_i_foreign_fixnum_argumentp(t1);
t10=C_i_foreign_fixnum_argumentp(t5);
t11=C_i_foreign_fixnum_argumentp(t6);
t12=t2;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,stub117(C_SCHEME_UNDEFINED,t7,t8,t9,t10,t11));}

/* k1517 in k1501 in move in k1427 in k1424 in k1421 in k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_fcall f_1519(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1519,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[9];
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1526,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_1526(2,t4,t2);}
else{
/* lolevel.scm: 216  nosizerr */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1365(t4,t3);}}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1535,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* lolevel.scm: 217  ##sys#bytevector? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[7]);}}

/* k1533 in k1517 in k1501 in move in k1427 in k1424 in k1421 in k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_ccall f_1535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1535,2,t0,t1);}
t2=(C_truep(t1)?t1:C_i_stringp(((C_word*)t0)[9]));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1545,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t4=((C_word*)t0)[4];
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1549,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=C_block_size(((C_word*)t0)[9]);
/* lolevel.scm: 218  checkn1 */
t7=((C_word*)((C_word*)t0)[3])[1];
f_1377(t7,t3,t4,t6,((C_word*)t0)[6]);}
else{
/* lolevel.scm: 218  nosizerr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1365(t6,t5);}}
else{
t3=((C_word*)t0)[8];
t4=((C_word*)t0)[9];
/* lolevel.scm: 173  ##sys#error-hook */
t5=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t3,C_fix((C_word)C_BAD_ARGUMENT_TYPE_ERROR),lf[11],t4);}}

/* k1547 in k1533 in k1517 in k1501 in move in k1427 in k1424 in k1421 in k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_ccall f_1549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_block_size(((C_word*)t0)[5]);
/* lolevel.scm: 218  checkn1 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1377(t3,((C_word*)t0)[3],t1,t2,((C_word*)t0)[2]);}

/* k1543 in k1533 in k1517 in k1501 in move in k1427 in k1424 in k1421 in k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_ccall f_1545(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[2];
t7=(C_truep(t3)?C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t8=(C_truep(t4)?C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t9=C_i_foreign_fixnum_argumentp(t1);
t10=C_i_foreign_fixnum_argumentp(t5);
t11=C_i_foreign_fixnum_argumentp(t6);
t12=t2;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,stub133(C_SCHEME_UNDEFINED,t7,t8,t9,t10,t11));}

/* k1524 in k1517 in k1501 in move in k1427 in k1424 in k1421 in k1418 in body178 in move-memory! in k1081 in k1078 */
static void C_ccall f_1526(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[2];
t7=(C_truep(t3)?C_i_foreign_pointer_argumentp(t3):C_SCHEME_FALSE);
t8=(C_truep(t4)?C_i_foreign_pointer_argumentp(t4):C_SCHEME_FALSE);
t9=C_i_foreign_fixnum_argumentp(t1);
t10=C_i_foreign_fixnum_argumentp(t5);
t11=C_i_foreign_fixnum_argumentp(t6);
t12=t2;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,stub101(C_SCHEME_UNDEFINED,t7,t8,t9,t10,t11));}

/* checkn2 in body178 in move-memory! in k1081 in k1078 */
static void C_fcall f_1393(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1393,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1400,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t8=C_fixnum_difference(t3,t5);
if(C_truep(C_fixnum_less_or_equal_p(t2,t8))){
t9=C_fixnum_difference(t4,t6);
t10=t7;
f_1400(t10,C_fixnum_less_or_equal_p(t2,t9));}
else{
t9=t7;
f_1400(t9,C_SCHEME_FALSE);}}

/* k1398 in checkn2 in body178 in move-memory! in k1081 in k1078 */
static void C_fcall f_1400(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1400,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* lolevel.scm: 195  sizerr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1371(t2,((C_word*)t0)[5],C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[2]));}}

/* checkn1 in body178 in move-memory! in k1081 in k1078 */
static void C_fcall f_1377(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1377,NULL,5,t0,t1,t2,t3,t4);}
t5=C_fixnum_difference(t3,t4);
if(C_truep(C_fixnum_less_or_equal_p(t2,t5))){
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
/* lolevel.scm: 190  sizerr */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1371(t6,t1,C_a_i_list(&a,2,t2,t3));}}

/* sizerr in body178 in move-memory! in k1081 in k1078 */
static void C_fcall f_1371(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1371,NULL,3,t0,t1,t2);}
C_apply(8,0,t1,*((C_word*)lf[12]+1),lf[11],lf[14],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* nosizerr in body178 in move-memory! in k1081 in k1078 */
static void C_fcall f_1365(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1365,NULL,2,t0,t1);}
/* lolevel.scm: 182  ##sys#error */
t2=*((C_word*)lf[12]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,t1,lf[11],lf[13],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#check-pointer in k1081 in k1078 */
static void C_ccall f_1219(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_1219r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1219r(t0,t1,t2,t3);}}

static void C_ccall f_1219r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t4=t2;
if(C_truep(C_i_safe_pointerp(t4))){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
if(C_truep(C_i_pairp(t3))){
t5=C_i_car(t3);
/* lolevel.scm: 140  ##sys#error-hook */
t6=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t1,C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR),t5,lf[9],t2);}
else{
/* lolevel.scm: 140  ##sys#error-hook */
t5=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR),C_SCHEME_FALSE,lf[9],t2);}}}

/* ##sys#check-generic-structure in k1081 in k1078 */
static void C_fcall f_1158(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1158,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1170,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
if(C_truep(C_blockp(t5))){
t6=C_structurep(t5);
t7=t4;
f_1170(t7,t6);}
else{
t6=t4;
f_1170(t6,C_SCHEME_FALSE);}}

/* k1168 in ##sys#check-generic-structure in k1081 in k1078 */
static void C_fcall f_1170(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=C_i_car(((C_word*)t0)[3]);
/* lolevel.scm: 126  ##sys#signal-hook */
t3=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[4],lf[6],t2,lf[7],((C_word*)t0)[2]);}
else{
/* lolevel.scm: 126  ##sys#signal-hook */
t2=*((C_word*)lf[5]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[6],C_SCHEME_FALSE,lf[7],((C_word*)t0)[2]);}}}

/* ##sys#check-block in k1081 in k1078 */
static void C_fcall f_1085(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1085,NULL,3,t1,t2,t3);}
if(C_truep(C_blockp(t2))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep(C_i_pairp(t3))){
t4=C_i_car(t3);
/* lolevel.scm: 105  ##sys#error-hook */
t5=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR),t4,t2);}
else{
/* lolevel.scm: 105  ##sys#error-hook */
t4=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,C_fix((C_word)C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR),C_SCHEME_FALSE,t2);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[223] = {
{"toplevel:lolevel_scm",(void*)C_lolevel_toplevel},
{"f_1080:lolevel_scm",(void*)f_1080},
{"f_1083:lolevel_scm",(void*)f_1083},
{"f_2106:lolevel_scm",(void*)f_2106},
{"f_3333:lolevel_scm",(void*)f_3333},
{"f_2231:lolevel_scm",(void*)f_2231},
{"f_3323:lolevel_scm",(void*)f_3323},
{"f_2235:lolevel_scm",(void*)f_2235},
{"f_3313:lolevel_scm",(void*)f_3313},
{"f_2239:lolevel_scm",(void*)f_2239},
{"f_3303:lolevel_scm",(void*)f_3303},
{"f_2243:lolevel_scm",(void*)f_2243},
{"f_3293:lolevel_scm",(void*)f_3293},
{"f_2247:lolevel_scm",(void*)f_2247},
{"f_3283:lolevel_scm",(void*)f_3283},
{"f_2251:lolevel_scm",(void*)f_2251},
{"f_3273:lolevel_scm",(void*)f_3273},
{"f_2255:lolevel_scm",(void*)f_2255},
{"f_3263:lolevel_scm",(void*)f_3263},
{"f_2259:lolevel_scm",(void*)f_2259},
{"f_2393:lolevel_scm",(void*)f_2393},
{"f_3239:lolevel_scm",(void*)f_3239},
{"f_3243:lolevel_scm",(void*)f_3243},
{"f_3246:lolevel_scm",(void*)f_3246},
{"f_2532:lolevel_scm",(void*)f_2532},
{"f_3226:lolevel_scm",(void*)f_3226},
{"f_3217:lolevel_scm",(void*)f_3217},
{"f_3208:lolevel_scm",(void*)f_3208},
{"f_3202:lolevel_scm",(void*)f_3202},
{"f_3171:lolevel_scm",(void*)f_3171},
{"f_3175:lolevel_scm",(void*)f_3175},
{"f_3178:lolevel_scm",(void*)f_3178},
{"f_3185:lolevel_scm",(void*)f_3185},
{"f_3200:lolevel_scm",(void*)f_3200},
{"f_3188:lolevel_scm",(void*)f_3188},
{"f_3162:lolevel_scm",(void*)f_3162},
{"f_1113:lolevel_scm",(void*)f_1113},
{"f_1135:lolevel_scm",(void*)f_1135},
{"f_1138:lolevel_scm",(void*)f_1138},
{"f_3166:lolevel_scm",(void*)f_3166},
{"f_3033:lolevel_scm",(void*)f_3033},
{"f_3037:lolevel_scm",(void*)f_3037},
{"f_3040:lolevel_scm",(void*)f_3040},
{"f_3045:lolevel_scm",(void*)f_3045},
{"f_3061:lolevel_scm",(void*)f_3061},
{"f_3104:lolevel_scm",(void*)f_3104},
{"f_3107:lolevel_scm",(void*)f_3107},
{"f_3116:lolevel_scm",(void*)f_3116},
{"f_3137:lolevel_scm",(void*)f_3137},
{"f_3110:lolevel_scm",(void*)f_3110},
{"f_3090:lolevel_scm",(void*)f_3090},
{"f_3093:lolevel_scm",(void*)f_3093},
{"f_3074:lolevel_scm",(void*)f_3074},
{"f_3077:lolevel_scm",(void*)f_3077},
{"f_2949:lolevel_scm",(void*)f_2949},
{"f_2953:lolevel_scm",(void*)f_2953},
{"f_2958:lolevel_scm",(void*)f_2958},
{"f_2971:lolevel_scm",(void*)f_2971},
{"f_3028:lolevel_scm",(void*)f_3028},
{"f_2977:lolevel_scm",(void*)f_2977},
{"f_2980:lolevel_scm",(void*)f_2980},
{"f_2990:lolevel_scm",(void*)f_2990},
{"f_2992:lolevel_scm",(void*)f_2992},
{"f_3014:lolevel_scm",(void*)f_3014},
{"f_2983:lolevel_scm",(void*)f_2983},
{"f_2857:lolevel_scm",(void*)f_2857},
{"f_2866:lolevel_scm",(void*)f_2866},
{"f_2911:lolevel_scm",(void*)f_2911},
{"f_2921:lolevel_scm",(void*)f_2921},
{"f3720:lolevel_scm",(void*)f3720},
{"f_2895:lolevel_scm",(void*)f_2895},
{"f_2902:lolevel_scm",(void*)f_2902},
{"f_2939:lolevel_scm",(void*)f_2939},
{"f_2693:lolevel_scm",(void*)f_2693},
{"f_2697:lolevel_scm",(void*)f_2697},
{"f_2700:lolevel_scm",(void*)f_2700},
{"f_2846:lolevel_scm",(void*)f_2846},
{"f_2703:lolevel_scm",(void*)f_2703},
{"f_2706:lolevel_scm",(void*)f_2706},
{"f_2714:lolevel_scm",(void*)f_2714},
{"f_2724:lolevel_scm",(void*)f_2724},
{"f_2839:lolevel_scm",(void*)f_2839},
{"f_2733:lolevel_scm",(void*)f_2733},
{"f_2827:lolevel_scm",(void*)f_2827},
{"f_2831:lolevel_scm",(void*)f_2831},
{"f_2823:lolevel_scm",(void*)f_2823},
{"f_2736:lolevel_scm",(void*)f_2736},
{"f_2739:lolevel_scm",(void*)f_2739},
{"f_2796:lolevel_scm",(void*)f_2796},
{"f_2742:lolevel_scm",(void*)f_2742},
{"f_2745:lolevel_scm",(void*)f_2745},
{"f_2755:lolevel_scm",(void*)f_2755},
{"f_2757:lolevel_scm",(void*)f_2757},
{"f_2778:lolevel_scm",(void*)f_2778},
{"f_2748:lolevel_scm",(void*)f_2748},
{"f_2709:lolevel_scm",(void*)f_2709},
{"f_2575:lolevel_scm",(void*)f_2575},
{"f_2582:lolevel_scm",(void*)f_2582},
{"f_2585:lolevel_scm",(void*)f_2585},
{"f_2590:lolevel_scm",(void*)f_2590},
{"f_2600:lolevel_scm",(void*)f_2600},
{"f_2609:lolevel_scm",(void*)f_2609},
{"f_2613:lolevel_scm",(void*)f_2613},
{"f_2616:lolevel_scm",(void*)f_2616},
{"f_2619:lolevel_scm",(void*)f_2619},
{"f_2629:lolevel_scm",(void*)f_2629},
{"f_2631:lolevel_scm",(void*)f_2631},
{"f_2652:lolevel_scm",(void*)f_2652},
{"f_2622:lolevel_scm",(void*)f_2622},
{"f_2686:lolevel_scm",(void*)f_2686},
{"f_2572:lolevel_scm",(void*)f_2572},
{"f_2534:lolevel_scm",(void*)f_2534},
{"f_2538:lolevel_scm",(void*)f_2538},
{"f_2544:lolevel_scm",(void*)f_2544},
{"f_2549:lolevel_scm",(void*)f_2549},
{"f_2506:lolevel_scm",(void*)f_2506},
{"f_2510:lolevel_scm",(void*)f_2510},
{"f_2513:lolevel_scm",(void*)f_2513},
{"f_2493:lolevel_scm",(void*)f_2493},
{"f_2497:lolevel_scm",(void*)f_2497},
{"f_2484:lolevel_scm",(void*)f_2484},
{"f_2488:lolevel_scm",(void*)f_2488},
{"f_2435:lolevel_scm",(void*)f_2435},
{"f_2439:lolevel_scm",(void*)f_2439},
{"f_2450:lolevel_scm",(void*)f_2450},
{"f_2426:lolevel_scm",(void*)f_2426},
{"f_2404:lolevel_scm",(void*)f_2404},
{"f_2395:lolevel_scm",(void*)f_2395},
{"f_1204:lolevel_scm",(void*)f_1204},
{"f_2399:lolevel_scm",(void*)f_2399},
{"f_2375:lolevel_scm",(void*)f_2375},
{"f_2379:lolevel_scm",(void*)f_2379},
{"f_2336:lolevel_scm",(void*)f_2336},
{"f_2350:lolevel_scm",(void*)f_2350},
{"f_2367:lolevel_scm",(void*)f_2367},
{"f_2300:lolevel_scm",(void*)f_2300},
{"f_2317:lolevel_scm",(void*)f_2317},
{"f_2334:lolevel_scm",(void*)f_2334},
{"f_2265:lolevel_scm",(void*)f_2265},
{"f_2269:lolevel_scm",(void*)f_2269},
{"f_2290:lolevel_scm",(void*)f_2290},
{"f_2274:lolevel_scm",(void*)f_2274},
{"f_2215:lolevel_scm",(void*)f_2215},
{"f_2201:lolevel_scm",(void*)f_2201},
{"f_2187:lolevel_scm",(void*)f_2187},
{"f_2173:lolevel_scm",(void*)f_2173},
{"f_2159:lolevel_scm",(void*)f_2159},
{"f_2145:lolevel_scm",(void*)f_2145},
{"f_2131:lolevel_scm",(void*)f_2131},
{"f_2117:lolevel_scm",(void*)f_2117},
{"f_2111:lolevel_scm",(void*)f_2111},
{"f_2108:lolevel_scm",(void*)f_2108},
{"f_2101:lolevel_scm",(void*)f_2101},
{"f_2072:lolevel_scm",(void*)f_2072},
{"f_2080:lolevel_scm",(void*)f_2080},
{"f_2043:lolevel_scm",(void*)f_2043},
{"f_2051:lolevel_scm",(void*)f_2051},
{"f_2020:lolevel_scm",(void*)f_2020},
{"f_2032:lolevel_scm",(void*)f_2032},
{"f_1976:lolevel_scm",(void*)f_1976},
{"f_1980:lolevel_scm",(void*)f_1980},
{"f_1956:lolevel_scm",(void*)f_1956},
{"f_1960:lolevel_scm",(void*)f_1960},
{"f_1971:lolevel_scm",(void*)f_1971},
{"f_1963:lolevel_scm",(void*)f_1963},
{"f_1919:lolevel_scm",(void*)f_1919},
{"f_1940:lolevel_scm",(void*)f_1940},
{"f_1951:lolevel_scm",(void*)f_1951},
{"f_1898:lolevel_scm",(void*)f_1898},
{"f_1889:lolevel_scm",(void*)f_1889},
{"f_1893:lolevel_scm",(void*)f_1893},
{"f_1896:lolevel_scm",(void*)f_1896},
{"f_1883:lolevel_scm",(void*)f_1883},
{"f_1887:lolevel_scm",(void*)f_1887},
{"f_1872:lolevel_scm",(void*)f_1872},
{"f_1859:lolevel_scm",(void*)f_1859},
{"f_1863:lolevel_scm",(void*)f_1863},
{"f_1870:lolevel_scm",(void*)f_1870},
{"f_1849:lolevel_scm",(void*)f_1849},
{"f_1853:lolevel_scm",(void*)f_1853},
{"f_1840:lolevel_scm",(void*)f_1840},
{"f_1844:lolevel_scm",(void*)f_1844},
{"f_1829:lolevel_scm",(void*)f_1829},
{"f_1821:lolevel_scm",(void*)f_1821},
{"f_1811:lolevel_scm",(void*)f_1811},
{"f_1804:lolevel_scm",(void*)f_1804},
{"f_1723:lolevel_scm",(void*)f_1723},
{"f_1729:lolevel_scm",(void*)f_1729},
{"f_1759:lolevel_scm",(void*)f_1759},
{"f_1774:lolevel_scm",(void*)f_1774},
{"f_1795:lolevel_scm",(void*)f_1795},
{"f_1762:lolevel_scm",(void*)f_1762},
{"f_1360:lolevel_scm",(void*)f_1360},
{"f_1660:lolevel_scm",(void*)f_1660},
{"f_1655:lolevel_scm",(void*)f_1655},
{"f_1650:lolevel_scm",(void*)f_1650},
{"f_1362:lolevel_scm",(void*)f_1362},
{"f_1420:lolevel_scm",(void*)f_1420},
{"f_1423:lolevel_scm",(void*)f_1423},
{"f_1426:lolevel_scm",(void*)f_1426},
{"f_1429:lolevel_scm",(void*)f_1429},
{"f_1434:lolevel_scm",(void*)f_1434},
{"f_1503:lolevel_scm",(void*)f_1503},
{"f_1568:lolevel_scm",(void*)f_1568},
{"f_1590:lolevel_scm",(void*)f_1590},
{"f_1607:lolevel_scm",(void*)f_1607},
{"f_1617:lolevel_scm",(void*)f_1617},
{"f_1597:lolevel_scm",(void*)f_1597},
{"f_1519:lolevel_scm",(void*)f_1519},
{"f_1535:lolevel_scm",(void*)f_1535},
{"f_1549:lolevel_scm",(void*)f_1549},
{"f_1545:lolevel_scm",(void*)f_1545},
{"f_1526:lolevel_scm",(void*)f_1526},
{"f_1393:lolevel_scm",(void*)f_1393},
{"f_1400:lolevel_scm",(void*)f_1400},
{"f_1377:lolevel_scm",(void*)f_1377},
{"f_1371:lolevel_scm",(void*)f_1371},
{"f_1365:lolevel_scm",(void*)f_1365},
{"f_1219:lolevel_scm",(void*)f_1219},
{"f_1158:lolevel_scm",(void*)f_1158},
{"f_1170:lolevel_scm",(void*)f_1170},
{"f_1085:lolevel_scm",(void*)f_1085},
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
