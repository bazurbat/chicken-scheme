/* Generated from extras.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-09 21:33
   Version 4.2.12
   windows-mingw32-x86 [ manyargs ptables ]
   compiled 2010-01-08 on lenovo-1 (MINGW32_NT-6.0)
   command line: extras.scm -optimize-level 2 -include-path . -include-path ./ -inline -explicit-use -no-trace -output-file extras.c -extend ./private-namespace.scm
   unit: extras
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_data_structures_toplevel)
C_externimport void C_ccall C_data_structures_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_ports_toplevel)
C_externimport void C_ccall C_ports_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[133];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,23),40,100,111,108,111,111,112,53,54,32,120,54,48,32,105,54,49,32,120,115,54,50,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,115,108,117,114,112,32,112,111,114,116,53,53,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,30),40,98,111,100,121,52,49,32,112,111,114,116,53,49,32,114,101,97,100,101,114,53,50,32,109,97,120,53,51,41,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,33),40,100,101,102,45,109,97,120,52,53,32,37,112,111,114,116,51,56,55,51,32,37,114,101,97,100,101,114,51,57,55,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,24),40,100,101,102,45,114,101,97,100,101,114,52,52,32,37,112,111,114,116,51,56,55,54,41};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,12),40,100,101,102,45,112,111,114,116,52,51,41,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,21),40,114,101,97,100,45,102,105,108,101,32,46,32,116,109,112,51,51,51,52,41,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,19),40,114,97,110,100,111,109,45,115,101,101,100,32,46,32,110,57,48,41,0,0,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,17),40,114,97,110,100,111,109,105,122,101,32,46,32,110,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,12),40,114,97,110,100,111,109,32,110,57,56,41,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,12),40,103,49,50,51,32,114,108,49,50,53,41,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,11),40,108,111,111,112,32,105,49,51,48,41,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,21),40,114,101,97,100,45,108,105,110,101,32,46,32,97,114,103,115,49,48,54,41,0,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,110,115,49,54,50,32,110,49,54,51,41,0,0,0,0,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,16),40,100,111,114,101,97,100,32,112,111,114,116,49,54,48,41};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,30),40,114,101,97,100,45,108,105,110,101,115,32,46,32,112,111,114,116,45,97,110,100,45,109,97,120,49,53,50,41,0,0};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,115,116,97,114,116,49,56,57,32,110,49,57,48,32,109,49,57,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,25),40,108,111,111,112,32,115,116,97,114,116,50,48,57,32,110,50,49,48,32,109,50,49,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,50),40,35,35,115,121,115,35,114,101,97,100,45,115,116,114,105,110,103,33,32,110,49,55,52,32,100,101,115,116,49,55,53,32,112,111,114,116,49,55,54,32,115,116,97,114,116,49,55,55,41,0,0,0,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,26),40,98,111,100,121,50,52,53,32,112,111,114,116,50,53,52,32,115,116,97,114,116,50,53,53,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,26),40,100,101,102,45,115,116,97,114,116,50,52,56,32,37,112,111,114,116,50,52,51,50,54,54,41,0,0,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,13),40,100,101,102,45,112,111,114,116,50,52,55,41,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,39),40,114,101,97,100,45,115,116,114,105,110,103,33,32,110,50,51,55,32,100,101,115,116,50,51,56,32,46,32,116,109,112,50,51,54,50,51,57,41,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,34),40,35,35,115,121,115,35,114,101,97,100,45,115,116,114,105,110,103,47,112,111,114,116,32,110,50,55,52,32,112,50,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,25),40,114,101,97,100,45,115,116,114,105,110,103,32,46,32,116,109,112,51,48,53,51,48,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,30),40,114,101,97,100,45,116,111,107,101,110,32,112,114,101,100,51,51,50,32,46,32,112,111,114,116,51,51,51,41,0,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,22),40,98,111,100,121,51,53,53,32,110,51,54,52,32,112,111,114,116,51,54,53,41,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,22),40,100,101,102,45,112,111,114,116,51,53,56,32,37,110,51,53,51,51,55,51,41,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,10),40,100,101,102,45,110,51,53,55,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,29),40,119,114,105,116,101,45,115,116,114,105,110,103,32,115,51,52,56,32,46,32,109,111,114,101,51,52,57,41,0,0,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,29),40,119,114,105,116,101,45,108,105,110,101,32,115,116,114,51,56,50,32,46,32,112,111,114,116,51,56,51,41,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,23),40,114,101,97,100,45,98,121,116,101,32,46,32,116,109,112,51,57,52,51,57,53,41,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,32),40,119,114,105,116,101,45,98,121,116,101,32,98,121,116,101,52,49,48,32,46,32,116,109,112,52,48,57,52,49,49,41};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,18),40,114,101,97,100,45,109,97,99,114,111,63,32,108,52,51,49,41,0,0,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,19),40,114,101,97,100,45,109,97,99,114,111,45,112,114,101,102,105,120,41,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,19),40,111,117,116,32,115,116,114,52,54,56,32,99,111,108,52,54,57,41,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,24),40,119,114,45,101,120,112,114,32,101,120,112,114,52,56,52,32,99,111,108,52,56,53,41};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,52,56,57,32,99,111,108,52,57,48,41,0,0,0,0,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,20),40,119,114,45,108,115,116,32,108,52,56,54,32,99,111,108,52,56,55,41,0,0,0,0};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,23),40,108,111,111,112,32,105,53,48,51,32,106,53,48,52,32,99,111,108,53,48,53,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,12),40,103,53,50,52,32,99,110,53,50,54,41,0,0,0,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,18),40,119,114,32,111,98,106,52,55,52,32,99,111,108,52,55,53,41,0,0,0,0,0,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,20),40,115,112,97,99,101,115,32,110,53,54,49,32,99,111,108,53,54,50,41,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,21),40,105,110,100,101,110,116,32,116,111,53,54,51,32,99,111,108,53,54,52,41,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,14),40,97,50,55,49,49,32,115,116,114,53,56,48,41,0,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,38),40,112,114,32,111,98,106,53,54,57,32,99,111,108,53,55,48,32,101,120,116,114,97,53,55,49,32,112,112,45,112,97,105,114,53,55,50,41,0,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,33),40,112,112,45,101,120,112,114,32,101,120,112,114,53,56,52,32,99,111,108,53,56,53,32,101,120,116,114,97,53,56,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,44),40,112,112,45,99,97,108,108,32,101,120,112,114,53,56,57,32,99,111,108,53,57,48,32,101,120,116,114,97,53,57,49,32,112,112,45,105,116,101,109,53,57,50,41,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,41),40,112,112,45,108,105,115,116,32,108,53,57,54,32,99,111,108,53,57,55,32,101,120,116,114,97,53,57,56,32,112,112,45,105,116,101,109,53,57,57,41,0,0,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,18),40,108,111,111,112,32,108,54,48,55,32,99,111,108,54,48,56,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,50),40,112,112,45,100,111,119,110,32,108,54,48,49,32,99,111,108,49,54,48,50,32,99,111,108,50,54,48,51,32,101,120,116,114,97,54,48,52,32,112,112,45,105,116,101,109,54,48,53,41,0,0,0,0,0,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,39),40,116,97,105,108,49,32,114,101,115,116,54,51,49,32,99,111,108,49,54,51,50,32,99,111,108,50,54,51,51,32,99,111,108,51,54,51,52,41,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,39),40,116,97,105,108,50,32,114,101,115,116,54,52,49,32,99,111,108,49,54,52,50,32,99,111,108,50,54,52,51,32,99,111,108,51,54,52,52,41,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,31),40,116,97,105,108,51,32,114,101,115,116,54,53,49,32,99,111,108,49,54,53,50,32,99,111,108,50,54,53,51,41,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,70),40,112,112,45,103,101,110,101,114,97,108,32,101,120,112,114,54,50,48,32,99,111,108,54,50,49,32,101,120,116,114,97,54,50,50,32,110,97,109,101,100,63,54,50,51,32,112,112,45,49,54,50,52,32,112,112,45,50,54,50,53,32,112,112,45,51,54,50,54,41,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,35),40,112,112,45,101,120,112,114,45,108,105,115,116,32,108,54,54,54,32,99,111,108,54,54,55,32,101,120,116,114,97,54,54,56,41,0,0,0,0,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,35),40,112,112,45,108,97,109,98,100,97,32,101,120,112,114,54,54,57,32,99,111,108,54,55,48,32,101,120,116,114,97,54,55,49,41,0,0,0,0,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,31),40,112,112,45,105,102,32,101,120,112,114,54,55,50,32,99,111,108,54,55,51,32,101,120,116,114,97,54,55,52,41,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,33),40,112,112,45,99,111,110,100,32,101,120,112,114,54,55,53,32,99,111,108,54,55,54,32,101,120,116,114,97,54,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,33),40,112,112,45,99,97,115,101,32,101,120,112,114,54,55,56,32,99,111,108,54,55,57,32,101,120,116,114,97,54,56,48,41,0,0,0,0,0,0,0};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,32),40,112,112,45,97,110,100,32,101,120,112,114,54,56,49,32,99,111,108,54,56,50,32,101,120,116,114,97,54,56,51,41};
static C_char C_TLS li63[] C_aligned={C_lihdr(0,0,32),40,112,112,45,108,101,116,32,101,120,112,114,54,56,52,32,99,111,108,54,56,53,32,101,120,116,114,97,54,56,54,41};
static C_char C_TLS li64[] C_aligned={C_lihdr(0,0,34),40,112,112,45,98,101,103,105,110,32,101,120,112,114,54,57,50,32,99,111,108,54,57,51,32,101,120,116,114,97,54,57,52,41,0,0,0,0,0,0};
static C_char C_TLS li65[] C_aligned={C_lihdr(0,0,31),40,112,112,45,100,111,32,101,120,112,114,54,57,53,32,99,111,108,54,57,54,32,101,120,116,114,97,54,57,55,41,0};
static C_char C_TLS li66[] C_aligned={C_lihdr(0,0,15),40,115,116,121,108,101,32,104,101,97,100,54,57,56,41,0};
static C_char C_TLS li67[] C_aligned={C_lihdr(0,0,18),40,112,112,32,111,98,106,53,51,56,32,99,111,108,53,51,57,41,0,0,0,0,0,0};
static C_char C_TLS li68[] C_aligned={C_lihdr(0,0,53),40,103,101,110,101,114,105,99,45,119,114,105,116,101,32,111,98,106,52,50,49,32,100,105,115,112,108,97,121,63,52,50,50,32,119,105,100,116,104,52,50,51,32,111,117,116,112,117,116,52,50,52,41,0,0,0};
static C_char C_TLS li69[] C_aligned={C_lihdr(0,0,12),40,97,51,50,54,53,32,115,55,54,48,41,0,0,0,0};
static C_char C_TLS li70[] C_aligned={C_lihdr(0,0,30),40,112,114,101,116,116,121,45,112,114,105,110,116,32,111,98,106,55,53,55,32,46,32,111,112,116,55,53,56,41,0,0};
static C_char C_TLS li71[] C_aligned={C_lihdr(0,0,6),40,110,101,120,116,41,0,0};
static C_char C_TLS li72[] C_aligned={C_lihdr(0,0,6),40,115,107,105,112,41,0,0};
static C_char C_TLS li73[] C_aligned={C_lihdr(0,0,6),40,108,111,111,112,41,0,0};
static C_char C_TLS li74[] C_aligned={C_lihdr(0,0,20),40,114,101,99,32,109,115,103,55,55,56,32,97,114,103,115,55,55,57,41,0,0,0,0};
static C_char C_TLS li75[] C_aligned={C_lihdr(0,0,40),40,102,112,114,105,110,116,102,48,32,108,111,99,55,54,56,32,112,111,114,116,55,54,57,32,109,115,103,55,55,48,32,97,114,103,115,55,55,49,41};
static C_char C_TLS li76[] C_aligned={C_lihdr(0,0,35),40,102,112,114,105,110,116,102,32,112,111,114,116,56,51,50,32,102,115,116,114,56,51,51,32,46,32,97,114,103,115,56,51,52,41,0,0,0,0,0};
static C_char C_TLS li77[] C_aligned={C_lihdr(0,0,26),40,112,114,105,110,116,102,32,102,115,116,114,56,51,54,32,46,32,97,114,103,115,56,51,55,41,0,0,0,0,0,0};
static C_char C_TLS li78[] C_aligned={C_lihdr(0,0,27),40,115,112,114,105,110,116,102,32,102,115,116,114,56,51,57,32,46,32,97,114,103,115,56,52,48,41,0,0,0,0,0};
static C_char C_TLS li79[] C_aligned={C_lihdr(0,0,32),40,102,111,114,109,97,116,32,102,109,116,45,111,114,45,100,115,116,56,52,52,32,46,32,97,114,103,115,56,52,53,41};
static C_char C_TLS li80[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


/* from k1035 */
static C_word C_fcall stub87(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub87(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
unsigned int t0=(unsigned int )C_num_to_unsigned_int(C_a0);
srand(t0);
return C_r;}

C_noret_decl(C_extras_toplevel)
C_externexport void C_ccall C_extras_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_889)
static void C_ccall f_889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_892)
static void C_ccall f_892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_895)
static void C_ccall f_895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3251)
static void C_ccall f_3251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3641)
static void C_ccall f_3641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3598)
static void C_ccall f_3598(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3598)
static void C_ccall f_3598r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3631)
static void C_ccall f_3631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3606)
static void C_ccall f_3606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3592)
static void C_ccall f_3592r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3586)
static void C_ccall f_3586(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3586)
static void C_ccall f_3586r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3580)
static void C_ccall f_3580(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3580)
static void C_ccall f_3580r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3282)
static void C_fcall f_3282(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3286)
static void C_ccall f_3286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3569)
static void C_ccall f_3569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3289)
static void C_ccall f_3289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3320)
static void C_fcall f_3320(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3355)
static void C_fcall f_3355(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3533)
static C_word C_fcall f_3533(C_word t0,C_word t1);
C_noret_decl(f_3488)
static void C_ccall f_3488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3491)
static void C_ccall f_3491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3497)
static void C_ccall f_3497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3470)
static void C_ccall f_3470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3466)
static void C_ccall f_3466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3453)
static void C_ccall f_3453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3436)
static void C_ccall f_3436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3419)
static void C_ccall f_3419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3406)
static void C_ccall f_3406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3393)
static void C_ccall f_3393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3368)
static void C_ccall f_3368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3336)
static void C_fcall f_3336(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3329)
static C_word C_fcall f_3329(C_word t0);
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3314)
static void C_ccall f_3314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3253)
static void C_ccall f_3253r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3257)
static void C_ccall f_3257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3266)
static void C_ccall f_3266(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3270)
static void C_ccall f_3270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3260)
static void C_ccall f_3260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1972)
static void C_fcall f_1972(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3240)
static void C_ccall f_3240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3244)
static void C_ccall f_3244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2593)
static void C_fcall f_2593(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3148)
static void C_fcall f_3148(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3158)
static void C_fcall f_3158(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3139)
static void C_ccall f_3139(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3133)
static void C_ccall f_3133(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3111)
static void C_ccall f_3111(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3105)
static void C_ccall f_3105(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3093)
static void C_ccall f_3093(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3087)
static void C_ccall f_3087(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2927)
static void C_fcall f_2927(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_3073)
static void C_ccall f_3073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3025)
static void C_ccall f_3025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3040)
static void C_ccall f_3040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3012)
static void C_fcall f_3012(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2971)
static void C_fcall f_2971(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2930)
static void C_fcall f_2930(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2953)
static void C_ccall f_2953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2850)
static void C_fcall f_2850(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2856)
static void C_fcall f_2856(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2925)
static void C_ccall f_2925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2887)
static void C_ccall f_2887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2879)
static void C_ccall f_2879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2841)
static void C_fcall f_2841(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2845)
static void C_ccall f_2845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2813)
static void C_fcall f_2813(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2839)
static void C_ccall f_2839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2817)
static void C_ccall f_2817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2748)
static void C_ccall f_2748(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2782)
static void C_ccall f_2782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2766)
static void C_ccall f_2766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2661)
static void C_fcall f_2661(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2674)
static void C_ccall f_2674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2710)
static void C_ccall f_2710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2690)
static void C_ccall f_2690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2629)
static void C_fcall f_2629(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2645)
static void C_ccall f_2645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2596)
static void C_fcall f_2596(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2627)
static void C_ccall f_2627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2085)
static void C_fcall f_2085(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2574)
static void C_ccall f_2574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2577)
static void C_ccall f_2577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2552)
static void C_ccall f_2552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2555)
static void C_ccall f_2555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2542)
static void C_ccall f_2542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2519)
static void C_ccall f_2519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2522)
static void C_ccall f_2522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2412)
static void C_ccall f_2412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2415)
static void C_ccall f_2415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2476)
static void C_ccall f_2476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2455)
static void C_ccall f_2455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2462)
static void C_ccall f_2462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2419)
static void C_fcall f_2419(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2406)
static void C_ccall f_2406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2322)
static void C_ccall f_2322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2324)
static void C_fcall f_2324(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2331)
static void C_fcall f_2331(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2383)
static void C_ccall f_2383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2362)
static void C_ccall f_2362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2303)
static void C_ccall f_2303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2280)
static void C_ccall f_2280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2283)
static void C_ccall f_2283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2290)
static void C_ccall f_2290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2271)
static void C_ccall f_2271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2241)
static void C_ccall f_2241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2115)
static void C_fcall f_2115(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2198)
static void C_ccall f_2198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2133)
static void C_ccall f_2133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2135)
static void C_fcall f_2135(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2187)
static void C_ccall f_2187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2088)
static void C_fcall f_2088(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2106)
static void C_ccall f_2106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2066)
static void C_fcall f_2066(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2033)
static C_word C_fcall f_2033(C_word t0);
C_noret_decl(f_1975)
static void C_fcall f_1975(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2007)
static void C_fcall f_2007(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1934)
static void C_ccall f_1934r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1938)
static void C_ccall f_1938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1944)
static void C_ccall f_1944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1901)
static void C_ccall f_1901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1904)
static void C_ccall f_1904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1873)
static void C_ccall f_1873(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1873)
static void C_ccall f_1873r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1886)
static void C_ccall f_1886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1784)
static void C_ccall f_1784(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1784)
static void C_ccall f_1784r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1825)
static void C_fcall f_1825(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1820)
static void C_fcall f_1820(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1789)
static void C_fcall f_1789(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1793)
static void C_ccall f_1793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1806)
static void C_fcall f_1806(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1803)
static void C_ccall f_1803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1715)
static void C_ccall f_1715(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1715)
static void C_ccall f_1715r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1719)
static void C_ccall f_1719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1722)
static void C_ccall f_1722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1725)
static void C_ccall f_1725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1730)
static void C_fcall f_1730(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1734)
static void C_ccall f_1734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1740)
static void C_ccall f_1740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1743)
static void C_ccall f_1743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1598)
static void C_ccall f_1598(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1602)
static void C_ccall f_1602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1626)
static void C_ccall f_1626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1629)
static void C_ccall f_1629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1634)
static void C_fcall f_1634(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1638)
static void C_ccall f_1638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1650)
static void C_ccall f_1650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1611)
static void C_ccall f_1611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1614)
static void C_ccall f_1614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1550)
static void C_fcall f_1550(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1545)
static void C_fcall f_1545(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1503)
static void C_fcall f_1503(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1355)
static void C_ccall f_1355(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1495)
static void C_ccall f_1495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1365)
static void C_fcall f_1365(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1435)
static void C_fcall f_1435(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1439)
static void C_ccall f_1439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1442)
static void C_fcall f_1442(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1376)
static void C_fcall f_1376(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1380)
static void C_ccall f_1380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1332)
static void C_ccall f_1332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1287)
static void C_fcall f_1287(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1300)
static void C_ccall f_1300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1116)
static void C_ccall f_1116(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1116)
static void C_ccall f_1116r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1126)
static void C_fcall f_1126(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1129)
static void C_ccall f_1129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1154)
static void C_fcall f_1154(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1167)
static void C_ccall f_1167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1240)
static void C_ccall f_1240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1232)
static void C_ccall f_1232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1218)
static void C_fcall f_1218(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1200)
static void C_ccall f_1200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1209)
static void C_ccall f_1209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1136)
static void C_fcall f_1136(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1077)
static void C_ccall f_1077(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1042)
static void C_ccall f_1042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1045)
static void C_ccall f_1045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_897)
static void C_ccall f_897(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_897)
static void C_ccall f_897r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_969)
static void C_fcall f_969(C_word t0,C_word t1) C_noret;
C_noret_decl(f_964)
static void C_fcall f_964(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_959)
static void C_fcall f_959(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_899)
static void C_fcall f_899(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_952)
static void C_ccall f_952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_902)
static void C_ccall f_902(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_910)
static void C_ccall f_910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_912)
static void C_fcall f_912(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_932)
static void C_ccall f_932(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_3282)
static void C_fcall trf_3282(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3282(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3282(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3320)
static void C_fcall trf_3320(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3320(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3320(t0,t1,t2,t3);}

C_noret_decl(trf_3355)
static void C_fcall trf_3355(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3355(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3355(t0,t1);}

C_noret_decl(trf_3336)
static void C_fcall trf_3336(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3336(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3336(t0,t1);}

C_noret_decl(trf_1972)
static void C_fcall trf_1972(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1972(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1972(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2593)
static void C_fcall trf_2593(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2593(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2593(t0,t1,t2,t3);}

C_noret_decl(trf_3148)
static void C_fcall trf_3148(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3148(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3148(t0,t1,t2);}

C_noret_decl(trf_3158)
static void C_fcall trf_3158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3158(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3158(t0,t1);}

C_noret_decl(trf_2927)
static void C_fcall trf_2927(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2927(void *dummy){
C_word t8=C_pick(0);
C_word t7=C_pick(1);
C_word t6=C_pick(2);
C_word t5=C_pick(3);
C_word t4=C_pick(4);
C_word t3=C_pick(5);
C_word t2=C_pick(6);
C_word t1=C_pick(7);
C_word t0=C_pick(8);
C_adjust_stack(-9);
f_2927(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_3012)
static void C_fcall trf_3012(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3012(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3012(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2971)
static void C_fcall trf_2971(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2971(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2971(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2930)
static void C_fcall trf_2930(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2930(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2930(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2850)
static void C_fcall trf_2850(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2850(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2850(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2856)
static void C_fcall trf_2856(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2856(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2856(t0,t1,t2,t3);}

C_noret_decl(trf_2841)
static void C_fcall trf_2841(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2841(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2841(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2813)
static void C_fcall trf_2813(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2813(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2813(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2661)
static void C_fcall trf_2661(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2661(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2661(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2629)
static void C_fcall trf_2629(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2629(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2629(t0,t1,t2,t3);}

C_noret_decl(trf_2596)
static void C_fcall trf_2596(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2596(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2596(t0,t1,t2,t3);}

C_noret_decl(trf_2085)
static void C_fcall trf_2085(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2085(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2085(t0,t1,t2,t3);}

C_noret_decl(trf_2419)
static void C_fcall trf_2419(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2419(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2419(t0,t1,t2);}

C_noret_decl(trf_2324)
static void C_fcall trf_2324(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2324(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2324(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2331)
static void C_fcall trf_2331(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2331(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2331(t0,t1);}

C_noret_decl(trf_2115)
static void C_fcall trf_2115(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2115(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2115(t0,t1,t2,t3);}

C_noret_decl(trf_2135)
static void C_fcall trf_2135(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2135(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2135(t0,t1,t2,t3);}

C_noret_decl(trf_2088)
static void C_fcall trf_2088(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2088(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2088(t0,t1,t2,t3);}

C_noret_decl(trf_2066)
static void C_fcall trf_2066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2066(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2066(t0,t1,t2,t3);}

C_noret_decl(trf_1975)
static void C_fcall trf_1975(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1975(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1975(t0,t1);}

C_noret_decl(trf_2007)
static void C_fcall trf_2007(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2007(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2007(t0,t1);}

C_noret_decl(trf_1825)
static void C_fcall trf_1825(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1825(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1825(t0,t1);}

C_noret_decl(trf_1820)
static void C_fcall trf_1820(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1820(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1820(t0,t1,t2);}

C_noret_decl(trf_1789)
static void C_fcall trf_1789(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1789(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1789(t0,t1,t2,t3);}

C_noret_decl(trf_1806)
static void C_fcall trf_1806(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1806(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1806(t0,t1);}

C_noret_decl(trf_1730)
static void C_fcall trf_1730(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1730(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1730(t0,t1);}

C_noret_decl(trf_1634)
static void C_fcall trf_1634(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1634(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1634(t0,t1);}

C_noret_decl(trf_1550)
static void C_fcall trf_1550(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1550(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1550(t0,t1);}

C_noret_decl(trf_1545)
static void C_fcall trf_1545(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1545(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1545(t0,t1,t2);}

C_noret_decl(trf_1503)
static void C_fcall trf_1503(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1503(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1503(t0,t1,t2,t3);}

C_noret_decl(trf_1365)
static void C_fcall trf_1365(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1365(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1365(t0,t1);}

C_noret_decl(trf_1435)
static void C_fcall trf_1435(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1435(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1435(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1442)
static void C_fcall trf_1442(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1442(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1442(t0,t1);}

C_noret_decl(trf_1376)
static void C_fcall trf_1376(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1376(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1376(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1287)
static void C_fcall trf_1287(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1287(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1287(t0,t1,t2,t3);}

C_noret_decl(trf_1126)
static void C_fcall trf_1126(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1126(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1126(t0,t1);}

C_noret_decl(trf_1154)
static void C_fcall trf_1154(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1154(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1154(t0,t1,t2);}

C_noret_decl(trf_1218)
static void C_fcall trf_1218(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1218(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1218(t0,t1);}

C_noret_decl(trf_1136)
static void C_fcall trf_1136(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1136(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1136(t0,t1,t2);}

C_noret_decl(trf_969)
static void C_fcall trf_969(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_969(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_969(t0,t1);}

C_noret_decl(trf_964)
static void C_fcall trf_964(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_964(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_964(t0,t1,t2);}

C_noret_decl(trf_959)
static void C_fcall trf_959(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_959(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_959(t0,t1,t2,t3);}

C_noret_decl(trf_899)
static void C_fcall trf_899(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_899(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_899(t0,t1,t2,t3,t4);}

C_noret_decl(trf_912)
static void C_fcall trf_912(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_912(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_912(t0,t1,t2,t3,t4);}

C_noret_decl(tr6)
static void C_fcall tr6(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6(C_proc6 k){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
(k)(6,t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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
C_extras_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_extras_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("extras_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(840)){
C_save(t1);
C_rereclaim2(840*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,133);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],4,"read");
lf[3]=C_h_intern(&lf[3],7,"reverse");
lf[4]=C_h_intern(&lf[4],20,"call-with-input-file");
lf[5]=C_h_intern(&lf[5],9,"read-file");
lf[6]=C_h_intern(&lf[6],5,"port\077");
lf[7]=C_h_intern(&lf[7],18,"\003sysstandard-input");
lf[8]=C_h_intern(&lf[8],9,"\003syserror");
lf[9]=C_h_intern(&lf[9],11,"random-seed");
lf[10]=C_h_intern(&lf[10],17,"\003syscheck-integer");
lf[11]=C_h_intern(&lf[11],15,"current-seconds");
lf[12]=C_h_intern(&lf[12],9,"randomize");
lf[13]=C_h_intern(&lf[13],6,"random");
lf[14]=C_h_intern(&lf[14],11,"make-string");
lf[15]=C_h_intern(&lf[15],9,"read-line");
lf[16]=C_h_intern(&lf[16],13,"\003syssubstring");
lf[17]=C_h_intern(&lf[17],15,"\003sysread-char-0");
lf[18]=C_h_intern(&lf[18],9,"peek-char");
lf[19]=C_h_intern(&lf[19],17,"\003sysstring-append");
lf[20]=C_h_intern(&lf[20],15,"\003sysmake-string");
lf[21]=C_h_intern(&lf[21],14,"\003syscheck-port");
lf[22]=C_h_intern(&lf[22],10,"read-lines");
lf[23]=C_h_intern(&lf[23],16,"\003sysread-string!");
lf[24]=C_h_intern(&lf[24],12,"read-string!");
lf[25]=C_h_intern(&lf[25],18,"open-output-string");
lf[26]=C_h_intern(&lf[26],17,"get-output-string");
lf[27]=C_h_intern(&lf[27],20,"\003sysread-string/port");
lf[28]=C_h_intern(&lf[28],11,"read-string");
lf[29]=C_h_intern(&lf[29],12,"write-string");
lf[30]=C_h_intern(&lf[30],10,"read-token");
lf[31]=C_h_intern(&lf[31],16,"\003syswrite-char-0");
lf[32]=C_h_intern(&lf[32],15,"\003syspeek-char-0");
lf[33]=C_h_intern(&lf[33],7,"display");
lf[34]=C_h_intern(&lf[34],19,"\003sysstandard-output");
lf[35]=C_h_intern(&lf[35],7,"newline");
lf[36]=C_h_intern(&lf[36],10,"write-line");
lf[37]=C_h_intern(&lf[37],9,"read-byte");
lf[38]=C_h_intern(&lf[38],10,"write-byte");
lf[40]=C_h_intern(&lf[40],5,"quote");
lf[41]=C_h_intern(&lf[41],10,"quasiquote");
lf[42]=C_h_intern(&lf[42],7,"unquote");
lf[43]=C_h_intern(&lf[43],16,"unquote-splicing");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\001\047");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\001`");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\002,@");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\003 . ");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\002()");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\005#!eof");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[56]=C_h_intern(&lf[56],12,"vector->list");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\002#t");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\002#f");
lf[59]=C_h_intern(&lf[59],18,"\003sysnumber->string");
lf[60]=C_h_intern(&lf[60],9,"\003sysprint");
lf[61]=C_h_intern(&lf[61],21,"\003sysprocedure->string");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[65]=C_decode_literal(C_heaptop,"\376B\000\000\001x");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\001U");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\001u");
lf[68]=C_h_intern(&lf[68],9,"char-name");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\002#\134");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\006#<eof>");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\016#<unspecified>");
lf[72]=C_h_intern(&lf[72],19,"\003syspointer->string");
lf[73]=C_h_intern(&lf[73],28,"\003sysarbitrary-unbound-symbol");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\020#<unbound value>");
lf[75]=C_h_intern(&lf[75],19,"\003sysuser-print-hook");
lf[76]=C_h_intern(&lf[76],13,"string-append");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\007#<port ");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\001>");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\001>");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\025#<static blob of size");
lf[81]=C_decode_literal(C_heaptop,"\376B\000\000\017#<blob of size ");
lf[82]=C_decode_literal(C_heaptop,"\376B\000\000\002#>");
lf[83]=C_h_intern(&lf[83],23,"\003syslambda-info->string");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\016#<lambda info ");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\025#<unprintable object>");
lf[86]=C_h_intern(&lf[86],11,"\003sysnumber\077");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\010        ");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\010        ");
lf[89]=C_h_intern(&lf[89],21,"reverse-string-append");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\001#");
lf[91]=C_h_intern(&lf[91],3,"max");
lf[92]=C_h_intern(&lf[92],28,"\003syssymbol->qualified-string");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\001.");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[100]=C_h_intern(&lf[100],6,"lambda");
lf[101]=C_h_intern(&lf[101],2,"if");
lf[102]=C_h_intern(&lf[102],4,"set!");
lf[103]=C_h_intern(&lf[103],4,"cond");
lf[104]=C_h_intern(&lf[104],4,"case");
lf[105]=C_h_intern(&lf[105],3,"and");
lf[106]=C_h_intern(&lf[106],2,"or");
lf[107]=C_h_intern(&lf[107],3,"let");
lf[108]=C_h_intern(&lf[108],5,"begin");
lf[109]=C_h_intern(&lf[109],2,"do");
lf[110]=C_h_intern(&lf[110],4,"let*");
lf[111]=C_h_intern(&lf[111],6,"letrec");
lf[112]=C_h_intern(&lf[112],6,"define");
lf[113]=C_h_intern(&lf[113],18,"pretty-print-width");
lf[114]=C_h_intern(&lf[114],12,"pretty-print");
lf[115]=C_h_intern(&lf[115],19,"current-output-port");
lf[116]=C_h_intern(&lf[116],2,"pp");
lf[117]=C_h_intern(&lf[117],5,"write");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000/too few arguments to formatted output procedure");
lf[120]=C_h_intern(&lf[120],16,"\003sysflush-output");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\037illegal format-string character");
lf[122]=C_h_intern(&lf[122],13,"\003systty-port\077");
lf[123]=C_h_intern(&lf[123],7,"fprintf");
lf[124]=C_h_intern(&lf[124],6,"printf");
lf[125]=C_h_intern(&lf[125],7,"sprintf");
lf[126]=C_h_intern(&lf[126],6,"format");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\023illegal destination");
lf[128]=C_h_intern(&lf[128],12,"output-port\077");
lf[129]=C_h_intern(&lf[129],17,"register-feature!");
lf[130]=C_h_intern(&lf[130],7,"srfi-28");
lf[131]=C_h_intern(&lf[131],14,"make-parameter");
lf[132]=C_h_intern(&lf[132],6,"extras");
C_register_lf2(lf,133,create_ptable());
t2=C_mutate(&lf[0] /* (set! c84 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_889,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_data_structures_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k887 */
static void C_ccall f_889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_889,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_892,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_ports_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k890 in k887 */
static void C_ccall f_892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_892,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_895,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 65   register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[129]+1)))(3,*((C_word*)lf[129]+1),t2,lf[132]);}

/* k893 in k890 in k887 */
static void C_ccall f_895(C_word c,C_word t0,C_word t1){
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
C_word ab[67],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_895,2,t0,t1);}
t2=*((C_word*)lf[2]+1);
t3=*((C_word*)lf[3]+1);
t4=*((C_word*)lf[4]+1);
t5=C_mutate((C_word*)lf[5]+1 /* (set! read-file ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_897,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=((C_word)li6),tmp=(C_word)a,a+=6,tmp));
t6=C_mutate((C_word*)lf[9]+1 /* (set! random-seed ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1038,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[12]+1 /* (set! randomize ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1059,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[13]+1 /* (set! random ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1077,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t9=*((C_word*)lf[14]+1);
t10=C_mutate((C_word*)lf[15]+1 /* (set! read-line ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1116,a[2]=t9,a[3]=((C_word)li12),tmp=(C_word)a,a+=4,tmp));
t11=*((C_word*)lf[15]+1);
t12=*((C_word*)lf[4]+1);
t13=*((C_word*)lf[3]+1);
t14=C_mutate((C_word*)lf[22]+1 /* (set! read-lines ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1265,a[2]=t12,a[3]=t11,a[4]=t13,a[5]=((C_word)li15),tmp=(C_word)a,a+=6,tmp));
t15=C_mutate((C_word*)lf[23]+1 /* (set! read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1355,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[24]+1 /* (set! read-string! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1501,a[2]=((C_word)li22),tmp=(C_word)a,a+=3,tmp));
t17=*((C_word*)lf[25]+1);
t18=*((C_word*)lf[26]+1);
t19=C_mutate((C_word*)lf[27]+1 /* (set! read-string/port ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1598,a[2]=t17,a[3]=t18,a[4]=((C_word)li24),tmp=(C_word)a,a+=5,tmp));
t20=C_mutate((C_word*)lf[28]+1 /* (set! read-string ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1655,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t21=*((C_word*)lf[25]+1);
t22=*((C_word*)lf[26]+1);
t23=C_mutate((C_word*)lf[30]+1 /* (set! read-token ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1715,a[2]=t21,a[3]=t22,a[4]=((C_word)li27),tmp=(C_word)a,a+=5,tmp));
t24=*((C_word*)lf[33]+1);
t25=C_mutate((C_word*)lf[29]+1 /* (set! write-string ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1784,a[2]=t24,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp));
t26=*((C_word*)lf[33]+1);
t27=*((C_word*)lf[35]+1);
t28=C_mutate((C_word*)lf[36]+1 /* (set! write-line ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1873,a[2]=t26,a[3]=t27,a[4]=((C_word)li32),tmp=(C_word)a,a+=5,tmp));
t29=C_mutate((C_word*)lf[37]+1 /* (set! read-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1894,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[38]+1 /* (set! write-byte ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1934,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t31=*((C_word*)lf[25]+1);
t32=*((C_word*)lf[26]+1);
t33=C_mutate(&lf[39] /* (set! generic-write ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1972,a[2]=t31,a[3]=t32,a[4]=((C_word)li68),tmp=(C_word)a,a+=5,tmp));
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3251,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 582  make-parameter */
t35=*((C_word*)lf[131]+1);
((C_proc3)(void*)(*((C_word*)t35+1)))(3,t35,t34,C_fix(79));}

/* k3249 in k893 in k890 in k887 */
static void C_ccall f_3251(C_word c,C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3251,2,t0,t1);}
t2=C_mutate((C_word*)lf[113]+1 /* (set! pretty-print-width ...) */,t1);
t3=C_mutate((C_word*)lf[114]+1 /* (set! pretty-print ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3253,a[2]=((C_word)li70),tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[116]+1 /* (set! pp ...) */,*((C_word*)lf[114]+1));
t5=*((C_word*)lf[117]+1);
t6=*((C_word*)lf[35]+1);
t7=*((C_word*)lf[33]+1);
t8=*((C_word*)lf[25]+1);
t9=*((C_word*)lf[26]+1);
t10=C_mutate(&lf[118] /* (set! fprintf0 ...) */,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3282,a[2]=t8,a[3]=t6,a[4]=t7,a[5]=t5,a[6]=t9,a[7]=((C_word)li75),tmp=(C_word)a,a+=8,tmp));
t11=C_mutate((C_word*)lf[123]+1 /* (set! fprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3580,a[2]=((C_word)li76),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[124]+1 /* (set! printf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3586,a[2]=((C_word)li77),tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[125]+1 /* (set! sprintf ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3592,a[2]=((C_word)li78),tmp=(C_word)a,a+=3,tmp));
t14=*((C_word*)lf[123]+1);
t15=*((C_word*)lf[125]+1);
t16=*((C_word*)lf[124]+1);
t17=C_mutate((C_word*)lf[126]+1 /* (set! format ...) */,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3598,a[2]=t14,a[3]=t15,a[4]=t16,a[5]=((C_word)li79),tmp=(C_word)a,a+=6,tmp));
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3641,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 674  register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[129]+1)))(3,*((C_word*)lf[129]+1),t18,lf[130]);}

/* k3639 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* format in k3249 in k893 in k890 in k887 */
static void C_ccall f_3598(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_3598r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3598r(t0,t1,t2,t3);}}

static void C_ccall f_3598r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(13);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3606,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=t2;
if(C_truep(t6)){
if(C_truep((C_word)C_booleanp(t2))){
C_apply(4,0,t1,((C_word*)t0)[4],((C_word*)t4)[1]);}
else{
if(C_truep((C_word)C_i_stringp(t2))){
t7=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t4)[1]);
t8=C_set_block_item(t4,0,t7);
C_apply(4,0,t1,((C_word*)t0)[3],((C_word*)t4)[1]);}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3631,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 669  output-port? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[128]+1)))(3,*((C_word*)lf[128]+1),t7,t2);}}}
else{
C_apply(4,0,t1,((C_word*)t0)[3],((C_word*)t4)[1]);}}

/* k3629 in format in k3249 in k893 in k890 in k887 */
static void C_ccall f_3631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3631,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[5])+1,t2);
C_apply(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)((C_word*)t0)[5])[1]);}
else{
/* extras.scm: 671  ##sys#error */
t2=*((C_word*)lf[8]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[126],lf[127],((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1]);}}

/* k3604 in format in k3249 in k893 in k890 in k887 */
static void C_ccall f_3606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* sprintf in k3249 in k893 in k890 in k887 */
static void C_ccall f_3592(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_3592r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3592r(t0,t1,t2,t3);}}

static void C_ccall f_3592r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* extras.scm: 659  fprintf0 */
t4=lf[118];
f_3282(t4,t1,lf[125],C_SCHEME_FALSE,t2,t3);}

/* printf in k3249 in k893 in k890 in k887 */
static void C_ccall f_3586(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_3586r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3586r(t0,t1,t2,t3);}}

static void C_ccall f_3586r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* extras.scm: 656  fprintf0 */
t4=lf[118];
f_3282(t4,t1,lf[124],*((C_word*)lf[34]+1),t2,t3);}

/* fprintf in k3249 in k893 in k890 in k887 */
static void C_ccall f_3580(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4r,(void*)f_3580r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3580r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3580r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
/* extras.scm: 653  fprintf0 */
t5=lf[118];
f_3282(t5,t1,lf[123],t2,t3,t4);}

/* fprintf0 in k3249 in k893 in k890 in k887 */
static void C_fcall f_3282(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3282,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3286,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t2,a[9]=((C_word*)t0)[6],a[10]=t1,a[11]=t3,tmp=(C_word)a,a+=12,tmp);
if(C_truep(t3)){
/* extras.scm: 601  ##sys#check-port */
t7=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t3,t2);}
else{
t7=t6;
f_3286(2,t7,C_SCHEME_UNDEFINED);}}

/* k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3286,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3289,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[11],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[11])){
/* extras.scm: 602  ##sys#tty-port? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[122]+1)))(3,*((C_word*)lf[122]+1),t3,((C_word*)t0)[11]);}
else{
/* extras.scm: 604  open-output-string */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t2);}}

/* k3567 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_3289(2,t2,((C_word*)t0)[3]);}
else{
/* extras.scm: 604  open-output-string */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[4]);}}

/* k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3289,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3292,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t1,a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3320,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word)li74),tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_3320(t6,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_fcall f_3320(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[33],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3320,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_i_check_string_2(t2,((C_word*)t0)[7]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(C_word)C_block_size(t2);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3329,a[2]=t7,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3336,a[2]=((C_word*)t0)[7],a[3]=t4,a[4]=((C_word)li71),tmp=(C_word)a,a+=5,tmp));
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[4],a[6]=t12,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=t16,a[10]=t10,a[11]=t8,a[12]=t7,a[13]=((C_word)li73),tmp=(C_word)a,a+=14,tmp));
t18=((C_word*)t16)[1];
f_3355(t18,t1);}

/* loop in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_fcall f_3355(C_word t0,C_word t1){
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
C_word *a;
loop:
a=C_alloc(12);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3355,NULL,2,t0,t1);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[12])[1],((C_word*)t0)[11]))){
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=f_3329(((C_word*)((C_word*)t0)[10])[1]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3368,a[2]=t1,a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(t2,C_make_character(126));
t5=(C_truep(t4)?(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[12])[1],((C_word*)t0)[11]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=f_3329(((C_word*)((C_word*)t0)[10])[1]);
t7=(C_word)C_u_i_char_upcase(t6);
switch(t7){
case C_make_character(83):
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3393,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 625  next */
t9=((C_word*)((C_word*)t0)[6])[1];
f_3336(t9,t8);
case C_make_character(65):
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3406,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 626  next */
t9=((C_word*)((C_word*)t0)[6])[1];
f_3336(t9,t8);
case C_make_character(67):
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3419,a[2]=((C_word*)t0)[7],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 627  next */
t9=((C_word*)((C_word*)t0)[6])[1];
f_3336(t9,t8);
case C_make_character(66):
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3432,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3436,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 628  next */
t10=((C_word*)((C_word*)t0)[6])[1];
f_3336(t10,t9);
case C_make_character(79):
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3449,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3453,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 629  next */
t10=((C_word*)((C_word*)t0)[6])[1];
f_3336(t10,t9);
case C_make_character(88):
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3466,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3470,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 630  next */
t10=((C_word*)((C_word*)t0)[6])[1];
f_3336(t10,t9);
case C_make_character(33):
/* extras.scm: 631  ##sys#flush-output */
t8=*((C_word*)lf[120]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t3,((C_word*)t0)[7]);
case C_make_character(63):
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3488,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 633  next */
t9=((C_word*)((C_word*)t0)[6])[1];
f_3336(t9,t8);
case C_make_character(126):
/* extras.scm: 637  ##sys#write-char-0 */
t8=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,C_make_character(126),((C_word*)t0)[7]);
default:
t8=(C_word)C_eqp(t7,C_make_character(37));
t9=(C_truep(t8)?t8:(C_word)C_eqp(t7,C_make_character(78)));
if(C_truep(t9)){
/* extras.scm: 638  newline */
t10=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t10))(3,t10,t3,((C_word*)t0)[7]);}
else{
if(C_truep((C_word)C_u_i_char_whitespacep(t6))){
t10=f_3329(((C_word*)((C_word*)t0)[10])[1]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3533,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[10],a[4]=((C_word)li72),tmp=(C_word)a,a+=5,tmp);
t12=f_3533(t11,t10);
/* extras.scm: 647  loop */
t25=t1;
t1=t25;
goto loop;}
else{
/* extras.scm: 645  ##sys#error */
t10=*((C_word*)lf[8]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t3,((C_word*)t0)[4],lf[121],t6);}}}}
else{
/* extras.scm: 646  ##sys#write-char-0 */
t6=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t2,((C_word*)t0)[7]);}}}

/* skip in loop in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static C_word C_fcall f_3533(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
if(C_truep((C_word)C_u_i_char_whitespacep(t1))){
t2=f_3329(((C_word*)((C_word*)t0)[3])[1]);
t6=t2;
t1=t6;
goto loop;}
else{
t2=(C_word)C_fixnum_difference(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}}

/* k3486 in loop in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3491,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 634  next */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3336(t3,t2);}

/* k3489 in k3486 in loop in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3491,2,t0,t1);}
t2=(C_word)C_i_check_list_2(t1,((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3497,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 636  rec */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3320(t4,t3,((C_word*)t0)[2],t1);}

/* k3495 in k3489 in k3486 in loop in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 647  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3355(t2,((C_word*)t0)[2]);}

/* k3468 in loop in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 630  ##sys#number->string */
t2=*((C_word*)lf[59]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_fix(16));}

/* k3464 in loop in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 630  display */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3451 in loop in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 629  ##sys#number->string */
t2=*((C_word*)lf[59]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_fix(8));}

/* k3447 in loop in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 629  display */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3434 in loop in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 628  ##sys#number->string */
t2=*((C_word*)lf[59]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_fix(2));}

/* k3430 in loop in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 628  display */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3417 in loop in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 627  ##sys#write-char-0 */
t2=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3404 in loop in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 626  display */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3391 in loop in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 625  write */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3366 in loop in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 647  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3355(t2,((C_word*)t0)[2]);}

/* next in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_fcall f_3336(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3336,NULL,2,t0,t1);}
if(C_truep((C_word)C_eqp(((C_word*)((C_word*)t0)[3])[1],C_SCHEME_END_OF_LIST))){
/* extras.scm: 615  ##sys#error */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[2],lf[119]);}
else{
t2=(C_word)C_slot(((C_word*)((C_word*)t0)[3])[1],C_fix(0));
t3=(C_word)C_slot(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* fetch in rec in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static C_word C_fcall f_3329(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t1=(C_word)C_subchar(((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);
t2=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t1);}

/* k3290 in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3292,2,t0,t1);}
t2=((C_word*)t0)[5];
if(C_truep(t2)){
t3=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[5]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3314,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 650  get-output-string */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[4]);}}
else{
/* extras.scm: 648  get-output-string */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k3312 in k3290 in k3287 in k3284 in fprintf0 in k3249 in k893 in k890 in k887 */
static void C_ccall f_3314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 650  ##sys#print */
t2=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],t1,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* pretty-print in k3249 in k893 in k890 in k887 */
static void C_ccall f_3253(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3rv,(void*)f_3253r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_3253r(t0,t1,t2,t3);}}

static void C_ccall f_3253r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3257,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_notvemptyp(t3))){
t5=t4;
f_3257(2,t5,(C_word)C_i_vector_ref(t3,C_fix(0)));}
else{
/* extras.scm: 585  current-output-port */
t5=*((C_word*)lf[115]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k3255 in pretty-print in k3249 in k893 in k890 in k887 */
static void C_ccall f_3257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3257,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3260,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3264,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 586  pretty-print-width */
t4=*((C_word*)lf[113]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3262 in k3255 in pretty-print in k3249 in k893 in k890 in k887 */
static void C_ccall f_3264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3266,a[2]=((C_word*)t0)[4],a[3]=((C_word)li69),tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 586  generic-write */
t3=lf[39];
f_1972(t3,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t1,t2);}

/* a3265 in k3262 in k3255 in pretty-print in k3249 in k893 in k890 in k887 */
static void C_ccall f_3266(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3266,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3270,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 586  display */
t4=*((C_word*)lf[33]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,((C_word*)t0)[2]);}

/* k3268 in a3265 in k3262 in k3255 in pretty-print in k3249 in k893 in k890 in k887 */
static void C_ccall f_3270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* k3258 in k3255 in pretty-print in k3249 in k893 in k890 in k887 */
static void C_ccall f_3260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* generic-write in k893 in k890 in k887 */
static void C_fcall f_1972(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word ab[45],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1972,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1975,a[2]=((C_word)li35),tmp=(C_word)a,a+=3,tmp));
t17=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2033,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t18=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2066,a[2]=t5,a[3]=((C_word)li37),tmp=(C_word)a,a+=4,tmp));
t19=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2085,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t7,a[6]=t11,a[7]=t9,a[8]=t13,a[9]=((C_word)li43),tmp=(C_word)a,a+=10,tmp));
t20=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2593,a[2]=t7,a[3]=t9,a[4]=t13,a[5]=t4,a[6]=t3,a[7]=t11,a[8]=((C_word)li67),tmp=(C_word)a,a+=9,tmp));
if(C_truep(t4)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3240,a[2]=t2,a[3]=t15,a[4]=t1,a[5]=t11,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 576  make-string */
t22=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t22+1)))(4,t22,t21,C_fix(1),C_make_character(10));}
else{
/* extras.scm: 577  wr */
t21=((C_word*)t13)[1];
f_2085(t21,t1,t2,C_fix(0));}}

/* k3238 in generic-write in k893 in k890 in k887 */
static void C_ccall f_3240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3240,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3244,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 576  pp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2593(t3,t2,((C_word*)t0)[2],C_fix(0));}

/* k3242 in k3238 in generic-write in k893 in k890 in k887 */
static void C_ccall f_3244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 576  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* pp in generic-write in k893 in k890 in k887 */
static void C_fcall f_2593(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[152],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2593,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_UNDEFINED;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_UNDEFINED;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_UNDEFINED;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=C_SCHEME_UNDEFINED;
t31=(*a=C_VECTOR_TYPE|1,a[1]=t30,tmp=(C_word)a,a+=2,tmp);
t32=C_SCHEME_UNDEFINED;
t33=(*a=C_VECTOR_TYPE|1,a[1]=t32,tmp=(C_word)a,a+=2,tmp);
t34=C_SCHEME_UNDEFINED;
t35=(*a=C_VECTOR_TYPE|1,a[1]=t34,tmp=(C_word)a,a+=2,tmp);
t36=C_SCHEME_UNDEFINED;
t37=(*a=C_VECTOR_TYPE|1,a[1]=t36,tmp=(C_word)a,a+=2,tmp);
t38=C_SCHEME_UNDEFINED;
t39=(*a=C_VECTOR_TYPE|1,a[1]=t38,tmp=(C_word)a,a+=2,tmp);
t40=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2596,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word)li44),tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2629,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=((C_word)li45),tmp=(C_word)a,a+=5,tmp));
t42=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2661,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t11,a[6]=t15,a[7]=((C_word*)t0)[7],a[8]=((C_word)li47),tmp=(C_word)a,a+=9,tmp));
t43=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2748,a[2]=((C_word*)t0)[2],a[3]=t15,a[4]=t39,a[5]=t13,a[6]=t19,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[3],a[9]=t11,a[10]=t9,a[11]=((C_word)li48),tmp=(C_word)a,a+=12,tmp));
t44=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2813,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t17,a[5]=((C_word)li49),tmp=(C_word)a,a+=6,tmp));
t45=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2841,a[2]=((C_word*)t0)[7],a[3]=t17,a[4]=((C_word)li50),tmp=(C_word)a,a+=5,tmp));
t46=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2850,a[2]=((C_word*)t0)[7],a[3]=t7,a[4]=t9,a[5]=((C_word)li52),tmp=(C_word)a,a+=6,tmp));
t47=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2927,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t17,a[5]=t7,a[6]=t9,a[7]=((C_word)li56),tmp=(C_word)a,a+=8,tmp));
t48=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3075,a[2]=t11,a[3]=t15,a[4]=((C_word)li57),tmp=(C_word)a,a+=5,tmp));
t49=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3081,a[2]=t11,a[3]=t21,a[4]=t19,a[5]=((C_word)li58),tmp=(C_word)a,a+=6,tmp));
t50=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3087,a[2]=t11,a[3]=t19,a[4]=((C_word)li59),tmp=(C_word)a,a+=5,tmp));
t51=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3093,a[2]=t21,a[3]=t13,a[4]=((C_word)li60),tmp=(C_word)a,a+=5,tmp));
t52=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3099,a[2]=t21,a[3]=t11,a[4]=t19,a[5]=((C_word)li61),tmp=(C_word)a,a+=6,tmp));
t53=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3105,a[2]=t11,a[3]=t13,a[4]=((C_word)li62),tmp=(C_word)a,a+=5,tmp));
t54=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3111,a[2]=t11,a[3]=t21,a[4]=t19,a[5]=((C_word)li63),tmp=(C_word)a,a+=6,tmp));
t55=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3133,a[2]=t11,a[3]=t19,a[4]=((C_word)li64),tmp=(C_word)a,a+=5,tmp));
t56=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3139,a[2]=t11,a[3]=t21,a[4]=t19,a[5]=((C_word)li65),tmp=(C_word)a,a+=6,tmp));
t57=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3148,a[2]=t37,a[3]=t35,a[4]=t33,a[5]=t31,a[6]=t29,a[7]=t27,a[8]=t25,a[9]=t23,a[10]=((C_word)li66),tmp=(C_word)a,a+=11,tmp));
/* extras.scm: 573  pr */
t58=((C_word*)t9)[1];
f_2661(t58,t1,t2,t3,C_fix(0),((C_word*)t11)[1]);}

/* style in pp in generic-write in k893 in k890 in k887 */
static void C_fcall f_3148(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3148,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,lf[100]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[9],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
if(C_truep(t3)){
t5=t4;
f_3158(t5,t3);}
else{
t5=(C_word)C_eqp(t2,lf[110]);
if(C_truep(t5)){
t6=t4;
f_3158(t6,t5);}
else{
t6=(C_word)C_eqp(t2,lf[111]);
t7=t4;
f_3158(t7,(C_truep(t6)?t6:(C_word)C_eqp(t2,lf[112])));}}}

/* k3156 in style in pp in generic-write in k893 in k890 in k887 */
static void C_fcall f_3158(C_word t0,C_word t1){
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
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[10])[1]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[9],lf[101]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[9],lf[102]));
if(C_truep(t3)){
t4=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)((C_word*)t0)[8])[1]);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[9],lf[103]);
if(C_truep(t4)){
t5=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)((C_word*)t0)[7])[1]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[9],lf[104]);
if(C_truep(t5)){
t6=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,((C_word*)((C_word*)t0)[6])[1]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[9],lf[105]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(((C_word*)t0)[9],lf[106]));
if(C_truep(t7)){
t8=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,((C_word*)((C_word*)t0)[5])[1]);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[9],lf[107]);
if(C_truep(t8)){
t9=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,((C_word*)((C_word*)t0)[4])[1]);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[9],lf[108]);
if(C_truep(t9)){
t10=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,((C_word*)((C_word*)t0)[3])[1]);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[9],lf[109]);
t11=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_truep(t10)?((C_word*)((C_word*)t0)[2])[1]:C_SCHEME_FALSE));}}}}}}}}

/* pp-do in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_3139(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3139,5,t0,t1,t2,t3,t4);}
/* extras.scm: 551  pp-general */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2927(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* pp-begin in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_3133(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3133,5,t0,t1,t2,t3,t4);}
/* extras.scm: 548  pp-general */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2927(t5,t1,t2,t3,t4,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-let in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_3111(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3111,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t5))){
t6=(C_word)C_i_car(t5);
t7=(C_word)C_i_symbolp(t6);
/* extras.scm: 545  pp-general */
t8=((C_word*)((C_word*)t0)[4])[1];
f_2927(t8,t1,t2,t3,t4,t7,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}
else{
/* extras.scm: 545  pp-general */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2927(t6,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}}

/* pp-and in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_3105(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3105,5,t0,t1,t2,t3,t4);}
/* extras.scm: 540  pp-call */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2813(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-case in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_3099(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3099,5,t0,t1,t2,t3,t4);}
/* extras.scm: 537  pp-general */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2927(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-cond in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_3093(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3093,5,t0,t1,t2,t3,t4);}
/* extras.scm: 534  pp-call */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2813(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-if in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_3087(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3087,5,t0,t1,t2,t3,t4);}
/* extras.scm: 531  pp-general */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2927(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-lambda in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_3081(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3081,5,t0,t1,t2,t3,t4);}
/* extras.scm: 528  pp-general */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2927(t5,t1,t2,t3,t4,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-expr-list in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_3075(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3075,5,t0,t1,t2,t3,t4);}
/* extras.scm: 525  pp-list */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2841(t5,t1,t2,t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* pp-general in pp in generic-write in k893 in k890 in k887 */
static void C_fcall f_2927(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
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
C_word ab[42],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2927,NULL,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2930,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t12,a[5]=t4,a[6]=t6,a[7]=((C_word)li53),tmp=(C_word)a,a+=8,tmp));
t16=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2971,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t14,a[5]=t4,a[6]=t7,a[7]=((C_word)li54),tmp=(C_word)a,a+=8,tmp));
t17=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3012,a[2]=t8,a[3]=t4,a[4]=((C_word*)t0)[4],a[5]=((C_word)li55),tmp=(C_word)a,a+=6,tmp));
t18=(C_word)C_i_car(t2);
t19=(C_word)C_i_cdr(t2);
t20=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3025,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t10,a[6]=t3,a[7]=t19,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3073,a[2]=t18,a[3]=t20,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 516  out */
t22=((C_word*)((C_word*)t0)[2])[1];
f_2066(t22,t21,lf[99],t3);}

/* k3071 in pp-general in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_3073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 516  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2085(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3023 in pp-general in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_3025(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3025,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[8])?(C_word)C_i_pairp(((C_word*)t0)[7]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(C_word)C_i_car(((C_word*)t0)[7]);
t4=(C_word)C_i_cdr(((C_word*)t0)[7]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3040,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3055,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 520  out */
t7=((C_word*)((C_word*)t0)[2])[1];
f_2066(t7,t6,lf[98],t1);}
else{
t3=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(2));
t4=(C_word)C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm: 522  tail1 */
t5=((C_word*)((C_word*)t0)[5])[1];
f_2930(t5,((C_word*)t0)[4],((C_word*)t0)[7],t3,t1,t4);}}

/* k3053 in k3023 in pp-general in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 520  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2085(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3038 in k3023 in pp-general in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_3040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3040,2,t0,t1);}
t2=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(2));
t3=(C_word)C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm: 521  tail1 */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2930(t4,((C_word*)t0)[3],((C_word*)t0)[2],t2,t1,t3);}

/* tail3 in pp-general in pp in generic-write in k893 in k890 in k887 */
static void C_fcall f_3012(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3012,NULL,5,t0,t1,t2,t3,t4);}
/* extras.scm: 512  pp-down */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2850(t5,t1,t2,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* tail2 in pp-general in pp in generic-write in k893 in k890 in k887 */
static void C_fcall f_2971(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2971,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(((C_word*)t0)[6])?(C_word)C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=(C_word)C_i_car(t2);
t8=(C_word)C_i_cdr(t2);
t9=(C_word)C_i_nullp(t8);
t10=(C_truep(t9)?(C_word)C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1)):C_fix(0));
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2994,a[2]=t3,a[3]=t8,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2998,a[2]=((C_word*)t0)[6],a[3]=t10,a[4]=t7,a[5]=t11,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 508  indent */
t13=((C_word*)((C_word*)t0)[2])[1];
f_2629(t13,t12,t5,t4);}
else{
/* extras.scm: 509  tail3 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3012(t7,t1,t2,t3,t4);}}

/* k2996 in tail2 in pp-general in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 508  pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2661(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2992 in tail2 in pp-general in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 508  tail3 */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3012(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* tail1 in pp-general in pp in generic-write in k893 in k890 in k887 */
static void C_fcall f_2930(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2930,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(((C_word*)t0)[6])?(C_word)C_i_pairp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=(C_word)C_i_car(t2);
t8=(C_word)C_i_cdr(t2);
t9=(C_word)C_i_nullp(t8);
t10=(C_truep(t9)?(C_word)C_a_i_plus(&a,2,((C_word*)t0)[5],C_fix(1)):C_fix(0));
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2953,a[2]=t5,a[3]=t3,a[4]=t8,a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2957,a[2]=((C_word*)t0)[6],a[3]=t10,a[4]=t7,a[5]=t11,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 500  indent */
t13=((C_word*)((C_word*)t0)[2])[1];
f_2629(t13,t12,t5,t4);}
else{
/* extras.scm: 501  tail2 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_2971(t7,t1,t2,t3,t4,t5);}}

/* k2955 in tail1 in pp-general in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 500  pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2661(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2951 in tail1 in pp-general in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 500  tail2 */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2971(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* pp-down in pp in generic-write in k893 in k890 in k887 */
static void C_fcall f_2850(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2850,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2856,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t6,a[6]=((C_word*)t0)[4],a[7]=t8,a[8]=t5,a[9]=((C_word)li51),tmp=(C_word)a,a+=10,tmp));
t10=((C_word*)t8)[1];
f_2856(t10,t1,t2,t3);}

/* loop in pp-down in pp in generic-write in k893 in k890 in k887 */
static void C_fcall f_2856(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2856,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_i_nullp(t4);
t6=(C_truep(t5)?(C_word)C_a_i_plus(&a,2,((C_word*)t0)[8],C_fix(1)):C_fix(0));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2879,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_i_car(t2);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2887,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=t8,a[5]=t7,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 483  indent */
t10=((C_word*)((C_word*)t0)[4])[1];
f_2629(t10,t9,((C_word*)t0)[3],t3);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
/* extras.scm: 485  out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2066(t4,t1,lf[95],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2909,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2913,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t4,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2921,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2925,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 489  indent */
t8=((C_word*)((C_word*)t0)[4])[1];
f_2629(t8,t7,((C_word*)t0)[3],t3);}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2923 in loop in pp-down in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 489  out */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2066(t2,((C_word*)t0)[2],lf[97],t1);}

/* k2919 in loop in pp-down in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 489  indent */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2629(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2911 in loop in pp-down in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2913,2,t0,t1);}
t2=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[6],C_fix(1));
/* extras.scm: 488  pr */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2661(t3,((C_word*)t0)[4],((C_word*)t0)[3],t1,t2,((C_word*)t0)[2]);}

/* k2907 in loop in pp-down in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 487  out */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2066(t2,((C_word*)t0)[2],lf[96],t1);}

/* k2885 in loop in pp-down in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 483  pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2661(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2877 in loop in pp-down in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 482  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2856(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* pp-list in pp in generic-write in k893 in k890 in k887 */
static void C_fcall f_2841(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2841,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2845,a[2]=t5,a[3]=t4,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 473  out */
t7=((C_word*)((C_word*)t0)[2])[1];
f_2066(t7,t6,lf[94],t3);}

/* k2843 in pp-list in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 474  pp-down */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2850(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* pp-call in pp in generic-write in k893 in k890 in k887 */
static void C_fcall f_2813(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2813,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2817,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t7=(C_word)C_i_car(t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2839,a[2]=t7,a[3]=t6,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 465  out */
t9=((C_word*)((C_word*)t0)[2])[1];
f_2066(t9,t8,lf[93],t3);}

/* k2837 in pp-call in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 465  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2085(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2815 in pp-call in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2817,2,t0,t1);}
if(C_truep(((C_word*)t0)[7])){
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_plus(&a,2,t1,C_fix(1));
/* extras.scm: 467  pp-down */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2850(t4,((C_word*)t0)[4],t2,t1,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* pp-expr in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2748(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2748,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2755,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t4,a[11]=t1,a[12]=((C_word*)t0)[10],a[13]=t2,tmp=(C_word)a,a+=14,tmp);
/* extras.scm: 445  read-macro? */
f_1975(t5,t2);}

/* k2753 in pp-expr in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2755,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[13];
t3=(C_word)C_i_cadr(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2766,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t3,a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
t5=f_2033(((C_word*)t0)[13]);
/* extras.scm: 447  out */
t6=((C_word*)((C_word*)t0)[7])[1];
f_2066(t6,t4,t5,((C_word*)t0)[6]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[13]);
if(C_truep((C_word)C_i_symbolp(t2))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2782,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
/* extras.scm: 452  style */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3148(t4,t3,t2);}
else{
/* extras.scm: 459  pp-list */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2841(t3,((C_word*)t0)[11],((C_word*)t0)[13],((C_word*)t0)[6],((C_word*)t0)[10],((C_word*)((C_word*)t0)[9])[1]);}}}

/* k2780 in k2753 in pp-expr in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2782,2,t0,t1);}
if(C_truep(t1)){
/* extras.scm: 454  proc */
t2=t1;
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2808,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* extras.scm: 455  ##sys#symbol->qualified-string */
t3=*((C_word*)lf[92]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}}

/* k2806 in k2780 in k2753 in pp-expr in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_string_length(t1);
if(C_truep((C_word)C_i_greaterp(t2,C_fix(5)))){
/* extras.scm: 457  pp-general */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2927(t3,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}
else{
/* extras.scm: 458  pp-call */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2813(t3,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);}}

/* k2764 in k2753 in pp-expr in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 446  pr */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2661(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* pr in pp in generic-write in k893 in k890 in k887 */
static void C_fcall f_2661(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2661,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_pairp(t2);
t7=(C_truep(t6)?t6:(C_word)C_i_vectorp(t2));
if(C_truep(t7)){
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2674,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=t5,a[7]=t2,a[8]=t9,a[9]=t3,a[10]=t1,a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t11=(C_word)C_a_i_minus(&a,2,((C_word*)t0)[3],t3);
t12=(C_word)C_a_i_minus(&a,2,t11,t4);
t13=(C_word)C_a_i_plus(&a,2,t12,C_fix(1));
/* extras.scm: 431  max */
t14=*((C_word*)lf[91]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t10,t13,C_fix(50));}
else{
/* extras.scm: 442  wr */
t8=((C_word*)((C_word*)t0)[2])[1];
f_2085(t8,t1,t2,t3);}}

/* k2672 in pr in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2674,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2677,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t3,tmp=(C_word)a,a+=12,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2712,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=((C_word)li46),tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 432  generic-write */
t6=lf[39];
f_1972(t6,t4,((C_word*)t0)[7],((C_word*)t0)[2],C_SCHEME_FALSE,t5);}

/* a2711 in k2672 in pr in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2712(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2712,3,t0,t1,t2);}
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=(C_word)C_i_string_length(t2);
t6=(C_word)C_a_i_minus(&a,2,((C_word*)((C_word*)t0)[2])[1],t5);
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_greaterp(((C_word*)((C_word*)t0)[2])[1],C_fix(0)));}

/* k2675 in k2672 in pr in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2677,2,t0,t1);}
if(C_truep((C_word)C_i_greaterp(((C_word*)((C_word*)t0)[11])[1],C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2690,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 438  reverse-string-append */
((C_proc3)C_retrieve_proc(*((C_word*)lf[89]+1)))(3,*((C_word*)lf[89]+1),t2,((C_word*)((C_word*)t0)[7])[1]);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[6]))){
/* extras.scm: 440  pp-pair */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[9],((C_word*)t0)[6],((C_word*)t0)[8],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2706,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* extras.scm: 441  vector->list */
t3=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[6]);}}}

/* k2704 in k2675 in k2672 in pr in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2706,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2710,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 441  out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2066(t3,t2,lf[90],((C_word*)t0)[2]);}

/* k2708 in k2704 in k2675 in k2672 in pr in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 441  pp-list */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2841(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k2688 in k2675 in k2672 in pr in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 438  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* indent in pp in generic-write in k893 in k890 in k887 */
static void C_fcall f_2629(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2629,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
if(C_truep((C_word)C_i_lessp(t2,t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2645,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2652,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 425  make-string */
t6=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_fix(1),C_make_character(10));}
else{
t4=(C_word)C_a_i_minus(&a,2,t2,t3);
/* extras.scm: 426  spaces */
t5=((C_word*)((C_word*)t0)[3])[1];
f_2596(t5,t1,t4,t3);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2650 in indent in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 425  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2643 in indent in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm: 425  spaces */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2596(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* spaces in pp in generic-write in k893 in k890 in k887 */
static void C_fcall f_2596(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2596,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_greaterp(t2,C_fix(0)))){
if(C_truep((C_word)C_i_greaterp(t2,C_fix(7)))){
t4=(C_word)C_a_i_minus(&a,2,t2,C_fix(8));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2620,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 418  out */
t6=((C_word*)((C_word*)t0)[2])[1];
f_2066(t6,t5,lf[87],t3);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2627,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 419  ##sys#substring */
t5=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[88],C_fix(0),t2);}}
else{
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2625 in spaces in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 419  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2618 in spaces in pp in generic-write in k893 in k890 in k887 */
static void C_ccall f_2620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 418  spaces */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2596(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* wr in generic-write in k893 in k890 in k887 */
static void C_fcall f_2085(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2085,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2088,a[2]=((C_word*)t0)[5],a[3]=t6,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word)li38),tmp=(C_word)a,a+=8,tmp);
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2115,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
if(C_truep((C_word)C_i_pairp(t2))){
/* extras.scm: 351  wr-expr */
t9=t4;
f_2088(t9,t1,t2,t3);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
/* extras.scm: 352  wr-lst */
t9=((C_word*)t6)[1];
f_2115(t9,t1,t2,t3);}
else{
if(C_truep((C_word)C_eofp(t2))){
/* extras.scm: 353  out */
t9=((C_word*)((C_word*)t0)[6])[1];
f_2066(t9,t1,lf[54],t3);}
else{
if(C_truep((C_word)C_i_vectorp(t2))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2241,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 354  vector->list */
t10=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
if(C_truep((C_word)C_booleanp(t2))){
if(C_truep(t2)){
/* extras.scm: 355  out */
t9=((C_word*)((C_word*)t0)[6])[1];
f_2066(t9,t1,lf[57],t3);}
else{
/* extras.scm: 355  out */
t9=((C_word*)((C_word*)t0)[6])[1];
f_2066(t9,t1,lf[58],t3);}}
else{
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t3,a[7]=t1,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* extras.scm: 356  ##sys#number? */
t10=*((C_word*)lf[86]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}}}}}}

/* k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2264(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2264,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2271,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 356  ##sys#number->string */
t3=*((C_word*)lf[59]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2280,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 358  open-output-string */
t3=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2303,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 361  ##sys#procedure->string */
t3=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[2])){
/* extras.scm: 363  out */
t2=((C_word*)((C_word*)t0)[8])[1];
f_2066(t2,((C_word*)t0)[7],((C_word*)t0)[5],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2322,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 364  out */
t3=((C_word*)((C_word*)t0)[8])[1];
f_2066(t3,t2,lf[64],((C_word*)t0)[6]);}}
else{
if(C_truep((C_word)C_charp(((C_word*)t0)[5]))){
if(C_truep(((C_word*)t0)[2])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2406,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 378  make-string */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(1),((C_word*)t0)[5]);}
else{
t2=(C_word)C_fix((C_word)C_character_code(((C_word*)t0)[5]));
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2412,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 380  out */
t4=((C_word*)((C_word*)t0)[8])[1];
f_2066(t4,t3,lf[69],((C_word*)t0)[6]);}}
else{
if(C_truep((C_word)C_eofp(((C_word*)t0)[5]))){
/* extras.scm: 391  out */
t2=((C_word*)((C_word*)t0)[8])[1];
f_2066(t2,((C_word*)t0)[7],lf[70],((C_word*)t0)[6]);}
else{
if(C_truep((C_word)C_undefinedp(((C_word*)t0)[5]))){
/* extras.scm: 392  out */
t2=((C_word*)((C_word*)t0)[8])[1];
f_2066(t2,((C_word*)t0)[7],lf[71],((C_word*)t0)[6]);}
else{
if(C_truep((C_word)C_anypointerp(((C_word*)t0)[5]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2501,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 393  ##sys#pointer->string */
t3=*((C_word*)lf[72]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(C_word)C_slot(lf[73],C_fix(0));
t3=(C_word)C_eqp(((C_word*)t0)[5],t2);
if(C_truep(t3)){
/* extras.scm: 395  out */
t4=((C_word*)((C_word*)t0)[8])[1];
f_2066(t4,((C_word*)t0)[7],lf[74],((C_word*)t0)[6]);}
else{
if(C_truep((C_word)C_structurep(((C_word*)t0)[5]))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2519,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 397  open-output-string */
t5=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2535,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 400  port? */
t5=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}}}}}}}}}}}

/* k2533 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2535,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2542,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[2],C_fix(3));
/* extras.scm: 400  string-append */
t4=*((C_word*)lf[76]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,lf[77],t3,lf[78]);}
else{
if(C_truep((C_word)C_bytevectorp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2552,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_permanentp(((C_word*)t0)[2]))){
/* extras.scm: 403  out */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2066(t3,t2,lf[80],((C_word*)t0)[3]);}
else{
/* extras.scm: 404  out */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2066(t3,t2,lf[81],((C_word*)t0)[3]);}}
else{
if(C_truep((C_word)C_lambdainfop(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2574,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 408  out */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2066(t3,t2,lf[84],((C_word*)t0)[3]);}
else{
/* extras.scm: 411  out */
t2=((C_word*)((C_word*)t0)[5])[1];
f_2066(t2,((C_word*)t0)[4],lf[85],((C_word*)t0)[3]);}}}}

/* k2572 in k2533 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2574,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2577,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2584,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 409  ##sys#lambda-info->string */
((C_proc3)C_retrieve_proc(*((C_word*)lf[83]+1)))(3,*((C_word*)lf[83]+1),t3,((C_word*)t0)[2]);}

/* k2582 in k2572 in k2533 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 409  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2575 in k2572 in k2533 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 410  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],lf[82],((C_word*)t0)[2]);}

/* k2550 in k2533 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2552,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2555,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2562,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 405  number->string */
C_number_to_string(3,0,t3,(C_word)C_block_size(((C_word*)t0)[2]));}

/* k2560 in k2550 in k2533 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 405  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2553 in k2550 in k2533 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 406  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],lf[79],((C_word*)t0)[2]);}

/* k2540 in k2533 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 400  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2517 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2519,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2522,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 398  ##sys#user-print-hook */
t3=*((C_word*)lf[75]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* k2520 in k2517 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2522,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2529,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 399  get-output-string */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2527 in k2520 in k2517 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 399  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2499 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 393  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2410 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2412,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2415,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 381  char-name */
t3=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2413 in k2410 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2415,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2419,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word)li42),tmp=(C_word)a,a+=5,tmp);
/* g524525 */
t3=t2;
f_2419(t3,((C_word*)t0)[4],t1);}
else{
if(C_truep((C_word)C_fixnum_lessp(((C_word*)t0)[3],C_fix(32)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2439,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 385  out */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2066(t3,t2,lf[65],((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[3],C_fix(255)))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2455,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[3],C_fix(65535)))){
/* extras.scm: 388  out */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2066(t3,t2,lf[66],((C_word*)t0)[5]);}
else{
/* extras.scm: 388  out */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2066(t3,t2,lf[67],((C_word*)t0)[5]);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2476,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 390  make-string */
t3=*((C_word*)lf[14]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_fix(1),((C_word*)t0)[2]);}}}}

/* k2474 in k2413 in k2410 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 390  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2453 in k2413 in k2410 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2462,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 389  number->string */
C_number_to_string(4,0,t2,((C_word*)t0)[2],C_fix(16));}

/* k2460 in k2453 in k2413 in k2410 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 389  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2437 in k2413 in k2410 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2446,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 386  number->string */
C_number_to_string(4,0,t2,((C_word*)t0)[2],C_fix(16));}

/* k2444 in k2437 in k2413 in k2410 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 386  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* g524 in k2413 in k2410 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_fcall f_2419(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2419,NULL,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
/* extras.scm: 383  out */
t4=((C_word*)((C_word*)t0)[3])[1];
f_2066(t4,t1,t3,((C_word*)t0)[2]);}

/* k2404 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 378  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2320 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2322,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2324,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word)li41),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2324(t5,((C_word*)t0)[2],C_fix(0),C_fix(0),t1);}

/* loop in k2320 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_fcall f_2324(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2324,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2331,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t3,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t4)){
t6=(C_word)C_i_string_length(((C_word*)t0)[4]);
t7=t5;
f_2331(t7,(C_word)C_i_lessp(t3,t6));}
else{
t6=t5;
f_2331(t6,C_SCHEME_FALSE);}}

/* k2329 in loop in k2320 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_fcall f_2331(C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2331,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_string_ref(((C_word*)t0)[8],((C_word*)t0)[7]);
t3=(C_word)C_eqp(t2,C_make_character(92));
t4=(C_truep(t3)?t3:(C_word)C_eqp(t2,C_make_character(34)));
if(C_truep(t4)){
t5=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[7],C_fix(1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2354,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2358,a[2]=t6,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2362,a[2]=((C_word*)t0)[3],a[3]=t7,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 372  ##sys#substring */
t9=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,((C_word*)t0)[8],((C_word*)t0)[2],((C_word*)t0)[7]);}
else{
t5=(C_word)C_a_i_plus(&a,2,((C_word*)t0)[7],C_fix(1));
/* extras.scm: 374  loop */
t6=((C_word*)((C_word*)t0)[6])[1];
f_2324(t6,((C_word*)t0)[5],((C_word*)t0)[2],t5,((C_word*)t0)[3]);}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2379,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2383,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 376  ##sys#substring */
t4=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,((C_word*)t0)[8],((C_word*)t0)[2],((C_word*)t0)[7]);}}

/* k2381 in k2329 in loop in k2320 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 376  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2377 in k2329 in loop in k2320 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 375  out */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2066(t2,((C_word*)t0)[2],lf[63],t1);}

/* k2360 in k2329 in loop in k2320 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 372  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2356 in k2329 in loop in k2320 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 371  out */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2066(t2,((C_word*)t0)[2],lf[62],t1);}

/* k2352 in k2329 in loop in k2320 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 369  loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_2324(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2301 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 361  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2278 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2280,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2283,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 359  ##sys#print */
t3=*((C_word*)lf[60]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* k2281 in k2278 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2283,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2290,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 360  get-output-string */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2288 in k2281 in k2278 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 360  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2269 in k2262 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 356  out */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2066(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2239 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2241,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2245,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 354  out */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2066(t3,t2,lf[55],((C_word*)t0)[2]);}

/* k2243 in k2239 in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 354  wr-lst */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2115(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* wr-lst in wr in generic-write in k893 in k890 in k887 */
static void C_fcall f_2115(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2115,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2133,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t6=(C_word)C_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2198,a[2]=t6,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 343  out */
t8=((C_word*)((C_word*)t0)[2])[1];
f_2066(t8,t7,lf[52],t3);}
else{
t6=t5;
f_2133(2,t6,C_SCHEME_FALSE);}}
else{
/* extras.scm: 349  out */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2066(t4,t1,lf[53],t3);}}

/* k2196 in wr-lst in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 343  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2085(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2131 in wr-lst in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2133,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2135,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word)li39),tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_2135(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k2131 in wr-lst in wr in generic-write in k893 in k890 in k887 */
static void C_fcall f_2135(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2135,NULL,4,t0,t1,t2,t3);}
t4=t3;
if(C_truep(t4)){
if(C_truep((C_word)C_i_pairp(t2))){
t5=(C_word)C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2159,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_i_car(t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2167,a[2]=t7,a[3]=t6,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 346  out */
t9=((C_word*)((C_word*)t0)[2])[1];
f_2066(t9,t8,lf[48],t3);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
/* extras.scm: 347  out */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2066(t5,t1,lf[49],t3);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2183,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2187,a[2]=t2,a[3]=t5,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 348  out */
t7=((C_word*)((C_word*)t0)[2])[1];
f_2066(t7,t6,lf[51],t3);}}}
else{
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k2185 in loop in k2131 in wr-lst in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 348  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2085(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2181 in loop in k2131 in wr-lst in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 348  out */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2066(t2,((C_word*)t0)[2],lf[50],t1);}

/* k2165 in loop in k2131 in wr-lst in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 346  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2085(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2157 in loop in k2131 in wr-lst in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 346  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2135(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* wr-expr in wr in generic-write in k893 in k890 in k887 */
static void C_fcall f_2088(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2088,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2095,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* extras.scm: 336  read-macro? */
f_1975(t4,t2);}

/* k2093 in wr-expr in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2095,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=(C_word)C_i_cadr(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2106,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t5=f_2033(((C_word*)t0)[8]);
/* extras.scm: 337  out */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2066(t6,t4,t5,((C_word*)t0)[3]);}
else{
/* extras.scm: 338  wr-lst */
t2=((C_word*)((C_word*)t0)[2])[1];
f_2115(t2,((C_word*)t0)[6],((C_word*)t0)[8],((C_word*)t0)[3]);}}

/* k2104 in k2093 in wr-expr in wr in generic-write in k893 in k890 in k887 */
static void C_ccall f_2106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 337  wr */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2085(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* out in generic-write in k893 in k890 in k887 */
static void C_fcall f_2066(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2066,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2076,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 331  output */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k2074 in out in generic-write in k893 in k890 in k887 */
static void C_ccall f_2076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2076,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_string_length(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_plus(&a,2,((C_word*)t0)[2],t2));}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* read-macro-prefix in generic-write in k893 in k890 in k887 */
static C_word C_fcall f_2033(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_check;
t2=(C_word)C_i_car(t1);
t3=(C_word)C_i_cdr(t1);
t4=(C_word)C_eqp(t2,lf[40]);
if(C_truep(t4)){
return(lf[44]);}
else{
t5=(C_word)C_eqp(t2,lf[41]);
if(C_truep(t5)){
return(lf[45]);}
else{
t6=(C_word)C_eqp(t2,lf[42]);
if(C_truep(t6)){
return(lf[46]);}
else{
t7=(C_word)C_eqp(t2,lf[43]);
return((C_truep(t7)?lf[47]:C_SCHEME_UNDEFINED));}}}}

/* read-macro? in generic-write in k893 in k890 in k887 */
static void C_fcall f_1975(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1975,NULL,2,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_eqp(t3,lf[40]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2007,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
t7=t6;
f_2007(t7,t5);}
else{
t7=(C_word)C_eqp(t3,lf[41]);
if(C_truep(t7)){
t8=t6;
f_2007(t8,t7);}
else{
t8=(C_word)C_eqp(t3,lf[42]);
t9=t6;
f_2007(t9,(C_truep(t8)?t8:(C_word)C_eqp(t3,lf[43])));}}}

/* k2005 in read-macro? in generic-write in k893 in k890 in k887 */
static void C_fcall f_2007(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_nullp(t3));}
else{
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* write-byte in k893 in k890 in k887 */
static void C_ccall f_1934(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1934r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1934r(t0,t1,t2,t3);}}

static void C_ccall f_1934r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1938,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_1938(2,t5,*((C_word*)lf[34]+1));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_1938(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1936 in write-byte in k893 in k890 in k887 */
static void C_ccall f_1938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1938,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[3],lf[38]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1944,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 292  ##sys#check-port */
t4=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,lf[38]);}

/* k1942 in k1936 in write-byte in k893 in k890 in k887 */
static void C_ccall f_1944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_make_character((C_word)C_unfix(((C_word*)t0)[4]));
/* extras.scm: 293  ##sys#write-char-0 */
t3=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* read-byte in k893 in k890 in k887 */
static void C_ccall f_1894(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1894r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1894r(t0,t1,t2);}}

static void C_ccall f_1894r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1898,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_1898(2,t4,*((C_word*)lf[7]+1));}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_1898(2,t5,(C_word)C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k1896 in read-byte in k893 in k890 in k887 */
static void C_ccall f_1898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1898,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1901,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 284  ##sys#check-port */
t3=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[37]);}

/* k1899 in k1896 in read-byte in k893 in k890 in k887 */
static void C_ccall f_1901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1904,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* extras.scm: 285  ##sys#read-char-0 */
t3=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1902 in k1899 in k1896 in read-byte in k893 in k890 in k887 */
static void C_ccall f_1904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_eofp(t1))){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fix((C_word)C_character_code(t1)));}}

/* write-line in k893 in k890 in k887 */
static void C_ccall f_1873(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_1873r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1873r(t0,t1,t2,t3);}}

static void C_ccall f_1873r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(C_truep((C_word)C_eqp(t3,C_SCHEME_END_OF_LIST))?*((C_word*)lf[34]+1):(C_word)C_slot(t3,C_fix(0)));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1880,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 275  ##sys#check-port */
t6=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t4,lf[36]);}

/* k1878 in write-line in k893 in k890 in k887 */
static void C_ccall f_1880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1880,2,t0,t1);}
t2=(C_word)C_i_check_string_2(((C_word*)t0)[6],lf[36]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1886,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 277  display */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[6],((C_word*)t0)[3]);}

/* k1884 in k1878 in write-line in k893 in k890 in k887 */
static void C_ccall f_1886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 278  newline */
t2=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* write-string in k893 in k890 in k887 */
static void C_ccall f_1784(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_1784r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1784r(t0,t1,t2,t3);}}

static void C_ccall f_1784r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(13);
t4=(C_word)C_i_check_string_2(t2,lf[29]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1789,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word)li28),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1820,a[2]=t5,a[3]=((C_word)li29),tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1825,a[2]=t6,a[3]=((C_word)li30),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-n357374 */
t8=t7;
f_1825(t8,t1);}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-port358372 */
t10=t6;
f_1820(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* body355363 */
t12=t5;
f_1789(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-n357 in write-string in k893 in k890 in k887 */
static void C_fcall f_1825(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1825,NULL,2,t0,t1);}
/* def-port358372 */
t2=((C_word*)t0)[2];
f_1820(t2,t1,C_SCHEME_FALSE);}

/* def-port358 in write-string in k893 in k890 in k887 */
static void C_fcall f_1820(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1820,NULL,3,t0,t1,t2);}
/* body355363 */
t3=((C_word*)t0)[2];
f_1789(t3,t1,t2,*((C_word*)lf[34]+1));}

/* body355 in write-string in k893 in k890 in k887 */
static void C_fcall f_1789(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1789,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1793,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 260  ##sys#check-port */
t5=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,lf[29]);}

/* k1791 in body355 in write-string in k893 in k890 in k887 */
static void C_ccall f_1793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1793,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[6])?(C_word)C_i_check_exact_2(((C_word*)t0)[6],lf[29]):C_SCHEME_UNDEFINED);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1803,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1806,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[2],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[6])){
t5=(C_word)C_block_size(((C_word*)t0)[2]);
t6=t4;
f_1806(t6,(C_word)C_fixnum_lessp(((C_word*)t0)[6],t5));}
else{
t5=t4;
f_1806(t5,C_SCHEME_FALSE);}}

/* k1804 in k1791 in body355 in write-string in k893 in k890 in k887 */
static void C_fcall f_1806(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* extras.scm: 264  ##sys#substring */
t2=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[7],((C_word*)t0)[6],C_fix(0),((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[6];
/* extras.scm: 262  display */
t3=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}}

/* k1801 in k1791 in body355 in write-string in k893 in k890 in k887 */
static void C_ccall f_1803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 262  display */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* read-token in k893 in k890 in k887 */
static void C_ccall f_1715(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1715r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1715r(t0,t1,t2,t3);}}

static void C_ccall f_1715r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1719,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_1719(2,t5,*((C_word*)lf[7]+1));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_1719(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1717 in read-token in k893 in k890 in k887 */
static void C_ccall f_1719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 245  ##sys#check-port */
t3=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[30]);}

/* k1720 in k1717 in read-token in k893 in k890 in k887 */
static void C_ccall f_1722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1725,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 246  open-output-string */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1723 in k1720 in k1717 in read-token in k893 in k890 in k887 */
static void C_ccall f_1725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1725,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1730,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t3,a[7]=((C_word)li26),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_1730(t5,((C_word*)t0)[2]);}

/* loop in k1723 in k1720 in k1717 in read-token in k893 in k890 in k887 */
static void C_fcall f_1730(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1730,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* extras.scm: 248  ##sys#peek-char-0 */
t3=*((C_word*)lf[32]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[4]);}

/* k1732 in loop in k1723 in k1720 in k1717 in read-token in k893 in k890 in k887 */
static void C_ccall f_1734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1734,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1740,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_eofp(t1))){
t3=t2;
f_1740(2,t3,C_SCHEME_FALSE);}
else{
/* extras.scm: 249  pred */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}}

/* k1738 in k1732 in loop in k1723 in k1720 in k1717 in read-token in k893 in k890 in k887 */
static void C_ccall f_1740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1740,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1743,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1750,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 251  ##sys#read-char-0 */
t4=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[3]);}
else{
/* extras.scm: 253  get-output-string */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}}

/* k1748 in k1738 in k1732 in loop in k1723 in k1720 in k1717 in read-token in k893 in k890 in k887 */
static void C_ccall f_1750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 251  ##sys#write-char-0 */
t2=*((C_word*)lf[31]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1741 in k1738 in k1732 in loop in k1723 in k1720 in k1717 in read-token in k893 in k890 in k887 */
static void C_ccall f_1743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 252  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1730(t2,((C_word*)t0)[2]);}

/* read-string in k893 in k890 in k887 */
static void C_ccall f_1655(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_1655r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1655r(t0,t1,t2);}}

static void C_ccall f_1655r(C_word t0,C_word t1,C_word t2){
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
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
t4=*((C_word*)lf[7]+1);
/* extras.scm: 238  ##sys#read-string/port */
((C_proc4)C_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),t3,C_SCHEME_FALSE,t4);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t1;
t6=*((C_word*)lf[7]+1);
/* extras.scm: 238  ##sys#read-string/port */
((C_proc4)C_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),t5,t3,t6);}
else{
t5=(C_word)C_i_car(t4);
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t1;
/* extras.scm: 238  ##sys#read-string/port */
((C_proc4)C_retrieve_proc(*((C_word*)lf[27]+1)))(4,*((C_word*)lf[27]+1),t7,t3,t5);}
else{
/* ##sys#error */
t7=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t1,lf[0],t6);}}}}

/* ##sys#read-string/port in k893 in k890 in k887 */
static void C_ccall f_1598(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1598,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1602,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 218  ##sys#check-port */
t5=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,lf[28]);}

/* k1600 in ##sys#read-string/port in k893 in k890 in k887 */
static void C_ccall f_1602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1602,2,t0,t1);}
if(C_truep(((C_word*)t0)[6])){
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[6],lf[28]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1611,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 220  ##sys#make-string */
((C_proc3)C_retrieve_proc(*((C_word*)lf[20]+1)))(3,*((C_word*)lf[20]+1),t3,((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1626,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 226  open-output-string */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}}

/* k1624 in k1600 in ##sys#read-string/port in k893 in k890 in k887 */
static void C_ccall f_1626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1626,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1629,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 227  make-string */
t3=*((C_word*)lf[14]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(2048));}

/* k1627 in k1624 in k1600 in ##sys#read-string/port in k893 in k890 in k887 */
static void C_ccall f_1629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1629,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1634,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word)li23),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_1634(t5,((C_word*)t0)[2]);}

/* loop in k1627 in k1624 in k1600 in ##sys#read-string/port in k893 in k890 in k887 */
static void C_fcall f_1634(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1634,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1638,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 229  ##sys#read-string! */
t3=*((C_word*)lf[23]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,C_fix(2048),((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* k1636 in loop in k1627 in k1624 in k1600 in ##sys#read-string/port in k893 in k890 in k887 */
static void C_ccall f_1638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1638,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(t2)){
/* extras.scm: 232  get-output-string */
t3=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1650,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 234  write-string */
((C_proc5)C_retrieve_proc(*((C_word*)lf[29]+1)))(5,*((C_word*)lf[29]+1),t3,((C_word*)t0)[2],t1,((C_word*)t0)[4]);}}

/* k1648 in k1636 in loop in k1627 in k1624 in k1600 in ##sys#read-string/port in k893 in k890 in k887 */
static void C_ccall f_1650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 235  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1634(t2,((C_word*)t0)[2]);}

/* k1609 in k1600 in ##sys#read-string/port in k893 in k890 in k887 */
static void C_ccall f_1611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1611,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1614,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 221  ##sys#read-string! */
t3=*((C_word*)lf[23]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[4],t1,((C_word*)t0)[2],C_fix(0));}

/* k1612 in k1609 in k1600 in ##sys#read-string/port in k893 in k890 in k887 */
static void C_ccall f_1614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[4],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}
else{
/* extras.scm: 224  ##sys#substring */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t1);}}

/* read-string! in k893 in k890 in k887 */
static void C_ccall f_1501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4r,(void*)f_1501r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1501r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1501r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(15);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1503,a[2]=t5,a[3]=t3,a[4]=((C_word)li19),tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1545,a[2]=t6,a[3]=((C_word)li20),tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1550,a[2]=t7,a[3]=((C_word)li21),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-port247267 */
t9=t8;
f_1550(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-start248265 */
t11=t7;
f_1545(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* body245253 */
t13=t6;
f_1503(t13,t1,t9,t11);}
else{
/* ##sys#error */
t13=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t1,lf[0],t12);}}}}

/* def-port247 in read-string! in k893 in k890 in k887 */
static void C_fcall f_1550(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1550,NULL,2,t0,t1);}
/* def-start248265 */
t2=((C_word*)t0)[2];
f_1545(t2,t1,*((C_word*)lf[7]+1));}

/* def-start248 in read-string! in k893 in k890 in k887 */
static void C_fcall f_1545(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1545,NULL,3,t0,t1,t2);}
/* body245253 */
t3=((C_word*)t0)[2];
f_1503(t3,t1,t2,C_fix(0));}

/* body245 in read-string! in k893 in k890 in k887 */
static void C_fcall f_1503(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1503,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1507,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 203  ##sys#check-port */
t5=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t2,lf[24]);}

/* k1505 in body245 in read-string! in k893 in k890 in k887 */
static void C_ccall f_1507(C_word c,C_word t0,C_word t1){
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
t2=(C_word)C_i_check_string_2(((C_word*)t0)[6],lf[24]);
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t3=(C_word)C_i_check_exact_2(((C_word*)((C_word*)t0)[5])[1],lf[24]);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[4],((C_word*)((C_word*)t0)[5])[1]);
t5=(C_word)C_block_size(((C_word*)t0)[6]);
if(C_truep((C_word)C_fixnum_greaterp(t4,t5))){
t6=(C_word)C_block_size(((C_word*)t0)[6]);
t7=(C_word)C_fixnum_difference(t6,((C_word*)t0)[4]);
t8=C_mutate(((C_word *)((C_word*)t0)[5])+1,t7);
t9=(C_word)C_i_check_exact_2(((C_word*)t0)[4],lf[24]);
/* extras.scm: 210  ##sys#read-string! */
t10=*((C_word*)lf[23]+1);
((C_proc6)(void*)(*((C_word*)t10+1)))(6,t10,((C_word*)t0)[3],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t6=(C_word)C_i_check_exact_2(((C_word*)t0)[4],lf[24]);
/* extras.scm: 210  ##sys#read-string! */
t7=*((C_word*)lf[23]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,((C_word*)t0)[3],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[4]);}}
else{
t3=(C_word)C_i_check_exact_2(((C_word*)t0)[4],lf[24]);
/* extras.scm: 210  ##sys#read-string! */
t4=*((C_word*)lf[23]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[4]);}}

/* ##sys#read-string! in k893 in k890 in k887 */
static void C_ccall f_1355(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[14],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1355,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_fix(0));}
else{
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1365,a[2]=t2,a[3]=t6,a[4]=t1,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_slot(t4,C_fix(6)))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1495,a[2]=t8,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 178  ##sys#read-char-0 */
t10=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t4);}
else{
t9=t8;
f_1365(t9,C_SCHEME_UNDEFINED);}}}

/* k1493 in ##sys#read-string! in k893 in k890 in k887 */
static void C_ccall f_1495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_setsubchar(((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],t1);
t3=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
f_1365(t5,t4);}

/* k1363 in ##sys#read-string! in k893 in k890 in k887 */
static void C_fcall f_1365(C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1365,NULL,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(2));
t3=(C_word)C_slot(t2,C_fix(7));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1376,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=((C_word)li16),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1376(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2],C_fix(0));}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1435,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=((C_word)li17),tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1435(t7,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2],C_fix(0));}}

/* loop in k1363 in ##sys#read-string! in k893 in k890 in k887 */
static void C_fcall f_1435(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1435,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1439,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,a[6]=t1,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* extras.scm: 191  ##sys#read-char-0 */
t6=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[2]);}

/* k1437 in loop in k1363 in ##sys#read-string! in k893 in k890 in k887 */
static void C_ccall f_1439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1442,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_eofp(t1))){
t3=t2;
f_1442(t3,C_fix(0));}
else{
t3=(C_word)C_setsubchar(((C_word*)t0)[2],((C_word*)t0)[4],t1);
t4=t2;
f_1442(t4,C_fix(1));}}

/* k1440 in k1437 in loop in k1363 in ##sys#read-string! in k893 in k890 in k887 */
static void C_fcall f_1442(C_word t0,C_word t1){
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
t2=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[6];
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_i_not(((C_word*)t0)[4]);
t4=(C_truep(t3)?t3:(C_word)C_fixnum_lessp(t1,((C_word*)t0)[4]));
if(C_truep(t4)){
t5=(C_word)C_fixnum_plus(((C_word*)t0)[3],t1);
t6=(C_truep(((C_word*)t0)[4])?(C_word)C_fixnum_difference(((C_word*)t0)[4],t1):C_SCHEME_FALSE);
t7=(C_word)C_fixnum_plus(((C_word*)t0)[6],t1);
/* extras.scm: 199  loop */
t8=((C_word*)((C_word*)t0)[2])[1];
f_1435(t8,((C_word*)t0)[5],t5,t6,t7);}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_fixnum_plus(t1,((C_word*)t0)[6]));}}}

/* loop in k1363 in ##sys#read-string! in k893 in k890 in k887 */
static void C_fcall f_1376(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1376,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1380,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,a[6]=t4,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* extras.scm: 183  rdstring */
t6=((C_word*)t0)[3];
((C_proc6)C_retrieve_proc(t6))(6,t6,t5,((C_word*)t0)[5],t3,((C_word*)t0)[2],t2);}

/* k1378 in loop in k1363 in ##sys#read-string! in k893 in k890 in k887 */
static void C_ccall f_1380(C_word c,C_word t0,C_word t1){
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
t2=(C_word)C_slot(((C_word*)t0)[7],C_fix(5));
t3=(C_word)C_fixnum_plus(t2,t1);
t4=(C_word)C_i_set_i_slot(((C_word*)t0)[7],C_fix(5),t3);
t5=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(t5)){
t6=((C_word*)t0)[6];
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=(C_word)C_i_not(((C_word*)t0)[4]);
t7=(C_truep(t6)?t6:(C_word)C_fixnum_lessp(t1,((C_word*)t0)[4]));
if(C_truep(t7)){
t8=(C_word)C_fixnum_plus(((C_word*)t0)[3],t1);
t9=(C_truep(((C_word*)t0)[4])?(C_word)C_fixnum_difference(((C_word*)t0)[4],t1):C_SCHEME_FALSE);
t10=(C_word)C_fixnum_plus(((C_word*)t0)[6],t1);
/* extras.scm: 188  loop */
t11=((C_word*)((C_word*)t0)[2])[1];
f_1376(t11,((C_word*)t0)[5],t8,t9,t10);}
else{
t8=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_fixnum_plus(t1,((C_word*)t0)[6]));}}}

/* read-lines in k893 in k890 in k887 */
static void C_ccall f_1265(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr2r,(void*)f_1265r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1265r(t0,t1,t2);}}

static void C_ccall f_1265r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(11);
t3=(C_word)C_i_pairp(t2);
t4=(C_truep(t3)?(C_word)C_slot(t2,C_fix(0)):*((C_word*)lf[7]+1));
t5=(C_word)C_i_pairp(t2);
t6=(C_truep(t5)?(C_word)C_slot(t2,C_fix(1)):C_SCHEME_FALSE);
t7=(C_word)C_i_pairp(t6);
t8=(C_truep(t7)?(C_word)C_slot(t6,C_fix(0)):C_SCHEME_FALSE);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1277,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t8,a[5]=((C_word)li14),tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_stringp(t4))){
/* extras.scm: 166  call-with-input-file */
t10=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t10))(4,t10,t1,t4,t9);}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1332,a[2]=t4,a[3]=t1,a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 168  ##sys#check-port */
t11=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,t4,lf[22]);}}

/* k1330 in read-lines in k893 in k890 in k887 */
static void C_ccall f_1332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 169  doread */
t2=((C_word*)t0)[4];
f_1277(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* doread in read-lines in k893 in k890 in k887 */
static void C_ccall f_1277(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1277,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[4]:C_fix(1000000000));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1287,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word)li13),tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1287(t7,t1,C_SCHEME_END_OF_LIST,t3);}

/* loop in doread in read-lines in k893 in k890 in k887 */
static void C_fcall f_1287(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1287,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
/* extras.scm: 160  reverse */
t5=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t5))(3,t5,t1,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1300,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 161  read-line */
t6=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}}

/* k1298 in loop in doread in read-lines in k893 in k890 in k887 */
static void C_ccall f_1300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1300,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
/* extras.scm: 163  reverse */
t2=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* extras.scm: 164  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1287(t4,((C_word*)t0)[5],t2,t3);}}

/* read-line in k893 in k890 in k887 */
static void C_ccall f_1116(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_1116r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1116r(t0,t1,t2);}}

static void C_ccall f_1116r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t3=(C_word)C_i_pairp(t2);
t4=(C_truep(t3)?(C_word)C_i_car(t2):*((C_word*)lf[7]+1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1126,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_i_pairp(t6);
t8=t5;
f_1126(t8,(C_truep(t7)?(C_word)C_i_cadr(t2):C_SCHEME_FALSE));}
else{
t6=t5;
f_1126(t6,C_SCHEME_FALSE);}}

/* k1124 in read-line in k893 in k890 in k887 */
static void C_fcall f_1126(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1126,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 120  ##sys#check-port */
t3=*((C_word*)lf[21]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[4],lf[15]);}

/* k1127 in k1124 in read-line in k893 in k890 in k887 */
static void C_ccall f_1129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1129,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(2));
t3=(C_word)C_slot(t2,C_fix(8));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1136,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li10),tmp=(C_word)a,a+=5,tmp);
/* g123124 */
t5=t4;
f_1136(t5,((C_word*)t0)[3],t3);}
else{
t4=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[4]:C_fix(256));
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1149,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 124  ##sys#make-string */
((C_proc3)C_retrieve_proc(*((C_word*)lf[20]+1)))(3,*((C_word*)lf[20]+1),t7,((C_word*)t6)[1]);}}

/* k1147 in k1127 in k1124 in read-line in k893 in k890 in k887 */
static void C_ccall f_1149(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1149,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1154,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word)li11),tmp=(C_word)a,a+=9,tmp));
t7=((C_word*)t5)[1];
f_1154(t7,((C_word*)t0)[2],C_fix(0));}

/* loop in k1147 in k1127 in k1124 in read-line in k893 in k890 in k887 */
static void C_fcall f_1154(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1154,NULL,3,t0,t1,t2);}
t3=(C_truep(((C_word*)t0)[7])?(C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[7]):C_SCHEME_FALSE);
if(C_truep(t3)){
/* extras.scm: 127  ##sys#substring */
t4=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)((C_word*)t0)[6])[1],C_fix(0),t2);}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1167,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* extras.scm: 128  ##sys#read-char-0 */
t5=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[5]);}}

/* k1165 in loop in k1147 in k1127 in k1124 in read-line in k893 in k890 in k887 */
static void C_ccall f_1167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1167,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
t2=(C_word)C_eqp(((C_word*)t0)[8],C_fix(0));
if(C_truep(t2)){
t3=t1;
t4=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
/* extras.scm: 132  ##sys#substring */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],C_fix(0),((C_word*)t0)[8]);}}
else{
switch(t1){
case C_make_character(10):
/* extras.scm: 134  ##sys#substring */
t2=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],C_fix(0),((C_word*)t0)[8]);
case C_make_character(13):
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1200,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 136  peek-char */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);
default:
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1218,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)t0)[8],((C_word*)((C_word*)t0)[3])[1]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1232,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1240,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 143  make-string */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)((C_word*)t0)[3])[1]);}
else{
t3=t2;
f_1218(t3,C_SCHEME_UNDEFINED);}}}}

/* k1238 in k1165 in loop in k1147 in k1127 in k1124 in read-line in k893 in k890 in k887 */
static void C_ccall f_1240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 143  ##sys#string-append */
t2=*((C_word*)lf[19]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k1230 in k1165 in loop in k1147 in k1127 in k1124 in read-line in k893 in k890 in k887 */
static void C_ccall f_1232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
f_1218(t5,t4);}

/* k1216 in k1165 in loop in k1147 in k1127 in k1124 in read-line in k893 in k890 in k887 */
static void C_fcall f_1218(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_setsubchar(((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* extras.scm: 146  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1154(t4,((C_word*)t0)[2],t3);}

/* k1198 in k1165 in loop in k1147 in k1127 in k1124 in read-line in k893 in k890 in k887 */
static void C_ccall f_1200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1200,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_make_character(10));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1209,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* extras.scm: 138  ##sys#read-char-0 */
t4=*((C_word*)lf[17]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}
else{
/* extras.scm: 140  ##sys#substring */
t3=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1],C_fix(0),((C_word*)t0)[3]);}}

/* k1207 in k1198 in k1165 in loop in k1147 in k1127 in k1124 in read-line in k893 in k890 in k887 */
static void C_ccall f_1209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* extras.scm: 139  ##sys#substring */
t2=*((C_word*)lf[16]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],C_fix(0),((C_word*)t0)[2]);}

/* g123 in k1127 in k1124 in read-line in k893 in k890 in k887 */
static void C_fcall f_1136(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1136,NULL,3,t0,t1,t2);}
/* extras.scm: 121  rl */
t3=t2;
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* random in k893 in k890 in k887 */
static void C_ccall f_1077(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1077,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[13]);
t4=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fix(0));}
else{
t5=(C_word)C_random_fixnum(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* randomize in k893 in k890 in k887 */
static void C_ccall f_1059(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2rv,(void*)f_1059r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_1059r(t0,t1,t2);}}

static void C_ccall f_1059r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
t3=(C_word)C_vemptyp(t2);
t4=(C_truep(t3)?(C_word)C_fudge(C_fix(2)):(C_word)C_i_vector_ref(t2,C_fix(0)));
t5=(C_word)C_i_check_exact_2(t4,lf[12]);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_randomize(t4));}

/* random-seed in k893 in k890 in k887 */
static void C_ccall f_1038(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2rv,(void*)f_1038r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_1038r(t0,t1,t2);}}

static void C_ccall f_1038r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1042,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_vemptyp(t2))){
/* extras.scm: 90   current-seconds */
((C_proc2)C_retrieve_proc(*((C_word*)lf[11]+1)))(2,*((C_word*)lf[11]+1),t3);}
else{
t4=t3;
f_1042(2,t4,(C_word)C_i_vector_ref(t2,C_fix(0)));}}

/* k1040 in random-seed in k893 in k890 in k887 */
static void C_ccall f_1042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1042,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1045,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* extras.scm: 91   ##sys#check-integer */
((C_proc4)C_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t2,t1,lf[9]);}

/* k1043 in k1040 in random-seed in k893 in k890 in k887 */
static void C_ccall f_1045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=(C_word)C_i_foreign_unsigned_integer_argumentp(t3);
t5=t2;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub87(C_SCHEME_UNDEFINED,t4));}

/* read-file in k893 in k890 in k887 */
static void C_ccall f_897(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr2r,(void*)f_897r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_897r(t0,t1,t2);}}

static void C_ccall f_897r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(18);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_899,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word)li2),tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_959,a[2]=t3,a[3]=((C_word)li3),tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_964,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word)li4),tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_969,a[2]=t5,a[3]=((C_word)li5),tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-port4377 */
t7=t6;
f_969(t7,t1);}
else{
t7=(C_word)C_i_car(t2);
t8=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t8))){
/* def-reader4475 */
t9=t5;
f_964(t9,t1,t7);}
else{
t9=(C_word)C_i_car(t8);
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-max4572 */
t11=t4;
f_959(t11,t1,t7,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* body4150 */
t13=t3;
f_899(t13,t1,t7,t9,t11);}
else{
/* ##sys#error */
t13=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t1,lf[0],t12);}}}}}

/* def-port43 in read-file in k893 in k890 in k887 */
static void C_fcall f_969(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_969,NULL,2,t0,t1);}
/* def-reader4475 */
t2=((C_word*)t0)[2];
f_964(t2,t1,*((C_word*)lf[7]+1));}

/* def-reader44 in read-file in k893 in k890 in k887 */
static void C_fcall f_964(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_964,NULL,3,t0,t1,t2);}
/* def-max4572 */
t3=((C_word*)t0)[3];
f_959(t3,t1,t2,((C_word*)t0)[2]);}

/* def-max45 in read-file in k893 in k890 in k887 */
static void C_fcall f_959(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_959,NULL,4,t0,t1,t2,t3);}
/* body4150 */
t4=((C_word*)t0)[2];
f_899(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body41 in read-file in k893 in k890 in k887 */
static void C_fcall f_899(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_899,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_902,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word)li1),tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_952,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* extras.scm: 80   port? */
t7=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k950 in body41 in read-file in k893 in k890 in k887 */
static void C_ccall f_952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* extras.scm: 81   slurp */
t2=((C_word*)t0)[5];
f_902(3,t2,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
/* extras.scm: 82   call-with-input-file */
t2=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[5]);}}

/* slurp in body41 in read-file in k893 in k890 in k887 */
static void C_ccall f_902(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_902,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_910,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 76   reader */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k908 in slurp in body41 in read-file in k893 in k890 in k887 */
static void C_ccall f_910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_910,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_912,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word)li0),tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_912(t5,((C_word*)t0)[2],t1,C_fix(0),C_SCHEME_END_OF_LIST);}

/* doloop56 in k908 in slurp in body41 in read-file in k893 in k890 in k887 */
static void C_fcall f_912(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_912,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eofp(t2);
t6=(C_truep(t5)?t5:(C_truep(((C_word*)t0)[6])?(C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[6]):C_SCHEME_FALSE));
if(C_truep(t6)){
/* extras.scm: 79   reverse */
t7=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t7))(3,t7,t1,t4);}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_932,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t2,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* extras.scm: 76   reader */
t8=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,((C_word*)t0)[2]);}}

/* k930 in doloop56 in k908 in slurp in body41 in read-file in k893 in k890 in k887 */
static void C_ccall f_932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_932,2,t0,t1);}
t2=(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_912(t4,((C_word*)t0)[2],t1,t2,t3);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[236] = {
{"toplevel:extras_scm",(void*)C_extras_toplevel},
{"f_889:extras_scm",(void*)f_889},
{"f_892:extras_scm",(void*)f_892},
{"f_895:extras_scm",(void*)f_895},
{"f_3251:extras_scm",(void*)f_3251},
{"f_3641:extras_scm",(void*)f_3641},
{"f_3598:extras_scm",(void*)f_3598},
{"f_3631:extras_scm",(void*)f_3631},
{"f_3606:extras_scm",(void*)f_3606},
{"f_3592:extras_scm",(void*)f_3592},
{"f_3586:extras_scm",(void*)f_3586},
{"f_3580:extras_scm",(void*)f_3580},
{"f_3282:extras_scm",(void*)f_3282},
{"f_3286:extras_scm",(void*)f_3286},
{"f_3569:extras_scm",(void*)f_3569},
{"f_3289:extras_scm",(void*)f_3289},
{"f_3320:extras_scm",(void*)f_3320},
{"f_3355:extras_scm",(void*)f_3355},
{"f_3533:extras_scm",(void*)f_3533},
{"f_3488:extras_scm",(void*)f_3488},
{"f_3491:extras_scm",(void*)f_3491},
{"f_3497:extras_scm",(void*)f_3497},
{"f_3470:extras_scm",(void*)f_3470},
{"f_3466:extras_scm",(void*)f_3466},
{"f_3453:extras_scm",(void*)f_3453},
{"f_3449:extras_scm",(void*)f_3449},
{"f_3436:extras_scm",(void*)f_3436},
{"f_3432:extras_scm",(void*)f_3432},
{"f_3419:extras_scm",(void*)f_3419},
{"f_3406:extras_scm",(void*)f_3406},
{"f_3393:extras_scm",(void*)f_3393},
{"f_3368:extras_scm",(void*)f_3368},
{"f_3336:extras_scm",(void*)f_3336},
{"f_3329:extras_scm",(void*)f_3329},
{"f_3292:extras_scm",(void*)f_3292},
{"f_3314:extras_scm",(void*)f_3314},
{"f_3253:extras_scm",(void*)f_3253},
{"f_3257:extras_scm",(void*)f_3257},
{"f_3264:extras_scm",(void*)f_3264},
{"f_3266:extras_scm",(void*)f_3266},
{"f_3270:extras_scm",(void*)f_3270},
{"f_3260:extras_scm",(void*)f_3260},
{"f_1972:extras_scm",(void*)f_1972},
{"f_3240:extras_scm",(void*)f_3240},
{"f_3244:extras_scm",(void*)f_3244},
{"f_2593:extras_scm",(void*)f_2593},
{"f_3148:extras_scm",(void*)f_3148},
{"f_3158:extras_scm",(void*)f_3158},
{"f_3139:extras_scm",(void*)f_3139},
{"f_3133:extras_scm",(void*)f_3133},
{"f_3111:extras_scm",(void*)f_3111},
{"f_3105:extras_scm",(void*)f_3105},
{"f_3099:extras_scm",(void*)f_3099},
{"f_3093:extras_scm",(void*)f_3093},
{"f_3087:extras_scm",(void*)f_3087},
{"f_3081:extras_scm",(void*)f_3081},
{"f_3075:extras_scm",(void*)f_3075},
{"f_2927:extras_scm",(void*)f_2927},
{"f_3073:extras_scm",(void*)f_3073},
{"f_3025:extras_scm",(void*)f_3025},
{"f_3055:extras_scm",(void*)f_3055},
{"f_3040:extras_scm",(void*)f_3040},
{"f_3012:extras_scm",(void*)f_3012},
{"f_2971:extras_scm",(void*)f_2971},
{"f_2998:extras_scm",(void*)f_2998},
{"f_2994:extras_scm",(void*)f_2994},
{"f_2930:extras_scm",(void*)f_2930},
{"f_2957:extras_scm",(void*)f_2957},
{"f_2953:extras_scm",(void*)f_2953},
{"f_2850:extras_scm",(void*)f_2850},
{"f_2856:extras_scm",(void*)f_2856},
{"f_2925:extras_scm",(void*)f_2925},
{"f_2921:extras_scm",(void*)f_2921},
{"f_2913:extras_scm",(void*)f_2913},
{"f_2909:extras_scm",(void*)f_2909},
{"f_2887:extras_scm",(void*)f_2887},
{"f_2879:extras_scm",(void*)f_2879},
{"f_2841:extras_scm",(void*)f_2841},
{"f_2845:extras_scm",(void*)f_2845},
{"f_2813:extras_scm",(void*)f_2813},
{"f_2839:extras_scm",(void*)f_2839},
{"f_2817:extras_scm",(void*)f_2817},
{"f_2748:extras_scm",(void*)f_2748},
{"f_2755:extras_scm",(void*)f_2755},
{"f_2782:extras_scm",(void*)f_2782},
{"f_2808:extras_scm",(void*)f_2808},
{"f_2766:extras_scm",(void*)f_2766},
{"f_2661:extras_scm",(void*)f_2661},
{"f_2674:extras_scm",(void*)f_2674},
{"f_2712:extras_scm",(void*)f_2712},
{"f_2677:extras_scm",(void*)f_2677},
{"f_2706:extras_scm",(void*)f_2706},
{"f_2710:extras_scm",(void*)f_2710},
{"f_2690:extras_scm",(void*)f_2690},
{"f_2629:extras_scm",(void*)f_2629},
{"f_2652:extras_scm",(void*)f_2652},
{"f_2645:extras_scm",(void*)f_2645},
{"f_2596:extras_scm",(void*)f_2596},
{"f_2627:extras_scm",(void*)f_2627},
{"f_2620:extras_scm",(void*)f_2620},
{"f_2085:extras_scm",(void*)f_2085},
{"f_2264:extras_scm",(void*)f_2264},
{"f_2535:extras_scm",(void*)f_2535},
{"f_2574:extras_scm",(void*)f_2574},
{"f_2584:extras_scm",(void*)f_2584},
{"f_2577:extras_scm",(void*)f_2577},
{"f_2552:extras_scm",(void*)f_2552},
{"f_2562:extras_scm",(void*)f_2562},
{"f_2555:extras_scm",(void*)f_2555},
{"f_2542:extras_scm",(void*)f_2542},
{"f_2519:extras_scm",(void*)f_2519},
{"f_2522:extras_scm",(void*)f_2522},
{"f_2529:extras_scm",(void*)f_2529},
{"f_2501:extras_scm",(void*)f_2501},
{"f_2412:extras_scm",(void*)f_2412},
{"f_2415:extras_scm",(void*)f_2415},
{"f_2476:extras_scm",(void*)f_2476},
{"f_2455:extras_scm",(void*)f_2455},
{"f_2462:extras_scm",(void*)f_2462},
{"f_2439:extras_scm",(void*)f_2439},
{"f_2446:extras_scm",(void*)f_2446},
{"f_2419:extras_scm",(void*)f_2419},
{"f_2406:extras_scm",(void*)f_2406},
{"f_2322:extras_scm",(void*)f_2322},
{"f_2324:extras_scm",(void*)f_2324},
{"f_2331:extras_scm",(void*)f_2331},
{"f_2383:extras_scm",(void*)f_2383},
{"f_2379:extras_scm",(void*)f_2379},
{"f_2362:extras_scm",(void*)f_2362},
{"f_2358:extras_scm",(void*)f_2358},
{"f_2354:extras_scm",(void*)f_2354},
{"f_2303:extras_scm",(void*)f_2303},
{"f_2280:extras_scm",(void*)f_2280},
{"f_2283:extras_scm",(void*)f_2283},
{"f_2290:extras_scm",(void*)f_2290},
{"f_2271:extras_scm",(void*)f_2271},
{"f_2241:extras_scm",(void*)f_2241},
{"f_2245:extras_scm",(void*)f_2245},
{"f_2115:extras_scm",(void*)f_2115},
{"f_2198:extras_scm",(void*)f_2198},
{"f_2133:extras_scm",(void*)f_2133},
{"f_2135:extras_scm",(void*)f_2135},
{"f_2187:extras_scm",(void*)f_2187},
{"f_2183:extras_scm",(void*)f_2183},
{"f_2167:extras_scm",(void*)f_2167},
{"f_2159:extras_scm",(void*)f_2159},
{"f_2088:extras_scm",(void*)f_2088},
{"f_2095:extras_scm",(void*)f_2095},
{"f_2106:extras_scm",(void*)f_2106},
{"f_2066:extras_scm",(void*)f_2066},
{"f_2076:extras_scm",(void*)f_2076},
{"f_2033:extras_scm",(void*)f_2033},
{"f_1975:extras_scm",(void*)f_1975},
{"f_2007:extras_scm",(void*)f_2007},
{"f_1934:extras_scm",(void*)f_1934},
{"f_1938:extras_scm",(void*)f_1938},
{"f_1944:extras_scm",(void*)f_1944},
{"f_1894:extras_scm",(void*)f_1894},
{"f_1898:extras_scm",(void*)f_1898},
{"f_1901:extras_scm",(void*)f_1901},
{"f_1904:extras_scm",(void*)f_1904},
{"f_1873:extras_scm",(void*)f_1873},
{"f_1880:extras_scm",(void*)f_1880},
{"f_1886:extras_scm",(void*)f_1886},
{"f_1784:extras_scm",(void*)f_1784},
{"f_1825:extras_scm",(void*)f_1825},
{"f_1820:extras_scm",(void*)f_1820},
{"f_1789:extras_scm",(void*)f_1789},
{"f_1793:extras_scm",(void*)f_1793},
{"f_1806:extras_scm",(void*)f_1806},
{"f_1803:extras_scm",(void*)f_1803},
{"f_1715:extras_scm",(void*)f_1715},
{"f_1719:extras_scm",(void*)f_1719},
{"f_1722:extras_scm",(void*)f_1722},
{"f_1725:extras_scm",(void*)f_1725},
{"f_1730:extras_scm",(void*)f_1730},
{"f_1734:extras_scm",(void*)f_1734},
{"f_1740:extras_scm",(void*)f_1740},
{"f_1750:extras_scm",(void*)f_1750},
{"f_1743:extras_scm",(void*)f_1743},
{"f_1655:extras_scm",(void*)f_1655},
{"f_1598:extras_scm",(void*)f_1598},
{"f_1602:extras_scm",(void*)f_1602},
{"f_1626:extras_scm",(void*)f_1626},
{"f_1629:extras_scm",(void*)f_1629},
{"f_1634:extras_scm",(void*)f_1634},
{"f_1638:extras_scm",(void*)f_1638},
{"f_1650:extras_scm",(void*)f_1650},
{"f_1611:extras_scm",(void*)f_1611},
{"f_1614:extras_scm",(void*)f_1614},
{"f_1501:extras_scm",(void*)f_1501},
{"f_1550:extras_scm",(void*)f_1550},
{"f_1545:extras_scm",(void*)f_1545},
{"f_1503:extras_scm",(void*)f_1503},
{"f_1507:extras_scm",(void*)f_1507},
{"f_1355:extras_scm",(void*)f_1355},
{"f_1495:extras_scm",(void*)f_1495},
{"f_1365:extras_scm",(void*)f_1365},
{"f_1435:extras_scm",(void*)f_1435},
{"f_1439:extras_scm",(void*)f_1439},
{"f_1442:extras_scm",(void*)f_1442},
{"f_1376:extras_scm",(void*)f_1376},
{"f_1380:extras_scm",(void*)f_1380},
{"f_1265:extras_scm",(void*)f_1265},
{"f_1332:extras_scm",(void*)f_1332},
{"f_1277:extras_scm",(void*)f_1277},
{"f_1287:extras_scm",(void*)f_1287},
{"f_1300:extras_scm",(void*)f_1300},
{"f_1116:extras_scm",(void*)f_1116},
{"f_1126:extras_scm",(void*)f_1126},
{"f_1129:extras_scm",(void*)f_1129},
{"f_1149:extras_scm",(void*)f_1149},
{"f_1154:extras_scm",(void*)f_1154},
{"f_1167:extras_scm",(void*)f_1167},
{"f_1240:extras_scm",(void*)f_1240},
{"f_1232:extras_scm",(void*)f_1232},
{"f_1218:extras_scm",(void*)f_1218},
{"f_1200:extras_scm",(void*)f_1200},
{"f_1209:extras_scm",(void*)f_1209},
{"f_1136:extras_scm",(void*)f_1136},
{"f_1077:extras_scm",(void*)f_1077},
{"f_1059:extras_scm",(void*)f_1059},
{"f_1038:extras_scm",(void*)f_1038},
{"f_1042:extras_scm",(void*)f_1042},
{"f_1045:extras_scm",(void*)f_1045},
{"f_897:extras_scm",(void*)f_897},
{"f_969:extras_scm",(void*)f_969},
{"f_964:extras_scm",(void*)f_964},
{"f_959:extras_scm",(void*)f_959},
{"f_899:extras_scm",(void*)f_899},
{"f_952:extras_scm",(void*)f_952},
{"f_902:extras_scm",(void*)f_902},
{"f_910:extras_scm",(void*)f_910},
{"f_912:extras_scm",(void*)f_912},
{"f_932:extras_scm",(void*)f_932},
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
