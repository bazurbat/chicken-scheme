/* Generated from srfi-18.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-22 12:09
   Version 4.3.5 
   windows-mingw32-x86 [ manyargs dload ptables ]
   compiled 2010-02-17 on lenovo-1 (MINGW32_NT-6.0)
   command line: srfi-18.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -explicit-use -no-trace -output-file srfi-18.c
   unit: srfi_18
*/

#include "chicken.h"

static C_TLS long C_ms;
#define C_get_seconds   C_seconds(&C_ms)

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[114];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,31),40,35,35,115,121,115,35,99,111,109,112,117,116,101,45,116,105,109,101,45,108,105,109,105,116,32,116,109,52,48,41,0};
static C_char C_TLS li1[] C_aligned={C_lihdr(0,0,14),40,99,117,114,114,101,110,116,45,116,105,109,101,41,0,0};
static C_char C_TLS li2[] C_aligned={C_lihdr(0,0,20),40,116,105,109,101,45,62,115,101,99,111,110,100,115,32,116,109,53,53,41,0,0,0,0};
static C_char C_TLS li3[] C_aligned={C_lihdr(0,0,25),40,116,105,109,101,45,62,109,105,108,108,105,115,101,99,111,110,100,115,32,116,109,53,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li4[] C_aligned={C_lihdr(0,0,19),40,115,101,99,111,110,100,115,45,62,116,105,109,101,32,110,54,49,41,0,0,0,0,0};
static C_char C_TLS li5[] C_aligned={C_lihdr(0,0,26),40,109,105,108,108,105,115,101,99,111,110,100,115,45,62,116,105,109,101,32,110,109,115,54,56,41,0,0,0,0,0,0};
static C_char C_TLS li6[] C_aligned={C_lihdr(0,0,11),40,116,105,109,101,63,32,120,55,50,41,0,0,0,0,0};
static C_char C_TLS li7[] C_aligned={C_lihdr(0,0,29),40,106,111,105,110,45,116,105,109,101,111,117,116,45,101,120,99,101,112,116,105,111,110,63,32,120,55,52,41,0,0,0};
static C_char C_TLS li8[] C_aligned={C_lihdr(0,0,32),40,97,98,97,110,100,111,110,101,100,45,109,117,116,101,120,45,101,120,99,101,112,116,105,111,110,63,32,120,55,56,41};
static C_char C_TLS li9[] C_aligned={C_lihdr(0,0,34),40,116,101,114,109,105,110,97,116,101,100,45,116,104,114,101,97,100,45,101,120,99,101,112,116,105,111,110,63,32,120,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li10[] C_aligned={C_lihdr(0,0,25),40,117,110,99,97,117,103,104,116,45,101,120,99,101,112,116,105,111,110,63,32,120,56,54,41,0,0,0,0,0,0,0};
static C_char C_TLS li11[] C_aligned={C_lihdr(0,0,18),40,97,55,57,57,32,46,32,114,101,115,117,108,116,115,57,51,41,0,0,0,0,0,0};
static C_char C_TLS li12[] C_aligned={C_lihdr(0,0,6),40,97,55,57,51,41,0,0};
static C_char C_TLS li13[] C_aligned={C_lihdr(0,0,30),40,109,97,107,101,45,116,104,114,101,97,100,32,116,104,117,110,107,57,48,32,46,32,110,97,109,101,57,49,41,0,0};
static C_char C_TLS li14[] C_aligned={C_lihdr(0,0,13),40,116,104,114,101,97,100,63,32,120,57,56,41,0,0,0};
static C_char C_TLS li15[] C_aligned={C_lihdr(0,0,16),40,99,117,114,114,101,110,116,45,116,104,114,101,97,100,41};
static C_char C_TLS li16[] C_aligned={C_lihdr(0,0,24),40,116,104,114,101,97,100,45,115,116,97,116,101,32,116,104,114,101,97,100,49,48,49,41};
static C_char C_TLS li17[] C_aligned={C_lihdr(0,0,27),40,116,104,114,101,97,100,45,115,112,101,99,105,102,105,99,32,116,104,114,101,97,100,49,48,52,41,0,0,0,0,0};
static C_char C_TLS li18[] C_aligned={C_lihdr(0,0,37),40,116,104,114,101,97,100,45,115,112,101,99,105,102,105,99,45,115,101,116,33,32,116,104,114,101,97,100,49,48,55,32,120,49,48,56,41,0,0,0};
static C_char C_TLS li19[] C_aligned={C_lihdr(0,0,26),40,116,104,114,101,97,100,45,113,117,97,110,116,117,109,32,116,104,114,101,97,100,49,49,49,41,0,0,0,0,0,0};
static C_char C_TLS li20[] C_aligned={C_lihdr(0,0,36),40,116,104,114,101,97,100,45,113,117,97,110,116,117,109,45,115,101,116,33,32,116,104,114,101,97,100,49,49,52,32,113,49,49,53,41,0,0,0,0};
static C_char C_TLS li21[] C_aligned={C_lihdr(0,0,18),40,116,104,114,101,97,100,45,110,97,109,101,32,120,49,49,57,41,0,0,0,0,0,0};
static C_char C_TLS li22[] C_aligned={C_lihdr(0,0,25),40,116,104,114,101,97,100,45,115,116,97,114,116,33,32,116,104,114,101,97,100,49,50,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li23[] C_aligned={C_lihdr(0,0,6),40,97,57,55,48,41,0,0};
static C_char C_TLS li24[] C_aligned={C_lihdr(0,0,16),40,97,57,53,53,32,114,101,116,117,114,110,49,52,52,41};
static C_char C_TLS li25[] C_aligned={C_lihdr(0,0,37),40,116,104,114,101,97,100,45,106,111,105,110,33,32,116,104,114,101,97,100,49,50,57,32,46,32,116,105,109,101,111,117,116,49,51,48,41,0,0,0};
static C_char C_TLS li26[] C_aligned={C_lihdr(0,0,29),40,116,104,114,101,97,100,45,116,101,114,109,105,110,97,116,101,33,32,116,104,114,101,97,100,49,54,49,41,0,0,0};
static C_char C_TLS li27[] C_aligned={C_lihdr(0,0,7),40,97,49,49,51,51,41,0};
static C_char C_TLS li28[] C_aligned={C_lihdr(0,0,17),40,97,49,49,50,52,32,114,101,116,117,114,110,49,55,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li29[] C_aligned={C_lihdr(0,0,27),40,116,104,114,101,97,100,45,115,117,115,112,101,110,100,33,32,116,104,114,101,97,100,49,55,52,41,0,0,0,0,0};
static C_char C_TLS li30[] C_aligned={C_lihdr(0,0,26),40,116,104,114,101,97,100,45,114,101,115,117,109,101,33,32,116,104,114,101,97,100,49,56,50,41,0,0,0,0,0,0};
static C_char C_TLS li31[] C_aligned={C_lihdr(0,0,7),40,97,49,49,56,50,41,0};
static C_char C_TLS li32[] C_aligned={C_lihdr(0,0,17),40,97,49,49,55,48,32,114,101,116,117,114,110,49,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li33[] C_aligned={C_lihdr(0,0,21),40,116,104,114,101,97,100,45,115,108,101,101,112,33,32,116,109,49,56,56,41,0,0,0};
static C_char C_TLS li34[] C_aligned={C_lihdr(0,0,13),40,109,117,116,101,120,63,32,120,50,48,49,41,0,0,0};
static C_char C_TLS li35[] C_aligned={C_lihdr(0,0,20),40,109,97,107,101,45,109,117,116,101,120,32,46,32,105,100,50,48,51,41,0,0,0,0};
static C_char C_TLS li36[] C_aligned={C_lihdr(0,0,17),40,109,117,116,101,120,45,110,97,109,101,32,120,50,48,56,41,0,0,0,0,0,0,0};
static C_char C_TLS li37[] C_aligned={C_lihdr(0,0,25),40,109,117,116,101,120,45,115,112,101,99,105,102,105,99,32,109,117,116,101,120,50,49,49,41,0,0,0,0,0,0,0};
static C_char C_TLS li38[] C_aligned={C_lihdr(0,0,35),40,109,117,116,101,120,45,115,112,101,99,105,102,105,99,45,115,101,116,33,32,109,117,116,101,120,50,49,52,32,120,50,49,53,41,0,0,0,0,0};
static C_char C_TLS li39[] C_aligned={C_lihdr(0,0,22),40,109,117,116,101,120,45,115,116,97,116,101,32,109,117,116,101,120,50,49,56,41,0,0};
static C_char C_TLS li40[] C_aligned={C_lihdr(0,0,8),40,115,119,105,116,99,104,41};
static C_char C_TLS li41[] C_aligned={C_lihdr(0,0,7),40,99,104,101,99,107,41,0};
static C_char C_TLS li42[] C_aligned={C_lihdr(0,0,7),40,97,49,52,50,55,41,0};
static C_char C_TLS li43[] C_aligned={C_lihdr(0,0,7),40,97,49,52,56,50,41,0};
static C_char C_TLS li44[] C_aligned={C_lihdr(0,0,17),40,97,49,51,48,51,32,114,101,116,117,114,110,50,52,53,41,0,0,0,0,0,0,0};
static C_char C_TLS li45[] C_aligned={C_lihdr(0,0,36),40,109,117,116,101,120,45,108,111,99,107,33,32,109,117,116,101,120,50,51,49,32,46,32,109,115,45,97,110,100,45,116,50,51,50,41,0,0,0,0};
static C_char C_TLS li46[] C_aligned={C_lihdr(0,0,7),40,97,49,54,51,57,41,0};
static C_char C_TLS li47[] C_aligned={C_lihdr(0,0,7),40,97,49,54,55,55,41,0};
static C_char C_TLS li48[] C_aligned={C_lihdr(0,0,17),40,97,49,53,50,55,32,114,101,116,117,114,110,51,48,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li49[] C_aligned={C_lihdr(0,0,41),40,109,117,116,101,120,45,117,110,108,111,99,107,33,32,109,117,116,101,120,50,57,54,32,46,32,99,118,97,114,45,97,110,100,45,116,111,50,57,55,41,0,0,0,0,0,0,0};
static C_char C_TLS li50[] C_aligned={C_lihdr(0,0,35),40,109,97,107,101,45,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,32,46,32,110,97,109,101,51,53,52,41,0,0,0,0,0};
static C_char C_TLS li51[] C_aligned={C_lihdr(0,0,26),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,63,32,120,51,53,54,41,0,0,0,0,0,0};
static C_char C_TLS li52[] C_aligned={C_lihdr(0,0,31),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,110,97,109,101,32,99,118,51,53,56,41,0};
static C_char C_TLS li53[] C_aligned={C_lihdr(0,0,35),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,115,112,101,99,105,102,105,99,32,99,118,51,54,49,41,0,0,0,0,0};
static C_char C_TLS li54[] C_aligned={C_lihdr(0,0,45),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,115,112,101,99,105,102,105,99,45,115,101,116,33,32,99,118,51,54,52,32,120,51,54,53,41,0,0,0};
static C_char C_TLS li55[] C_aligned={C_lihdr(0,0,36),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,115,105,103,110,97,108,33,32,99,118,97,114,51,54,56,41,0,0,0,0};
static C_char C_TLS li56[] C_aligned={C_lihdr(0,0,17),40,108,111,111,112,51,56,56,32,103,51,57,50,51,57,52,41,0,0,0,0,0,0,0};
static C_char C_TLS li57[] C_aligned={C_lihdr(0,0,39),40,99,111,110,100,105,116,105,111,110,45,118,97,114,105,97,98,108,101,45,98,114,111,97,100,99,97,115,116,33,32,99,118,97,114,51,56,53,41,0};
static C_char C_TLS li58[] C_aligned={C_lihdr(0,0,7),40,97,49,57,49,50,41,0};
static C_char C_TLS li59[] C_aligned={C_lihdr(0,0,33),40,116,104,114,101,97,100,45,115,105,103,110,97,108,33,32,116,104,114,101,97,100,52,49,49,32,101,120,110,52,49,50,41,0,0,0,0,0,0,0};
static C_char C_TLS li60[] C_aligned={C_lihdr(0,0,40),40,116,104,114,101,97,100,45,119,97,105,116,45,102,111,114,45,105,47,111,33,32,102,100,52,52,54,32,46,32,116,109,112,52,52,53,52,52,55,41};
static C_char C_TLS li61[] C_aligned={C_lihdr(0,0,24),40,35,35,115,121,115,35,114,101,97,100,45,112,114,111,109,112,116,45,104,111,111,107,41};
static C_char C_TLS li62[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(C_srfi_18_toplevel)
C_externexport void C_ccall C_srfi_18_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_514)
static void C_ccall f_514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_517)
static void C_ccall f_517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_783)
static void C_ccall f_783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2019)
static void C_ccall f_2019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1993)
static void C_ccall f_1993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2003)
static void C_ccall f_2003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2006)
static void C_ccall f_2006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2009)
static void C_ccall f_2009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1954)
static void C_fcall f_1954(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1960)
static void C_ccall f_1960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1966)
static void C_ccall f_1966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1880)
static void C_ccall f_1880(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1947)
static void C_ccall f_1947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1930)
static void C_ccall f_1930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1902)
static void C_fcall f_1902(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1837)
static void C_fcall f_1837(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1867)
static void C_ccall f_1867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1828)
static void C_ccall f_1828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1778)
static void C_ccall f_1778(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1760)
static void C_ccall f_1760(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1751)
static void C_ccall f_1751(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1726)
static void C_ccall f_1726(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1726)
static void C_ccall f_1726r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1734)
static void C_ccall f_1734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1528)
static void C_ccall f_1528(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1535)
static void C_ccall f_1535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1698)
static void C_ccall f_1698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1678)
static void C_ccall f_1678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1640)
static void C_ccall f_1640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1666)
static void C_ccall f_1666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1659)
static void C_ccall f_1659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1547)
static void C_ccall f_1547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1287)
static void C_ccall f_1287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1304)
static void C_ccall f_1304(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f2108)
static void C_ccall f2108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2104)
static void C_ccall f2104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f2100)
static void C_ccall f2100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1417)
static void C_ccall f_1417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1423)
static void C_ccall f_1423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1428)
static void C_ccall f_1428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1465)
static void C_ccall f_1465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1435)
static void C_ccall f_1435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1328)
static void C_fcall f_1328(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1339)
static void C_ccall f_1339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1307)
static void C_fcall f_1307(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1318)
static void C_ccall f_1318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1253)
static void C_ccall f_1253(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1244)
static void C_ccall f_1244(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1235)
static void C_ccall f_1235(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1226)
static void C_ccall f_1226(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1208)
static void C_ccall f_1208(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1208)
static void C_ccall f_1208r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1212)
static void C_ccall f_1212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1202)
static void C_ccall f_1202(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1162)
static void C_ccall f_1162(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1190)
static void C_ccall f_1190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1197)
static void C_ccall f_1197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1171)
static void C_ccall f_1171(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1178)
static void C_ccall f_1178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1183)
static void C_ccall f_1183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1140)
static void C_ccall f_1140(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1107)
static void C_ccall f_1107(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1125)
static void C_ccall f_1125(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1134)
static void C_ccall f_1134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1063)
static void C_ccall f_1063(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1102)
static void C_ccall f_1102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1070)
static void C_ccall f_1070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1079)
static void C_ccall f_1079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_935)
static void C_ccall f_935(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_935)
static void C_ccall f_935r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_942)
static void C_ccall f_942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_956)
static void C_ccall f_956(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_960)
static void C_ccall f_960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_966)
static void C_ccall f_966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_971)
static void C_ccall f_971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1029)
static void C_ccall f_1029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1010)
static void C_ccall f_1010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_899)
static void C_ccall f_899(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_929)
static void C_ccall f_929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_903)
static void C_fcall f_903(C_word t0,C_word t1) C_noret;
C_noret_decl(f_906)
static void C_ccall f_906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_912)
static void C_ccall f_912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_890)
static void C_ccall f_890(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_874)
static void C_ccall f_874(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_888)
static void C_ccall f_888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_865)
static void C_ccall f_865(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_856)
static void C_ccall f_856(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_847)
static void C_ccall f_847(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_838)
static void C_ccall f_838(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_835)
static void C_ccall f_835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_829)
static void C_ccall f_829(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_785)
static void C_ccall f_785(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_785)
static void C_ccall f_785r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_814)
static void C_ccall f_814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_789)
static void C_ccall f_789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_794)
static void C_ccall f_794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_800)
static void C_ccall f_800(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_800)
static void C_ccall f_800r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_807)
static void C_ccall f_807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_765)
static void C_ccall f_765(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_749)
static void C_ccall f_749(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_733)
static void C_ccall f_733(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_717)
static void C_ccall f_717(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_709)
static void C_ccall f_709(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_693)
static void C_ccall f_693(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_639)
static void C_ccall f_639(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_646)
static void C_ccall f_646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_687)
static void C_ccall f_687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_683)
static void C_ccall f_683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_649)
static void C_ccall f_649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_667)
static void C_ccall f_667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_659)
static void C_ccall f_659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_610)
static void C_ccall f_610(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_589)
static void C_ccall f_589(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_562)
static void C_ccall f_562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_574)
static void C_ccall f_574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_519)
static void C_fcall f_519(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_553)
static void C_ccall f_553(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1954)
static void C_fcall trf_1954(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1954(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1954(t0,t1);}

C_noret_decl(trf_1902)
static void C_fcall trf_1902(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1902(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1902(t0,t1);}

C_noret_decl(trf_1837)
static void C_fcall trf_1837(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1837(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1837(t0,t1,t2);}

C_noret_decl(trf_1328)
static void C_fcall trf_1328(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1328(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1328(t0,t1);}

C_noret_decl(trf_1307)
static void C_fcall trf_1307(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1307(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1307(t0,t1);}

C_noret_decl(trf_903)
static void C_fcall trf_903(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_903(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_903(t0,t1);}

C_noret_decl(trf_519)
static void C_fcall trf_519(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_519(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_519(t0,t1,t2);}

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
C_srfi_18_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_18_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_18_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1115)){
C_save(t1);
C_rereclaim2(1115*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,114);
lf[0]=C_h_intern(&lf[0],8,"truncate");
lf[2]=C_h_intern(&lf[2],4,"time");
lf[3]=C_h_intern(&lf[3],15,"\003syssignal-hook");
lf[4]=C_h_intern(&lf[4],11,"\000type-error");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid timeout argument");
lf[6]=C_h_intern(&lf[6],12,"current-time");
lf[7]=C_h_intern(&lf[7],20,"srfi-18:current-time");
lf[8]=C_h_intern(&lf[8],13,"time->seconds");
lf[9]=C_h_intern(&lf[9],18,"time->milliseconds");
lf[10]=C_h_intern(&lf[10],13,"seconds->time");
lf[11]=C_h_intern(&lf[11],19,"\003sysflonum-fraction");
lf[12]=C_h_intern(&lf[12],18,"\003sysexact->inexact");
lf[13]=C_h_intern(&lf[13],3,"max");
lf[14]=C_h_intern(&lf[14],18,"milliseconds->time");
lf[15]=C_h_intern(&lf[15],5,"time\077");
lf[16]=C_h_intern(&lf[16],13,"srfi-18:time\077");
lf[17]=C_h_intern(&lf[17],5,"raise");
lf[18]=C_h_intern(&lf[18],10,"\003syssignal");
lf[19]=C_h_intern(&lf[19],23,"join-timeout-exception\077");
lf[20]=C_h_intern(&lf[20],9,"condition");
lf[21]=C_h_intern(&lf[21],22,"join-timeout-exception");
lf[22]=C_h_intern(&lf[22],26,"abandoned-mutex-exception\077");
lf[23]=C_h_intern(&lf[23],25,"abandoned-mutex-exception");
lf[24]=C_h_intern(&lf[24],28,"terminated-thread-exception\077");
lf[25]=C_h_intern(&lf[25],27,"terminated-thread-exception");
lf[26]=C_h_intern(&lf[26],19,"uncaught-exception\077");
lf[27]=C_h_intern(&lf[27],18,"uncaught-exception");
lf[28]=C_h_intern(&lf[28],25,"uncaught-exception-reason");
lf[29]=C_h_intern(&lf[29],6,"gensym");
lf[30]=C_h_intern(&lf[30],11,"make-thread");
lf[31]=C_h_intern(&lf[31],12,"\003sysschedule");
lf[32]=C_h_intern(&lf[32],16,"\003systhread-kill!");
lf[33]=C_h_intern(&lf[33],4,"dead");
lf[34]=C_h_intern(&lf[34],18,"\003syscurrent-thread");
lf[35]=C_h_intern(&lf[35],15,"\003sysmake-thread");
lf[36]=C_h_intern(&lf[36],7,"created");
lf[37]=C_h_intern(&lf[37],6,"thread");
lf[38]=C_h_intern(&lf[38],7,"thread\077");
lf[39]=C_h_intern(&lf[39],14,"current-thread");
lf[40]=C_h_intern(&lf[40],12,"thread-state");
lf[41]=C_h_intern(&lf[41],15,"thread-specific");
lf[42]=C_h_intern(&lf[42],20,"thread-specific-set!");
lf[43]=C_h_intern(&lf[43],14,"thread-quantum");
lf[44]=C_h_intern(&lf[44],19,"thread-quantum-set!");
lf[45]=C_h_intern(&lf[45],5,"fxmax");
lf[46]=C_h_intern(&lf[46],11,"thread-name");
lf[47]=C_h_intern(&lf[47],13,"thread-start!");
lf[48]=C_h_intern(&lf[48],5,"ready");
lf[49]=C_h_intern(&lf[49],22,"\003sysadd-to-ready-queue");
lf[50]=C_h_intern(&lf[50],9,"\003syserror");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000&thread cannot be started a second time");
lf[52]=C_h_intern(&lf[52],13,"thread-yield!");
lf[53]=C_h_intern(&lf[53],17,"\003systhread-yield!");
lf[54]=C_h_intern(&lf[54],12,"thread-join!");
lf[55]=C_h_intern(&lf[55],28,"\003sysremove-from-timeout-list");
lf[56]=C_h_intern(&lf[56],10,"terminated");
lf[57]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\022uncaught-exception\376\001\000\000\006reason");
lf[58]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\022uncaught-exception\376\377\016");
lf[59]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\026join-timeout-exception\376\377\016");
lf[60]=C_h_intern(&lf[60],33,"\003systhread-block-for-termination!");
lf[61]=C_h_intern(&lf[61],29,"\003systhread-block-for-timeout!");
lf[62]=C_h_intern(&lf[62],17,"thread-terminate!");
lf[63]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\033terminated-thread-exception\376\377\016");
lf[64]=C_h_intern(&lf[64],21,"\003sysprimordial-thread");
lf[65]=C_h_intern(&lf[65],16,"\003sysexit-handler");
lf[66]=C_h_intern(&lf[66],15,"thread-suspend!");
lf[67]=C_h_intern(&lf[67],9,"suspended");
lf[68]=C_h_intern(&lf[68],14,"thread-resume!");
lf[69]=C_h_intern(&lf[69],13,"thread-sleep!");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\030invalid timeout argument");
lf[71]=C_h_intern(&lf[71],6,"mutex\077");
lf[72]=C_h_intern(&lf[72],5,"mutex");
lf[73]=C_h_intern(&lf[73],10,"make-mutex");
lf[74]=C_h_intern(&lf[74],14,"\003sysmake-mutex");
lf[75]=C_h_intern(&lf[75],10,"mutex-name");
lf[76]=C_h_intern(&lf[76],14,"mutex-specific");
lf[77]=C_h_intern(&lf[77],19,"mutex-specific-set!");
lf[78]=C_h_intern(&lf[78],11,"mutex-state");
lf[79]=C_h_intern(&lf[79],9,"not-owned");
lf[80]=C_h_intern(&lf[80],9,"abandoned");
lf[81]=C_h_intern(&lf[81],13,"not-abandoned");
lf[82]=C_h_intern(&lf[82],11,"mutex-lock!");
lf[83]=C_h_intern(&lf[83],10,"\003sysappend");
lf[84]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\031abandoned-mutex-exception\376\377\016");
lf[85]=C_h_intern(&lf[85],8,"\003sysdelq");
lf[86]=C_h_intern(&lf[86],8,"sleeping");
lf[87]=C_h_intern(&lf[87],13,"mutex-unlock!");
lf[88]=C_h_intern(&lf[88],18,"condition-variable");
lf[89]=C_h_intern(&lf[89],7,"running");
lf[90]=C_h_intern(&lf[90],7,"blocked");
lf[91]=C_h_intern(&lf[91],23,"make-condition-variable");
lf[92]=C_h_intern(&lf[92],19,"condition-variable\077");
lf[93]=C_h_intern(&lf[93],23,"condition-variable-name");
lf[94]=C_h_intern(&lf[94],27,"condition-variable-specific");
lf[95]=C_h_intern(&lf[95],32,"condition-variable-specific-set!");
lf[96]=C_h_intern(&lf[96],26,"condition-variable-signal!");
lf[97]=C_h_intern(&lf[97],25,"\003systhread-basic-unblock!");
lf[98]=C_h_intern(&lf[98],29,"condition-variable-broadcast!");
lf[99]=C_h_intern(&lf[99],14,"thread-signal!");
lf[100]=C_h_intern(&lf[100],19,"\003systhread-unblock!");
lf[101]=C_h_intern(&lf[101],20,"thread-wait-for-i/o!");
lf[102]=C_h_intern(&lf[102],25,"\003systhread-block-for-i/o!");
lf[103]=C_h_intern(&lf[103],4,"\000all");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[105]=C_h_intern(&lf[105],4,"msvc");
lf[106]=C_h_intern(&lf[106],20,"\003sysread-prompt-hook");
lf[107]=C_h_intern(&lf[107],13,"\003systty-port\077");
lf[108]=C_h_intern(&lf[108],18,"\003sysstandard-input");
lf[109]=C_h_intern(&lf[109],14,"build-platform");
lf[110]=C_h_intern(&lf[110],27,"condition-property-accessor");
lf[111]=C_h_intern(&lf[111],6,"reason");
lf[112]=C_h_intern(&lf[112],17,"register-feature!");
lf[113]=C_h_intern(&lf[113],7,"srfi-18");
C_register_lf2(lf,114,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_514,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k512 */
static void C_ccall f_514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_517,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 55   register-feature! */
((C_proc3)C_retrieve_proc(*((C_word*)lf[112]+1)))(3,*((C_word*)lf[112]+1),t2,lf[113]);}

/* k515 in k512 */
static void C_ccall f_517(C_word c,C_word t0,C_word t1){
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
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_517,2,t0,t1);}
t2=*((C_word*)lf[0]+1);
t3=C_mutate(&lf[1] /* (set! compute-time-limit ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_519,a[2]=t2,a[3]=((C_word)li0),tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[6]+1 /* (set! current-time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_562,a[2]=((C_word)li1),tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[7]+1 /* (set! srfi-18:current-time ...) */,*((C_word*)lf[6]+1));
t6=C_mutate((C_word*)lf[8]+1 /* (set! time->seconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_589,a[2]=((C_word)li2),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[9]+1 /* (set! time->milliseconds ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_610,a[2]=((C_word)li3),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[10]+1 /* (set! seconds->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_639,a[2]=((C_word)li4),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[14]+1 /* (set! milliseconds->time ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_693,a[2]=((C_word)li5),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[15]+1 /* (set! time? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_709,a[2]=((C_word)li6),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[16]+1 /* (set! srfi-18:time? ...) */,*((C_word*)lf[15]+1));
t12=C_mutate((C_word*)lf[17]+1 /* (set! raise ...) */,*((C_word*)lf[18]+1));
t13=C_mutate((C_word*)lf[19]+1 /* (set! join-timeout-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_717,a[2]=((C_word)li7),tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[22]+1 /* (set! abandoned-mutex-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_733,a[2]=((C_word)li8),tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[24]+1 /* (set! terminated-thread-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_749,a[2]=((C_word)li9),tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[26]+1 /* (set! uncaught-exception? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_765,a[2]=((C_word)li10),tmp=(C_word)a,a+=3,tmp));
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_783,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 148  condition-property-accessor */
t18=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t17,lf[27],lf[111]);}

/* k781 in k515 in k512 */
static void C_ccall f_783(C_word c,C_word t0,C_word t1){
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
C_word ab[103],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_783,2,t0,t1);}
t2=C_mutate((C_word*)lf[28]+1 /* (set! uncaught-exception-reason ...) */,t1);
t3=*((C_word*)lf[29]+1);
t4=C_mutate((C_word*)lf[30]+1 /* (set! make-thread ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_785,a[2]=t3,a[3]=((C_word)li13),tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[38]+1 /* (set! thread? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_829,a[2]=((C_word)li14),tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[39]+1 /* (set! current-thread ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_835,a[2]=((C_word)li15),tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[40]+1 /* (set! thread-state ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_838,a[2]=((C_word)li16),tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[41]+1 /* (set! thread-specific ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_847,a[2]=((C_word)li17),tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[42]+1 /* (set! thread-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_856,a[2]=((C_word)li18),tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[43]+1 /* (set! thread-quantum ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_865,a[2]=((C_word)li19),tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[44]+1 /* (set! thread-quantum-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_874,a[2]=((C_word)li20),tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[46]+1 /* (set! thread-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_890,a[2]=((C_word)li21),tmp=(C_word)a,a+=3,tmp));
t13=*((C_word*)lf[30]+1);
t14=C_mutate((C_word*)lf[47]+1 /* (set! thread-start! ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_899,a[2]=t13,a[3]=((C_word)li22),tmp=(C_word)a,a+=4,tmp));
t15=C_mutate((C_word*)lf[52]+1 /* (set! thread-yield! ...) */,*((C_word*)lf[53]+1));
t16=C_mutate((C_word*)lf[54]+1 /* (set! thread-join! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_935,a[2]=((C_word)li25),tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[62]+1 /* (set! thread-terminate! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1063,a[2]=((C_word)li26),tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[66]+1 /* (set! thread-suspend! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1107,a[2]=((C_word)li29),tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[68]+1 /* (set! thread-resume! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1140,a[2]=((C_word)li30),tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[69]+1 /* (set! thread-sleep! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1162,a[2]=((C_word)li33),tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[71]+1 /* (set! mutex? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1202,a[2]=((C_word)li34),tmp=(C_word)a,a+=3,tmp));
t22=*((C_word*)lf[29]+1);
t23=C_mutate((C_word*)lf[73]+1 /* (set! make-mutex ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1208,a[2]=t22,a[3]=((C_word)li35),tmp=(C_word)a,a+=4,tmp));
t24=C_mutate((C_word*)lf[75]+1 /* (set! mutex-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1226,a[2]=((C_word)li36),tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[76]+1 /* (set! mutex-specific ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1235,a[2]=((C_word)li37),tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[77]+1 /* (set! mutex-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1244,a[2]=((C_word)li38),tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[78]+1 /* (set! mutex-state ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1253,a[2]=((C_word)li39),tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[82]+1 /* (set! mutex-lock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1277,a[2]=((C_word)li45),tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[87]+1 /* (set! mutex-unlock! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1510,a[2]=((C_word)li49),tmp=(C_word)a,a+=3,tmp));
t30=*((C_word*)lf[29]+1);
t31=C_mutate((C_word*)lf[91]+1 /* (set! make-condition-variable ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1726,a[2]=t30,a[3]=((C_word)li50),tmp=(C_word)a,a+=4,tmp));
t32=C_mutate((C_word*)lf[92]+1 /* (set! condition-variable? ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1745,a[2]=((C_word)li51),tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[93]+1 /* (set! condition-variable-name ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1751,a[2]=((C_word)li52),tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[94]+1 /* (set! condition-variable-specific ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1760,a[2]=((C_word)li53),tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[95]+1 /* (set! condition-variable-specific-set! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1769,a[2]=((C_word)li54),tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[96]+1 /* (set! condition-variable-signal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1778,a[2]=((C_word)li55),tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[98]+1 /* (set! condition-variable-broadcast! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1821,a[2]=((C_word)li57),tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[99]+1 /* (set! thread-signal! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1880,a[2]=((C_word)li59),tmp=(C_word)a,a+=3,tmp));
t39=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1954,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t40=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2019,a[2]=t39,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 493  build-platform */
((C_proc2)C_retrieve_proc(*((C_word*)lf[109]+1)))(2,*((C_word*)lf[109]+1),t40);}

/* k2017 in k781 in k515 in k512 */
static void C_ccall f_2019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2019,2,t0,t1);}
t2=C_eqp(t1,lf[105]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_1954(t3,C_SCHEME_UNDEFINED);}
else{
t3=*((C_word*)lf[106]+1);
t4=*((C_word*)lf[52]+1);
t5=C_mutate((C_word*)lf[106]+1 /* (set! read-prompt-hook ...) */,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1993,a[2]=t3,a[3]=t4,a[4]=((C_word)li61),tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t0)[2];
f_1954(t6,t5);}}

/* ##sys#read-prompt-hook in k2017 in k781 in k515 in k512 */
static void C_ccall f_1993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1993,2,t0,t1);}
t2=C_fudge(C_fix(12));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2003,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_2003(2,t4,t2);}
else{
/* srfi-18.scm: 498  ##sys#tty-port? */
t4=*((C_word*)lf[107]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[108]+1));}}

/* k2001 in ##sys#read-prompt-hook in k2017 in k781 in k515 in k512 */
static void C_ccall f_2003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2003,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2006,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 499  old */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2004 in k2001 in ##sys#read-prompt-hook in k2017 in k781 in k515 in k512 */
static void C_ccall f_2006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2006,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2009,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 500  ##sys#thread-block-for-i/o! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[102]+1)))(5,*((C_word*)lf[102]+1),t2,*((C_word*)lf[34]+1),C_fix(0),C_SCHEME_TRUE);}

/* k2007 in k2004 in k2001 in ##sys#read-prompt-hook in k2017 in k781 in k515 in k512 */
static void C_ccall f_2009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 501  thread-yield! */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1952 in k781 in k515 in k512 */
static void C_fcall f_1954(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1954,NULL,2,t0,t1);}
t2=C_mutate((C_word*)lf[101]+1 /* (set! thread-wait-for-i/o! ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1956,a[2]=((C_word)li60),tmp=(C_word)a,a+=3,tmp));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* thread-wait-for-i/o! in k1952 in k781 in k515 in k512 */
static void C_ccall f_1956(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1956r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1956r(t0,t1,t2,t3);}}

static void C_ccall f_1956r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1960,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_nullp(t3))){
t5=t4;
f_1960(2,t5,lf[103]);}
else{
t5=C_i_cdr(t3);
if(C_truep(C_i_nullp(t5))){
t6=t4;
f_1960(2,t6,C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[104],t3);}}}

/* k1958 in thread-wait-for-i/o! in k1952 in k781 in k515 in k512 */
static void C_ccall f_1960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1960,2,t0,t1);}
t2=C_i_check_exact_2(((C_word*)t0)[3],lf[101]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1966,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 508  ##sys#thread-block-for-i/o! */
((C_proc5)C_retrieve_proc(*((C_word*)lf[102]+1)))(5,*((C_word*)lf[102]+1),t3,*((C_word*)lf[34]+1),((C_word*)t0)[3],t1);}

/* k1964 in k1958 in thread-wait-for-i/o! in k1952 in k781 in k515 in k512 */
static void C_ccall f_1966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 509  thread-yield! */
t2=*((C_word*)lf[52]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* thread-signal! in k781 in k515 in k512 */
static void C_ccall f_1880(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1880,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[37],lf[99]);
t5=C_eqp(t2,*((C_word*)lf[34]+1));
if(C_truep(t5)){
/* srfi-18.scm: 474  ##sys#signal */
t6=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t3);}
else{
t6=C_slot(t2,C_fix(1));
t7=C_slot(t2,C_fix(11));
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1902,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_structurep(t7,lf[88]))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1930,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t7,C_fix(2));
/* srfi-18.scm: 479  ##sys#delq */
t11=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t2,t10);}
else{
if(C_truep(C_i_structurep(t7,lf[72]))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1947,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=C_slot(t7,C_fix(3));
/* srfi-18.scm: 481  ##sys#delq */
t11=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t2,t10);}
else{
t9=C_SCHEME_UNDEFINED;
t10=t8;
f_1902(t10,t9);}}}}

/* k1945 in thread-signal! in k781 in k515 in k512 */
static void C_ccall f_1947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_1902(t2,C_i_setslot(((C_word*)t0)[2],C_fix(3),t1));}

/* k1928 in thread-signal! in k781 in k515 in k512 */
static void C_ccall f_1930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_1902(t2,C_i_setslot(((C_word*)t0)[2],C_fix(2),t1));}

/* k1900 in thread-signal! in k781 in k515 in k512 */
static void C_fcall f_1902(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1902,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1913,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word)li58),tmp=(C_word)a,a+=5,tmp);
t3=C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=C_i_setslot(((C_word*)t0)[3],C_fix(3),lf[90]);
/* srfi-18.scm: 488  ##sys#thread-unblock! */
t5=*((C_word*)lf[100]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* a1912 in k1900 in thread-signal! in k781 in k515 in k512 */
static void C_ccall f_1913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1917,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 485  ##sys#signal */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1915 in a1912 in k1900 in thread-signal! in k781 in k515 in k512 */
static void C_ccall f_1917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 486  old */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* condition-variable-broadcast! in k781 in k515 in k512 */
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1821,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[88],lf[98]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1828,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_slot(t2,C_fix(2));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1837,a[2]=t7,a[3]=((C_word)li56),tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_1837(t9,t4,t5);}

/* loop388 in condition-variable-broadcast! in k781 in k515 in k512 */
static void C_fcall f_1837(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1837,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1867,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_slot(t4,C_fix(3));
t6=C_eqp(t5,lf[90]);
t7=(C_truep(t6)?t6:C_eqp(t5,lf[86]));
if(C_truep(t7)){
/* srfi-18.scm: 463  ##sys#thread-basic-unblock! */
t8=*((C_word*)lf[97]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t3,t4);}
else{
t8=C_slot(t2,C_fix(1));
t11=t1;
t12=t8;
t1=t11;
t2=t12;
goto loop;}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1865 in loop388 in condition-variable-broadcast! in k781 in k515 in k512 */
static void C_ccall f_1867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1837(t3,((C_word*)t0)[2],t2);}

/* k1826 in condition-variable-broadcast! in k781 in k515 in k512 */
static void C_ccall f_1828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[2],C_fix(2),C_SCHEME_END_OF_LIST));}

/* condition-variable-signal! in k781 in k515 in k512 */
static void C_ccall f_1778(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1778,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[88],lf[96]);
t4=C_slot(t2,C_fix(2));
if(C_truep(C_i_nullp(t4))){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_slot(t4,C_fix(0));
t6=C_slot(t5,C_fix(3));
t7=C_slot(t4,C_fix(1));
t8=C_i_setslot(t2,C_fix(2),t7);
t9=C_eqp(t6,lf[90]);
if(C_truep(t9)){
if(C_truep(t9)){
/* srfi-18.scm: 454  ##sys#thread-basic-unblock! */
t10=*((C_word*)lf[97]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t1,t5);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}}
else{
t10=C_eqp(t6,lf[86]);
if(C_truep(t10)){
/* srfi-18.scm: 454  ##sys#thread-basic-unblock! */
t11=*((C_word*)lf[97]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t1,t5);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_UNDEFINED);}}}}

/* condition-variable-specific-set! in k781 in k515 in k512 */
static void C_ccall f_1769(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1769,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[88],lf[95]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(3),t3));}

/* condition-variable-specific in k781 in k515 in k512 */
static void C_ccall f_1760(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1760,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[88],lf[94]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(3)));}

/* condition-variable-name in k781 in k515 in k512 */
static void C_ccall f_1751(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1751,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[88],lf[93]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* condition-variable? in k781 in k515 in k512 */
static void C_ccall f_1745(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1745,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[88]));}

/* make-condition-variable in k781 in k515 in k512 */
static void C_ccall f_1726(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2r,(void*)f_1726r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1726r(t0,t1,t2);}}

static void C_ccall f_1726r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1734,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_a_i_record(&a,4,lf[88],t4,C_SCHEME_END_OF_LIST,C_SCHEME_UNDEFINED));}
else{
/* srfi-18.scm: 426  gensym */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[88]);}}

/* k1732 in make-condition-variable in k781 in k515 in k512 */
static void C_ccall f_1734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1734,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_a_i_record(&a,4,lf[88],t1,C_SCHEME_END_OF_LIST,C_SCHEME_UNDEFINED));}

/* mutex-unlock! in k781 in k515 in k512 */
static void C_ccall f_1510(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_1510r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1510r(t0,t1,t2,t3);}}

static void C_ccall f_1510r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(7);
t4=C_i_check_structure_2(t2,lf[72],lf[87]);
t5=*((C_word*)lf[34]+1);
t6=C_i_pairp(t3);
t7=(C_truep(t6)?C_i_car(t3):C_SCHEME_FALSE);
t8=C_i_length(t3);
t9=C_fixnum_greaterp(t8,C_fix(1));
t10=(C_truep(t9)?C_i_cadr(t3):C_SCHEME_FALSE);
t11=(C_truep(t7)?C_i_check_structure_2(t7,lf[88],lf[87]):C_SCHEME_UNDEFINED);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1528,a[2]=t10,a[3]=t7,a[4]=t5,a[5]=t2,a[6]=((C_word)li48),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm: 378  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t12);}

/* a1527 in mutex-unlock! in k781 in k515 in k512 */
static void C_ccall f_1528(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1528,3,t0,t1,t2);}
t3=C_slot(((C_word*)t0)[5],C_fix(3));
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1535,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
/* srfi-18.scm: 381  ##sys#compute-time-limit */
t5=lf[1];
f_519(t5,t4,((C_word*)t0)[2]);}
else{
t5=t4;
f_1535(2,t5,C_SCHEME_FALSE);}}

/* k1533 in a1527 in mutex-unlock! in k781 in k515 in k512 */
static void C_ccall f_1535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1535,2,t0,t1);}
t2=C_i_set_i_slot(((C_word*)t0)[7],C_fix(4),C_SCHEME_FALSE);
t3=C_i_set_i_slot(((C_word*)t0)[7],C_fix(5),C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1698,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t5=C_slot(((C_word*)t0)[6],C_fix(8));
/* srfi-18.scm: 384  ##sys#delq */
t6=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[7],t5);}

/* k1696 in k1533 in a1527 in mutex-unlock! in k781 in k515 in k512 */
static void C_ccall f_1698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1698,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[8],C_fix(8),t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1547,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1686,a[2]=t3,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t5=C_slot(((C_word*)t0)[3],C_fix(2));
t6=C_a_i_list(&a,1,((C_word*)t0)[8]);
/* srfi-18.scm: 386  ##sys#append */
t7=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,t5,t6);}
else{
t4=t3;
f_1547(2,t4,C_SCHEME_UNDEFINED);}}

/* k1684 in k1696 in k1533 in a1527 in mutex-unlock! in k781 in k515 in k512 */
static void C_ccall f_1686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1686,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[6],C_fix(2),t1);
t3=C_i_setslot(((C_word*)t0)[5],C_fix(11),((C_word*)t0)[6]);
if(C_truep(((C_word*)t0)[4])){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1640,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word)li46),tmp=(C_word)a,a+=6,tmp);
t5=C_i_setslot(((C_word*)t0)[5],C_fix(1),t4);
/* srfi-18.scm: 399  ##sys#thread-block-for-timeout! */
t6=*((C_word*)lf[61]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1678,a[2]=((C_word*)t0)[3],a[3]=((C_word)li47),tmp=(C_word)a,a+=4,tmp);
t5=C_i_setslot(((C_word*)t0)[5],C_fix(1),t4);
t6=((C_word*)t0)[2];
f_1547(2,t6,C_i_setslot(((C_word*)t0)[5],C_fix(3),lf[86]));}}

/* a1677 in k1684 in k1696 in k1533 in a1527 in mutex-unlock! in k781 in k515 in k512 */
static void C_ccall f_1678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1678,2,t0,t1);}
/* srfi-18.scm: 401  return */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_TRUE);}

/* a1639 in k1684 in k1696 in k1533 in a1527 in mutex-unlock! in k781 in k515 in k512 */
static void C_ccall f_1640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1640,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1666,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=C_slot(((C_word*)t0)[4],C_fix(2));
/* srfi-18.scm: 392  ##sys#delq */
t4=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[3],t3);}

/* k1664 in a1639 in k1684 in k1696 in k1533 in a1527 in mutex-unlock! in k781 in k515 in k512 */
static void C_ccall f_1666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1666,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[5],C_fix(2),t1);
t3=C_i_set_i_slot(((C_word*)t0)[4],C_fix(11),C_SCHEME_FALSE);
if(C_truep(C_slot(((C_word*)t0)[4],C_fix(13)))){
/* srfi-18.scm: 395  return */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 397  ##sys#remove-from-timeout-list */
((C_proc3)C_retrieve_proc(*((C_word*)lf[55]+1)))(3,*((C_word*)lf[55]+1),t4,((C_word*)t0)[4]);}}

/* k1657 in k1664 in a1639 in k1684 in k1696 in k1533 in a1527 in mutex-unlock! in k781 in k515 in k512 */
static void C_ccall f_1659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 398  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k1545 in k1696 in k1533 in a1527 in mutex-unlock! in k781 in k515 in k512 */
static void C_ccall f_1547(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1547,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1550,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_nullp(((C_word*)t0)[3]))){
t3=t2;
f_1550(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=C_slot(((C_word*)t0)[3],C_fix(0));
t4=C_slot(t3,C_fix(3));
t5=C_slot(((C_word*)t0)[3],C_fix(1));
t6=C_i_setslot(((C_word*)t0)[2],C_fix(3),t5);
t7=C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_SCHEME_TRUE);
t8=C_eqp(t4,lf[90]);
t9=(C_truep(t8)?t8:C_eqp(t4,lf[86]));
if(C_truep(t9)){
t10=C_i_setslot(((C_word*)t0)[2],C_fix(2),t3);
t11=C_slot(t3,C_fix(8));
t12=C_a_i_cons(&a,2,((C_word*)t0)[2],t11);
t13=C_i_setslot(t3,C_fix(8),t12);
t14=C_i_set_i_slot(t3,C_fix(11),C_SCHEME_FALSE);
t15=C_eqp(t4,lf[86]);
if(C_truep(t15)){
/* srfi-18.scm: 412  ##sys#add-to-ready-queue */
t16=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t2,t3);}
else{
t16=t2;
f_1550(2,t16,C_SCHEME_UNDEFINED);}}
else{
t10=C_SCHEME_UNDEFINED;
t11=t2;
f_1550(2,t11,t10);}}}

/* k1548 in k1545 in k1696 in k1533 in a1527 in mutex-unlock! in k781 in k515 in k512 */
static void C_ccall f_1550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(3));
t3=C_eqp(t2,lf[89]);
if(C_truep(t3)){
/* srfi-18.scm: 414  return */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[2],C_SCHEME_TRUE);}
else{
/* srfi-18.scm: 415  ##sys#schedule */
t4=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}}

/* mutex-lock! in k781 in k515 in k512 */
static void C_ccall f_1277(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_1277r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1277r(t0,t1,t2,t3);}}

static void C_ccall f_1277r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[72],lf[82]);
t5=C_i_pairp(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1287,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=C_i_car(t3);
/* srfi-18.scm: 318  ##sys#compute-time-limit */
t8=lf[1];
f_519(t8,t6,t7);}
else{
t7=t6;
f_1287(2,t7,C_SCHEME_FALSE);}}

/* k1285 in mutex-lock! in k781 in k515 in k512 */
static void C_ccall f_1287(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1287,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[4]);
t3=C_fixnum_greaterp(t2,C_fix(1));
t4=(C_truep(t3)?C_i_cadr(((C_word*)t0)[4]):C_SCHEME_FALSE);
t5=C_slot(((C_word*)t0)[3],C_fix(4));
t6=(C_truep(t4)?C_i_check_structure_2(t4,lf[37],lf[82]):C_SCHEME_UNDEFINED);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1304,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t5,a[6]=((C_word*)t0)[3],a[7]=((C_word)li44),tmp=(C_word)a,a+=8,tmp);
/* srfi-18.scm: 323  ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[2],t7);}

/* a1303 in k1285 in mutex-lock! in k781 in k515 in k512 */
static void C_ccall f_1304(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word ab[21],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1304,3,t0,t1,t2);}
t3=*((C_word*)lf[34]+1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1307,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word)li40),tmp=(C_word)a,a+=5,tmp));
t8=t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1328,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word)li41),tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[6],C_fix(5)))){
if(C_truep(((C_word*)t0)[4])){
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1417,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t5,a[5]=t2,a[6]=((C_word*)t0)[3],a[7]=t3,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* srfi-18.scm: 350  check */
t10=t6;
f_1328(t10,t9);}
else{
t9=C_i_setslot(t3,C_fix(3),lf[86]);
t10=C_i_setslot(t3,C_fix(11),((C_word*)t0)[6]);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1483,a[2]=t2,a[3]=((C_word)li43),tmp=(C_word)a,a+=4,tmp);
t12=C_i_setslot(t3,C_fix(1),t11);
/* srfi-18.scm: 367  switch */
t13=((C_word*)t5)[1];
f_1307(t13,t1);}}
else{
t9=(C_truep(((C_word*)t0)[2])?C_i_not(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),C_SCHEME_FALSE);
t11=C_i_set_i_slot(((C_word*)t0)[6],C_fix(5),C_SCHEME_TRUE);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f2100,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 347  check */
t13=t6;
f_1328(t13,t12);}
else{
t10=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:t3);
t11=C_slot(t10,C_fix(3));
t12=C_eqp(lf[56],t11);
t13=(C_truep(t12)?t12:C_eqp(lf[33],t11));
if(C_truep(t13)){
t14=C_i_set_i_slot(((C_word*)t0)[6],C_fix(4),C_SCHEME_TRUE);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f2104,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 347  check */
t16=t6;
f_1328(t16,t15);}
else{
t14=C_i_set_i_slot(((C_word*)t0)[6],C_fix(5),C_SCHEME_TRUE);
t15=C_slot(t10,C_fix(8));
t16=C_a_i_cons(&a,2,((C_word*)t0)[6],t15);
t17=C_i_setslot(t10,C_fix(8),t16);
t18=C_i_setslot(t10,C_fix(11),((C_word*)t0)[6]);
t19=C_i_setslot(((C_word*)t0)[6],C_fix(2),t10);
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f2108,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 347  check */
t21=t6;
f_1328(t21,t20);}}}}

/* f2108 in a1303 in k1285 in mutex-lock! in k781 in k515 in k512 */
static void C_ccall f2108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 348  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* f2104 in a1303 in k1285 in mutex-lock! in k781 in k515 in k512 */
static void C_ccall f2104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 348  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* f2100 in a1303 in k1285 in mutex-lock! in k781 in k515 in k512 */
static void C_ccall f2100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 348  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* a1482 in a1303 in k1285 in mutex-lock! in k781 in k515 in k512 */
static void C_ccall f_1483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1483,2,t0,t1);}
/* srfi-18.scm: 366  return */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_TRUE);}

/* k1415 in a1303 in k1285 in mutex-lock! in k781 in k515 in k512 */
static void C_ccall f_1417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1417,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1428,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word)li42),tmp=(C_word)a,a+=7,tmp);
t3=C_i_setslot(((C_word*)t0)[7],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1423,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 361  ##sys#thread-block-for-timeout! */
t5=*((C_word*)lf[61]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[7],((C_word*)t0)[2]);}

/* k1421 in k1415 in a1303 in k1285 in mutex-lock! in k781 in k515 in k512 */
static void C_ccall f_1423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 362  switch */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1307(t2,((C_word*)t0)[2]);}

/* a1427 in k1415 in a1303 in k1285 in mutex-lock! in k781 in k515 in k512 */
static void C_ccall f_1428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1428,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1465,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=C_slot(((C_word*)t0)[5],C_fix(3));
/* srfi-18.scm: 354  ##sys#delq */
t4=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[4],t3);}

/* k1463 in a1427 in k1415 in a1303 in k1285 in mutex-lock! in k781 in k515 in k512 */
static void C_ccall f_1465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1465,2,t0,t1);}
t2=C_i_setslot(((C_word*)t0)[6],C_fix(3),t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_slot(((C_word*)t0)[5],C_fix(13)))){
t4=t3;
f_1435(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm: 356  ##sys#remove-from-timeout-list */
((C_proc3)C_retrieve_proc(*((C_word*)lf[55]+1)))(3,*((C_word*)lf[55]+1),t3,((C_word*)t0)[5]);}}

/* k1433 in k1463 in a1427 in k1415 in a1303 in k1285 in mutex-lock! in k781 in k515 in k512 */
static void C_ccall f_1435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1435,2,t0,t1);}
t2=C_slot(((C_word*)t0)[6],C_fix(8));
t3=C_a_i_cons(&a,2,((C_word*)t0)[5],t2);
t4=C_i_setslot(((C_word*)t0)[6],C_fix(8),t3);
t5=C_i_set_i_slot(((C_word*)t0)[6],C_fix(11),C_SCHEME_FALSE);
t6=C_i_setslot(((C_word*)t0)[5],C_fix(2),((C_word*)t0)[4]);
/* srfi-18.scm: 360  return */
t7=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t7))(3,t7,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* check in a1303 in k1285 in mutex-lock! in k781 in k515 in k512 */
static void C_fcall f_1328(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1328,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[3])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1339,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=C_a_i_record(&a,3,lf[20],lf[84],C_SCHEME_END_OF_LIST);
/* srfi-18.scm: 331  ##sys#signal */
t4=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1337 in check in a1303 in k1285 in mutex-lock! in k781 in k515 in k512 */
static void C_ccall f_1339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 331  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* switch in a1303 in k1285 in mutex-lock! in k781 in k515 in k512 */
static void C_fcall f_1307(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1307,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1318,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)t0)[3],C_fix(3));
t4=C_a_i_list(&a,1,((C_word*)t0)[2]);
/* srfi-18.scm: 327  ##sys#append */
t5=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}

/* k1316 in switch in a1303 in k1285 in mutex-lock! in k781 in k515 in k512 */
static void C_ccall f_1318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_setslot(((C_word*)t0)[3],C_fix(3),t1);
/* srfi-18.scm: 328  ##sys#schedule */
t3=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* mutex-state in k781 in k515 in k512 */
static void C_ccall f_1253(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1253,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[72],lf[78]);
if(C_truep(C_slot(t2,C_fix(5)))){
t4=C_slot(t2,C_fix(2));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:lf[79]));}
else{
t4=C_slot(t2,C_fix(4));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?lf[80]:lf[81]));}}

/* mutex-specific-set! in k781 in k515 in k512 */
static void C_ccall f_1244(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1244,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[72],lf[77]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(6),t3));}

/* mutex-specific in k781 in k515 in k512 */
static void C_ccall f_1235(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1235,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[72],lf[76]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(6)));}

/* mutex-name in k781 in k515 in k512 */
static void C_ccall f_1226(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1226,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[72],lf[75]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(1)));}

/* make-mutex in k781 in k515 in k512 */
static void C_ccall f_1208(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1208r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1208r(t0,t1,t2);}}

static void C_ccall f_1208r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1212,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(t2))){
t4=C_i_car(t2);
/* srfi-18.scm: 293  ##sys#make-mutex */
t5=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,*((C_word*)lf[34]+1));}
else{
/* srfi-18.scm: 292  gensym */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[72]);}}

/* k1210 in make-mutex in k781 in k515 in k512 */
static void C_ccall f_1212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 293  ##sys#make-mutex */
t2=*((C_word*)lf[74]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[34]+1));}

/* mutex? in k781 in k515 in k512 */
static void C_ccall f_1202(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1202,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[72]));}

/* thread-sleep! in k781 in k515 in k512 */
static void C_ccall f_1162(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1162,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1190,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_1190(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm: 281  ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[4],lf[69],lf[70],t2);}}

/* k1188 in thread-sleep! in k781 in k515 in k512 */
static void C_ccall f_1190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1197,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 282  ##sys#compute-time-limit */
t3=lf[1];
f_519(t3,t2,((C_word*)t0)[2]);}

/* k1195 in k1188 in thread-sleep! in k781 in k515 in k512 */
static void C_ccall f_1197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1197,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1171,a[2]=t1,a[3]=((C_word)li32),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 275  ##sys#call-with-current-continuation */
C_call_cc(3,0,t2,t3);}

/* a1170 in k1195 in k1188 in thread-sleep! in k781 in k515 in k512 */
static void C_ccall f_1171(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1171,3,t0,t1,t2);}
t3=*((C_word*)lf[34]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1183,a[2]=t2,a[3]=((C_word)li31),tmp=(C_word)a,a+=4,tmp);
t5=C_i_setslot(t3,C_fix(1),t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1178,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 279  ##sys#thread-block-for-timeout! */
t7=*((C_word*)lf[61]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t3,((C_word*)t0)[2]);}

/* k1176 in a1170 in k1195 in k1188 in thread-sleep! in k781 in k515 in k512 */
static void C_ccall f_1178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 280  ##sys#schedule */
t2=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a1182 in a1170 in k1195 in k1188 in thread-sleep! in k781 in k515 in k512 */
static void C_ccall f_1183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1183,2,t0,t1);}
/* srfi-18.scm: 278  return */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* thread-resume! in k781 in k515 in k512 */
static void C_ccall f_1140(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1140,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[68]);
t4=C_slot(t2,C_fix(3));
t5=C_eqp(t4,lf[67]);
if(C_truep(t5)){
t6=C_i_setslot(t2,C_fix(3),lf[48]);
/* srfi-18.scm: 271  ##sys#add-to-ready-queue */
t7=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t1,t2);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* thread-suspend! in k781 in k515 in k512 */
static void C_ccall f_1107(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1107,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[66]);
t4=C_i_setslot(t2,C_fix(3),lf[67]);
t5=C_eqp(t2,*((C_word*)lf[34]+1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1125,a[2]=t2,a[3]=((C_word)li28),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 262  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t6);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* a1124 in thread-suspend! in k781 in k515 in k512 */
static void C_ccall f_1125(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1125,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1134,a[2]=t2,a[3]=((C_word)li27),tmp=(C_word)a,a+=4,tmp);
t4=C_i_setslot(((C_word*)t0)[2],C_fix(1),t3);
/* srfi-18.scm: 265  ##sys#schedule */
t5=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}

/* a1133 in a1124 in thread-suspend! in k781 in k515 in k512 */
static void C_ccall f_1134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1134,2,t0,t1);}
/* srfi-18.scm: 264  return */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* thread-terminate! in k781 in k515 in k512 */
static void C_ccall f_1063(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1063,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[62]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1070,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=C_eqp(t2,*((C_word*)lf[64]+1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1102,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 252  ##sys#exit-handler */
((C_proc2)C_retrieve_proc(*((C_word*)lf[65]+1)))(2,*((C_word*)lf[65]+1),t6);}
else{
t6=t4;
f_1070(2,t6,C_SCHEME_UNDEFINED);}}

/* k1100 in thread-terminate! in k781 in k515 in k512 */
static void C_ccall f_1102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g164165 */
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1068 in thread-terminate! in k781 in k515 in k512 */
static void C_ccall f_1070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1070,2,t0,t1);}
t2=C_a_i_list(&a,1,C_SCHEME_UNDEFINED);
t3=C_i_setslot(((C_word*)t0)[3],C_fix(2),t2);
t4=C_a_i_record(&a,3,lf[20],lf[63],C_SCHEME_END_OF_LIST);
t5=C_i_setslot(((C_word*)t0)[3],C_fix(7),t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 255  ##sys#thread-kill! */
t7=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[3],lf[56]);}

/* k1077 in k1068 in thread-terminate! in k781 in k515 in k512 */
static void C_ccall f_1079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_eqp(((C_word*)t0)[3],*((C_word*)lf[34]+1));
if(C_truep(t2)){
/* srfi-18.scm: 256  ##sys#schedule */
t3=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* thread-join! in k781 in k515 in k512 */
static void C_ccall f_935(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_935r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_935r(t0,t1,t2,t3);}}

static void C_ccall f_935r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=C_i_check_structure_2(t2,lf[37],lf[54]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_942,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_slot(t3,C_fix(0));
/* srfi-18.scm: 218  ##sys#compute-time-limit */
t7=lf[1];
f_519(t7,t5,t6);}
else{
t6=t5;
f_942(2,t6,C_SCHEME_FALSE);}}

/* k940 in thread-join! in k781 in k515 in k512 */
static void C_ccall f_942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_942,2,t0,t1);}
t2=C_i_pairp(((C_word*)t0)[4]);
t3=(C_truep(t2)?C_slot(((C_word*)t0)[4],C_fix(1)):C_SCHEME_FALSE);
t4=(C_truep(t3)?C_i_pairp(t3):C_SCHEME_FALSE);
t5=(C_truep(t4)?C_slot(t3,C_fix(0)):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_956,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word)li24),tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm: 222  ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[2],t6);}

/* a955 in k940 in thread-join! in k781 in k515 in k512 */
static void C_ccall f_956(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_956,3,t0,t1,t2);}
t3=*((C_word*)lf[34]+1);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_960,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
/* srfi-18.scm: 225  ##sys#thread-block-for-timeout! */
t5=*((C_word*)lf[61]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,((C_word*)t0)[2]);}
else{
t5=t4;
f_960(2,t5,C_SCHEME_UNDEFINED);}}

/* k958 in a955 in k940 in thread-join! in k781 in k515 in k512 */
static void C_ccall f_960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_971,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word)li23),tmp=(C_word)a,a+=8,tmp);
t3=C_i_setslot(((C_word*)t0)[5],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_966,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 246  ##sys#thread-block-for-termination! */
t5=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],((C_word*)t0)[7]);}

/* k964 in k958 in a955 in k940 in thread-join! in k781 in k515 in k512 */
static void C_ccall f_966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 247  ##sys#schedule */
t2=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a970 in k958 in a955 in k940 in thread-join! in k781 in k515 in k512 */
static void C_ccall f_971(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_971,2,t0,t1);}
t2=C_slot(((C_word*)t0)[6],C_fix(3));
t3=C_eqp(t2,lf[33]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_984,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_slot(((C_word*)t0)[4],C_fix(13)))){
t5=C_slot(((C_word*)t0)[6],C_fix(2));
C_apply(4,0,t1,((C_word*)t0)[5],t5);}
else{
/* srfi-18.scm: 232  ##sys#remove-from-timeout-list */
((C_proc3)C_retrieve_proc(*((C_word*)lf[55]+1)))(3,*((C_word*)lf[55]+1),t4,((C_word*)t0)[4]);}}
else{
t4=C_eqp(t2,lf[56]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1010,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=C_slot(((C_word*)t0)[6],C_fix(7));
t7=C_a_i_list(&a,2,lf[57],t6);
t8=C_a_i_record(&a,3,lf[20],lf[58],t7);
/* srfi-18.scm: 236  ##sys#signal */
t9=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t5,t8);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1029,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
/* srfi-18.scm: 241  return */
t6=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t6))(3,t6,t1,((C_word*)t0)[2]);}
else{
t6=C_a_i_record(&a,3,lf[20],lf[59],C_SCHEME_END_OF_LIST);
/* srfi-18.scm: 244  ##sys#signal */
t7=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}}}}

/* k1027 in a970 in k958 in a955 in k940 in thread-join! in k781 in k515 in k512 */
static void C_ccall f_1029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 241  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1008 in a970 in k958 in a955 in k940 in thread-join! in k781 in k515 in k512 */
static void C_ccall f_1010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 235  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k982 in a970 in k958 in a955 in k940 in thread-join! in k781 in k515 in k512 */
static void C_ccall f_984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(2));
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* thread-start! in k781 in k515 in k512 */
static void C_ccall f_899(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_899,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_903,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_i_closurep(((C_word*)t3)[1]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_929,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 205  make-thread */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t3)[1]);}
else{
t5=t4;
f_903(t5,C_i_check_structure_2(((C_word*)t3)[1],lf[37],lf[47]));}}

/* k927 in thread-start! in k781 in k515 in k512 */
static void C_ccall f_929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_903(t3,t2);}

/* k901 in thread-start! in k781 in k515 in k512 */
static void C_fcall f_903(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_903,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_906,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_slot(((C_word*)((C_word*)t0)[3])[1],C_fix(3));
t4=C_eqp(lf[36],t3);
if(C_truep(t4)){
t5=t2;
f_906(2,t5,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm: 208  ##sys#error */
t5=*((C_word*)lf[50]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[47],lf[51],((C_word*)((C_word*)t0)[3])[1]);}}

/* k904 in k901 in thread-start! in k781 in k515 in k512 */
static void C_ccall f_906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_906,2,t0,t1);}
t2=C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(3),lf[48]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_912,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 210  ##sys#add-to-ready-queue */
t4=*((C_word*)lf[49]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[3])[1]);}

/* k910 in k904 in k901 in thread-start! in k781 in k515 in k512 */
static void C_ccall f_912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* thread-name in k781 in k515 in k512 */
static void C_ccall f_890(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_890,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[46]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(6)));}

/* thread-quantum-set! in k781 in k515 in k512 */
static void C_ccall f_874(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_874,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[37],lf[44]);
t5=C_i_check_exact_2(t3,lf[44]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_888,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 195  fxmax */
t7=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t3,C_fix(10));}

/* k886 in thread-quantum-set! in k781 in k515 in k512 */
static void C_ccall f_888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_i_set_i_slot(((C_word*)t0)[2],C_fix(9),t1));}

/* thread-quantum in k781 in k515 in k512 */
static void C_ccall f_865(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_865,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[43]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(9)));}

/* thread-specific-set! in k781 in k515 in k512 */
static void C_ccall f_856(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_856,4,t0,t1,t2,t3);}
t4=C_i_check_structure_2(t2,lf[37],lf[42]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_i_setslot(t2,C_fix(10),t3));}

/* thread-specific in k781 in k515 in k512 */
static void C_ccall f_847(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_847,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[41]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(10)));}

/* thread-state in k781 in k515 in k512 */
static void C_ccall f_838(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_838,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[37],lf[40]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_slot(t2,C_fix(3)));}

/* current-thread in k781 in k515 in k512 */
static void C_ccall f_835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_835,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[34]+1));}

/* thread? in k781 in k515 in k512 */
static void C_ccall f_829(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_829,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[37]));}

/* make-thread in k781 in k515 in k512 */
static void C_ccall f_785(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_785r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_785r(t0,t1,t2,t3);}}

static void C_ccall f_785r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_789,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_814,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(t3))){
t6=C_slot(t3,C_fix(0));
t7=C_slot(*((C_word*)lf[34]+1),C_fix(9));
/* srfi-18.scm: 157  ##sys#make-thread */
t8=*((C_word*)lf[35]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t4,C_SCHEME_FALSE,lf[36],t6,t7);}
else{
/* srfi-18.scm: 160  gensym */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,lf[37]);}}

/* k812 in make-thread in k781 in k515 in k512 */
static void C_ccall f_814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(*((C_word*)lf[34]+1),C_fix(9));
/* srfi-18.scm: 157  ##sys#make-thread */
t3=*((C_word*)lf[35]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[2],C_SCHEME_FALSE,lf[36],t1,t2);}

/* k787 in make-thread in k781 in k515 in k512 */
static void C_ccall f_789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_794,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word)li12),tmp=(C_word)a,a+=5,tmp);
t3=C_i_setslot(t1,C_fix(1),t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}

/* a793 in k787 in make-thread in k781 in k515 in k512 */
static void C_ccall f_794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_794,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_800,a[2]=((C_word*)t0)[3],a[3]=((C_word)li11),tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 165  ##sys#call-with-values */
C_call_with_values(4,0,t1,((C_word*)t0)[2],t2);}

/* a799 in a793 in k787 in make-thread in k781 in k515 in k512 */
static void C_ccall f_800(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_800r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_800r(t0,t1,t2);}}

static void C_ccall f_800r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=C_i_setslot(((C_word*)t0)[2],C_fix(2),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_807,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 169  ##sys#thread-kill! */
t5=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],lf[33]);}

/* k805 in a799 in a793 in k787 in make-thread in k781 in k515 in k512 */
static void C_ccall f_807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 170  ##sys#schedule */
t2=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* uncaught-exception? in k515 in k512 */
static void C_ccall f_765(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_765,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[20]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[27],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* terminated-thread-exception? in k515 in k512 */
static void C_ccall f_749(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_749,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[20]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[25],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* abandoned-mutex-exception? in k515 in k512 */
static void C_ccall f_733(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_733,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[20]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[23],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* join-timeout-exception? in k515 in k512 */
static void C_ccall f_717(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_717,3,t0,t1,t2);}
if(C_truep(C_i_structurep(t2,lf[20]))){
t3=C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_i_memq(lf[21],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* time? in k515 in k512 */
static void C_ccall f_709(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_709,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_i_structurep(t2,lf[2]));}

/* milliseconds->time in k515 in k512 */
static void C_ccall f_693(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_693,3,t0,t1,t2);}
t3=C_i_check_exact_2(t2,lf[14]);
t4=C_a_i_divide(&a,2,t2,C_fix(1000));
t5=C_a_i_plus(&a,2,C_flonum(&a,C_startup_time_seconds),t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_a_i_record(&a,4,lf[2],t2,t5,C_fix(0)));}

/* seconds->time in k515 in k512 */
static void C_ccall f_639(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_639,3,t0,t1,t2);}
t3=C_i_check_number_2(t2,lf[10]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_646,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_minus(&a,2,t2,C_flonum(&a,C_startup_time_seconds));
/* srfi-18.scm: 112  max */
t6=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,C_fix(0),t5);}

/* k644 in seconds->time in k515 in k512 */
static void C_ccall f_646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_649,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_683,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_687,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 113  ##sys#exact->inexact */
t5=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k685 in k644 in seconds->time in k515 in k512 */
static void C_ccall f_687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 113  ##sys#flonum-fraction */
t2=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k681 in k644 in seconds->time in k515 in k512 */
static void C_ccall f_683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_683,2,t0,t1);}
t2=C_a_i_times(&a,2,C_fix(1000),t1);
/* srfi-18.scm: 113  truncate */
t3=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k647 in k644 in seconds->time in k515 in k512 */
static void C_ccall f_649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_649,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_667,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=C_a_i_times(&a,2,((C_word*)t0)[2],C_fix(1000));
t4=C_a_i_plus(&a,2,t3,t1);
/* srfi-18.scm: 114  truncate */
t5=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}

/* k665 in k647 in k644 in seconds->time in k515 in k512 */
static void C_ccall f_667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_667,2,t0,t1);}
t2=C_i_inexact_to_exact(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_659,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-18.scm: 115  truncate */
t4=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k657 in k665 in k647 in k644 in seconds->time in k515 in k512 */
static void C_ccall f_659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_659,2,t0,t1);}
t2=C_i_inexact_to_exact(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record(&a,4,lf[2],((C_word*)t0)[2],t1,t2));}

/* time->milliseconds in k515 in k512 */
static void C_ccall f_610(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_610,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[2],lf[9]);
t4=C_slot(t2,C_fix(2));
t5=C_a_i_minus(&a,2,t4,C_flonum(&a,C_startup_time_seconds));
t6=C_a_i_times(&a,2,t5,C_fix(1000));
t7=C_i_inexact_to_exact(t6);
t8=C_slot(t2,C_fix(3));
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_a_i_plus(&a,2,t7,t8));}

/* time->seconds in k515 in k512 */
static void C_ccall f_589(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_589,3,t0,t1,t2);}
t3=C_i_check_structure_2(t2,lf[2],lf[8]);
t4=C_slot(t2,C_fix(2));
t5=C_slot(t2,C_fix(3));
t6=C_a_i_divide(&a,2,t5,C_fix(1000));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_a_i_plus(&a,2,t4,t6));}

/* current-time in k515 in k512 */
static void C_ccall f_562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[32],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_562,2,t0,t1);}
t2=C_flonum(&a,C_get_seconds);
t3=C_flonum(&a,C_startup_time_seconds);
t4=C_long_to_num(&a,C_ms);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_574,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_a_i_minus(&a,2,t2,t3);
t7=C_a_i_times(&a,2,t6,C_fix(1000));
t8=C_a_i_plus(&a,2,t7,C_long_to_num(&a,C_ms));
/* srfi-18.scm: 95   truncate */
t9=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t5,t8);}

/* k572 in current-time in k515 in k512 */
static void C_ccall f_574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_574,2,t0,t1);}
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_a_i_record(&a,4,lf[2],t2,((C_word*)t0)[2],C_long_to_num(&a,C_ms)));}

/* ##sys#compute-time-limit in k515 in k512 */
static void C_fcall f_519(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_519,NULL,3,t0,t1,t2);}
if(C_truep(t2)){
if(C_truep(C_i_structurep(t2,lf[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_slot(t2,C_fix(1)));}
else{
if(C_truep(C_i_numberp(t2))){
t3=C_fudge(C_fix(16));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_553,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_a_i_times(&a,2,t2,C_fix(1000));
/* srfi-18.scm: 72   truncate */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
/* srfi-18.scm: 73   ##sys#signal-hook */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[4],lf[5],t2);}}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k551 in ##sys#compute-time-limit in k515 in k512 */
static void C_ccall f_553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_fixnum_plus(((C_word*)t0)[2],t2));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[127] = {
{"toplevel:srfi_18_scm",(void*)C_srfi_18_toplevel},
{"f_514:srfi_18_scm",(void*)f_514},
{"f_517:srfi_18_scm",(void*)f_517},
{"f_783:srfi_18_scm",(void*)f_783},
{"f_2019:srfi_18_scm",(void*)f_2019},
{"f_1993:srfi_18_scm",(void*)f_1993},
{"f_2003:srfi_18_scm",(void*)f_2003},
{"f_2006:srfi_18_scm",(void*)f_2006},
{"f_2009:srfi_18_scm",(void*)f_2009},
{"f_1954:srfi_18_scm",(void*)f_1954},
{"f_1956:srfi_18_scm",(void*)f_1956},
{"f_1960:srfi_18_scm",(void*)f_1960},
{"f_1966:srfi_18_scm",(void*)f_1966},
{"f_1880:srfi_18_scm",(void*)f_1880},
{"f_1947:srfi_18_scm",(void*)f_1947},
{"f_1930:srfi_18_scm",(void*)f_1930},
{"f_1902:srfi_18_scm",(void*)f_1902},
{"f_1913:srfi_18_scm",(void*)f_1913},
{"f_1917:srfi_18_scm",(void*)f_1917},
{"f_1821:srfi_18_scm",(void*)f_1821},
{"f_1837:srfi_18_scm",(void*)f_1837},
{"f_1867:srfi_18_scm",(void*)f_1867},
{"f_1828:srfi_18_scm",(void*)f_1828},
{"f_1778:srfi_18_scm",(void*)f_1778},
{"f_1769:srfi_18_scm",(void*)f_1769},
{"f_1760:srfi_18_scm",(void*)f_1760},
{"f_1751:srfi_18_scm",(void*)f_1751},
{"f_1745:srfi_18_scm",(void*)f_1745},
{"f_1726:srfi_18_scm",(void*)f_1726},
{"f_1734:srfi_18_scm",(void*)f_1734},
{"f_1510:srfi_18_scm",(void*)f_1510},
{"f_1528:srfi_18_scm",(void*)f_1528},
{"f_1535:srfi_18_scm",(void*)f_1535},
{"f_1698:srfi_18_scm",(void*)f_1698},
{"f_1686:srfi_18_scm",(void*)f_1686},
{"f_1678:srfi_18_scm",(void*)f_1678},
{"f_1640:srfi_18_scm",(void*)f_1640},
{"f_1666:srfi_18_scm",(void*)f_1666},
{"f_1659:srfi_18_scm",(void*)f_1659},
{"f_1547:srfi_18_scm",(void*)f_1547},
{"f_1550:srfi_18_scm",(void*)f_1550},
{"f_1277:srfi_18_scm",(void*)f_1277},
{"f_1287:srfi_18_scm",(void*)f_1287},
{"f_1304:srfi_18_scm",(void*)f_1304},
{"f2108:srfi_18_scm",(void*)f2108},
{"f2104:srfi_18_scm",(void*)f2104},
{"f2100:srfi_18_scm",(void*)f2100},
{"f_1483:srfi_18_scm",(void*)f_1483},
{"f_1417:srfi_18_scm",(void*)f_1417},
{"f_1423:srfi_18_scm",(void*)f_1423},
{"f_1428:srfi_18_scm",(void*)f_1428},
{"f_1465:srfi_18_scm",(void*)f_1465},
{"f_1435:srfi_18_scm",(void*)f_1435},
{"f_1328:srfi_18_scm",(void*)f_1328},
{"f_1339:srfi_18_scm",(void*)f_1339},
{"f_1307:srfi_18_scm",(void*)f_1307},
{"f_1318:srfi_18_scm",(void*)f_1318},
{"f_1253:srfi_18_scm",(void*)f_1253},
{"f_1244:srfi_18_scm",(void*)f_1244},
{"f_1235:srfi_18_scm",(void*)f_1235},
{"f_1226:srfi_18_scm",(void*)f_1226},
{"f_1208:srfi_18_scm",(void*)f_1208},
{"f_1212:srfi_18_scm",(void*)f_1212},
{"f_1202:srfi_18_scm",(void*)f_1202},
{"f_1162:srfi_18_scm",(void*)f_1162},
{"f_1190:srfi_18_scm",(void*)f_1190},
{"f_1197:srfi_18_scm",(void*)f_1197},
{"f_1171:srfi_18_scm",(void*)f_1171},
{"f_1178:srfi_18_scm",(void*)f_1178},
{"f_1183:srfi_18_scm",(void*)f_1183},
{"f_1140:srfi_18_scm",(void*)f_1140},
{"f_1107:srfi_18_scm",(void*)f_1107},
{"f_1125:srfi_18_scm",(void*)f_1125},
{"f_1134:srfi_18_scm",(void*)f_1134},
{"f_1063:srfi_18_scm",(void*)f_1063},
{"f_1102:srfi_18_scm",(void*)f_1102},
{"f_1070:srfi_18_scm",(void*)f_1070},
{"f_1079:srfi_18_scm",(void*)f_1079},
{"f_935:srfi_18_scm",(void*)f_935},
{"f_942:srfi_18_scm",(void*)f_942},
{"f_956:srfi_18_scm",(void*)f_956},
{"f_960:srfi_18_scm",(void*)f_960},
{"f_966:srfi_18_scm",(void*)f_966},
{"f_971:srfi_18_scm",(void*)f_971},
{"f_1029:srfi_18_scm",(void*)f_1029},
{"f_1010:srfi_18_scm",(void*)f_1010},
{"f_984:srfi_18_scm",(void*)f_984},
{"f_899:srfi_18_scm",(void*)f_899},
{"f_929:srfi_18_scm",(void*)f_929},
{"f_903:srfi_18_scm",(void*)f_903},
{"f_906:srfi_18_scm",(void*)f_906},
{"f_912:srfi_18_scm",(void*)f_912},
{"f_890:srfi_18_scm",(void*)f_890},
{"f_874:srfi_18_scm",(void*)f_874},
{"f_888:srfi_18_scm",(void*)f_888},
{"f_865:srfi_18_scm",(void*)f_865},
{"f_856:srfi_18_scm",(void*)f_856},
{"f_847:srfi_18_scm",(void*)f_847},
{"f_838:srfi_18_scm",(void*)f_838},
{"f_835:srfi_18_scm",(void*)f_835},
{"f_829:srfi_18_scm",(void*)f_829},
{"f_785:srfi_18_scm",(void*)f_785},
{"f_814:srfi_18_scm",(void*)f_814},
{"f_789:srfi_18_scm",(void*)f_789},
{"f_794:srfi_18_scm",(void*)f_794},
{"f_800:srfi_18_scm",(void*)f_800},
{"f_807:srfi_18_scm",(void*)f_807},
{"f_765:srfi_18_scm",(void*)f_765},
{"f_749:srfi_18_scm",(void*)f_749},
{"f_733:srfi_18_scm",(void*)f_733},
{"f_717:srfi_18_scm",(void*)f_717},
{"f_709:srfi_18_scm",(void*)f_709},
{"f_693:srfi_18_scm",(void*)f_693},
{"f_639:srfi_18_scm",(void*)f_639},
{"f_646:srfi_18_scm",(void*)f_646},
{"f_687:srfi_18_scm",(void*)f_687},
{"f_683:srfi_18_scm",(void*)f_683},
{"f_649:srfi_18_scm",(void*)f_649},
{"f_667:srfi_18_scm",(void*)f_667},
{"f_659:srfi_18_scm",(void*)f_659},
{"f_610:srfi_18_scm",(void*)f_610},
{"f_589:srfi_18_scm",(void*)f_589},
{"f_562:srfi_18_scm",(void*)f_562},
{"f_574:srfi_18_scm",(void*)f_574},
{"f_519:srfi_18_scm",(void*)f_519},
{"f_553:srfi_18_scm",(void*)f_553},
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
