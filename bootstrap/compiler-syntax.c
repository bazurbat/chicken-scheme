/* Generated from compiler-syntax.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:30
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: compiler-syntax.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -no-lambda-info -local -extend private-namespace.scm -output-file compiler-syntax.c
   unit: compiler_syntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[76];
static double C_possibly_force_alignment;


C_noret_decl(C_compiler_syntax_toplevel)
C_externexport void C_ccall C_compiler_syntax_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_699)
static void C_ccall f_699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_702)
static void C_ccall f_702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2842)
static void C_ccall f_2842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2432)
static void C_ccall f_2432(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2436)
static void C_ccall f_2436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2445)
static void C_ccall f_2445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2448)
static void C_ccall f_2448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2830)
static void C_ccall f_2830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2822)
static void C_ccall f_2822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2802)
static void C_ccall f_2802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2463)
static void C_fcall f_2463(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2752)
static void C_fcall f_2752(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2786)
static void C_ccall f_2786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2466)
static void C_ccall f_2466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2703)
static void C_fcall f_2703(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2736)
static void C_ccall f_2736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2716)
static void C_fcall f_2716(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2659)
static void C_fcall f_2659(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2686)
static C_word C_fcall f_2686(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2657)
static void C_ccall f_2657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2653)
static void C_ccall f_2653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2595)
static void C_fcall f_2595(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2593)
static void C_ccall f_2593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2589)
static void C_ccall f_2589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2535)
static void C_fcall f_2535(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_793)
static void C_ccall f_793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1862)
static void C_ccall f_1862(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1866)
static void C_ccall f_1866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1869)
static void C_ccall f_1869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1872)
static void C_ccall f_1872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1875)
static void C_ccall f_1875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1878)
static void C_ccall f_1878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1884)
static void C_ccall f_1884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1893)
static void C_ccall f_1893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1896)
static void C_ccall f_1896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1899)
static void C_ccall f_1899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2410)
static void C_ccall f_2410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1911)
static void C_fcall f_1911(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2340)
static void C_fcall f_2340(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2374)
static void C_ccall f_2374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1914)
static void C_ccall f_1914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2263)
static void C_fcall f_2263(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2276)
static void C_fcall f_2276(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1945)
static void C_ccall f_1945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2219)
static void C_fcall f_2219(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2246)
static C_word C_fcall f_2246(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_2217)
static void C_ccall f_2217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2213)
static void C_ccall f_2213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2155)
static void C_fcall f_2155(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2153)
static void C_ccall f_2153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2015)
static void C_fcall f_2015(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2013)
static void C_ccall f_2013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2009)
static void C_ccall f_2009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_796)
static void C_ccall f_796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1813)
static void C_ccall f_1813(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1846)
static void C_ccall f_1846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_799)
static void C_ccall f_799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1807)
static void C_ccall f_1807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1803)
static void C_ccall f_1803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1799)
static void C_ccall f_1799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1795)
static void C_ccall f_1795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1791)
static void C_ccall f_1791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1787)
static void C_ccall f_1787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1651)
static void C_ccall f_1651(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1712)
static void C_ccall f_1712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1692)
static void C_ccall f_1692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_802)
static void C_ccall f_802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1649)
static void C_ccall f_1649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1645)
static void C_ccall f_1645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1637)
static void C_ccall f_1637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1633)
static void C_ccall f_1633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1629)
static void C_ccall f_1629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1625)
static void C_ccall f_1625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1540)
static void C_ccall f_1540(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_805)
static void C_ccall f_805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1538)
static void C_ccall f_1538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1530)
static void C_ccall f_1530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1522)
static void C_ccall f_1522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1518)
static void C_ccall f_1518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1514)
static void C_ccall f_1514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1443)
static void C_ccall f_1443(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1447)
static void C_ccall f_1447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_808)
static void C_ccall f_808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_810)
static void C_ccall f_810(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_816)
static void C_ccall f_816(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1425)
static void C_ccall f_1425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1429)
static void C_ccall f_1429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1414)
static void C_ccall f_1414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_838)
static void C_fcall f_838(C_word t0,C_word t1) C_noret;
C_noret_decl(f_841)
static void C_ccall f_841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_881)
static void C_ccall f_881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_884)
static void C_ccall f_884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_887)
static void C_ccall f_887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_890)
static void C_ccall f_890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_893)
static void C_ccall f_893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_896)
static void C_ccall f_896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_899)
static void C_ccall f_899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_993)
static void C_fcall f_993(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1054)
static void C_ccall f_1054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1358)
static C_word C_fcall f_1358(C_word t0,C_word t1);
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1275)
static void C_ccall f_1275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1242)
static void C_ccall f_1242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1205)
static void C_ccall f_1205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1168)
static void C_ccall f_1168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1131)
static void C_ccall f_1131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1106)
static void C_ccall f_1106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1081)
static void C_ccall f_1081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1060)
static void C_ccall f_1060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1003)
static void C_ccall f_1003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1006)
static void C_ccall f_1006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1025)
static void C_ccall f_1025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1021)
static void C_ccall f_1021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_983)
static C_word C_fcall f_983(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_930)
static void C_fcall f_930(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_973)
static void C_ccall f_973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_911)
static void C_fcall f_911(C_word t0,C_word t1) C_noret;
C_noret_decl(f_901)
static C_word C_fcall f_901(C_word t0);
C_noret_decl(f_846)
static void C_fcall f_846(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_850)
static void C_ccall f_850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_866)
static void C_ccall f_866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_869)
static void C_ccall f_869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_872)
static void C_ccall f_872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_863)
static void C_ccall f_863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_853)
static void C_ccall f_853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_719)
static void C_ccall f_719(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_719)
static void C_ccall f_719r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_723)
static void C_ccall f_723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_771)
static void C_ccall f_771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_735)
static void C_fcall f_735(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_750)
static void C_ccall f_750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_743)
static void C_fcall f_743(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_705)
static void C_ccall f_705(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_709)
static void C_ccall f_709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_713)
static void C_ccall f_713(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_2463)
static void C_fcall trf_2463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2463(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2463(t0,t1);}

C_noret_decl(trf_2752)
static void C_fcall trf_2752(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2752(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2752(t0,t1,t2);}

C_noret_decl(trf_2703)
static void C_fcall trf_2703(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2703(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2703(t0,t1,t2,t3);}

C_noret_decl(trf_2716)
static void C_fcall trf_2716(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2716(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2716(t0,t1);}

C_noret_decl(trf_2659)
static void C_fcall trf_2659(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2659(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2659(t0,t1,t2);}

C_noret_decl(trf_2595)
static void C_fcall trf_2595(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2595(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2595(t0,t1,t2);}

C_noret_decl(trf_2535)
static void C_fcall trf_2535(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2535(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2535(t0,t1,t2);}

C_noret_decl(trf_1911)
static void C_fcall trf_1911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1911(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1911(t0,t1);}

C_noret_decl(trf_2340)
static void C_fcall trf_2340(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2340(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2340(t0,t1,t2);}

C_noret_decl(trf_2263)
static void C_fcall trf_2263(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2263(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2263(t0,t1,t2,t3);}

C_noret_decl(trf_2276)
static void C_fcall trf_2276(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2276(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2276(t0,t1);}

C_noret_decl(trf_2219)
static void C_fcall trf_2219(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2219(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2219(t0,t1,t2);}

C_noret_decl(trf_2155)
static void C_fcall trf_2155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2155(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2155(t0,t1,t2);}

C_noret_decl(trf_2015)
static void C_fcall trf_2015(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2015(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2015(t0,t1,t2);}

C_noret_decl(trf_838)
static void C_fcall trf_838(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_838(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_838(t0,t1);}

C_noret_decl(trf_993)
static void C_fcall trf_993(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_993(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_993(t0,t1,t2);}

C_noret_decl(trf_930)
static void C_fcall trf_930(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_930(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_930(t0,t1,t2);}

C_noret_decl(trf_911)
static void C_fcall trf_911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_911(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_911(t0,t1);}

C_noret_decl(trf_846)
static void C_fcall trf_846(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_846(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_846(t0,t1,t2,t3,t4);}

C_noret_decl(trf_735)
static void C_fcall trf_735(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_735(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_735(t0,t1,t2);}

C_noret_decl(trf_743)
static void C_fcall trf_743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_743(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_743(t0,t1,t2);}

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

C_noret_decl(tr8)
static void C_fcall tr8(C_proc8 k) C_regparm C_noret;
C_regparm static void C_fcall tr8(C_proc8 k){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
(k)(8,t0,t1,t2,t3,t4,t5,t6,t7);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_compiler_syntax_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_compiler_syntax_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("compiler_syntax_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(854)){
C_save(t1);
C_rereclaim2(854*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,76);
lf[0]=C_h_intern(&lf[0],35,"\010compilercompiler-syntax-statistics");
lf[1]=C_h_intern(&lf[1],24,"\003syscompiler-syntax-hook");
lf[2]=C_h_intern(&lf[2],13,"alist-update!");
lf[3]=C_h_intern(&lf[3],9,"alist-ref");
lf[4]=C_h_intern(&lf[4],3,"eq\077");
lf[5]=C_h_intern(&lf[5],14,"\010compilerr-c-s");
lf[6]=C_h_intern(&lf[6],8,"\003sysput!");
lf[7]=C_h_intern(&lf[7],24,"\010compilercompiler-syntax");
lf[8]=C_h_intern(&lf[8],18,"\003syser-transformer");
lf[9]=C_h_intern(&lf[9],9,"\003syserror");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[11]=C_h_intern(&lf[11],30,"\010compilercompile-format-string");
lf[12]=C_h_intern(&lf[12],17,"extended-bindings");
lf[13]=C_h_intern(&lf[13],25,"\010compilercompiler-warning");
lf[14]=C_h_intern(&lf[14],6,"syntax");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\036(~a) in format string ~s~a, ~\077");
lf[16]=C_h_intern(&lf[16],17,"get-output-string");
lf[17]=C_h_intern(&lf[17],7,"display");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\011 in line ");
lf[19]=C_h_intern(&lf[19],18,"open-output-string");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[21]=C_h_intern(&lf[21],17,"\010compilerget-line");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000/too few arguments to formatted output procedure");
lf[23]=C_h_intern(&lf[23],20,"reverse-list->string");
lf[24]=C_h_intern(&lf[24],10,"\003sysappend");
lf[25]=C_h_intern(&lf[25],7,"reverse");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\0000too many arguments to formatted output procedure");
lf[27]=C_h_intern(&lf[27],16,"\003sysflush-output");
lf[28]=C_h_intern(&lf[28],9,"\003sysapply");
lf[29]=C_h_intern(&lf[29],10,"write-char");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000$illegal format-string character `~c\047");
lf[31]=C_h_intern(&lf[31],14,"number->string");
lf[32]=C_h_intern(&lf[32],3,"let");
lf[33]=C_h_intern(&lf[33],7,"fprintf");
lf[34]=C_h_intern(&lf[34],3,"out");
lf[35]=C_h_intern(&lf[35],5,"write");
lf[36]=C_h_intern(&lf[36],5,"cadar");
lf[37]=C_h_intern(&lf[37],4,"caar");
lf[38]=C_h_intern(&lf[38],5,"quote");
lf[39]=C_h_intern(&lf[39],7,"call/cc");
lf[40]=C_h_intern(&lf[40],6,"printf");
lf[41]=C_h_intern(&lf[41],19,"\003sysstandard-output");
lf[42]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006printf\376\003\000\000\002\376\001\000\000\010#%printf\376\377\016");
lf[43]=C_h_intern(&lf[43],19,"\003sysprimitive-alias");
lf[44]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007fprintf\376\003\000\000\002\376\001\000\000\011#%fprintf\376\377\016");
lf[45]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007sprintf\376\003\000\000\002\376\001\000\000\011#%sprintf\376\377\016");
lf[46]=C_h_intern(&lf[46],7,"sprintf");
lf[47]=C_h_intern(&lf[47],6,"format");
lf[48]=C_h_intern(&lf[48],6,"gensym");
lf[49]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007sprintf\376\003\000\000\002\376\001\000\000\011#%sprintf\376\003\000\000\002\376\001\000\000\006format\376\003\000\000\002\376\001\000\000\010#%format\376\377\016");
lf[50]=C_h_intern(&lf[50],1,"o");
lf[51]=C_h_intern(&lf[51],10,"fold-right");
lf[52]=C_h_intern(&lf[52],4,"list");
lf[53]=C_h_intern(&lf[53],6,"lambda");
lf[54]=C_h_intern(&lf[54],3,"tmp");
lf[55]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001o\376\003\000\000\002\376\001\000\000\003#%o\376\377\016");
lf[56]=C_h_intern(&lf[56],11,"\003syssetslot");
lf[57]=C_h_intern(&lf[57],8,"\003sysslot");
lf[58]=C_h_intern(&lf[58],3,"map");
lf[59]=C_h_intern(&lf[59],17,"standard-bindings");
lf[60]=C_h_intern(&lf[60],5,"caadr");
lf[61]=C_h_intern(&lf[61],7,"length+");
lf[62]=C_h_intern(&lf[62],5,"pair\077");
lf[63]=C_h_intern(&lf[63],3,"and");
lf[64]=C_h_intern(&lf[64],5,"begin");
lf[65]=C_h_intern(&lf[65],4,"node");
lf[66]=C_h_intern(&lf[66],6,"result");
lf[67]=C_h_intern(&lf[67],4,"set!");
lf[68]=C_h_intern(&lf[68],4,"cons");
lf[69]=C_h_intern(&lf[69],3,"res");
lf[70]=C_h_intern(&lf[70],4,"loop");
lf[71]=C_h_intern(&lf[71],2,"if");
lf[72]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003map\376\003\000\000\002\376\001\000\000\007\003sysmap\376\003\000\000\002\376\001\000\000\005#%map\376\377\016");
lf[73]=C_h_intern(&lf[73],8,"\004coreapp");
lf[74]=C_h_intern(&lf[74],8,"for-each");
lf[75]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010for-each\376\003\000\000\002\376\001\000\000\014\003sysfor-each\376\003\000\000\002\376\001\000\000\012#%for-each\376\377\016");
C_register_lf2(lf,76,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_699,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k697 */
static void C_ccall f_699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_699,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_702,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k700 in k697 */
static void C_ccall f_702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_702,2,t0,t1);}
t2=C_set_block_item(lf[0] /* compiler-syntax-statistics */,0,C_SCHEME_END_OF_LIST);
t3=C_mutate((C_word*)lf[1]+1 /* (set! compiler-syntax-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_705,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[5]+1 /* (set! r-c-s ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_719,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_793,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2432,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2842,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t7,lf[62]);}

/* k2840 in k700 in k697 */
static void C_ccall f_2842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2842,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[62],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
C_trace("##compiler#r-c-s");
((C_proc5)C_retrieve_proc(*((C_word*)lf[5]+1)))(5,*((C_word*)lf[5]+1),((C_word*)t0)[3],lf[75],((C_word*)t0)[2],t3);}

/* a2431 in k700 in k697 */
static void C_ccall f_2432(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2432,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2436,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("compiler-syntax.scm: 61   r");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,lf[32]);}

/* k2434 in a2431 in k700 in k697 */
static void C_ccall f_2436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("compiler-syntax.scm: 62   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[71]);}

/* k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("compiler-syntax.scm: 63   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[70]);}

/* k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2442,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2445,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("compiler-syntax.scm: 64   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[64]);}

/* k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2445,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("compiler-syntax.scm: 65   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[63]);}

/* k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("compiler-syntax.scm: 66   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[62]);}

/* k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2451,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2454,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace("compiler-syntax.scm: 67   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[53]);}

/* k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2454,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[10]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2463,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep((C_word)C_i_memq(lf[74],C_retrieve(lf[59])))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2830,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[10],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("compiler-syntax.scm: 70   length+");
((C_proc3)C_retrieve_symbol_proc(lf[61]))(3,*((C_word*)lf[61]+1),t4,((C_word*)t0)[10]);}
else{
t4=t3;
f_2463(t4,C_SCHEME_FALSE);}}

/* k2828 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2830,2,t0,t1);}
if(C_truep((C_word)C_fixnum_greaterp(t1,C_fix(2)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2802,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2822,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("compiler-syntax.scm: 72   caadr");
((C_proc3)C_retrieve_proc(*((C_word*)lf[60]+1)))(3,*((C_word*)lf[60]+1),t4,((C_word*)t0)[4]);}
else{
t4=(C_word)C_i_cadr(((C_word*)t0)[4]);
t5=((C_word*)t0)[5];
f_2463(t5,(C_word)C_i_symbolp(t4));}}
else{
t2=((C_word*)t0)[5];
f_2463(t2,C_SCHEME_FALSE);}}

/* k2820 in k2828 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("compiler-syntax.scm: 72   c");
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2800 in k2828 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_2463(t2,t1);}
else{
t2=(C_word)C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_2463(t3,(C_word)C_i_symbolp(t2));}}

/* k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_fcall f_2463(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2463,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2752,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2752(t10,t6,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[9];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* loop137 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_fcall f_2752(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2752,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2786,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_a_i_list(&a,1,t4);
C_trace("compiler-syntax.scm: 74   gensym");
((C_proc2)C_retrieve_symbol_proc(lf[48]))(2,*((C_word*)lf[48]+1),t3);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2784 in loop137 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2786(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2786,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop137150");
t6=((C_word*)((C_word*)t0)[4])[1];
f_2752(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop137150");
t6=((C_word*)((C_word*)t0)[4])[1];
f_2752(t6,((C_word*)t0)[3],t5);}}

/* k2464 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2466(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2466,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2481,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2703,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2703(t10,t6,t1,((C_word*)t0)[2]);}

/* loop165 in k2464 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_fcall f_2703(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_2703,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[52]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2736,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
C_trace("g185186");
t10=t6;
((C_proc4)C_retrieve_proc(t10))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2734 in loop165 in k2464 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2736,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2716,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_2716(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_2716(t5,t4);}}

/* k2714 in k2734 in loop165 in k2464 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_fcall f_2716(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
C_trace("loop165179");
t5=((C_word*)((C_word*)t0)[3])[1];
f_2703(t5,((C_word*)t0)[2],t3,t4);}

/* k2479 in k2464 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2481,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2653,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2657,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2659,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2659(t11,t7,((C_word*)t0)[3]);}

/* loop192 in k2479 in k2464 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_fcall f_2659(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(12);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2659,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2686,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_2686(C_a_i(&a,6),t3,t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
C_trace("loop192205");
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
C_trace("loop192205");
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g208 in loop192 in k2479 in k2464 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static C_word C_fcall f_2686(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
return((C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k2655 in k2479 in k2464 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#append");
t2=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k2651 in k2479 in k2464 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2653(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2653,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t1);
t3=(C_word)C_i_cadr(((C_word*)t0)[9]);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t4);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[7],a[10]=t5,tmp=(C_word)a,a+=11,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2593,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2595,a[2]=t8,a[3]=t13,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_2595(t15,t11,((C_word*)t0)[2]);}

/* loop220 in k2651 in k2479 in k2464 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_fcall f_2595(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(12);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2595,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_a_i_cons(&a,2,C_fix(0),C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=(C_word)C_a_i_cons(&a,2,lf[57],t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t8=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t7);
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t10=(C_word)C_slot(t2,C_fix(1));
C_trace("loop220233");
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}
else{
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t10=(C_word)C_slot(t2,C_fix(1));
C_trace("loop220233");
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2591 in k2651 in k2479 in k2464 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#append");
t2=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k2587 in k2651 in k2479 in k2464 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2589(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2589,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2529,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t2,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2533,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2535,a[2]=t5,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_2535(t12,t8,((C_word*)t0)[2]);}

/* loop248 in k2587 in k2651 in k2479 in k2464 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_fcall f_2535(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(12);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2535,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_a_i_cons(&a,2,C_fix(1),C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=(C_word)C_a_i_cons(&a,2,lf[57],t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t8=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t7);
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t10=(C_word)C_slot(t2,C_fix(1));
C_trace("loop248261");
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}
else{
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t10=(C_word)C_slot(t2,C_fix(1));
C_trace("loop248261");
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2531 in k2587 in k2651 in k2479 in k2464 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#append");
t2=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k2527 in k2587 in k2651 in k2479 in k2464 in k2461 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in a2431 in k700 in k697 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2529,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[73],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t7);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t10);
t12=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t11);
t13=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t12));}

/* k791 in k700 in k697 */
static void C_ccall f_793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_793,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_796,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1862,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2430,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t4,lf[62]);}

/* k2428 in k791 in k700 in k697 */
static void C_ccall f_2430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2430,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[62],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
C_trace("##compiler#r-c-s");
((C_proc5)C_retrieve_proc(*((C_word*)lf[5]+1)))(5,*((C_word*)lf[5]+1),((C_word*)t0)[3],lf[72],((C_word*)t0)[2],t3);}

/* a1861 in k791 in k700 in k697 */
static void C_ccall f_1862(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1862,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1866,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("compiler-syntax.scm: 87   r");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,lf[32]);}

/* k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_1866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1869,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("compiler-syntax.scm: 88   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[71]);}

/* k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_1869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1869,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1872,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("compiler-syntax.scm: 89   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[70]);}

/* k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_1872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("compiler-syntax.scm: 90   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[69]);}

/* k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_1875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1875,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1878,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("compiler-syntax.scm: 91   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[68]);}

/* k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_1878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1878,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("compiler-syntax.scm: 92   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[67]);}

/* k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_1881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1884,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace("compiler-syntax.scm: 93   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[66]);}

/* k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_1884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1884,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
C_trace("compiler-syntax.scm: 94   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[65]);}

/* k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_1887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1887,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
C_trace("compiler-syntax.scm: 95   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[38]);}

/* k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_1890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1890,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1893,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t1,a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
C_trace("compiler-syntax.scm: 96   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[64]);}

/* k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_1893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1893,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1896,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
C_trace("compiler-syntax.scm: 97   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[53]);}

/* k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_1896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1896,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1899,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
C_trace("compiler-syntax.scm: 98   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[63]);}

/* k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_1899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1899,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1902,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t1,a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
C_trace("compiler-syntax.scm: 99   r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[62]);}

/* k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_1902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1902,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[16]);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1911,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[16],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
if(C_truep((C_word)C_i_memq(lf[58],C_retrieve(lf[59])))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[16],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("compiler-syntax.scm: 102  length+");
((C_proc3)C_retrieve_symbol_proc(lf[61]))(3,*((C_word*)lf[61]+1),t4,((C_word*)t0)[16]);}
else{
t4=t3;
f_1911(t4,C_SCHEME_FALSE);}}

/* k2416 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_2418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2418,2,t0,t1);}
if(C_truep((C_word)C_fixnum_greaterp(t1,C_fix(2)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2390,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2410,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("compiler-syntax.scm: 104  caadr");
((C_proc3)C_retrieve_proc(*((C_word*)lf[60]+1)))(3,*((C_word*)lf[60]+1),t4,((C_word*)t0)[4]);}
else{
t4=(C_word)C_i_cadr(((C_word*)t0)[4]);
t5=((C_word*)t0)[5];
f_1911(t5,(C_word)C_i_symbolp(t4));}}
else{
t2=((C_word*)t0)[5];
f_1911(t2,C_SCHEME_FALSE);}}

/* k2408 in k2416 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_2410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("compiler-syntax.scm: 104  c");
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2388 in k2416 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_2390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_1911(t2,t1);}
else{
t2=(C_word)C_i_cadr(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_1911(t3,(C_word)C_i_symbolp(t2));}}

/* k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_fcall f_1911(C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1911,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_1914,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2340,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_2340(t10,t6,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[12];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* loop314 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_fcall f_2340(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2340,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2374,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_a_i_list(&a,1,t4);
C_trace("compiler-syntax.scm: 106  gensym");
((C_proc2)C_retrieve_symbol_proc(lf[48]))(2,*((C_word*)lf[48]+1),t3);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2372 in loop314 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_2374(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2374,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop314327");
t6=((C_word*)((C_word*)t0)[4])[1];
f_2340(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop314327");
t6=((C_word*)((C_word*)t0)[4])[1];
f_2340(t6,((C_word*)t0)[3],t5);}}

/* k1912 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_1914(C_word c,C_word t0,C_word t1){
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
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1914,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[16],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[15],t4);
t6=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[14],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t5,t8);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_1945,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t9,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[15],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],a[17]=((C_word*)t0)[13],tmp=(C_word)a,a+=18,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2263,a[2]=t11,a[3]=t16,a[4]=t13,tmp=(C_word)a,a+=5,tmp));
t18=((C_word*)t16)[1];
f_2263(t18,t14,t1,((C_word*)t0)[2]);}

/* loop342 in k1912 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_fcall f_2263(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_2263,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[52]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2296,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
C_trace("g362363");
t10=t6;
((C_proc4)C_retrieve_proc(t10))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2294 in loop342 in k1912 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_2296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2296,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2276,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_2276(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_2276(t5,t4);}}

/* k2274 in k2294 in loop342 in k1912 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_fcall f_2276(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
C_trace("loop342356");
t5=((C_word*)((C_word*)t0)[3])[1];
f_2263(t5,((C_word*)t0)[2],t3,t4);}

/* k1943 in k1912 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_1945(C_word c,C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2213,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2217,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2219,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2219(t11,t7,((C_word*)t0)[3]);}

/* loop369 in k1943 in k1912 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_fcall f_2219(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(12);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2219,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2246,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_2246(C_a_i(&a,6),t3,t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
C_trace("loop369382");
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
C_trace("loop369382");
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g385 in loop369 in k1943 in k1912 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static C_word C_fcall f_2246(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
return((C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* k2215 in k1943 in k1912 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_2217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#append");
t2=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k2211 in k1943 in k1912 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_2213(C_word c,C_word t0,C_word t1){
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
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2213,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[17],t1);
t3=(C_word)C_i_cadr(((C_word*)t0)[16]);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[15],t4);
t6=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=t5,tmp=(C_word)a,a+=17,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2153,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2155,a[2]=t8,a[3]=t13,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_2155(t15,t11,((C_word*)t0)[2]);}

/* loop397 in k2211 in k1943 in k1912 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_fcall f_2155(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(12);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2155,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_a_i_cons(&a,2,C_fix(0),C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=(C_word)C_a_i_cons(&a,2,lf[57],t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t8=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t7);
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t10=(C_word)C_slot(t2,C_fix(1));
C_trace("loop397410");
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}
else{
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t10=(C_word)C_slot(t2,C_fix(1));
C_trace("loop397410");
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2151 in k2211 in k1943 in k1912 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_2153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#append");
t2=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k2147 in k2211 in k1943 in k1912 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_2149(C_word c,C_word t0,C_word t1){
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
C_word ab[96],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2149,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[16],t1);
t3=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[15],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,t2,t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[14],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[13],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_cons(&a,2,C_fix(1),t11);
t13=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],t12);
t14=(C_word)C_a_i_cons(&a,2,lf[56],t13);
t15=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
t16=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[11],t15);
t17=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t16);
t18=(C_word)C_a_i_cons(&a,2,t17,C_SCHEME_END_OF_LIST);
t19=(C_word)C_a_i_cons(&a,2,t14,t18);
t20=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],t19);
t21=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t20);
t22=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
t23=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],t22);
t24=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t23);
t25=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2009,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[7],a[9]=t10,a[10]=t21,a[11]=t24,a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
t26=C_SCHEME_END_OF_LIST;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_SCHEME_FALSE;
t29=(*a=C_VECTOR_TYPE|1,a[1]=t28,tmp=(C_word)a,a+=2,tmp);
t30=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2013,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2015,a[2]=t27,a[3]=t32,a[4]=t29,tmp=(C_word)a,a+=5,tmp));
t34=((C_word*)t32)[1];
f_2015(t34,t30,((C_word*)t0)[2]);}

/* loop425 in k2147 in k2211 in k1943 in k1912 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_fcall f_2015(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(12);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2015,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_a_i_cons(&a,2,C_fix(1),C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=(C_word)C_a_i_cons(&a,2,lf[57],t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t8=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t7);
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t10=(C_word)C_slot(t2,C_fix(1));
C_trace("loop425438");
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}
else{
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t10=(C_word)C_slot(t2,C_fix(1));
C_trace("loop425438");
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2011 in k2147 in k2211 in k1943 in k1912 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_2013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#append");
t2=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k2007 in k2147 in k2211 in k1943 in k1912 in k1909 in k1900 in k1897 in k1894 in k1891 in k1888 in k1885 in k1882 in k1879 in k1876 in k1873 in k1870 in k1867 in k1864 in a1861 in k791 in k700 in k697 */
static void C_ccall f_2009(C_word c,C_word t0,C_word t1){
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
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2009,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[11],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t6);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t7,t8);
t10=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t9);
t11=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t10);
t12=(C_word)C_a_i_cons(&a,2,t11,C_SCHEME_END_OF_LIST);
t13=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t12);
t14=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],t13);
t15=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t14);
t16=(C_word)C_a_i_cons(&a,2,t15,C_SCHEME_END_OF_LIST);
t17=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t16);
t18=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t17));}

/* k794 in k791 in k700 in k697 */
static void C_ccall f_796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_796,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_799,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1813,tmp=(C_word)a,a+=2,tmp);
C_trace("##compiler#r-c-s");
((C_proc5)C_retrieve_proc(*((C_word*)lf[5]+1)))(5,*((C_word*)lf[5]+1),t2,lf[55],t3,C_SCHEME_END_OF_LIST);}

/* a1812 in k794 in k791 in k700 in k697 */
static void C_ccall f_1813(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1813,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_length(t2);
t6=(C_word)C_fixnum_greaterp(t5,C_fix(1));
t7=(C_truep(t6)?(C_word)C_i_memq(lf[50],C_retrieve(lf[12])):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1823,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("compiler-syntax.scm: 128  r");
t9=t3;
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,lf[54]);}
else{
t8=t2;
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* k1821 in a1812 in k794 in k791 in k700 in k697 */
static void C_ccall f_1823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1830,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("compiler-syntax.scm: 129  r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[53]);}

/* k1828 in k1821 in a1812 in k794 in k791 in k700 in k697 */
static void C_ccall f_1830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1830,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1846,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[2]);
C_trace("compiler-syntax.scm: 129  fold-right");
((C_proc5)C_retrieve_symbol_proc(lf[51]))(5,*((C_word*)lf[51]+1),t3,*((C_word*)lf[52]+1),((C_word*)t0)[4],t4);}

/* k1844 in k1828 in k1821 in a1812 in k794 in k791 in k700 in k697 */
static void C_ccall f_1846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1846,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_799,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_802,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1651,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1811,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t4,lf[17]);}

/* k1809 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1811,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[17],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[35]);}

/* k1805 in k1809 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1807,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[35],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1803,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[33]);}

/* k1801 in k1805 in k1809 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1803,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[33],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1799,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[31]);}

/* k1797 in k1801 in k1805 in k1809 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1799,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[31],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[29]);}

/* k1793 in k1797 in k1801 in k1805 in k1809 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1795,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[29],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1791,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[19]);}

/* k1789 in k1793 in k1797 in k1801 in k1805 in k1809 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1791,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[19],t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[16]);}

/* k1785 in k1789 in k1793 in k1797 in k1801 in k1805 in k1809 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1787(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1787,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[16],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t6);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t7);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t8);
C_trace("##compiler#r-c-s");
((C_proc5)C_retrieve_proc(*((C_word*)lf[5]+1)))(5,*((C_word*)lf[5]+1),((C_word*)t0)[3],lf[49],((C_word*)t0)[2],t9);}

/* a1650 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1651(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1651,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1655,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("compiler-syntax.scm: 134  gensym");
((C_proc3)C_retrieve_symbol_proc(lf[48]))(3,*((C_word*)lf[48]+1),t5,lf[34]);}

/* k1653 in a1650 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1658,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
t4=(C_word)C_i_memq(t3,lf[45]);
t5=(C_truep(t4)?lf[46]:lf[47]);
t6=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("compiler-syntax.scm: 135  compile-format-string");
((C_proc8)C_retrieve_symbol_proc(lf[11]))(8,*((C_word*)lf[11]+1),t2,t5,t1,((C_word*)t0)[3],t6,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* k1656 in k1653 in a1650 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1658,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1668,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("compiler-syntax.scm: 144  r");
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[32]);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1666 in k1656 in k1653 in a1650 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1668,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1712,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("compiler-syntax.scm: 144  r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[19]);}

/* k1710 in k1666 in k1656 in k1653 in a1650 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1712,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1692,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("compiler-syntax.scm: 146  r");
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,lf[16]);}

/* k1690 in k1710 in k1666 in k1656 in k1653 in a1650 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1692,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t6));}

/* k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_802,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_805,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1540,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1649,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t4,lf[17]);}

/* k1647 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1649,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[17],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1645,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[35]);}

/* k1643 in k1647 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1645,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[35],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[33]);}

/* k1639 in k1643 in k1647 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1641,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[33],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[31]);}

/* k1635 in k1639 in k1643 in k1647 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1637,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[31],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1633,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[29]);}

/* k1631 in k1635 in k1639 in k1643 in k1647 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1633,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[29],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1629,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[19]);}

/* k1627 in k1631 in k1635 in k1639 in k1643 in k1647 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1629,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[19],t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[16]);}

/* k1623 in k1627 in k1631 in k1635 in k1639 in k1643 in k1647 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1625(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1625,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[16],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t6);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t7);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t8);
C_trace("##compiler#r-c-s");
((C_proc5)C_retrieve_proc(*((C_word*)lf[5]+1)))(5,*((C_word*)lf[5]+1),((C_word*)t0)[3],lf[44],((C_word*)t0)[2],t9);}

/* a1539 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1540(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1540,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_length(t2);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t5,C_fix(3)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1550,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_i_cadr(t2);
t8=(C_word)C_i_cddr(t2);
C_trace("compiler-syntax.scm: 152  compile-format-string");
((C_proc8)C_retrieve_symbol_proc(lf[11]))(8,*((C_word*)lf[11]+1),t6,lf[33],t7,t2,t8,t3,t4);}
else{
t6=t2;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k1548 in a1539 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[2]));}

/* k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_805,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_808,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1443,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1538,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t4,lf[17]);}

/* k1536 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1538,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[17],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1534,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[35]);}

/* k1532 in k1536 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1534,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[35],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1530,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[33]);}

/* k1528 in k1532 in k1536 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1530,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[33],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1526,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[31]);}

/* k1524 in k1528 in k1532 in k1536 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1526,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[31],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1522,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[29]);}

/* k1520 in k1524 in k1528 in k1532 in k1536 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1522,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[29],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1518,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[19]);}

/* k1516 in k1520 in k1524 in k1528 in k1532 in k1536 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1518,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[19],t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
C_trace("##sys#primitive-alias");
((C_proc3)C_retrieve_symbol_proc(lf[43]))(3,*((C_word*)lf[43]+1),t3,lf[16]);}

/* k1512 in k1516 in k1520 in k1524 in k1528 in k1532 in k1536 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1514(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1514,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[16],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t6);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t7);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t8);
C_trace("##compiler#r-c-s");
((C_proc5)C_retrieve_proc(*((C_word*)lf[5]+1)))(5,*((C_word*)lf[5]+1),((C_word*)t0)[3],lf[42],((C_word*)t0)[2],t9);}

/* a1442 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1443(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1443,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1447,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
C_trace("compiler-syntax.scm: 161  compile-format-string");
((C_proc8)C_retrieve_symbol_proc(lf[11]))(8,*((C_word*)lf[11]+1),t5,lf[40],lf[41],t2,t6,t3,t4);}

/* k1445 in a1442 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_808,2,t0,t1);}
t2=C_mutate((C_word*)lf[11]+1 /* (set! compile-format-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_810,tmp=(C_word)a,a+=2,tmp));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_810(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=8) C_bad_argc_2(c,8,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_810,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_816,a[2]=t7,a[3]=t6,a[4]=t3,a[5]=t4,a[6]=t2,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
C_trace("compiler-syntax.scm: 168  call/cc");
((C_proc3)C_retrieve_proc(*((C_word*)lf[39]+1)))(3,*((C_word*)lf[39]+1),t1,t8);}

/* a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_816(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[18],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_816,3,t0,t1,t2);}
t3=(C_word)C_i_length(((C_word*)t0)[7]);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(1)))){
if(C_truep((C_word)C_i_memq(((C_word*)t0)[6],C_retrieve(lf[12])))){
t4=(C_word)C_i_car(((C_word*)t0)[7]);
t5=(C_word)C_i_stringp(t4);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_838,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t5)){
t7=t6;
f_838(t7,t5);}
else{
t7=(C_word)C_i_car(((C_word*)t0)[7]);
if(C_truep((C_word)C_i_listp(t7))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1414,a[2]=((C_word*)t0)[7],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1425,a[2]=((C_word*)t0)[7],a[3]=t8,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace("compiler-syntax.scm: 174  r");
t10=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t10))(3,t10,t9,lf[38]);}
else{
t8=t6;
f_838(t8,C_SCHEME_FALSE);}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k1423 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1425,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1429,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("compiler-syntax.scm: 174  caar");
((C_proc3)C_retrieve_proc(*((C_word*)lf[37]+1)))(3,*((C_word*)lf[37]+1),t2,((C_word*)t0)[2]);}

/* k1427 in k1423 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("compiler-syntax.scm: 174  c");
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1412 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1414,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1421,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("compiler-syntax.scm: 175  cadar");
((C_proc3)C_retrieve_proc(*((C_word*)lf[36]+1)))(3,*((C_word*)lf[36]+1),t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_838(t2,C_SCHEME_FALSE);}}

/* k1419 in k1412 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_838(t2,(C_word)C_i_stringp(t1));}

/* k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_fcall f_838(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_838,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[8]);
if(C_truep((C_word)C_i_stringp(t3))){
t4=t2;
f_841(2,t4,(C_word)C_i_car(((C_word*)t0)[8]));}
else{
C_trace("compiler-syntax.scm: 176  cadar");
((C_proc3)C_retrieve_proc(*((C_word*)lf[36]+1)))(3,*((C_word*)lf[36]+1),t2,((C_word*)t0)[8]);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_841(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_841,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[8]);
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_846,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fix(0);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(C_word)C_i_string_length(t1);
t11=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t10,a[6]=t7,a[7]=t5,a[8]=t4,a[9]=t9,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
C_trace("compiler-syntax.scm: 190  r");
t12=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t12))(3,t12,t11,lf[17]);}

/* k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_884,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace("compiler-syntax.scm: 191  r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[35]);}

/* k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_884,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_887,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
C_trace("compiler-syntax.scm: 192  r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[29]);}

/* k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_887,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
C_trace("compiler-syntax.scm: 193  r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[34]);}

/* k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_890,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_893,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
C_trace("compiler-syntax.scm: 194  r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[33]);}

/* k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_893,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_896,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
C_trace("compiler-syntax.scm: 195  r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[32]);}

/* k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_896,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_899,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
C_trace("compiler-syntax.scm: 196  r");
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[31]);}

/* k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_899(C_word c,C_word t0,C_word t1){
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
C_word ab[47],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_899,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_901,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[15],tmp=(C_word)a,a+=4,tmp));
t11=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_911,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[13],tmp=(C_word)a,a+=4,tmp));
t12=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_930,a[2]=((C_word*)t0)[9],a[3]=t9,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp));
t13=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_983,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp));
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_993,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],a[6]=t5,a[7]=t9,a[8]=((C_word*)t0)[4],a[9]=t15,a[10]=t3,a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t7,a[14]=((C_word*)t0)[8],a[15]=((C_word*)t0)[5],a[16]=((C_word*)t0)[11],a[17]=((C_word*)t0)[6],a[18]=((C_word*)t0)[7],a[19]=((C_word*)t0)[14],tmp=(C_word)a,a+=20,tmp));
t17=((C_word*)t15)[1];
f_993(t17,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_fcall f_993(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(16);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_993,NULL,3,t0,t1,t2);}
t3=((C_word*)((C_word*)t0)[19])[1];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[18]))){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1003,a[2]=t2,a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[15],a[6]=t1,a[7]=((C_word*)t0)[16],a[8]=((C_word*)t0)[17],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[12])[1]))){
t5=t4;
f_1003(2,t5,C_SCHEME_UNDEFINED);}
else{
C_trace("compiler-syntax.scm: 218  fail");
t5=((C_word*)t0)[11];
f_846(t5,t4,C_SCHEME_FALSE,lf[26],C_SCHEME_END_OF_LIST);}}
else{
t4=f_901(((C_word*)((C_word*)t0)[10])[1]);
t5=(C_word)C_eqp(t4,C_make_character(126));
if(C_truep(t5)){
t6=f_901(((C_word*)((C_word*)t0)[10])[1]);
t7=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1054,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[19],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[16],a[13]=t1,a[14]=((C_word*)t0)[9],a[15]=t6,tmp=(C_word)a,a+=16,tmp);
C_trace("compiler-syntax.scm: 226  endchunk");
t8=((C_word*)((C_word*)t0)[13])[1];
f_930(t8,t7,t2);}
else{
t6=(C_word)C_a_i_cons(&a,2,t4,t2);
C_trace("compiler-syntax.scm: 249  loop");
t11=t1;
t12=t6;
t1=t11;
t2=t12;
goto loop;}}}

/* k1052 in loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1054(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1054,2,t0,t1);}
t2=(C_word)C_u_i_char_upcase(((C_word*)t0)[15]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1060,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],tmp=(C_word)a,a+=4,tmp);
switch(t2){
case C_make_character(83):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1081,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
C_trace("compiler-syntax.scm: 228  next");
t5=((C_word*)((C_word*)t0)[9])[1];
f_911(t5,t4);
case C_make_character(65):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1106,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
C_trace("compiler-syntax.scm: 229  next");
t5=((C_word*)((C_word*)t0)[9])[1];
f_911(t5,t4);
case C_make_character(67):
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1131,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
C_trace("compiler-syntax.scm: 230  next");
t5=((C_word*)((C_word*)t0)[9])[1];
f_911(t5,t4);
case C_make_character(66):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1168,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("compiler-syntax.scm: 231  next");
t5=((C_word*)((C_word*)t0)[9])[1];
f_911(t5,t4);
case C_make_character(79):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1205,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("compiler-syntax.scm: 232  next");
t5=((C_word*)((C_word*)t0)[9])[1];
f_911(t5,t4);
case C_make_character(88):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1242,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("compiler-syntax.scm: 233  next");
t5=((C_word*)((C_word*)t0)[9])[1];
f_911(t5,t4);
case C_make_character(33):
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[27],t4);
t6=f_983(C_a_i(&a,3),((C_word*)((C_word*)t0)[10])[1],t5);
C_trace("compiler-syntax.scm: 248  loop");
t7=((C_word*)((C_word*)t0)[14])[1];
f_993(t7,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
case C_make_character(63):
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1272,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[14],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
C_trace("compiler-syntax.scm: 236  next");
t5=((C_word*)((C_word*)t0)[9])[1];
f_911(t5,t4);
case C_make_character(126):
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,C_make_character(126),t4);
t6=(C_word)C_a_i_cons(&a,2,*((C_word*)lf[29]+1),t5);
t7=f_983(C_a_i(&a,3),((C_word*)((C_word*)t0)[10])[1],t6);
C_trace("compiler-syntax.scm: 248  loop");
t8=((C_word*)((C_word*)t0)[14])[1];
f_993(t8,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);
default:
t4=(C_word)C_eqp(t2,C_make_character(37));
t5=(C_truep(t4)?t4:(C_word)C_eqp(t2,C_make_character(78)));
if(C_truep(t5)){
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[12],C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,C_make_character(10),t6);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t7);
t9=f_983(C_a_i(&a,3),((C_word*)((C_word*)t0)[10])[1],t8);
C_trace("compiler-syntax.scm: 248  loop");
t10=((C_word*)((C_word*)t0)[14])[1];
f_993(t10,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_u_i_char_whitespacep(((C_word*)t0)[15]))){
t6=f_901(((C_word*)((C_word*)t0)[4])[1]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1358,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=f_1358(t7,t6);
C_trace("compiler-syntax.scm: 248  loop");
t9=((C_word*)((C_word*)t0)[14])[1];
f_993(t9,((C_word*)t0)[13],C_SCHEME_END_OF_LIST);}
else{
C_trace("compiler-syntax.scm: 247  fail");
t6=((C_word*)t0)[2];
f_846(t6,t3,C_SCHEME_TRUE,lf[30],(C_word)C_a_i_list(&a,1,((C_word*)t0)[15]));}}}}

/* skip in k1052 in loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static C_word C_fcall f_1358(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
if(C_truep((C_word)C_u_i_char_whitespacep(t1))){
t2=f_901(((C_word*)((C_word*)t0)[3])[1]);
t6=t2;
t1=t6;
goto loop;}
else{
t2=(C_word)C_fixnum_decrease(((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}}

/* k1270 in k1052 in loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1275,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace("compiler-syntax.scm: 237  next");
t3=((C_word*)((C_word*)t0)[2])[1];
f_911(t3,t2);}

/* k1273 in k1270 in k1052 in loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1275,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t4);
t6=(C_word)C_a_i_cons(&a,2,lf[28],t5);
t7=f_983(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t6);
C_trace("compiler-syntax.scm: 248  loop");
t8=((C_word*)((C_word*)t0)[3])[1];
f_993(t8,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1240 in k1052 in loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1242(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1242,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_fix(16),C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=f_983(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t7);
C_trace("compiler-syntax.scm: 248  loop");
t9=((C_word*)((C_word*)t0)[3])[1];
f_993(t9,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1203 in k1052 in loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1205(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1205,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_fix(8),C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=f_983(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t7);
C_trace("compiler-syntax.scm: 248  loop");
t9=((C_word*)((C_word*)t0)[3])[1];
f_993(t9,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1166 in k1052 in loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1168(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1168,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_fix(2),C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t6);
t8=f_983(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t7);
C_trace("compiler-syntax.scm: 248  loop");
t9=((C_word*)((C_word*)t0)[3])[1];
f_993(t9,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1129 in k1052 in loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1131,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=f_983(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t4);
C_trace("compiler-syntax.scm: 248  loop");
t6=((C_word*)((C_word*)t0)[3])[1];
f_993(t6,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1104 in k1052 in loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1106,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=f_983(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t4);
C_trace("compiler-syntax.scm: 248  loop");
t6=((C_word*)((C_word*)t0)[3])[1];
f_993(t6,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1079 in k1052 in loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1081,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=f_983(C_a_i(&a,3),((C_word*)((C_word*)t0)[4])[1],t4);
C_trace("compiler-syntax.scm: 248  loop");
t6=((C_word*)((C_word*)t0)[3])[1];
f_993(t6,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1058 in k1052 in loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("compiler-syntax.scm: 248  loop");
t2=((C_word*)((C_word*)t0)[3])[1];
f_993(t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k1001 in loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1003,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1006,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
C_trace("compiler-syntax.scm: 219  endchunk");
t3=((C_word*)((C_word*)t0)[3])[1];
f_930(t3,t2,((C_word*)t0)[2]);}

/* k1004 in k1001 in loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1006,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1021,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1025,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("compiler-syntax.scm: 221  reverse");
((C_proc3)C_retrieve_proc(*((C_word*)lf[25]+1)))(3,*((C_word*)lf[25]+1),t6,((C_word*)((C_word*)t0)[2])[1]);}

/* k1023 in k1004 in k1001 in loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#append");
t2=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k1019 in k1004 in k1001 in loop in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_1021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1021,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* push in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static C_word C_fcall f_983(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}

/* endchunk in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_fcall f_930(C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_930,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_i_length(t2);
t4=(C_word)C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=(C_word)C_i_car(t2);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,t5,t6);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t7);
C_trace("compiler-syntax.scm: 209  push");
t9=t1;
((C_proc2)C_retrieve_proc(t9))(2,t9,f_983(C_a_i(&a,3),((C_word*)((C_word*)t0)[3])[1],t8));}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_973,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("compiler-syntax.scm: 212  reverse-list->string");
((C_proc3)C_retrieve_symbol_proc(lf[23]))(3,*((C_word*)lf[23]+1),t5,t2);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k971 in endchunk in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_973,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
C_trace("compiler-syntax.scm: 209  push");
t5=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t5))(2,t5,f_983(C_a_i(&a,3),((C_word*)((C_word*)t0)[2])[1],t4));}

/* next in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_fcall f_911(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_911,NULL,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[3])[1]))){
C_trace("compiler-syntax.scm: 203  fail");
t2=((C_word*)t0)[2];
f_846(t2,t1,C_SCHEME_TRUE,lf[22],C_SCHEME_END_OF_LIST);}
else{
t2=(C_word)C_i_car(((C_word*)((C_word*)t0)[3])[1]);
t3=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* fetch in k897 in k894 in k891 in k888 in k885 in k882 in k879 in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static C_word C_fcall f_901(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t1=(C_word)C_i_string_ref(((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);
t2=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t1);}

/* fail in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_fcall f_846(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_846,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_850,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
C_trace("compiler-syntax.scm: 179  get-line");
((C_proc3)C_retrieve_symbol_proc(lf[21]))(3,*((C_word*)lf[21]+1),t5,((C_word*)t0)[2]);}

/* k848 in fail in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_850,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_853,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_866,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[19]))(2,*((C_word*)lf[19]+1),t4);}
else{
C_trace("compiler-syntax.scm: 180  compiler-warning");
((C_proc9)C_retrieve_symbol_proc(lf[13]))(9,*((C_word*)lf[13]+1),t2,lf[14],lf[15],((C_word*)t0)[5],((C_word*)t0)[4],lf[20],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k864 in k848 in fail in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_869,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,lf[18],t1);}

/* k867 in k864 in k848 in fail in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_869,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_872,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k870 in k867 in k864 in k848 in fail in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k861 in k848 in fail in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("compiler-syntax.scm: 180  compiler-warning");
((C_proc9)C_retrieve_symbol_proc(lf[13]))(9,*((C_word*)lf[13]+1),((C_word*)t0)[6],lf[14],lf[15],((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k851 in k848 in fail in k839 in k836 in a815 in ##compiler#compile-format-string in k806 in k803 in k800 in k797 in k794 in k791 in k700 in k697 */
static void C_ccall f_853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
C_trace("compiler-syntax.scm: 186  return");
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##compiler#r-c-s in k700 in k697 */
static void C_ccall f_719(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_719r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_719r(t0,t1,t2,t3,t4);}}

static void C_ccall f_719r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_723,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
t6=t5;
f_723(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_723(2,t7,(C_word)C_i_car(t4));}
else{
C_trace("##sys#error");
t7=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[10],t4);}}}

/* k721 in ##compiler#r-c-s in k700 in k697 */
static void C_ccall f_723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_723,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_771,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("compiler-syntax.scm: 46   ##sys#er-transformer");
((C_proc3)C_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),t2,((C_word*)t0)[2]);}

/* k769 in k721 in ##compiler#r-c-s in k700 in k697 */
static void C_ccall f_771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_771,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_i_symbolp(((C_word*)t0)[3]);
t4=(C_truep(t3)?(C_word)C_a_i_list(&a,1,((C_word*)t0)[3]):((C_word*)t0)[3]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_735,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_735(t8,((C_word*)t0)[2],t4);}

/* loop52 in k769 in k721 in ##compiler#r-c-s in k700 in k697 */
static void C_fcall f_735(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_735,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_743,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_750,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g5960");
t6=t3;
f_743(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k748 in loop52 in k769 in k721 in ##compiler#r-c-s in k700 in k697 */
static void C_ccall f_750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_735(t3,((C_word*)t0)[2],t2);}

/* g59 in loop52 in k769 in k721 in ##compiler#r-c-s in k700 in k697 */
static void C_fcall f_743(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_743,NULL,3,t0,t1,t2);}
C_trace("compiler-syntax.scm: 49   ##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t1,t2,lf[7],((C_word*)t0)[2]);}

/* ##sys#compiler-syntax-hook in k700 in k697 */
static void C_ccall f_705(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_705,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_709,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("compiler-syntax.scm: 41   alist-ref");
((C_proc6)C_retrieve_symbol_proc(lf[3]))(6,*((C_word*)lf[3]+1),t4,t2,*((C_word*)lf[0]+1),*((C_word*)lf[4]+1),C_fix(0));}

/* k707 in ##sys#compiler-syntax-hook in k700 in k697 */
static void C_ccall f_709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_713,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_fixnum_increase(t1);
C_trace("compiler-syntax.scm: 43   alist-update!");
((C_proc5)C_retrieve_symbol_proc(lf[2]))(5,*((C_word*)lf[2]+1),t2,((C_word*)t0)[2],t3,*((C_word*)lf[0]+1));}

/* k711 in k707 in ##sys#compiler-syntax-hook in k700 in k697 */
static void C_ccall f_713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[0]+1 /* (set! compiler-syntax-statistics ...) */,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[163] = {
{"toplevel:compiler_syntax_scm",(void*)C_compiler_syntax_toplevel},
{"f_699:compiler_syntax_scm",(void*)f_699},
{"f_702:compiler_syntax_scm",(void*)f_702},
{"f_2842:compiler_syntax_scm",(void*)f_2842},
{"f_2432:compiler_syntax_scm",(void*)f_2432},
{"f_2436:compiler_syntax_scm",(void*)f_2436},
{"f_2439:compiler_syntax_scm",(void*)f_2439},
{"f_2442:compiler_syntax_scm",(void*)f_2442},
{"f_2445:compiler_syntax_scm",(void*)f_2445},
{"f_2448:compiler_syntax_scm",(void*)f_2448},
{"f_2451:compiler_syntax_scm",(void*)f_2451},
{"f_2454:compiler_syntax_scm",(void*)f_2454},
{"f_2830:compiler_syntax_scm",(void*)f_2830},
{"f_2822:compiler_syntax_scm",(void*)f_2822},
{"f_2802:compiler_syntax_scm",(void*)f_2802},
{"f_2463:compiler_syntax_scm",(void*)f_2463},
{"f_2752:compiler_syntax_scm",(void*)f_2752},
{"f_2786:compiler_syntax_scm",(void*)f_2786},
{"f_2466:compiler_syntax_scm",(void*)f_2466},
{"f_2703:compiler_syntax_scm",(void*)f_2703},
{"f_2736:compiler_syntax_scm",(void*)f_2736},
{"f_2716:compiler_syntax_scm",(void*)f_2716},
{"f_2481:compiler_syntax_scm",(void*)f_2481},
{"f_2659:compiler_syntax_scm",(void*)f_2659},
{"f_2686:compiler_syntax_scm",(void*)f_2686},
{"f_2657:compiler_syntax_scm",(void*)f_2657},
{"f_2653:compiler_syntax_scm",(void*)f_2653},
{"f_2595:compiler_syntax_scm",(void*)f_2595},
{"f_2593:compiler_syntax_scm",(void*)f_2593},
{"f_2589:compiler_syntax_scm",(void*)f_2589},
{"f_2535:compiler_syntax_scm",(void*)f_2535},
{"f_2533:compiler_syntax_scm",(void*)f_2533},
{"f_2529:compiler_syntax_scm",(void*)f_2529},
{"f_793:compiler_syntax_scm",(void*)f_793},
{"f_2430:compiler_syntax_scm",(void*)f_2430},
{"f_1862:compiler_syntax_scm",(void*)f_1862},
{"f_1866:compiler_syntax_scm",(void*)f_1866},
{"f_1869:compiler_syntax_scm",(void*)f_1869},
{"f_1872:compiler_syntax_scm",(void*)f_1872},
{"f_1875:compiler_syntax_scm",(void*)f_1875},
{"f_1878:compiler_syntax_scm",(void*)f_1878},
{"f_1881:compiler_syntax_scm",(void*)f_1881},
{"f_1884:compiler_syntax_scm",(void*)f_1884},
{"f_1887:compiler_syntax_scm",(void*)f_1887},
{"f_1890:compiler_syntax_scm",(void*)f_1890},
{"f_1893:compiler_syntax_scm",(void*)f_1893},
{"f_1896:compiler_syntax_scm",(void*)f_1896},
{"f_1899:compiler_syntax_scm",(void*)f_1899},
{"f_1902:compiler_syntax_scm",(void*)f_1902},
{"f_2418:compiler_syntax_scm",(void*)f_2418},
{"f_2410:compiler_syntax_scm",(void*)f_2410},
{"f_2390:compiler_syntax_scm",(void*)f_2390},
{"f_1911:compiler_syntax_scm",(void*)f_1911},
{"f_2340:compiler_syntax_scm",(void*)f_2340},
{"f_2374:compiler_syntax_scm",(void*)f_2374},
{"f_1914:compiler_syntax_scm",(void*)f_1914},
{"f_2263:compiler_syntax_scm",(void*)f_2263},
{"f_2296:compiler_syntax_scm",(void*)f_2296},
{"f_2276:compiler_syntax_scm",(void*)f_2276},
{"f_1945:compiler_syntax_scm",(void*)f_1945},
{"f_2219:compiler_syntax_scm",(void*)f_2219},
{"f_2246:compiler_syntax_scm",(void*)f_2246},
{"f_2217:compiler_syntax_scm",(void*)f_2217},
{"f_2213:compiler_syntax_scm",(void*)f_2213},
{"f_2155:compiler_syntax_scm",(void*)f_2155},
{"f_2153:compiler_syntax_scm",(void*)f_2153},
{"f_2149:compiler_syntax_scm",(void*)f_2149},
{"f_2015:compiler_syntax_scm",(void*)f_2015},
{"f_2013:compiler_syntax_scm",(void*)f_2013},
{"f_2009:compiler_syntax_scm",(void*)f_2009},
{"f_796:compiler_syntax_scm",(void*)f_796},
{"f_1813:compiler_syntax_scm",(void*)f_1813},
{"f_1823:compiler_syntax_scm",(void*)f_1823},
{"f_1830:compiler_syntax_scm",(void*)f_1830},
{"f_1846:compiler_syntax_scm",(void*)f_1846},
{"f_799:compiler_syntax_scm",(void*)f_799},
{"f_1811:compiler_syntax_scm",(void*)f_1811},
{"f_1807:compiler_syntax_scm",(void*)f_1807},
{"f_1803:compiler_syntax_scm",(void*)f_1803},
{"f_1799:compiler_syntax_scm",(void*)f_1799},
{"f_1795:compiler_syntax_scm",(void*)f_1795},
{"f_1791:compiler_syntax_scm",(void*)f_1791},
{"f_1787:compiler_syntax_scm",(void*)f_1787},
{"f_1651:compiler_syntax_scm",(void*)f_1651},
{"f_1655:compiler_syntax_scm",(void*)f_1655},
{"f_1658:compiler_syntax_scm",(void*)f_1658},
{"f_1668:compiler_syntax_scm",(void*)f_1668},
{"f_1712:compiler_syntax_scm",(void*)f_1712},
{"f_1692:compiler_syntax_scm",(void*)f_1692},
{"f_802:compiler_syntax_scm",(void*)f_802},
{"f_1649:compiler_syntax_scm",(void*)f_1649},
{"f_1645:compiler_syntax_scm",(void*)f_1645},
{"f_1641:compiler_syntax_scm",(void*)f_1641},
{"f_1637:compiler_syntax_scm",(void*)f_1637},
{"f_1633:compiler_syntax_scm",(void*)f_1633},
{"f_1629:compiler_syntax_scm",(void*)f_1629},
{"f_1625:compiler_syntax_scm",(void*)f_1625},
{"f_1540:compiler_syntax_scm",(void*)f_1540},
{"f_1550:compiler_syntax_scm",(void*)f_1550},
{"f_805:compiler_syntax_scm",(void*)f_805},
{"f_1538:compiler_syntax_scm",(void*)f_1538},
{"f_1534:compiler_syntax_scm",(void*)f_1534},
{"f_1530:compiler_syntax_scm",(void*)f_1530},
{"f_1526:compiler_syntax_scm",(void*)f_1526},
{"f_1522:compiler_syntax_scm",(void*)f_1522},
{"f_1518:compiler_syntax_scm",(void*)f_1518},
{"f_1514:compiler_syntax_scm",(void*)f_1514},
{"f_1443:compiler_syntax_scm",(void*)f_1443},
{"f_1447:compiler_syntax_scm",(void*)f_1447},
{"f_808:compiler_syntax_scm",(void*)f_808},
{"f_810:compiler_syntax_scm",(void*)f_810},
{"f_816:compiler_syntax_scm",(void*)f_816},
{"f_1425:compiler_syntax_scm",(void*)f_1425},
{"f_1429:compiler_syntax_scm",(void*)f_1429},
{"f_1414:compiler_syntax_scm",(void*)f_1414},
{"f_1421:compiler_syntax_scm",(void*)f_1421},
{"f_838:compiler_syntax_scm",(void*)f_838},
{"f_841:compiler_syntax_scm",(void*)f_841},
{"f_881:compiler_syntax_scm",(void*)f_881},
{"f_884:compiler_syntax_scm",(void*)f_884},
{"f_887:compiler_syntax_scm",(void*)f_887},
{"f_890:compiler_syntax_scm",(void*)f_890},
{"f_893:compiler_syntax_scm",(void*)f_893},
{"f_896:compiler_syntax_scm",(void*)f_896},
{"f_899:compiler_syntax_scm",(void*)f_899},
{"f_993:compiler_syntax_scm",(void*)f_993},
{"f_1054:compiler_syntax_scm",(void*)f_1054},
{"f_1358:compiler_syntax_scm",(void*)f_1358},
{"f_1272:compiler_syntax_scm",(void*)f_1272},
{"f_1275:compiler_syntax_scm",(void*)f_1275},
{"f_1242:compiler_syntax_scm",(void*)f_1242},
{"f_1205:compiler_syntax_scm",(void*)f_1205},
{"f_1168:compiler_syntax_scm",(void*)f_1168},
{"f_1131:compiler_syntax_scm",(void*)f_1131},
{"f_1106:compiler_syntax_scm",(void*)f_1106},
{"f_1081:compiler_syntax_scm",(void*)f_1081},
{"f_1060:compiler_syntax_scm",(void*)f_1060},
{"f_1003:compiler_syntax_scm",(void*)f_1003},
{"f_1006:compiler_syntax_scm",(void*)f_1006},
{"f_1025:compiler_syntax_scm",(void*)f_1025},
{"f_1021:compiler_syntax_scm",(void*)f_1021},
{"f_983:compiler_syntax_scm",(void*)f_983},
{"f_930:compiler_syntax_scm",(void*)f_930},
{"f_973:compiler_syntax_scm",(void*)f_973},
{"f_911:compiler_syntax_scm",(void*)f_911},
{"f_901:compiler_syntax_scm",(void*)f_901},
{"f_846:compiler_syntax_scm",(void*)f_846},
{"f_850:compiler_syntax_scm",(void*)f_850},
{"f_866:compiler_syntax_scm",(void*)f_866},
{"f_869:compiler_syntax_scm",(void*)f_869},
{"f_872:compiler_syntax_scm",(void*)f_872},
{"f_863:compiler_syntax_scm",(void*)f_863},
{"f_853:compiler_syntax_scm",(void*)f_853},
{"f_719:compiler_syntax_scm",(void*)f_719},
{"f_723:compiler_syntax_scm",(void*)f_723},
{"f_771:compiler_syntax_scm",(void*)f_771},
{"f_735:compiler_syntax_scm",(void*)f_735},
{"f_750:compiler_syntax_scm",(void*)f_750},
{"f_743:compiler_syntax_scm",(void*)f_743},
{"f_705:compiler_syntax_scm",(void*)f_705},
{"f_709:compiler_syntax_scm",(void*)f_709},
{"f_713:compiler_syntax_scm",(void*)f_713},
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
