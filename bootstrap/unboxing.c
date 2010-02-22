/* Generated from unboxing.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-09 21:38
   Version 4.2.12
   windows-mingw32-x86 [ manyargs ptables ]
   compiled 2010-01-08 on lenovo-1 (MINGW32_NT-6.0)
   command line: unboxing.scm -optimize-level 2 -include-path . -include-path ./ -inline -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file unboxing.c
   unit: unboxing
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[174];
static double C_possibly_force_alignment;


C_noret_decl(C_unboxing_toplevel)
C_externexport void C_ccall C_unboxing_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_918)
static void C_ccall f_918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_921)
static void C_ccall f_921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2740)
static void C_ccall f_2740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2743)
static void C_ccall f_2743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2749)
static void C_ccall f_2749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2752)
static void C_ccall f_2752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2755)
static void C_ccall f_2755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2758)
static void C_ccall f_2758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2764)
static void C_ccall f_2764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2767)
static void C_ccall f_2767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2770)
static void C_ccall f_2770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2773)
static void C_ccall f_2773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2776)
static void C_ccall f_2776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2779)
static void C_ccall f_2779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2782)
static void C_ccall f_2782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2785)
static void C_ccall f_2785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2788)
static void C_ccall f_2788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2791)
static void C_ccall f_2791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2794)
static void C_ccall f_2794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2797)
static void C_ccall f_2797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2800)
static void C_ccall f_2800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2806)
static void C_ccall f_2806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2809)
static void C_ccall f_2809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2812)
static void C_ccall f_2812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2815)
static void C_ccall f_2815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2818)
static void C_ccall f_2818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2824)
static void C_ccall f_2824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2725)
static void C_ccall f_2725(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2733)
static void C_ccall f_2733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_941)
static void C_ccall f_941(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_945)
static void C_ccall f_945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2704)
static void C_ccall f_2704(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2717)
static void C_ccall f_2717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_947)
static void C_fcall f_947(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2687)
static void C_ccall f_2687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2017)
static void C_fcall f_2017(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2051)
static void C_fcall f_2051(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2651)
static void C_ccall f_2651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2644)
static void C_fcall f_2644(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2636)
static void C_ccall f_2636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2626)
static void C_fcall f_2626(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2612)
static void C_ccall f_2612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2615)
static void C_ccall f_2615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2538)
static void C_fcall f_2538(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2584)
static void C_ccall f_2584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2552)
static void C_ccall f_2552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2516)
static void C_ccall f_2516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2501)
static void C_ccall f_2501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2405)
static void C_ccall f_2405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2457)
static void C_ccall f_2457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2434)
static void C_ccall f_2434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2328)
static void C_ccall f_2328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2331)
static void C_ccall f_2331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2337)
static void C_ccall f_2337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2312)
static void C_ccall f_2312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2169)
static void C_ccall f_2169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2304)
static void C_ccall f_2304(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2172)
static void C_ccall f_2172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2187)
static void C_ccall f_2187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2241)
static void C_fcall f_2241(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2279)
static void C_ccall f_2279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2249)
static void C_fcall f_2249(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2256)
static void C_fcall f_2256(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2233)
static void C_ccall f_2233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2202)
static void C_ccall f_2202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2135)
static void C_ccall f_2135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2109)
static void C_ccall f_2109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2069)
static void C_ccall f_2069(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2090)
static void C_ccall f_2090(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2084)
static void C_ccall f_2084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2073)
static void C_ccall f_2073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1847)
static void C_fcall f_1847(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1884)
static void C_ccall f_1884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1896)
static void C_fcall f_1896(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1977)
static void C_ccall f_1977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1923)
static void C_ccall f_1923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1721)
static void C_fcall f_1721(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1753)
static void C_ccall f_1753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1756)
static void C_ccall f_1756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1595)
static void C_fcall f_1595(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1627)
static void C_ccall f_1627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1563)
static void C_fcall f_1563(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1567)
static void C_ccall f_1567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1573)
static void C_ccall f_1573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1147)
static void C_fcall f_1147(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_1154)
static void C_ccall f_1154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1558)
static void C_ccall f_1558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1158)
static void C_ccall f_1158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1170)
static void C_fcall f_1170(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1392)
static void C_fcall f_1392(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1495)
static void C_ccall f_1495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1480)
static void C_fcall f_1480(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1447)
static void C_ccall f_1447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1383)
static void C_ccall f_1383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1194)
static void C_ccall f_1194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1214)
static void C_ccall f_1214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1168)
static void C_ccall f_1168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1161)
static void C_ccall f_1161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1079)
static void C_fcall f_1079(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1089)
static void C_fcall f_1089(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1101)
static void C_fcall f_1101(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1104)
static void C_ccall f_1104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1092)
static void C_ccall f_1092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1073)
static void C_fcall f_1073(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1051)
static void C_fcall f_1051(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1042)
static void C_ccall f_1042(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1030)
static C_word C_fcall f_1030(C_word t0,C_word t1);
C_noret_decl(f_971)
static void C_fcall f_971(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1028)
static void C_ccall f_1028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1020)
static void C_ccall f_1020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1024)
static void C_ccall f_1024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_979)
static void C_fcall f_979(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_950)
static void C_fcall f_950(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_969)
static void C_ccall f_969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_923)
static void C_ccall f_923(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_923)
static void C_ccall f_923r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_933)
static void C_ccall f_933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_936)
static void C_ccall f_936(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_947)
static void C_fcall trf_947(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_947(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_947(t0,t1,t2,t3);}

C_noret_decl(trf_2017)
static void C_fcall trf_2017(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2017(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2017(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2051)
static void C_fcall trf_2051(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2051(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2051(t0,t1);}

C_noret_decl(trf_2644)
static void C_fcall trf_2644(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2644(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2644(t0,t1,t2);}

C_noret_decl(trf_2626)
static void C_fcall trf_2626(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2626(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2626(t0,t1,t2);}

C_noret_decl(trf_2538)
static void C_fcall trf_2538(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2538(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2538(t0,t1,t2,t3);}

C_noret_decl(trf_2241)
static void C_fcall trf_2241(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2241(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2241(t0,t1,t2);}

C_noret_decl(trf_2249)
static void C_fcall trf_2249(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2249(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2249(t0,t1,t2);}

C_noret_decl(trf_2256)
static void C_fcall trf_2256(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2256(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2256(t0,t1);}

C_noret_decl(trf_1847)
static void C_fcall trf_1847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1847(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1847(t0,t1,t2);}

C_noret_decl(trf_1896)
static void C_fcall trf_1896(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1896(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1896(t0,t1,t2,t3);}

C_noret_decl(trf_1721)
static void C_fcall trf_1721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1721(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1721(t0,t1,t2);}

C_noret_decl(trf_1595)
static void C_fcall trf_1595(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1595(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1595(t0,t1,t2);}

C_noret_decl(trf_1563)
static void C_fcall trf_1563(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1563(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1563(t0,t1,t2,t3);}

C_noret_decl(trf_1147)
static void C_fcall trf_1147(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1147(void *dummy){
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
f_1147(t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(trf_1170)
static void C_fcall trf_1170(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1170(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1170(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1392)
static void C_fcall trf_1392(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1392(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1392(t0,t1);}

C_noret_decl(trf_1480)
static void C_fcall trf_1480(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1480(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1480(t0,t1);}

C_noret_decl(trf_1079)
static void C_fcall trf_1079(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1079(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1079(t0,t1,t2,t3);}

C_noret_decl(trf_1089)
static void C_fcall trf_1089(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1089(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1089(t0,t1);}

C_noret_decl(trf_1101)
static void C_fcall trf_1101(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1101(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1101(t0,t1);}

C_noret_decl(trf_1073)
static void C_fcall trf_1073(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1073(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1073(t0,t1,t2);}

C_noret_decl(trf_1051)
static void C_fcall trf_1051(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1051(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1051(t0,t1,t2);}

C_noret_decl(trf_971)
static void C_fcall trf_971(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_971(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_971(t0,t1,t2,t3);}

C_noret_decl(trf_979)
static void C_fcall trf_979(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_979(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_979(t0,t1,t2);}

C_noret_decl(trf_950)
static void C_fcall trf_950(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_950(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_950(t0,t1,t2);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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
C_unboxing_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_unboxing_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("unboxing_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1570)){
C_save(t1);
C_rereclaim2(1570*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,174);
lf[0]=C_h_intern(&lf[0],1,"d");
lf[1]=C_h_intern(&lf[1],19,"\003sysstandard-output");
lf[2]=C_h_intern(&lf[2],19,"\003syswrite-char/port");
lf[3]=C_h_intern(&lf[3],7,"fprintf");
lf[4]=C_h_intern(&lf[4],7,"display");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000\010[debug] ");
lf[6]=C_h_intern(&lf[6],26,"\010compilerperform-unboxing!");
lf[7]=C_h_intern(&lf[7],10,"alist-cons");
lf[8]=C_h_intern(&lf[8],6,"gensym");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\002tu");
lf[10]=C_h_intern(&lf[10],9,"alist-ref");
lf[11]=C_h_intern(&lf[11],3,"eq\077");
lf[12]=C_h_intern(&lf[12],19,"\003sysundefined-value");
lf[13]=C_h_intern(&lf[13],19,"\010compilercopy-node!");
lf[14]=C_h_intern(&lf[14],4,"node");
lf[15]=C_h_intern(&lf[15],19,"\004coreinline_unboxed");
lf[16]=C_h_intern(&lf[16],16,"\004corelet_unboxed");
lf[17]=C_h_intern(&lf[17],6,"flonum");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\014C_a_i_flonum");
lf[19]=C_h_intern(&lf[19],16,"\004coreunboxed_ref");
lf[20]=C_h_intern(&lf[20],20,"\004coreinline_allocate");
lf[21]=C_h_intern(&lf[21],7,"pointer");
lf[22]=C_decode_literal(C_heaptop,"\376B\000\000\016C_a_i_mpointer");
lf[23]=C_h_intern(&lf[23],4,"char");
lf[24]=C_h_intern(&lf[24],6,"fixnum");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000\020C_make_character");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\005C_fix");
lf[27]=C_h_intern(&lf[27],11,"\004coreinline");
lf[28]=C_h_intern(&lf[28],4,"bool");
lf[29]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\011C_mk_bool\376\377\016");
lf[30]=C_h_intern(&lf[30],1,"*");
lf[31]=C_h_intern(&lf[31],13,"\010compilerbomb");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000&unboxed type `*\047 not allowed as result");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\024invalid unboxed type");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\002tu");
lf[35]=C_h_intern(&lf[35],7,"reverse");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\020C_character_code");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\007C_unfix");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\022C_flonum_magnitude");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\021C_pointer_address");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\007C_truep");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\004C_id");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\035invalid unboxed argument type");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\002tu");
lf[44]=C_h_intern(&lf[44],19,"\003syshash-table-set!");
lf[45]=C_h_intern(&lf[45],18,"\003syshash-table-ref");
lf[46]=C_h_intern(&lf[46],18,"\010compilersymbolify");
lf[47]=C_h_intern(&lf[47],20,"node-parameters-set!");
lf[48]=C_h_intern(&lf[48],15,"node-class-set!");
lf[49]=C_h_intern(&lf[49],3,"let");
lf[50]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\003let\376\003\000\000\002\376\001\000\000\020\004corelet_unboxed\376\377\016");
lf[51]=C_h_intern(&lf[51],3,"any");
lf[52]=C_h_intern(&lf[52],14,"\004coreundefined");
lf[53]=C_h_intern(&lf[53],11,"\004corelambda");
lf[54]=C_h_intern(&lf[54],18,"\004coredirect_lambda");
lf[55]=C_h_intern(&lf[55],4,"cons");
lf[56]=C_h_intern(&lf[56],7,"\003sysmap");
lf[57]=C_h_intern(&lf[57],30,"\010compilerdecompose-lambda-list");
lf[58]=C_h_intern(&lf[58],13,"\004corevariable");
lf[59]=C_h_intern(&lf[59],6,"unsafe");
lf[60]=C_h_intern(&lf[60],7,"\003sysget");
lf[61]=C_h_intern(&lf[61],19,"\010compilerunboxed-op");
lf[62]=C_h_intern(&lf[62],4,"set!");
lf[63]=C_h_intern(&lf[63],17,"\004coreunboxed_set!");
lf[64]=C_h_intern(&lf[64],5,"quote");
lf[65]=C_h_intern(&lf[65],2,"if");
lf[66]=C_h_intern(&lf[66],9,"\004corecond");
lf[67]=C_h_intern(&lf[67],11,"\004coreswitch");
lf[68]=C_h_intern(&lf[68],4,"none");
lf[69]=C_h_intern(&lf[69],9,"\004corecall");
lf[70]=C_h_intern(&lf[70],16,"\004coredirect_call");
lf[71]=C_h_intern(&lf[71],12,"\003sysfor-each");
lf[72]=C_h_intern(&lf[72],9,"\004coreproc");
lf[73]=C_h_intern(&lf[73],15,"\004coreglobal-ref");
lf[74]=C_h_intern(&lf[74],15,"\004coreinline_ref");
lf[75]=C_h_intern(&lf[75],19,"\004coreinline_loc_ref");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[77]=C_h_intern(&lf[77],23,"\003syshash-table-for-each");
lf[78]=C_h_intern(&lf[78],18,"\010compilerdebugging");
lf[79]=C_h_intern(&lf[79],1,"x");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\021unboxed rewrites:");
lf[81]=C_h_intern(&lf[81],11,"make-vector");
lf[82]=C_h_intern(&lf[82],28,"\010compilerregister-unboxed-op");
lf[83]=C_h_intern(&lf[83],8,"\003sysput!");
lf[84]=C_h_intern(&lf[84],24,"C_flonum_less_or_equal_p");
lf[85]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\035C_ub_i_flonum_less_or_equal_p");
lf[87]=C_h_intern(&lf[87],27,"C_flonum_greater_or_equal_p");
lf[88]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000 C_ub_i_flonum_greater_or_equal_p");
lf[90]=C_h_intern(&lf[90],14,"C_flonum_lessp");
lf[91]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\023C_ub_i_flonum_lessp");
lf[93]=C_h_intern(&lf[93],17,"C_flonum_greaterp");
lf[94]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_flonum_greaterp");
lf[96]=C_h_intern(&lf[96],15,"C_flonum_equalp");
lf[97]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\024C_ub_i_flonum_equalp");
lf[99]=C_h_intern(&lf[99],16,"C_u_i_fpintegerp");
lf[100]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\021C_ub_i_fpintegerp");
lf[102]=C_h_intern(&lf[102],19,"C_a_i_f64vector_ref");
lf[103]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\024C_ub_i_f64vector_ref");
lf[105]=C_h_intern(&lf[105],19,"C_a_i_f32vector_ref");
lf[106]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\006fixnum\376\377\016");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\024C_ub_i_f32vector_ref");
lf[108]=C_h_intern(&lf[108],19,"C_u_i_f64vector_set");
lf[109]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\024C_ub_i_f64vector_set");
lf[111]=C_h_intern(&lf[111],19,"C_u_i_f32vector_set");
lf[112]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\024C_ub_i_f32vector_set");
lf[114]=C_h_intern(&lf[114],18,"C_a_i_flonum_round");
lf[115]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\007C_round");
lf[117]=C_h_intern(&lf[117],18,"C_a_i_flonum_floor");
lf[118]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\007C_floor");
lf[120]=C_h_intern(&lf[120],20,"C_a_i_flonum_ceiling");
lf[121]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\006C_ceil");
lf[123]=C_h_intern(&lf[123],21,"C_a_i_flonum_truncate");
lf[124]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\007C_trunc");
lf[126]=C_h_intern(&lf[126],16,"C_a_i_flonum_abs");
lf[127]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\006C_fabs");
lf[129]=C_h_intern(&lf[129],17,"C_a_i_flonum_sqrt");
lf[130]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[131]=C_decode_literal(C_heaptop,"\376B\000\000\006C_sqrt");
lf[132]=C_h_intern(&lf[132],16,"C_a_i_flonum_log");
lf[133]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\005C_log");
lf[135]=C_h_intern(&lf[135],17,"C_a_i_flonum_expt");
lf[136]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\005C_pow");
lf[138]=C_h_intern(&lf[138],16,"C_a_i_flonum_exp");
lf[139]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\005C_exp");
lf[141]=C_h_intern(&lf[141],18,"C_a_i_flonum_atan2");
lf[142]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\007C_atan2");
lf[144]=C_h_intern(&lf[144],17,"C_a_i_flonum_atan");
lf[145]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\006C_atan");
lf[147]=C_h_intern(&lf[147],17,"C_a_i_flonum_acos");
lf[148]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\006C_acos");
lf[150]=C_h_intern(&lf[150],17,"C_a_i_flonum_asin");
lf[151]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\006C_asin");
lf[153]=C_h_intern(&lf[153],16,"C_a_i_flonum_tan");
lf[154]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\005C_tab");
lf[156]=C_h_intern(&lf[156],16,"C_a_i_flonum_cos");
lf[157]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\005C_cos");
lf[159]=C_h_intern(&lf[159],16,"C_a_i_flonum_sin");
lf[160]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\005C_sin");
lf[162]=C_h_intern(&lf[162],21,"C_a_i_flonum_quotient");
lf[163]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\026C_ub_i_flonum_quotient");
lf[165]=C_h_intern(&lf[165],18,"C_a_i_flonum_times");
lf[166]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\023C_ub_i_flonum_times");
lf[168]=C_h_intern(&lf[168],23,"C_a_i_flonum_difference");
lf[169]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\030C_ub_i_flonum_difference");
lf[171]=C_h_intern(&lf[171],17,"C_a_i_flonum_plus");
lf[172]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006flonum\376\003\000\000\002\376\001\000\000\006flonum\376\377\016");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\022C_ub_i_flonum_plus");
C_register_lf2(lf,174,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_918,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k916 */
static void C_ccall f_918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_918,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_921,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k919 in k916 */
static void C_ccall f_921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_921,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! d ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_923,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate((C_word*)lf[6]+1 /* (set! perform-unboxing! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_941,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[82]+1 /* (set! register-unboxed-op ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2725,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2740,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t5,C_SCHEME_FALSE,lf[171],lf[172],lf[17],lf[173]);}

/* k2738 in k919 in k916 */
static void C_ccall f_2740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2743,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[168],lf[169],lf[17],lf[170]);}

/* k2741 in k2738 in k919 in k916 */
static void C_ccall f_2743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2743,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2746,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[165],lf[166],lf[17],lf[167]);}

/* k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2746,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2749,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[162],lf[163],lf[17],lf[164]);}

/* k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2749,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2752,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[159],lf[160],lf[17],lf[161]);}

/* k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2752,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2755,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[156],lf[157],lf[17],lf[158]);}

/* k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2755,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2758,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[153],lf[154],lf[17],lf[155]);}

/* k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2758,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2761,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[150],lf[151],lf[17],lf[152]);}

/* k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2761,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2764,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[147],lf[148],lf[17],lf[149]);}

/* k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2764,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2767,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[144],lf[145],lf[17],lf[146]);}

/* k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2770,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[141],lf[142],lf[17],lf[143]);}

/* k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2770,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2773,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[138],lf[139],lf[17],lf[140]);}

/* k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2773,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2776,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[135],lf[136],lf[17],lf[137]);}

/* k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2776,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2779,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[132],lf[133],lf[17],lf[134]);}

/* k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2779,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2782,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[129],lf[130],lf[17],lf[131]);}

/* k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2785,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[126],lf[127],lf[17],lf[128]);}

/* k2783 in k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2785,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2788,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[123],lf[124],lf[17],lf[125]);}

/* k2786 in k2783 in k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2788,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2791,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[120],lf[121],lf[17],lf[122]);}

/* k2789 in k2786 in k2783 in k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2791,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2794,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[117],lf[118],lf[17],lf[119]);}

/* k2792 in k2789 in k2786 in k2783 in k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2794,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2797,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[114],lf[115],lf[17],lf[116]);}

/* k2795 in k2792 in k2789 in k2786 in k2783 in k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2797,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2800,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[111],lf[112],lf[24],lf[113]);}

/* k2798 in k2795 in k2792 in k2789 in k2786 in k2783 in k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2803,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[108],lf[109],lf[24],lf[110]);}

/* k2801 in k2798 in k2795 in k2792 in k2789 in k2786 in k2783 in k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2806,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[105],lf[106],lf[17],lf[107]);}

/* k2804 in k2801 in k2798 in k2795 in k2792 in k2789 in k2786 in k2783 in k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2806,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2809,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[102],lf[103],lf[17],lf[104]);}

/* k2807 in k2804 in k2801 in k2798 in k2795 in k2792 in k2789 in k2786 in k2783 in k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2809,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2812,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[99],lf[100],lf[28],lf[101]);}

/* k2810 in k2807 in k2804 in k2801 in k2798 in k2795 in k2792 in k2789 in k2786 in k2783 in k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2815,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[96],lf[97],lf[28],lf[98]);}

/* k2813 in k2810 in k2807 in k2804 in k2801 in k2798 in k2795 in k2792 in k2789 in k2786 in k2783 in k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2815,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2818,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[93],lf[94],lf[28],lf[95]);}

/* k2816 in k2813 in k2810 in k2807 in k2804 in k2801 in k2798 in k2795 in k2792 in k2789 in k2786 in k2783 in k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2818,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2821,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[90],lf[91],lf[28],lf[92]);}

/* k2819 in k2816 in k2813 in k2810 in k2807 in k2804 in k2801 in k2798 in k2795 in k2792 in k2789 in k2786 in k2783 in k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2821,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2824,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[87],lf[88],lf[28],lf[89]);}

/* k2822 in k2819 in k2816 in k2813 in k2810 in k2807 in k2804 in k2801 in k2798 in k2795 in k2792 in k2789 in k2786 in k2783 in k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2824,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2827,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##compiler#register-unboxed-op */
((C_proc7)C_retrieve_proc(*((C_word*)lf[82]+1)))(7,*((C_word*)lf[82]+1),t2,C_SCHEME_FALSE,lf[84],lf[85],lf[28],lf[86]);}

/* k2825 in k2822 in k2819 in k2816 in k2813 in k2810 in k2807 in k2804 in k2801 in k2798 in k2795 in k2792 in k2789 in k2786 in k2783 in k2780 in k2777 in k2774 in k2771 in k2768 in k2765 in k2762 in k2759 in k2756 in k2753 in k2750 in k2747 in k2744 in k2741 in k2738 in k919 in k916 */
static void C_ccall f_2827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* ##compiler#register-unboxed-op in k919 in k916 */
static void C_ccall f_2725(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_2725,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2733,a[2]=t1,a[3]=t2,a[4]=t5,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* unboxing.scm: 397  symbolify */
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t7,t3);}

/* k2731 in ##compiler#register-unboxed-op in k919 in k916 */
static void C_ccall f_2733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2733,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
/* unboxing.scm: 397  ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[83]))(5,*((C_word*)lf[83]+1),((C_word*)t0)[2],t1,lf[61],t2);}

/* ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_941(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_941,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_945,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* unboxing.scm: 42   make-vector */
((C_proc4)C_retrieve_proc(*((C_word*)lf[81]+1)))(4,*((C_word*)lf[81]+1),t3,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_945(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_945,2,t0,t1);}
t2=C_SCHEME_FALSE;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_947,a[2]=t5,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2693,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm: 376  walk-lambda */
t8=((C_word*)t5)[1];
f_947(t8,t7,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);}

/* k2691 in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2693,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2699,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* unboxing.scm: 378  debugging */
((C_proc4)C_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),t2,lf[79],lf[80]);}
else{
t3=t2;
f_2699(2,t3,C_SCHEME_FALSE);}}

/* k2697 in k2691 in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2699,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2704,tmp=(C_word)a,a+=2,tmp);
/* unboxing.scm: 379  ##sys#hash-table-for-each */
((C_proc4)C_retrieve_symbol_proc(lf[77]))(4,*((C_word*)lf[77]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* a2703 in k2697 in k2691 in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2704(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2704,4,t0,t1,t2,t3);}
t4=*((C_word*)lf[1]+1);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2708,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t5,lf[76],t4);}

/* k2706 in a2703 in k2697 in k2691 in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k2709 in k2706 in a2703 in k2697 in k2691 in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(9),((C_word*)t0)[3]);}

/* k2712 in k2709 in k2706 in a2703 in k2697 in k2691 in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2714,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2717,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k2715 in k2712 in k2709 in k2706 in a2703 in k2697 in k2691 in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_947(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[92],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_947,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_UNDEFINED;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_SCHEME_UNDEFINED;
t30=(*a=C_VECTOR_TYPE|1,a[1]=t29,tmp=(C_word)a,a+=2,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_950,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t34=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_971,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t35=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1030,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t36=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1042,tmp=(C_word)a,a+=2,tmp));
t37=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1051,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t38=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1073,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t39=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1079,a[2]=t16,tmp=(C_word)a,a+=3,tmp));
t40=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1147,a[2]=((C_word*)t0)[3],a[3]=t26,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t41=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1563,a[2]=t18,a[3]=t26,tmp=(C_word)a,a+=4,tmp));
t42=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1595,a[2]=t26,tmp=(C_word)a,a+=3,tmp));
t43=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1721,a[2]=t28,a[3]=t26,tmp=(C_word)a,a+=4,tmp));
t44=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1847,a[2]=t30,tmp=(C_word)a,a+=3,tmp));
t45=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2017,a[2]=t30,a[3]=t28,a[4]=t20,a[5]=t16,a[6]=t26,a[7]=t24,a[8]=t32,a[9]=t14,a[10]=t12,a[11]=t10,a[12]=t22,a[13]=t8,a[14]=t18,a[15]=t4,a[16]=((C_word*)t0)[2],tmp=(C_word)a,a+=17,tmp));
t46=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2687,a[2]=t3,a[3]=t1,a[4]=t32,tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm: 373  walk */
t47=((C_word*)t32)[1];
f_2017(t47,t46,t3,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* k2685 in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm: 374  walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2017(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_2017(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2017,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=t2;
t7=(C_word)C_slot(t6,C_fix(3));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(2));
t10=t2;
t11=(C_word)C_slot(t10,C_fix(1));
t12=(C_word)C_eqp(t11,lf[52]);
t13=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2051,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t3,a[14]=((C_word*)t0)[13],a[15]=t4,a[16]=((C_word*)t0)[14],a[17]=t2,a[18]=((C_word*)t0)[15],a[19]=((C_word*)t0)[16],a[20]=t7,a[21]=t5,a[22]=t9,a[23]=t11,a[24]=t1,tmp=(C_word)a,a+=25,tmp);
if(C_truep(t12)){
t14=t13;
f_2051(t14,t12);}
else{
t14=(C_word)C_eqp(t11,lf[72]);
if(C_truep(t14)){
t15=t13;
f_2051(t15,t14);}
else{
t15=(C_word)C_eqp(t11,lf[73]);
if(C_truep(t15)){
t16=t13;
f_2051(t16,t15);}
else{
t16=(C_word)C_eqp(t11,lf[74]);
t17=t13;
f_2051(t17,(C_truep(t16)?t16:(C_word)C_eqp(t11,lf[75])));}}}}

/* k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_2051(C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2051,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[24];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[23],lf[53]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[23],lf[54]));
if(C_truep(t3)){
t4=(C_word)C_i_caddr(((C_word*)t0)[22]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2069,a[2]=((C_word*)t0)[19],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[22],a[5]=((C_word*)t0)[21],tmp=(C_word)a,a+=6,tmp);
/* unboxing.scm: 261  decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[57]))(4,*((C_word*)lf[57]+1),((C_word*)t0)[24],t4,t5);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[23],lf[58]);
if(C_truep(t4)){
t5=(C_word)C_i_car(((C_word*)t0)[22]);
t6=(C_word)C_i_assq(t5,((C_word*)((C_word*)t0)[18])[1]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2109,a[2]=t6,a[3]=((C_word*)t0)[24],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[21])){
t8=(C_truep(t6)?(C_word)C_i_cdr(t6):C_SCHEME_FALSE);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2135,a[2]=((C_word*)t0)[17],a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm: 277  alias */
t10=((C_word*)((C_word*)t0)[16])[1];
f_1073(t10,t9,t5);}
else{
t9=((C_word*)t0)[24];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t6);}}
else{
if(C_truep(t6)){
t8=((C_word*)t0)[15];
if(C_truep(t8)){
t9=((C_word*)t0)[24];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t6);}
else{
/* unboxing.scm: 280  boxed! */
t9=((C_word*)((C_word*)t0)[14])[1];
f_950(t9,t7,t5);}}
else{
t8=((C_word*)t0)[24];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t6);}}}
else{
t5=(C_word)C_eqp(((C_word*)t0)[23],lf[27]);
t6=(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[23],lf[20]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2169,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[20],a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[18],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[24],a[12]=((C_word*)t0)[21],tmp=(C_word)a,a+=13,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2312,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(C_word)C_i_car(((C_word*)t0)[22]);
/* unboxing.scm: 284  symbolify */
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t8,t9);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[23],lf[49]);
if(C_truep(t7)){
t8=(C_word)C_i_car(((C_word*)t0)[22]);
t9=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2328,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[22],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[20],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[17],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[18],a[12]=t8,a[13]=((C_word*)t0)[21],a[14]=((C_word*)t0)[24],tmp=(C_word)a,a+=15,tmp);
t10=(C_word)C_i_car(((C_word*)t0)[20]);
/* unboxing.scm: 315  walk */
t11=((C_word*)((C_word*)t0)[8])[1];
f_2017(t11,t9,t10,t8,C_SCHEME_TRUE,((C_word*)t0)[21]);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[23],lf[62]);
if(C_truep(t8)){
t9=(C_word)C_i_car(((C_word*)t0)[22]);
t10=(C_word)C_i_assq(t9,((C_word*)((C_word*)t0)[18])[1]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2405,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[11],a[5]=t9,a[6]=((C_word*)t0)[16],a[7]=((C_word*)t0)[17],a[8]=((C_word*)t0)[20],a[9]=t10,a[10]=((C_word*)t0)[21],a[11]=((C_word*)t0)[24],tmp=(C_word)a,a+=12,tmp);
t12=(C_word)C_i_car(((C_word*)t0)[20]);
if(C_truep(t10)){
t13=(C_word)C_i_cdr(t10);
/* unboxing.scm: 329  walk */
t14=((C_word*)((C_word*)t0)[8])[1];
f_2017(t14,t11,t12,t9,t13,((C_word*)t0)[21]);}
else{
/* unboxing.scm: 329  walk */
t13=((C_word*)((C_word*)t0)[8])[1];
f_2017(t13,t11,t12,t9,C_SCHEME_FALSE,((C_word*)t0)[21]);}}
else{
t9=(C_word)C_eqp(((C_word*)t0)[23],lf[64]);
if(C_truep(t9)){
t10=((C_word*)t0)[24];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[23],lf[65]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(((C_word*)t0)[23],lf[66]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2492,a[2]=((C_word*)t0)[17],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[21],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[20],a[9]=((C_word*)t0)[24],a[10]=((C_word*)t0)[4],tmp=(C_word)a,a+=11,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2516,a[2]=t12,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t14=(C_word)C_i_car(((C_word*)t0)[20]);
/* unboxing.scm: 346  walk */
t15=((C_word*)((C_word*)t0)[8])[1];
f_2017(t15,t13,t14,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[21]);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[23],lf[67]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2529,a[2]=((C_word*)t0)[24],a[3]=((C_word*)t0)[21],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[20],tmp=(C_word)a,a+=9,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2596,a[2]=t13,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t15=(C_word)C_i_car(((C_word*)t0)[20]);
/* unboxing.scm: 353  walk */
t16=((C_word*)((C_word*)t0)[8])[1];
f_2017(t16,t14,t15,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[21]);}
else{
t13=(C_word)C_eqp(((C_word*)t0)[23],lf[69]);
t14=(C_truep(t13)?t13:(C_word)C_eqp(((C_word*)t0)[23],lf[70]));
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2612,a[2]=((C_word*)t0)[17],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[21],a[5]=((C_word*)t0)[24],tmp=(C_word)a,a+=6,tmp);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2620,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[21],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t17=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t15,t16,((C_word*)t0)[20]);}
else{
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2636,a[2]=((C_word*)t0)[24],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2638,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[21],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t17=*((C_word*)lf[71]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t15,t16,((C_word*)t0)[20]);}}}}}}}}}}}

/* a2637 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2638(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2638,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2644,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2651,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* g700701 */
t5=t3;
f_2644(t5,t4,t2);}

/* k2649 in a2637 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* invalidate83 */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1051(t2,((C_word*)t0)[2],t1);}

/* g700 in a2637 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_2644(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2644,NULL,3,t0,t1,t2);}
/* g709710 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2017(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k2634 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* a2619 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2620(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2620,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2633,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* g676677 */
t5=t3;
f_2626(t5,t4,t2);}

/* k2631 in a2619 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* invalidate83 */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1051(t2,((C_word*)t0)[2],t1);}

/* g676 in a2619 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_2626(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2626,NULL,3,t0,t1,t2);}
/* g685686 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2017(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k2610 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2612,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2615,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[4])){
/* unboxing.scm: 365  straighten-call! */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1847(t3,t2,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2613 in k2610 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k2594 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm: 353  invalidate */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1051(t2,((C_word*)t0)[2],t1);}

/* k2527 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2529,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[8]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2538,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_2538(t6,((C_word*)t0)[2],t2,lf[68]);}

/* doloop654 in k2527 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_2538(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2538,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2552,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_car(t2);
/* unboxing.scm: 360  walk */
t7=((C_word*)((C_word*)t0)[6])[1];
f_2017(t7,t5,t6,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t5=(C_word)C_i_cddr(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2567,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_eqp(t3,lf[68]);
if(C_truep(t7)){
t8=(C_word)C_i_cadr(t2);
/* unboxing.scm: 357  walk */
t9=((C_word*)((C_word*)t0)[6])[1];
f_2017(t9,t6,t8,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2584,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_i_cadr(t2);
/* unboxing.scm: 358  walk */
t10=((C_word*)((C_word*)t0)[6])[1];
f_2017(t10,t8,t9,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}}}

/* k2582 in doloop654 in k2527 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm: 358  merge */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1079(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2565 in doloop654 in k2527 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[4])[1];
f_2538(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2550 in doloop654 in k2527 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm: 360  merge */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1079(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2514 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm: 346  invalidate */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1051(t2,((C_word*)t0)[2],t1);}

/* k2490 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2492,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2495,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* unboxing.scm: 347  straighten-conditional! */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1721(t3,t2,((C_word*)t0)[2]);}

/* k2493 in k2490 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2495,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[6]);
/* unboxing.scm: 348  walk */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2017(t4,t2,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2496 in k2493 in k2490 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2501,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[6]);
/* unboxing.scm: 349  walk */
t4=((C_word*)((C_word*)t0)[5])[1];
f_2017(t4,t2,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2499 in k2496 in k2493 in k2490 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm: 350  merge */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1079(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2403 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2405(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2405,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2408,a[2]=((C_word*)t0)[11],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[10])){
t3=(C_truep(((C_word*)t0)[9])?(C_word)C_i_cdr(((C_word*)t0)[9]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2434,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
/* unboxing.scm: 334  alias */
t5=((C_word*)((C_word*)t0)[6])[1];
f_1073(t5,t4,((C_word*)t0)[5]);}
else{
t4=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t3=(C_truep(t1)?(C_word)C_i_cdr(t1):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=(C_word)C_i_cdr(t1);
/* unboxing.scm: 337  unboxed! */
t5=((C_word*)((C_word*)t0)[4])[1];
f_971(t5,t2,((C_word*)t0)[5],t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2457,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm: 339  boxed! */
t5=((C_word*)((C_word*)t0)[2])[1];
f_950(t5,t4,((C_word*)t0)[5]);}}}

/* k2455 in k2403 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm: 340  invalidate */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1051(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2432 in k2403 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2434,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
t4=(C_word)C_a_i_record(&a,4,lf[14],lf[63],t3,((C_word*)t0)[4]);
/* unboxing.scm: 332  copy-node! */
((C_proc4)C_retrieve_symbol_proc(lf[13]))(4,*((C_word*)lf[13]+1),((C_word*)t0)[3],t4,((C_word*)t0)[2]);}

/* k2406 in k2403 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k2326 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2328,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2331,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],tmp=(C_word)a,a+=13,tmp);
t3=((C_word*)t0)[13];
t4=(C_truep(t3)?C_SCHEME_FALSE:(C_truep(t1)?(C_word)C_i_cdr(t1):C_SCHEME_FALSE));
if(C_truep(t4)){
t5=(C_word)C_i_car(((C_word*)t0)[3]);
t6=(C_word)C_i_cdr(t1);
/* unboxing.scm: 317  unboxed! */
t7=((C_word*)((C_word*)t0)[2])[1];
f_971(t7,t2,t5,t6);}
else{
t5=t2;
f_2331(2,t5,C_SCHEME_UNDEFINED);}}

/* k2329 in k2326 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2331,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2334,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* unboxing.scm: 318  walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2017(t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[11]);}

/* k2332 in k2329 in k2326 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2334,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2337,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[7])){
t3=(C_word)C_i_assq(((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1]);
t4=(C_truep(t3)?(C_word)C_i_cdr(t3):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_i_cdr(t3);
/* unboxing.scm: 322  rebind-unboxed! */
t6=((C_word*)((C_word*)t0)[4])[1];
f_1563(t6,t2,((C_word*)t0)[3],t5);}
else{
/* unboxing.scm: 323  straighten-binding! */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1595(t5,t2,((C_word*)t0)[3]);}}
else{
t3=t1;
t4=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2335 in k2332 in k2329 in k2326 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2310 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm: 284  ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[60]))(4,*((C_word*)lf[60]+1),((C_word*)t0)[2],t1,lf[61]);}

/* k2167 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2172,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2304,a[2]=((C_word*)t0)[12],a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* map */
t4=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[6]);}

/* a2303 in k2167 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2304(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2304,3,t0,t1,t2);}
/* g540541 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2017(t3,t1,t2,C_SCHEME_FALSE,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2170 in k2167 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2172,2,t0,t1);}
t2=((C_word*)t0)[12];
if(C_truep(t2)){
t3=(C_word)C_i_not(((C_word*)t0)[11]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2187,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t3)){
t5=t4;
f_2187(2,t5,t3);}
else{
if(C_truep(((C_word*)t0)[9])){
t5=f_1030(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[9]);
if(C_truep(t5)){
t6=t4;
f_2187(2,t6,t5);}
else{
/* unboxing.scm: 289  any */
((C_proc4)C_retrieve_symbol_proc(lf[51]))(4,*((C_word*)lf[51]+1),t4,((C_word*)((C_word*)t0)[2])[1],t1);}}
else{
/* unboxing.scm: 289  any */
((C_proc4)C_retrieve_symbol_proc(lf[51]))(4,*((C_word*)lf[51]+1),t4,((C_word*)((C_word*)t0)[2])[1],t1);}}}
else{
t3=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k2185 in k2170 in k2167 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2187(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2187,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[11]);
t3=(C_word)C_i_cadr(((C_word*)t0)[11]);
t4=(C_word)C_i_caddr(((C_word*)t0)[11]);
t5=(C_word)C_i_cadddr(((C_word*)t0)[11]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2202,a[2]=t4,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
t7=C_retrieve(lf[59]);
t8=(C_truep(t7)?(C_truep(t7)?((C_word*)t0)[9]:C_SCHEME_FALSE):(C_truep(t5)?((C_word*)t0)[9]:C_SCHEME_FALSE));
if(C_truep(t8)){
if(C_truep(((C_word*)t0)[8])){
t9=(C_word)C_i_assq(((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1]);
/* unboxing.scm: 296  rewrite! */
t10=((C_word*)((C_word*)t0)[6])[1];
f_1147(t10,t6,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],t3,t4,t9);}
else{
/* unboxing.scm: 296  rewrite! */
t9=((C_word*)((C_word*)t0)[6])[1];
f_1147(t9,t6,((C_word*)t0)[5],t2,((C_word*)t0)[4],((C_word*)t0)[3],t3,t4,C_SCHEME_FALSE);}}
else{
t9=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,t4));}}
else{
t2=(C_word)C_i_caddr(((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2227,a[2]=t2,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[9])){
t4=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,t2));}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2233,a[2]=((C_word*)t0)[10],a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2241,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2241(t8,t4,((C_word*)t0)[3]);}}}

/* loop581 in k2185 in k2170 in k2167 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_2241(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2241,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2249,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2279,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g588589 */
t6=t3;
f_2249(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2277 in loop581 in k2185 in k2170 in k2167 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2241(t3,((C_word*)t0)[2],t2);}

/* g588 in loop581 in k2185 in k2170 in k2167 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_2249(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2249,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2256,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=(C_word)C_i_car(t2);
t5=t3;
f_2256(t5,(C_truep(t4)?(C_word)C_i_cdr(t2):C_SCHEME_FALSE));}
else{
t4=t3;
f_2256(t4,C_SCHEME_FALSE);}}

/* k2254 in g588 in loop581 in k2185 in k2170 in k2167 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_2256(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* unboxing.scm: 307  unboxed! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_971(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k2231 in k2185 in k2170 in k2167 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2233,2,t0,t1);}
if(C_truep(((C_word*)t0)[6])){
/* unboxing.scm: 310  unboxed! */
t2=((C_word*)((C_word*)t0)[5])[1];
f_971(t2,((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[3]));}}

/* k2225 in k2185 in k2170 in k2167 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2227,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[2]));}

/* k2200 in k2185 in k2170 in k2167 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2202,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,((C_word*)t0)[2]));}

/* k2133 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2135,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
t4=(C_word)C_a_i_record(&a,4,lf[14],lf[19],t3,C_SCHEME_END_OF_LIST);
/* unboxing.scm: 276  copy-node! */
((C_proc4)C_retrieve_symbol_proc(lf[13]))(4,*((C_word*)lf[13]+1),((C_word*)t0)[3],t4,((C_word*)t0)[2]);}

/* k2107 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a2068 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2069(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2069,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2073,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[5])){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_i_car(((C_word*)t0)[4]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2084,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2090,tmp=(C_word)a,a+=2,tmp);
/* map */
t9=*((C_word*)lf[56]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,t2);}}

/* a2089 in a2068 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2090(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2090,3,t0,t1,t2);}
t3=*((C_word*)lf[55]+1);
/* g491492 */
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,C_SCHEME_FALSE);}

/* k2082 in a2068 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[4]);
/* unboxing.scm: 265  walk-lambda */
t3=((C_word*)((C_word*)t0)[3])[1];
f_947(t3,((C_word*)t0)[2],t1,t2);}

/* k2071 in a2068 in k2049 in walk in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* straighten-call! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_1847(C_word t0,C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1847,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(3));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(2));
t9=(C_word)C_i_car(t6);
t10=(C_word)C_i_cdr(t6);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1881,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1884,a[2]=t1,a[3]=t10,a[4]=((C_word*)t0)[2],a[5]=t8,a[6]=t4,a[7]=t9,a[8]=t2,a[9]=t11,tmp=(C_word)a,a+=10,tmp);
t13=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2002,tmp=(C_word)a,a+=2,tmp);
/* unboxing.scm: 226  any */
((C_proc4)C_retrieve_symbol_proc(lf[51]))(4,*((C_word*)lf[51]+1),t12,t13,t10);}

/* a2001 in straighten-call! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2002,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_memq(t3,lf[50]));}

/* k1882 in straighten-call! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1884,2,t0,t1);}
if(C_truep(t1)){
t2=C_retrieve(lf[12]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1894,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1896,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1896(t7,t3,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[8]);}}

/* loop in k1882 in straighten-call! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_1896(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1896,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1923,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* unboxing.scm: 233  reverse */
((C_proc3)C_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),t4,t3);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_slot(t4,C_fix(1));
t6=(C_word)C_slot(t4,C_fix(3));
if(C_truep((C_truep((C_word)C_eqp(t5,lf[49]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t5,lf[16]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t7=(C_word)C_slot(t4,C_fix(2));
t8=(C_word)C_i_car(t6);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1977,a[2]=t7,a[3]=t5,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t10=(C_word)C_i_cdr(t2);
t11=(C_word)C_i_cadr(t6);
t12=(C_word)C_a_i_cons(&a,2,t11,t3);
/* unboxing.scm: 242  loop */
t17=t9;
t18=t10;
t19=t12;
t1=t17;
t2=t18;
t3=t19;
goto loop;}
else{
t7=(C_word)C_i_cdr(t2);
t8=(C_word)C_a_i_cons(&a,2,t4,t3);
/* unboxing.scm: 243  loop */
t17=t1;
t18=t7;
t19=t8;
t1=t17;
t2=t18;
t3=t19;
goto loop;}}}

/* k1975 in loop in k1882 in straighten-call! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1977,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t3=((C_word*)t0)[4];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[14],((C_word*)t0)[3],((C_word*)t0)[2],t2));}

/* k1921 in loop in k1882 in straighten-call! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1923,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=(C_word)C_a_i_record(&a,4,lf[14],((C_word*)t0)[5],((C_word*)t0)[4],t2);
/* unboxing.scm: 232  straighten-call! */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1847(t4,((C_word*)t0)[2],t3);}

/* k1892 in k1882 in straighten-call! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm: 229  copy-node! */
((C_proc4)C_retrieve_symbol_proc(lf[13]))(4,*((C_word*)lf[13]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1879 in straighten-call! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* straighten-conditional! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_1721(C_word t0,C_word t1,C_word t2){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1721,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_car(t4);
t6=(C_word)C_slot(t5,C_fix(1));
if(C_truep((C_truep((C_word)C_eqp(t6,lf[49]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t6,lf[16]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t7=C_retrieve(lf[12]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1753,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_slot(t5,C_fix(2));
t10=(C_word)C_slot(t5,C_fix(3));
t11=(C_word)C_i_car(t10);
t12=t2;
t13=(C_word)C_slot(t12,C_fix(1));
t14=t2;
t15=(C_word)C_slot(t14,C_fix(2));
t16=(C_word)C_i_cadr(t10);
t17=(C_word)C_i_cdr(t4);
t18=(C_word)C_a_i_cons(&a,2,t16,t17);
t19=(C_word)C_a_i_record(&a,4,lf[14],t13,t15,t18);
t20=(C_word)C_a_i_list(&a,2,t11,t19);
t21=(C_word)C_a_i_record(&a,4,lf[14],t6,t9,t20);
/* unboxing.scm: 203  copy-node! */
((C_proc4)C_retrieve_symbol_proc(lf[13]))(4,*((C_word*)lf[13]+1),t8,t21,t2);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k1751 in straighten-conditional! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1756,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_cadr(t4);
/* unboxing.scm: 214  straighten-conditional! */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1721(t6,t2,t5);}

/* k1754 in k1751 in straighten-conditional! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm: 216  straighten-binding! */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1595(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* straighten-binding! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_1595(C_word t0,C_word t1,C_word t2){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1595,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_car(t4);
t6=(C_word)C_slot(t5,C_fix(1));
if(C_truep((C_truep((C_word)C_eqp(t6,lf[49]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t6,lf[16]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t7=C_retrieve(lf[12]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1627,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_slot(t5,C_fix(2));
t10=(C_word)C_slot(t5,C_fix(3));
t11=(C_word)C_i_car(t10);
t12=t2;
t13=(C_word)C_slot(t12,C_fix(1));
t14=t2;
t15=(C_word)C_slot(t14,C_fix(2));
t16=(C_word)C_i_cadr(t10);
t17=(C_word)C_i_cadr(t4);
t18=(C_word)C_a_i_list(&a,2,t16,t17);
t19=(C_word)C_a_i_record(&a,4,lf[14],t13,t15,t18);
t20=(C_word)C_a_i_list(&a,2,t11,t19);
t21=(C_word)C_a_i_record(&a,4,lf[14],t6,t9,t20);
/* unboxing.scm: 179  copy-node! */
((C_proc4)C_retrieve_symbol_proc(lf[13]))(4,*((C_word*)lf[13]+1),t8,t21,t2);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k1625 in straighten-binding! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1627,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm: 192  straighten-binding! */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1595(t3,t2,((C_word*)t0)[4]);}

/* k1628 in k1625 in straighten-binding! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=((C_word*)t0)[4];
t3=(C_word)C_slot(t2,C_fix(3));
t4=(C_word)C_i_cadr(t3);
/* unboxing.scm: 193  straighten-binding! */
t5=((C_word*)((C_word*)t0)[3])[1];
f_1595(t5,((C_word*)t0)[2],t4);}

/* rebind-unboxed! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_1563(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1563,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1567,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=(C_word)C_i_car(t6);
/* unboxing.scm: 166  alias */
t8=((C_word*)((C_word*)t0)[2])[1];
f_1073(t8,t4,t7);}

/* k1565 in rebind-unboxed! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1567,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1570,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* unboxing.scm: 167  node-class-set! */
((C_proc4)C_retrieve_symbol_proc(lf[48]))(4,*((C_word*)lf[48]+1),t2,((C_word*)t0)[3],lf[16]);}

/* k1568 in k1565 in rebind-unboxed! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1570,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1573,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
/* unboxing.scm: 168  node-parameters-set! */
((C_proc4)C_retrieve_symbol_proc(lf[47]))(4,*((C_word*)lf[47]+1),t2,((C_word*)t0)[4],t3);}

/* k1571 in k1568 in k1565 in rebind-unboxed! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm: 169  straighten-binding! */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1595(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* rewrite! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_1147(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1147,NULL,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=C_retrieve(lf[12]);
t10=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1154,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t4,a[5]=t5,a[6]=t7,a[7]=t8,a[8]=t3,a[9]=t2,a[10]=t1,a[11]=((C_word*)t0)[3],a[12]=((C_word*)t0)[4],tmp=(C_word)a,a+=13,tmp);
/* unboxing.scm: 96   symbolify */
((C_proc3)C_retrieve_symbol_proc(lf[46]))(3,*((C_word*)lf[46]+1),t10,t3);}

/* k1152 in rewrite! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1154,2,t0,t1);}
t2=C_set_block_item(((C_word*)t0)[12],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1158,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1558,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm: 99   ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[45]))(4,*((C_word*)lf[45]+1),t4,((C_word*)t0)[2],t1);}

/* k1556 in k1152 in rewrite! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=(C_word)C_fixnum_increase(t2);
/* unboxing.scm: 98   ##sys#hash-table-set! */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t3);}
else{
/* unboxing.scm: 98   ##sys#hash-table-set! */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_fix(1));}}

/* k1156 in k1152 in rewrite! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1158,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1161,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1168,a[2]=((C_word*)t0)[8],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1170,a[2]=t5,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1170(t7,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* loop in k1156 in k1152 in rewrite! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_1170(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1170,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_i_nullp(t2))){
t6=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1383,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* unboxing.scm: 105  reverse */
((C_proc3)C_retrieve_proc(*((C_word*)lf[35]+1)))(3,*((C_word*)lf[35]+1),t7,t5);}
else{
t6=(C_word)C_i_car(t4);
t7=(C_word)C_eqp(t6,lf[30]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1392,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
t9=t8;
f_1392(t9,t7);}
else{
t9=(C_word)C_i_car(t2);
t10=t8;
f_1392(t10,(C_truep(t9)?(C_word)C_i_cdr(t9):C_SCHEME_FALSE));}}}

/* k1390 in loop in k1156 in k1152 in rewrite! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_1392(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1392,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
t5=(C_word)C_i_car(((C_word*)t0)[6]);
t6=(C_word)C_a_i_cons(&a,2,t5,((C_word*)t0)[4]);
/* unboxing.scm: 137  loop */
t7=((C_word*)((C_word*)t0)[3])[1];
f_1170(t7,((C_word*)t0)[2],t2,t3,t4,t6);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1418,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* unboxing.scm: 143  gensym */
((C_proc3)C_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),t2,lf[43]);}}

/* k1416 in k1390 in loop in k1156 in k1152 in rewrite! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1418(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1418,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[7]);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1495,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t7=(C_word)C_eqp(t5,lf[23]);
if(C_truep(t7)){
t8=t4;
f_1480(t8,(C_word)C_a_i_list(&a,1,lf[36]));}
else{
t8=(C_word)C_eqp(t5,lf[24]);
if(C_truep(t8)){
t9=t4;
f_1480(t9,(C_word)C_a_i_list(&a,1,lf[37]));}
else{
t9=(C_word)C_eqp(t5,lf[17]);
if(C_truep(t9)){
t10=t4;
f_1480(t10,(C_word)C_a_i_list(&a,1,lf[38]));}
else{
t10=(C_word)C_eqp(t5,lf[21]);
if(C_truep(t10)){
t11=t4;
f_1480(t11,(C_word)C_a_i_list(&a,1,lf[39]));}
else{
t11=(C_word)C_eqp(t5,lf[28]);
if(C_truep(t11)){
t12=t4;
f_1480(t12,(C_word)C_a_i_list(&a,1,lf[40]));}
else{
t12=(C_word)C_eqp(t5,lf[30]);
if(C_truep(t12)){
t13=t4;
f_1480(t13,(C_word)C_a_i_list(&a,1,lf[41]));}
else{
t13=(C_word)C_i_car(((C_word*)t0)[7]);
/* unboxing.scm: 155  bomb */
((C_proc4)C_retrieve_symbol_proc(lf[31]))(4,*((C_word*)lf[31]+1),t6,lf[42],t13);}}}}}}}

/* k1493 in k1416 in k1390 in loop in k1156 in k1152 in rewrite! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1495,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1480(t2,(C_word)C_a_i_list(&a,1,t1));}

/* k1478 in k1416 in k1390 in loop in k1156 in k1152 in rewrite! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_1480(C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1480,NULL,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[9]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_record(&a,4,lf[14],lf[27],t1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1447,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[6]);
t7=(C_word)C_i_cdr(((C_word*)t0)[9]);
t8=(C_word)C_i_cdr(((C_word*)t0)[5]);
t9=(C_word)C_a_i_list(&a,1,((C_word*)t0)[4]);
t10=(C_word)C_a_i_record(&a,4,lf[14],lf[19],t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,t10,((C_word*)t0)[3]);
/* unboxing.scm: 157  loop */
t12=((C_word*)((C_word*)t0)[2])[1];
f_1170(t12,t5,t6,t7,t8,t11);}

/* k1445 in k1478 in k1416 in k1390 in loop in k1156 in k1152 in rewrite! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1447,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[14],lf[16],((C_word*)t0)[2],t2));}

/* k1381 in loop in k1156 in k1152 in rewrite! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1383,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,4,lf[14],lf[15],((C_word*)t0)[5],t1);
t3=(C_truep(((C_word*)t0)[4])?(C_word)C_i_cdr(((C_word*)t0)[4]):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1194,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm: 108  gensym */
((C_proc3)C_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),t4,lf[34]);}}

/* k1192 in k1381 in loop in k1156 in k1152 in rewrite! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1194(C_word c,C_word t0,C_word t1){
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
C_word ab[47],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1194,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1214,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_eqp(t3,lf[17]);
if(C_truep(t5)){
t6=(C_word)C_a_i_list(&a,2,lf[18],C_fix(4));
t7=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t8=(C_word)C_a_i_record(&a,4,lf[14],lf[19],t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_list(&a,1,t8);
t10=(C_word)C_a_i_record(&a,4,lf[14],lf[20],t6,t9);
t11=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t10);
t12=((C_word*)t0)[2];
t13=t12;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_word)C_a_i_record(&a,4,lf[14],lf[16],t2,t11));}
else{
t6=(C_word)C_eqp(t3,lf[21]);
if(C_truep(t6)){
t7=(C_word)C_a_i_list(&a,2,lf[22],C_fix(2));
t8=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t9=(C_word)C_a_i_record(&a,4,lf[14],lf[19],t8,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_list(&a,1,t9);
t11=(C_word)C_a_i_record(&a,4,lf[14],lf[20],t7,t10);
t12=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t11);
t13=((C_word*)t0)[2];
t14=t13;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,(C_word)C_a_i_record(&a,4,lf[14],lf[16],t2,t12));}
else{
t7=(C_word)C_eqp(t3,lf[23]);
t8=(C_truep(t7)?t7:(C_word)C_eqp(t3,lf[24]));
if(C_truep(t8)){
t9=(C_word)C_eqp(((C_word*)t0)[4],lf[23]);
t10=(C_truep(t9)?(C_word)C_a_i_list(&a,1,lf[25]):(C_word)C_a_i_list(&a,1,lf[26]));
t11=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t12=(C_word)C_a_i_record(&a,4,lf[14],lf[19],t11,C_SCHEME_END_OF_LIST);
t13=(C_word)C_a_i_list(&a,1,t12);
t14=(C_word)C_a_i_record(&a,4,lf[14],lf[27],t10,t13);
t15=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t14);
t16=((C_word*)t0)[2];
t17=t16;
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,(C_word)C_a_i_record(&a,4,lf[14],lf[16],t2,t15));}
else{
t9=(C_word)C_eqp(t3,lf[28]);
if(C_truep(t9)){
t10=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t11=(C_word)C_a_i_record(&a,4,lf[14],lf[19],t10,C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_list(&a,1,t11);
t13=(C_word)C_a_i_record(&a,4,lf[14],lf[27],lf[29],t12);
t14=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t13);
t15=((C_word*)t0)[2];
t16=t15;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,(C_word)C_a_i_record(&a,4,lf[14],lf[16],t2,t14));}
else{
t10=(C_word)C_eqp(t3,lf[30]);
if(C_truep(t10)){
/* unboxing.scm: 133  bomb */
((C_proc3)C_retrieve_symbol_proc(lf[31]))(3,*((C_word*)lf[31]+1),t4,lf[32]);}
else{
/* unboxing.scm: 134  bomb */
((C_proc4)C_retrieve_symbol_proc(lf[31]))(4,*((C_word*)lf[31]+1),t4,lf[33],((C_word*)t0)[4]);}}}}}}

/* k1212 in k1192 in k1381 in loop in k1156 in k1152 in rewrite! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1214,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[14],lf[16],((C_word*)t0)[2],t2));}

/* k1166 in k1156 in k1152 in rewrite! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm: 100  copy-node! */
((C_proc4)C_retrieve_symbol_proc(lf[13]))(4,*((C_word*)lf[13]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1159 in k1156 in k1152 in rewrite! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm: 163  straighten-binding! */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1595(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* merge in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_1079(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1079,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_not(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1089,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_1089(t6,t4);}
else{
t6=(C_word)C_i_cdr(t2);
t7=t5;
f_1089(t7,(C_word)C_i_not(t6));}}

/* k1087 in merge in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_1089(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1089,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1092,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* unboxing.scm: 84   invalidate */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1051(t3,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_not(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1101,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_1101(t4,t2);}
else{
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
t5=t3;
f_1101(t5,(C_word)C_i_not(t4));}}}

/* k1099 in k1087 in merge in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_1101(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1101,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1104,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* unboxing.scm: 87   invalidate */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1051(t3,t2,((C_word*)t0)[3]);}
else{
if(C_truep((C_word)C_i_equalp(((C_word*)t0)[3],((C_word*)t0)[2]))){
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
t4=(C_word)C_eqp(t2,t3);
if(C_truep(t4)){
t5=(C_word)C_i_cdr(((C_word*)t0)[3]);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,t5));}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}}}

/* k1102 in k1099 in k1087 in merge in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* k1090 in k1087 in merge in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

/* alias in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_1073(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1073,NULL,3,t0,t1,t2);}
/* unboxing.scm: 80   alist-ref */
((C_proc6)C_retrieve_symbol_proc(lf[10]))(6,*((C_word*)lf[10]+1),t1,t2,((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[11]+1),t2);}

/* invalidate in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_1051(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1051,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_pairp(t2);
t4=(C_truep(t3)?(C_word)C_i_car(t2):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_i_car(t2);
/* unboxing.scm: 77   boxed! */
t6=((C_word*)((C_word*)t0)[2])[1];
f_950(t6,t1,t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* unboxed-value? in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1042(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1042,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?(C_word)C_i_cdr(t2):C_SCHEME_FALSE));}

/* unboxed? in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static C_word C_fcall f_1030(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_assq(t1,((C_word*)((C_word*)t0)[2])[1]);
return((C_truep(t2)?(C_word)C_i_cdr(t2):C_SCHEME_FALSE));}

/* unboxed! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_971(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_971,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_979,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* g114115 */
t6=t5;
f_979(t6,t1,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1020,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1028,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* unboxing.scm: 65   gensym */
((C_proc3)C_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),t6,lf[9]);}}

/* k1026 in unboxed! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* unboxing.scm: 65   alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[7]))(5,*((C_word*)lf[7]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k1018 in unboxed! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1020,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1024,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* unboxing.scm: 66   alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[7]))(5,*((C_word*)lf[7]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}

/* k1022 in k1018 in unboxed! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* g114 in unboxed! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_979(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_979,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_cdr(t2))){
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_eqp(t3,((C_word*)t0)[4]);
t5=(C_truep(t4)?((C_word*)t0)[4]:C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_set_cdr(t2,t5));}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_999,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* unboxing.scm: 62   alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[7]))(5,*((C_word*)lf[7]+1),t6,((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1013,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* unboxing.scm: 63   alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[7]))(5,*((C_word*)lf[7]+1),t3,((C_word*)t0)[2],C_SCHEME_FALSE,((C_word*)((C_word*)t0)[3])[1]);}}

/* k1011 in g114 in unboxed! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_1013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_cdr(((C_word*)((C_word*)t0)[2])[1],t1));}

/* k997 in g114 in unboxed! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* boxed! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_fcall f_950(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_950,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep(t3)){
t4=t1;
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_set_cdr(t3,C_SCHEME_FALSE));}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_969,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* unboxing.scm: 53   alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[7]))(5,*((C_word*)lf[7]+1),t4,t2,C_SCHEME_FALSE,((C_word*)((C_word*)t0)[2])[1]);}}

/* k967 in boxed! in walk-lambda in k943 in ##compiler#perform-unboxing! in k919 in k916 */
static void C_ccall f_969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* d in k919 in k916 */
static void C_ccall f_923(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_923r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_923r(t0,t1,t2,t3);}}

static void C_ccall f_923r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
if(C_truep((C_word)C_fudge(C_fix(13)))){
t4=*((C_word*)lf[1]+1);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_933,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t5,lf[5],t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k931 in d in k919 in k916 */
static void C_ccall f_933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_936,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_apply(6,0,t2,C_retrieve(lf[3]),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k934 in k931 in d in k919 in k916 */
static void C_ccall f_936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[149] = {
{"toplevel:unboxing_scm",(void*)C_unboxing_toplevel},
{"f_918:unboxing_scm",(void*)f_918},
{"f_921:unboxing_scm",(void*)f_921},
{"f_2740:unboxing_scm",(void*)f_2740},
{"f_2743:unboxing_scm",(void*)f_2743},
{"f_2746:unboxing_scm",(void*)f_2746},
{"f_2749:unboxing_scm",(void*)f_2749},
{"f_2752:unboxing_scm",(void*)f_2752},
{"f_2755:unboxing_scm",(void*)f_2755},
{"f_2758:unboxing_scm",(void*)f_2758},
{"f_2761:unboxing_scm",(void*)f_2761},
{"f_2764:unboxing_scm",(void*)f_2764},
{"f_2767:unboxing_scm",(void*)f_2767},
{"f_2770:unboxing_scm",(void*)f_2770},
{"f_2773:unboxing_scm",(void*)f_2773},
{"f_2776:unboxing_scm",(void*)f_2776},
{"f_2779:unboxing_scm",(void*)f_2779},
{"f_2782:unboxing_scm",(void*)f_2782},
{"f_2785:unboxing_scm",(void*)f_2785},
{"f_2788:unboxing_scm",(void*)f_2788},
{"f_2791:unboxing_scm",(void*)f_2791},
{"f_2794:unboxing_scm",(void*)f_2794},
{"f_2797:unboxing_scm",(void*)f_2797},
{"f_2800:unboxing_scm",(void*)f_2800},
{"f_2803:unboxing_scm",(void*)f_2803},
{"f_2806:unboxing_scm",(void*)f_2806},
{"f_2809:unboxing_scm",(void*)f_2809},
{"f_2812:unboxing_scm",(void*)f_2812},
{"f_2815:unboxing_scm",(void*)f_2815},
{"f_2818:unboxing_scm",(void*)f_2818},
{"f_2821:unboxing_scm",(void*)f_2821},
{"f_2824:unboxing_scm",(void*)f_2824},
{"f_2827:unboxing_scm",(void*)f_2827},
{"f_2725:unboxing_scm",(void*)f_2725},
{"f_2733:unboxing_scm",(void*)f_2733},
{"f_941:unboxing_scm",(void*)f_941},
{"f_945:unboxing_scm",(void*)f_945},
{"f_2693:unboxing_scm",(void*)f_2693},
{"f_2699:unboxing_scm",(void*)f_2699},
{"f_2704:unboxing_scm",(void*)f_2704},
{"f_2708:unboxing_scm",(void*)f_2708},
{"f_2711:unboxing_scm",(void*)f_2711},
{"f_2714:unboxing_scm",(void*)f_2714},
{"f_2717:unboxing_scm",(void*)f_2717},
{"f_947:unboxing_scm",(void*)f_947},
{"f_2687:unboxing_scm",(void*)f_2687},
{"f_2017:unboxing_scm",(void*)f_2017},
{"f_2051:unboxing_scm",(void*)f_2051},
{"f_2638:unboxing_scm",(void*)f_2638},
{"f_2651:unboxing_scm",(void*)f_2651},
{"f_2644:unboxing_scm",(void*)f_2644},
{"f_2636:unboxing_scm",(void*)f_2636},
{"f_2620:unboxing_scm",(void*)f_2620},
{"f_2633:unboxing_scm",(void*)f_2633},
{"f_2626:unboxing_scm",(void*)f_2626},
{"f_2612:unboxing_scm",(void*)f_2612},
{"f_2615:unboxing_scm",(void*)f_2615},
{"f_2596:unboxing_scm",(void*)f_2596},
{"f_2529:unboxing_scm",(void*)f_2529},
{"f_2538:unboxing_scm",(void*)f_2538},
{"f_2584:unboxing_scm",(void*)f_2584},
{"f_2567:unboxing_scm",(void*)f_2567},
{"f_2552:unboxing_scm",(void*)f_2552},
{"f_2516:unboxing_scm",(void*)f_2516},
{"f_2492:unboxing_scm",(void*)f_2492},
{"f_2495:unboxing_scm",(void*)f_2495},
{"f_2498:unboxing_scm",(void*)f_2498},
{"f_2501:unboxing_scm",(void*)f_2501},
{"f_2405:unboxing_scm",(void*)f_2405},
{"f_2457:unboxing_scm",(void*)f_2457},
{"f_2434:unboxing_scm",(void*)f_2434},
{"f_2408:unboxing_scm",(void*)f_2408},
{"f_2328:unboxing_scm",(void*)f_2328},
{"f_2331:unboxing_scm",(void*)f_2331},
{"f_2334:unboxing_scm",(void*)f_2334},
{"f_2337:unboxing_scm",(void*)f_2337},
{"f_2312:unboxing_scm",(void*)f_2312},
{"f_2169:unboxing_scm",(void*)f_2169},
{"f_2304:unboxing_scm",(void*)f_2304},
{"f_2172:unboxing_scm",(void*)f_2172},
{"f_2187:unboxing_scm",(void*)f_2187},
{"f_2241:unboxing_scm",(void*)f_2241},
{"f_2279:unboxing_scm",(void*)f_2279},
{"f_2249:unboxing_scm",(void*)f_2249},
{"f_2256:unboxing_scm",(void*)f_2256},
{"f_2233:unboxing_scm",(void*)f_2233},
{"f_2227:unboxing_scm",(void*)f_2227},
{"f_2202:unboxing_scm",(void*)f_2202},
{"f_2135:unboxing_scm",(void*)f_2135},
{"f_2109:unboxing_scm",(void*)f_2109},
{"f_2069:unboxing_scm",(void*)f_2069},
{"f_2090:unboxing_scm",(void*)f_2090},
{"f_2084:unboxing_scm",(void*)f_2084},
{"f_2073:unboxing_scm",(void*)f_2073},
{"f_1847:unboxing_scm",(void*)f_1847},
{"f_2002:unboxing_scm",(void*)f_2002},
{"f_1884:unboxing_scm",(void*)f_1884},
{"f_1896:unboxing_scm",(void*)f_1896},
{"f_1977:unboxing_scm",(void*)f_1977},
{"f_1923:unboxing_scm",(void*)f_1923},
{"f_1894:unboxing_scm",(void*)f_1894},
{"f_1881:unboxing_scm",(void*)f_1881},
{"f_1721:unboxing_scm",(void*)f_1721},
{"f_1753:unboxing_scm",(void*)f_1753},
{"f_1756:unboxing_scm",(void*)f_1756},
{"f_1595:unboxing_scm",(void*)f_1595},
{"f_1627:unboxing_scm",(void*)f_1627},
{"f_1630:unboxing_scm",(void*)f_1630},
{"f_1563:unboxing_scm",(void*)f_1563},
{"f_1567:unboxing_scm",(void*)f_1567},
{"f_1570:unboxing_scm",(void*)f_1570},
{"f_1573:unboxing_scm",(void*)f_1573},
{"f_1147:unboxing_scm",(void*)f_1147},
{"f_1154:unboxing_scm",(void*)f_1154},
{"f_1558:unboxing_scm",(void*)f_1558},
{"f_1158:unboxing_scm",(void*)f_1158},
{"f_1170:unboxing_scm",(void*)f_1170},
{"f_1392:unboxing_scm",(void*)f_1392},
{"f_1418:unboxing_scm",(void*)f_1418},
{"f_1495:unboxing_scm",(void*)f_1495},
{"f_1480:unboxing_scm",(void*)f_1480},
{"f_1447:unboxing_scm",(void*)f_1447},
{"f_1383:unboxing_scm",(void*)f_1383},
{"f_1194:unboxing_scm",(void*)f_1194},
{"f_1214:unboxing_scm",(void*)f_1214},
{"f_1168:unboxing_scm",(void*)f_1168},
{"f_1161:unboxing_scm",(void*)f_1161},
{"f_1079:unboxing_scm",(void*)f_1079},
{"f_1089:unboxing_scm",(void*)f_1089},
{"f_1101:unboxing_scm",(void*)f_1101},
{"f_1104:unboxing_scm",(void*)f_1104},
{"f_1092:unboxing_scm",(void*)f_1092},
{"f_1073:unboxing_scm",(void*)f_1073},
{"f_1051:unboxing_scm",(void*)f_1051},
{"f_1042:unboxing_scm",(void*)f_1042},
{"f_1030:unboxing_scm",(void*)f_1030},
{"f_971:unboxing_scm",(void*)f_971},
{"f_1028:unboxing_scm",(void*)f_1028},
{"f_1020:unboxing_scm",(void*)f_1020},
{"f_1024:unboxing_scm",(void*)f_1024},
{"f_979:unboxing_scm",(void*)f_979},
{"f_1013:unboxing_scm",(void*)f_1013},
{"f_999:unboxing_scm",(void*)f_999},
{"f_950:unboxing_scm",(void*)f_950},
{"f_969:unboxing_scm",(void*)f_969},
{"f_923:unboxing_scm",(void*)f_923},
{"f_933:unboxing_scm",(void*)f_933},
{"f_936:unboxing_scm",(void*)f_936},
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
