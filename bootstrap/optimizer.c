/* Generated from optimizer.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:30
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: optimizer.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -no-lambda-info -local -extend private-namespace.scm -output-file optimizer.c
   unit: optimizer
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[266];
static double C_possibly_force_alignment;


C_noret_decl(C_optimizer_toplevel)
C_externexport void C_ccall C_optimizer_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3703)
static void C_ccall f_3703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3706)
static void C_ccall f_3706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3980)
static void C_ccall f_3980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14556)
static void C_ccall f_14556(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_14564)
static void C_ccall f_14564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14569)
static void C_fcall f_14569(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14619)
static void C_ccall f_14619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14623)
static void C_ccall f_14623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14579)
static void C_ccall f_14579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14583)
static void C_fcall f_14583(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14605)
static void C_ccall f_14605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6170)
static void C_ccall f_6170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13465)
static void C_ccall f_13465(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_13511)
static void C_ccall f_13511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13613)
static void C_ccall f_13613(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_13623)
static void C_fcall f_13623(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13960)
static void C_ccall f_13960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13952)
static void C_ccall f_13952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13729)
static void C_ccall f_13729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13758)
static void C_fcall f_13758(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_13928)
static void C_ccall f_13928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13920)
static void C_ccall f_13920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13789)
static void C_fcall f_13789(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13842)
static void C_ccall f_13842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13832)
static void C_ccall f_13832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13840)
static void C_ccall f_13840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14014)
static void C_ccall f_14014(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10) C_noret;
C_noret_decl(f_14027)
static void C_ccall f_14027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14069)
static void C_ccall f_14069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14053)
static void C_ccall f_14053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14057)
static void C_ccall f_14057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14049)
static void C_ccall f_14049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14235)
static void C_ccall f_14235(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13) C_noret;
C_noret_decl(f_14248)
static void C_ccall f_14248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14254)
static void C_ccall f_14254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14306)
static void C_ccall f_14306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14298)
static void C_ccall f_14298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14282)
static void C_ccall f_14282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14286)
static void C_ccall f_14286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14290)
static void C_ccall f_14290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6173)
static void C_ccall f_6173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13106)
static void C_ccall f_13106(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_13128)
static void C_ccall f_13128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13208)
static void C_ccall f_13208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13166)
static void C_ccall f_13166(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13200)
static void C_ccall f_13200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13204)
static void C_ccall f_13204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13192)
static void C_ccall f_13192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13164)
static void C_ccall f_13164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13302)
static void C_ccall f_13302(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9) C_noret;
C_noret_decl(f_13322)
static void C_ccall f_13322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6176)
static void C_ccall f_6176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6665)
static void C_ccall f_6665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10487)
static void C_ccall f_10487(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12985)
static void C_ccall f_12985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12988)
static void C_ccall f_12988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12991)
static void C_ccall f_12991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12994)
static void C_ccall f_12994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12997)
static void C_ccall f_12997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13000)
static void C_ccall f_13000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13077)
static void C_ccall f_13077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13003)
static void C_ccall f_13003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13006)
static void C_ccall f_13006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13009)
static void C_ccall f_13009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13071)
static void C_ccall f_13071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13012)
static void C_ccall f_13012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13015)
static void C_ccall f_13015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13068)
static void C_ccall f_13068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11264)
static void C_fcall f_11264(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11282)
static void C_ccall f_11282(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11288)
static void C_ccall f_11288(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11268)
static void C_ccall f_11268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13018)
static void C_ccall f_13018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13060)
static void C_ccall f_13060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13058)
static void C_ccall f_13058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13021)
static void C_ccall f_13021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13024)
static void C_ccall f_13024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13027)
static void C_ccall f_13027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13051)
static void C_ccall f_13051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13030)
static void C_ccall f_13030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13033)
static void C_ccall f_13033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13036)
static void C_ccall f_13036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13039)
static void C_ccall f_13039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13042)
static void C_ccall f_13042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13045)
static void C_ccall f_13045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12744)
static void C_fcall f_12744(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12750)
static void C_fcall f_12750(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12961)
static void C_fcall f_12961(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12971)
static void C_ccall f_12971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12935)
static void C_fcall f_12935(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12945)
static void C_ccall f_12945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12905)
static void C_ccall f_12905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12914)
static void C_ccall f_12914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12917)
static void C_ccall f_12917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12875)
static void C_fcall f_12875(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12885)
static void C_ccall f_12885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12784)
static void C_ccall f_12784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12789)
static void C_fcall f_12789(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12827)
static void C_ccall f_12827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12812)
static void C_ccall f_12812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12823)
static void C_ccall f_12823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12819)
static void C_ccall f_12819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12546)
static void C_fcall f_12546(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12552)
static void C_fcall f_12552(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12721)
static void C_fcall f_12721(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12731)
static void C_ccall f_12731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12661)
static void C_fcall f_12661(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12690)
static void C_ccall f_12690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12651)
static void C_ccall f_12651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12647)
static void C_ccall f_12647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12589)
static void C_ccall f_12589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12603)
static void C_fcall f_12603(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12613)
static void C_ccall f_12613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12018)
static void C_fcall f_12018(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12032)
static void C_ccall f_12032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12039)
static void C_ccall f_12039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12042)
static void C_ccall f_12042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12051)
static void C_ccall f_12051(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12203)
static void C_fcall f_12203(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12232)
static void C_ccall f_12232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12058)
static void C_ccall f_12058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12154)
static void C_fcall f_12154(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12187)
static void C_ccall f_12187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12167)
static void C_fcall f_12167(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12061)
static void C_ccall f_12061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12282)
static void C_fcall f_12282(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12523)
static void C_fcall f_12523(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12533)
static void C_ccall f_12533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12464)
static void C_ccall f_12464(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12485)
static void C_fcall f_12485(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12483)
static void C_ccall f_12483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12479)
static void C_ccall f_12479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12411)
static void C_ccall f_12411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12416)
static void C_fcall f_12416(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12426)
static void C_ccall f_12426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12348)
static void C_fcall f_12348(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12346)
static void C_ccall f_12346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12316)
static void C_ccall f_12316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12321)
static void C_fcall f_12321(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12331)
static void C_ccall f_12331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12267)
static C_word C_fcall f_12267(C_word t0,C_word t1);
C_noret_decl(f_12064)
static void C_ccall f_12064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12139)
static void C_ccall f_12139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12127)
static void C_ccall f_12127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12123)
static void C_ccall f_12123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12030)
static void C_ccall f_12030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11609)
static void C_fcall f_11609(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11970)
static void C_fcall f_11970(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11735)
static void C_ccall f_11735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11947)
static void C_fcall f_11947(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11957)
static void C_ccall f_11957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11868)
static void C_ccall f_11868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11873)
static void C_fcall f_11873(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11941)
static void C_ccall f_11941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11900)
static void C_fcall f_11900(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11938)
static void C_ccall f_11938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11618)
static void C_fcall f_11618(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11711)
static void C_fcall f_11711(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11721)
static void C_ccall f_11721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11694)
static void C_ccall f_11694(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11699)
static void C_ccall f_11699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11653)
static void C_ccall f_11653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11658)
static void C_fcall f_11658(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11668)
static void C_ccall f_11668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11616)
static void C_ccall f_11616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11930)
static void C_ccall f_11930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11916)
static void C_ccall f_11916(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11914)
static void C_ccall f_11914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11737)
static void C_fcall f_11737(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11861)
static void C_ccall f_11861(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11859)
static void C_ccall f_11859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11825)
static void C_fcall f_11825(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11844)
static void C_ccall f_11844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11833)
static void C_fcall f_11833(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11757)
static void C_ccall f_11757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11781)
static void C_fcall f_11781(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11808)
static C_word C_fcall f_11808(C_word t0,C_word t1);
C_noret_decl(f_11779)
static void C_ccall f_11779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11775)
static void C_ccall f_11775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11767)
static void C_ccall f_11767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11298)
static void C_fcall f_11298(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11304)
static void C_fcall f_11304(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11338)
static void C_fcall f_11338(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11560)
static void C_fcall f_11560(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11575)
static void C_ccall f_11575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11568)
static void C_fcall f_11568(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11457)
static void C_ccall f_11457(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11473)
static void C_fcall f_11473(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11526)
static void C_ccall f_11526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11530)
static void C_ccall f_11530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11493)
static void C_ccall f_11493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11502)
static void C_fcall f_11502(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11512)
static void C_ccall f_11512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11424)
static void C_ccall f_11424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11429)
static void C_fcall f_11429(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11444)
static void C_ccall f_11444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11437)
static void C_fcall f_11437(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11400)
static void C_ccall f_11400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11412)
static void C_ccall f_11412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11349)
static void C_fcall f_11349(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11370)
static void C_ccall f_11370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11367)
static void C_ccall f_11367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11302)
static void C_ccall f_11302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11017)
static void C_fcall f_11017(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11023)
static void C_fcall f_11023(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11057)
static void C_fcall f_11057(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11159)
static void C_fcall f_11159(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11174)
static void C_ccall f_11174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11167)
static void C_fcall f_11167(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11150)
static void C_ccall f_11150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11116)
static void C_fcall f_11116(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11125)
static void C_ccall f_11125(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11137)
static void C_ccall f_11137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11068)
static void C_fcall f_11068(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11089)
static void C_ccall f_11089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11086)
static void C_ccall f_11086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11021)
static void C_ccall f_11021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10884)
static void C_fcall f_10884(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10890)
static void C_ccall f_10890(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10934)
static void C_ccall f_10934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10939)
static void C_fcall f_10939(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10946)
static void C_ccall f_10946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11007)
static void C_ccall f_11007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11003)
static void C_ccall f_11003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10961)
static void C_fcall f_10961(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10995)
static void C_ccall f_10995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10988)
static void C_fcall f_10988(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10959)
static void C_ccall f_10959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10924)
static void C_ccall f_10924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10902)
static void C_ccall f_10902(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10909)
static void C_ccall f_10909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10596)
static void C_fcall f_10596(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10809)
static void C_fcall f_10809(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10871)
static void C_ccall f_10871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10817)
static void C_fcall f_10817(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10842)
static void C_ccall f_10842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10832)
static void C_ccall f_10832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10836)
static void C_ccall f_10836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10807)
static void C_ccall f_10807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10599)
static void C_fcall f_10599(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10775)
static void C_fcall f_10775(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10790)
static void C_ccall f_10790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10783)
static void C_fcall f_10783(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10758)
static void C_ccall f_10758(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10770)
static void C_ccall f_10770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10704)
static void C_fcall f_10704(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10728)
static void C_ccall f_10728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10722)
static void C_ccall f_10722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10686)
static void C_ccall f_10686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10639)
static void C_fcall f_10639(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10642)
static void C_fcall f_10642(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10647)
static void C_fcall f_10647(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10662)
static void C_ccall f_10662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10655)
static void C_fcall f_10655(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10490)
static void C_fcall f_10490(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10496)
static void C_ccall f_10496(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10527)
static void C_fcall f_10527(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10531)
static void C_ccall f_10531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10535)
static void C_ccall f_10535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10494)
static void C_ccall f_10494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9102)
static void C_ccall f_9102(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10482)
static void C_ccall f_10482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10485)
static void C_ccall f_10485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9758)
static void C_fcall f_9758(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_10472)
static void C_ccall f_10472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10470)
static void C_ccall f_10470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9762)
static void C_ccall f_9762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9777)
static void C_ccall f_9777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9786)
static void C_fcall f_9786(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9792)
static void C_ccall f_9792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9795)
static void C_ccall f_9795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9801)
static void C_ccall f_9801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10084)
static void C_fcall f_10084(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10399)
static void C_fcall f_10399(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10409)
static void C_ccall f_10409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10373)
static void C_fcall f_10373(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10383)
static void C_ccall f_10383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10358)
static void C_ccall f_10358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10361)
static void C_ccall f_10361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10306)
static void C_ccall f_10306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10309)
static void C_ccall f_10309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10153)
static void C_ccall f_10153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10200)
static void C_fcall f_10200(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10210)
static void C_ccall f_10210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10213)
static void C_ccall f_10213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10247)
static void C_ccall f_10247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10216)
static void C_ccall f_10216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10219)
static void C_ccall f_10219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10162)
static void C_ccall f_10162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10165)
static void C_ccall f_10165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10168)
static void C_ccall f_10168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9804)
static void C_ccall f_9804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10066)
static void C_ccall f_10066(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9975)
static void C_ccall f_9975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9977)
static void C_fcall f_9977(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10053)
static void C_ccall f_10053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9985)
static void C_fcall f_9985(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10000)
static void C_ccall f_10000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9807)
static void C_ccall f_9807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9824)
static void C_ccall f_9824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9895)
static void C_ccall f_9895(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9827)
static void C_ccall f_9827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9830)
static void C_ccall f_9830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9835)
static void C_fcall f_9835(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9879)
static void C_ccall f_9879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9850)
static void C_ccall f_9850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9304)
static void C_fcall f_9304(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_9749)
static void C_ccall f_9749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9756)
static void C_ccall f_9756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9307)
static void C_fcall f_9307(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9736)
static void C_ccall f_9736(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9712)
static void C_ccall f_9712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9723)
static void C_ccall f_9723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9679)
static void C_ccall f_9679(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9570)
static void C_fcall f_9570(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9575)
static void C_ccall f_9575(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9517)
static void C_ccall f_9517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9523)
static void C_fcall f_9523(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9528)
static void C_ccall f_9528(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9476)
static void C_ccall f_9476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9482)
static void C_fcall f_9482(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9487)
static void C_ccall f_9487(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9460)
static void C_ccall f_9460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9456)
static void C_ccall f_9456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9426)
static void C_ccall f_9426(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9389)
static void C_ccall f_9389(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9405)
static void C_ccall f_9405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9371)
static void C_ccall f_9371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9105)
static void C_fcall f_9105(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9276)
static void C_fcall f_9276(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9291)
static void C_ccall f_9291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9284)
static void C_fcall f_9284(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9256)
static void C_ccall f_9256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9230)
static void C_ccall f_9230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9176)
static void C_ccall f_9176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9182)
static void C_ccall f_9182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9188)
static void C_ccall f_9188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9145)
static void C_ccall f_9145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6687)
static void C_ccall f_6687(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_8969)
static void C_ccall f_8969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8998)
static void C_ccall f_8998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9010)
static void C_ccall f_9010(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9024)
static void C_fcall f_9024(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9073)
static void C_ccall f_9073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6712)
static void C_fcall f_6712(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9044)
static void C_ccall f_9044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9048)
static void C_ccall f_9048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9018)
static void C_ccall f_9018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9004)
static void C_ccall f_9004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9002)
static void C_ccall f_9002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8994)
static void C_ccall f_8994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8889)
static void C_ccall f_8889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8933)
static void C_ccall f_8933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8694)
static void C_ccall f_8694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8700)
static void C_ccall f_8700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8816)
static void C_ccall f_8816(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8709)
static void C_ccall f_8709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8771)
static void C_ccall f_8771(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8769)
static void C_ccall f_8769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8731)
static void C_ccall f_8731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8609)
static void C_ccall f_8609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8650)
static void C_ccall f_8650(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8662)
static void C_ccall f_8662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8640)
static void C_ccall f_8640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8638)
static void C_ccall f_8638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8427)
static void C_ccall f_8427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8533)
static void C_ccall f_8533(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8436)
static void C_ccall f_8436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8507)
static void C_ccall f_8507(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8505)
static void C_ccall f_8505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8458)
static void C_ccall f_8458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8387)
static void C_ccall f_8387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8403)
static void C_ccall f_8403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8308)
static void C_ccall f_8308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8337)
static void C_fcall f_8337(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8218)
static void C_ccall f_8218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8252)
static void C_fcall f_8252(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8113)
static void C_ccall f_8113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8139)
static void C_ccall f_8139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8135)
static void C_ccall f_8135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8019)
static void C_ccall f_8019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7942)
static void C_ccall f_7942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7966)
static void C_fcall f_7966(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7970)
static void C_ccall f_7970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7854)
static void C_ccall f_7854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7910)
static void C_ccall f_7910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7906)
static void C_ccall f_7906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7783)
static void C_ccall f_7783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7795)
static void C_fcall f_7795(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7815)
static void C_ccall f_7815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7811)
static void C_ccall f_7811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7684)
static void C_ccall f_7684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7713)
static void C_ccall f_7713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7721)
static void C_ccall f_7721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7725)
static void C_ccall f_7725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7441)
static void C_ccall f_7441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7469)
static void C_fcall f_7469(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7472)
static void C_fcall f_7472(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7585)
static void C_fcall f_7585(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7619)
static void C_ccall f_7619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7475)
static void C_ccall f_7475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7550)
static void C_fcall f_7550(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7579)
static void C_ccall f_7579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7478)
static void C_ccall f_7478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7522)
static void C_ccall f_7522(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7520)
static void C_ccall f_7520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7483)
static void C_ccall f_7483(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7463)
static void C_ccall f_7463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7415)
static void C_ccall f_7415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7342)
static void C_ccall f_7342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7379)
static void C_ccall f_7379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7371)
static void C_ccall f_7371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7253)
static void C_ccall f_7253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7148)
static void C_ccall f_7148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7203)
static void C_ccall f_7203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7080)
static void C_ccall f_7080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7100)
static void C_ccall f_7100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7108)
static void C_ccall f_7108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7031)
static void C_ccall f_7031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7047)
static void C_ccall f_7047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6900)
static void C_ccall f_6900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6975)
static void C_ccall f_6975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6934)
static void C_fcall f_6934(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6749)
static void C_ccall f_6749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6830)
static void C_ccall f_6830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6752)
static void C_fcall f_6752(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6667)
static void C_ccall f_6667(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6667)
static void C_ccall f_6667r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6671)
static void C_ccall f_6671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6681)
static void C_ccall f_6681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6178)
static void C_ccall f_6178(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6614)
static void C_fcall f_6614(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6647)
static void C_ccall f_6647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6627)
static void C_fcall f_6627(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6182)
static void C_ccall f_6182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6567)
static void C_fcall f_6567(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6587)
static void C_ccall f_6587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6575)
static void C_fcall f_6575(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6584)
static void C_ccall f_6584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6580)
static void C_ccall f_6580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6229)
static void C_ccall f_6229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6487)
static void C_fcall f_6487(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6554)
static void C_ccall f_6554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6495)
static void C_fcall f_6495(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6527)
static void C_ccall f_6527(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6540)
static void C_ccall f_6540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6505)
static void C_ccall f_6505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6521)
static void C_ccall f_6521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6509)
static void C_ccall f_6509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6513)
static void C_ccall f_6513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6232)
static void C_ccall f_6232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6406)
static void C_fcall f_6406(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6474)
static void C_ccall f_6474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6414)
static void C_fcall f_6414(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6457)
static void C_ccall f_6457(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6463)
static void C_ccall f_6463(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6421)
static void C_ccall f_6421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6431)
static void C_ccall f_6431(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6444)
static void C_ccall f_6444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6429)
static void C_ccall f_6429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6425)
static void C_ccall f_6425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6235)
static void C_ccall f_6235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6238)
static void C_ccall f_6238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6258)
static void C_ccall f_6258(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6271)
static void C_fcall f_6271(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6332)
static void C_ccall f_6332(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6378)
static void C_ccall f_6378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6330)
static void C_ccall f_6330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6300)
static void C_ccall f_6300(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6241)
static void C_ccall f_6241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6250)
static void C_ccall f_6250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6184)
static void C_fcall f_6184(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6190)
static void C_fcall f_6190(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6214)
static void C_ccall f_6214(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6163)
static void C_ccall f_6163(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6163)
static void C_ccall f_6163r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5844)
static void C_ccall f_5844(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5858)
static void C_ccall f_5858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5878)
static void C_ccall f_5878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5885)
static void C_ccall f_5885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5890)
static void C_fcall f_5890(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6150)
static void C_ccall f_6150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5898)
static void C_fcall f_5898(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6134)
static void C_ccall f_6134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5916)
static void C_ccall f_5916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5919)
static void C_ccall f_5919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5925)
static void C_fcall f_5925(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5945)
static void C_fcall f_5945(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5951)
static void C_ccall f_5951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5957)
static void C_fcall f_5957(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5966)
static void C_fcall f_5966(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5973)
static void C_ccall f_5973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5976)
static void C_ccall f_5976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5994)
static void C_ccall f_5994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5979)
static void C_ccall f_5979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5861)
static void C_ccall f_5861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5864)
static void C_ccall f_5864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5851)
static void C_fcall f_5851(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5847)
static C_word C_fcall f_5847(C_word t0);
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5726)
static void C_ccall f_5726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5732)
static void C_ccall f_5732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5736)
static void C_ccall f_5736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5739)
static void C_ccall f_5739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5775)
static void C_ccall f_5775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5780)
static void C_fcall f_5780(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5792)
static void C_ccall f_5792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5819)
static void C_ccall f_5819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5742)
static void C_ccall f_5742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5745)
static void C_ccall f_5745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5748)
static void C_ccall f_5748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5751)
static void C_ccall f_5751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5696)
static void C_fcall f_5696(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5716)
static void C_ccall f_5716(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5700)
static void C_ccall f_5700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5706)
static void C_ccall f_5706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4438)
static void C_fcall f_4438(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5586)
static void C_ccall f_5586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5589)
static void C_ccall f_5589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5688)
static void C_ccall f_5688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5684)
static void C_ccall f_5684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5646)
static void C_fcall f_5646(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5677)
static void C_ccall f_5677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5673)
static void C_ccall f_5673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5665)
static void C_ccall f_5665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5606)
static void C_fcall f_5606(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5636)
static void C_ccall f_5636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5612)
static void C_ccall f_5612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5558)
static void C_ccall f_5558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5518)
static void C_ccall f_5518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5508)
static void C_ccall f_5508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4820)
static void C_ccall f_4820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4829)
static void C_ccall f_4829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5060)
static void C_fcall f_5060(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5076)
static void C_ccall f_5076(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5450)
static void C_ccall f_5450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5487)
static void C_ccall f_5487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5464)
static void C_ccall f_5464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5086)
static void C_fcall f_5086(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5158)
static void C_ccall f_5158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5437)
static void C_ccall f_5437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5336)
static void C_fcall f_5336(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5339)
static void C_ccall f_5339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5351)
static void C_ccall f_5351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5362)
static void C_ccall f_5362(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5401)
static void C_ccall f_5401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5393)
static void C_ccall f_5393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5381)
static void C_ccall f_5381(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5379)
static void C_ccall f_5379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5356)
static void C_ccall f_5356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5172)
static void C_fcall f_5172(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5217)
static void C_ccall f_5217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5223)
static void C_ccall f_5223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5229)
static void C_ccall f_5229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5249)
static void C_ccall f_5249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5253)
static void C_ccall f_5253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5211)
static void C_ccall f_5211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5199)
static void C_ccall f_5199(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5197)
static void C_ccall f_5197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5152)
static void C_ccall f_5152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5089)
static void C_ccall f_5089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5123)
static void C_ccall f_5123(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5092)
static void C_ccall f_5092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5095)
static void C_ccall f_5095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5098)
static void C_ccall f_5098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5108)
static void C_ccall f_5108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5036)
static void C_ccall f_5036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4911)
static void C_ccall f_4911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4932)
static void C_ccall f_4932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5000)
static void C_ccall f_5000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4992)
static void C_ccall f_4992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4935)
static void C_fcall f_4935(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4971)
static void C_ccall f_4971(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4969)
static void C_ccall f_4969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4890)
static void C_fcall f_4890(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4846)
static void C_ccall f_4846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4874)
static void C_ccall f_4874(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4852)
static void C_ccall f_4852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4859)
static void C_ccall f_4859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4625)
static void C_ccall f_4625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4724)
static void C_ccall f_4724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4729)
static void C_ccall f_4729(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4736)
static void C_ccall f_4736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4776)
static void C_ccall f_4776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4756)
static void C_ccall f_4756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4630)
static void C_ccall f_4630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4655)
static void C_ccall f_4655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4702)
static void C_ccall f_4702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4705)
static void C_ccall f_4705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4695)
static void C_ccall f_4695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4675)
static void C_ccall f_4675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4636)
static void C_ccall f_4636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4642)
static void C_ccall f_4642(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4559)
static void C_ccall f_4559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4600)
static void C_ccall f_4600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4607)
static void C_ccall f_4607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4562)
static void C_fcall f_4562(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4590)
static void C_ccall f_4590(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4588)
static void C_ccall f_4588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4478)
static void C_fcall f_4478(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4494)
static void C_ccall f_4494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4500)
static void C_ccall f_4500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4520)
static void C_ccall f_4520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4157)
static void C_fcall f_4157(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4171)
static void C_ccall f_4171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4397)
static void C_ccall f_4397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4403)
static void C_ccall f_4403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4251)
static void C_ccall f_4251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4343)
static void C_fcall f_4343(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4337)
static void C_ccall f_4337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4285)
static void C_ccall f_4285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4323)
static void C_ccall f_4323(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4323)
static void C_ccall f_4323r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4329)
static void C_ccall f_4329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4291)
static void C_ccall f_4291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4321)
static void C_ccall f_4321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4274)
static void C_ccall f_4274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4278)
static void C_fcall f_4278(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4282)
static void C_ccall f_4282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4257)
static void C_ccall f_4257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4190)
static void C_ccall f_4190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4026)
static void C_fcall f_4026(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4041)
static void C_ccall f_4041(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4051)
static void C_ccall f_4051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4100)
static void C_fcall f_4100(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4127)
static C_word C_fcall f_4127(C_word t0,C_word t1);
C_noret_decl(f_4098)
static void C_ccall f_4098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4057)
static void C_ccall f_4057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4063)
static void C_ccall f_4063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4090)
static void C_ccall f_4090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4022)
static C_word C_fcall f_4022(C_word t0);
C_noret_decl(f_3992)
static void C_ccall f_3992(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3986)
static void C_fcall f_3986(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3708)
static void C_ccall f_3708(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3729)
static void C_ccall f_3729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3773)
static void C_ccall f_3773(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3810)
static void C_fcall f_3810(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3877)
static void C_fcall f_3877(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3896)
static void C_ccall f_3896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3880)
static void C_ccall f_3880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3850)
static void C_fcall f_3850(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3776)
static void C_fcall f_3776(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3782)
static void C_fcall f_3782(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3797)
static void C_ccall f_3797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3790)
static void C_fcall f_3790(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3732)
static void C_ccall f_3732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3735)
static void C_ccall f_3735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3746)
static void C_ccall f_3746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3711)
static C_word C_fcall f_3711(C_word *a,C_word t0,C_word t1);

C_noret_decl(trf_14569)
static void C_fcall trf_14569(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14569(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_14569(t0,t1,t2);}

C_noret_decl(trf_14583)
static void C_fcall trf_14583(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14583(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_14583(t0,t1,t2);}

C_noret_decl(trf_13623)
static void C_fcall trf_13623(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13623(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_13623(t0,t1,t2,t3);}

C_noret_decl(trf_13758)
static void C_fcall trf_13758(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13758(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_13758(t0,t1,t2,t3,t4);}

C_noret_decl(trf_13789)
static void C_fcall trf_13789(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13789(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13789(t0,t1);}

C_noret_decl(trf_11264)
static void C_fcall trf_11264(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11264(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11264(t0,t1,t2,t3);}

C_noret_decl(trf_12744)
static void C_fcall trf_12744(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12744(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12744(t0,t1,t2);}

C_noret_decl(trf_12750)
static void C_fcall trf_12750(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12750(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12750(t0,t1,t2);}

C_noret_decl(trf_12961)
static void C_fcall trf_12961(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12961(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12961(t0,t1,t2);}

C_noret_decl(trf_12935)
static void C_fcall trf_12935(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12935(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12935(t0,t1,t2);}

C_noret_decl(trf_12875)
static void C_fcall trf_12875(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12875(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12875(t0,t1,t2);}

C_noret_decl(trf_12789)
static void C_fcall trf_12789(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12789(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12789(t0,t1,t2,t3);}

C_noret_decl(trf_12546)
static void C_fcall trf_12546(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12546(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12546(t0,t1,t2);}

C_noret_decl(trf_12552)
static void C_fcall trf_12552(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12552(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12552(t0,t1,t2);}

C_noret_decl(trf_12721)
static void C_fcall trf_12721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12721(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12721(t0,t1,t2);}

C_noret_decl(trf_12661)
static void C_fcall trf_12661(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12661(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12661(t0,t1,t2);}

C_noret_decl(trf_12603)
static void C_fcall trf_12603(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12603(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12603(t0,t1,t2);}

C_noret_decl(trf_12018)
static void C_fcall trf_12018(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12018(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12018(t0,t1,t2,t3);}

C_noret_decl(trf_12203)
static void C_fcall trf_12203(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12203(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12203(t0,t1,t2);}

C_noret_decl(trf_12154)
static void C_fcall trf_12154(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12154(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12154(t0,t1,t2,t3);}

C_noret_decl(trf_12167)
static void C_fcall trf_12167(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12167(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12167(t0,t1);}

C_noret_decl(trf_12282)
static void C_fcall trf_12282(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12282(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12282(t0,t1,t2);}

C_noret_decl(trf_12523)
static void C_fcall trf_12523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12523(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12523(t0,t1,t2);}

C_noret_decl(trf_12485)
static void C_fcall trf_12485(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12485(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12485(t0,t1,t2);}

C_noret_decl(trf_12416)
static void C_fcall trf_12416(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12416(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12416(t0,t1,t2);}

C_noret_decl(trf_12348)
static void C_fcall trf_12348(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12348(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12348(t0,t1,t2);}

C_noret_decl(trf_12321)
static void C_fcall trf_12321(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12321(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12321(t0,t1,t2);}

C_noret_decl(trf_11609)
static void C_fcall trf_11609(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11609(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11609(t0,t1,t2);}

C_noret_decl(trf_11970)
static void C_fcall trf_11970(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11970(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11970(t0,t1,t2);}

C_noret_decl(trf_11947)
static void C_fcall trf_11947(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11947(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11947(t0,t1,t2);}

C_noret_decl(trf_11873)
static void C_fcall trf_11873(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11873(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11873(t0,t1,t2);}

C_noret_decl(trf_11900)
static void C_fcall trf_11900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11900(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11900(t0,t1,t2);}

C_noret_decl(trf_11618)
static void C_fcall trf_11618(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11618(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11618(t0,t1,t2);}

C_noret_decl(trf_11711)
static void C_fcall trf_11711(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11711(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11711(t0,t1,t2);}

C_noret_decl(trf_11658)
static void C_fcall trf_11658(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11658(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11658(t0,t1,t2);}

C_noret_decl(trf_11737)
static void C_fcall trf_11737(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11737(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11737(t0,t1,t2);}

C_noret_decl(trf_11825)
static void C_fcall trf_11825(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11825(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11825(t0,t1,t2);}

C_noret_decl(trf_11833)
static void C_fcall trf_11833(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11833(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11833(t0,t1,t2);}

C_noret_decl(trf_11781)
static void C_fcall trf_11781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11781(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11781(t0,t1,t2);}

C_noret_decl(trf_11298)
static void C_fcall trf_11298(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11298(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11298(t0,t1,t2);}

C_noret_decl(trf_11304)
static void C_fcall trf_11304(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11304(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11304(t0,t1,t2,t3);}

C_noret_decl(trf_11338)
static void C_fcall trf_11338(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11338(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11338(t0,t1);}

C_noret_decl(trf_11560)
static void C_fcall trf_11560(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11560(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11560(t0,t1,t2);}

C_noret_decl(trf_11568)
static void C_fcall trf_11568(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11568(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11568(t0,t1,t2);}

C_noret_decl(trf_11473)
static void C_fcall trf_11473(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11473(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11473(t0,t1,t2);}

C_noret_decl(trf_11502)
static void C_fcall trf_11502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11502(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11502(t0,t1,t2);}

C_noret_decl(trf_11429)
static void C_fcall trf_11429(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11429(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11429(t0,t1,t2);}

C_noret_decl(trf_11437)
static void C_fcall trf_11437(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11437(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11437(t0,t1,t2);}

C_noret_decl(trf_11349)
static void C_fcall trf_11349(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11349(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11349(t0,t1,t2,t3);}

C_noret_decl(trf_11017)
static void C_fcall trf_11017(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11017(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11017(t0,t1,t2);}

C_noret_decl(trf_11023)
static void C_fcall trf_11023(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11023(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11023(t0,t1,t2,t3);}

C_noret_decl(trf_11057)
static void C_fcall trf_11057(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11057(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11057(t0,t1);}

C_noret_decl(trf_11159)
static void C_fcall trf_11159(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11159(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11159(t0,t1,t2);}

C_noret_decl(trf_11167)
static void C_fcall trf_11167(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11167(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11167(t0,t1,t2);}

C_noret_decl(trf_11116)
static void C_fcall trf_11116(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11116(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11116(t0,t1);}

C_noret_decl(trf_11068)
static void C_fcall trf_11068(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11068(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11068(t0,t1,t2,t3);}

C_noret_decl(trf_10884)
static void C_fcall trf_10884(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10884(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10884(t0,t1,t2,t3);}

C_noret_decl(trf_10939)
static void C_fcall trf_10939(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10939(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10939(t0,t1,t2,t3);}

C_noret_decl(trf_10961)
static void C_fcall trf_10961(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10961(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10961(t0,t1,t2);}

C_noret_decl(trf_10988)
static void C_fcall trf_10988(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10988(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10988(t0,t1,t2);}

C_noret_decl(trf_10596)
static void C_fcall trf_10596(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10596(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10596(t0,t1,t2);}

C_noret_decl(trf_10809)
static void C_fcall trf_10809(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10809(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10809(t0,t1,t2);}

C_noret_decl(trf_10817)
static void C_fcall trf_10817(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10817(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10817(t0,t1,t2);}

C_noret_decl(trf_10599)
static void C_fcall trf_10599(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10599(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10599(t0,t1,t2,t3);}

C_noret_decl(trf_10775)
static void C_fcall trf_10775(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10775(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10775(t0,t1,t2);}

C_noret_decl(trf_10783)
static void C_fcall trf_10783(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10783(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10783(t0,t1,t2);}

C_noret_decl(trf_10704)
static void C_fcall trf_10704(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10704(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10704(t0,t1,t2,t3);}

C_noret_decl(trf_10639)
static void C_fcall trf_10639(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10639(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10639(t0,t1);}

C_noret_decl(trf_10642)
static void C_fcall trf_10642(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10642(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10642(t0,t1);}

C_noret_decl(trf_10647)
static void C_fcall trf_10647(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10647(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10647(t0,t1,t2);}

C_noret_decl(trf_10655)
static void C_fcall trf_10655(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10655(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10655(t0,t1,t2);}

C_noret_decl(trf_10490)
static void C_fcall trf_10490(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10490(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10490(t0,t1);}

C_noret_decl(trf_10527)
static void C_fcall trf_10527(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10527(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10527(t0,t1);}

C_noret_decl(trf_9758)
static void C_fcall trf_9758(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9758(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_9758(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_9786)
static void C_fcall trf_9786(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9786(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9786(t0,t1);}

C_noret_decl(trf_10084)
static void C_fcall trf_10084(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10084(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10084(t0,t1,t2);}

C_noret_decl(trf_10399)
static void C_fcall trf_10399(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10399(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10399(t0,t1,t2);}

C_noret_decl(trf_10373)
static void C_fcall trf_10373(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10373(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10373(t0,t1,t2);}

C_noret_decl(trf_10200)
static void C_fcall trf_10200(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10200(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10200(t0,t1,t2);}

C_noret_decl(trf_9977)
static void C_fcall trf_9977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9977(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9977(t0,t1,t2);}

C_noret_decl(trf_9985)
static void C_fcall trf_9985(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9985(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9985(t0,t1,t2);}

C_noret_decl(trf_9835)
static void C_fcall trf_9835(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9835(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9835(t0,t1,t2);}

C_noret_decl(trf_9304)
static void C_fcall trf_9304(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9304(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_9304(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_9307)
static void C_fcall trf_9307(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9307(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_9307(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_9570)
static void C_fcall trf_9570(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9570(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9570(t0,t1);}

C_noret_decl(trf_9523)
static void C_fcall trf_9523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9523(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9523(t0,t1);}

C_noret_decl(trf_9482)
static void C_fcall trf_9482(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9482(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9482(t0,t1);}

C_noret_decl(trf_9105)
static void C_fcall trf_9105(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9105(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_9105(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9276)
static void C_fcall trf_9276(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9276(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9276(t0,t1,t2);}

C_noret_decl(trf_9284)
static void C_fcall trf_9284(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9284(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9284(t0,t1,t2);}

C_noret_decl(trf_9024)
static void C_fcall trf_9024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9024(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9024(t0,t1,t2,t3);}

C_noret_decl(trf_6712)
static void C_fcall trf_6712(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6712(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6712(t0,t1);}

C_noret_decl(trf_8337)
static void C_fcall trf_8337(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8337(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8337(t0,t1);}

C_noret_decl(trf_8252)
static void C_fcall trf_8252(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8252(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8252(t0,t1);}

C_noret_decl(trf_7966)
static void C_fcall trf_7966(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7966(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7966(t0,t1);}

C_noret_decl(trf_7795)
static void C_fcall trf_7795(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7795(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7795(t0,t1);}

C_noret_decl(trf_7469)
static void C_fcall trf_7469(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7469(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7469(t0,t1);}

C_noret_decl(trf_7472)
static void C_fcall trf_7472(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7472(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7472(t0,t1);}

C_noret_decl(trf_7585)
static void C_fcall trf_7585(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7585(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7585(t0,t1,t2);}

C_noret_decl(trf_7550)
static void C_fcall trf_7550(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7550(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7550(t0,t1,t2);}

C_noret_decl(trf_6934)
static void C_fcall trf_6934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6934(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6934(t0,t1);}

C_noret_decl(trf_6752)
static void C_fcall trf_6752(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6752(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6752(t0,t1);}

C_noret_decl(trf_6614)
static void C_fcall trf_6614(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6614(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6614(t0,t1,t2,t3);}

C_noret_decl(trf_6627)
static void C_fcall trf_6627(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6627(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6627(t0,t1);}

C_noret_decl(trf_6567)
static void C_fcall trf_6567(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6567(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6567(t0,t1,t2,t3);}

C_noret_decl(trf_6575)
static void C_fcall trf_6575(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6575(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6575(t0,t1,t2,t3);}

C_noret_decl(trf_6487)
static void C_fcall trf_6487(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6487(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6487(t0,t1,t2);}

C_noret_decl(trf_6495)
static void C_fcall trf_6495(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6495(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6495(t0,t1,t2);}

C_noret_decl(trf_6406)
static void C_fcall trf_6406(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6406(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6406(t0,t1,t2);}

C_noret_decl(trf_6414)
static void C_fcall trf_6414(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6414(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6414(t0,t1,t2);}

C_noret_decl(trf_6271)
static void C_fcall trf_6271(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6271(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6271(t0,t1);}

C_noret_decl(trf_6184)
static void C_fcall trf_6184(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6184(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6184(t0,t1,t2,t3);}

C_noret_decl(trf_6190)
static void C_fcall trf_6190(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6190(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6190(t0,t1,t2,t3);}

C_noret_decl(trf_5890)
static void C_fcall trf_5890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5890(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5890(t0,t1,t2);}

C_noret_decl(trf_5898)
static void C_fcall trf_5898(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5898(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5898(t0,t1,t2);}

C_noret_decl(trf_5925)
static void C_fcall trf_5925(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5925(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5925(t0,t1);}

C_noret_decl(trf_5945)
static void C_fcall trf_5945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5945(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5945(t0,t1);}

C_noret_decl(trf_5957)
static void C_fcall trf_5957(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5957(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5957(t0,t1);}

C_noret_decl(trf_5966)
static void C_fcall trf_5966(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5966(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5966(t0,t1);}

C_noret_decl(trf_5851)
static void C_fcall trf_5851(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5851(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5851(t0,t1,t2,t3);}

C_noret_decl(trf_5780)
static void C_fcall trf_5780(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5780(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5780(t0,t1,t2);}

C_noret_decl(trf_5696)
static void C_fcall trf_5696(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5696(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5696(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4438)
static void C_fcall trf_4438(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4438(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4438(t0,t1,t2,t3);}

C_noret_decl(trf_5646)
static void C_fcall trf_5646(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5646(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5646(t0,t1);}

C_noret_decl(trf_5606)
static void C_fcall trf_5606(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5606(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5606(t0,t1);}

C_noret_decl(trf_5060)
static void C_fcall trf_5060(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5060(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5060(t0,t1);}

C_noret_decl(trf_5086)
static void C_fcall trf_5086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5086(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5086(t0,t1);}

C_noret_decl(trf_5336)
static void C_fcall trf_5336(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5336(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5336(t0,t1);}

C_noret_decl(trf_5172)
static void C_fcall trf_5172(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5172(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5172(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4935)
static void C_fcall trf_4935(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4935(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4935(t0,t1);}

C_noret_decl(trf_4890)
static void C_fcall trf_4890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4890(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4890(t0,t1);}

C_noret_decl(trf_4562)
static void C_fcall trf_4562(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4562(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4562(t0,t1);}

C_noret_decl(trf_4478)
static void C_fcall trf_4478(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4478(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4478(t0,t1,t2);}

C_noret_decl(trf_4157)
static void C_fcall trf_4157(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4157(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4157(t0,t1,t2,t3);}

C_noret_decl(trf_4343)
static void C_fcall trf_4343(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4343(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4343(t0,t1,t2);}

C_noret_decl(trf_4278)
static void C_fcall trf_4278(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4278(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4278(t0,t1);}

C_noret_decl(trf_4026)
static void C_fcall trf_4026(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4026(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4026(t0,t1,t2);}

C_noret_decl(trf_4100)
static void C_fcall trf_4100(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4100(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4100(t0,t1,t2);}

C_noret_decl(trf_3986)
static void C_fcall trf_3986(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3986(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3986(t0,t1,t2,t3);}

C_noret_decl(trf_3810)
static void C_fcall trf_3810(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3810(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3810(t0,t1,t2,t3);}

C_noret_decl(trf_3877)
static void C_fcall trf_3877(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3877(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3877(t0,t1);}

C_noret_decl(trf_3850)
static void C_fcall trf_3850(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3850(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3850(t0,t1);}

C_noret_decl(trf_3776)
static void C_fcall trf_3776(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3776(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3776(t0,t1,t2,t3);}

C_noret_decl(trf_3782)
static void C_fcall trf_3782(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3782(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3782(t0,t1,t2);}

C_noret_decl(trf_3790)
static void C_fcall trf_3790(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3790(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3790(t0,t1,t2);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr10)
static void C_fcall tr10(C_proc10 k) C_regparm C_noret;
C_regparm static void C_fcall tr10(C_proc10 k){
C_word t9=C_pick(0);
C_word t8=C_pick(1);
C_word t7=C_pick(2);
C_word t6=C_pick(3);
C_word t5=C_pick(4);
C_word t4=C_pick(5);
C_word t3=C_pick(6);
C_word t2=C_pick(7);
C_word t1=C_pick(8);
C_word t0=C_pick(9);
C_adjust_stack(-10);
(k)(10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

C_noret_decl(tr14)
static void C_fcall tr14(C_proc14 k) C_regparm C_noret;
C_regparm static void C_fcall tr14(C_proc14 k){
C_word t13=C_pick(0);
C_word t12=C_pick(1);
C_word t11=C_pick(2);
C_word t10=C_pick(3);
C_word t9=C_pick(4);
C_word t8=C_pick(5);
C_word t7=C_pick(6);
C_word t6=C_pick(7);
C_word t5=C_pick(8);
C_word t4=C_pick(9);
C_word t3=C_pick(10);
C_word t2=C_pick(11);
C_word t1=C_pick(12);
C_word t0=C_pick(13);
C_adjust_stack(-14);
(k)(14,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);}

C_noret_decl(tr11)
static void C_fcall tr11(C_proc11 k) C_regparm C_noret;
C_regparm static void C_fcall tr11(C_proc11 k){
C_word t10=C_pick(0);
C_word t9=C_pick(1);
C_word t8=C_pick(2);
C_word t7=C_pick(3);
C_word t6=C_pick(4);
C_word t5=C_pick(5);
C_word t4=C_pick(6);
C_word t3=C_pick(7);
C_word t2=C_pick(8);
C_word t1=C_pick(9);
C_word t0=C_pick(10);
C_adjust_stack(-11);
(k)(11,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}

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

C_noret_decl(tr9)
static void C_fcall tr9(C_proc9 k) C_regparm C_noret;
C_regparm static void C_fcall tr9(C_proc9 k){
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
(k)(9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}

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
C_optimizer_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_optimizer_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("optimizer_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1967)){
C_save(t1);
C_rereclaim2(1967*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,266);
lf[0]=C_h_intern(&lf[0],34,"\010compilerscan-toplevel-assignments");
lf[1]=C_h_intern(&lf[1],8,"\003sysput!");
lf[2]=C_h_intern(&lf[2],21,"\010compileralways-bound");
lf[3]=C_h_intern(&lf[3],9,"\003syserror");
lf[4]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[5]=C_h_intern(&lf[5],12,"\003sysfor-each");
lf[6]=C_h_intern(&lf[6],18,"\010compilerdebugging");
lf[7]=C_h_intern(&lf[7],1,"o");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000\014safe globals");
lf[9]=C_h_intern(&lf[9],13,"\004corevariable");
lf[10]=C_h_intern(&lf[10],2,"if");
lf[11]=C_h_intern(&lf[11],3,"let");
lf[12]=C_h_intern(&lf[12],6,"append");
lf[13]=C_h_intern(&lf[13],6,"lambda");
lf[14]=C_h_intern(&lf[14],13,"\004corecallunit");
lf[15]=C_h_intern(&lf[15],9,"\004corecall");
lf[16]=C_h_intern(&lf[16],4,"set!");
lf[17]=C_h_intern(&lf[17],9,"\004corecond");
lf[18]=C_h_intern(&lf[18],11,"\004coreswitch");
lf[19]=C_h_intern(&lf[19],30,"call-with-current-continuation");
lf[20]=C_h_intern(&lf[20],1,"p");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000 scanning toplevel assignments...");
lf[22]=C_h_intern(&lf[22],24,"\010compilersimplifications");
lf[23]=C_h_intern(&lf[23],23,"\010compilersimplified-ops");
lf[24]=C_h_intern(&lf[24],41,"\010compilerperform-high-level-optimizations");
lf[25]=C_h_intern(&lf[25],12,"\010compilerget");
lf[26]=C_h_intern(&lf[26],5,"quote");
lf[27]=C_h_intern(&lf[27],10,"alist-cons");
lf[28]=C_h_intern(&lf[28],4,"caar");
lf[29]=C_h_intern(&lf[29],19,"\010compilermatch-node");
lf[30]=C_h_intern(&lf[30],3,"any");
lf[31]=C_h_intern(&lf[31],18,"\003syshash-table-ref");
lf[32]=C_h_intern(&lf[32],30,"\010compilerbroken-constant-nodes");
lf[33]=C_h_intern(&lf[33],11,"lset-adjoin");
lf[34]=C_h_intern(&lf[34],3,"eq\077");
lf[35]=C_h_intern(&lf[35],4,"node");
lf[36]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[37]=C_h_intern(&lf[37],14,"\010compilerqnode");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\033folding constant expression");
lf[39]=C_h_intern(&lf[39],4,"eval");
lf[40]=C_h_intern(&lf[40],22,"with-exception-handler");
lf[41]=C_h_intern(&lf[41],5,"every");
lf[42]=C_h_intern(&lf[42],9,"foldable\077");
lf[43]=C_h_intern(&lf[43],7,"\003sysget");
lf[44]=C_h_intern(&lf[44],18,"\010compilerintrinsic");
lf[45]=C_h_intern(&lf[45],5,"value");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\035substituted constant variable");
lf[47]=C_h_intern(&lf[47],16,"\010compilervarnode");
lf[48]=C_h_intern(&lf[48],11,"collapsable");
lf[49]=C_h_intern(&lf[49],10,"replacable");
lf[50]=C_h_intern(&lf[50],7,"\003sysmap");
lf[51]=C_h_intern(&lf[51],9,"replacing");
lf[52]=C_h_intern(&lf[52],12,"contractable");
lf[53]=C_h_intern(&lf[53],9,"removable");
lf[54]=C_h_intern(&lf[54],11,"\004corelambda");
lf[55]=C_h_intern(&lf[55],6,"unused");
lf[56]=C_h_intern(&lf[56],9,"partition");
lf[57]=C_h_intern(&lf[57],26,"\010compilerbuild-lambda-list");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\047merged explicitly consed rest parameter");
lf[59]=C_h_intern(&lf[59],13,"explicit-rest");
lf[60]=C_decode_literal(C_heaptop,"\376B\000\000 removed unused formal parameters");
lf[61]=C_h_intern(&lf[61],30,"\010compilerdecompose-lambda-list");
lf[62]=C_decode_literal(C_heaptop,"\376B\000\000\047merged explicitly consed rest parameter");
lf[63]=C_h_intern(&lf[63],21,"has-unused-parameters");
lf[64]=C_h_intern(&lf[64],31,"\010compilerinline-lambda-bindings");
lf[65]=C_h_intern(&lf[65],13,"\010compilerput!");
lf[66]=C_h_intern(&lf[66],13,"inline-target");
lf[67]=C_decode_literal(C_heaptop,"\376B\000\000\024contracted procedure");
lf[68]=C_h_intern(&lf[68],24,"\010compilercheck-signature");
lf[69]=C_h_intern(&lf[69],30,"\010compilerconstant-declarations");
lf[70]=C_h_intern(&lf[70],14,"\004coreundefined");
lf[71]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[72]=C_h_intern(&lf[72],1,"x");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\0005removed call to constant procedure with unused result");
lf[74]=C_h_intern(&lf[74],37,"\010compilerexpression-has-side-effects\077");
lf[75]=C_h_intern(&lf[75],8,"assigned");
lf[76]=C_h_intern(&lf[76],10,"references");
lf[77]=C_h_intern(&lf[77],7,"unknown");
lf[78]=C_decode_literal(C_heaptop,"\376B\000\000\022inlining procedure");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\017global inlining");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\010inlining");
lf[81]=C_h_intern(&lf[81],1,"i");
lf[82]=C_h_intern(&lf[82],22,"\010compilerinline-global");
lf[83]=C_h_intern(&lf[83],14,"append-reverse");
lf[84]=C_h_intern(&lf[84],6,"gensym");
lf[85]=C_h_intern(&lf[85],1,"t");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000+removed unused parameter to known procedure");
lf[87]=C_h_intern(&lf[87],8,"split-at");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[89]=C_h_intern(&lf[89],20,"\004coreinline_allocate");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\042consed rest parameter at call site");
lf[91]=C_h_intern(&lf[91],21,"\010compilerllist-length");
lf[92]=C_h_intern(&lf[92],23,"\010compilerinline-locally");
lf[93]=C_h_intern(&lf[93],3,"yes");
lf[94]=C_h_intern(&lf[94],2,"no");
lf[95]=C_h_intern(&lf[95],24,"\010compilerinline-max-size");
lf[96]=C_h_intern(&lf[96],15,"\010compilerinline");
lf[97]=C_h_intern(&lf[97],9,"inlinable");
lf[98]=C_h_intern(&lf[98],11,"local-value");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\0006removed side-effect free assignment to unused variable");
lf[100]=C_h_intern(&lf[100],16,"inline-transient");
lf[101]=C_h_intern(&lf[101],26,"\010compilervariable-visible\077");
lf[102]=C_h_intern(&lf[102],6,"global");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\031removed conditional forms");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\025removed binding forms");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\022replaced variables");
lf[106]=C_h_intern(&lf[106],5,"print");
lf[107]=C_h_intern(&lf[107],7,"newline");
lf[108]=C_h_intern(&lf[108],6,"print*");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\027  call simplifications:");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\017simplifications");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\022traversal phase...");
lf[112]=C_h_intern(&lf[112],34,"\010compilerperform-pre-optimization!");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\023Removed `not\047 forms");
lf[114]=C_h_intern(&lf[114],24,"node-subexpressions-set!");
lf[115]=C_h_intern(&lf[115],7,"reverse");
lf[116]=C_h_intern(&lf[116],20,"node-parameters-set!");
lf[117]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[118]=C_h_intern(&lf[118],17,"\010compilerget-list");
lf[119]=C_h_intern(&lf[119],3,"not");
lf[120]=C_h_intern(&lf[120],10,"call-sites");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\031pre-optimization phase...");
lf[122]=C_h_intern(&lf[122],24,"register-simplifications");
lf[123]=C_h_intern(&lf[123],19,"\003syshash-table-set!");
lf[124]=C_h_intern(&lf[124],38,"\010compilerreorganize-recursive-bindings");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000!converted assignments to bindings");
lf[126]=C_h_intern(&lf[126],10,"fold-right");
lf[127]=C_h_intern(&lf[127],4,"fold");
lf[128]=C_h_intern(&lf[128],16,"topological-sort");
lf[129]=C_h_intern(&lf[129],6,"lset<=");
lf[130]=C_h_intern(&lf[130],10,"filter-map");
lf[131]=C_h_intern(&lf[131],6,"filter");
lf[132]=C_h_intern(&lf[132],10,"append-map");
lf[133]=C_h_intern(&lf[133],28,"\010compilerscan-used-variables");
lf[134]=C_h_intern(&lf[134],4,"cons");
lf[135]=C_h_intern(&lf[135],27,"\010compilersubstitution-table");
lf[136]=C_h_intern(&lf[136],16,"\010compilerrewrite");
lf[137]=C_h_intern(&lf[137],28,"\010compilersimplify-named-call");
lf[138]=C_h_intern(&lf[138],37,"\010compilerinline-substitutions-enabled");
lf[139]=C_h_intern(&lf[139],11,"\004coreinline");
lf[140]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[141]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[142]=C_h_intern(&lf[142],6,"unsafe");
lf[143]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[144]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[145]=C_h_intern(&lf[145],6,"vector");
lf[146]=C_h_intern(&lf[146],14,"rest-parameter");
lf[147]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[148]=C_h_intern(&lf[148],11,"number-type");
lf[149]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[150]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[151]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[152]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[153]=C_h_intern(&lf[153],6,"fixnum");
lf[154]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[155]=C_h_intern(&lf[155],21,"\010compilerfold-boolean");
lf[156]=C_h_intern(&lf[156],6,"flonum");
lf[157]=C_h_intern(&lf[157],7,"generic");
lf[158]=C_h_intern(&lf[158],5,"cons*");
lf[159]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[160]=C_h_intern(&lf[160],9,"\004coreproc");
lf[161]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[162]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[163]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[164]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[165]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[166]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[167]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[168]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[169]=C_h_intern(&lf[169],19,"\010compilerfold-inner");
lf[170]=C_h_intern(&lf[170],6,"remove");
lf[171]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[172]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[173]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[174]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[175]=C_h_intern(&lf[175],5,"fifth");
lf[176]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[177]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[178]=C_h_intern(&lf[178],13,"\010compilerbomb");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\023bad type (optimize)");
lf[180]=C_h_intern(&lf[180],34,"\010compilertransform-direct-lambdas!");
lf[181]=C_h_intern(&lf[181],5,"boxed");
lf[182]=C_h_intern(&lf[182],18,"\004coredirect_lambda");
lf[183]=C_h_intern(&lf[183],15,"\004coreinline_ref");
lf[184]=C_h_intern(&lf[184],37,"\010compilerestimate-foreign-result-size");
lf[185]=C_h_intern(&lf[185],19,"\004coreinline_loc_ref");
lf[186]=C_h_intern(&lf[186],16,"\004coredirect_call");
lf[187]=C_h_intern(&lf[187],5,"lset=");
lf[188]=C_h_intern(&lf[188],6,"delete");
lf[189]=C_h_intern(&lf[189],19,"\010compilercopy-node!");
lf[190]=C_h_intern(&lf[190],4,"quit");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000;known procedure called with wrong number of arguments: `~A\047");
lf[192]=C_h_intern(&lf[192],15,"lset-difference");
lf[193]=C_h_intern(&lf[193],15,"node-class-set!");
lf[194]=C_h_intern(&lf[194],12,"\004corerecurse");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000Gknown procedure called recursively with wrong number of arguments: `~A\047");
lf[196]=C_h_intern(&lf[196],4,"take");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000Gknown procedure called recursively with wrong number of arguments: `~A\047");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\014missing kvar");
lf[199]=C_h_intern(&lf[199],11,"\004corereturn");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\017bad call (leaf)");
lf[201]=C_h_intern(&lf[201],6,"cdaddr");
lf[202]=C_h_intern(&lf[202],6,"caaddr");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid parameter list");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\0006direct leaf routine with hoistable closures/allocation");
lf[205]=C_h_intern(&lf[205],6,"unzip1");
lf[206]=C_h_intern(&lf[206],16,"\003sysmake-promise");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\036direct leaf routine/allocation");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000(direct leaf routine optimization pass...");
lf[209]=C_h_intern(&lf[209],32,"\010compilerperform-lambda-lifting!");
lf[210]=C_h_intern(&lf[210],23,"\003syshash-table-for-each");
lf[211]=C_h_intern(&lf[211],1,"+");
lf[212]=C_h_intern(&lf[212],17,"delete-duplicates");
lf[213]=C_h_intern(&lf[213],14,"\004coreprimitive");
lf[214]=C_h_intern(&lf[214],7,"delete!");
lf[215]=C_h_intern(&lf[215],11,"concatenate");
lf[216]=C_h_intern(&lf[216],5,"count");
lf[217]=C_h_intern(&lf[217],22,"\010compilerhide-variable");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\037moving liftables to toplevel...");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\032removing local bindings...");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\026changing call sites...");
lf[221]=C_h_intern(&lf[221],12,"pretty-print");
lf[222]=C_h_intern(&lf[222],1,"l");
lf[223]=C_decode_literal(C_heaptop,"\376B\000\000\026additional parameters:");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\035gathering extra parameters...");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\031liftable local procedures");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000Aeliminating liftables by access-lists and non-liftable callees...");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\014accessibles:");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\031computing access-lists...");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\013call-graph:");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\034eliminating non-liftables...");
lf[231]=C_decode_literal(C_heaptop,"\376B\000\000\026building call graph...");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\026gathering liftables...");
lf[233]=C_h_intern(&lf[233],11,"make-vector");
lf[234]=C_h_intern(&lf[234],3,"var");
lf[235]=C_h_intern(&lf[235],1,"y");
lf[236]=C_h_intern(&lf[236],2,"d2");
lf[237]=C_h_intern(&lf[237],1,"z");
lf[238]=C_h_intern(&lf[238],2,"d3");
lf[239]=C_h_intern(&lf[239],2,"d1");
lf[240]=C_h_intern(&lf[240],2,"op");
lf[241]=C_h_intern(&lf[241],5,"clist");
lf[242]=C_h_intern(&lf[242],34,"\010compilermembership-test-operators");
lf[243]=C_h_intern(&lf[243],32,"\010compilermembership-unfold-limit");
lf[244]=C_h_intern(&lf[244],4,"var1");
lf[245]=C_h_intern(&lf[245],4,"var0");
lf[246]=C_h_intern(&lf[246],6,"const1");
lf[247]=C_h_intern(&lf[247],4,"var2");
lf[248]=C_h_intern(&lf[248],6,"const2");
lf[249]=C_h_intern(&lf[249],4,"rest");
lf[250]=C_h_intern(&lf[250],5,"body2");
lf[251]=C_h_intern(&lf[251],5,"body1");
lf[252]=C_h_intern(&lf[252],27,"\010compilereq-inline-operator");
lf[253]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\002\376\377\016");
lf[254]=C_h_intern(&lf[254],19,"\010compilerimmediate\077");
lf[255]=C_h_intern(&lf[255],5,"const");
lf[256]=C_h_intern(&lf[256],1,"n");
lf[257]=C_h_intern(&lf[257],7,"clauses");
lf[258]=C_h_intern(&lf[258],4,"body");
lf[259]=C_h_intern(&lf[259],1,"d");
lf[260]=C_h_intern(&lf[260],4,"more");
lf[261]=C_h_intern(&lf[261],4,"args");
lf[262]=C_h_intern(&lf[262],1,"a");
lf[263]=C_h_intern(&lf[263],1,"b");
lf[264]=C_h_intern(&lf[264],1,"c");
lf[265]=C_h_intern(&lf[265],4,"cdar");
C_register_lf2(lf,266,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3703,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3701 */
static void C_ccall f_3703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3703,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3706,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3704 in k3701 */
static void C_ccall f_3706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3706,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! scan-toplevel-assignments ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3708,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3980,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("optimizer.scm: 105  make-vector");
((C_proc4)C_retrieve_proc(*((C_word*)lf[233]+1)))(4,*((C_word*)lf[233]+1),t3,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k3978 in k3704 in k3701 */
static void C_ccall f_3980(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3980,2,t0,t1);}
t2=C_mutate((C_word*)lf[22]+1 /* (set! simplifications ...) */,t1);
t3=C_set_block_item(lf[23] /* simplified-ops */,0,C_SCHEME_END_OF_LIST);
t4=C_mutate((C_word*)lf[24]+1 /* (set! perform-high-level-optimizations ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3983,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[112]+1 /* (set! perform-pre-optimization! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5844,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[122]+1 /* (set! register-simplifications ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6163,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6170,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_a_i_cons(&a,2,lf[262],C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,lf[9],t9);
t11=(C_word)C_a_i_cons(&a,2,lf[263],lf[264]);
t12=(C_word)C_a_i_cons(&a,2,t10,t11);
t13=(C_word)C_a_i_cons(&a,2,lf[259],t12);
t14=(C_word)C_a_i_cons(&a,2,lf[15],t13);
t15=(C_word)C_a_i_cons(&a,2,lf[259],C_SCHEME_END_OF_LIST);
t16=(C_word)C_a_i_cons(&a,2,lf[264],t15);
t17=(C_word)C_a_i_cons(&a,2,lf[263],t16);
t18=(C_word)C_a_i_cons(&a,2,lf[262],t17);
t19=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14556,tmp=(C_word)a,a+=2,tmp);
t20=(C_word)C_a_i_cons(&a,2,t19,C_SCHEME_END_OF_LIST);
t21=(C_word)C_a_i_cons(&a,2,t18,t20);
t22=(C_word)C_a_i_cons(&a,2,t14,t21);
t23=(C_word)C_a_i_list(&a,1,t22);
C_trace("optimizer.scm: 474  ##sys#hash-table-set!");
((C_proc5)C_retrieve_symbol_proc(lf[123]))(5,*((C_word*)lf[123]+1),t7,*((C_word*)lf[22]+1),lf[15],t23);}

/* a14555 in k3978 in k3704 in k3701 */
static void C_ccall f_14556(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_14556,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14564,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t6,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
C_trace("optimizer.scm: 483  ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[31]))(4,*((C_word*)lf[31]+1),t7,C_retrieve(lf[135]),t3);}

/* k14562 in a14555 in k3978 in k3704 in k3701 */
static void C_ccall f_14564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14564,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14569,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_14569(t6,((C_word*)t0)[2],t2);}

/* loop in k14562 in a14555 in k3978 in k3704 in k3701 */
static void C_fcall f_14569(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14569,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14579,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_14619,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t3,tmp=(C_word)a,a+=9,tmp);
C_trace("optimizer.scm: 485  caar");
((C_proc3)C_retrieve_proc(*((C_word*)lf[28]+1)))(3,*((C_word*)lf[28]+1),t4,t2);}}

/* k14617 in loop in k14562 in a14555 in k3978 in k3704 in k3701 */
static void C_ccall f_14619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_14623,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("optimizer.scm: 485  cdar");
((C_proc3)C_retrieve_proc(*((C_word*)lf[265]+1)))(3,*((C_word*)lf[265]+1),t2,((C_word*)t0)[2]);}

/* k14621 in k14617 in loop in k14562 in a14555 in k3978 in k3704 in k3701 */
static void C_ccall f_14623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 485  simplify-named-call");
((C_proc9)C_retrieve_symbol_proc(lf[137]))(9,*((C_word*)lf[137]+1),((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k14577 in loop in k14562 in a14555 in k3978 in k3704 in k3701 */
static void C_ccall f_14579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14579,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14583,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("g963964");
t3=t2;
f_14583(t3,((C_word*)t0)[4],t1);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("optimizer.scm: 492  loop");
t3=((C_word*)((C_word*)t0)[2])[1];
f_14569(t3,((C_word*)t0)[4],t2);}}

/* g963 in k14577 in loop in k14562 in a14555 in k3978 in k3704 in k3701 */
static void C_fcall f_14583(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14583,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_assq(((C_word*)t0)[2],C_retrieve(lf[23]));
if(C_truep(t3)){
t4=(C_word)C_i_cdr(t3);
t5=(C_word)C_fixnum_increase(t4);
t6=(C_word)C_i_set_cdr(t3,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14605,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 490  alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[27]))(5,*((C_word*)lf[27]+1),t4,((C_word*)t0)[2],C_fix(1),C_retrieve(lf[23]));}}

/* k14603 in g963 in k14577 in loop in k14562 in a14555 in k3978 in k3704 in k3701 */
static void C_ccall f_14605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[23]+1 /* (set! simplified-ops ...) */,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6170(C_word c,C_word t0,C_word t1){
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
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word t111;
C_word t112;
C_word t113;
C_word t114;
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word t128;
C_word t129;
C_word t130;
C_word t131;
C_word t132;
C_word t133;
C_word t134;
C_word t135;
C_word t136;
C_word t137;
C_word t138;
C_word t139;
C_word t140;
C_word t141;
C_word t142;
C_word t143;
C_word t144;
C_word t145;
C_word t146;
C_word t147;
C_word t148;
C_word t149;
C_word ab[446],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6170,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6173,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_a_i_cons(&a,2,lf[244],C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,lf[240],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[245],C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[9],t6);
t8=(C_word)C_a_i_cons(&a,2,lf[246],C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,lf[26],t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_cons(&a,2,t7,t11);
t13=(C_word)C_a_i_cons(&a,2,t4,t12);
t14=(C_word)C_a_i_cons(&a,2,lf[139],t13);
t15=(C_word)C_a_i_cons(&a,2,lf[244],C_SCHEME_END_OF_LIST);
t16=(C_word)C_a_i_cons(&a,2,t15,C_SCHEME_END_OF_LIST);
t17=(C_word)C_a_i_cons(&a,2,lf[9],t16);
t18=(C_word)C_a_i_cons(&a,2,lf[247],C_SCHEME_END_OF_LIST);
t19=(C_word)C_a_i_cons(&a,2,lf[240],C_SCHEME_END_OF_LIST);
t20=(C_word)C_a_i_cons(&a,2,lf[245],C_SCHEME_END_OF_LIST);
t21=(C_word)C_a_i_cons(&a,2,t20,C_SCHEME_END_OF_LIST);
t22=(C_word)C_a_i_cons(&a,2,lf[9],t21);
t23=(C_word)C_a_i_cons(&a,2,lf[248],C_SCHEME_END_OF_LIST);
t24=(C_word)C_a_i_cons(&a,2,t23,C_SCHEME_END_OF_LIST);
t25=(C_word)C_a_i_cons(&a,2,lf[26],t24);
t26=(C_word)C_a_i_cons(&a,2,t25,C_SCHEME_END_OF_LIST);
t27=(C_word)C_a_i_cons(&a,2,t22,t26);
t28=(C_word)C_a_i_cons(&a,2,t19,t27);
t29=(C_word)C_a_i_cons(&a,2,lf[139],t28);
t30=(C_word)C_a_i_cons(&a,2,lf[247],C_SCHEME_END_OF_LIST);
t31=(C_word)C_a_i_cons(&a,2,t30,C_SCHEME_END_OF_LIST);
t32=(C_word)C_a_i_cons(&a,2,lf[9],t31);
t33=(C_word)C_a_i_cons(&a,2,lf[249],C_SCHEME_END_OF_LIST);
t34=(C_word)C_a_i_cons(&a,2,lf[250],t33);
t35=(C_word)C_a_i_cons(&a,2,t32,t34);
t36=(C_word)C_a_i_cons(&a,2,lf[236],t35);
t37=(C_word)C_a_i_cons(&a,2,lf[10],t36);
t38=(C_word)C_a_i_cons(&a,2,t37,C_SCHEME_END_OF_LIST);
t39=(C_word)C_a_i_cons(&a,2,t29,t38);
t40=(C_word)C_a_i_cons(&a,2,t18,t39);
t41=(C_word)C_a_i_cons(&a,2,lf[11],t40);
t42=(C_word)C_a_i_cons(&a,2,t41,C_SCHEME_END_OF_LIST);
t43=(C_word)C_a_i_cons(&a,2,lf[251],t42);
t44=(C_word)C_a_i_cons(&a,2,t17,t43);
t45=(C_word)C_a_i_cons(&a,2,lf[239],t44);
t46=(C_word)C_a_i_cons(&a,2,lf[10],t45);
t47=(C_word)C_a_i_cons(&a,2,t46,C_SCHEME_END_OF_LIST);
t48=(C_word)C_a_i_cons(&a,2,t14,t47);
t49=(C_word)C_a_i_cons(&a,2,t3,t48);
t50=(C_word)C_a_i_cons(&a,2,lf[11],t49);
t51=(C_word)C_a_i_cons(&a,2,lf[249],C_SCHEME_END_OF_LIST);
t52=(C_word)C_a_i_cons(&a,2,lf[236],t51);
t53=(C_word)C_a_i_cons(&a,2,lf[239],t52);
t54=(C_word)C_a_i_cons(&a,2,lf[250],t53);
t55=(C_word)C_a_i_cons(&a,2,lf[251],t54);
t56=(C_word)C_a_i_cons(&a,2,lf[248],t55);
t57=(C_word)C_a_i_cons(&a,2,lf[246],t56);
t58=(C_word)C_a_i_cons(&a,2,lf[240],t57);
t59=(C_word)C_a_i_cons(&a,2,lf[247],t58);
t60=(C_word)C_a_i_cons(&a,2,lf[244],t59);
t61=(C_word)C_a_i_cons(&a,2,lf[245],t60);
t62=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14235,tmp=(C_word)a,a+=2,tmp);
t63=(C_word)C_a_i_cons(&a,2,t62,C_SCHEME_END_OF_LIST);
t64=(C_word)C_a_i_cons(&a,2,t61,t63);
t65=(C_word)C_a_i_cons(&a,2,t50,t64);
t66=(C_word)C_a_i_cons(&a,2,lf[234],C_SCHEME_END_OF_LIST);
t67=(C_word)C_a_i_cons(&a,2,lf[240],C_SCHEME_END_OF_LIST);
t68=(C_word)C_a_i_cons(&a,2,lf[245],C_SCHEME_END_OF_LIST);
t69=(C_word)C_a_i_cons(&a,2,t68,C_SCHEME_END_OF_LIST);
t70=(C_word)C_a_i_cons(&a,2,lf[9],t69);
t71=(C_word)C_a_i_cons(&a,2,lf[255],C_SCHEME_END_OF_LIST);
t72=(C_word)C_a_i_cons(&a,2,t71,C_SCHEME_END_OF_LIST);
t73=(C_word)C_a_i_cons(&a,2,lf[26],t72);
t74=(C_word)C_a_i_cons(&a,2,t73,C_SCHEME_END_OF_LIST);
t75=(C_word)C_a_i_cons(&a,2,t70,t74);
t76=(C_word)C_a_i_cons(&a,2,t67,t75);
t77=(C_word)C_a_i_cons(&a,2,lf[139],t76);
t78=(C_word)C_a_i_cons(&a,2,lf[234],C_SCHEME_END_OF_LIST);
t79=(C_word)C_a_i_cons(&a,2,t78,C_SCHEME_END_OF_LIST);
t80=(C_word)C_a_i_cons(&a,2,lf[9],t79);
t81=(C_word)C_a_i_cons(&a,2,lf[256],C_SCHEME_END_OF_LIST);
t82=(C_word)C_a_i_cons(&a,2,lf[245],C_SCHEME_END_OF_LIST);
t83=(C_word)C_a_i_cons(&a,2,t82,C_SCHEME_END_OF_LIST);
t84=(C_word)C_a_i_cons(&a,2,lf[9],t83);
t85=(C_word)C_a_i_cons(&a,2,t84,lf[257]);
t86=(C_word)C_a_i_cons(&a,2,t81,t85);
t87=(C_word)C_a_i_cons(&a,2,lf[18],t86);
t88=(C_word)C_a_i_cons(&a,2,t87,C_SCHEME_END_OF_LIST);
t89=(C_word)C_a_i_cons(&a,2,lf[258],t88);
t90=(C_word)C_a_i_cons(&a,2,t80,t89);
t91=(C_word)C_a_i_cons(&a,2,lf[259],t90);
t92=(C_word)C_a_i_cons(&a,2,lf[10],t91);
t93=(C_word)C_a_i_cons(&a,2,t92,C_SCHEME_END_OF_LIST);
t94=(C_word)C_a_i_cons(&a,2,t77,t93);
t95=(C_word)C_a_i_cons(&a,2,t66,t94);
t96=(C_word)C_a_i_cons(&a,2,lf[11],t95);
t97=(C_word)C_a_i_cons(&a,2,lf[257],C_SCHEME_END_OF_LIST);
t98=(C_word)C_a_i_cons(&a,2,lf[256],t97);
t99=(C_word)C_a_i_cons(&a,2,lf[258],t98);
t100=(C_word)C_a_i_cons(&a,2,lf[259],t99);
t101=(C_word)C_a_i_cons(&a,2,lf[255],t100);
t102=(C_word)C_a_i_cons(&a,2,lf[245],t101);
t103=(C_word)C_a_i_cons(&a,2,lf[240],t102);
t104=(C_word)C_a_i_cons(&a,2,lf[234],t103);
t105=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14014,tmp=(C_word)a,a+=2,tmp);
t106=(C_word)C_a_i_cons(&a,2,t105,C_SCHEME_END_OF_LIST);
t107=(C_word)C_a_i_cons(&a,2,t104,t106);
t108=(C_word)C_a_i_cons(&a,2,t96,t107);
t109=(C_word)C_a_i_cons(&a,2,lf[244],C_SCHEME_END_OF_LIST);
t110=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t111=(C_word)C_a_i_cons(&a,2,lf[70],t110);
t112=(C_word)C_a_i_cons(&a,2,lf[260],C_SCHEME_END_OF_LIST);
t113=(C_word)C_a_i_cons(&a,2,t111,t112);
t114=(C_word)C_a_i_cons(&a,2,t109,t113);
t115=(C_word)C_a_i_cons(&a,2,lf[11],t114);
t116=(C_word)C_a_i_cons(&a,2,lf[260],C_SCHEME_END_OF_LIST);
t117=(C_word)C_a_i_cons(&a,2,lf[244],t116);
t118=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13613,tmp=(C_word)a,a+=2,tmp);
t119=(C_word)C_a_i_cons(&a,2,t118,C_SCHEME_END_OF_LIST);
t120=(C_word)C_a_i_cons(&a,2,t117,t119);
t121=(C_word)C_a_i_cons(&a,2,t115,t120);
t122=(C_word)C_a_i_cons(&a,2,lf[234],C_SCHEME_END_OF_LIST);
t123=(C_word)C_a_i_cons(&a,2,lf[240],C_SCHEME_END_OF_LIST);
t124=(C_word)C_a_i_cons(&a,2,t123,lf[261]);
t125=(C_word)C_a_i_cons(&a,2,lf[139],t124);
t126=(C_word)C_a_i_cons(&a,2,lf[234],C_SCHEME_END_OF_LIST);
t127=(C_word)C_a_i_cons(&a,2,t126,C_SCHEME_END_OF_LIST);
t128=(C_word)C_a_i_cons(&a,2,lf[9],t127);
t129=(C_word)C_a_i_cons(&a,2,lf[235],C_SCHEME_END_OF_LIST);
t130=(C_word)C_a_i_cons(&a,2,lf[72],t129);
t131=(C_word)C_a_i_cons(&a,2,t128,t130);
t132=(C_word)C_a_i_cons(&a,2,lf[259],t131);
t133=(C_word)C_a_i_cons(&a,2,lf[10],t132);
t134=(C_word)C_a_i_cons(&a,2,t133,C_SCHEME_END_OF_LIST);
t135=(C_word)C_a_i_cons(&a,2,t125,t134);
t136=(C_word)C_a_i_cons(&a,2,t122,t135);
t137=(C_word)C_a_i_cons(&a,2,lf[11],t136);
t138=(C_word)C_a_i_cons(&a,2,lf[235],C_SCHEME_END_OF_LIST);
t139=(C_word)C_a_i_cons(&a,2,lf[72],t138);
t140=(C_word)C_a_i_cons(&a,2,lf[259],t139);
t141=(C_word)C_a_i_cons(&a,2,lf[261],t140);
t142=(C_word)C_a_i_cons(&a,2,lf[240],t141);
t143=(C_word)C_a_i_cons(&a,2,lf[234],t142);
t144=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13465,tmp=(C_word)a,a+=2,tmp);
t145=(C_word)C_a_i_cons(&a,2,t144,C_SCHEME_END_OF_LIST);
t146=(C_word)C_a_i_cons(&a,2,t143,t145);
t147=(C_word)C_a_i_cons(&a,2,t137,t146);
t148=(C_word)C_a_i_list(&a,4,t65,t108,t121,t147);
C_trace("optimizer.scm: 474  ##sys#hash-table-set!");
((C_proc5)C_retrieve_symbol_proc(lf[123]))(5,*((C_word*)lf[123]+1),t2,*((C_word*)lf[22]+1),lf[11],t148);}

/* a13464 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13465(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_13465,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
if(C_truep((C_word)C_i_equalp(t4,C_retrieve(lf[252])))){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
else{
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13511,a[2]=t6,a[3]=t1,a[4]=t8,a[5]=t7,a[6]=t5,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
C_trace("optimizer.scm: 633  get-list");
((C_proc5)C_retrieve_symbol_proc(lf[118]))(5,*((C_word*)lf[118]+1),t9,t2,t3,lf[76]);}}

/* k13509 in a13464 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13511(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_13511,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[7]);
t5=((C_word*)t0)[6];
t6=(C_word)C_a_i_record(&a,4,lf[35],lf[139],t4,t5);
t7=(C_word)C_a_i_list(&a,3,t6,((C_word*)t0)[5],((C_word*)t0)[4]);
t8=((C_word*)t0)[3];
t9=((C_word*)t0)[2];
t10=t8;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_record(&a,4,lf[35],lf[10],t9,t7));}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* a13612 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13613(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_13613,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_list(&a,1,t3);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13623,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_13623(t9,t1,t5,t4);}

/* loop1 in a13612 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_13623(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13623,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=(C_word)C_slot(t4,C_fix(1));
t6=t3;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t3;
t9=(C_word)C_slot(t8,C_fix(3));
t10=(C_word)C_eqp(t5,lf[11]);
if(C_truep(t10)){
t11=(C_word)C_i_cdr(t7);
if(C_truep((C_word)C_i_nullp(t11))){
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13960,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t7,a[6]=t9,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t13=(C_word)C_i_car(t7);
C_trace("optimizer.scm: 572  get");
((C_proc5)C_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),t12,((C_word*)t0)[2],t13,lf[100]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}

/* k13958 in loop1 in a13612 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13960,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13952,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
C_trace("optimizer.scm: 573  get");
((C_proc5)C_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),t2,((C_word*)t0)[2],t3,lf[76]);}}

/* k13950 in k13958 in loop1 in a13612 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13952(C_word c,C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13952,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_slot(t2,C_fix(2));
t4=(C_word)C_slot(t2,C_fix(3));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_eqp(t5,lf[70]);
if(C_truep(t6)){
t7=(C_word)C_i_car(((C_word*)t0)[5]);
t8=(C_word)C_a_i_cons(&a,2,t7,((C_word*)t0)[4]);
t9=(C_word)C_i_cadr(((C_word*)t0)[6]);
C_trace("optimizer.scm: 578  loop1");
t10=((C_word*)((C_word*)t0)[3])[1];
f_13623(t10,((C_word*)t0)[7],t8,t9);}
else{
t7=(C_word)C_eqp(t5,lf[16]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13729,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 580  reverse");
((C_proc3)C_retrieve_proc(*((C_word*)lf[115]+1)))(3,*((C_word*)lf[115]+1),t8,((C_word*)t0)[4]);}
else{
t8=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}}}

/* k13727 in k13950 in k13958 in loop1 in a13612 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13729(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13729,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_i_car(t1);
t4=(C_word)C_eqp(t2,t3);
if(C_truep(t4)){
t5=(C_word)C_i_car(((C_word*)t0)[5]);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_i_cdr(t1);
t8=(C_word)C_i_cadr(((C_word*)t0)[4]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13758,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_13758(t12,((C_word*)t0)[2],t6,t7,t8);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop2 in k13727 in k13950 in k13958 in loop1 in a13612 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_13758(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13758,NULL,5,t0,t1,t2,t3,t4);}
t5=t4;
t6=(C_word)C_slot(t5,C_fix(1));
t7=t4;
t8=(C_word)C_slot(t7,C_fix(2));
t9=t4;
t10=(C_word)C_slot(t9,C_fix(3));
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13789,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=t2,a[8]=t10,tmp=(C_word)a,a+=9,tmp);
t12=(C_word)C_eqp(t6,lf[11]);
if(C_truep(t12)){
t13=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t13))){
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13928,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t10,a[5]=t3,a[6]=t11,tmp=(C_word)a,a+=7,tmp);
t15=(C_word)C_i_car(t8);
C_trace("optimizer.scm: 591  get");
((C_proc5)C_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),t14,((C_word*)t0)[2],t15,lf[100]);}
else{
t14=t11;
f_13789(t14,C_SCHEME_FALSE);}}
else{
t13=t11;
f_13789(t13,C_SCHEME_FALSE);}}

/* k13926 in loop2 in k13727 in k13950 in k13958 in loop1 in a13612 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13928,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
f_13789(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13920,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
C_trace("optimizer.scm: 592  get");
((C_proc5)C_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),t2,((C_word*)t0)[2],t3,lf[76]);}}

/* k13918 in k13926 in loop2 in k13727 in k13950 in k13958 in loop1 in a13612 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13920(C_word c,C_word t0,C_word t1){
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
t2=((C_word*)t0)[4];
f_13789(t2,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t2=(C_word)C_i_car(((C_word*)t0)[2]);
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_eqp(lf[16],t3);
if(C_truep(t4)){
t5=(C_word)C_i_car(((C_word*)t0)[3]);
t6=(C_word)C_i_car(((C_word*)t0)[2]);
t7=(C_word)C_slot(t6,C_fix(2));
t8=(C_word)C_i_car(t7);
t9=((C_word*)t0)[4];
f_13789(t9,(C_word)C_eqp(t5,t8));}
else{
t5=((C_word*)t0)[4];
f_13789(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
f_13789(t2,C_SCHEME_FALSE);}}}

/* k13787 in loop2 in k13727 in k13950 in k13958 in loop1 in a13612 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_13789(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13789,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[8]);
t3=(C_word)C_slot(t2,C_fix(3));
t4=(C_word)C_i_car(t3);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[7]);
t6=(C_word)C_i_cdr(((C_word*)t0)[6]);
t7=(C_word)C_i_cadr(((C_word*)t0)[8]);
C_trace("optimizer.scm: 596  loop2");
t8=((C_word*)((C_word*)t0)[5])[1];
f_13758(t8,((C_word*)t0)[4],t5,t6,t7);}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[6]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13832,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13842,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* a13841 in k13787 in loop2 in k13727 in k13950 in k13958 in loop1 in a13612 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13842,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t2:C_SCHEME_FALSE));}

/* a13831 in k13787 in loop2 in k13727 in k13950 in k13958 in loop1 in a13612 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13832,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13840,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 601  reverse");
((C_proc3)C_retrieve_proc(*((C_word*)lf[115]+1)))(3,*((C_word*)lf[115]+1),t2,((C_word*)t0)[2]);}

/* k13838 in a13831 in k13787 in loop2 in k13727 in k13950 in k13958 in loop1 in a13612 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 601  reorganize-recursive-bindings");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a14013 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_14014(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10){
C_word tmp;
C_word t11;
C_word t12;
C_word ab[10],*a=ab;
if(c!=11) C_bad_argc_2(c,11,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr11,(void*)f_14014,11,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}
if(C_truep((C_word)C_i_equalp(t4,C_retrieve(lf[252])))){
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_14027,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=t6,a[6]=t10,a[7]=t8,a[8]=t1,a[9]=t9,tmp=(C_word)a,a+=10,tmp);
C_trace("optimizer.scm: 542  immediate?");
((C_proc3)C_retrieve_symbol_proc(lf[254]))(3,*((C_word*)lf[254]+1),t11,t6);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}

/* k14025 in a14013 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_14027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14027,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14069,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
C_trace("optimizer.scm: 543  get-list");
((C_proc5)C_retrieve_symbol_proc(lf[118]))(5,*((C_word*)lf[118]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[76]);}
else{
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k14067 in k14025 in a14013 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_14069(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_14069,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(C_word)C_fixnum_increase(((C_word*)t0)[7]);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14049,a[2]=t5,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14053,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 547  varnode");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t7,((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k14051 in k14067 in k14025 in a14013 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_14053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14053,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14057,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 548  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t2,((C_word*)t0)[2]);}

/* k14055 in k14051 in k14067 in k14025 in a14013 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_14057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 547  cons*");
((C_proc6)C_retrieve_symbol_proc(lf[158]))(6,*((C_word*)lf[158]+1),((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k14047 in k14067 in k14025 in a14013 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_14049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14049,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[35],lf[18],((C_word*)t0)[2],t1));}

/* a14234 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_14235(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13){
C_word tmp;
C_word t14;
C_word t15;
C_word ab[12],*a=ab;
if(c!=14) C_bad_argc_2(c,14,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr14,(void*)f_14235,14,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);}
if(C_truep((C_word)C_i_equalp(t6,C_retrieve(lf[252])))){
t14=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_14248,a[2]=t4,a[3]=t5,a[4]=t2,a[5]=t3,a[6]=t7,a[7]=t8,a[8]=t1,a[9]=t13,a[10]=t10,a[11]=t9,tmp=(C_word)a,a+=12,tmp);
C_trace("optimizer.scm: 515  immediate?");
((C_proc3)C_retrieve_symbol_proc(lf[254]))(3,*((C_word*)lf[254]+1),t14,t7);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}

/* k14246 in a14234 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_14248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14248,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_14254,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
C_trace("optimizer.scm: 516  immediate?");
((C_proc3)C_retrieve_symbol_proc(lf[254]))(3,*((C_word*)lf[254]+1),t2,((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k14252 in k14246 in a14234 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_14254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14254,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_14306,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
C_trace("optimizer.scm: 517  get-list");
((C_proc5)C_retrieve_symbol_proc(lf[118]))(5,*((C_word*)lf[118]+1),t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[76]);}
else{
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k14304 in k14252 in k14246 in a14234 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_14306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14306,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_14298,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
C_trace("optimizer.scm: 518  get-list");
((C_proc5)C_retrieve_symbol_proc(lf[118]))(5,*((C_word*)lf[118]+1),t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[76]);}
else{
t4=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k14296 in k14304 in k14252 in k14246 in a14234 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_14298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14298,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14282,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
C_trace("optimizer.scm: 522  varnode");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t4,((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k14280 in k14296 in k14304 in k14252 in k14246 in a14234 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_14282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14282,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14286,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace("optimizer.scm: 523  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t2,((C_word*)t0)[2]);}

/* k14284 in k14280 in k14296 in k14304 in k14252 in k14246 in a14234 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_14286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14286,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14290,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("optimizer.scm: 525  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t2,((C_word*)t0)[2]);}

/* k14288 in k14284 in k14280 in k14296 in k14304 in k14252 in k14246 in a14234 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_14290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14290,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,6,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[18],lf[253],t2));}

/* k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6173(C_word c,C_word t0,C_word t1){
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
C_word ab[166],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6173,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6176,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_a_i_cons(&a,2,lf[234],C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[9],t4);
t6=(C_word)C_a_i_cons(&a,2,lf[235],C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,t5,t6);
t8=(C_word)C_a_i_cons(&a,2,lf[236],t7);
t9=(C_word)C_a_i_cons(&a,2,lf[15],t8);
t10=(C_word)C_a_i_cons(&a,2,lf[234],C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_cons(&a,2,lf[9],t11);
t13=(C_word)C_a_i_cons(&a,2,lf[237],C_SCHEME_END_OF_LIST);
t14=(C_word)C_a_i_cons(&a,2,t12,t13);
t15=(C_word)C_a_i_cons(&a,2,lf[238],t14);
t16=(C_word)C_a_i_cons(&a,2,lf[15],t15);
t17=(C_word)C_a_i_cons(&a,2,t16,C_SCHEME_END_OF_LIST);
t18=(C_word)C_a_i_cons(&a,2,t9,t17);
t19=(C_word)C_a_i_cons(&a,2,lf[72],t18);
t20=(C_word)C_a_i_cons(&a,2,lf[239],t19);
t21=(C_word)C_a_i_cons(&a,2,lf[10],t20);
t22=(C_word)C_a_i_cons(&a,2,lf[234],C_SCHEME_END_OF_LIST);
t23=(C_word)C_a_i_cons(&a,2,lf[237],t22);
t24=(C_word)C_a_i_cons(&a,2,lf[235],t23);
t25=(C_word)C_a_i_cons(&a,2,lf[72],t24);
t26=(C_word)C_a_i_cons(&a,2,lf[238],t25);
t27=(C_word)C_a_i_cons(&a,2,lf[236],t26);
t28=(C_word)C_a_i_cons(&a,2,lf[239],t27);
t29=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13302,tmp=(C_word)a,a+=2,tmp);
t30=(C_word)C_a_i_cons(&a,2,t29,C_SCHEME_END_OF_LIST);
t31=(C_word)C_a_i_cons(&a,2,t28,t30);
t32=(C_word)C_a_i_cons(&a,2,t21,t31);
t33=(C_word)C_a_i_cons(&a,2,lf[240],C_SCHEME_END_OF_LIST);
t34=(C_word)C_a_i_cons(&a,2,lf[241],C_SCHEME_END_OF_LIST);
t35=(C_word)C_a_i_cons(&a,2,t34,C_SCHEME_END_OF_LIST);
t36=(C_word)C_a_i_cons(&a,2,lf[26],t35);
t37=(C_word)C_a_i_cons(&a,2,t36,C_SCHEME_END_OF_LIST);
t38=(C_word)C_a_i_cons(&a,2,lf[72],t37);
t39=(C_word)C_a_i_cons(&a,2,t33,t38);
t40=(C_word)C_a_i_cons(&a,2,lf[139],t39);
t41=(C_word)C_a_i_cons(&a,2,lf[237],C_SCHEME_END_OF_LIST);
t42=(C_word)C_a_i_cons(&a,2,lf[235],t41);
t43=(C_word)C_a_i_cons(&a,2,t40,t42);
t44=(C_word)C_a_i_cons(&a,2,lf[239],t43);
t45=(C_word)C_a_i_cons(&a,2,lf[10],t44);
t46=(C_word)C_a_i_cons(&a,2,lf[237],C_SCHEME_END_OF_LIST);
t47=(C_word)C_a_i_cons(&a,2,lf[235],t46);
t48=(C_word)C_a_i_cons(&a,2,lf[241],t47);
t49=(C_word)C_a_i_cons(&a,2,lf[72],t48);
t50=(C_word)C_a_i_cons(&a,2,lf[240],t49);
t51=(C_word)C_a_i_cons(&a,2,lf[239],t50);
t52=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13106,tmp=(C_word)a,a+=2,tmp);
t53=(C_word)C_a_i_cons(&a,2,t52,C_SCHEME_END_OF_LIST);
t54=(C_word)C_a_i_cons(&a,2,t51,t53);
t55=(C_word)C_a_i_cons(&a,2,t45,t54);
t56=(C_word)C_a_i_list(&a,2,t32,t55);
C_trace("optimizer.scm: 474  ##sys#hash-table-set!");
((C_proc5)C_retrieve_symbol_proc(lf[123]))(5,*((C_word*)lf[123]+1),t2,*((C_word*)lf[22]+1),lf[10],t56);}

/* a13105 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13106(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[9],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_13106,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(C_word)C_i_assoc(t4,C_retrieve(lf[242]));
if(C_truep(t9)){
if(C_truep((C_word)C_i_listp(t6))){
t10=(C_word)C_i_length(t6);
t11=C_retrieve(lf[243]);
if(C_truep((C_word)C_fixnum_lessp(t10,t11))){
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13128,a[2]=t6,a[3]=t1,a[4]=t5,a[5]=t3,a[6]=t8,a[7]=t7,a[8]=t9,tmp=(C_word)a,a+=9,tmp);
C_trace("optimizer.scm: 671  gensym");
((C_proc2)C_retrieve_symbol_proc(lf[84]))(2,*((C_word*)lf[84]+1),t12);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k13126 in a13105 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13128(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_13128,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[8]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_list(&a,1,t1);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13164,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13166,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13208,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 688  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t7,C_SCHEME_FALSE);}

/* k13206 in k13126 in a13105 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 680  fold-right");
((C_proc5)C_retrieve_symbol_proc(lf[126]))(5,*((C_word*)lf[126]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a13165 in k13126 in a13105 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13166(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13166,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13200,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 685  varnode");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t4,((C_word*)t0)[2]);}

/* k13198 in a13165 in k13126 in a13105 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13200,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13204,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 685  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t2,((C_word*)t0)[2]);}

/* k13202 in k13198 in a13165 in k13126 in a13105 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13204,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_record(&a,4,lf[35],lf[139],((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 686  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t4,C_SCHEME_TRUE);}

/* k13190 in k13202 in k13198 in a13165 in k13126 in a13105 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13192,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,((C_word*)t0)[4],t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[17],C_SCHEME_END_OF_LIST,t2));}

/* k13162 in k13126 in a13105 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13164,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,t1,((C_word*)t0)[7],((C_word*)t0)[6]);
t3=((C_word*)t0)[5];
t4=(C_word)C_a_i_record(&a,4,lf[35],lf[10],t3,t2);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t4);
t6=((C_word*)t0)[3];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[35],lf[11],((C_word*)t0)[2],t5));}

/* a13301 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13302(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(c!=10) C_bad_argc_2(c,10,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr10,(void*)f_13302,10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}
if(C_truep(C_retrieve(lf[138]))){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13322,a[2]=t4,a[3]=t1,a[4]=t8,a[5]=t7,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 656  varnode");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t10,t9);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k13320 in a13301 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13322,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(C_word)C_a_i_record(&a,4,lf[35],lf[17],C_SCHEME_END_OF_LIST,t2);
t4=(C_word)C_a_i_list(&a,2,t1,t3);
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[2];
t7=t5;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[35],lf[15],t6,t4));}

/* k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6176,2,t0,t1);}
t2=C_mutate((C_word*)lf[124]+1 /* (set! reorganize-recursive-bindings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6178,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6665,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("optimizer.scm: 783  make-vector");
((C_proc4)C_retrieve_proc(*((C_word*)lf[233]+1)))(4,*((C_word*)lf[233]+1),t3,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6665,2,t0,t1);}
t2=C_mutate((C_word*)lf[135]+1 /* (set! substitution-table ...) */,t1);
t3=C_mutate((C_word*)lf[136]+1 /* (set! rewrite ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6667,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[137]+1 /* (set! simplify-named-call ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6687,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[180]+1 /* (set! transform-direct-lambdas! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9102,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[209]+1 /* (set! perform-lambda-lifting! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10487,tmp=(C_word)a,a+=2,tmp));
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_UNDEFINED);}

/* ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10487(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[62],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10487,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
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
t24=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10490,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t25=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10596,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t26=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10884,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t27=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11017,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t28=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11298,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t29=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11609,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t30=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12018,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t31=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12546,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t32=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12744,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t33=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_12985,a[2]=t7,a[3]=t9,a[4]=t11,a[5]=t13,a[6]=t15,a[7]=t17,a[8]=t21,a[9]=t23,a[10]=t1,a[11]=t19,tmp=(C_word)a,a+=12,tmp);
C_trace("optimizer.scm: 1759 debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t33,lf[20],lf[232]);}

/* k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12985,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12988,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
C_trace("optimizer.scm: 1760 find-lifting-candidates");
t3=((C_word*)((C_word*)t0)[2])[1];
f_10490(t3,t2);}

/* k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12988,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_12991,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace("optimizer.scm: 1761 debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t2,lf[20],lf[231]);}

/* k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12991,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12994,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
C_trace("optimizer.scm: 1762 build-call-graph");
t3=((C_word*)((C_word*)t0)[2])[1];
f_10596(t3,t2,((C_word*)t0)[3]);}

/* k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12994,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_12997,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace("optimizer.scm: 1763 debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t2,lf[20],lf[230]);}

/* k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12997,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13000,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
C_trace("optimizer.scm: 1764 eliminate");
t3=((C_word*)((C_word*)t0)[4])[1];
f_10884(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13000,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_13003,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13077,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1765 debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t3,lf[222],lf[229]);}

/* k13075 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("optimizer.scm: 1765 pretty-print");
((C_proc3)C_retrieve_symbol_proc(lf[221]))(3,*((C_word*)lf[221]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_13003(2,t2,C_SCHEME_UNDEFINED);}}

/* k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13003,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_13006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
C_trace("optimizer.scm: 1766 debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t2,lf[20],lf[228]);}

/* k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13006,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13009,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
C_trace("optimizer.scm: 1767 collect-accessibles");
t3=((C_word*)((C_word*)t0)[2])[1];
f_11017(t3,t2,((C_word*)t0)[3]);}

/* k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13012,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13071,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1768 debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t3,lf[222],lf[227]);}

/* k13069 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("optimizer.scm: 1768 pretty-print");
((C_proc3)C_retrieve_symbol_proc(lf[221]))(3,*((C_word*)lf[221]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_13012(2,t2,C_SCHEME_UNDEFINED);}}

/* k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13012,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("optimizer.scm: 1769 debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t2,lf[20],lf[226]);}

/* k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13015,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13018,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13068,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("optimizer.scm: 1770 eliminate4");
t4=((C_word*)((C_word*)t0)[3])[1];
f_11298(t4,t3,((C_word*)t0)[2]);}

/* k13066 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13068,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11264,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_11264(t6,((C_word*)t0)[2],t1,t2);}

/* loop in k13066 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11264(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11264,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11268,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11282,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("optimizer.scm: 1564 filter");
((C_proc4)C_retrieve_symbol_proc(lf[131]))(4,*((C_word*)lf[131]+1),t4,t5,t2);}

/* a11281 in loop in k13066 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11282(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11282,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11288,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_cddr(t2);
C_trace("optimizer.scm: 1564 every");
((C_proc4)C_retrieve_symbol_proc(lf[41]))(4,*((C_word*)lf[41]+1),t1,t3,t4);}

/* a11287 in a11281 in loop in k13066 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11288(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11288,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_assq(t2,((C_word*)t0)[2]));}

/* k11266 in loop in k13066 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_i_length(t1);
t3=((C_word*)t0)[4];
t4=(C_word)C_eqp(t3,t2);
if(C_truep(t4)){
t5=t1;
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
C_trace("optimizer.scm: 1568 loop");
t5=((C_word*)((C_word*)t0)[2])[1];
f_11264(t5,((C_word*)t0)[3],t1,t2);}}

/* k13016 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13018,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13021,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13058,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13060,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#make-promise");
t5=*((C_word*)lf[206]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a13059 in k13016 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13060,2,t0,t1);}
C_trace("optimizer.scm: 1771 unzip1");
((C_proc3)C_retrieve_symbol_proc(lf[205]))(3,*((C_word*)lf[205]+1),t1,((C_word*)t0)[2]);}

/* k13056 in k13016 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1771 debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),((C_word*)t0)[2],lf[7],lf[225],t1);}

/* k13019 in k13016 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13021,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13024,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("optimizer.scm: 1772 debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t2,lf[20],lf[224]);}

/* k13022 in k13019 in k13016 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13024,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13027,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 1773 compute-extra-variables");
t3=((C_word*)((C_word*)t0)[2])[1];
f_11609(t3,t2,((C_word*)t0)[5]);}

/* k13025 in k13022 in k13019 in k13016 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13051,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1774 debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t3,lf[222],lf[223]);}

/* k13049 in k13025 in k13022 in k13019 in k13016 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("optimizer.scm: 1774 pretty-print");
((C_proc3)C_retrieve_symbol_proc(lf[221]))(3,*((C_word*)lf[221]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_13030(2,t2,C_SCHEME_UNDEFINED);}}

/* k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("optimizer.scm: 1775 debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t2,lf[20],lf[220]);}

/* k13031 in k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13036,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 1776 extend-call-sites!");
t3=((C_word*)((C_word*)t0)[2])[1];
f_12546(t3,t2,((C_word*)t0)[4]);}

/* k13034 in k13031 in k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 1777 debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t2,lf[20],lf[219]);}

/* k13037 in k13034 in k13031 in k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13042,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 1778 remove-local-bindings!");
t3=((C_word*)((C_word*)t0)[2])[1];
f_12744(t3,t2,((C_word*)t0)[4]);}

/* k13040 in k13037 in k13034 in k13031 in k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13042,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 1779 debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t2,lf[20],lf[218]);}

/* k13043 in k13040 in k13037 in k13034 in k13031 in k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13010 in k13007 in k13004 in k13001 in k12998 in k12995 in k12992 in k12989 in k12986 in k12983 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_13045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1780 reconstruct!");
t2=((C_word*)((C_word*)t0)[5])[1];
f_12018(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12744(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12744,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12750,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12750(t6,t1,((C_word*)t0)[2]);}

/* walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12750(C_word t0,C_word t1,C_word t2){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12750,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(3));
t9=(C_word)C_eqp(t4,lf[11]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12784,a[2]=t8,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t11=t2;
t12=(C_word)C_slot(t11,C_fix(3));
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12875,a[2]=((C_word*)t0)[2],a[3]=t14,tmp=(C_word)a,a+=4,tmp));
t16=((C_word*)t14)[1];
f_12875(t16,t10,t12);}
else{
t10=(C_word)C_eqp(t4,lf[16]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12905,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t12=t2;
t13=(C_word)C_slot(t12,C_fix(3));
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12935,a[2]=((C_word*)t0)[2],a[3]=t15,tmp=(C_word)a,a+=4,tmp));
t17=((C_word*)t15)[1];
f_12935(t17,t11,t13);}
else{
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12961,a[2]=((C_word*)t0)[2],a[3]=t12,tmp=(C_word)a,a+=4,tmp));
t14=((C_word*)t12)[1];
f_12961(t14,t1,t8);}}}

/* loop3627 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12961(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12961,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12971,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g36343635");
t5=((C_word*)((C_word*)t0)[2])[1];
f_12750(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12969 in loop3627 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12961(t3,((C_word*)t0)[2],t2);}

/* loop3606 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12935(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12935,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12945,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g36133614");
t5=((C_word*)((C_word*)t0)[2])[1];
f_12750(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12943 in loop3606 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12935(t3,((C_word*)t0)[2],t2);}

/* k12903 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12905,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_assq(t2,((C_word*)t0)[4]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12914,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1754 node-class-set!");
((C_proc4)C_retrieve_symbol_proc(lf[193]))(4,*((C_word*)lf[193]+1),t3,((C_word*)t0)[2],lf[70]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12912 in k12903 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12914,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1755 node-parameters-set!");
((C_proc4)C_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k12915 in k12912 in k12903 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1756 node-subexpressions-set!");
((C_proc4)C_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* loop3569 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12875(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12875,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12885,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g35763577");
t5=((C_word*)((C_word*)t0)[2])[1];
f_12750(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12883 in loop3569 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12875(t3,((C_word*)t0)[2],t2);}

/* k12782 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12784(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12784,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12789,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=t3,tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_12789(t9,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* doloop3585 in k12782 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12789(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_12789,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[6])[1]))){
t4=(C_word)C_i_car(t3);
C_trace("optimizer.scm: 1744 copy-node!");
((C_proc4)C_retrieve_symbol_proc(lf[189]))(4,*((C_word*)lf[189]+1),t1,t4,((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12812,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12827,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1746 reverse");
((C_proc3)C_retrieve_proc(*((C_word*)lf[115]+1)))(3,*((C_word*)lf[115]+1),t5,((C_word*)((C_word*)t0)[6])[1]);}}
else{
t4=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_assq(t4,((C_word*)t0)[3]))){
t5=(C_word)C_i_cdr(t2);
t6=(C_word)C_i_cdr(t3);
t19=t1;
t20=t5;
t21=t6;
t1=t19;
t2=t20;
t3=t21;
goto loop;}
else{
t5=(C_word)C_i_car(t2);
t6=(C_word)C_a_i_cons(&a,2,t5,((C_word*)((C_word*)t0)[6])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[6])+1,t6);
t8=(C_word)C_i_car(t3);
t9=(C_word)C_a_i_cons(&a,2,t8,((C_word*)((C_word*)t0)[4])[1]);
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t9);
t11=(C_word)C_i_cdr(t2);
t12=(C_word)C_i_cdr(t3);
t19=t1;
t20=t11;
t21=t12;
t1=t19;
t2=t20;
t3=t21;
goto loop;}}}

/* k12825 in doloop3585 in k12782 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1746 node-parameters-set!");
((C_proc4)C_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k12810 in doloop3585 in k12782 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12819,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12823,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1747 reverse");
((C_proc3)C_retrieve_proc(*((C_word*)lf[115]+1)))(3,*((C_word*)lf[115]+1),t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k12821 in k12810 in doloop3585 in k12782 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1747 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k12817 in k12810 in doloop3585 in k12782 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1747 node-subexpressions-set!");
((C_proc4)C_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* extend-call-sites! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12546(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12546,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12552,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12552(t6,t1,((C_word*)t0)[2]);}

/* walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12552(C_word t0,C_word t1,C_word t2){
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
C_word t32;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12552,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(3));
t9=(C_word)C_eqp(t4,lf[15]);
if(C_truep(t9)){
t10=(C_word)C_i_car(t8);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12589,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t12=(C_word)C_slot(t10,C_fix(1));
t13=(C_word)C_eqp(lf[9],t12);
if(C_truep(t13)){
t14=(C_word)C_slot(t10,C_fix(2));
t15=(C_word)C_i_car(t14);
t16=(C_word)C_i_assq(t15,((C_word*)t0)[2]);
if(C_truep(t16)){
t17=(C_word)C_i_set_car(t6,C_SCHEME_TRUE);
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12647,a[2]=t2,a[3]=t11,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
t19=C_SCHEME_END_OF_LIST;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_FALSE;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12651,a[2]=t18,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t24=(C_word)C_i_cdr(t16);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12661,a[2]=t20,a[3]=t26,a[4]=t22,tmp=(C_word)a,a+=5,tmp));
t28=((C_word*)t26)[1];
f_12661(t28,t23,t24);}
else{
t17=C_SCHEME_UNDEFINED;
t18=t11;
f_12589(2,t18,t17);}}
else{
t14=t11;
f_12589(2,t14,C_SCHEME_UNDEFINED);}}
else{
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12721,a[2]=((C_word*)t0)[3],a[3]=t11,tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_12721(t13,t1,t8);}}

/* loop3535 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12721(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12721,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12731,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g35423543");
t5=((C_word*)((C_word*)t0)[2])[1];
f_12552(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12729 in loop3535 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12721(t3,((C_word*)t0)[2],t2);}

/* loop3494 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12661(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12661,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[47]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12690,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g35103511");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12688 in loop3494 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12690(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12690,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop34943507");
t6=((C_word*)((C_word*)t0)[4])[1];
f_12661(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop34943507");
t6=((C_word*)((C_word*)t0)[4])[1];
f_12661(t6,((C_word*)t0)[3],t5);}}

/* k12649 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("optimizer.scm: 1726 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],t1,t2);}

/* k12645 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12647,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
C_trace("optimizer.scm: 1724 node-subexpressions-set!");
((C_proc4)C_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k12587 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12589,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(C_word)C_slot(t2,C_fix(3));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12603,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_12603(t7,((C_word*)t0)[2],t3);}

/* loop3518 in k12587 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12603(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12603,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12613,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g35253526");
t5=((C_word*)((C_word*)t0)[2])[1];
f_12552(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12611 in loop3518 in k12587 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12603(t3,((C_word*)t0)[2],t2);}

/* reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12018(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12018,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12030,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12032,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=((C_word*)t0)[3];
t7=(C_word)C_slot(t6,C_fix(3));
t8=(C_word)C_i_car(t7);
C_trace("optimizer.scm: 1660 fold-right");
((C_proc5)C_retrieve_symbol_proc(lf[126]))(5,*((C_word*)lf[126]+1),t4,t5,t8,t2);}

/* a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12032(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12032,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12039,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 1663 get");
((C_proc5)C_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),t5,((C_word*)t0)[2],t4,lf[45]);}

/* k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12042,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 1664 hide-variable");
((C_proc3)C_retrieve_symbol_proc(lf[217]))(3,*((C_word*)lf[217]+1),t2,((C_word*)t0)[5]);}

/* k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12042,2,t0,t1);}
t2=((C_word*)t0)[6];
t3=(C_word)C_slot(t2,C_fix(2));
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12051,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 1665 decompose-lambda-list");
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),((C_word*)t0)[2],t4,t5);}

/* a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12051(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[21],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_12051,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_assq(((C_word*)t0)[5],((C_word*)t0)[4]);
t6=(C_word)C_i_cdr(t5);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12058,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t6,a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12203,a[2]=t8,a[3]=t13,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_12203(t15,t11,t6);}

/* loop3268 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12203(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12203,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[84]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12232,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g32843285");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12230 in loop3268 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12232(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12232,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop32683281");
t6=((C_word*)((C_word*)t0)[4])[1];
f_12203(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop32683281");
t6=((C_word*)((C_word*)t0)[4])[1];
f_12203(t6,((C_word*)t0)[3],t5);}}

/* k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12058(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12058,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12061,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12154,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_12154(t10,t6,((C_word*)t0)[5],t1);}

/* loop3292 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12154(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_12154,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[134]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12187,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
C_trace("g33123313");
t10=t6;
((C_proc4)C_retrieve_proc(t10))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k12185 in loop3292 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12187,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12167,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_12167(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_12167(t5,t4);}}

/* k12165 in k12185 in loop3292 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12167(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
C_trace("loop32923306");
t5=((C_word*)((C_word*)t0)[3])[1];
f_12154(t5,((C_word*)t0)[2],t3,t4);}

/* k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12061(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12064,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=((C_word*)t0)[9];
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12267,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12282,a[2]=t6,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_12282(t10,t2,t5);}

/* walk in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12282(C_word t0,C_word t1,C_word t2){
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
C_word t32;
C_word t33;
C_word t34;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12282,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(3));
t9=(C_word)C_eqp(t4,lf[11]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12316,a[2]=t8,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12346,a[2]=t2,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12348,a[2]=t12,a[3]=t17,a[4]=t14,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_12348(t19,t15,t6);}
else{
t10=(C_word)C_eqp(t4,lf[9]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t6);
t12=f_12267(((C_word*)t0)[2],t11);
t13=(C_word)C_a_i_list(&a,1,t12);
C_trace("optimizer.scm: 1699 node-parameters-set!");
((C_proc4)C_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),t1,t2,t13);}
else{
t11=(C_word)C_eqp(t4,lf[16]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12411,a[2]=t8,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t13=(C_word)C_i_car(t6);
t14=f_12267(((C_word*)t0)[2],t13);
t15=(C_word)C_a_i_list(&a,1,t14);
C_trace("optimizer.scm: 1701 node-parameters-set!");
((C_proc4)C_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),t12,t2,t15);}
else{
t12=(C_word)C_eqp(t4,lf[13]);
if(C_truep(t12)){
t13=(C_word)C_i_car(t6);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12464,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t8,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 1704 decompose-lambda-list");
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t1,t13,t14);}
else{
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12523,a[2]=((C_word*)t0)[3],a[3]=t14,tmp=(C_word)a,a+=4,tmp));
t16=((C_word*)t14)[1];
f_12523(t16,t1,t8);}}}}}

/* loop3447 in walk in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12523(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12523,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12533,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g34543455");
t5=((C_word*)((C_word*)t0)[2])[1];
f_12282(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12531 in loop3447 in walk in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12523(t3,((C_word*)t0)[2],t2);}

/* a12463 in walk in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12464(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[23],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_12464,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12479,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12483,a[2]=t4,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12485,a[2]=t7,a[3]=t12,a[4]=t9,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_12485(t14,t10,t2);}

/* loop3423 in a12463 in walk in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12485(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_12485,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=f_12267(((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
C_trace("loop34233436");
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
C_trace("loop34233436");
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12481 in a12463 in walk in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1707 build-lambda-list");
((C_proc5)C_retrieve_symbol_proc(lf[57]))(5,*((C_word*)lf[57]+1),((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k12477 in a12463 in walk in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_set_car(((C_word*)t0)[5],t1);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("optimizer.scm: 1708 walk");
t4=((C_word*)((C_word*)t0)[3])[1];
f_12282(t4,((C_word*)t0)[2],t3);}

/* k12409 in walk in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12411,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12416,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_12416(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop3406 in k12409 in walk in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12416(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12416,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12426,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g34133414");
t5=((C_word*)((C_word*)t0)[2])[1];
f_12282(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12424 in loop3406 in k12409 in walk in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12416(t3,((C_word*)t0)[2],t2);}

/* loop3369 in walk in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12348(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_12348,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=f_12267(((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
C_trace("loop33693382");
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
C_trace("loop33693382");
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12344 in walk in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1696 node-parameters-set!");
((C_proc4)C_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k12314 in walk in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12316,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12321,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_12321(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop3392 in k12314 in walk in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_12321(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12321,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12331,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g33993400");
t5=((C_word*)((C_word*)t0)[2])[1];
f_12282(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12329 in loop3392 in k12314 in walk in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12321(t3,((C_word*)t0)[2],t2);}

/* rename in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static C_word C_fcall f_12267(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
t2=(C_word)C_i_assq(t1,((C_word*)t0)[2]);
if(C_truep(t2)){
return((C_word)C_i_cdr(t2));}
else{
t3=t1;
return(t3);}}

/* k12062 in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12064,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12139,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace("optimizer.scm: 1673 gensym");
((C_proc3)C_retrieve_symbol_proc(lf[84]))(3,*((C_word*)lf[84]+1),t2,lf[85]);}

/* k12137 in k12062 in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12139,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[10]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12123,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t3,a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12127,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 1679 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k12125 in k12137 in k12062 in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_length(((C_word*)t0)[5]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],t2);
C_trace("optimizer.scm: 1679 build-lambda-list");
((C_proc5)C_retrieve_symbol_proc(lf[57]))(5,*((C_word*)lf[57]+1),((C_word*)t0)[3],t1,t3,((C_word*)t0)[2]);}

/* k12121 in k12137 in k12062 in k12059 in k12056 in a12050 in k12040 in k12037 in a12031 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12123(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12123,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[6];
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_a_i_record(&a,4,lf[35],lf[13],t2,t4);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_a_i_record(&a,4,lf[35],lf[16],((C_word*)t0)[5],t6);
t8=(C_word)C_a_i_list(&a,2,t7,((C_word*)t0)[4]);
t9=((C_word*)t0)[3];
t10=t9;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_record(&a,4,lf[35],lf[11],((C_word*)t0)[2],t8));}

/* k12028 in reconstruct! in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_12030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12030,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
C_trace("optimizer.scm: 1657 node-subexpressions-set!");
((C_proc4)C_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11609(C_word t0,C_word t1,C_word t2){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11609,NULL,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11735,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11970,a[2]=t4,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_11970(t11,t7,t2);}

/* loop3123 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11970(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_11970,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_car(t3);
t5=(C_word)C_i_cadr(t3);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t8=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t7);
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t10=(C_word)C_slot(t2,C_fix(1));
C_trace("loop31233136");
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}
else{
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t10=(C_word)C_slot(t2,C_fix(1));
C_trace("loop31233136");
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11735(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11735,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11737,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11868,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11947,a[2]=t5,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_11947(t11,t7,((C_word*)t0)[4]);}

/* loop3147 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11947(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11947,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11957,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g32103211");
t5=((C_word*)((C_word*)t0)[2])[1];
f_11737(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11955 in loop3147 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11947(t3,((C_word*)t0)[2],t2);}

/* k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11868(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11868,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11873,a[2]=t3,a[3]=t7,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_11873(t9,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11873(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11873,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11900,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11941,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g32323233");
t6=t3;
f_11900(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11939 in loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11941(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11941,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop32163229");
t6=((C_word*)((C_word*)t0)[4])[1];
f_11873(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop32163229");
t6=((C_word*)((C_word*)t0)[4])[1];
f_11873(t6,((C_word*)t0)[3],t5);}}

/* g3232 in loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11900(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11900,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11938,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 1646 get");
((C_proc5)C_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),t4,((C_word*)t0)[2],t3,lf[45]);}

/* k11936 in g3232 in loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11938,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11616,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11618,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_11618(t8,t4,t1);}

/* walk in k11936 in g3232 in loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11618(C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11618,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(3));
t9=(C_word)C_eqp(t4,lf[11]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11653,a[2]=t8,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 1622 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t10,t6,((C_word*)((C_word*)t0)[3])[1]);}
else{
t10=(C_word)C_eqp(t4,lf[13]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t6);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11694,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1625 decompose-lambda-list");
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t1,t11,t12);}
else{
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11711,a[2]=((C_word*)t0)[2],a[3]=t12,tmp=(C_word)a,a+=4,tmp));
t14=((C_word*)t12)[1];
f_11711(t14,t1,t8);}}}

/* loop3106 in walk in k11936 in g3232 in loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11711(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11711,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11721,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g31133114");
t5=((C_word*)((C_word*)t0)[2])[1];
f_11618(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11719 in loop3106 in walk in k11936 in g3232 in loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11711(t3,((C_word*)t0)[2],t2);}

/* a11693 in walk in k11936 in g3232 in loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11694(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11694,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11699,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 1628 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t5,t2,((C_word*)((C_word*)t0)[4])[1]);}

/* k11697 in a11693 in walk in k11936 in g3232 in loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("optimizer.scm: 1629 walk");
t4=((C_word*)((C_word*)t0)[3])[1];
f_11618(t4,((C_word*)t0)[2],t3);}

/* k11651 in walk in k11936 in g3232 in loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11653,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11658,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11658(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop3088 in k11651 in walk in k11936 in g3232 in loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11658(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11658,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11668,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g30953096");
t5=((C_word*)((C_word*)t0)[2])[1];
f_11618(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11666 in loop3088 in k11651 in walk in k11936 in g3232 in loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11658(t3,((C_word*)t0)[2],t2);}

/* k11614 in k11936 in g3232 in loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11616,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[6])[1];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11914,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11916,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11930,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[2]);
C_trace("optimizer.scm: 1652 delete-duplicates");
((C_proc4)C_retrieve_symbol_proc(lf[212]))(4,*((C_word*)lf[212]+1),t5,t6,*((C_word*)lf[34]+1));}

/* k11928 in k11614 in k11936 in g3232 in loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1648 remove");
((C_proc4)C_retrieve_symbol_proc(lf[170]))(4,*((C_word*)lf[170]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a11915 in k11614 in k11936 in g3232 in loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11916(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11916,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)t0)[3]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:(C_word)C_i_memq(t2,((C_word*)t0)[2])));}

/* k11912 in k11614 in k11936 in g3232 in loop3216 in k11866 in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11914,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* walk in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11737(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11737,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11861,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("optimizer.scm: 1637 count");
((C_proc4)C_retrieve_symbol_proc(lf[216]))(4,*((C_word*)lf[216]+1),t4,t5,((C_word*)((C_word*)t0)[5])[1]);}

/* a11860 in walk in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11861(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11861,3,t0,t1,t2);}
t3=*((C_word*)lf[34]+1);
C_trace("g31643165");
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,((C_word*)t0)[2],t2);}

/* k11857 in walk in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11859(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11859,2,t0,t1);}
if(C_truep((C_word)C_fixnum_greaterp(t1,C_fix(1)))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=(C_word)C_i_cddr(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11757,a[2]=t4,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11825,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_11825(t9,t5,t4);}}

/* loop3169 in k11857 in walk in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11825(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11825,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11833,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11844,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g31763177");
t6=t3;
f_11833(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11842 in loop3169 in k11857 in walk in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11825(t3,((C_word*)t0)[2],t2);}

/* g3176 in loop3169 in k11857 in walk in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11833(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11833,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)t0)[3]);
C_trace("optimizer.scm: 1640 walk");
t4=((C_word*)((C_word*)t0)[2])[1];
f_11737(t4,t1,t3);}

/* k11755 in k11857 in walk in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11757(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11757,2,t0,t1);}
t2=(C_word)C_i_assq(((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11767,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11775,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11779,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11781,a[2]=t7,a[3]=t12,a[4]=t9,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_11781(t14,t10,((C_word*)t0)[2]);}

/* loop3184 in k11755 in k11857 in walk in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11781(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_11781,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11808,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_11808(t3,t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
C_trace("loop31843197");
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
C_trace("loop31843197");
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g3200 in loop3184 in k11755 in k11857 in walk in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static C_word C_fcall f_11808(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_assq(t1,((C_word*)t0)[2]);
return((C_word)C_i_cdr(t2));}

/* k11777 in k11755 in k11857 in walk in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1642 concatenate");
((C_proc3)C_retrieve_symbol_proc(lf[215]))(3,*((C_word*)lf[215]+1),((C_word*)t0)[2],t1);}

/* k11773 in k11755 in k11857 in walk in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1642 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k11765 in k11755 in k11857 in walk in k11733 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_cdr(((C_word*)t0)[2],t1));}

/* eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11298(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11298,NULL,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11302,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11304,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_11304(t8,t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11304(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11304,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(1));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(3));
t10=(C_word)C_eqp(t5,lf[9]);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11338,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t3,a[5]=t7,a[6]=((C_word*)t0)[3],a[7]=t5,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t10)){
t12=t11;
f_11338(t12,t10);}
else{
t12=(C_word)C_eqp(t5,lf[26]);
if(C_truep(t12)){
t13=t11;
f_11338(t13,t12);}
else{
t13=(C_word)C_eqp(t5,lf[70]);
if(C_truep(t13)){
t14=t11;
f_11338(t14,t13);}
else{
t14=(C_word)C_eqp(t5,lf[213]);
t15=t11;
f_11338(t15,(C_truep(t14)?t14:(C_word)C_eqp(t5,lf[160])));}}}}

/* k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11338(C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11338,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[7],lf[11]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11349,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_11349(t6,((C_word*)t0)[8],((C_word*)t0)[5],((C_word*)t0)[3]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[7],lf[13]);
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11400,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1587 decompose-lambda-list");
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),((C_word*)t0)[8],t4,t5);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[7],lf[15]);
if(C_truep(t4)){
t5=(C_word)C_i_car(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11424,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11457,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1593 call-with-current-continuation");
((C_proc3)C_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t6,t7);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11560,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_11560(t8,((C_word*)t0)[8],((C_word*)t0)[3]);}}}}}

/* loop3049 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11560(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11560,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11568,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11575,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g30563057");
t6=t3;
f_11568(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11573 in loop3049 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11560(t3,((C_word*)t0)[2],t2);}

/* g3056 in loop3049 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11568(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11568,NULL,3,t0,t1,t2);}
C_trace("optimizer.scm: 1608 walk");
t3=((C_word*)((C_word*)t0)[3])[1];
f_11304(t3,t1,t2,((C_word*)t0)[2]);}

/* a11456 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11457(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11457,3,t0,t1,t2);}
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t4=(C_word)C_eqp(lf[9],t3);
if(C_truep(t4)){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(C_word)C_slot(((C_word*)t0)[4],C_fix(2));
t8=(C_word)C_i_car(t7);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11473,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t10,a[5]=((C_word*)t0)[3],a[6]=t6,tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_11473(t12,t1,t8);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* loop in a11456 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11473(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_11473,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_memq(t2,((C_word*)((C_word*)t0)[6])[1]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[6])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t5=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[5])[1]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11493,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11526,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_i_cadr(t5);
C_trace("optimizer.scm: 1602 lset<=");
((C_proc5)C_retrieve_symbol_proc(lf[129]))(5,*((C_word*)lf[129]+1),t7,*((C_word*)lf[34]+1),t8,((C_word*)t0)[2]);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}}

/* k11524 in loop in a11456 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11526,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_11493(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11530,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1604 delete!");
((C_proc5)C_retrieve_symbol_proc(lf[214]))(5,*((C_word*)lf[214]+1),t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1],*((C_word*)lf[34]+1));}}

/* k11528 in k11524 in loop in a11456 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
C_trace("optimizer.scm: 1605 return");
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k11491 in loop in a11456 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11493,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[4]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11502,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11502(t6,((C_word*)t0)[2],t2);}

/* loop3015 in k11491 in loop in a11456 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11502(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11502,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11512,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g30223023");
t5=((C_word*)((C_word*)t0)[2])[1];
f_11473(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11510 in loop3015 in k11491 in loop in a11456 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11502(t3,((C_word*)t0)[2],t2);}

/* k11422 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11424,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11429,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_11429(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop3034 in k11422 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11429(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11429,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11437,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11444,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g30413042");
t6=t3;
f_11437(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11442 in loop3034 in k11422 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11429(t3,((C_word*)t0)[2],t2);}

/* g3041 in loop3034 in k11422 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11437(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11437,NULL,3,t0,t1,t2);}
C_trace("optimizer.scm: 1607 walk");
t3=((C_word*)((C_word*)t0)[3])[1];
f_11304(t3,t1,t2,((C_word*)t0)[2]);}

/* a11399 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11400,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11412,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1590 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t6,t2,((C_word*)t0)[2]);}

/* k11410 in a11399 in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1590 walk");
t2=((C_word*)((C_word*)t0)[4])[1];
f_11304(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11349(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11349,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11367,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1582 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t5,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11370,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t3);
C_trace("optimizer.scm: 1584 walk");
t6=((C_word*)((C_word*)t0)[5])[1];
f_11304(t6,t4,t5,((C_word*)t0)[3]);}}

/* k11368 in loop in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("optimizer.scm: 1585 loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_11349(t4,((C_word*)t0)[2],t2,t3);}

/* k11365 in loop in k11336 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1582 walk");
t2=((C_word*)((C_word*)t0)[4])[1];
f_11304(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k11300 in eliminate4 in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* collect-accessibles in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11017(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11017,NULL,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11021,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11023,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_11023(t9,t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11023(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11023,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(1));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(3));
t10=(C_word)C_eqp(t5,lf[9]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_11057,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t9,a[7]=t3,a[8]=t7,a[9]=((C_word*)t0)[5],a[10]=t5,a[11]=t1,tmp=(C_word)a,a+=12,tmp);
if(C_truep(t10)){
t12=t11;
f_11057(t12,t10);}
else{
t12=(C_word)C_eqp(t5,lf[26]);
if(C_truep(t12)){
t13=t11;
f_11057(t13,t12);}
else{
t13=(C_word)C_eqp(t5,lf[70]);
if(C_truep(t13)){
t14=t11;
f_11057(t14,t13);}
else{
t14=(C_word)C_eqp(t5,lf[213]);
t15=t11;
f_11057(t15,(C_truep(t14)?t14:(C_word)C_eqp(t5,lf[160])));}}}}

/* k11055 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11057(C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11057,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[10],lf[11]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11068,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_11068(t6,((C_word*)t0)[11],((C_word*)t0)[8],((C_word*)t0)[6]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[10],lf[13]);
if(C_truep(t3)){
t4=(C_word)C_i_assq(((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11116,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_assq(t6,((C_word*)t0)[3]))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11150,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_i_cdr(t4);
C_trace("optimizer.scm: 1539 alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[27]))(5,*((C_word*)lf[27]+1),t7,t8,((C_word*)t0)[7],((C_word*)((C_word*)t0)[2])[1]);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t5;
f_11116(t8,t7);}}
else{
t6=t5;
f_11116(t6,C_SCHEME_UNDEFINED);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11159,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_11159(t7,((C_word*)t0)[11],((C_word*)t0)[6]);}}}}

/* loop2913 in k11055 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11159(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11159,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11167,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11174,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g29202921");
t6=t3;
f_11167(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11172 in loop2913 in k11055 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11159(t3,((C_word*)t0)[2],t2);}

/* g2920 in loop2913 in k11055 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11167(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11167,NULL,3,t0,t1,t2);}
C_trace("optimizer.scm: 1545 walk");
t3=((C_word*)((C_word*)t0)[3])[1];
f_11023(t3,t1,t2,((C_word*)t0)[2]);}

/* k11148 in k11055 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_11116(t3,t2);}

/* k11114 in k11055 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11116(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11116,NULL,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11125,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1540 decompose-lambda-list");
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),((C_word*)t0)[2],t2,t3);}

/* a11124 in k11114 in k11055 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11125(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11125,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11137,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1543 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t6,t2,((C_word*)t0)[2]);}

/* k11135 in a11124 in k11114 in k11055 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1543 walk");
t2=((C_word*)((C_word*)t0)[4])[1];
f_11023(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k11055 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_11068(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11068,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11086,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1530 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t5,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11089,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t3);
C_trace("optimizer.scm: 1532 walk");
t6=((C_word*)((C_word*)t0)[5])[1];
f_11023(t6,t4,t5,((C_word*)t0)[3]);}}

/* k11087 in loop in k11055 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("optimizer.scm: 1533 loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_11068(t4,((C_word*)t0)[2],t2,t3);}

/* k11084 in loop in k11055 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1530 walk");
t2=((C_word*)((C_word*)t0)[4])[1];
f_11023(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k11019 in collect-accessibles in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* eliminate in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10884(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10884,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10890,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1500 remove");
((C_proc4)C_retrieve_symbol_proc(lf[170]))(4,*((C_word*)lf[170]+1),t1,t4,t3);}

/* a10889 in eliminate in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10890(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10890,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10924,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_i_car(t2);
t5=((C_word*)t0)[2];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10934,a[2]=t4,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1510 unzip1");
((C_proc3)C_retrieve_symbol_proc(lf[205]))(3,*((C_word*)lf[205]+1),t6,t5);}

/* k10932 in a10889 in eliminate in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10934,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10939,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_10939(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* count in k10932 in a10889 in eliminate in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10939(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10939,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_assq(t2,((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10946,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_cddr(t4);
C_trace("optimizer.scm: 1513 lset-difference");
((C_proc6)C_retrieve_symbol_proc(lf[192]))(6,*((C_word*)lf[192]+1),t5,*((C_word*)lf[34]+1),t6,t3,((C_word*)t0)[2]);}

/* k10944 in count in k10932 in a10889 in eliminate in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11007,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[2]);
C_trace("optimizer.scm: 1514 delete-duplicates");
((C_proc4)C_retrieve_symbol_proc(lf[212]))(4,*((C_word*)lf[212]+1),t2,t3,*((C_word*)lf[34]+1));}

/* k11005 in k10944 in count in k10932 in a10889 in eliminate in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11007,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11003,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 1515 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k11001 in k11005 in k10944 in count in k10932 in a10889 in eliminate in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_11003(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11003,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10959,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10961,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_10961(t11,t7,((C_word*)t0)[2]);}

/* loop2831 in k11001 in k11005 in k10944 in count in k10932 in a10889 in eliminate in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10961(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10961,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10988,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10995,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g28472848");
t6=t3;
f_10988(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10993 in loop2831 in k11001 in k11005 in k10944 in count in k10932 in a10889 in eliminate in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10995(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10995,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop28312844");
t6=((C_word*)((C_word*)t0)[4])[1];
f_10961(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop28312844");
t6=((C_word*)((C_word*)t0)[4])[1];
f_10961(t6,((C_word*)t0)[3],t5);}}

/* g2847 in loop2831 in k11001 in k11005 in k10944 in count in k10932 in a10889 in eliminate in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10988(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10988,NULL,3,t0,t1,t2);}
C_trace("optimizer.scm: 1516 count");
t3=((C_word*)((C_word*)t0)[3])[1];
f_10939(t3,t1,t2,((C_word*)t0)[2]);}

/* k10957 in k11001 in k11005 in k10944 in count in k10932 in a10889 in eliminate in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1516 fold");
((C_proc5)C_retrieve_symbol_proc(lf[127]))(5,*((C_word*)lf[127]+1),((C_word*)t0)[3],*((C_word*)lf[211]+1),((C_word*)t0)[2],t1);}

/* k10922 in a10889 in eliminate in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10924,2,t0,t1);}
t2=(C_word)C_fixnum_greaterp(t1,C_fix(16));
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10902,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[2]);
C_trace("optimizer.scm: 1503 any");
((C_proc4)C_retrieve_symbol_proc(lf[30]))(4,*((C_word*)lf[30]+1),((C_word*)t0)[5],t3,t4);}}

/* a10901 in k10922 in a10889 in eliminate in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10902(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10902,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10909,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1504 get");
((C_proc5)C_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),t3,((C_word*)t0)[2],t2,lf[75]);}

/* k10907 in a10901 in k10922 in a10889 in eliminate in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_assq(((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_not(t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10596(C_word t0,C_word t1,C_word t2){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10596,NULL,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10599,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t8,a[5]=t2,a[6]=t10,tmp=(C_word)a,a+=7,tmp));
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10807,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10809,a[2]=t14,a[3]=t10,a[4]=t4,a[5]=t8,a[6]=t6,tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_10809(t16,t12,t2);}

/* loop2703 in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10809(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10809,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10817,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10871,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g27842785");
t6=t3;
f_10817(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10869 in loop2703 in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10809(t3,((C_word*)t0)[2],t2);}

/* g2784 in loop2703 in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10817(C_word t0,C_word t1,C_word t2){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10817,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_slot(t4,C_fix(2));
t6=(C_word)C_i_car(t5);
t7=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_END_OF_LIST);
t8=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_END_OF_LIST);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10832,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10842,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1489 decompose-lambda-list");
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t9,t6,t10);}

/* a10841 in g2784 in loop2703 in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10842,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_slot(((C_word*)t0)[3],C_fix(3));
t6=(C_word)C_i_car(t5);
C_trace("optimizer.scm: 1492 walk");
t7=((C_word*)((C_word*)t0)[2])[1];
f_10599(t7,t1,t6,t2);}

/* k10830 in g2784 in loop2703 in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10832,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10836,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);
C_trace("optimizer.scm: 1493 alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[27]))(5,*((C_word*)lf[27]+1),t2,((C_word*)t0)[2],t3,((C_word*)((C_word*)t0)[6])[1]);}

/* k10834 in k10830 in g2784 in loop2703 in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k10805 in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10599(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10599,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(1));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(3));
t10=(C_word)C_eqp(t5,lf[9]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(t5,lf[16]));
if(C_truep(t11)){
t12=(C_word)C_i_car(t7);
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10639,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t12,a[5]=t9,a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t14=(C_word)C_i_memq(t12,t3);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10686,a[2]=((C_word*)t0)[3],a[3]=t12,a[4]=t13,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t14)){
t16=t15;
f_10686(2,t16,t14);}
else{
C_trace("optimizer.scm: 1465 get");
((C_proc5)C_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),t15,((C_word*)t0)[2],t12,lf[102]);}}
else{
t12=(C_word)C_eqp(t5,lf[11]);
if(C_truep(t12)){
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10704,a[2]=t14,a[3]=t3,a[4]=t7,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_10704(t16,t1,t7,t9);}
else{
t13=(C_word)C_eqp(t5,lf[13]);
if(C_truep(t13)){
t14=(C_word)C_i_car(t7);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10758,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1477 decompose-lambda-list");
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t1,t14,t15);}
else{
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10775,a[2]=t15,a[3]=t3,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_10775(t17,t1,t9);}}}}

/* loop2770 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10775(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10775,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10783,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10790,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g27772778");
t6=t3;
f_10783(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10788 in loop2770 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10775(t3,((C_word*)t0)[2],t2);}

/* g2777 in loop2770 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10783(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10783,NULL,3,t0,t1,t2);}
C_trace("optimizer.scm: 1480 walk");
t3=((C_word*)((C_word*)t0)[3])[1];
f_10599(t3,t1,t2,((C_word*)t0)[2]);}

/* a10757 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10758(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10758,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10770,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1479 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t6,t2,((C_word*)t0)[2]);}

/* k10768 in a10757 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1479 walk");
t2=((C_word*)((C_word*)t0)[4])[1];
f_10599(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10704(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10704,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10722,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1472 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t5,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10728,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_car(t3);
C_trace("optimizer.scm: 1474 walk");
t7=((C_word*)((C_word*)t0)[5])[1];
f_10599(t7,t5,t6,((C_word*)t0)[3]);}}

/* k10726 in loop in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("optimizer.scm: 1475 loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_10704(t4,((C_word*)t0)[2],t2,t3);}

/* k10720 in loop in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1472 walk");
t2=((C_word*)((C_word*)t0)[4])[1];
f_10599(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k10684 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10686,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_10639(t2,C_SCHEME_UNDEFINED);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[4];
f_10639(t4,t3);}}

/* k10637 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10639(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10639,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10642,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_assq(((C_word*)t0)[4],((C_word*)t0)[3]))){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t2;
f_10642(t5,t4);}
else{
t3=t2;
f_10642(t3,C_SCHEME_UNDEFINED);}}

/* k10640 in k10637 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10642(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10642,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10647,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_10647(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop2745 in k10640 in k10637 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10647(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10647,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10655,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10662,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g27522753");
t6=t3;
f_10655(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10660 in loop2745 in k10640 in k10637 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10647(t3,((C_word*)t0)[2],t2);}

/* g2752 in loop2745 in k10640 in k10637 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10655(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10655,NULL,3,t0,t1,t2);}
C_trace("optimizer.scm: 1468 walk");
t3=((C_word*)((C_word*)t0)[3])[1];
f_10599(t3,t1,t2,((C_word*)t0)[2]);}

/* find-lifting-candidates in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10490(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10490,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10494,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10496,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1436 ##sys#hash-table-for-each");
((C_proc4)C_retrieve_symbol_proc(lf[210]))(4,*((C_word*)lf[210]+1),t4,t5,((C_word*)t0)[2]);}

/* a10495 in find-lifting-candidates in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10496(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10496,4,t0,t1,t2,t3);}
t4=(C_word)C_i_assq(lf[45],t3);
if(C_truep(t4)){
t5=(C_word)C_i_assq(lf[76],t3);
if(C_truep(t5)){
t6=(C_word)C_i_assq(lf[120],t3);
if(C_truep(t6)){
t7=(C_word)C_i_cdr(t5);
t8=(C_word)C_i_length(t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10527,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_assq(lf[77],t3))){
t10=t9;
f_10527(t10,C_SCHEME_FALSE);}
else{
t10=(C_word)C_i_cdr(t4);
t11=(C_word)C_slot(t10,C_fix(1));
t12=(C_word)C_eqp(lf[13],t11);
if(C_truep(t12)){
if(C_truep((C_word)C_i_assq(lf[102],t3))){
t13=t9;
f_10527(t13,C_SCHEME_FALSE);}
else{
t13=(C_word)C_i_cdr(t6);
t14=(C_word)C_i_length(t13);
t15=t9;
f_10527(t15,(C_word)C_eqp(t8,t14));}}
else{
t13=t9;
f_10527(t13,C_SCHEME_FALSE);}}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k10525 in a10495 in find-lifting-candidates in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10527(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10527,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("optimizer.scm: 1447 alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[27]))(5,*((C_word*)lf[27]+1),t2,t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[6])[1]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k10529 in k10525 in a10495 in find-lifting-candidates in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10531,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10535,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("optimizer.scm: 1448 alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[27]))(5,*((C_word*)lf[27]+1),t3,((C_word*)t0)[2],t4,((C_word*)((C_word*)t0)[5])[1]);}

/* k10533 in k10529 in k10525 in a10495 in find-lifting-candidates in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k10492 in find-lifting-candidates in ##compiler#perform-lambda-lifting! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9102(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[39],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9102,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_fix(0);
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9105,a[2]=t3,a[3]=t15,a[4]=t13,a[5]=t11,a[6]=t9,a[7]=t7,a[8]=t17,tmp=(C_word)a,a+=9,tmp));
t19=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9304,a[2]=t7,a[3]=t9,a[4]=t3,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t20=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9758,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10482,a[2]=t2,a[3]=t13,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 1415 debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t21,lf[20],lf[208]);}

/* k10480 in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10482,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10485,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1416 walk");
t3=((C_word*)((C_word*)t0)[3])[1];
f_9105(t3,t2,C_SCHEME_FALSE,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k10483 in k10480 in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_9758(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9758,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9762,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,a[5]=t7,a[6]=t1,a[7]=t5,a[8]=t6,a[9]=t2,a[10]=((C_word*)t0)[3],tmp=(C_word)a,a+=11,tmp);
if(C_truep((C_word)C_i_pairp(t5))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10470,a[2]=t7,a[3]=t3,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10472,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#make-promise");
t11=*((C_word*)lf[206]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}
else{
C_trace("optimizer.scm: 1306 debugging");
((C_proc6)C_retrieve_symbol_proc(lf[6]))(6,*((C_word*)lf[6]+1),t8,lf[7],lf[207],t3,t7);}}

/* a10471 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10472,2,t0,t1);}
C_trace("optimizer.scm: 1305 unzip1");
((C_proc3)C_retrieve_symbol_proc(lf[205]))(3,*((C_word*)lf[205]+1),t1,((C_word*)t0)[2]);}

/* k10468 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1305 debugging");
((C_proc7)C_retrieve_symbol_proc(lf[6]))(7,*((C_word*)lf[6]+1),((C_word*)t0)[4],lf[7],lf[204],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9762(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9762,2,t0,t1);}
t2=C_set_block_item(((C_word*)t0)[10],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[9];
t4=(C_word)C_slot(t3,C_fix(2));
t5=(C_word)C_i_caddr(t4);
t6=(C_word)C_i_length(t5);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9777,a[2]=((C_word*)t0)[3],a[3]=t8,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=t6,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
C_trace("optimizer.scm: 1311 get");
((C_proc5)C_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),t9,((C_word*)t0)[2],((C_word*)t0)[4],lf[120]);}

/* k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9777,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
if(C_truep((C_word)C_i_listp(((C_word*)t0)[11]))){
t6=(C_word)C_i_length(((C_word*)t0)[11]);
t7=(C_word)C_eqp(t6,C_fix(4));
if(C_truep(t7)){
t8=(C_word)C_i_caddr(((C_word*)t0)[11]);
t9=t5;
f_9786(t9,(C_word)C_i_listp(t8));}
else{
t8=t5;
f_9786(t8,C_SCHEME_FALSE);}}
else{
t6=t5;
f_9786(t6,C_SCHEME_FALSE);}}

/* k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_9786(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9786,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[13]);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_9792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
C_trace("optimizer.scm: 1315 caaddr");
((C_proc3)C_retrieve_proc(*((C_word*)lf[202]+1)))(3,*((C_word*)lf[202]+1),t3,((C_word*)t0)[13]);}
else{
C_trace("optimizer.scm: 1413 bomb");
((C_proc4)C_retrieve_symbol_proc(lf[178]))(4,*((C_word*)lf[178]+1),((C_word*)t0)[10],lf[203],((C_word*)t0)[13]);}}

/* k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9792,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_9795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
C_trace("optimizer.scm: 1316 cdaddr");
((C_proc3)C_retrieve_proc(*((C_word*)lf[201]+1)))(3,*((C_word*)lf[201]+1),t2,((C_word*)t0)[14]);}

/* k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9795,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[15]);
t3=(C_word)C_i_set_car(t2,t1);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_9801,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
C_trace("optimizer.scm: 1320 node-class-set!");
((C_proc4)C_retrieve_symbol_proc(lf[193]))(4,*((C_word*)lf[193]+1),t4,((C_word*)t0)[5],lf[182]);}

/* k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9801,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9804,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],tmp=(C_word)a,a+=11,tmp);
t3=((C_word*)t0)[5];
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_car(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10084,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp));
t9=((C_word*)t7)[1];
f_10084(t9,t2,t5);}

/* rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10084(C_word t0,C_word t1,C_word t2){
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
C_word t32;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10084,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(2));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(3));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(1));
t9=(C_word)C_eqp(t8,lf[15]);
if(C_truep(t9)){
t10=(C_word)C_i_car(t6);
t11=(C_word)C_i_cadr(t6);
t12=(C_word)C_slot(t10,C_fix(2));
t13=(C_word)C_slot(t11,C_fix(2));
t14=(C_word)C_slot(t10,C_fix(1));
t15=(C_word)C_eqp(lf[9],t14);
if(C_truep(t15)){
t16=(C_word)C_i_car(t12);
t17=(C_word)C_eqp(((C_word*)t0)[9],t16);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_10153,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=t1,a[9]=t6,a[10]=((C_word*)t0)[7],a[11]=t13,a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
C_trace("optimizer.scm: 1334 alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[27]))(5,*((C_word*)lf[27]+1),t18,C_SCHEME_FALSE,t2,((C_word*)((C_word*)t0)[8])[1]);}
else{
t18=(C_word)C_i_car(t12);
t19=(C_word)C_eqp(((C_word*)t0)[7],t18);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10306,a[2]=t2,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1359 node-class-set!");
((C_proc4)C_retrieve_symbol_proc(lf[193]))(4,*((C_word*)lf[193]+1),t20,t2,lf[199]);}
else{
C_trace("optimizer.scm: 1362 bomb");
((C_proc3)C_retrieve_symbol_proc(lf[178]))(3,*((C_word*)lf[178]+1),t1,lf[200]);}}}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_UNDEFINED);}}
else{
t10=(C_word)C_eqp(t8,lf[11]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t4);
t12=(C_word)C_i_car(t6);
if(C_truep((C_word)C_i_memq(t11,((C_word*)t0)[2]))){
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10358,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 1367 alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[27]))(5,*((C_word*)lf[27]+1),t13,t11,t12,((C_word*)((C_word*)t0)[4])[1]);}
else{
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10373,a[2]=((C_word*)t0)[3],a[3]=t14,tmp=(C_word)a,a+=4,tmp));
t16=((C_word*)t14)[1];
f_10373(t16,t1,t6);}}
else{
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10399,a[2]=((C_word*)t0)[3],a[3]=t12,tmp=(C_word)a,a+=4,tmp));
t14=((C_word*)t12)[1];
f_10399(t14,t1,t6);}}}

/* loop2538 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10399(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10399,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10409,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g25452546");
t5=((C_word*)((C_word*)t0)[2])[1];
f_10084(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10407 in loop2538 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10399(t3,((C_word*)t0)[2],t2);}

/* loop2525 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10373(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10373,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10383,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g25322533");
t5=((C_word*)((C_word*)t0)[2])[1];
f_10084(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10381 in loop2525 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10373(t3,((C_word*)t0)[2],t2);}

/* k10356 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10358,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10361,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[2]);
C_trace("optimizer.scm: 1368 copy-node!");
((C_proc4)C_retrieve_symbol_proc(lf[189]))(4,*((C_word*)lf[189]+1),t3,t4,((C_word*)t0)[3]);}

/* k10359 in k10356 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1369 rec");
t2=((C_word*)((C_word*)t0)[4])[1];
f_10084(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10304 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10306,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1360 node-parameters-set!");
((C_proc4)C_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k10307 in k10304 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("optimizer.scm: 1361 node-subexpressions-set!");
((C_proc4)C_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k10151 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10153(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10153,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[12])+1,t1);
t3=(C_word)C_i_car(((C_word*)t0)[11]);
t4=(C_word)C_eqp(((C_word*)t0)[10],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10162,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[9]);
t7=(C_word)C_i_length(t6);
t8=(C_word)C_eqp(((C_word*)t0)[5],t7);
if(C_truep(t8)){
t9=t5;
f_10162(2,t9,C_SCHEME_UNDEFINED);}
else{
C_trace("optimizer.scm: 1337 quit");
((C_proc4)C_retrieve_symbol_proc(lf[190]))(4,*((C_word*)lf[190]+1),t5,lf[195],((C_word*)t0)[4]);}}
else{
t5=(C_word)C_i_car(((C_word*)t0)[11]);
t6=(C_word)C_i_assq(t5,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10200,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
C_trace("g24872488");
t8=t7;
f_10200(t8,((C_word*)t0)[8],t6);}
else{
C_trace("optimizer.scm: 1357 bomb");
((C_proc4)C_retrieve_symbol_proc(lf[178]))(4,*((C_word*)lf[178]+1),((C_word*)t0)[8],lf[198],((C_word*)t0)[11]);}}}

/* g2487 in k10151 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_10200(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10200,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10210,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t5,a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t7=(C_word)C_i_cdr(((C_word*)t0)[5]);
t8=(C_word)C_i_length(t7);
t9=(C_word)C_eqp(((C_word*)t0)[3],t8);
if(C_truep(t9)){
t10=t6;
f_10210(2,t10,C_SCHEME_UNDEFINED);}
else{
C_trace("optimizer.scm: 1348 quit");
((C_proc4)C_retrieve_symbol_proc(lf[190]))(4,*((C_word*)lf[190]+1),t6,lf[197],((C_word*)t0)[2]);}}

/* k10208 in g2487 in k10151 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10210,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("optimizer.scm: 1351 node-class-set!");
((C_proc4)C_retrieve_symbol_proc(lf[193]))(4,*((C_word*)lf[193]+1),t2,((C_word*)t0)[3],lf[11]);}

/* k10211 in k10208 in g2487 in k10151 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10213,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10216,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10247,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(((C_word*)t0)[2],C_fix(2));
t5=(C_word)C_i_caddr(t4);
C_trace("optimizer.scm: 1352 take");
((C_proc4)C_retrieve_symbol_proc(lf[196]))(4,*((C_word*)lf[196]+1),t3,t5,C_fix(1));}

/* k10245 in k10211 in k10208 in g2487 in k10151 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1352 node-parameters-set!");
((C_proc4)C_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k10214 in k10211 in k10208 in g2487 in k10151 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10216,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10219,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_a_i_list(&a,2,C_SCHEME_FALSE,((C_word*)t0)[4]);
t4=(C_word)C_i_cddr(((C_word*)t0)[3]);
t5=(C_word)C_a_i_record(&a,4,lf[35],lf[194],t3,t4);
t6=(C_word)C_a_i_list(&a,2,t5,((C_word*)t0)[5]);
C_trace("optimizer.scm: 1353 node-subexpressions-set!");
((C_proc4)C_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),t2,((C_word*)t0)[2],t6);}

/* k10217 in k10214 in k10211 in k10208 in g2487 in k10151 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1356 rec");
t2=((C_word*)((C_word*)t0)[4])[1];
f_10084(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10160 in k10151 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10162,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 1340 node-class-set!");
((C_proc4)C_retrieve_symbol_proc(lf[193]))(4,*((C_word*)lf[193]+1),t2,((C_word*)t0)[3],lf[194]);}

/* k10163 in k10160 in k10151 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10165,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10168,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_a_i_list(&a,2,C_SCHEME_TRUE,((C_word*)t0)[2]);
C_trace("optimizer.scm: 1341 node-parameters-set!");
((C_proc4)C_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),t2,((C_word*)t0)[3],t3);}

/* k10166 in k10163 in k10160 in k10151 in rec in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cddr(((C_word*)t0)[4]);
C_trace("optimizer.scm: 1342 node-subexpressions-set!");
((C_proc4)C_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k9802 in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9804,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9807,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9975,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10066,tmp=(C_word)a,a+=2,tmp);
C_trace("optimizer.scm: 1390 lset-difference");
((C_proc5)C_retrieve_symbol_proc(lf[192]))(5,*((C_word*)lf[192]+1),t3,t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* a10065 in k9802 in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10066(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10066,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_i_cdr(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_eqp(t4,t5));}

/* k9973 in k9802 in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9975,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9977,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_9977(t5,((C_word*)t0)[2],t1);}

/* loop2555 in k9973 in k9802 in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_9977(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9977,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9985,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10053,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g25622563");
t6=t3;
f_9985(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10051 in loop2555 in k9973 in k9802 in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9977(t3,((C_word*)t0)[2],t2);}

/* g2562 in loop2555 in k9973 in k9802 in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_9985(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9985,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_slot(t3,C_fix(3));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10000,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_cdr(t4);
t7=(C_word)C_i_length(t6);
t8=(C_word)C_eqp(((C_word*)t0)[3],t7);
if(C_truep(t8)){
t9=t5;
f_10000(2,t9,C_SCHEME_UNDEFINED);}
else{
C_trace("optimizer.scm: 1380 quit");
((C_proc4)C_retrieve_symbol_proc(lf[190]))(4,*((C_word*)lf[190]+1),t5,lf[191],((C_word*)t0)[2]);}}

/* k9998 in g2562 in loop2555 in k9973 in k9802 in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_10000(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10000,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,4,C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(C_word)C_i_car(((C_word*)t0)[6]);
t5=(C_word)C_i_cddr(((C_word*)t0)[6]);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(C_word)C_a_i_record(&a,4,lf[35],lf[186],t3,t6);
t8=(C_word)C_a_i_list(&a,2,t2,t7);
C_trace("optimizer.scm: 1383 node-subexpressions-set!");
((C_proc4)C_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),((C_word*)t0)[3],((C_word*)t0)[2],t8);}

/* k9805 in k9802 in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9807,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[4])?(C_word)C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(C_word)C_a_i_record(&a,4,lf[35],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9824,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 1395 copy-node!");
((C_proc4)C_retrieve_symbol_proc(lf[189]))(4,*((C_word*)lf[189]+1),t4,((C_word*)t0)[4],t3);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k9822 in k9805 in k9802 in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9824,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9827,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9895,tmp=(C_word)a,a+=2,tmp);
C_trace("optimizer.scm: 1397 fold-right");
((C_proc5)C_retrieve_symbol_proc(lf[126]))(5,*((C_word*)lf[126]+1),t2,t3,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* a9894 in k9822 in k9805 in k9802 in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9895(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9895,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(t2);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_slot(t6,C_fix(3));
t8=(C_word)C_i_car(t7);
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_slot(t8,C_fix(2));
t11=(C_word)C_slot(t8,C_fix(3));
t12=(C_word)C_a_i_record(&a,4,lf[35],t9,t10,t11);
t13=(C_word)C_a_i_list(&a,2,t12,t3);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,(C_word)C_a_i_record(&a,4,lf[35],lf[11],t5,t13));}

/* k9825 in k9822 in k9805 in k9802 in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9827,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9830,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1406 copy-node!");
((C_proc4)C_retrieve_symbol_proc(lf[189]))(4,*((C_word*)lf[189]+1),t2,t1,((C_word*)t0)[2]);}

/* k9828 in k9825 in k9822 in k9805 in k9802 in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9830,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9835,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_9835(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop2621 in k9828 in k9825 in k9822 in k9805 in k9802 in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_9835(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9835,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9850,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9879,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1410 gensym");
((C_proc2)C_retrieve_symbol_proc(lf[84]))(2,*((C_word*)lf[84]+1),t6);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9877 in loop2621 in k9828 in k9825 in k9822 in k9805 in k9802 in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9879,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
C_trace("optimizer.scm: 1410 node-parameters-set!");
((C_proc4)C_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k9848 in loop2621 in k9828 in k9825 in k9822 in k9805 in k9802 in k9799 in k9793 in k9790 in k9784 in k9775 in k9760 in transform in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9850,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(3));
t3=(C_word)C_a_i_record(&a,4,lf[35],lf[70],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t4=(C_word)C_i_set_car(t2,t3);
t5=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t6=((C_word*)((C_word*)t0)[3])[1];
f_9835(t6,((C_word*)t0)[2],t5);}

/* scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_9304(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9304,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9307,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t5,a[7]=t12,a[8]=t8,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=t10,a[12]=t6,tmp=(C_word)a,a+=13,tmp));
t14=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_END_OF_LIST);
t15=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_END_OF_LIST);
t16=C_set_block_item(((C_word*)t0)[5],0,C_fix(0));
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9749,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t8,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 1300 rec");
t18=((C_word*)t12)[1];
f_9307(t18,t17,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,t6);}

/* k9747 in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9749,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9756,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1301 delete");
((C_proc5)C_retrieve_symbol_proc(lf[188]))(5,*((C_word*)lf[188]+1),t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[34]+1));}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9754 in k9747 in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1301 lset=");
((C_proc5)C_retrieve_symbol_proc(lf[187]))(5,*((C_word*)lf[187]+1),((C_word*)t0)[3],*((C_word*)lf[34]+1),((C_word*)((C_word*)t0)[2])[1],t1);}

/* rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_9307(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9307,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(3));
t10=t2;
t11=(C_word)C_slot(t10,C_fix(1));
t12=(C_word)C_eqp(t11,lf[9]);
if(C_truep(t12)){
t13=(C_word)C_i_car(t7);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9371,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t13,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 1232 get");
((C_proc5)C_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),t14,((C_word*)t0)[9],t13,lf[181]);}
else{
t13=(C_word)C_eqp(t11,lf[54]);
if(C_truep(t13)){
if(C_truep(t3)){
t14=(C_word)C_i_caddr(t7);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9389,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=t9,a[5]=((C_word*)t0)[8],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 1240 decompose-lambda-list");
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t1,t14,t15);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t14=(C_word)C_eqp(t11,lf[89]);
if(C_truep(t14)){
t15=((C_word*)((C_word*)t0)[11])[1];
if(C_truep(t15)){
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}
else{
t16=(C_word)C_i_cadr(t7);
t17=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[10])[1],t16);
t18=C_mutate(((C_word *)((C_word*)t0)[10])+1,t17);
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9426,a[2]=t5,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1249 every");
((C_proc4)C_retrieve_symbol_proc(lf[41]))(4,*((C_word*)lf[41]+1),t1,t19,t9);}}
else{
t15=(C_word)C_eqp(t11,lf[182]);
if(C_truep(t15)){
if(C_truep(t4)){
if(C_truep(((C_word*)t0)[6])){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9460,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t17=(C_word)C_i_car(t9);
C_trace("optimizer.scm: 1252 scan-used-variables");
((C_proc4)C_retrieve_symbol_proc(lf[133]))(4,*((C_word*)lf[133]+1),t16,t17,t5);}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}
else{
t16=(C_word)C_eqp(t11,lf[183]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9476,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t9,a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t18=(C_word)C_i_cadr(t7);
C_trace("optimizer.scm: 1257 estimate-foreign-result-size");
((C_proc3)C_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),t17,t18);}
else{
t17=(C_word)C_eqp(t11,lf[185]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9517,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t9,a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t19=(C_word)C_i_car(t7);
C_trace("optimizer.scm: 1265 estimate-foreign-result-size");
((C_proc3)C_retrieve_symbol_proc(lf[184]))(3,*((C_word*)lf[184]+1),t18,t19);}
else{
t18=(C_word)C_eqp(t11,lf[15]);
if(C_truep(t18)){
t19=(C_word)C_i_car(t9);
t20=(C_word)C_slot(t19,C_fix(1));
t21=(C_word)C_eqp(lf[9],t20);
if(C_truep(t21)){
t22=(C_word)C_slot(t19,C_fix(2));
t23=(C_word)C_i_car(t22);
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9570,a[2]=t1,a[3]=t9,a[4]=t5,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t25=(C_word)C_eqp(t23,((C_word*)t0)[4]);
if(C_truep(t25)){
t26=(C_word)C_eqp(((C_word*)((C_word*)t0)[10])[1],C_fix(0));
if(C_truep(t26)){
t27=(C_word)C_i_cadr(t9);
t28=(C_word)C_slot(t27,C_fix(1));
t29=(C_word)C_eqp(lf[9],t28);
if(C_truep(t29)){
t30=(C_word)C_slot(t27,C_fix(2));
t31=(C_word)C_i_car(t30);
t32=(C_word)C_a_i_cons(&a,2,t31,((C_word*)((C_word*)t0)[3])[1]);
t33=C_mutate(((C_word *)((C_word*)t0)[3])+1,t32);
t34=C_set_block_item(((C_word*)t0)[11],0,C_SCHEME_TRUE);
t35=t24;
f_9570(t35,C_SCHEME_TRUE);}
else{
t30=C_set_block_item(((C_word*)t0)[11],0,C_SCHEME_TRUE);
t31=t24;
f_9570(t31,C_SCHEME_TRUE);}}
else{
t27=t24;
f_9570(t27,C_SCHEME_FALSE);}}
else{
t26=t24;
f_9570(t26,(C_word)C_eqp(t23,((C_word*)t0)[2]));}}
else{
t22=t1;
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,C_SCHEME_FALSE);}}
else{
t19=(C_word)C_eqp(t11,lf[186]);
if(C_truep(t19)){
t20=(C_word)C_i_cadddr(t7);
t21=(C_word)C_eqp(t20,C_fix(0));
if(C_truep(t21)){
t22=t1;
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,t21);}
else{
t22=((C_word*)((C_word*)t0)[11])[1];
if(C_truep(t22)){
t23=t1;
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,C_SCHEME_FALSE);}
else{
t23=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[10])[1],t20);
t24=C_mutate(((C_word *)((C_word*)t0)[10])+1,t23);
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9679,a[2]=t5,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1291 every");
((C_proc4)C_retrieve_symbol_proc(lf[41]))(4,*((C_word*)lf[41]+1),t1,t25,t9);}}}
else{
t20=(C_word)C_eqp(t11,lf[16]);
if(C_truep(t20)){
t21=(C_word)C_i_car(t9);
t22=(C_word)C_i_car(t7);
C_trace("optimizer.scm: 1292 rec");
t67=t1;
t68=t21;
t69=t22;
t70=C_SCHEME_FALSE;
t71=t5;
t1=t67;
t2=t68;
t3=t69;
t4=t70;
t5=t71;
goto loop;}
else{
t21=(C_word)C_eqp(t11,lf[11]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9712,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=t9,tmp=(C_word)a,a+=7,tmp);
t23=(C_word)C_i_car(t9);
t24=(C_word)C_i_car(t7);
C_trace("optimizer.scm: 1294 rec");
t67=t22;
t68=t23;
t69=t24;
t70=t2;
t71=t5;
t1=t67;
t2=t68;
t3=t69;
t4=t70;
t5=t71;
goto loop;}
else{
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9736,a[2]=t5,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1296 every");
((C_proc4)C_retrieve_symbol_proc(lf[41]))(4,*((C_word*)lf[41]+1),t1,t22,t9);}}}}}}}}}}}

/* a9735 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9736(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9736,3,t0,t1,t2);}
C_trace("optimizer.scm: 1296 rec");
t3=((C_word*)((C_word*)t0)[3])[1];
f_9307(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k9710 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9712,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9723,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1295 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9721 in k9710 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1295 rec");
t2=((C_word*)((C_word*)t0)[4])[1];
f_9307(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* a9678 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9679(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9679,3,t0,t1,t2);}
C_trace("optimizer.scm: 1291 rec");
t3=((C_word*)((C_word*)t0)[3])[1];
f_9307(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k9568 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_9570(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9570,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9575,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("optimizer.scm: 1284 every");
((C_proc4)C_retrieve_symbol_proc(lf[41]))(4,*((C_word*)lf[41]+1),((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a9574 in k9568 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9575(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9575,3,t0,t1,t2);}
C_trace("optimizer.scm: 1284 rec");
t3=((C_word*)((C_word*)t0)[3])[1];
f_9307(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k9515 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9517,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_fix(0));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9523,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_9523(t4,t2);}
else{
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t4)){
t5=t3;
f_9523(t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t1);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=t3;
f_9523(t7,C_SCHEME_TRUE);}}}

/* k9521 in k9515 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_9523(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9523,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9528,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1271 every");
((C_proc4)C_retrieve_symbol_proc(lf[41]))(4,*((C_word*)lf[41]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a9527 in k9521 in k9515 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9528(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9528,3,t0,t1,t2);}
C_trace("optimizer.scm: 1271 rec");
t3=((C_word*)((C_word*)t0)[3])[1];
f_9307(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k9474 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9476,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_fix(0));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9482,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_9482(t4,t2);}
else{
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t4)){
t5=t3;
f_9482(t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t1);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=t3;
f_9482(t7,C_SCHEME_TRUE);}}}

/* k9480 in k9474 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_9482(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9482,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9487,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1263 every");
((C_proc4)C_retrieve_symbol_proc(lf[41]))(4,*((C_word*)lf[41]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a9486 in k9480 in k9474 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9487(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9487,3,t0,t1,t2);}
C_trace("optimizer.scm: 1263 rec");
t3=((C_word*)((C_word*)t0)[3])[1];
f_9307(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k9458 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9460,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9456,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1254 alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[27]))(5,*((C_word*)lf[27]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9454 in k9458 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* a9425 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9426(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9426,3,t0,t1,t2);}
C_trace("optimizer.scm: 1249 rec");
t3=((C_word*)((C_word*)t0)[3])[1];
f_9307(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* a9388 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9389(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9389,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[5])+1,t5);
t7=(C_word)C_i_car(((C_word*)t0)[4]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9405,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1244 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t8,t2,((C_word*)t0)[2]);}

/* k9403 in a9388 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1244 rec");
t2=((C_word*)((C_word*)t0)[4])[1];
f_9307(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* k9369 in rec in scan in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=(C_word)C_i_not(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_i_memq(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(C_word)C_i_not(t3);
if(C_truep(t4)){
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t5)){
t6=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(2));
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_TRUE);}}}}

/* walk in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_9105(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(22);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9105,NULL,5,t0,t1,t2,t3,t4);}
t5=t3;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t3;
t8=(C_word)C_slot(t7,C_fix(3));
t9=t3;
t10=(C_word)C_slot(t9,C_fix(1));
t11=(C_word)C_eqp(t10,lf[54]);
if(C_truep(t11)){
t12=(C_word)C_i_caddr(t6);
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9145,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=t3,a[10]=t1,a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t2)){
if(C_truep((C_word)C_i_cadr(t6))){
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9230,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t8,a[7]=t3,a[8]=t12,a[9]=t13,tmp=(C_word)a,a+=10,tmp);
C_trace("optimizer.scm: 1207 get");
((C_proc5)C_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),t14,((C_word*)t0)[2],t2,lf[77]);}
else{
t14=t13;
f_9145(2,t14,C_SCHEME_FALSE);}}
else{
t14=t13;
f_9145(2,t14,C_SCHEME_FALSE);}}
else{
t12=(C_word)C_eqp(t10,lf[16]);
if(C_truep(t12)){
t13=(C_word)C_i_car(t6);
t14=(C_word)C_i_car(t8);
C_trace("optimizer.scm: 1217 walk");
t26=t1;
t27=t13;
t28=t14;
t29=C_SCHEME_FALSE;
t1=t26;
t2=t27;
t3=t28;
t4=t29;
goto loop;}
else{
t13=(C_word)C_eqp(t10,lf[11]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9256,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t15=(C_word)C_i_car(t6);
t16=(C_word)C_i_car(t8);
C_trace("optimizer.scm: 1219 walk");
t26=t14;
t27=t15;
t28=t16;
t29=t3;
t1=t26;
t2=t27;
t3=t28;
t4=t29;
goto loop;}
else{
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9276,a[2]=t15,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp));
t17=((C_word*)t15)[1];
f_9276(t17,t1,t8);}}}}

/* loop2261 in walk in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_9276(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9276,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9284,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9291,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g22682269");
t6=t3;
f_9284(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9289 in loop2261 in walk in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9276(t3,((C_word*)t0)[2],t2);}

/* g2268 in loop2261 in walk in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_9284(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9284,NULL,3,t0,t1,t2);}
C_trace("optimizer.scm: 1221 walk");
t3=((C_word*)((C_word*)t0)[2])[1];
f_9105(t3,t1,C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}

/* k9254 in walk in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("optimizer.scm: 1220 walk");
t3=((C_word*)((C_word*)t0)[3])[1];
f_9105(t3,((C_word*)t0)[2],C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}

/* k9228 in walk in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9230,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[9];
f_9145(2,t2,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_listp(((C_word*)t0)[8]))){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
C_trace("optimizer.scm: 1209 get");
((C_proc5)C_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),t2,((C_word*)t0)[2],((C_word*)t0)[5],lf[45]);}
else{
t2=((C_word*)t0)[9];
f_9145(2,t2,C_SCHEME_FALSE);}}}

/* k9174 in k9228 in walk in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9176,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9182,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("optimizer.scm: 1210 get-list");
((C_proc5)C_retrieve_symbol_proc(lf[118]))(5,*((C_word*)lf[118]+1),t2,((C_word*)t0)[2],((C_word*)t0)[6],lf[76]);}
else{
t2=((C_word*)t0)[4];
f_9145(2,t2,C_SCHEME_FALSE);}}

/* k9180 in k9174 in k9228 in walk in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9182,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9188,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace("optimizer.scm: 1211 get-list");
((C_proc5)C_retrieve_symbol_proc(lf[118]))(5,*((C_word*)lf[118]+1),t2,((C_word*)t0)[2],((C_word*)t0)[6],lf[120]);}
else{
t2=((C_word*)t0)[4];
f_9145(2,t2,C_SCHEME_FALSE);}}

/* k9186 in k9180 in k9174 in k9228 in walk in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9188(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9188,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_eqp(((C_word*)t0)[10],((C_word*)t0)[9]);
if(C_truep(t2)){
t3=(C_word)C_i_length(((C_word*)t0)[8]);
t4=(C_word)C_i_length(t1);
t5=(C_word)C_eqp(t3,t4);
if(C_truep(t5)){
t6=(C_word)C_i_car(((C_word*)t0)[7]);
t7=(C_word)C_i_car(((C_word*)t0)[6]);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
C_trace("optimizer.scm: 1214 scan");
t9=((C_word*)((C_word*)t0)[4])[1];
f_9304(t9,((C_word*)t0)[3],t6,t7,((C_word*)t0)[5],((C_word*)t0)[2],t8);}
else{
t6=((C_word*)t0)[3];
f_9145(2,t6,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[3];
f_9145(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
f_9145(2,t2,C_SCHEME_FALSE);}}

/* k9143 in walk in ##compiler#transform-direct-lambdas! in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
C_trace("optimizer.scm: 1215 transform");
t2=((C_word*)((C_word*)t0)[11])[1];
f_9758(t2,((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[3]);
C_trace("optimizer.scm: 1216 walk");
t3=((C_word*)((C_word*)t0)[2])[1];
f_9105(t3,((C_word*)t0)[10],C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}}

/* ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6687(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
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
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word ab[8],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_6687,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
switch(t6){
case C_fix(1):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6749,a[2]=t5,a[3]=t8,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t10=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t9,t10,lf[44]);
case C_fix(2):
if(C_truep(C_retrieve(lf[138]))){
t9=(C_word)C_i_length(t8);
t10=(C_word)C_i_car(t7);
t11=(C_word)C_eqp(t9,t10);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6900,a[2]=t2,a[3]=t1,a[4]=t5,a[5]=t8,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t13=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t12,t13,lf[44]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(3):
if(C_truep(C_retrieve(lf[138]))){
if(C_truep((C_word)C_i_nullp(t8))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7031,a[2]=t7,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t10=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t9,t10,lf[44]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(4):
if(C_truep(C_retrieve(lf[138]))){
if(C_truep(C_retrieve(lf[142]))){
t9=(C_word)C_i_length(t8);
t10=(C_word)C_eqp(C_fix(2),t9);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7080,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t12=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t11,t12,lf[44]);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(5):
if(C_truep(C_retrieve(lf[138]))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7148,a[2]=t1,a[3]=t5,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t10=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t9,t10,lf[44]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(6):
t9=(C_word)C_i_caddr(t7);
t10=(C_truep(t9)?t9:C_retrieve(lf[142]));
if(C_truep(t10)){
if(C_truep(C_retrieve(lf[138]))){
t11=(C_word)C_i_length(t8);
t12=(C_word)C_eqp(C_fix(1),t11);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7253,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t14=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t13,t14,lf[44]);}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}
case C_fix(7):
t9=(C_word)C_i_cadddr(t7);
t10=(C_truep(t9)?t9:C_retrieve(lf[142]));
if(C_truep(t10)){
if(C_truep(C_retrieve(lf[138]))){
t11=(C_word)C_i_length(t8);
t12=(C_word)C_i_car(t7);
t13=(C_word)C_eqp(t11,t12);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7342,a[2]=t8,a[3]=t1,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t15=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t14,t15,lf[44]);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}
case C_fix(8):
if(C_truep(C_retrieve(lf[138]))){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7415,a[2]=t8,a[3]=t5,a[4]=t2,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t10=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t9,t10,lf[44]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(9):
if(C_truep(C_retrieve(lf[138]))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7441,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t10=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t9,t10,lf[44]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(10):
if(C_truep(C_retrieve(lf[138]))){
t9=(C_word)C_i_cadddr(t7);
t10=(C_truep(t9)?t9:C_retrieve(lf[142]));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7684,a[2]=t1,a[3]=t5,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t12=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t11,t12,lf[44]);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(11):
if(C_truep(C_retrieve(lf[138]))){
t9=(C_word)C_i_caddr(t7);
t10=(C_truep(t9)?t9:C_retrieve(lf[142]));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7783,a[2]=t8,a[3]=t5,a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t12=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t11,t12,lf[44]);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(12):
if(C_truep(C_retrieve(lf[138]))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7854,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t10=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t9,t10,lf[44]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(13):
if(C_truep(C_retrieve(lf[138]))){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7942,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t10=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t9,t10,lf[44]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(14):
if(C_truep(C_retrieve(lf[138]))){
t9=(C_word)C_i_cadr(t7);
t10=(C_word)C_i_length(t8);
t11=(C_word)C_eqp(t9,t10);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8019,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t13=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t12,t13,lf[44]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(15):
if(C_truep(C_retrieve(lf[138]))){
t9=(C_word)C_i_length(t8);
t10=(C_word)C_eqp(C_fix(1),t9);
if(C_truep(t10)){
t11=C_retrieve(lf[142]);
t12=(C_truep(t11)?t11:(C_word)C_i_cadddr(t7));
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8113,a[2]=t8,a[3]=t5,a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t14=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t13,t14,lf[44]);}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(16):
t9=(C_word)C_i_car(t7);
t10=(C_word)C_i_length(t8);
t11=(C_word)C_i_cadddr(t7);
if(C_truep(C_retrieve(lf[138]))){
t12=(C_word)C_i_not(t9);
t13=(C_truep(t12)?t12:(C_word)C_eqp(t10,t9));
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8218,a[2]=t10,a[3]=t11,a[4]=t1,a[5]=t5,a[6]=t8,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t15=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t14,t15,lf[44]);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(17):
if(C_truep(C_retrieve(lf[138]))){
t9=(C_word)C_i_length(t8);
t10=(C_word)C_i_car(t7);
t11=(C_word)C_eqp(t9,t10);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8308,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t13=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t12,t13,lf[44]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(18):
if(C_truep(C_retrieve(lf[138]))){
if(C_truep((C_word)C_i_nullp(t8))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8387,a[2]=t7,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t10=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t9,t10,lf[44]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(19):
if(C_truep(C_retrieve(lf[138]))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8427,a[2]=t8,a[3]=t1,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t10=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t9,t10,lf[44]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(20):
t9=(C_word)C_i_length(t8);
t10=(C_word)C_i_cadddr(t7);
t11=(C_truep(t10)?t10:C_retrieve(lf[142]));
if(C_truep(t11)){
if(C_truep(C_retrieve(lf[138]))){
t12=(C_word)C_i_car(t7);
t13=(C_word)C_eqp(t9,t12);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8609,a[2]=t8,a[3]=t9,a[4]=t1,a[5]=t5,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t15=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t14,t15,lf[44]);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(21):
if(C_truep(C_retrieve(lf[138]))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8694,a[2]=t8,a[3]=t1,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t10=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t9,t10,lf[44]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(22):
t9=(C_word)C_i_car(t7);
t10=(C_word)C_i_length(t8);
t11=(C_word)C_i_cadddr(t7);
if(C_truep(C_retrieve(lf[138]))){
t12=(C_word)C_eqp(t10,t9);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8889,a[2]=t11,a[3]=t1,a[4]=t5,a[5]=t8,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t14=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t13,t14,lf[44]);}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(23):
if(C_truep(C_retrieve(lf[138]))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8969,a[2]=t5,a[3]=t1,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t10=t4;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t9,t10,lf[44]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
default:
C_trace("optimizer.scm: 1182 bomb");
((C_proc3)C_retrieve_symbol_proc(lf[178]))(3,*((C_word*)lf[178]+1),t1,lf[179]);}}

/* k8967 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8969(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8969,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_length(((C_word*)t0)[4]);
t4=(C_word)C_i_car(((C_word*)t0)[5]);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,t4))){
t5=(C_word)C_i_cadr(((C_word*)t0)[5]);
t6=(C_word)C_a_i_list(&a,2,C_SCHEME_TRUE,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8994,a[2]=t6,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8998,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t9=(C_word)C_i_cadr(((C_word*)t0)[5]);
C_trace("optimizer.scm: 1168 varnode");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t8,t9);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8996 in k8967 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8998,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9002,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9004,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9010,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,t2,t3,t4);}

/* a9009 in k8996 in k8967 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9010(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9010,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9018,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_cddr(((C_word*)t0)[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9024,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_9024(t9,t4,t3,t5);}

/* loop in a9009 in k8996 in k8967 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_9024(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9024,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9044,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_car(t3);
if(C_truep((C_word)C_i_symbolp(t5))){
C_trace("optimizer.scm: 792  varnode");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t4,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6712,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t5))){
t7=(C_word)C_i_car(t5);
t8=t6;
f_6712(t8,(C_word)C_eqp(lf[26],t7));}
else{
t7=t6;
f_6712(t7,C_SCHEME_FALSE);}}}}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9073,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_i_cdr(t3);
C_trace("optimizer.scm: 1180 loop");
t13=t5;
t14=t6;
t15=t7;
t1=t13;
t2=t14;
t3=t15;
goto loop;}}}

/* k9071 in loop in a9009 in k8996 in k8967 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9073,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6710 in loop in a9009 in k8996 in k8967 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_6712(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[3]);
C_trace("optimizer.scm: 793  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),((C_word*)t0)[2],t2);}
else{
C_trace("optimizer.scm: 794  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k9042 in loop in a9009 in k8996 in k8967 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9044,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9048,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("optimizer.scm: 1178 loop");
t4=((C_word*)((C_word*)t0)[2])[1];
f_9024(t4,t2,C_SCHEME_END_OF_LIST,t3);}

/* k9046 in k9042 in loop in a9009 in k8996 in k8967 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9048,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k9016 in a9009 in k8996 in k8967 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1171 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a9003 in k8996 in k8967 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9004,2,t0,t1);}
C_trace("optimizer.scm: 1170 split-at");
((C_proc4)C_retrieve_symbol_proc(lf[87]))(4,*((C_word*)lf[87]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9000 in k8996 in k8967 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_9002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1167 cons*");
((C_proc5)C_retrieve_symbol_proc(lf[158]))(5,*((C_word*)lf[158]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8992 in k8967 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8994,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[35],lf[15],((C_word*)t0)[2],t1));}

/* k8887 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8889(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8889,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_caddr(((C_word*)t0)[6]);
t3=(C_truep(t2)?t2:C_retrieve(lf[142]));
if(C_truep(t3)){
t4=(C_word)C_eqp(C_retrieve(lf[148]),lf[153]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8933,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1149 fifth");
((C_proc3)C_retrieve_symbol_proc(lf[175]))(3,*((C_word*)lf[175]+1),t5,((C_word*)t0)[6]);}
else{
t5=(C_word)C_i_cadr(((C_word*)t0)[6]);
t6=(C_word)C_a_i_list(&a,2,t5,((C_word*)t0)[2]);
t7=((C_word*)t0)[5];
t8=(C_word)C_a_i_record(&a,4,lf[35],lf[89],t6,t7);
t9=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t8);
t10=((C_word*)t0)[3];
t11=t10;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[177],t9));}}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8931 in k8887 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8933,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[4];
t4=(C_word)C_a_i_record(&a,4,lf[35],lf[139],t2,t3);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[2];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[176],t5));}

/* k8692 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8694,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8700,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 1109 fifth");
((C_proc3)C_retrieve_symbol_proc(lf[175]))(3,*((C_word*)lf[175]+1),t3,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8698 in k8692 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8700,2,t0,t1);}
t2=(C_word)C_i_cadddr(((C_word*)t0)[6]);
t3=(C_truep(C_retrieve(lf[142]))?(C_word)C_i_caddr(((C_word*)t0)[6]):(C_word)C_i_cadr(((C_word*)t0)[6]));
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8709,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8816,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("optimizer.scm: 1113 remove");
((C_proc4)C_retrieve_symbol_proc(lf[170]))(4,*((C_word*)lf[170]+1),t4,t5,((C_word*)t0)[2]);}

/* a8815 in k8698 in k8692 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8816(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8816,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_eqp(lf[26],t4);
if(C_truep(t5)){
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=(C_word)C_i_car(t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_eqp(((C_word*)t0)[2],t8));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k8707 in k8698 in k8692 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8709(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8709,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8731,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1118 qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t2,((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_car(t1);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[7],t3);
t5=((C_word*)t0)[6];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[173],t4));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8769,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 1126 fold-inner");
((C_proc4)C_retrieve_symbol_proc(lf[169]))(4,*((C_word*)lf[169]+1),t3,t4,t1);}}}

/* a8770 in k8707 in k8698 in k8692 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8771(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[17],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8771,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(C_retrieve(lf[148]),lf[153]);
if(C_truep(t4)){
t5=(C_word)C_a_i_list(&a,1,((C_word*)t0)[4]);
t6=(C_word)C_a_i_list(&a,2,t2,t3);
t7=t1;
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_record(&a,4,lf[35],lf[139],t5,t6));}
else{
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t6=(C_word)C_a_i_list(&a,2,t2,t3);
t7=t1;
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_record(&a,4,lf[35],lf[89],t5,t6));}}

/* k8767 in k8707 in k8698 in k8692 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8769,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[174],t2));}

/* k8729 in k8707 in k8698 in k8692 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8731,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[172],t2));}

/* k8607 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8609,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8638,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8640,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8650,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,t4,t5,t6);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a8649 in k8607 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8650(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8650,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8662,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_caddr(((C_word*)t0)[2]);
C_trace("optimizer.scm: 1097 qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t4,t5);}

/* k8660 in a8649 in k8607 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8662,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
C_trace("optimizer.scm: 1096 append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),((C_word*)t0)[4],((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a8639 in k8607 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8640,2,t0,t1);}
t2=(C_word)C_fixnum_decrease(((C_word*)t0)[3]);
C_trace("optimizer.scm: 1095 split-at");
((C_proc4)C_retrieve_symbol_proc(lf[87]))(4,*((C_word*)lf[87]+1),t1,((C_word*)t0)[2],t2);}

/* k8636 in k8607 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8638,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,4,lf[35],lf[139],((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[171],t3));}

/* k8425 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8427,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_truep(C_retrieve(lf[142]))?(C_word)C_i_caddr(((C_word*)t0)[5]):(C_word)C_i_cadr(((C_word*)t0)[5]));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8436,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8533,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("optimizer.scm: 1064 remove");
((C_proc4)C_retrieve_symbol_proc(lf[170]))(4,*((C_word*)lf[170]+1),t4,t5,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a8532 in k8425 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8533(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8533,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_eqp(lf[26],t4);
if(C_truep(t5)){
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=(C_word)C_i_car(t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_eqp(((C_word*)t0)[2],t8));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k8434 in k8425 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8436(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8436,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8458,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 1069 qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_car(t1);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t3);
t5=((C_word*)t0)[5];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[167],t4));}
else{
t3=(C_word)C_i_cadddr(((C_word*)t0)[3]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(C_retrieve(lf[148]),lf[153]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8505,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8507,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("optimizer.scm: 1077 fold-inner");
((C_proc4)C_retrieve_symbol_proc(lf[169]))(4,*((C_word*)lf[169]+1),t5,t6,t1);}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}}}

/* a8506 in k8434 in k8425 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8507(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8507,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
t5=(C_word)C_a_i_list(&a,2,t2,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[35],lf[139],t4,t5));}

/* k8503 in k8434 in k8425 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8505,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[168],t2));}

/* k8456 in k8434 in k8425 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8458,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[166],t2));}

/* k8385 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8387,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8403,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
C_trace("optimizer.scm: 1051 qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t2,t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8401 in k8385 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8403,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[165],t2));}

/* k8306 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8308,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8337,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[142]))){
t3=(C_word)C_i_cddr(((C_word*)t0)[2]);
t4=(C_word)C_i_pairp(t3);
t5=t2;
f_8337(t5,(C_truep(t4)?(C_word)C_i_caddr(((C_word*)t0)[2]):(C_word)C_i_cadr(((C_word*)t0)[2])));}
else{
t3=t2;
f_8337(t3,(C_word)C_i_cadr(((C_word*)t0)[2]));}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8335 in k8306 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_8337(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8337,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[4];
t4=(C_word)C_a_i_record(&a,4,lf[35],lf[139],t2,t3);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[2];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[164],t5));}

/* k8216 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8218(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8218,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_caddr(((C_word*)t0)[7]);
t3=(C_truep(t2)?t2:C_retrieve(lf[142]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8252,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cadr(((C_word*)t0)[7]);
t6=(C_word)C_eqp(C_SCHEME_TRUE,((C_word*)t0)[3]);
if(C_truep(t6)){
t7=(C_word)C_fixnum_increase(((C_word*)t0)[2]);
t8=t4;
f_8252(t8,(C_word)C_a_i_list(&a,2,t5,t7));}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t7=(C_word)C_i_car(((C_word*)t0)[3]);
t8=(C_word)C_fixnum_times(((C_word*)t0)[2],t7);
t9=t4;
f_8252(t9,(C_word)C_a_i_list(&a,2,t5,t8));}
else{
t7=t4;
f_8252(t7,(C_word)C_a_i_list(&a,2,t5,((C_word*)t0)[3]));}}}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8250 in k8216 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_8252(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8252,NULL,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(C_word)C_a_i_record(&a,4,lf[35],lf[89],t1,t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[2];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[163],t4));}

/* k8111 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8113(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8113,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_eqp(C_retrieve(lf[148]),t2);
if(C_truep(t3)){
t4=(C_word)C_i_caddr(((C_word*)t0)[5]);
t5=(C_word)C_a_i_list(&a,2,C_SCHEME_TRUE,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8135,a[2]=t5,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8139,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_i_caddr(((C_word*)t0)[5]);
C_trace("optimizer.scm: 1002 varnode");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t7,t8);}
else{
t4=(C_word)C_i_cadr(((C_word*)t0)[5]);
t5=(C_word)C_eqp(C_retrieve(lf[148]),t4);
if(C_truep(t5)){
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t7=((C_word*)t0)[4];
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[162],t6));}
else{
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8137 in k8111 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 1002 cons*");
((C_proc5)C_retrieve_symbol_proc(lf[158]))(5,*((C_word*)lf[158]+1),((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8133 in k8111 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8135,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[35],lf[15],((C_word*)t0)[2],t1));}

/* k8017 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_8019(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8019,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_eqp(C_retrieve(lf[148]),t2);
if(C_truep(t3)){
t4=(C_word)C_i_cadddr(((C_word*)t0)[5]);
t5=(C_truep(t4)?t4:C_retrieve(lf[142]));
if(C_truep(t5)){
t6=(C_truep(C_retrieve(lf[142]))?(C_word)C_i_cadddr(((C_word*)t0)[5]):(C_word)C_i_caddr(((C_word*)t0)[5]));
t7=(C_word)C_a_i_list(&a,1,t6);
t8=((C_word*)t0)[4];
t9=(C_word)C_a_i_record(&a,4,lf[35],lf[139],t7,t8);
t10=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t9);
t11=((C_word*)t0)[2];
t12=t11;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[161],t10));}
else{
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7940 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7942,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(C_truep(t2)?t2:C_retrieve(lf[142]));
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[6]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7966,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t6=(C_word)C_i_cdr(((C_word*)t0)[2]);
t7=t5;
f_7966(t7,(C_word)C_a_i_cons(&a,2,C_SCHEME_TRUE,t6));}
else{
t6=t5;
f_7966(t6,((C_word*)t0)[2]);}}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7964 in k7940 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_7966(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7966,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7970,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],C_SCHEME_TRUE);
t4=(C_word)C_a_i_record(&a,4,lf[35],lf[160],t3,C_SCHEME_END_OF_LIST);
C_trace("optimizer.scm: 975  cons*");
((C_proc5)C_retrieve_symbol_proc(lf[158]))(5,*((C_word*)lf[158]+1),t2,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7968 in k7964 in k7940 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7970,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[15],t3,t1));}

/* k7852 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
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
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7854,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_truep(t2)?t2:C_retrieve(lf[142]));
if(C_truep(t3)){
t4=(C_word)C_i_length(((C_word*)t0)[4]);
t5=(C_word)C_i_caddr(((C_word*)t0)[5]);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t4,t5))){
t6=(C_word)C_eqp(t4,C_fix(1));
if(C_truep(t6)){
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t8=((C_word*)t0)[2];
t9=t8;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[159],t7));}
else{
t7=(C_word)C_i_car(((C_word*)t0)[5]);
t8=(C_word)C_a_i_list(&a,2,C_SCHEME_TRUE,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7906,a[2]=t8,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7910,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t11=(C_word)C_i_car(((C_word*)t0)[5]);
C_trace("optimizer.scm: 965  varnode");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t10,t11);}}
else{
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7908 in k7852 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 965  cons*");
((C_proc5)C_retrieve_symbol_proc(lf[158]))(5,*((C_word*)lf[158]+1),((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7904 in k7852 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7906,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[35],lf[15],((C_word*)t0)[2],t1));}

/* k7781 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7783,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_7795(t5,t3);}
else{
t5=(C_word)C_i_length(((C_word*)t0)[2]);
t6=(C_word)C_i_car(((C_word*)t0)[5]);
t7=t4;
f_7795(t7,(C_word)C_eqp(t5,t6));}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7793 in k7781 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_7795(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7795,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,2,C_SCHEME_TRUE,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7811,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7815,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_cadr(((C_word*)t0)[5]);
C_trace("optimizer.scm: 950  varnode");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t5,t6);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7813 in k7793 in k7781 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 950  cons*");
((C_proc5)C_retrieve_symbol_proc(lf[158]))(5,*((C_word*)lf[158]+1),((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7809 in k7793 in k7781 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7811,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[35],lf[15],((C_word*)t0)[2],t1));}

/* k7682 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7684,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_length(((C_word*)t0)[5]);
if(C_truep((C_word)C_and((C_word)C_fixnum_lessp(C_fix(0),t2),(C_word)C_fixnum_lessp(t2,C_fix(3))))){
t3=(C_word)C_i_car(((C_word*)t0)[4]);
t4=(C_word)C_a_i_list(&a,2,C_SCHEME_FALSE,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7713,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("optimizer.scm: 932  varnode");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t5,t6);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7711 in k7682 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7713,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7721,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[2]);
C_trace("optimizer.scm: 935  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t3,t4);}

/* k7719 in k7711 in k7682 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7721,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7725,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_i_caddr(((C_word*)t0)[2]);
C_trace("optimizer.scm: 937  varnode");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t2,t4);}
else{
t4=t2;
f_7725(2,t4,(C_word)C_i_cadr(((C_word*)t0)[3]));}}

/* k7723 in k7719 in k7711 in k7682 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7725,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,5,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[15],((C_word*)t0)[2],t2));}

/* k7439 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7441,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_length(((C_word*)t0)[5]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7463,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 903  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t3,C_SCHEME_TRUE);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7469,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve(lf[142]))){
t4=(C_word)C_eqp(C_retrieve(lf[148]),lf[157]);
t5=t3;
f_7469(t5,(C_word)C_i_not(t4));}
else{
t4=t3;
f_7469(t4,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7467 in k7439 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_7469(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7469,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7472,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_7472(t3,t1);}
else{
t3=(C_word)C_eqp(C_retrieve(lf[148]),lf[153]);
t4=(C_truep(t3)?(C_word)C_i_caddr(((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=t2;
f_7472(t5,t4);}
else{
t5=(C_word)C_eqp(C_retrieve(lf[148]),lf[156]);
t6=t2;
f_7472(t6,(C_truep(t5)?(C_word)C_i_cadddr(((C_word*)t0)[5]):C_SCHEME_FALSE));}}}

/* k7470 in k7467 in k7439 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_7472(C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7472,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7475,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7585,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_7585(t10,t6,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop1686 in k7470 in k7467 in k7439 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_7585(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7585,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7619,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("optimizer.scm: 907  gensym");
((C_proc2)C_retrieve_symbol_proc(lf[84]))(2,*((C_word*)lf[84]+1),t3);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7617 in loop1686 in k7470 in k7467 in k7439 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7619(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7619,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop16861699");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7585(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop16861699");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7585(t6,((C_word*)t0)[3],t5);}}

/* k7473 in k7470 in k7467 in k7439 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7475(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7475,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7478,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7550,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_7550(t10,t6,t1);}

/* loop1711 in k7473 in k7470 in k7467 in k7439 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_7550(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7550,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[47]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7579,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g17271728");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7577 in loop1711 in k7473 in k7470 in k7467 in k7439 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7579(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7579,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop17111724");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7550(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop17111724");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7550(t6,((C_word*)t0)[3],t5);}}

/* k7476 in k7473 in k7470 in k7467 in k7439 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7478,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7483,tmp=(C_word)a,a+=2,tmp);
t3=(C_word)C_eqp(C_retrieve(lf[148]),lf[153]);
t4=(C_truep(t3)?(C_word)C_i_car(((C_word*)t0)[6]):(C_word)C_i_cadr(((C_word*)t0)[6]));
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7520,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7522,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("optimizer.scm: 919  fold-boolean");
((C_proc4)C_retrieve_symbol_proc(lf[155]))(4,*((C_word*)lf[155]+1),t6,t7,t1);}

/* a7521 in k7476 in k7473 in k7470 in k7467 in k7439 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7522(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7522,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_list(&a,2,t2,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[35],lf[139],((C_word*)t0)[2],t4));}

/* k7518 in k7476 in k7473 in k7470 in k7467 in k7439 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7520,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t1);
t3=(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[154],t2);
C_trace("optimizer.scm: 909  fold-right");
((C_proc6)C_retrieve_symbol_proc(lf[126]))(6,*((C_word*)lf[126]+1),((C_word*)t0)[5],((C_word*)t0)[4],t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a7482 in k7476 in k7473 in k7470 in k7467 in k7439 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7483(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7483,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_list(&a,1,t3);
t6=(C_word)C_a_i_list(&a,2,t2,t4);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[35],lf[11],t5,t6));}

/* k7461 in k7439 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7463,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[152],t2));}

/* k7413 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[6]);
C_trace("g16501651");
t3=t2;
((C_proc6)C_retrieve_proc(t3))(6,t3,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7340 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7342,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7371,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7379,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_caddr(((C_word*)t0)[5]);
C_trace("optimizer.scm: 889  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t5,t6);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7377 in k7340 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7379,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
C_trace("optimizer.scm: 888  append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k7369 in k7340 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7371,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,4,lf[35],lf[139],((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[151],t3));}

/* k7251 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7253(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7253,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_i_cadr(((C_word*)t0)[5]);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=((C_word*)t0)[4];
t7=(C_word)C_a_i_record(&a,4,lf[35],lf[139],t5,t6);
t8=(C_word)C_a_i_list(&a,1,t7);
t9=(C_word)C_a_i_record(&a,4,lf[35],lf[139],t3,t8);
t10=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t9);
t11=((C_word*)t0)[2];
t12=t11;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[150],t10));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7146 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7148(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7148,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_length(((C_word*)t0)[5]);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(C_word)C_i_caddr(((C_word*)t0)[4]);
t5=(C_word)C_i_not(t4);
t6=(C_truep(t5)?t5:(C_word)C_eqp(t4,C_retrieve(lf[148])));
if(C_truep(t6)){
t7=(C_word)C_i_car(((C_word*)t0)[4]);
t8=(C_word)C_a_i_list(&a,1,t7);
t9=(C_word)C_i_car(((C_word*)t0)[5]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t8,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t11=(C_word)C_i_cadr(((C_word*)t0)[4]);
C_trace("optimizer.scm: 865  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t10,t11);}
else{
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7201 in k7146 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7203,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_record(&a,4,lf[35],lf[139],((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[2];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[149],t4));}

/* k7078 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7080,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,2,C_SCHEME_FALSE,t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7100,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[5]);
C_trace("optimizer.scm: 847  varnode");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t4,t5);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7098 in k7078 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7100,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7108,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[2]);
C_trace("optimizer.scm: 850  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t3,t4);}

/* k7106 in k7098 in k7078 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7108,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,5,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t1,t2);
t4=((C_word*)t0)[3];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[35],lf[15],((C_word*)t0)[2],t3));}

/* k7029 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7031,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7047,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
C_trace("optimizer.scm: 838  varnode");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),t2,t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7045 in k7029 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_7047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7047,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[147],t2));}

/* k6898 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6900(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6900,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_caddr(((C_word*)t0)[6]);
t3=(C_truep(t2)?t2:C_retrieve(lf[142]));
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[5]);
t5=(C_word)C_i_cadddr(((C_word*)t0)[6]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6934,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t5,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=(C_word)C_slot(t4,C_fix(1));
t8=(C_word)C_eqp(lf[9],t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6975,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t10=(C_word)C_slot(t4,C_fix(2));
t11=(C_word)C_i_car(t10);
C_trace("optimizer.scm: 829  get");
((C_proc5)C_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),t9,((C_word*)t0)[2],t11,lf[146]);}
else{
t9=t6;
f_6934(t9,C_SCHEME_FALSE);}}
else{
t7=t6;
f_6934(t7,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6973 in k6898 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6934(t2,(C_word)C_eqp(lf[145],t1));}

/* k6932 in k6898 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_6934(C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6934,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[6]);
t3=((C_word*)t0)[5];
t4=(C_word)C_a_i_record(&a,4,lf[35],lf[139],t2,t3);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t4);
t6=((C_word*)t0)[3];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[143],t5));}
else{
t2=(C_word)C_i_cadr(((C_word*)t0)[2]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=((C_word*)t0)[5];
t5=(C_word)C_a_i_record(&a,4,lf[35],lf[139],t3,t4);
t6=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t5);
t7=((C_word*)t0)[3];
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[144],t6));}}

/* k6747 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6749(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6749,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6752,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_length(((C_word*)t0)[3]);
t4=(C_word)C_i_car(((C_word*)t0)[4]);
t5=(C_word)C_eqp(t3,t4);
if(C_truep(t5)){
t6=(C_word)C_i_car(((C_word*)t0)[3]);
t7=(C_word)C_i_cadr(((C_word*)t0)[3]);
t8=(C_word)C_slot(t6,C_fix(1));
t9=(C_word)C_eqp(lf[9],t8);
if(C_truep(t9)){
t10=(C_word)C_slot(t7,C_fix(1));
t11=(C_word)C_eqp(lf[9],t10);
if(C_truep(t11)){
t12=(C_word)C_slot(t6,C_fix(2));
t13=(C_word)C_slot(t7,C_fix(2));
if(C_truep((C_word)C_i_equalp(t12,t13))){
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6830,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 808  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t14,C_SCHEME_TRUE);}
else{
t14=t2;
f_6752(t14,C_SCHEME_FALSE);}}
else{
t12=t2;
f_6752(t12,C_SCHEME_FALSE);}}
else{
t10=t2;
f_6752(t10,C_SCHEME_FALSE);}}
else{
t6=t2;
f_6752(t6,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6828 in k6747 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6830,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
f_6752(t3,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[141],t2));}

/* k6750 in k6747 in ##compiler#simplify-named-call in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_6752(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6752,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_retrieve(lf[138]))){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=((C_word*)t0)[3];
t5=(C_word)C_a_i_record(&a,4,lf[35],lf[139],t3,t4);
t6=(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t5);
t7=((C_word*)t0)[5];
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[140],t6));}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* ##compiler#rewrite in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6667(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6667r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6667r(t0,t1,t2,t3);}}

static void C_ccall f_6667r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6671,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 786  ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[31]))(4,*((C_word*)lf[31]+1),t4,C_retrieve(lf[135]),t2);}

/* k6669 in ##compiler#rewrite in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6671,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6681,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
C_trace("optimizer.scm: 787  append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t3,t2,t4);}

/* k6679 in k6669 in ##compiler#rewrite in k6663 in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 787  ##sys#hash-table-set!");
((C_proc5)C_retrieve_symbol_proc(lf[123]))(5,*((C_word*)lf[123]+1),((C_word*)t0)[3],C_retrieve(lf[135]),((C_word*)t0)[2],t1);}

/* ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6178(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6178,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6182,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6614,a[2]=t8,a[3]=t13,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_6614(t15,t11,t2,t3);}

/* loop1229 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_6614(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_6614,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[134]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6647,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
C_trace("g12491250");
t10=t6;
((C_proc4)C_retrieve_proc(t10))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k6645 in loop1229 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6647,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6627,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_6627(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_6627(t5,t4);}}

/* k6625 in k6645 in loop1229 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_6627(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
C_trace("loop12291243");
t5=((C_word*)((C_word*)t0)[3])[1];
f_6614(t5,((C_word*)t0)[2],t3,t4);}

/* k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6182,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6184,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6229,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6567,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6567(t7,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop1256 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_6567(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6567,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6575,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6587,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
C_trace("g12841285");
t10=t6;
f_6575(t10,t7,t8,t9);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k6585 in loop1256 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_6567(t4,((C_word*)t0)[2],t2,t3);}

/* g1284 in loop1256 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_6575(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6575,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6580,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6584,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 710  scan-used-variables");
((C_proc4)C_retrieve_symbol_proc(lf[133]))(4,*((C_word*)lf[133]+1),t5,t3,((C_word*)t0)[2]);}

/* k6582 in g1284 in loop1256 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 710  alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[27]))(5,*((C_word*)lf[27]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k6578 in g1284 in loop1256 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6229(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6229,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6487,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_6487(t10,t6,((C_word*)t0)[2]);}

/* loop1294 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_6487(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6487,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6495,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6554,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g13011302");
t6=t3;
f_6495(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6552 in loop1294 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6487(t3,((C_word*)t0)[2],t2);}

/* g1301 in loop1294 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_6495(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6495,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_memq(t2,((C_word*)((C_word*)t0)[5])[1]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6505,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6527,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 719  filter");
((C_proc4)C_retrieve_symbol_proc(lf[131]))(4,*((C_word*)lf[131]+1),t3,t4,((C_word*)t0)[2]);}}

/* a6526 in g1301 in loop1294 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6527(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6527,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6540,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 720  find-path");
t5=((C_word*)t0)[2];
f_6184(t5,t4,((C_word*)t0)[3],t2);}}

/* k6538 in a6526 in g1301 in loop1294 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("optimizer.scm: 720  find-path");
t2=((C_word*)t0)[5];
f_6184(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6503 in g1301 in loop1294 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6505,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6509,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6521,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 722  gensym");
((C_proc2)C_retrieve_symbol_proc(lf[84]))(2,*((C_word*)lf[84]+1),t3);}

/* k6519 in k6503 in g1301 in loop1294 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6521,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
C_trace("optimizer.scm: 722  alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[27]))(5,*((C_word*)lf[27]+1),((C_word*)t0)[3],t1,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k6507 in k6503 in g1301 in loop1294 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6509,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6513,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[3]);
C_trace("optimizer.scm: 723  append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[12]+1)))(5,*((C_word*)lf[12]+1),t3,t4,((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}

/* k6511 in k6507 in k6503 in g1301 in loop1294 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6232(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6232,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6235,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6406,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=t3,tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_6406(t8,t4,((C_word*)((C_word*)t0)[7])[1]);}

/* loop1318 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_6406(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6406,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6414,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6474,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g13251326");
t6=t3;
f_6414(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6472 in loop1318 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6406(t3,((C_word*)t0)[2],t2);}

/* g1325 in loop1318 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_6414(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6414,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6421,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6457,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
C_trace("optimizer.scm: 732  append-map");
((C_proc4)C_retrieve_symbol_proc(lf[132]))(4,*((C_word*)lf[132]+1),t4,t5,t6);}

/* a6456 in g1325 in loop1318 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6457(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6457,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6463,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 733  filter");
((C_proc4)C_retrieve_symbol_proc(lf[131]))(4,*((C_word*)lf[131]+1),t1,t3,((C_word*)t0)[2]);}

/* a6462 in a6456 in g1325 in loop1318 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6463(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6463,3,t0,t1,t2);}
C_trace("optimizer.scm: 733  find-path");
t3=((C_word*)t0)[3];
f_6184(t3,t1,((C_word*)t0)[2],t2);}

/* k6419 in g1325 in loop1318 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6421,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6425,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6429,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6431,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 738  filter-map");
((C_proc4)C_retrieve_symbol_proc(lf[130]))(4,*((C_word*)lf[130]+1),t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* a6430 in k6419 in g1325 in loop1318 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6431(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6431,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6444,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_cdr(t2);
C_trace("optimizer.scm: 739  lset<=");
((C_proc5)C_retrieve_symbol_proc(lf[129]))(5,*((C_word*)lf[129]+1),t4,*((C_word*)lf[34]+1),t5,((C_word*)t0)[2]);}}

/* k6442 in a6430 in k6419 in g1325 in loop1318 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?(C_word)C_i_car(((C_word*)t0)[2]):C_SCHEME_FALSE));}

/* k6427 in k6419 in g1325 in loop1318 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 736  alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[27]))(5,*((C_word*)lf[27]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k6423 in k6419 in g1325 in loop1318 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6233 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6235,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6238,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 745  topological-sort");
((C_proc4)C_retrieve_symbol_proc(lf[128]))(4,*((C_word*)lf[128]+1),t2,((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[34]+1));}

/* k6236 in k6233 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6238,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6241,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6258,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 750  fold");
((C_proc5)C_retrieve_symbol_proc(lf[127]))(5,*((C_word*)lf[127]+1),t4,t5,((C_word*)t0)[2],t1);}

/* a6257 in k6236 in k6233 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6258(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6258,4,t0,t1,t2,t3);}
t4=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[5])[1]);
t5=(C_word)C_i_cdr(t4);
t6=(C_word)C_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6271,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t8))){
t9=(C_word)C_i_assq(t6,((C_word*)((C_word*)t0)[2])[1]);
t10=(C_word)C_i_cdr(t9);
t11=(C_word)C_i_memq(t6,t10);
t12=t7;
f_6271(t12,(C_word)C_i_not(t11));}
else{
t9=t7;
f_6271(t9,C_SCHEME_FALSE);}}

/* k6269 in a6257 in k6236 in k6233 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_6271(C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6271,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=(C_word)C_i_assq(((C_word*)t0)[7],((C_word*)t0)[5]);
t5=(C_word)C_i_cdr(t4);
t6=(C_word)C_a_i_list(&a,2,t5,((C_word*)t0)[4]);
t7=((C_word*)t0)[3];
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_record(&a,4,lf[35],lf[11],((C_word*)t0)[2],t6));}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6300,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6330,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6332,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("optimizer.scm: 764  fold-right");
((C_proc5)C_retrieve_symbol_proc(lf[126]))(5,*((C_word*)lf[126]+1),t3,t4,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* a6331 in k6269 in a6257 in k6236 in k6233 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6332(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6332,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6378,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 767  gensym");
((C_proc2)C_retrieve_symbol_proc(lf[84]))(2,*((C_word*)lf[84]+1),t4);}

/* k6376 in a6331 in k6269 in a6257 in k6236 in k6233 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6378(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6378,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
t4=(C_word)C_i_assq(((C_word*)t0)[5],((C_word*)t0)[4]);
t5=(C_word)C_i_cdr(t4);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_a_i_record(&a,4,lf[35],lf[16],t3,t6);
t8=(C_word)C_a_i_list(&a,2,t7,((C_word*)t0)[3]);
t9=((C_word*)t0)[2];
t10=t9;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_record(&a,4,lf[35],lf[11],t2,t8));}

/* k6328 in k6269 in a6257 in k6236 in k6233 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 759  fold-right");
((C_proc5)C_retrieve_symbol_proc(lf[126]))(5,*((C_word*)lf[126]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a6299 in k6269 in a6257 in k6236 in k6233 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6300(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6300,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_list(&a,1,t2);
t5=(C_word)C_a_i_record(&a,4,lf[35],lf[70],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_list(&a,2,t5,t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[35],lf[11],t4,t6));}

/* k6239 in k6236 in k6233 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6241,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6250,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 776  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t2,lf[7],lf[125],((C_word*)((C_word*)t0)[3])[1]);}
else{
C_trace("optimizer.scm: 778  values");
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}}

/* k6248 in k6239 in k6236 in k6233 in k6230 in k6227 in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 777  values");
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE);}

/* find-path in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_6184(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6184,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6190,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6190(t7,t1,t2,C_SCHEME_END_OF_LIST);}

/* find in find-path in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_fcall f_6190(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6190,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_memq(t2,t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[4])[1]);
t5=(C_word)C_i_cdr(t4);
t6=(C_word)C_i_memq(((C_word*)t0)[3],t5);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=(C_word)C_a_i_cons(&a,2,t2,t3);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6214,a[2]=t7,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 706  any");
((C_proc4)C_retrieve_symbol_proc(lf[30]))(4,*((C_word*)lf[30]+1),t1,t8,t5);}}}

/* a6213 in find in find-path in k6180 in ##compiler#reorganize-recursive-bindings in k6174 in k6171 in k6168 in k3978 in k3704 in k3701 */
static void C_ccall f_6214(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6214,3,t0,t1,t2);}
C_trace("optimizer.scm: 706  find");
t3=((C_word*)((C_word*)t0)[3])[1];
f_6190(t3,t1,t2,((C_word*)t0)[2]);}

/* register-simplifications in k3978 in k3704 in k3701 */
static void C_ccall f_6163(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_6163r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6163r(t0,t1,t2,t3);}}

static void C_ccall f_6163r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_trace("optimizer.scm: 474  ##sys#hash-table-set!");
((C_proc5)C_retrieve_symbol_proc(lf[123]))(5,*((C_word*)lf[123]+1),t1,*((C_word*)lf[22]+1),t2,t3);}

/* ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_ccall f_5844(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[22],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5844,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5847,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5851,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5858,a[2]=t11,a[3]=t3,a[4]=t9,a[5]=t7,a[6]=t5,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace("optimizer.scm: 426  debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t14,lf[20],lf[121]);}

/* k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_ccall f_5858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5858,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5861,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5878,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t3,lf[119],lf[44]);}

/* k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_ccall f_5878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5878,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5885,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 465  test");
t3=((C_word*)((C_word*)t0)[3])[1];
f_5851(t3,t2,lf[119],lf[120]);}
else{
t2=((C_word*)t0)[2];
f_5861(2,t2,C_SCHEME_UNDEFINED);}}

/* k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_ccall f_5885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5885,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5890,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_5890(t6,((C_word*)t0)[2],t2);}

/* loop849 in k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_fcall f_5890(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5890,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5898,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6150,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g856857");
t6=t3;
f_5898(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6148 in loop849 in k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_ccall f_6150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5890(t3,((C_word*)t0)[2],t2);}

/* g856 in loop849 in k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_fcall f_5898(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_5898,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_cadr(t4);
t6=(C_word)C_slot(t5,C_fix(2));
t7=(C_word)C_i_car(t6);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5916,a[2]=t7,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=t1,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6134,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 435  test");
t10=((C_word*)((C_word*)t0)[2])[1];
f_5851(t10,t9,t7,lf[77]);}

/* k6132 in g856 in loop849 in k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_ccall f_6134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_5916(2,t2,C_SCHEME_FALSE);}
else{
C_trace("optimizer.scm: 435  test");
t2=((C_word*)((C_word*)t0)[3])[1];
f_5851(t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[45]);}}

/* k5914 in g856 in loop849 in k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_ccall f_5916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5919,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
C_trace("optimizer.scm: 436  get-list");
((C_proc5)C_retrieve_symbol_proc(lf[118]))(5,*((C_word*)lf[118]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[76]);}

/* k5917 in k5914 in g856 in loop849 in k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_ccall f_5919(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5925,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
if(C_truep(t1)){
t3=(C_word)C_i_length(t1);
t4=(C_word)C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=(C_word)C_i_length(((C_word*)t0)[4]);
t6=(C_word)C_eqp(C_fix(3),t5);
if(C_truep(t6)){
t7=((C_word*)t0)[8];
t8=(C_word)C_slot(t7,C_fix(1));
t9=t2;
f_5925(t9,(C_word)C_eqp(lf[54],t8));}
else{
t7=t2;
f_5925(t7,C_SCHEME_FALSE);}}
else{
t5=t2;
f_5925(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_5925(t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_5925(t3,C_SCHEME_FALSE);}}

/* k5923 in k5917 in k5914 in g856 in loop849 in k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_fcall f_5925(C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5925,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=(C_word)C_slot(t2,C_fix(2));
t4=(C_word)C_i_caddr(t3);
t5=((C_word*)t0)[8];
t6=(C_word)C_slot(t5,C_fix(3));
t7=(C_word)C_i_car(t6);
t8=(C_word)C_slot(t7,C_fix(3));
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5945,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t8,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t7,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
if(C_truep((C_word)C_i_listp(t4))){
t10=(C_word)C_i_cdr(t4);
t11=t9;
f_5945(t11,(C_word)C_i_nullp(t10));}
else{
t10=t9;
f_5945(t10,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5943 in k5923 in k5917 in k5914 in g856 in loop849 in k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_fcall f_5945(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5945,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[10]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5951,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
C_trace("optimizer.scm: 447  get-list");
((C_proc5)C_retrieve_symbol_proc(lf[118]))(5,*((C_word*)lf[118]+1),t3,((C_word*)t0)[2],t2,lf[76]);}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k5949 in k5943 in k5923 in k5917 in k5914 in g856 in loop849 in k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_ccall f_5951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t1)){
t3=(C_word)C_i_length(t1);
t4=(C_word)C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=(C_word)C_slot(((C_word*)t0)[9],C_fix(1));
t6=t2;
f_5957(t6,(C_word)C_eqp(lf[10],t5));}
else{
t5=t2;
f_5957(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_5957(t3,C_SCHEME_FALSE);}}

/* k5955 in k5949 in k5943 in k5923 in k5917 in k5914 in g856 in loop849 in k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_fcall f_5957(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5957,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[9],C_fix(3));
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5966,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_slot(t3,C_fix(1));
t6=(C_word)C_eqp(lf[9],t5);
if(C_truep(t6)){
t7=(C_word)C_slot(t3,C_fix(2));
t8=(C_word)C_i_car(t7);
t9=t4;
f_5966(t9,(C_word)C_eqp(((C_word*)t0)[2],t8));}
else{
t7=t4;
f_5966(t7,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5964 in k5955 in k5949 in k5943 in k5923 in k5917 in k5914 in g856 in loop849 in k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_fcall f_5966(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5966,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[8])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[8])+1,t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("optimizer.scm: 459  node-parameters-set!");
((C_proc4)C_retrieve_symbol_proc(lf[116]))(4,*((C_word*)lf[116]+1),t4,((C_word*)t0)[2],lf[117]);}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k5971 in k5964 in k5955 in k5949 in k5943 in k5923 in k5917 in k5914 in g856 in loop849 in k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_ccall f_5973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5973,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5976,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("optimizer.scm: 460  node-subexpressions-set!");
((C_proc4)C_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),t2,((C_word*)t0)[2],t3);}

/* k5974 in k5971 in k5964 in k5955 in k5949 in k5943 in k5923 in k5917 in k5914 in g856 in loop849 in k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_ccall f_5976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5979,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5994,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("optimizer.scm: 463  reverse");
((C_proc3)C_retrieve_proc(*((C_word*)lf[115]+1)))(3,*((C_word*)lf[115]+1),t4,t5);}

/* k5992 in k5974 in k5971 in k5964 in k5955 in k5949 in k5943 in k5923 in k5917 in k5914 in g856 in loop849 in k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_ccall f_5994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5994,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
C_trace("optimizer.scm: 461  node-subexpressions-set!");
((C_proc4)C_retrieve_symbol_proc(lf[114]))(4,*((C_word*)lf[114]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k5977 in k5974 in k5971 in k5964 in k5955 in k5949 in k5943 in k5923 in k5917 in k5914 in g856 in loop849 in k5883 in k5876 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_ccall f_5979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 464  touch");
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,f_5847(((C_word*)((C_word*)t0)[2])[1]));}

/* k5859 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_ccall f_5861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5861,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5864,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
C_trace("optimizer.scm: 467  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t2,lf[7],lf[113],((C_word*)((C_word*)t0)[2])[1]);}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)((C_word*)t0)[3])[1]);}}

/* k5862 in k5859 in k5856 in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_ccall f_5864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* test in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static void C_fcall f_5851(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5851,NULL,4,t0,t1,t2,t3);}
C_trace("optimizer.scm: 424  get");
((C_proc5)C_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),t1,((C_word*)t0)[2],t2,t3);}

/* touch in ##compiler#perform-pre-optimization! in k3978 in k3704 in k3701 */
static C_word C_fcall f_5847(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_check;
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(C_SCHEME_TRUE);}

/* ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_3983(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[72],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3983,4,t0,t1,t2,t3);}
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fix(0);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_FALSE;
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
t30=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3986,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t31=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3992,tmp=(C_word)a,a+=2,tmp));
t32=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4022,a[2]=t15,tmp=(C_word)a,a+=3,tmp));
t33=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4026,a[2]=t3,a[3]=t23,a[4]=t21,a[5]=t13,tmp=(C_word)a,a+=6,tmp));
t34=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4157,a[2]=t27,a[3]=t19,a[4]=t25,a[5]=t21,a[6]=t7,a[7]=t23,a[8]=t15,tmp=(C_word)a,a+=9,tmp));
t35=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4438,a[2]=t11,a[3]=t3,a[4]=t29,a[5]=t25,a[6]=t5,a[7]=t9,a[8]=t17,a[9]=t21,tmp=(C_word)a,a+=10,tmp));
t36=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5696,a[2]=t25,tmp=(C_word)a,a+=3,tmp));
t37=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5726,a[2]=t25,a[3]=t13,a[4]=t9,a[5]=t5,a[6]=t7,a[7]=t15,a[8]=t2,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
C_trace("optimizer.scm: 392  perform-pre-optimization!");
((C_proc4)C_retrieve_symbol_proc(lf[112]))(4,*((C_word*)lf[112]+1),t37,t2,t3);}

/* k5724 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5726,2,t0,t1);}
if(C_truep(t1)){
C_trace("optimizer.scm: 393  values");
C_values(4,0,((C_word*)t0)[9],((C_word*)t0)[8],C_SCHEME_TRUE);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5732,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
C_trace("optimizer.scm: 395  debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t2,lf[20],lf[111]);}}

/* k5730 in k5724 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5732,2,t0,t1);}
t2=C_set_block_item(lf[23] /* simplified-ops */,0,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5736,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
C_trace("optimizer.scm: 397  walk");
t4=((C_word*)((C_word*)t0)[3])[1];
f_4157(t4,t3,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k5734 in k5730 in k5724 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5736,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5739,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
C_trace("optimizer.scm: 398  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t2,lf[7],lf[110],((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=t2;
f_5739(2,t3,C_SCHEME_UNDEFINED);}}

/* k5737 in k5734 in k5730 in k5724 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5739,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5742,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5775,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(C_retrieve(lf[23])))){
C_trace("optimizer.scm: 399  debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t3,lf[7],lf[109]);}
else{
t4=t3;
f_5775(2,t4,C_SCHEME_FALSE);}}

/* k5773 in k5737 in k5734 in k5730 in k5724 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5775,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5780,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_5780(t5,((C_word*)t0)[2],C_retrieve(lf[23]));}
else{
t2=((C_word*)t0)[2];
f_5742(2,t2,C_SCHEME_UNDEFINED);}}

/* loop800 in k5773 in k5737 in k5734 in k5730 in k5724 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_5780(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5780,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5819,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5792,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_car(t4);
C_trace("optimizer.scm: 402  print*");
((C_proc4)C_retrieve_proc(*((C_word*)lf[108]+1)))(4,*((C_word*)lf[108]+1),t5,C_make_character(9),t6);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5790 in loop800 in k5773 in k5737 in k5734 in k5730 in k5724 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(1)))){
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("optimizer.scm: 404  print");
((C_proc4)C_retrieve_proc(*((C_word*)lf[106]+1)))(4,*((C_word*)lf[106]+1),((C_word*)t0)[2],C_make_character(9),t3);}
else{
C_trace("optimizer.scm: 405  newline");
((C_proc2)C_retrieve_proc(*((C_word*)lf[107]+1)))(2,*((C_word*)lf[107]+1),((C_word*)t0)[2]);}}

/* k5817 in loop800 in k5773 in k5737 in k5734 in k5730 in k5724 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5780(t3,((C_word*)t0)[2],t2);}

/* k5740 in k5737 in k5734 in k5730 in k5724 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5742,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5745,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
C_trace("optimizer.scm: 407  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t2,lf[7],lf[105],((C_word*)((C_word*)t0)[2])[1]);}
else{
t4=t2;
f_5745(2,t4,C_SCHEME_UNDEFINED);}}

/* k5743 in k5740 in k5737 in k5734 in k5730 in k5724 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5745,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5748,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
C_trace("optimizer.scm: 408  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t2,lf[7],lf[104],((C_word*)((C_word*)t0)[2])[1]);}
else{
t4=t2;
f_5748(2,t4,C_SCHEME_UNDEFINED);}}

/* k5746 in k5743 in k5740 in k5737 in k5734 in k5730 in k5724 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5748,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5751,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
C_trace("optimizer.scm: 409  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t2,lf[7],lf[103],((C_word*)((C_word*)t0)[2])[1]);}
else{
C_trace("optimizer.scm: 410  values");
C_values(4,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);}}

/* k5749 in k5746 in k5743 in k5740 in k5737 in k5734 in k5730 in k5724 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 410  values");
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* walk-generic in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_5696(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5696,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5700,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5716,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("map");
t9=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,t5);}

/* a5715 in walk-generic in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5716(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5716,3,t0,t1,t2);}
C_trace("g784785");
t3=((C_word*)((C_word*)t0)[3])[1];
f_4157(t3,t1,t2,((C_word*)t0)[2]);}

/* k5698 in walk-generic in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5700,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5706,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 388  every");
((C_proc5)C_retrieve_symbol_proc(lf[41]))(5,*((C_word*)lf[41]+1),t2,*((C_word*)lf[34]+1),((C_word*)t0)[2],t1);}

/* k5704 in k5698 in walk-generic in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5706,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[2];
t6=t2;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[35],t3,t4,t5));}}

/* walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_4438(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4438,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(3));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(t9,lf[9]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t7);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4478,a[2]=((C_word*)t0)[7],a[3]=t7,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t13,tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_4478(t15,t1,t11);}
else{
t11=(C_word)C_eqp(t9,lf[11]);
if(C_truep(t11)){
t12=(C_word)C_i_car(t7);
t13=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4559,a[2]=t12,a[3]=((C_word*)t0)[8],a[4]=t7,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("optimizer.scm: 204  test");
t14=((C_word*)((C_word*)t0)[8])[1];
f_3986(t14,t13,t12,lf[53]);}
else{
t12=(C_word)C_eqp(t9,lf[54]);
if(C_truep(t12)){
t13=(C_word)C_i_caddr(t7);
t14=(C_word)C_i_car(t7);
t15=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4625,a[2]=t9,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t13,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t3,a[9]=t14,a[10]=t5,a[11]=t7,a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
C_trace("optimizer.scm: 214  test");
t16=((C_word*)((C_word*)t0)[8])[1];
f_3986(t16,t15,t14,lf[63]);}
else{
t13=(C_word)C_eqp(t9,lf[15]);
if(C_truep(t13)){
t14=(C_word)C_i_car(t5);
t15=(C_word)C_slot(t14,C_fix(1));
t16=(C_word)C_eqp(t15,lf[9]);
if(C_truep(t16)){
t17=(C_word)C_slot(t14,C_fix(2));
t18=(C_word)C_i_car(t17);
t19=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_4820,a[2]=((C_word*)t0)[2],a[3]=t14,a[4]=((C_word*)t0)[8],a[5]=t7,a[6]=t9,a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=t18,a[10]=((C_word*)t0)[3],a[11]=t3,a[12]=t1,a[13]=((C_word*)t0)[5],a[14]=((C_word*)t0)[9],a[15]=t5,tmp=(C_word)a,a+=16,tmp);
t20=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5518,a[2]=t18,a[3]=((C_word*)t0)[8],a[4]=t19,tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 252  test");
t21=((C_word*)((C_word*)t0)[8])[1];
f_3986(t21,t20,t18,lf[77]);}
else{
t17=(C_word)C_eqp(t15,lf[54]);
if(C_truep(t17)){
if(C_truep((C_word)C_i_car(t7))){
C_trace("optimizer.scm: 365  walk-generic");
t18=((C_word*)((C_word*)t0)[4])[1];
f_5696(t18,t1,t2,t9,t7,t5,t3);}
else{
t18=(C_word)C_i_cdr(t7);
t19=(C_word)C_a_i_cons(&a,2,C_SCHEME_TRUE,t18);
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5558,a[2]=t19,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5560,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("map");
t22=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t22+1)))(4,t22,t20,t21,t5);}}
else{
C_trace("optimizer.scm: 367  walk-generic");
t18=((C_word*)((C_word*)t0)[4])[1];
f_5696(t18,t1,t2,t9,t7,t5,t3);}}}
else{
t14=(C_word)C_eqp(t9,lf[16]);
if(C_truep(t14)){
t15=(C_word)C_i_car(t7);
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5586,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t5,a[7]=t7,a[8]=t15,a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("optimizer.scm: 371  test");
t17=((C_word*)((C_word*)t0)[8])[1];
f_3986(t17,t16,t15,lf[52]);}
else{
C_trace("optimizer.scm: 384  walk-generic");
t15=((C_word*)((C_word*)t0)[4])[1];
f_5696(t15,t1,t2,t9,t7,t5,t3);}}}}}}

/* k5584 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5586,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5589,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t1)){
t3=t2;
f_5589(2,t3,t1);}
else{
C_trace("optimizer.scm: 371  test");
t3=((C_word*)((C_word*)t0)[2])[1];
f_3986(t3,t2,((C_word*)t0)[8],lf[49]);}}

/* k5587 in k5584 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5589,2,t0,t1);}
if(C_truep(t1)){
t2=f_4022(((C_word*)((C_word*)t0)[10])[1]);
t3=((C_word*)t0)[9];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[70],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5606,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5688,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 374  test");
t4=((C_word*)((C_word*)t0)[2])[1];
f_3986(t4,t3,((C_word*)t0)[8],lf[102]);}}

/* k5686 in k5587 in k5584 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5688,2,t0,t1);}
t2=(C_word)C_i_not(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5646,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_5646(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5684,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("optimizer.scm: 375  variable-visible?");
((C_proc3)C_retrieve_symbol_proc(lf[101]))(3,*((C_word*)lf[101]+1),t4,((C_word*)t0)[2]);}}

/* k5682 in k5686 in k5587 in k5584 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5646(t2,(C_word)C_i_not(t1));}

/* k5644 in k5686 in k5587 in k5584 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_5646(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5646,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5677,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 376  test");
t3=((C_word*)((C_word*)t0)[3])[1];
f_3986(t3,t2,((C_word*)t0)[2],lf[100]);}
else{
t2=((C_word*)t0)[6];
f_5606(t2,C_SCHEME_FALSE);}}

/* k5675 in k5644 in k5686 in k5587 in k5584 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5677,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
f_5606(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5673,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 377  test");
t3=((C_word*)((C_word*)t0)[3])[1];
f_3986(t3,t2,((C_word*)t0)[2],lf[76]);}}

/* k5671 in k5675 in k5644 in k5686 in k5587 in k5584 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5673,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_5606(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5665,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
C_trace("optimizer.scm: 378  expression-has-side-effects?");
((C_proc4)C_retrieve_symbol_proc(lf[74]))(4,*((C_word*)lf[74]+1),t2,t3,((C_word*)t0)[2]);}}

/* k5663 in k5671 in k5675 in k5644 in k5686 in k5587 in k5584 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5606(t2,(C_word)C_i_not(t1));}

/* k5604 in k5587 in k5584 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_5606(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5606,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=f_4022(((C_word*)((C_word*)t0)[8])[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5612,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
C_trace("optimizer.scm: 380  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t3,lf[7],lf[99],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5636,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("optimizer.scm: 382  walk");
t4=((C_word*)((C_word*)t0)[3])[1];
f_4157(t4,t2,t3,((C_word*)t0)[2]);}}

/* k5634 in k5604 in k5587 in k5584 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5636,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[16],((C_word*)t0)[2],t2));}

/* k5610 in k5604 in k5587 in k5584 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5612,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[35],lf[70],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}

/* a5559 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5560(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5560,3,t0,t1,t2);}
C_trace("g716717");
t3=((C_word*)((C_word*)t0)[3])[1];
f_4157(t3,t1,t2,((C_word*)t0)[2]);}

/* k5556 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5558,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[35],lf[15],((C_word*)t0)[2],t1));}

/* k5516 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5518,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_4820(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 253  test");
t3=((C_word*)((C_word*)t0)[3])[1];
f_3986(t3,t2,((C_word*)t0)[2],lf[45]);}}

/* k5506 in k5516 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[4];
f_4820(2,t3,t2);}
else{
C_trace("optimizer.scm: 254  test");
t2=((C_word*)((C_word*)t0)[3])[1];
f_3986(t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[98]);}}

/* k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4820,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[15]);
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_4829,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=t2,a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],a[17]=t1,tmp=(C_word)a,a+=18,tmp);
C_trace("optimizer.scm: 256  test");
t4=((C_word*)((C_word*)t0)[4])[1];
f_3986(t4,t3,((C_word*)t0)[9],lf[52]);}

/* k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4829(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4829,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[17];
t3=(C_word)C_slot(t2,C_fix(2));
t4=(C_word)C_i_caddr(t3);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4843,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t4,a[6]=((C_word*)t0)[17],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],a[9]=((C_word*)t0)[15],a[10]=((C_word*)t0)[16],tmp=(C_word)a,a+=11,tmp);
C_trace("optimizer.scm: 259  check-signature");
((C_proc5)C_retrieve_symbol_proc(lf[68]))(5,*((C_word*)lf[68]+1),t5,((C_word*)t0)[10],((C_word*)t0)[12],t4);}
else{
if(C_truep((C_word)C_i_memq(((C_word*)t0)[10],C_retrieve(lf[69])))){
t2=(C_word)C_i_car(((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4890,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[14],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t2)){
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_eqp(lf[9],t4);
if(C_truep(t5)){
t6=(C_word)C_slot(t2,C_fix(2));
t7=(C_word)C_i_car(t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4911,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[10],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5036,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 270  test");
t10=((C_word*)((C_word*)t0)[4])[1];
f_3986(t10,t9,t7,lf[77]);}
else{
t8=t3;
f_4890(t8,C_SCHEME_FALSE);}}
else{
t6=t3;
f_4890(t6,C_SCHEME_FALSE);}}
else{
t4=t3;
f_4890(t4,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5060,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
if(C_truep(((C_word*)t0)[17])){
t3=((C_word*)t0)[17];
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
f_5060(t5,(C_word)C_eqp(lf[54],t4));}
else{
t3=t2;
f_5060(t3,C_SCHEME_FALSE);}}}}

/* k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_5060(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5060,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[17];
t3=(C_word)C_slot(t2,C_fix(2));
t4=(C_word)C_i_caddr(t3);
t5=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_5076,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t4,a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=t3,tmp=(C_word)a,a+=19,tmp);
C_trace("optimizer.scm: 286  decompose-lambda-list");
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),((C_word*)t0)[2],t4,t5);}
else{
C_trace("optimizer.scm: 362  walk-generic");
t2=((C_word*)((C_word*)t0)[10])[1];
f_5696(t2,((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[14]);}}

/* a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5076(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[30],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5076,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[18]);
t6=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5086,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t3,a[12]=t5,a[13]=((C_word*)t0)[18],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],a[17]=((C_word*)t0)[13],a[18]=((C_word*)t0)[14],a[19]=((C_word*)t0)[15],a[20]=t1,a[21]=((C_word*)t0)[16],a[22]=((C_word*)t0)[17],tmp=(C_word)a,a+=23,tmp);
if(C_truep(C_retrieve(lf[92]))){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5450,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[18],a[6]=t6,tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 291  test");
t8=((C_word*)((C_word*)t0)[3])[1];
f_3986(t8,t7,((C_word*)t0)[10],lf[97]);}
else{
t7=t6;
f_5086(t7,C_SCHEME_FALSE);}}

/* k5448 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5450,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5487,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 292  test");
t3=((C_word*)((C_word*)t0)[3])[1];
f_3986(t3,t2,((C_word*)t0)[2],lf[66]);}
else{
t2=((C_word*)t0)[6];
f_5086(t2,C_SCHEME_FALSE);}}

/* k5485 in k5448 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5487,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_5086(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5464,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t2,((C_word*)t0)[2],lf[96]);}}

/* k5462 in k5485 in k5448 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_eqp(t1,lf[93]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
f_5086(t3,C_SCHEME_TRUE);}
else{
t3=(C_word)C_eqp(t1,lf[94]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
f_5086(t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_cadddr(((C_word*)t0)[2]);
t5=C_retrieve(lf[95]);
t6=((C_word*)t0)[3];
f_5086(t6,(C_word)C_fixnum_lessp(t4,t5));}}}

/* k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_5086(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5086,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5089,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[16],a[5]=((C_word*)t0)[17],a[6]=((C_word*)t0)[18],a[7]=((C_word*)t0)[19],a[8]=((C_word*)t0)[20],a[9]=((C_word*)t0)[21],a[10]=((C_word*)t0)[22],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5152,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[14],a[4]=t2,a[5]=((C_word*)t0)[13],tmp=(C_word)a,a+=6,tmp);
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t3,((C_word*)t0)[14],lf[82]);}
else{
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5158,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[17],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[14],a[8]=((C_word*)t0)[15],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[21],a[11]=((C_word*)t0)[22],a[12]=((C_word*)t0)[19],a[13]=((C_word*)t0)[6],a[14]=((C_word*)t0)[7],a[15]=((C_word*)t0)[8],a[16]=((C_word*)t0)[9],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[10],a[19]=((C_word*)t0)[11],a[20]=((C_word*)t0)[16],tmp=(C_word)a,a+=21,tmp);
C_trace("optimizer.scm: 311  test");
t3=((C_word*)((C_word*)t0)[4])[1];
f_3986(t3,t2,((C_word*)t0)[12],lf[63]);}}

/* k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5158(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5158,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_length(((C_word*)t0)[20]);
t3=((C_word*)t0)[19];
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
C_trace("optimizer.scm: 313  walk-generic");
t4=((C_word*)((C_word*)t0)[18])[1];
f_5696(t4,((C_word*)t0)[17],((C_word*)t0)[16],((C_word*)t0)[15],((C_word*)t0)[14],((C_word*)t0)[13],((C_word*)t0)[12]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5172,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t5,a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp));
t7=((C_word*)t5)[1];
f_5172(t7,((C_word*)t0)[17],((C_word*)t0)[5],((C_word*)t0)[19],((C_word*)t0)[20],C_SCHEME_END_OF_LIST);}}
else{
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5336,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[17],a[13]=((C_word*)t0)[18],a[14]=((C_word*)t0)[20],tmp=(C_word)a,a+=15,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5437,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[16],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 337  test");
t4=((C_word*)((C_word*)t0)[6])[1];
f_3986(t4,t3,((C_word*)t0)[2],lf[59]);}}

/* k5435 in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_memq(((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[2];
f_5336(t3,(C_word)C_i_not(t2));}
else{
t2=((C_word*)t0)[2];
f_5336(t2,C_SCHEME_FALSE);}}

/* k5334 in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_5336(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5336,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5339,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],tmp=(C_word)a,a+=13,tmp);
C_trace("optimizer.scm: 339  llist-length");
((C_proc3)C_retrieve_symbol_proc(lf[91]))(3,*((C_word*)lf[91]+1),t2,((C_word*)t0)[3]);}
else{
C_trace("optimizer.scm: 361  walk-generic");
t2=((C_word*)((C_word*)t0)[13])[1];
f_5696(t2,((C_word*)t0)[12],((C_word*)t0)[2],((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);}}

/* k5337 in k5334 in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5339,2,t0,t1);}
t2=(C_word)C_i_length(((C_word*)t0)[12]);
t3=t1;
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
C_trace("optimizer.scm: 341  walk-generic");
t4=((C_word*)((C_word*)t0)[11])[1];
f_5696(t4,((C_word*)t0)[10],t1,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5351,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
C_trace("optimizer.scm: 343  debugging");
((C_proc6)C_retrieve_symbol_proc(lf[6]))(6,*((C_word*)lf[6]+1),t4,lf[7],lf[90],((C_word*)t0)[2],t1);}}

/* k5349 in k5337 in k5334 in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5356,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5362,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a5361 in k5349 in k5337 in k5334 in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5362(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[32],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5362,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5379,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5381,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5393,a[2]=t5,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5401,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
C_trace("optimizer.scm: 354  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t7,C_SCHEME_END_OF_LIST);}
else{
t8=(C_word)C_i_length(t3);
t9=(C_word)C_fixnum_times(C_fix(3),t8);
t10=(C_word)C_a_i_list(&a,2,lf[88],t9);
t11=t3;
t12=(C_word)C_a_i_record(&a,4,lf[35],lf[89],t10,t11);
t13=(C_word)C_a_i_list(&a,1,t12);
C_trace("optimizer.scm: 350  append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t6,t2,t13);}}

/* k5399 in a5361 in k5349 in k5337 in k5334 in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5401,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
C_trace("optimizer.scm: 350  append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k5391 in a5361 in k5349 in k5337 in k5334 in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5393,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
C_trace("map");
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a5380 in a5361 in k5349 in k5337 in k5334 in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5381(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5381,3,t0,t1,t2);}
C_trace("g683684");
t3=((C_word*)((C_word*)t0)[3])[1];
f_4157(t3,t1,t2,((C_word*)t0)[2]);}

/* k5377 in a5361 in k5349 in k5337 in k5334 in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5379,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,4,lf[35],lf[15],((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* a5355 in k5349 in k5337 in k5334 in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5356,2,t0,t1);}
C_trace("optimizer.scm: 344  split-at");
((C_proc4)C_retrieve_symbol_proc(lf[87]))(4,*((C_word*)lf[87]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_5172(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5172,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_nullp(t2);
t7=(C_truep(t6)?t6:(C_word)C_eqp(t3,C_fix(0)));
if(C_truep(t7)){
t8=f_4022(((C_word*)((C_word*)t0)[10])[1]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5197,a[2]=((C_word*)t0)[9],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5199,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5211,a[2]=t10,a[3]=t9,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 320  append-reverse");
((C_proc4)C_retrieve_symbol_proc(lf[83]))(4,*((C_word*)lf[83]+1),t11,t5,t4);}
else{
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5217,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t5,a[7]=((C_word*)t0)[5],a[8]=t4,a[9]=t3,a[10]=t2,a[11]=t1,a[12]=((C_word*)t0)[10],tmp=(C_word)a,a+=13,tmp);
t9=(C_word)C_i_car(t2);
C_trace("optimizer.scm: 321  test");
t10=((C_word*)((C_word*)t0)[2])[1];
f_3986(t10,t8,t9,lf[55]);}}

/* k5215 in loop in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5217(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5217,2,t0,t1);}
if(C_truep(t1)){
t2=f_4022(((C_word*)((C_word*)t0)[12])[1]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5223,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[10]);
C_trace("optimizer.scm: 323  debugging");
((C_proc6)C_retrieve_symbol_proc(lf[6]))(6,*((C_word*)lf[6]+1),t3,lf[7],lf[86],t4,((C_word*)t0)[2]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[10]);
t3=(C_word)C_fixnum_decrease(((C_word*)t0)[9]);
t4=(C_word)C_i_cdr(((C_word*)t0)[8]);
t5=(C_word)C_i_car(((C_word*)t0)[8]);
t6=(C_word)C_a_i_cons(&a,2,t5,((C_word*)t0)[6]);
C_trace("optimizer.scm: 333  loop");
t7=((C_word*)((C_word*)t0)[7])[1];
f_5172(t7,((C_word*)t0)[11],t2,t3,t4,t6);}}

/* k5221 in k5215 in loop in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5223,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5229,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[7]);
C_trace("optimizer.scm: 326  expression-has-side-effects?");
((C_proc4)C_retrieve_symbol_proc(lf[74]))(4,*((C_word*)lf[74]+1),t2,t3,((C_word*)t0)[2]);}

/* k5227 in k5221 in k5215 in loop in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5229,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
C_trace("optimizer.scm: 329  gensym");
((C_proc3)C_retrieve_symbol_proc(lf[84]))(3,*((C_word*)lf[84]+1),t2,lf[85]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[8]);
t3=(C_word)C_fixnum_decrease(((C_word*)t0)[7]);
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
C_trace("optimizer.scm: 332  loop");
t5=((C_word*)((C_word*)t0)[5])[1];
f_5172(t5,((C_word*)t0)[9],t2,t3,t4,((C_word*)t0)[4]);}}

/* k5271 in k5227 in k5221 in k5215 in loop in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5273,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5249,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t2,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[6]);
C_trace("optimizer.scm: 330  walk");
t5=((C_word*)((C_word*)t0)[3])[1];
f_4157(t5,t3,t4,((C_word*)t0)[2]);}

/* k5247 in k5271 in k5227 in k5221 in k5215 in loop in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5249,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5253,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
t4=(C_word)C_fixnum_decrease(((C_word*)t0)[5]);
t5=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("optimizer.scm: 331  loop");
t6=((C_word*)((C_word*)t0)[3])[1];
f_5172(t6,t2,t3,t4,t5,((C_word*)t0)[2]);}

/* k5251 in k5247 in k5271 in k5227 in k5221 in k5215 in loop in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5253,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[11],((C_word*)t0)[2],t2));}

/* k5209 in loop in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5211,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
C_trace("map");
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a5198 in loop in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5199(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5199,3,t0,t1,t2);}
C_trace("g634635");
t3=((C_word*)((C_word*)t0)[3])[1];
f_4157(t3,t1,t2,((C_word*)t0)[2]);}

/* k5195 in loop in k5156 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5197,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[35],lf[15],((C_word*)t0)[2],t1));}

/* k5150 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_i_structurep(t1,lf[35]);
t3=(C_truep(t2)?lf[79]:lf[80]);
t4=(C_word)C_i_cadddr(((C_word*)t0)[5]);
C_trace("optimizer.scm: 298  debugging");
((C_proc7)C_retrieve_symbol_proc(lf[6]))(7,*((C_word*)lf[6]+1),((C_word*)t0)[4],lf[81],t3,((C_word*)t0)[3],((C_word*)t0)[2],t4);}

/* k5087 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5089,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5092,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5123,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("for-each");
t4=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[7]);}

/* a5122 in k5087 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5123(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5123,3,t0,t1,t2);}
t3=C_retrieve(lf[65]);
C_trace("g584585");
t4=t3;
((C_proc6)C_retrieve_proc(t4))(6,t4,t1,((C_word*)t0)[2],t2,lf[66],C_SCHEME_TRUE);}

/* k5090 in k5087 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5092,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace("optimizer.scm: 305  check-signature");
((C_proc5)C_retrieve_symbol_proc(lf[68]))(5,*((C_word*)lf[68]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k5093 in k5090 in k5087 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5098,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
C_trace("optimizer.scm: 306  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t2,lf[7],lf[78],((C_word*)t0)[2]);}

/* k5096 in k5093 in k5090 in k5087 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5098,2,t0,t1);}
t2=f_4022(((C_word*)((C_word*)t0)[9])[1]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5108,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[5];
t5=(C_word)C_slot(t4,C_fix(3));
t6=(C_word)C_i_car(t5);
C_trace("optimizer.scm: 309  inline-lambda-bindings");
((C_proc7)C_retrieve_symbol_proc(lf[64]))(7,*((C_word*)lf[64]+1),t3,((C_word*)t0)[4],((C_word*)t0)[3],t6,C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* k5106 in k5096 in k5093 in k5090 in k5087 in k5084 in a5075 in k5058 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 308  walk");
t2=((C_word*)((C_word*)t0)[4])[1];
f_4157(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5034 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_4911(2,t2,C_SCHEME_FALSE);}
else{
C_trace("optimizer.scm: 270  test");
t2=((C_word*)((C_word*)t0)[3])[1];
f_3986(t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[45]);}}

/* k4909 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4911(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4911,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_eqp(lf[54],t3);
if(C_truep(t4)){
t5=t1;
t6=(C_word)C_slot(t5,C_fix(2));
t7=(C_word)C_i_caddr(t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4932,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t9=(C_word)C_i_car(t7);
C_trace("optimizer.scm: 273  test");
t10=((C_word*)((C_word*)t0)[2])[1];
f_3986(t10,t8,t9,lf[55]);}
else{
t8=((C_word*)t0)[7];
f_4890(t8,C_SCHEME_FALSE);}}
else{
t5=((C_word*)t0)[7];
f_4890(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[7];
f_4890(t2,C_SCHEME_FALSE);}}

/* k4930 in k4909 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4932,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4935,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_4935(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5000,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[3]);
C_trace("optimizer.scm: 274  test");
t5=((C_word*)((C_word*)t0)[2])[1];
f_3986(t5,t3,t4,lf[76]);}}

/* k4998 in k4930 in k4909 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_5000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5000,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_4935(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4992,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
C_trace("optimizer.scm: 275  test");
t4=((C_word*)((C_word*)t0)[2])[1];
f_3986(t4,t2,t3,lf[75]);}}

/* k4990 in k4998 in k4930 in k4909 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4935(t2,(C_word)C_i_not(t1));}

/* k4933 in k4930 in k4909 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_4935(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4935,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4969,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4971,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[2]);
C_trace("optimizer.scm: 276  any");
((C_proc4)C_retrieve_symbol_proc(lf[30]))(4,*((C_word*)lf[30]+1),t2,t3,t4);}
else{
t2=((C_word*)t0)[6];
f_4890(t2,C_SCHEME_FALSE);}}

/* a4970 in k4933 in k4930 in k4909 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4971(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4971,3,t0,t1,t2);}
t3=C_retrieve(lf[74]);
C_trace("g515516");
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,((C_word*)t0)[2]);}

/* k4967 in k4933 in k4930 in k4909 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4969,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_4890(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4944,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 277  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t2,lf[72],lf[73],((C_word*)t0)[2]);}}

/* k4942 in k4967 in k4933 in k4930 in k4909 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4944,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,4,lf[35],lf[70],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
f_4890(t4,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[71],t3));}

/* k4888 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_4890(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
C_trace("optimizer.scm: 281  walk-generic");
t2=((C_word*)((C_word*)t0)[7])[1];
f_5696(t2,((C_word*)t0)[8],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4841 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4843,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4846,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
C_trace("optimizer.scm: 260  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t2,lf[7],lf[67],((C_word*)t0)[2]);}

/* k4844 in k4841 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4846,2,t0,t1);}
t2=f_4022(((C_word*)((C_word*)t0)[9])[1]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4852,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4874,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("for-each");
t5=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[6]);}

/* a4873 in k4844 in k4841 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4874(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4874,3,t0,t1,t2);}
t3=C_retrieve(lf[65]);
C_trace("g466467");
t4=t3;
((C_proc6)C_retrieve_proc(t4))(6,t4,t1,((C_word*)t0)[2],t2,lf[66],C_SCHEME_TRUE);}

/* k4850 in k4844 in k4841 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4852,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4859,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_car(t4);
C_trace("optimizer.scm: 264  inline-lambda-bindings");
((C_proc7)C_retrieve_symbol_proc(lf[64]))(7,*((C_word*)lf[64]+1),t2,((C_word*)t0)[4],((C_word*)t0)[3],t5,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k4857 in k4850 in k4844 in k4841 in k4827 in k4818 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 263  walk");
t2=((C_word*)((C_word*)t0)[4])[1];
f_4157(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4623 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4625,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4630,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],tmp=(C_word)a,a+=9,tmp);
C_trace("optimizer.scm: 215  decompose-lambda-list");
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),((C_word*)t0)[6],((C_word*)t0)[5],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4724,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
C_trace("optimizer.scm: 230  test");
t3=((C_word*)((C_word*)t0)[13])[1];
f_3986(t3,t2,((C_word*)t0)[9],lf[59]);}}

/* k4722 in k4623 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4724,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4729,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
C_trace("optimizer.scm: 231  decompose-lambda-list");
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),((C_word*)t0)[6],((C_word*)t0)[5],t2);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[8]);
C_trace("optimizer.scm: 243  walk-generic");
t3=((C_word*)((C_word*)t0)[4])[1];
f_5696(t3,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[11],((C_word*)t0)[10],t2);}}

/* a4728 in k4722 in k4623 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4729(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4729,5,t0,t1,t2,t3,t4);}
t5=f_4022(((C_word*)((C_word*)t0)[7])[1]);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4736,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
C_trace("optimizer.scm: 235  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t6,lf[7],lf[62],t4);}

/* k4734 in a4728 in k4722 in k4623 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4736,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[9]);
t3=(C_word)C_i_cadr(((C_word*)t0)[9]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4776,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t3,a[8]=t2,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t5=(C_word)C_fixnum_increase(((C_word*)t0)[3]);
C_trace("optimizer.scm: 240  build-lambda-list");
((C_proc5)C_retrieve_symbol_proc(lf[57]))(5,*((C_word*)lf[57]+1),t4,((C_word*)t0)[2],t5,C_SCHEME_FALSE);}

/* k4774 in k4734 in a4728 in k4722 in k4623 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4776,2,t0,t1);}
t2=(C_word)C_i_cadddr(((C_word*)t0)[9]);
t3=(C_word)C_a_i_list(&a,4,((C_word*)t0)[8],((C_word*)t0)[7],t1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4756,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[5]);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
C_trace("optimizer.scm: 242  walk");
t7=((C_word*)((C_word*)t0)[2])[1];
f_4157(t7,t4,t5,t6);}

/* k4754 in k4774 in k4734 in a4728 in k4722 in k4623 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4756,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[54],((C_word*)t0)[2],t2));}

/* a4629 in k4623 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4630(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4630,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4636,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4648,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,t1,t5,t6);}

/* a4647 in a4629 in k4623 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4648(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4648,4,t0,t1,t2,t3);}
t4=f_4022(((C_word*)((C_word*)t0)[10])[1]);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
C_trace("optimizer.scm: 220  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t5,lf[7],lf[60],t2);}

/* k4653 in a4647 in a4629 in k4623 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4655,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[11]);
t3=(C_word)C_i_cadr(((C_word*)t0)[11]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4695,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=t3,a[8]=t2,a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4702,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace("optimizer.scm: 224  test");
t6=((C_word*)((C_word*)t0)[2])[1];
f_3986(t6,t5,((C_word*)t0)[8],lf[59]);}
else{
t6=t5;
f_4702(2,t6,C_SCHEME_FALSE);}}

/* k4700 in k4653 in a4647 in a4629 in k4623 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4702,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4705,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 225  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t2,lf[7],lf[58],((C_word*)t0)[2]);}
else{
C_trace("optimizer.scm: 227  build-lambda-list");
((C_proc5)C_retrieve_symbol_proc(lf[57]))(5,*((C_word*)lf[57]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k4703 in k4700 in k4653 in a4647 in a4629 in k4623 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[4]);
C_trace("optimizer.scm: 226  build-lambda-list");
((C_proc5)C_retrieve_symbol_proc(lf[57]))(5,*((C_word*)lf[57]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2,C_SCHEME_FALSE);}

/* k4693 in k4653 in a4647 in a4629 in k4623 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4695,2,t0,t1);}
t2=(C_word)C_i_cadddr(((C_word*)t0)[9]);
t3=(C_word)C_a_i_list(&a,4,((C_word*)t0)[8],((C_word*)t0)[7],t1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4675,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[5]);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
C_trace("optimizer.scm: 229  walk");
t7=((C_word*)((C_word*)t0)[2])[1];
f_4157(t7,t4,t5,t6);}

/* k4673 in k4693 in k4653 in a4647 in a4629 in k4623 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4675,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[54],((C_word*)t0)[2],t2));}

/* a4635 in a4629 in k4623 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4642,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("optimizer.scm: 218  partition");
((C_proc4)C_retrieve_symbol_proc(lf[56]))(4,*((C_word*)lf[56]+1),t1,t2,((C_word*)t0)[2]);}

/* a4641 in a4635 in a4629 in k4623 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4642(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4642,3,t0,t1,t2);}
C_trace("optimizer.scm: 218  test");
t3=((C_word*)((C_word*)t0)[2])[1];
f_3986(t3,t1,t2,lf[55]);}

/* k4557 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4559,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4562,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t1)){
t3=t2;
f_4562(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4600,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 205  test");
t4=((C_word*)((C_word*)t0)[3])[1];
f_3986(t4,t3,((C_word*)t0)[2],lf[52]);}}

/* k4598 in k4557 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4600,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4607,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("optimizer.scm: 205  test");
t3=((C_word*)((C_word*)t0)[3])[1];
f_3986(t3,t2,((C_word*)t0)[2],lf[51]);}
else{
t2=((C_word*)t0)[4];
f_4562(t2,C_SCHEME_FALSE);}}

/* k4605 in k4598 in k4557 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4562(t2,(C_word)C_i_not(t1));}

/* k4560 in k4557 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_4562(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4562,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=f_4022(((C_word*)((C_word*)t0)[8])[1]);
t3=(C_word)C_fixnum_increase(((C_word*)((C_word*)t0)[7])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t3);
t5=(C_word)C_i_cadr(((C_word*)t0)[6]);
C_trace("optimizer.scm: 208  walk");
t6=((C_word*)((C_word*)t0)[5])[1];
f_4157(t6,((C_word*)t0)[4],t5,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4590,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("map");
t4=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[6]);}}

/* a4589 in k4560 in k4557 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4590(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4590,3,t0,t1,t2);}
C_trace("g372373");
t3=((C_word*)((C_word*)t0)[3])[1];
f_4157(t3,t1,t2,((C_word*)t0)[2]);}

/* k4586 in k4560 in k4557 in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4588,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[35],lf[11],((C_word*)t0)[2],t1));}

/* replace in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_4478(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4478,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
C_trace("optimizer.scm: 190  test");
t4=((C_word*)((C_word*)t0)[4])[1];
f_3986(t4,t3,t2,lf[49]);}

/* k4480 in replace in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4482,2,t0,t1);}
if(C_truep(t1)){
C_trace("replace314");
t2=((C_word*)((C_word*)t0)[8])[1];
f_4478(t2,((C_word*)t0)[7],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("optimizer.scm: 191  test");
t3=((C_word*)((C_word*)t0)[5])[1];
f_3986(t3,t2,((C_word*)t0)[4],lf[48]);}}

/* k4492 in k4480 in replace in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4494,2,t0,t1);}
if(C_truep(t1)){
t2=f_4022(((C_word*)((C_word*)t0)[7])[1]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4500,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 193  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t3,lf[7],lf[46],((C_word*)t0)[4]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_eqp(((C_word*)t0)[4],t2);
if(C_truep(t3)){
C_trace("optimizer.scm: 200  varnode");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),((C_word*)t0)[6],((C_word*)t0)[4]);}
else{
t4=f_4022(((C_word*)((C_word*)t0)[7])[1]);
t5=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
C_trace("optimizer.scm: 200  varnode");
((C_proc3)C_retrieve_symbol_proc(lf[47]))(3,*((C_word*)lf[47]+1),((C_word*)t0)[6],((C_word*)t0)[4]);}}}

/* k4498 in k4492 in k4480 in replace in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4500,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4520,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("optimizer.scm: 194  test");
t3=((C_word*)((C_word*)t0)[3])[1];
f_3986(t3,t2,((C_word*)t0)[2],lf[45]);}

/* k4518 in k4498 in k4492 in k4480 in replace in walk1 in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(t1,C_fix(2));
t3=(C_word)C_i_car(t2);
C_trace("optimizer.scm: 194  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),((C_word*)t0)[2],t3);}

/* walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_4157(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4157,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_memq(t2,C_retrieve(lf[32])))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=((C_word*)((C_word*)t0)[8])[1];
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4171,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=t4,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=t1,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
C_trace("optimizer.scm: 143  walk1");
t6=((C_word*)((C_word*)t0)[2])[1];
f_4438(t6,t5,t2,t3);}}

/* k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4171(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4171,2,t0,t1);}
t2=t1;
t3=(C_word)C_slot(t2,C_fix(3));
t4=t1;
t5=(C_word)C_slot(t4,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4190,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_eqp(t5,lf[10]);
if(C_truep(t7)){
t8=(C_word)C_i_car(t3);
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(lf[26],t9);
if(C_truep(t10)){
t11=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[8])[1],C_fix(1));
t12=C_mutate(((C_word *)((C_word*)t0)[8])+1,t11);
t13=f_4022(((C_word*)((C_word*)t0)[7])[1]);
t14=(C_word)C_i_car(t3);
t15=(C_word)C_slot(t14,C_fix(2));
t16=(C_word)C_i_car(t15);
t17=(C_truep(t16)?(C_word)C_i_cadr(t3):(C_word)C_i_caddr(t3));
C_trace("optimizer.scm: 151  walk");
t18=((C_word*)((C_word*)t0)[6])[1];
f_4157(t18,t6,t17,((C_word*)t0)[5]);}
else{
t11=t1;
C_trace("optimizer.scm: 141  simplify");
t12=((C_word*)((C_word*)t0)[10])[1];
f_4026(t12,((C_word*)t0)[9],t11);}}
else{
t8=(C_word)C_eqp(t5,lf[15]);
if(C_truep(t8)){
t9=(C_word)C_i_car(t3);
t10=(C_word)C_slot(t9,C_fix(1));
t11=(C_word)C_eqp(lf[9],t10);
if(C_truep(t11)){
t12=(C_word)C_i_car(t3);
t13=(C_word)C_slot(t12,C_fix(2));
t14=(C_word)C_i_car(t13);
t15=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4251,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t1,a[9]=t6,a[10]=t14,tmp=(C_word)a,a+=11,tmp);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4397,a[2]=t14,a[3]=((C_word*)t0)[2],a[4]=t15,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[43]))(4,*((C_word*)lf[43]+1),t16,t14,lf[44]);}
else{
t12=t1;
C_trace("optimizer.scm: 141  simplify");
t13=((C_word*)((C_word*)t0)[10])[1];
f_4026(t13,((C_word*)t0)[9],t12);}}
else{
t9=t1;
C_trace("optimizer.scm: 141  simplify");
t10=((C_word*)((C_word*)t0)[10])[1];
f_4026(t10,((C_word*)t0)[9],t9);}}}

/* k4395 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4397,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4403,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 161  foldable?");
((C_proc3)C_retrieve_symbol_proc(lf[42]))(3,*((C_word*)lf[42]+1),t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
f_4251(2,t2,C_SCHEME_FALSE);}}

/* k4401 in k4395 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cddr(((C_word*)t0)[4]);
C_trace("optimizer.scm: 162  every");
((C_proc4)C_retrieve_symbol_proc(lf[41]))(4,*((C_word*)lf[41]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t2);}
else{
t2=((C_word*)t0)[3];
f_4251(2,t2,C_SCHEME_FALSE);}}

/* k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4251(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4251,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4337,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t7=(C_word)C_i_cddr(((C_word*)t0)[4]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4343,a[2]=t3,a[3]=t9,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4343(t11,t6,t7);}
else{
t2=((C_word*)t0)[8];
C_trace("optimizer.scm: 141  simplify");
t3=((C_word*)((C_word*)t0)[3])[1];
f_4026(t3,((C_word*)t0)[2],t2);}}

/* loop249 in k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_4343(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4343,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(2));
t5=(C_word)C_i_car(t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[26],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t9=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t8);
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t8);
t11=(C_word)C_slot(t2,C_fix(1));
C_trace("loop249262");
t17=t1;
t18=t11;
t1=t17;
t2=t18;
goto loop;}
else{
t9=C_mutate(((C_word *)((C_word*)t0)[2])+1,t8);
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t8);
t11=(C_word)C_slot(t2,C_fix(1));
C_trace("loop249262");
t17=t1;
t18=t11;
t1=t17;
t2=t18;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4335 in k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4337,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4257,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4262,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("call-with-current-continuation");
((C_proc3)C_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t3,t4);}

/* a4261 in k4335 in k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4262(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4262,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4268,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4285,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("with-exception-handler");
((C_proc4)C_retrieve_symbol_proc(lf[40]))(4,*((C_word*)lf[40]+1),t1,t3,t4);}

/* a4284 in a4261 in k4335 in k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4285,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4291,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4323,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,t1,t2,t3);}

/* a4322 in a4284 in a4261 in k4335 in k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4323(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_4323r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4323r(t0,t1,t2);}}

static void C_ccall f_4323r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4329,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("k275280");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a4328 in a4322 in a4284 in a4261 in k4335 in k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4329,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a4290 in a4284 in a4261 in k4335 in k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4291,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4295,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 170  eval");
((C_proc3)C_retrieve_symbol_proc(lf[39]))(3,*((C_word*)lf[39]+1),t2,((C_word*)t0)[2]);}

/* k4293 in a4290 in a4284 in a4261 in k4335 in k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4295(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4295,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4298,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 171  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t2,lf[7],lf[38],((C_word*)t0)[2]);}

/* k4296 in k4293 in a4290 in a4284 in a4261 in k4335 in k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4298,2,t0,t1);}
t2=f_4022(((C_word*)((C_word*)t0)[5])[1]);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4321,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 176  qnode");
((C_proc3)C_retrieve_symbol_proc(lf[37]))(3,*((C_word*)lf[37]+1),t4,((C_word*)t0)[2]);}

/* k4319 in k4296 in k4293 in a4290 in a4284 in a4261 in k4335 in k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4321,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[35],lf[15],lf[36],t2));}

/* a4267 in a4261 in k4335 in k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4268(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4268,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4274,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("k275280");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a4273 in a4267 in a4261 in k4335 in k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4278,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_4278(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=t2;
f_4278(t4,t3);}}

/* k4276 in a4273 in a4267 in a4261 in k4335 in k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_4278(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4278,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4282,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 168  lset-adjoin");
((C_proc5)C_retrieve_symbol_proc(lf[33]))(5,*((C_word*)lf[33]+1),t2,*((C_word*)lf[34]+1),C_retrieve(lf[32]),((C_word*)t0)[2]);}

/* k4280 in k4276 in a4273 in a4267 in a4261 in k4335 in k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[32]+1 /* (set! broken-constant-nodes ...) */,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* k4255 in k4335 in k4249 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("g278279");
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k4188 in k4169 in walk in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 141  simplify");
t2=((C_word*)((C_word*)t0)[3])[1];
f_4026(t2,((C_word*)t0)[2],t1);}

/* simplify in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_4026(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4026,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t4=t2;
t5=(C_word)C_slot(t4,C_fix(1));
C_trace("optimizer.scm: 122  ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[31]))(4,*((C_word*)lf[31]+1),t3,*((C_word*)lf[22]+1),t5);}

/* k4028 in simplify in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4033,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4041,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 123  any");
((C_proc4)C_retrieve_symbol_proc(lf[30]))(4,*((C_word*)lf[30]+1),t2,t3,t1);}
else{
t3=((C_word*)t0)[6];
t4=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a4040 in k4028 in simplify in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4041(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4041,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4051,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_i_car(t2);
C_trace("optimizer.scm: 125  match-node");
((C_proc5)C_retrieve_symbol_proc(lf[29]))(5,*((C_word*)lf[29]+1),t4,((C_word*)t0)[2],t5,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k4049 in a4040 in k4028 in simplify in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4051(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4051,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4057,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4098,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4100,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4100(t12,t8,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop180 in k4049 in a4040 in k4028 in simplify in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_4100(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4100,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4127,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_4127(t3,t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
C_trace("loop180193");
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
C_trace("loop180193");
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g196 in loop180 in k4049 in a4040 in k4028 in simplify in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static C_word C_fcall f_4127(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_assq(t1,((C_word*)t0)[2]);
return((C_word)C_i_cdr(t2));}

/* k4096 in k4049 in a4040 in k4028 in simplify in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4055 in k4049 in a4040 in k4028 in simplify in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4057,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4063,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 128  caar");
((C_proc3)C_retrieve_proc(*((C_word*)lf[28]+1)))(3,*((C_word*)lf[28]+1),t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4061 in k4055 in k4049 in a4040 in k4028 in simplify in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4063,2,t0,t1);}
t2=(C_word)C_i_assq(t1,((C_word*)((C_word*)t0)[6])[1]);
if(C_truep(t2)){
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_fixnum_increase(t3);
t5=(C_word)C_i_set_cdr(t2,t4);
t6=f_4022(((C_word*)((C_word*)t0)[5])[1]);
C_trace("optimizer.scm: 134  simplify");
t7=((C_word*)((C_word*)t0)[4])[1];
f_4026(t7,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4090,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 132  alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[27]))(5,*((C_word*)lf[27]+1),t3,t1,C_fix(1),((C_word*)((C_word*)t0)[6])[1]);}}

/* k4088 in k4061 in k4055 in k4049 in a4040 in k4028 in simplify in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=f_4022(((C_word*)((C_word*)t0)[5])[1]);
C_trace("optimizer.scm: 134  simplify");
t4=((C_word*)((C_word*)t0)[4])[1];
f_4026(t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4031 in k4028 in simplify in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_4033(C_word c,C_word t0,C_word t1){
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

/* touch in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static C_word C_fcall f_4022(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_check;
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(t1);}

/* constant-node? in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_ccall f_3992(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3992,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_eqp(lf[26],t3));}

/* test in ##compiler#perform-high-level-optimizations in k3978 in k3704 in k3701 */
static void C_fcall f_3986(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3986,NULL,4,t0,t1,t2,t3);}
C_trace("optimizer.scm: 116  get");
((C_proc5)C_retrieve_symbol_proc(lf[25]))(5,*((C_word*)lf[25]+1),t1,((C_word*)t0)[2],t2,t3);}

/* ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_ccall f_3708(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3708,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3711,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3729,a[2]=t2,a[3]=t7,a[4]=t6,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("optimizer.scm: 48   debugging");
((C_proc4)C_retrieve_symbol_proc(lf[6]))(4,*((C_word*)lf[6]+1),t8,lf[20],lf[21]);}

/* k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_ccall f_3729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3729,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3732,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3773,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("optimizer.scm: 49   call-with-current-continuation");
((C_proc3)C_retrieve_proc(*((C_word*)lf[19]+1)))(3,*((C_word*)lf[19]+1),t2,t3);}

/* a3772 in k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_ccall f_3773(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3773,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3776,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3810,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp));
C_trace("optimizer.scm: 84   scan");
t9=((C_word*)t6)[1];
f_3810(t9,t1,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* scan in a3772 in k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_fcall f_3810(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3810,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(2));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(3));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(t9,lf[9]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t5);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3850,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=t11,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_memq(t11,t3))){
t13=t12;
f_3850(t13,C_SCHEME_FALSE);}
else{
t13=(C_word)C_i_memq(t11,((C_word*)((C_word*)t0)[6])[1]);
t14=t12;
f_3850(t14,(C_word)C_i_not(t13));}}
else{
t11=(C_word)C_eqp(t9,lf[10]);
t12=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t9,a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=t7,a[9]=t1,a[10]=((C_word*)t0)[5],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t11)){
t13=t12;
f_3877(t13,t11);}
else{
t13=(C_word)C_eqp(t9,lf[17]);
t14=t12;
f_3877(t14,(C_truep(t13)?t13:(C_word)C_eqp(t9,lf[18])));}}}

/* k3875 in scan in a3772 in k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_fcall f_3877(C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3877,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3880,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[8]);
C_trace("optimizer.scm: 66   scan");
t4=((C_word*)((C_word*)t0)[7])[1];
f_3810(t4,t2,t3,((C_word*)t0)[6]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[11]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3896,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[8]);
C_trace("optimizer.scm: 70   scan");
t5=((C_word*)((C_word*)t0)[7])[1];
f_3810(t5,t3,t4,((C_word*)t0)[6]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[5],lf[13]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(((C_word*)t0)[5],lf[14]));
if(C_truep(t4)){
t5=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[15]);
if(C_truep(t5)){
C_trace("optimizer.scm: 75   return");
t6=((C_word*)t0)[10];
((C_proc3)C_retrieve_proc(t6))(3,t6,((C_word*)t0)[9],C_SCHEME_FALSE);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[16]);
if(C_truep(t6)){
t7=(C_word)C_i_car(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_memq(t7,((C_word*)t0)[6]))){
t8=(C_word)C_i_car(((C_word*)t0)[8]);
C_trace("optimizer.scm: 80   scan");
t9=((C_word*)((C_word*)t0)[7])[1];
f_3810(t9,((C_word*)t0)[9],t8,((C_word*)t0)[6]);}
else{
t8=f_3711(C_a_i(&a,3),((C_word*)t0)[3],t7);
t9=(C_word)C_i_car(((C_word*)t0)[8]);
C_trace("optimizer.scm: 80   scan");
t10=((C_word*)((C_word*)t0)[7])[1];
f_3810(t10,((C_word*)t0)[9],t9,((C_word*)t0)[6]);}}
else{
C_trace("optimizer.scm: 82   scan-each");
t7=((C_word*)((C_word*)t0)[2])[1];
f_3776(t7,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[6]);}}}}}}

/* k3894 in k3875 in scan in a3772 in k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_ccall f_3896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3896,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3907,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("optimizer.scm: 71   append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[12]+1)))(4,*((C_word*)lf[12]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3905 in k3894 in k3875 in scan in a3772 in k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_ccall f_3907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 71   scan");
t2=((C_word*)((C_word*)t0)[4])[1];
f_3810(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3878 in k3875 in scan in a3772 in k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_ccall f_3880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("optimizer.scm: 67   return");
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k3848 in scan in a3772 in k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_fcall f_3850(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3850,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* scan-each in a3772 in k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_fcall f_3776(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3776,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3782,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3782(t7,t1,t2);}

/* loop43 in scan-each in a3772 in k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_fcall f_3782(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3782,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3790,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3797,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g5051");
t6=t3;
f_3790(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3795 in loop43 in scan-each in a3772 in k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_ccall f_3797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3782(t3,((C_word*)t0)[2],t2);}

/* g50 in loop43 in scan-each in a3772 in k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_fcall f_3790(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3790,NULL,3,t0,t1,t2);}
C_trace("optimizer.scm: 53   scan");
t3=((C_word*)((C_word*)t0)[3])[1];
f_3810(t3,t1,t2,((C_word*)t0)[2]);}

/* k3730 in k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_ccall f_3732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3732,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3735,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("optimizer.scm: 85   debugging");
((C_proc5)C_retrieve_symbol_proc(lf[6]))(5,*((C_word*)lf[6]+1),t2,lf[7],lf[8],((C_word*)((C_word*)t0)[2])[1]);}

/* k3733 in k3730 in k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_ccall f_3735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3735,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3740,tmp=(C_word)a,a+=2,tmp);
C_trace("for-each");
t3=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)((C_word*)t0)[2])[1]);}

/* a3739 in k3733 in k3730 in k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_ccall f_3740(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3740,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3746,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[1]))(5,*((C_word*)lf[1]+1),t1,t2,lf[2],C_SCHEME_TRUE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=(C_word)C_i_car(t3);
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[1]))(5,*((C_word*)lf[1]+1),t1,t2,lf[2],t6);}
else{
C_trace("##sys#error");
t6=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[4],t3);}}}

/* k3744 in a3739 in k3733 in k3730 in k3727 in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static void C_ccall f_3746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[1]))(5,*((C_word*)lf[1]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[2],t1);}

/* mark in ##compiler#scan-toplevel-assignments in k3704 in k3701 */
static C_word C_fcall f_3711(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_stack_check;
if(C_truep((C_word)C_i_memq(t1,((C_word*)((C_word*)t0)[3])[1]))){
t2=C_SCHEME_UNDEFINED;
return(t2);}
else{
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[662] = {
{"toplevel:optimizer_scm",(void*)C_optimizer_toplevel},
{"f_3703:optimizer_scm",(void*)f_3703},
{"f_3706:optimizer_scm",(void*)f_3706},
{"f_3980:optimizer_scm",(void*)f_3980},
{"f_14556:optimizer_scm",(void*)f_14556},
{"f_14564:optimizer_scm",(void*)f_14564},
{"f_14569:optimizer_scm",(void*)f_14569},
{"f_14619:optimizer_scm",(void*)f_14619},
{"f_14623:optimizer_scm",(void*)f_14623},
{"f_14579:optimizer_scm",(void*)f_14579},
{"f_14583:optimizer_scm",(void*)f_14583},
{"f_14605:optimizer_scm",(void*)f_14605},
{"f_6170:optimizer_scm",(void*)f_6170},
{"f_13465:optimizer_scm",(void*)f_13465},
{"f_13511:optimizer_scm",(void*)f_13511},
{"f_13613:optimizer_scm",(void*)f_13613},
{"f_13623:optimizer_scm",(void*)f_13623},
{"f_13960:optimizer_scm",(void*)f_13960},
{"f_13952:optimizer_scm",(void*)f_13952},
{"f_13729:optimizer_scm",(void*)f_13729},
{"f_13758:optimizer_scm",(void*)f_13758},
{"f_13928:optimizer_scm",(void*)f_13928},
{"f_13920:optimizer_scm",(void*)f_13920},
{"f_13789:optimizer_scm",(void*)f_13789},
{"f_13842:optimizer_scm",(void*)f_13842},
{"f_13832:optimizer_scm",(void*)f_13832},
{"f_13840:optimizer_scm",(void*)f_13840},
{"f_14014:optimizer_scm",(void*)f_14014},
{"f_14027:optimizer_scm",(void*)f_14027},
{"f_14069:optimizer_scm",(void*)f_14069},
{"f_14053:optimizer_scm",(void*)f_14053},
{"f_14057:optimizer_scm",(void*)f_14057},
{"f_14049:optimizer_scm",(void*)f_14049},
{"f_14235:optimizer_scm",(void*)f_14235},
{"f_14248:optimizer_scm",(void*)f_14248},
{"f_14254:optimizer_scm",(void*)f_14254},
{"f_14306:optimizer_scm",(void*)f_14306},
{"f_14298:optimizer_scm",(void*)f_14298},
{"f_14282:optimizer_scm",(void*)f_14282},
{"f_14286:optimizer_scm",(void*)f_14286},
{"f_14290:optimizer_scm",(void*)f_14290},
{"f_6173:optimizer_scm",(void*)f_6173},
{"f_13106:optimizer_scm",(void*)f_13106},
{"f_13128:optimizer_scm",(void*)f_13128},
{"f_13208:optimizer_scm",(void*)f_13208},
{"f_13166:optimizer_scm",(void*)f_13166},
{"f_13200:optimizer_scm",(void*)f_13200},
{"f_13204:optimizer_scm",(void*)f_13204},
{"f_13192:optimizer_scm",(void*)f_13192},
{"f_13164:optimizer_scm",(void*)f_13164},
{"f_13302:optimizer_scm",(void*)f_13302},
{"f_13322:optimizer_scm",(void*)f_13322},
{"f_6176:optimizer_scm",(void*)f_6176},
{"f_6665:optimizer_scm",(void*)f_6665},
{"f_10487:optimizer_scm",(void*)f_10487},
{"f_12985:optimizer_scm",(void*)f_12985},
{"f_12988:optimizer_scm",(void*)f_12988},
{"f_12991:optimizer_scm",(void*)f_12991},
{"f_12994:optimizer_scm",(void*)f_12994},
{"f_12997:optimizer_scm",(void*)f_12997},
{"f_13000:optimizer_scm",(void*)f_13000},
{"f_13077:optimizer_scm",(void*)f_13077},
{"f_13003:optimizer_scm",(void*)f_13003},
{"f_13006:optimizer_scm",(void*)f_13006},
{"f_13009:optimizer_scm",(void*)f_13009},
{"f_13071:optimizer_scm",(void*)f_13071},
{"f_13012:optimizer_scm",(void*)f_13012},
{"f_13015:optimizer_scm",(void*)f_13015},
{"f_13068:optimizer_scm",(void*)f_13068},
{"f_11264:optimizer_scm",(void*)f_11264},
{"f_11282:optimizer_scm",(void*)f_11282},
{"f_11288:optimizer_scm",(void*)f_11288},
{"f_11268:optimizer_scm",(void*)f_11268},
{"f_13018:optimizer_scm",(void*)f_13018},
{"f_13060:optimizer_scm",(void*)f_13060},
{"f_13058:optimizer_scm",(void*)f_13058},
{"f_13021:optimizer_scm",(void*)f_13021},
{"f_13024:optimizer_scm",(void*)f_13024},
{"f_13027:optimizer_scm",(void*)f_13027},
{"f_13051:optimizer_scm",(void*)f_13051},
{"f_13030:optimizer_scm",(void*)f_13030},
{"f_13033:optimizer_scm",(void*)f_13033},
{"f_13036:optimizer_scm",(void*)f_13036},
{"f_13039:optimizer_scm",(void*)f_13039},
{"f_13042:optimizer_scm",(void*)f_13042},
{"f_13045:optimizer_scm",(void*)f_13045},
{"f_12744:optimizer_scm",(void*)f_12744},
{"f_12750:optimizer_scm",(void*)f_12750},
{"f_12961:optimizer_scm",(void*)f_12961},
{"f_12971:optimizer_scm",(void*)f_12971},
{"f_12935:optimizer_scm",(void*)f_12935},
{"f_12945:optimizer_scm",(void*)f_12945},
{"f_12905:optimizer_scm",(void*)f_12905},
{"f_12914:optimizer_scm",(void*)f_12914},
{"f_12917:optimizer_scm",(void*)f_12917},
{"f_12875:optimizer_scm",(void*)f_12875},
{"f_12885:optimizer_scm",(void*)f_12885},
{"f_12784:optimizer_scm",(void*)f_12784},
{"f_12789:optimizer_scm",(void*)f_12789},
{"f_12827:optimizer_scm",(void*)f_12827},
{"f_12812:optimizer_scm",(void*)f_12812},
{"f_12823:optimizer_scm",(void*)f_12823},
{"f_12819:optimizer_scm",(void*)f_12819},
{"f_12546:optimizer_scm",(void*)f_12546},
{"f_12552:optimizer_scm",(void*)f_12552},
{"f_12721:optimizer_scm",(void*)f_12721},
{"f_12731:optimizer_scm",(void*)f_12731},
{"f_12661:optimizer_scm",(void*)f_12661},
{"f_12690:optimizer_scm",(void*)f_12690},
{"f_12651:optimizer_scm",(void*)f_12651},
{"f_12647:optimizer_scm",(void*)f_12647},
{"f_12589:optimizer_scm",(void*)f_12589},
{"f_12603:optimizer_scm",(void*)f_12603},
{"f_12613:optimizer_scm",(void*)f_12613},
{"f_12018:optimizer_scm",(void*)f_12018},
{"f_12032:optimizer_scm",(void*)f_12032},
{"f_12039:optimizer_scm",(void*)f_12039},
{"f_12042:optimizer_scm",(void*)f_12042},
{"f_12051:optimizer_scm",(void*)f_12051},
{"f_12203:optimizer_scm",(void*)f_12203},
{"f_12232:optimizer_scm",(void*)f_12232},
{"f_12058:optimizer_scm",(void*)f_12058},
{"f_12154:optimizer_scm",(void*)f_12154},
{"f_12187:optimizer_scm",(void*)f_12187},
{"f_12167:optimizer_scm",(void*)f_12167},
{"f_12061:optimizer_scm",(void*)f_12061},
{"f_12282:optimizer_scm",(void*)f_12282},
{"f_12523:optimizer_scm",(void*)f_12523},
{"f_12533:optimizer_scm",(void*)f_12533},
{"f_12464:optimizer_scm",(void*)f_12464},
{"f_12485:optimizer_scm",(void*)f_12485},
{"f_12483:optimizer_scm",(void*)f_12483},
{"f_12479:optimizer_scm",(void*)f_12479},
{"f_12411:optimizer_scm",(void*)f_12411},
{"f_12416:optimizer_scm",(void*)f_12416},
{"f_12426:optimizer_scm",(void*)f_12426},
{"f_12348:optimizer_scm",(void*)f_12348},
{"f_12346:optimizer_scm",(void*)f_12346},
{"f_12316:optimizer_scm",(void*)f_12316},
{"f_12321:optimizer_scm",(void*)f_12321},
{"f_12331:optimizer_scm",(void*)f_12331},
{"f_12267:optimizer_scm",(void*)f_12267},
{"f_12064:optimizer_scm",(void*)f_12064},
{"f_12139:optimizer_scm",(void*)f_12139},
{"f_12127:optimizer_scm",(void*)f_12127},
{"f_12123:optimizer_scm",(void*)f_12123},
{"f_12030:optimizer_scm",(void*)f_12030},
{"f_11609:optimizer_scm",(void*)f_11609},
{"f_11970:optimizer_scm",(void*)f_11970},
{"f_11735:optimizer_scm",(void*)f_11735},
{"f_11947:optimizer_scm",(void*)f_11947},
{"f_11957:optimizer_scm",(void*)f_11957},
{"f_11868:optimizer_scm",(void*)f_11868},
{"f_11873:optimizer_scm",(void*)f_11873},
{"f_11941:optimizer_scm",(void*)f_11941},
{"f_11900:optimizer_scm",(void*)f_11900},
{"f_11938:optimizer_scm",(void*)f_11938},
{"f_11618:optimizer_scm",(void*)f_11618},
{"f_11711:optimizer_scm",(void*)f_11711},
{"f_11721:optimizer_scm",(void*)f_11721},
{"f_11694:optimizer_scm",(void*)f_11694},
{"f_11699:optimizer_scm",(void*)f_11699},
{"f_11653:optimizer_scm",(void*)f_11653},
{"f_11658:optimizer_scm",(void*)f_11658},
{"f_11668:optimizer_scm",(void*)f_11668},
{"f_11616:optimizer_scm",(void*)f_11616},
{"f_11930:optimizer_scm",(void*)f_11930},
{"f_11916:optimizer_scm",(void*)f_11916},
{"f_11914:optimizer_scm",(void*)f_11914},
{"f_11737:optimizer_scm",(void*)f_11737},
{"f_11861:optimizer_scm",(void*)f_11861},
{"f_11859:optimizer_scm",(void*)f_11859},
{"f_11825:optimizer_scm",(void*)f_11825},
{"f_11844:optimizer_scm",(void*)f_11844},
{"f_11833:optimizer_scm",(void*)f_11833},
{"f_11757:optimizer_scm",(void*)f_11757},
{"f_11781:optimizer_scm",(void*)f_11781},
{"f_11808:optimizer_scm",(void*)f_11808},
{"f_11779:optimizer_scm",(void*)f_11779},
{"f_11775:optimizer_scm",(void*)f_11775},
{"f_11767:optimizer_scm",(void*)f_11767},
{"f_11298:optimizer_scm",(void*)f_11298},
{"f_11304:optimizer_scm",(void*)f_11304},
{"f_11338:optimizer_scm",(void*)f_11338},
{"f_11560:optimizer_scm",(void*)f_11560},
{"f_11575:optimizer_scm",(void*)f_11575},
{"f_11568:optimizer_scm",(void*)f_11568},
{"f_11457:optimizer_scm",(void*)f_11457},
{"f_11473:optimizer_scm",(void*)f_11473},
{"f_11526:optimizer_scm",(void*)f_11526},
{"f_11530:optimizer_scm",(void*)f_11530},
{"f_11493:optimizer_scm",(void*)f_11493},
{"f_11502:optimizer_scm",(void*)f_11502},
{"f_11512:optimizer_scm",(void*)f_11512},
{"f_11424:optimizer_scm",(void*)f_11424},
{"f_11429:optimizer_scm",(void*)f_11429},
{"f_11444:optimizer_scm",(void*)f_11444},
{"f_11437:optimizer_scm",(void*)f_11437},
{"f_11400:optimizer_scm",(void*)f_11400},
{"f_11412:optimizer_scm",(void*)f_11412},
{"f_11349:optimizer_scm",(void*)f_11349},
{"f_11370:optimizer_scm",(void*)f_11370},
{"f_11367:optimizer_scm",(void*)f_11367},
{"f_11302:optimizer_scm",(void*)f_11302},
{"f_11017:optimizer_scm",(void*)f_11017},
{"f_11023:optimizer_scm",(void*)f_11023},
{"f_11057:optimizer_scm",(void*)f_11057},
{"f_11159:optimizer_scm",(void*)f_11159},
{"f_11174:optimizer_scm",(void*)f_11174},
{"f_11167:optimizer_scm",(void*)f_11167},
{"f_11150:optimizer_scm",(void*)f_11150},
{"f_11116:optimizer_scm",(void*)f_11116},
{"f_11125:optimizer_scm",(void*)f_11125},
{"f_11137:optimizer_scm",(void*)f_11137},
{"f_11068:optimizer_scm",(void*)f_11068},
{"f_11089:optimizer_scm",(void*)f_11089},
{"f_11086:optimizer_scm",(void*)f_11086},
{"f_11021:optimizer_scm",(void*)f_11021},
{"f_10884:optimizer_scm",(void*)f_10884},
{"f_10890:optimizer_scm",(void*)f_10890},
{"f_10934:optimizer_scm",(void*)f_10934},
{"f_10939:optimizer_scm",(void*)f_10939},
{"f_10946:optimizer_scm",(void*)f_10946},
{"f_11007:optimizer_scm",(void*)f_11007},
{"f_11003:optimizer_scm",(void*)f_11003},
{"f_10961:optimizer_scm",(void*)f_10961},
{"f_10995:optimizer_scm",(void*)f_10995},
{"f_10988:optimizer_scm",(void*)f_10988},
{"f_10959:optimizer_scm",(void*)f_10959},
{"f_10924:optimizer_scm",(void*)f_10924},
{"f_10902:optimizer_scm",(void*)f_10902},
{"f_10909:optimizer_scm",(void*)f_10909},
{"f_10596:optimizer_scm",(void*)f_10596},
{"f_10809:optimizer_scm",(void*)f_10809},
{"f_10871:optimizer_scm",(void*)f_10871},
{"f_10817:optimizer_scm",(void*)f_10817},
{"f_10842:optimizer_scm",(void*)f_10842},
{"f_10832:optimizer_scm",(void*)f_10832},
{"f_10836:optimizer_scm",(void*)f_10836},
{"f_10807:optimizer_scm",(void*)f_10807},
{"f_10599:optimizer_scm",(void*)f_10599},
{"f_10775:optimizer_scm",(void*)f_10775},
{"f_10790:optimizer_scm",(void*)f_10790},
{"f_10783:optimizer_scm",(void*)f_10783},
{"f_10758:optimizer_scm",(void*)f_10758},
{"f_10770:optimizer_scm",(void*)f_10770},
{"f_10704:optimizer_scm",(void*)f_10704},
{"f_10728:optimizer_scm",(void*)f_10728},
{"f_10722:optimizer_scm",(void*)f_10722},
{"f_10686:optimizer_scm",(void*)f_10686},
{"f_10639:optimizer_scm",(void*)f_10639},
{"f_10642:optimizer_scm",(void*)f_10642},
{"f_10647:optimizer_scm",(void*)f_10647},
{"f_10662:optimizer_scm",(void*)f_10662},
{"f_10655:optimizer_scm",(void*)f_10655},
{"f_10490:optimizer_scm",(void*)f_10490},
{"f_10496:optimizer_scm",(void*)f_10496},
{"f_10527:optimizer_scm",(void*)f_10527},
{"f_10531:optimizer_scm",(void*)f_10531},
{"f_10535:optimizer_scm",(void*)f_10535},
{"f_10494:optimizer_scm",(void*)f_10494},
{"f_9102:optimizer_scm",(void*)f_9102},
{"f_10482:optimizer_scm",(void*)f_10482},
{"f_10485:optimizer_scm",(void*)f_10485},
{"f_9758:optimizer_scm",(void*)f_9758},
{"f_10472:optimizer_scm",(void*)f_10472},
{"f_10470:optimizer_scm",(void*)f_10470},
{"f_9762:optimizer_scm",(void*)f_9762},
{"f_9777:optimizer_scm",(void*)f_9777},
{"f_9786:optimizer_scm",(void*)f_9786},
{"f_9792:optimizer_scm",(void*)f_9792},
{"f_9795:optimizer_scm",(void*)f_9795},
{"f_9801:optimizer_scm",(void*)f_9801},
{"f_10084:optimizer_scm",(void*)f_10084},
{"f_10399:optimizer_scm",(void*)f_10399},
{"f_10409:optimizer_scm",(void*)f_10409},
{"f_10373:optimizer_scm",(void*)f_10373},
{"f_10383:optimizer_scm",(void*)f_10383},
{"f_10358:optimizer_scm",(void*)f_10358},
{"f_10361:optimizer_scm",(void*)f_10361},
{"f_10306:optimizer_scm",(void*)f_10306},
{"f_10309:optimizer_scm",(void*)f_10309},
{"f_10153:optimizer_scm",(void*)f_10153},
{"f_10200:optimizer_scm",(void*)f_10200},
{"f_10210:optimizer_scm",(void*)f_10210},
{"f_10213:optimizer_scm",(void*)f_10213},
{"f_10247:optimizer_scm",(void*)f_10247},
{"f_10216:optimizer_scm",(void*)f_10216},
{"f_10219:optimizer_scm",(void*)f_10219},
{"f_10162:optimizer_scm",(void*)f_10162},
{"f_10165:optimizer_scm",(void*)f_10165},
{"f_10168:optimizer_scm",(void*)f_10168},
{"f_9804:optimizer_scm",(void*)f_9804},
{"f_10066:optimizer_scm",(void*)f_10066},
{"f_9975:optimizer_scm",(void*)f_9975},
{"f_9977:optimizer_scm",(void*)f_9977},
{"f_10053:optimizer_scm",(void*)f_10053},
{"f_9985:optimizer_scm",(void*)f_9985},
{"f_10000:optimizer_scm",(void*)f_10000},
{"f_9807:optimizer_scm",(void*)f_9807},
{"f_9824:optimizer_scm",(void*)f_9824},
{"f_9895:optimizer_scm",(void*)f_9895},
{"f_9827:optimizer_scm",(void*)f_9827},
{"f_9830:optimizer_scm",(void*)f_9830},
{"f_9835:optimizer_scm",(void*)f_9835},
{"f_9879:optimizer_scm",(void*)f_9879},
{"f_9850:optimizer_scm",(void*)f_9850},
{"f_9304:optimizer_scm",(void*)f_9304},
{"f_9749:optimizer_scm",(void*)f_9749},
{"f_9756:optimizer_scm",(void*)f_9756},
{"f_9307:optimizer_scm",(void*)f_9307},
{"f_9736:optimizer_scm",(void*)f_9736},
{"f_9712:optimizer_scm",(void*)f_9712},
{"f_9723:optimizer_scm",(void*)f_9723},
{"f_9679:optimizer_scm",(void*)f_9679},
{"f_9570:optimizer_scm",(void*)f_9570},
{"f_9575:optimizer_scm",(void*)f_9575},
{"f_9517:optimizer_scm",(void*)f_9517},
{"f_9523:optimizer_scm",(void*)f_9523},
{"f_9528:optimizer_scm",(void*)f_9528},
{"f_9476:optimizer_scm",(void*)f_9476},
{"f_9482:optimizer_scm",(void*)f_9482},
{"f_9487:optimizer_scm",(void*)f_9487},
{"f_9460:optimizer_scm",(void*)f_9460},
{"f_9456:optimizer_scm",(void*)f_9456},
{"f_9426:optimizer_scm",(void*)f_9426},
{"f_9389:optimizer_scm",(void*)f_9389},
{"f_9405:optimizer_scm",(void*)f_9405},
{"f_9371:optimizer_scm",(void*)f_9371},
{"f_9105:optimizer_scm",(void*)f_9105},
{"f_9276:optimizer_scm",(void*)f_9276},
{"f_9291:optimizer_scm",(void*)f_9291},
{"f_9284:optimizer_scm",(void*)f_9284},
{"f_9256:optimizer_scm",(void*)f_9256},
{"f_9230:optimizer_scm",(void*)f_9230},
{"f_9176:optimizer_scm",(void*)f_9176},
{"f_9182:optimizer_scm",(void*)f_9182},
{"f_9188:optimizer_scm",(void*)f_9188},
{"f_9145:optimizer_scm",(void*)f_9145},
{"f_6687:optimizer_scm",(void*)f_6687},
{"f_8969:optimizer_scm",(void*)f_8969},
{"f_8998:optimizer_scm",(void*)f_8998},
{"f_9010:optimizer_scm",(void*)f_9010},
{"f_9024:optimizer_scm",(void*)f_9024},
{"f_9073:optimizer_scm",(void*)f_9073},
{"f_6712:optimizer_scm",(void*)f_6712},
{"f_9044:optimizer_scm",(void*)f_9044},
{"f_9048:optimizer_scm",(void*)f_9048},
{"f_9018:optimizer_scm",(void*)f_9018},
{"f_9004:optimizer_scm",(void*)f_9004},
{"f_9002:optimizer_scm",(void*)f_9002},
{"f_8994:optimizer_scm",(void*)f_8994},
{"f_8889:optimizer_scm",(void*)f_8889},
{"f_8933:optimizer_scm",(void*)f_8933},
{"f_8694:optimizer_scm",(void*)f_8694},
{"f_8700:optimizer_scm",(void*)f_8700},
{"f_8816:optimizer_scm",(void*)f_8816},
{"f_8709:optimizer_scm",(void*)f_8709},
{"f_8771:optimizer_scm",(void*)f_8771},
{"f_8769:optimizer_scm",(void*)f_8769},
{"f_8731:optimizer_scm",(void*)f_8731},
{"f_8609:optimizer_scm",(void*)f_8609},
{"f_8650:optimizer_scm",(void*)f_8650},
{"f_8662:optimizer_scm",(void*)f_8662},
{"f_8640:optimizer_scm",(void*)f_8640},
{"f_8638:optimizer_scm",(void*)f_8638},
{"f_8427:optimizer_scm",(void*)f_8427},
{"f_8533:optimizer_scm",(void*)f_8533},
{"f_8436:optimizer_scm",(void*)f_8436},
{"f_8507:optimizer_scm",(void*)f_8507},
{"f_8505:optimizer_scm",(void*)f_8505},
{"f_8458:optimizer_scm",(void*)f_8458},
{"f_8387:optimizer_scm",(void*)f_8387},
{"f_8403:optimizer_scm",(void*)f_8403},
{"f_8308:optimizer_scm",(void*)f_8308},
{"f_8337:optimizer_scm",(void*)f_8337},
{"f_8218:optimizer_scm",(void*)f_8218},
{"f_8252:optimizer_scm",(void*)f_8252},
{"f_8113:optimizer_scm",(void*)f_8113},
{"f_8139:optimizer_scm",(void*)f_8139},
{"f_8135:optimizer_scm",(void*)f_8135},
{"f_8019:optimizer_scm",(void*)f_8019},
{"f_7942:optimizer_scm",(void*)f_7942},
{"f_7966:optimizer_scm",(void*)f_7966},
{"f_7970:optimizer_scm",(void*)f_7970},
{"f_7854:optimizer_scm",(void*)f_7854},
{"f_7910:optimizer_scm",(void*)f_7910},
{"f_7906:optimizer_scm",(void*)f_7906},
{"f_7783:optimizer_scm",(void*)f_7783},
{"f_7795:optimizer_scm",(void*)f_7795},
{"f_7815:optimizer_scm",(void*)f_7815},
{"f_7811:optimizer_scm",(void*)f_7811},
{"f_7684:optimizer_scm",(void*)f_7684},
{"f_7713:optimizer_scm",(void*)f_7713},
{"f_7721:optimizer_scm",(void*)f_7721},
{"f_7725:optimizer_scm",(void*)f_7725},
{"f_7441:optimizer_scm",(void*)f_7441},
{"f_7469:optimizer_scm",(void*)f_7469},
{"f_7472:optimizer_scm",(void*)f_7472},
{"f_7585:optimizer_scm",(void*)f_7585},
{"f_7619:optimizer_scm",(void*)f_7619},
{"f_7475:optimizer_scm",(void*)f_7475},
{"f_7550:optimizer_scm",(void*)f_7550},
{"f_7579:optimizer_scm",(void*)f_7579},
{"f_7478:optimizer_scm",(void*)f_7478},
{"f_7522:optimizer_scm",(void*)f_7522},
{"f_7520:optimizer_scm",(void*)f_7520},
{"f_7483:optimizer_scm",(void*)f_7483},
{"f_7463:optimizer_scm",(void*)f_7463},
{"f_7415:optimizer_scm",(void*)f_7415},
{"f_7342:optimizer_scm",(void*)f_7342},
{"f_7379:optimizer_scm",(void*)f_7379},
{"f_7371:optimizer_scm",(void*)f_7371},
{"f_7253:optimizer_scm",(void*)f_7253},
{"f_7148:optimizer_scm",(void*)f_7148},
{"f_7203:optimizer_scm",(void*)f_7203},
{"f_7080:optimizer_scm",(void*)f_7080},
{"f_7100:optimizer_scm",(void*)f_7100},
{"f_7108:optimizer_scm",(void*)f_7108},
{"f_7031:optimizer_scm",(void*)f_7031},
{"f_7047:optimizer_scm",(void*)f_7047},
{"f_6900:optimizer_scm",(void*)f_6900},
{"f_6975:optimizer_scm",(void*)f_6975},
{"f_6934:optimizer_scm",(void*)f_6934},
{"f_6749:optimizer_scm",(void*)f_6749},
{"f_6830:optimizer_scm",(void*)f_6830},
{"f_6752:optimizer_scm",(void*)f_6752},
{"f_6667:optimizer_scm",(void*)f_6667},
{"f_6671:optimizer_scm",(void*)f_6671},
{"f_6681:optimizer_scm",(void*)f_6681},
{"f_6178:optimizer_scm",(void*)f_6178},
{"f_6614:optimizer_scm",(void*)f_6614},
{"f_6647:optimizer_scm",(void*)f_6647},
{"f_6627:optimizer_scm",(void*)f_6627},
{"f_6182:optimizer_scm",(void*)f_6182},
{"f_6567:optimizer_scm",(void*)f_6567},
{"f_6587:optimizer_scm",(void*)f_6587},
{"f_6575:optimizer_scm",(void*)f_6575},
{"f_6584:optimizer_scm",(void*)f_6584},
{"f_6580:optimizer_scm",(void*)f_6580},
{"f_6229:optimizer_scm",(void*)f_6229},
{"f_6487:optimizer_scm",(void*)f_6487},
{"f_6554:optimizer_scm",(void*)f_6554},
{"f_6495:optimizer_scm",(void*)f_6495},
{"f_6527:optimizer_scm",(void*)f_6527},
{"f_6540:optimizer_scm",(void*)f_6540},
{"f_6505:optimizer_scm",(void*)f_6505},
{"f_6521:optimizer_scm",(void*)f_6521},
{"f_6509:optimizer_scm",(void*)f_6509},
{"f_6513:optimizer_scm",(void*)f_6513},
{"f_6232:optimizer_scm",(void*)f_6232},
{"f_6406:optimizer_scm",(void*)f_6406},
{"f_6474:optimizer_scm",(void*)f_6474},
{"f_6414:optimizer_scm",(void*)f_6414},
{"f_6457:optimizer_scm",(void*)f_6457},
{"f_6463:optimizer_scm",(void*)f_6463},
{"f_6421:optimizer_scm",(void*)f_6421},
{"f_6431:optimizer_scm",(void*)f_6431},
{"f_6444:optimizer_scm",(void*)f_6444},
{"f_6429:optimizer_scm",(void*)f_6429},
{"f_6425:optimizer_scm",(void*)f_6425},
{"f_6235:optimizer_scm",(void*)f_6235},
{"f_6238:optimizer_scm",(void*)f_6238},
{"f_6258:optimizer_scm",(void*)f_6258},
{"f_6271:optimizer_scm",(void*)f_6271},
{"f_6332:optimizer_scm",(void*)f_6332},
{"f_6378:optimizer_scm",(void*)f_6378},
{"f_6330:optimizer_scm",(void*)f_6330},
{"f_6300:optimizer_scm",(void*)f_6300},
{"f_6241:optimizer_scm",(void*)f_6241},
{"f_6250:optimizer_scm",(void*)f_6250},
{"f_6184:optimizer_scm",(void*)f_6184},
{"f_6190:optimizer_scm",(void*)f_6190},
{"f_6214:optimizer_scm",(void*)f_6214},
{"f_6163:optimizer_scm",(void*)f_6163},
{"f_5844:optimizer_scm",(void*)f_5844},
{"f_5858:optimizer_scm",(void*)f_5858},
{"f_5878:optimizer_scm",(void*)f_5878},
{"f_5885:optimizer_scm",(void*)f_5885},
{"f_5890:optimizer_scm",(void*)f_5890},
{"f_6150:optimizer_scm",(void*)f_6150},
{"f_5898:optimizer_scm",(void*)f_5898},
{"f_6134:optimizer_scm",(void*)f_6134},
{"f_5916:optimizer_scm",(void*)f_5916},
{"f_5919:optimizer_scm",(void*)f_5919},
{"f_5925:optimizer_scm",(void*)f_5925},
{"f_5945:optimizer_scm",(void*)f_5945},
{"f_5951:optimizer_scm",(void*)f_5951},
{"f_5957:optimizer_scm",(void*)f_5957},
{"f_5966:optimizer_scm",(void*)f_5966},
{"f_5973:optimizer_scm",(void*)f_5973},
{"f_5976:optimizer_scm",(void*)f_5976},
{"f_5994:optimizer_scm",(void*)f_5994},
{"f_5979:optimizer_scm",(void*)f_5979},
{"f_5861:optimizer_scm",(void*)f_5861},
{"f_5864:optimizer_scm",(void*)f_5864},
{"f_5851:optimizer_scm",(void*)f_5851},
{"f_5847:optimizer_scm",(void*)f_5847},
{"f_3983:optimizer_scm",(void*)f_3983},
{"f_5726:optimizer_scm",(void*)f_5726},
{"f_5732:optimizer_scm",(void*)f_5732},
{"f_5736:optimizer_scm",(void*)f_5736},
{"f_5739:optimizer_scm",(void*)f_5739},
{"f_5775:optimizer_scm",(void*)f_5775},
{"f_5780:optimizer_scm",(void*)f_5780},
{"f_5792:optimizer_scm",(void*)f_5792},
{"f_5819:optimizer_scm",(void*)f_5819},
{"f_5742:optimizer_scm",(void*)f_5742},
{"f_5745:optimizer_scm",(void*)f_5745},
{"f_5748:optimizer_scm",(void*)f_5748},
{"f_5751:optimizer_scm",(void*)f_5751},
{"f_5696:optimizer_scm",(void*)f_5696},
{"f_5716:optimizer_scm",(void*)f_5716},
{"f_5700:optimizer_scm",(void*)f_5700},
{"f_5706:optimizer_scm",(void*)f_5706},
{"f_4438:optimizer_scm",(void*)f_4438},
{"f_5586:optimizer_scm",(void*)f_5586},
{"f_5589:optimizer_scm",(void*)f_5589},
{"f_5688:optimizer_scm",(void*)f_5688},
{"f_5684:optimizer_scm",(void*)f_5684},
{"f_5646:optimizer_scm",(void*)f_5646},
{"f_5677:optimizer_scm",(void*)f_5677},
{"f_5673:optimizer_scm",(void*)f_5673},
{"f_5665:optimizer_scm",(void*)f_5665},
{"f_5606:optimizer_scm",(void*)f_5606},
{"f_5636:optimizer_scm",(void*)f_5636},
{"f_5612:optimizer_scm",(void*)f_5612},
{"f_5560:optimizer_scm",(void*)f_5560},
{"f_5558:optimizer_scm",(void*)f_5558},
{"f_5518:optimizer_scm",(void*)f_5518},
{"f_5508:optimizer_scm",(void*)f_5508},
{"f_4820:optimizer_scm",(void*)f_4820},
{"f_4829:optimizer_scm",(void*)f_4829},
{"f_5060:optimizer_scm",(void*)f_5060},
{"f_5076:optimizer_scm",(void*)f_5076},
{"f_5450:optimizer_scm",(void*)f_5450},
{"f_5487:optimizer_scm",(void*)f_5487},
{"f_5464:optimizer_scm",(void*)f_5464},
{"f_5086:optimizer_scm",(void*)f_5086},
{"f_5158:optimizer_scm",(void*)f_5158},
{"f_5437:optimizer_scm",(void*)f_5437},
{"f_5336:optimizer_scm",(void*)f_5336},
{"f_5339:optimizer_scm",(void*)f_5339},
{"f_5351:optimizer_scm",(void*)f_5351},
{"f_5362:optimizer_scm",(void*)f_5362},
{"f_5401:optimizer_scm",(void*)f_5401},
{"f_5393:optimizer_scm",(void*)f_5393},
{"f_5381:optimizer_scm",(void*)f_5381},
{"f_5379:optimizer_scm",(void*)f_5379},
{"f_5356:optimizer_scm",(void*)f_5356},
{"f_5172:optimizer_scm",(void*)f_5172},
{"f_5217:optimizer_scm",(void*)f_5217},
{"f_5223:optimizer_scm",(void*)f_5223},
{"f_5229:optimizer_scm",(void*)f_5229},
{"f_5273:optimizer_scm",(void*)f_5273},
{"f_5249:optimizer_scm",(void*)f_5249},
{"f_5253:optimizer_scm",(void*)f_5253},
{"f_5211:optimizer_scm",(void*)f_5211},
{"f_5199:optimizer_scm",(void*)f_5199},
{"f_5197:optimizer_scm",(void*)f_5197},
{"f_5152:optimizer_scm",(void*)f_5152},
{"f_5089:optimizer_scm",(void*)f_5089},
{"f_5123:optimizer_scm",(void*)f_5123},
{"f_5092:optimizer_scm",(void*)f_5092},
{"f_5095:optimizer_scm",(void*)f_5095},
{"f_5098:optimizer_scm",(void*)f_5098},
{"f_5108:optimizer_scm",(void*)f_5108},
{"f_5036:optimizer_scm",(void*)f_5036},
{"f_4911:optimizer_scm",(void*)f_4911},
{"f_4932:optimizer_scm",(void*)f_4932},
{"f_5000:optimizer_scm",(void*)f_5000},
{"f_4992:optimizer_scm",(void*)f_4992},
{"f_4935:optimizer_scm",(void*)f_4935},
{"f_4971:optimizer_scm",(void*)f_4971},
{"f_4969:optimizer_scm",(void*)f_4969},
{"f_4944:optimizer_scm",(void*)f_4944},
{"f_4890:optimizer_scm",(void*)f_4890},
{"f_4843:optimizer_scm",(void*)f_4843},
{"f_4846:optimizer_scm",(void*)f_4846},
{"f_4874:optimizer_scm",(void*)f_4874},
{"f_4852:optimizer_scm",(void*)f_4852},
{"f_4859:optimizer_scm",(void*)f_4859},
{"f_4625:optimizer_scm",(void*)f_4625},
{"f_4724:optimizer_scm",(void*)f_4724},
{"f_4729:optimizer_scm",(void*)f_4729},
{"f_4736:optimizer_scm",(void*)f_4736},
{"f_4776:optimizer_scm",(void*)f_4776},
{"f_4756:optimizer_scm",(void*)f_4756},
{"f_4630:optimizer_scm",(void*)f_4630},
{"f_4648:optimizer_scm",(void*)f_4648},
{"f_4655:optimizer_scm",(void*)f_4655},
{"f_4702:optimizer_scm",(void*)f_4702},
{"f_4705:optimizer_scm",(void*)f_4705},
{"f_4695:optimizer_scm",(void*)f_4695},
{"f_4675:optimizer_scm",(void*)f_4675},
{"f_4636:optimizer_scm",(void*)f_4636},
{"f_4642:optimizer_scm",(void*)f_4642},
{"f_4559:optimizer_scm",(void*)f_4559},
{"f_4600:optimizer_scm",(void*)f_4600},
{"f_4607:optimizer_scm",(void*)f_4607},
{"f_4562:optimizer_scm",(void*)f_4562},
{"f_4590:optimizer_scm",(void*)f_4590},
{"f_4588:optimizer_scm",(void*)f_4588},
{"f_4478:optimizer_scm",(void*)f_4478},
{"f_4482:optimizer_scm",(void*)f_4482},
{"f_4494:optimizer_scm",(void*)f_4494},
{"f_4500:optimizer_scm",(void*)f_4500},
{"f_4520:optimizer_scm",(void*)f_4520},
{"f_4157:optimizer_scm",(void*)f_4157},
{"f_4171:optimizer_scm",(void*)f_4171},
{"f_4397:optimizer_scm",(void*)f_4397},
{"f_4403:optimizer_scm",(void*)f_4403},
{"f_4251:optimizer_scm",(void*)f_4251},
{"f_4343:optimizer_scm",(void*)f_4343},
{"f_4337:optimizer_scm",(void*)f_4337},
{"f_4262:optimizer_scm",(void*)f_4262},
{"f_4285:optimizer_scm",(void*)f_4285},
{"f_4323:optimizer_scm",(void*)f_4323},
{"f_4329:optimizer_scm",(void*)f_4329},
{"f_4291:optimizer_scm",(void*)f_4291},
{"f_4295:optimizer_scm",(void*)f_4295},
{"f_4298:optimizer_scm",(void*)f_4298},
{"f_4321:optimizer_scm",(void*)f_4321},
{"f_4268:optimizer_scm",(void*)f_4268},
{"f_4274:optimizer_scm",(void*)f_4274},
{"f_4278:optimizer_scm",(void*)f_4278},
{"f_4282:optimizer_scm",(void*)f_4282},
{"f_4257:optimizer_scm",(void*)f_4257},
{"f_4190:optimizer_scm",(void*)f_4190},
{"f_4026:optimizer_scm",(void*)f_4026},
{"f_4030:optimizer_scm",(void*)f_4030},
{"f_4041:optimizer_scm",(void*)f_4041},
{"f_4051:optimizer_scm",(void*)f_4051},
{"f_4100:optimizer_scm",(void*)f_4100},
{"f_4127:optimizer_scm",(void*)f_4127},
{"f_4098:optimizer_scm",(void*)f_4098},
{"f_4057:optimizer_scm",(void*)f_4057},
{"f_4063:optimizer_scm",(void*)f_4063},
{"f_4090:optimizer_scm",(void*)f_4090},
{"f_4033:optimizer_scm",(void*)f_4033},
{"f_4022:optimizer_scm",(void*)f_4022},
{"f_3992:optimizer_scm",(void*)f_3992},
{"f_3986:optimizer_scm",(void*)f_3986},
{"f_3708:optimizer_scm",(void*)f_3708},
{"f_3729:optimizer_scm",(void*)f_3729},
{"f_3773:optimizer_scm",(void*)f_3773},
{"f_3810:optimizer_scm",(void*)f_3810},
{"f_3877:optimizer_scm",(void*)f_3877},
{"f_3896:optimizer_scm",(void*)f_3896},
{"f_3907:optimizer_scm",(void*)f_3907},
{"f_3880:optimizer_scm",(void*)f_3880},
{"f_3850:optimizer_scm",(void*)f_3850},
{"f_3776:optimizer_scm",(void*)f_3776},
{"f_3782:optimizer_scm",(void*)f_3782},
{"f_3797:optimizer_scm",(void*)f_3797},
{"f_3790:optimizer_scm",(void*)f_3790},
{"f_3732:optimizer_scm",(void*)f_3732},
{"f_3735:optimizer_scm",(void*)f_3735},
{"f_3740:optimizer_scm",(void*)f_3740},
{"f_3746:optimizer_scm",(void*)f_3746},
{"f_3711:optimizer_scm",(void*)f_3711},
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
