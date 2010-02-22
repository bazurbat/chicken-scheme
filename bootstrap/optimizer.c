/* Generated from optimizer.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-09 21:38
   Version 4.2.12
   windows-mingw32-x86 [ manyargs ptables ]
   compiled 2010-01-08 on lenovo-1 (MINGW32_NT-6.0)
   command line: optimizer.scm -optimize-level 2 -include-path . -include-path ./ -inline -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file optimizer.c
   unit: optimizer
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[274];
static double C_possibly_force_alignment;


C_noret_decl(C_optimizer_toplevel)
C_externexport void C_ccall C_optimizer_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3752)
static void C_ccall f_3752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4191)
static void C_ccall f_4191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14726)
static void C_ccall f_14726(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_14734)
static void C_ccall f_14734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14739)
static void C_fcall f_14739(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14789)
static void C_ccall f_14789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14793)
static void C_ccall f_14793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14749)
static void C_ccall f_14749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14753)
static void C_fcall f_14753(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_14775)
static void C_ccall f_14775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6390)
static void C_ccall f_6390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13635)
static void C_ccall f_13635(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_13681)
static void C_ccall f_13681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13783)
static void C_ccall f_13783(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_13793)
static void C_fcall f_13793(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_14130)
static void C_ccall f_14130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14122)
static void C_ccall f_14122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13899)
static void C_ccall f_13899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13928)
static void C_fcall f_13928(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_14098)
static void C_ccall f_14098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14090)
static void C_ccall f_14090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13959)
static void C_fcall f_13959(C_word t0,C_word t1) C_noret;
C_noret_decl(f_14012)
static void C_ccall f_14012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_14002)
static void C_ccall f_14002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14010)
static void C_ccall f_14010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14184)
static void C_ccall f_14184(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10) C_noret;
C_noret_decl(f_14197)
static void C_ccall f_14197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14239)
static void C_ccall f_14239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14223)
static void C_ccall f_14223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14227)
static void C_ccall f_14227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14219)
static void C_ccall f_14219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14405)
static void C_ccall f_14405(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13) C_noret;
C_noret_decl(f_14418)
static void C_ccall f_14418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14424)
static void C_ccall f_14424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14476)
static void C_ccall f_14476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14468)
static void C_ccall f_14468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14452)
static void C_ccall f_14452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14456)
static void C_ccall f_14456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_14460)
static void C_ccall f_14460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6393)
static void C_ccall f_6393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13276)
static void C_ccall f_13276(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_13298)
static void C_ccall f_13298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13378)
static void C_ccall f_13378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13336)
static void C_ccall f_13336(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13370)
static void C_ccall f_13370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13374)
static void C_ccall f_13374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13362)
static void C_ccall f_13362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13334)
static void C_ccall f_13334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13472)
static void C_ccall f_13472(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9) C_noret;
C_noret_decl(f_13492)
static void C_ccall f_13492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6396)
static void C_ccall f_6396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6885)
static void C_ccall f_6885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10651)
static void C_ccall f_10651(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13149)
static void C_ccall f_13149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13152)
static void C_ccall f_13152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13155)
static void C_ccall f_13155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13158)
static void C_ccall f_13158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13161)
static void C_ccall f_13161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13164)
static void C_ccall f_13164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13247)
static void C_ccall f_13247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13167)
static void C_ccall f_13167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13170)
static void C_ccall f_13170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13173)
static void C_ccall f_13173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13241)
static void C_ccall f_13241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13176)
static void C_ccall f_13176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13179)
static void C_ccall f_13179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13238)
static void C_ccall f_13238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11428)
static void C_fcall f_11428(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11446)
static void C_ccall f_11446(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11452)
static void C_ccall f_11452(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11432)
static void C_ccall f_11432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13182)
static void C_ccall f_13182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13230)
static void C_ccall f_13230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13228)
static void C_ccall f_13228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13185)
static void C_ccall f_13185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13188)
static void C_ccall f_13188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13191)
static void C_ccall f_13191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13215)
static void C_ccall f_13215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13194)
static void C_ccall f_13194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13197)
static void C_ccall f_13197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13200)
static void C_ccall f_13200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13203)
static void C_ccall f_13203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13206)
static void C_ccall f_13206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13209)
static void C_ccall f_13209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12908)
static void C_fcall f_12908(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12914)
static void C_fcall f_12914(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13125)
static void C_fcall f_13125(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13135)
static void C_ccall f_13135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13099)
static void C_fcall f_13099(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13109)
static void C_ccall f_13109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13069)
static void C_ccall f_13069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13078)
static void C_ccall f_13078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13081)
static void C_ccall f_13081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13039)
static void C_fcall f_13039(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13049)
static void C_ccall f_13049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12948)
static void C_ccall f_12948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12953)
static void C_fcall f_12953(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12991)
static void C_ccall f_12991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12976)
static void C_ccall f_12976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12987)
static void C_ccall f_12987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12983)
static void C_ccall f_12983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12710)
static void C_fcall f_12710(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12716)
static void C_fcall f_12716(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12885)
static void C_fcall f_12885(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12895)
static void C_ccall f_12895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12825)
static void C_fcall f_12825(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12854)
static void C_ccall f_12854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12815)
static void C_ccall f_12815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12811)
static void C_ccall f_12811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12753)
static void C_ccall f_12753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12767)
static void C_fcall f_12767(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12777)
static void C_ccall f_12777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12182)
static void C_fcall f_12182(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12196)
static void C_ccall f_12196(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12203)
static void C_ccall f_12203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12206)
static void C_ccall f_12206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12215)
static void C_ccall f_12215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12367)
static void C_fcall f_12367(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12396)
static void C_ccall f_12396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12222)
static void C_ccall f_12222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12318)
static void C_fcall f_12318(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12351)
static void C_ccall f_12351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12331)
static void C_fcall f_12331(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12225)
static void C_ccall f_12225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12446)
static void C_fcall f_12446(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12687)
static void C_fcall f_12687(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12697)
static void C_ccall f_12697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12628)
static void C_ccall f_12628(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12649)
static void C_fcall f_12649(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12647)
static void C_ccall f_12647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12643)
static void C_ccall f_12643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12575)
static void C_ccall f_12575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12580)
static void C_fcall f_12580(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12590)
static void C_ccall f_12590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12512)
static void C_fcall f_12512(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12510)
static void C_ccall f_12510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12480)
static void C_ccall f_12480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12485)
static void C_fcall f_12485(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12495)
static void C_ccall f_12495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12431)
static C_word C_fcall f_12431(C_word t0,C_word t1);
C_noret_decl(f_12228)
static void C_ccall f_12228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12303)
static void C_ccall f_12303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12291)
static void C_ccall f_12291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12287)
static void C_ccall f_12287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12194)
static void C_ccall f_12194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11773)
static void C_fcall f_11773(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12134)
static void C_fcall f_12134(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11899)
static void C_ccall f_11899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12111)
static void C_fcall f_12111(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12121)
static void C_ccall f_12121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12032)
static void C_ccall f_12032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12037)
static void C_fcall f_12037(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12105)
static void C_ccall f_12105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12064)
static void C_fcall f_12064(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12102)
static void C_ccall f_12102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11782)
static void C_fcall f_11782(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11875)
static void C_fcall f_11875(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11885)
static void C_ccall f_11885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11858)
static void C_ccall f_11858(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11863)
static void C_ccall f_11863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11817)
static void C_ccall f_11817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11822)
static void C_fcall f_11822(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11832)
static void C_ccall f_11832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11780)
static void C_ccall f_11780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12094)
static void C_ccall f_12094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12080)
static void C_ccall f_12080(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12078)
static void C_ccall f_12078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11901)
static void C_fcall f_11901(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12025)
static void C_ccall f_12025(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12023)
static void C_ccall f_12023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11989)
static void C_fcall f_11989(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12008)
static void C_ccall f_12008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11997)
static void C_fcall f_11997(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11921)
static void C_ccall f_11921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11945)
static void C_fcall f_11945(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11972)
static C_word C_fcall f_11972(C_word t0,C_word t1);
C_noret_decl(f_11943)
static void C_ccall f_11943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11939)
static void C_ccall f_11939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11931)
static void C_ccall f_11931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11462)
static void C_fcall f_11462(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11468)
static void C_fcall f_11468(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11502)
static void C_fcall f_11502(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11724)
static void C_fcall f_11724(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11739)
static void C_ccall f_11739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11732)
static void C_fcall f_11732(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11621)
static void C_ccall f_11621(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11637)
static void C_fcall f_11637(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11690)
static void C_ccall f_11690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11694)
static void C_ccall f_11694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11657)
static void C_ccall f_11657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11666)
static void C_fcall f_11666(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11676)
static void C_ccall f_11676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11588)
static void C_ccall f_11588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11593)
static void C_fcall f_11593(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11608)
static void C_ccall f_11608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11601)
static void C_fcall f_11601(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11564)
static void C_ccall f_11564(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11576)
static void C_ccall f_11576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11513)
static void C_fcall f_11513(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11534)
static void C_ccall f_11534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11531)
static void C_ccall f_11531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11466)
static void C_ccall f_11466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11181)
static void C_fcall f_11181(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11187)
static void C_fcall f_11187(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11221)
static void C_fcall f_11221(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11323)
static void C_fcall f_11323(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11338)
static void C_ccall f_11338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11331)
static void C_fcall f_11331(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11314)
static void C_ccall f_11314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11280)
static void C_fcall f_11280(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11289)
static void C_ccall f_11289(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_11301)
static void C_ccall f_11301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11232)
static void C_fcall f_11232(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11253)
static void C_ccall f_11253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11250)
static void C_ccall f_11250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11185)
static void C_ccall f_11185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11048)
static void C_fcall f_11048(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11054)
static void C_ccall f_11054(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11098)
static void C_ccall f_11098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11103)
static void C_fcall f_11103(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11110)
static void C_ccall f_11110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11171)
static void C_ccall f_11171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11167)
static void C_ccall f_11167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11125)
static void C_fcall f_11125(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11159)
static void C_ccall f_11159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11152)
static void C_fcall f_11152(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11123)
static void C_ccall f_11123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11088)
static void C_ccall f_11088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11066)
static void C_ccall f_11066(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11073)
static void C_ccall f_11073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10760)
static void C_fcall f_10760(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10973)
static void C_fcall f_10973(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11035)
static void C_ccall f_11035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10981)
static void C_fcall f_10981(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11006)
static void C_ccall f_11006(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10996)
static void C_ccall f_10996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11000)
static void C_ccall f_11000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10971)
static void C_ccall f_10971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10763)
static void C_fcall f_10763(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10939)
static void C_fcall f_10939(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10954)
static void C_ccall f_10954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10947)
static void C_fcall f_10947(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10922)
static void C_ccall f_10922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_10934)
static void C_ccall f_10934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10868)
static void C_fcall f_10868(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10892)
static void C_ccall f_10892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10886)
static void C_ccall f_10886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10850)
static void C_ccall f_10850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10803)
static void C_fcall f_10803(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10806)
static void C_fcall f_10806(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10811)
static void C_fcall f_10811(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10826)
static void C_ccall f_10826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10819)
static void C_fcall f_10819(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10654)
static void C_fcall f_10654(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10660)
static void C_ccall f_10660(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10691)
static void C_fcall f_10691(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10695)
static void C_ccall f_10695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10699)
static void C_ccall f_10699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10658)
static void C_ccall f_10658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9266)
static void C_ccall f_9266(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10646)
static void C_ccall f_10646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10649)
static void C_ccall f_10649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9922)
static void C_fcall f_9922(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_10636)
static void C_ccall f_10636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10634)
static void C_ccall f_10634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9926)
static void C_ccall f_9926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9941)
static void C_ccall f_9941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9950)
static void C_fcall f_9950(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9956)
static void C_ccall f_9956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9959)
static void C_ccall f_9959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9965)
static void C_ccall f_9965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10248)
static void C_fcall f_10248(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10563)
static void C_fcall f_10563(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10573)
static void C_ccall f_10573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10537)
static void C_fcall f_10537(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10547)
static void C_ccall f_10547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10522)
static void C_ccall f_10522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10525)
static void C_ccall f_10525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10470)
static void C_ccall f_10470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10473)
static void C_ccall f_10473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10317)
static void C_ccall f_10317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10364)
static void C_fcall f_10364(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10374)
static void C_ccall f_10374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10377)
static void C_ccall f_10377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10411)
static void C_ccall f_10411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10380)
static void C_ccall f_10380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10383)
static void C_ccall f_10383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10326)
static void C_ccall f_10326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10329)
static void C_ccall f_10329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10332)
static void C_ccall f_10332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9968)
static void C_ccall f_9968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10230)
static void C_ccall f_10230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10139)
static void C_ccall f_10139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10141)
static void C_fcall f_10141(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10217)
static void C_ccall f_10217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10149)
static void C_fcall f_10149(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10164)
static void C_ccall f_10164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9971)
static void C_ccall f_9971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9988)
static void C_ccall f_9988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10059)
static void C_ccall f_10059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9991)
static void C_ccall f_9991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9994)
static void C_ccall f_9994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9999)
static void C_fcall f_9999(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10043)
static void C_ccall f_10043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10014)
static void C_ccall f_10014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9468)
static void C_fcall f_9468(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_9913)
static void C_ccall f_9913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9920)
static void C_ccall f_9920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9471)
static void C_fcall f_9471(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9900)
static void C_ccall f_9900(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9876)
static void C_ccall f_9876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9887)
static void C_ccall f_9887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9843)
static void C_ccall f_9843(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9734)
static void C_fcall f_9734(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9739)
static void C_ccall f_9739(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9681)
static void C_ccall f_9681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9687)
static void C_fcall f_9687(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9692)
static void C_ccall f_9692(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9640)
static void C_ccall f_9640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9646)
static void C_fcall f_9646(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9651)
static void C_ccall f_9651(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9624)
static void C_ccall f_9624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9620)
static void C_ccall f_9620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9590)
static void C_ccall f_9590(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9553)
static void C_ccall f_9553(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9569)
static void C_ccall f_9569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9535)
static void C_ccall f_9535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9269)
static void C_fcall f_9269(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9440)
static void C_fcall f_9440(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9455)
static void C_ccall f_9455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9448)
static void C_fcall f_9448(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9420)
static void C_ccall f_9420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9394)
static void C_ccall f_9394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9340)
static void C_ccall f_9340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9346)
static void C_ccall f_9346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9352)
static void C_ccall f_9352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9309)
static void C_ccall f_9309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6907)
static void C_ccall f_6907(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_9133)
static void C_ccall f_9133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9162)
static void C_ccall f_9162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9174)
static void C_ccall f_9174(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9188)
static void C_fcall f_9188(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9237)
static void C_ccall f_9237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6932)
static void C_fcall f_6932(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9208)
static void C_ccall f_9208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9212)
static void C_ccall f_9212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9182)
static void C_ccall f_9182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9168)
static void C_ccall f_9168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9166)
static void C_ccall f_9166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9158)
static void C_ccall f_9158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9053)
static void C_ccall f_9053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9097)
static void C_ccall f_9097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8858)
static void C_ccall f_8858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8864)
static void C_ccall f_8864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8980)
static void C_ccall f_8980(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8873)
static void C_ccall f_8873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8935)
static void C_ccall f_8935(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8933)
static void C_ccall f_8933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8895)
static void C_ccall f_8895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8773)
static void C_ccall f_8773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8814)
static void C_ccall f_8814(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8826)
static void C_ccall f_8826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8804)
static void C_ccall f_8804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8802)
static void C_ccall f_8802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8591)
static void C_ccall f_8591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8697)
static void C_ccall f_8697(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8600)
static void C_ccall f_8600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8671)
static void C_ccall f_8671(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8669)
static void C_ccall f_8669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8622)
static void C_ccall f_8622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8551)
static void C_ccall f_8551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8567)
static void C_ccall f_8567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8472)
static void C_ccall f_8472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8501)
static void C_fcall f_8501(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8382)
static void C_ccall f_8382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8416)
static void C_fcall f_8416(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8277)
static void C_ccall f_8277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8303)
static void C_ccall f_8303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8299)
static void C_ccall f_8299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8183)
static void C_ccall f_8183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8106)
static void C_ccall f_8106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8130)
static void C_fcall f_8130(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8134)
static void C_ccall f_8134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8018)
static void C_ccall f_8018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8074)
static void C_ccall f_8074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8070)
static void C_ccall f_8070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7947)
static void C_ccall f_7947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7959)
static void C_fcall f_7959(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7979)
static void C_ccall f_7979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7975)
static void C_ccall f_7975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7848)
static void C_ccall f_7848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7877)
static void C_ccall f_7877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7885)
static void C_ccall f_7885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7889)
static void C_ccall f_7889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7605)
static void C_ccall f_7605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7633)
static void C_fcall f_7633(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7636)
static void C_fcall f_7636(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7749)
static void C_fcall f_7749(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7783)
static void C_ccall f_7783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7639)
static void C_ccall f_7639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7714)
static void C_fcall f_7714(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7743)
static void C_ccall f_7743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7642)
static void C_ccall f_7642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7686)
static void C_ccall f_7686(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7684)
static void C_ccall f_7684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7647)
static void C_ccall f_7647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7627)
static void C_ccall f_7627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7579)
static void C_ccall f_7579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7506)
static void C_ccall f_7506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7543)
static void C_ccall f_7543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7535)
static void C_ccall f_7535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7417)
static void C_ccall f_7417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7312)
static void C_ccall f_7312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7367)
static void C_ccall f_7367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7244)
static void C_ccall f_7244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7264)
static void C_ccall f_7264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7272)
static void C_ccall f_7272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7195)
static void C_ccall f_7195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7211)
static void C_ccall f_7211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7120)
static void C_ccall f_7120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6969)
static void C_ccall f_6969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7050)
static void C_ccall f_7050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6972)
static void C_fcall f_6972(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6887)
static void C_ccall f_6887(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6887)
static void C_ccall f_6887r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6891)
static void C_ccall f_6891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6901)
static void C_ccall f_6901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6398)
static void C_ccall f_6398(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6834)
static void C_fcall f_6834(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6867)
static void C_ccall f_6867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6847)
static void C_fcall f_6847(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6402)
static void C_ccall f_6402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6787)
static void C_fcall f_6787(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6807)
static void C_ccall f_6807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6795)
static void C_fcall f_6795(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6804)
static void C_ccall f_6804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6800)
static void C_ccall f_6800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6449)
static void C_ccall f_6449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6707)
static void C_fcall f_6707(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6774)
static void C_ccall f_6774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6715)
static void C_fcall f_6715(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6747)
static void C_ccall f_6747(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6760)
static void C_ccall f_6760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6725)
static void C_ccall f_6725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6741)
static void C_ccall f_6741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6729)
static void C_ccall f_6729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6733)
static void C_ccall f_6733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6452)
static void C_ccall f_6452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6626)
static void C_fcall f_6626(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6694)
static void C_ccall f_6694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6634)
static void C_fcall f_6634(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6677)
static void C_ccall f_6677(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6683)
static void C_ccall f_6683(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6641)
static void C_ccall f_6641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6651)
static void C_ccall f_6651(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6664)
static void C_ccall f_6664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6649)
static void C_ccall f_6649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6645)
static void C_ccall f_6645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6455)
static void C_ccall f_6455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6458)
static void C_ccall f_6458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6478)
static void C_ccall f_6478(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6491)
static void C_fcall f_6491(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6552)
static void C_ccall f_6552(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6598)
static void C_ccall f_6598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6550)
static void C_ccall f_6550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6520)
static void C_ccall f_6520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6461)
static void C_ccall f_6461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6470)
static void C_ccall f_6470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6404)
static void C_fcall f_6404(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6410)
static void C_fcall f_6410(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6434)
static void C_ccall f_6434(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6383)
static void C_ccall f_6383(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6383)
static void C_ccall f_6383r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6064)
static void C_ccall f_6064(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6078)
static void C_ccall f_6078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6098)
static void C_ccall f_6098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6105)
static void C_ccall f_6105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6110)
static void C_fcall f_6110(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6370)
static void C_ccall f_6370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6118)
static void C_fcall f_6118(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6354)
static void C_ccall f_6354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6136)
static void C_ccall f_6136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6139)
static void C_ccall f_6139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6145)
static void C_fcall f_6145(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6165)
static void C_fcall f_6165(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6171)
static void C_ccall f_6171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6177)
static void C_fcall f_6177(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6186)
static void C_fcall f_6186(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6193)
static void C_ccall f_6193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6196)
static void C_ccall f_6196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6214)
static void C_ccall f_6214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6199)
static void C_ccall f_6199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6081)
static void C_ccall f_6081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6084)
static void C_ccall f_6084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6071)
static void C_fcall f_6071(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6067)
static C_word C_fcall f_6067(C_word t0);
C_noret_decl(f_4194)
static void C_ccall f_4194(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5946)
static void C_ccall f_5946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5952)
static void C_ccall f_5952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5956)
static void C_ccall f_5956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5959)
static void C_ccall f_5959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6000)
static void C_fcall f_6000(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6012)
static void C_ccall f_6012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6039)
static void C_ccall f_6039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5962)
static void C_ccall f_5962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5965)
static void C_ccall f_5965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5968)
static void C_ccall f_5968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5971)
static void C_ccall f_5971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5916)
static void C_fcall f_5916(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5936)
static void C_ccall f_5936(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5920)
static void C_ccall f_5920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5926)
static void C_ccall f_5926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4649)
static void C_fcall f_4649(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5806)
static void C_ccall f_5806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5809)
static void C_ccall f_5809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5908)
static void C_ccall f_5908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5904)
static void C_ccall f_5904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5866)
static void C_fcall f_5866(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5897)
static void C_ccall f_5897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5893)
static void C_ccall f_5893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5885)
static void C_ccall f_5885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5826)
static void C_fcall f_5826(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5856)
static void C_ccall f_5856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5832)
static void C_ccall f_5832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5780)
static void C_ccall f_5780(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5778)
static void C_ccall f_5778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5738)
static void C_ccall f_5738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5728)
static void C_ccall f_5728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5040)
static void C_ccall f_5040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5049)
static void C_ccall f_5049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5280)
static void C_fcall f_5280(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5296)
static void C_ccall f_5296(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5670)
static void C_ccall f_5670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5707)
static void C_ccall f_5707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5684)
static void C_ccall f_5684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5306)
static void C_fcall f_5306(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5378)
static void C_ccall f_5378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5657)
static void C_ccall f_5657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5556)
static void C_fcall f_5556(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5559)
static void C_ccall f_5559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5571)
static void C_ccall f_5571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5582)
static void C_ccall f_5582(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5621)
static void C_ccall f_5621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5613)
static void C_ccall f_5613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5601)
static void C_ccall f_5601(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5599)
static void C_ccall f_5599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5576)
static void C_ccall f_5576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5392)
static void C_fcall f_5392(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5437)
static void C_ccall f_5437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5443)
static void C_ccall f_5443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5449)
static void C_ccall f_5449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5493)
static void C_ccall f_5493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5469)
static void C_ccall f_5469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5473)
static void C_ccall f_5473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5431)
static void C_ccall f_5431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5419)
static void C_ccall f_5419(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5417)
static void C_ccall f_5417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5372)
static void C_ccall f_5372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5309)
static void C_ccall f_5309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5343)
static void C_ccall f_5343(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5312)
static void C_ccall f_5312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5315)
static void C_ccall f_5315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5318)
static void C_ccall f_5318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5328)
static void C_ccall f_5328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5131)
static void C_ccall f_5131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5152)
static void C_ccall f_5152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5220)
static void C_ccall f_5220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5212)
static void C_ccall f_5212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5155)
static void C_fcall f_5155(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5191)
static void C_ccall f_5191(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5189)
static void C_ccall f_5189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5164)
static void C_ccall f_5164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5110)
static void C_fcall f_5110(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5063)
static void C_ccall f_5063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5066)
static void C_ccall f_5066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5094)
static void C_ccall f_5094(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5079)
static void C_ccall f_5079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4845)
static void C_ccall f_4845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4949)
static void C_ccall f_4949(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4996)
static void C_ccall f_4996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4976)
static void C_ccall f_4976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4850)
static void C_ccall f_4850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4868)
static void C_ccall f_4868(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4875)
static void C_ccall f_4875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4922)
static void C_ccall f_4922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4925)
static void C_ccall f_4925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4915)
static void C_ccall f_4915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4895)
static void C_ccall f_4895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4856)
static void C_ccall f_4856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4862)
static void C_ccall f_4862(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4779)
static void C_ccall f_4779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4820)
static void C_ccall f_4820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4827)
static void C_ccall f_4827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4782)
static void C_fcall f_4782(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4810)
static void C_ccall f_4810(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4808)
static void C_ccall f_4808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4689)
static void C_fcall f_4689(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4693)
static void C_ccall f_4693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4705)
static void C_ccall f_4705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4734)
static void C_ccall f_4734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4731)
static void C_ccall f_4731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4368)
static void C_fcall f_4368(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4382)
static void C_ccall f_4382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4608)
static void C_ccall f_4608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4614)
static void C_ccall f_4614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4462)
static void C_ccall f_4462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4554)
static void C_fcall f_4554(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4548)
static void C_ccall f_4548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4473)
static void C_ccall f_4473(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4496)
static void C_ccall f_4496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4534)
static void C_ccall f_4534(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4534)
static void C_ccall f_4534r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4540)
static void C_ccall f_4540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4502)
static void C_ccall f_4502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4506)
static void C_ccall f_4506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4509)
static void C_ccall f_4509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4532)
static void C_ccall f_4532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4479)
static void C_ccall f_4479(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4485)
static void C_ccall f_4485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4489)
static void C_fcall f_4489(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4493)
static void C_ccall f_4493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4468)
static void C_ccall f_4468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4401)
static void C_ccall f_4401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4237)
static void C_fcall f_4237(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4241)
static void C_ccall f_4241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4252)
static void C_ccall f_4252(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4311)
static void C_fcall f_4311(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4338)
static C_word C_fcall f_4338(C_word t0,C_word t1);
C_noret_decl(f_4309)
static void C_ccall f_4309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4274)
static void C_ccall f_4274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4244)
static void C_ccall f_4244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4233)
static C_word C_fcall f_4233(C_word t0);
C_noret_decl(f_4203)
static void C_ccall f_4203(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4197)
static void C_fcall f_4197(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3757)
static void C_ccall f_3757(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4187)
static void C_ccall f_4187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4141)
static void C_ccall f_4141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4146)
static void C_ccall f_4146(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4152)
static void C_ccall f_4152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3829)
static void C_fcall f_3829(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3910)
static void C_fcall f_3910(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3960)
static void C_fcall f_3960(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3984)
static void C_ccall f_3984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3987)
static void C_ccall f_3987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4089)
static void C_fcall f_4089(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4092)
static void C_ccall f_4092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3990)
static void C_ccall f_3990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4008)
static void C_fcall f_4008(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4027)
static void C_ccall f_4027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4042)
static void C_ccall f_4042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4020)
static void C_ccall f_4020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3993)
static void C_ccall f_3993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3996)
static void C_ccall f_3996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3936)
static void C_ccall f_3936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3947)
static void C_ccall f_3947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3883)
static void C_fcall f_3883(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3866)
static void C_fcall f_3866(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3872)
static void C_ccall f_3872(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3870)
static void C_ccall f_3870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3795)
static void C_fcall f_3795(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3801)
static void C_fcall f_3801(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3809)
static void C_fcall f_3809(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3790)
static C_word C_fcall f_3790(C_word t0);
C_noret_decl(f_3783)
static void C_fcall f_3783(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3788)
static void C_ccall f_3788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3760)
static void C_fcall f_3760(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3767)
static void C_fcall f_3767(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_14739)
static void C_fcall trf_14739(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14739(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_14739(t0,t1,t2);}

C_noret_decl(trf_14753)
static void C_fcall trf_14753(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_14753(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_14753(t0,t1,t2);}

C_noret_decl(trf_13793)
static void C_fcall trf_13793(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13793(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_13793(t0,t1,t2,t3);}

C_noret_decl(trf_13928)
static void C_fcall trf_13928(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13928(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_13928(t0,t1,t2,t3,t4);}

C_noret_decl(trf_13959)
static void C_fcall trf_13959(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13959(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13959(t0,t1);}

C_noret_decl(trf_11428)
static void C_fcall trf_11428(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11428(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11428(t0,t1,t2,t3);}

C_noret_decl(trf_12908)
static void C_fcall trf_12908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12908(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12908(t0,t1,t2);}

C_noret_decl(trf_12914)
static void C_fcall trf_12914(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12914(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12914(t0,t1,t2);}

C_noret_decl(trf_13125)
static void C_fcall trf_13125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13125(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_13125(t0,t1,t2);}

C_noret_decl(trf_13099)
static void C_fcall trf_13099(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13099(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_13099(t0,t1,t2);}

C_noret_decl(trf_13039)
static void C_fcall trf_13039(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13039(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_13039(t0,t1,t2);}

C_noret_decl(trf_12953)
static void C_fcall trf_12953(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12953(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12953(t0,t1,t2,t3);}

C_noret_decl(trf_12710)
static void C_fcall trf_12710(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12710(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12710(t0,t1,t2);}

C_noret_decl(trf_12716)
static void C_fcall trf_12716(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12716(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12716(t0,t1,t2);}

C_noret_decl(trf_12885)
static void C_fcall trf_12885(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12885(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12885(t0,t1,t2);}

C_noret_decl(trf_12825)
static void C_fcall trf_12825(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12825(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12825(t0,t1,t2);}

C_noret_decl(trf_12767)
static void C_fcall trf_12767(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12767(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12767(t0,t1,t2);}

C_noret_decl(trf_12182)
static void C_fcall trf_12182(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12182(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12182(t0,t1,t2,t3);}

C_noret_decl(trf_12367)
static void C_fcall trf_12367(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12367(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12367(t0,t1,t2);}

C_noret_decl(trf_12318)
static void C_fcall trf_12318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12318(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12318(t0,t1,t2,t3);}

C_noret_decl(trf_12331)
static void C_fcall trf_12331(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12331(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12331(t0,t1);}

C_noret_decl(trf_12446)
static void C_fcall trf_12446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12446(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12446(t0,t1,t2);}

C_noret_decl(trf_12687)
static void C_fcall trf_12687(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12687(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12687(t0,t1,t2);}

C_noret_decl(trf_12649)
static void C_fcall trf_12649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12649(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12649(t0,t1,t2);}

C_noret_decl(trf_12580)
static void C_fcall trf_12580(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12580(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12580(t0,t1,t2);}

C_noret_decl(trf_12512)
static void C_fcall trf_12512(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12512(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12512(t0,t1,t2);}

C_noret_decl(trf_12485)
static void C_fcall trf_12485(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12485(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12485(t0,t1,t2);}

C_noret_decl(trf_11773)
static void C_fcall trf_11773(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11773(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11773(t0,t1,t2);}

C_noret_decl(trf_12134)
static void C_fcall trf_12134(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12134(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12134(t0,t1,t2);}

C_noret_decl(trf_12111)
static void C_fcall trf_12111(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12111(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12111(t0,t1,t2);}

C_noret_decl(trf_12037)
static void C_fcall trf_12037(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12037(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12037(t0,t1,t2);}

C_noret_decl(trf_12064)
static void C_fcall trf_12064(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12064(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12064(t0,t1,t2);}

C_noret_decl(trf_11782)
static void C_fcall trf_11782(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11782(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11782(t0,t1,t2);}

C_noret_decl(trf_11875)
static void C_fcall trf_11875(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11875(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11875(t0,t1,t2);}

C_noret_decl(trf_11822)
static void C_fcall trf_11822(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11822(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11822(t0,t1,t2);}

C_noret_decl(trf_11901)
static void C_fcall trf_11901(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11901(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11901(t0,t1,t2);}

C_noret_decl(trf_11989)
static void C_fcall trf_11989(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11989(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11989(t0,t1,t2);}

C_noret_decl(trf_11997)
static void C_fcall trf_11997(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11997(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11997(t0,t1,t2);}

C_noret_decl(trf_11945)
static void C_fcall trf_11945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11945(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11945(t0,t1,t2);}

C_noret_decl(trf_11462)
static void C_fcall trf_11462(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11462(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11462(t0,t1,t2);}

C_noret_decl(trf_11468)
static void C_fcall trf_11468(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11468(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11468(t0,t1,t2,t3);}

C_noret_decl(trf_11502)
static void C_fcall trf_11502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11502(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11502(t0,t1);}

C_noret_decl(trf_11724)
static void C_fcall trf_11724(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11724(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11724(t0,t1,t2);}

C_noret_decl(trf_11732)
static void C_fcall trf_11732(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11732(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11732(t0,t1,t2);}

C_noret_decl(trf_11637)
static void C_fcall trf_11637(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11637(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11637(t0,t1,t2);}

C_noret_decl(trf_11666)
static void C_fcall trf_11666(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11666(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11666(t0,t1,t2);}

C_noret_decl(trf_11593)
static void C_fcall trf_11593(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11593(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11593(t0,t1,t2);}

C_noret_decl(trf_11601)
static void C_fcall trf_11601(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11601(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11601(t0,t1,t2);}

C_noret_decl(trf_11513)
static void C_fcall trf_11513(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11513(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11513(t0,t1,t2,t3);}

C_noret_decl(trf_11181)
static void C_fcall trf_11181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11181(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11181(t0,t1,t2);}

C_noret_decl(trf_11187)
static void C_fcall trf_11187(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11187(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11187(t0,t1,t2,t3);}

C_noret_decl(trf_11221)
static void C_fcall trf_11221(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11221(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11221(t0,t1);}

C_noret_decl(trf_11323)
static void C_fcall trf_11323(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11323(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11323(t0,t1,t2);}

C_noret_decl(trf_11331)
static void C_fcall trf_11331(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11331(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11331(t0,t1,t2);}

C_noret_decl(trf_11280)
static void C_fcall trf_11280(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11280(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11280(t0,t1);}

C_noret_decl(trf_11232)
static void C_fcall trf_11232(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11232(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11232(t0,t1,t2,t3);}

C_noret_decl(trf_11048)
static void C_fcall trf_11048(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11048(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11048(t0,t1,t2,t3);}

C_noret_decl(trf_11103)
static void C_fcall trf_11103(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11103(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_11103(t0,t1,t2,t3);}

C_noret_decl(trf_11125)
static void C_fcall trf_11125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11125(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11125(t0,t1,t2);}

C_noret_decl(trf_11152)
static void C_fcall trf_11152(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11152(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11152(t0,t1,t2);}

C_noret_decl(trf_10760)
static void C_fcall trf_10760(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10760(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10760(t0,t1,t2);}

C_noret_decl(trf_10973)
static void C_fcall trf_10973(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10973(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10973(t0,t1,t2);}

C_noret_decl(trf_10981)
static void C_fcall trf_10981(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10981(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10981(t0,t1,t2);}

C_noret_decl(trf_10763)
static void C_fcall trf_10763(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10763(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10763(t0,t1,t2,t3);}

C_noret_decl(trf_10939)
static void C_fcall trf_10939(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10939(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10939(t0,t1,t2);}

C_noret_decl(trf_10947)
static void C_fcall trf_10947(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10947(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10947(t0,t1,t2);}

C_noret_decl(trf_10868)
static void C_fcall trf_10868(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10868(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_10868(t0,t1,t2,t3);}

C_noret_decl(trf_10803)
static void C_fcall trf_10803(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10803(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10803(t0,t1);}

C_noret_decl(trf_10806)
static void C_fcall trf_10806(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10806(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10806(t0,t1);}

C_noret_decl(trf_10811)
static void C_fcall trf_10811(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10811(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10811(t0,t1,t2);}

C_noret_decl(trf_10819)
static void C_fcall trf_10819(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10819(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10819(t0,t1,t2);}

C_noret_decl(trf_10654)
static void C_fcall trf_10654(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10654(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10654(t0,t1);}

C_noret_decl(trf_10691)
static void C_fcall trf_10691(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10691(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10691(t0,t1);}

C_noret_decl(trf_9922)
static void C_fcall trf_9922(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9922(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_9922(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_9950)
static void C_fcall trf_9950(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9950(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9950(t0,t1);}

C_noret_decl(trf_10248)
static void C_fcall trf_10248(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10248(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10248(t0,t1,t2);}

C_noret_decl(trf_10563)
static void C_fcall trf_10563(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10563(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10563(t0,t1,t2);}

C_noret_decl(trf_10537)
static void C_fcall trf_10537(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10537(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10537(t0,t1,t2);}

C_noret_decl(trf_10364)
static void C_fcall trf_10364(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10364(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10364(t0,t1,t2);}

C_noret_decl(trf_10141)
static void C_fcall trf_10141(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10141(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10141(t0,t1,t2);}

C_noret_decl(trf_10149)
static void C_fcall trf_10149(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10149(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10149(t0,t1,t2);}

C_noret_decl(trf_9999)
static void C_fcall trf_9999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9999(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9999(t0,t1,t2);}

C_noret_decl(trf_9468)
static void C_fcall trf_9468(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9468(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_9468(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_9471)
static void C_fcall trf_9471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9471(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_9471(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_9734)
static void C_fcall trf_9734(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9734(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9734(t0,t1);}

C_noret_decl(trf_9687)
static void C_fcall trf_9687(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9687(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9687(t0,t1);}

C_noret_decl(trf_9646)
static void C_fcall trf_9646(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9646(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9646(t0,t1);}

C_noret_decl(trf_9269)
static void C_fcall trf_9269(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9269(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_9269(t0,t1,t2,t3,t4);}

C_noret_decl(trf_9440)
static void C_fcall trf_9440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9440(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9440(t0,t1,t2);}

C_noret_decl(trf_9448)
static void C_fcall trf_9448(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9448(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9448(t0,t1,t2);}

C_noret_decl(trf_9188)
static void C_fcall trf_9188(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9188(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9188(t0,t1,t2,t3);}

C_noret_decl(trf_6932)
static void C_fcall trf_6932(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6932(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6932(t0,t1);}

C_noret_decl(trf_8501)
static void C_fcall trf_8501(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8501(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8501(t0,t1);}

C_noret_decl(trf_8416)
static void C_fcall trf_8416(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8416(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8416(t0,t1);}

C_noret_decl(trf_8130)
static void C_fcall trf_8130(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8130(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8130(t0,t1);}

C_noret_decl(trf_7959)
static void C_fcall trf_7959(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7959(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7959(t0,t1);}

C_noret_decl(trf_7633)
static void C_fcall trf_7633(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7633(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7633(t0,t1);}

C_noret_decl(trf_7636)
static void C_fcall trf_7636(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7636(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7636(t0,t1);}

C_noret_decl(trf_7749)
static void C_fcall trf_7749(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7749(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7749(t0,t1,t2);}

C_noret_decl(trf_7714)
static void C_fcall trf_7714(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7714(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7714(t0,t1,t2);}

C_noret_decl(trf_6972)
static void C_fcall trf_6972(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6972(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6972(t0,t1);}

C_noret_decl(trf_6834)
static void C_fcall trf_6834(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6834(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6834(t0,t1,t2,t3);}

C_noret_decl(trf_6847)
static void C_fcall trf_6847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6847(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6847(t0,t1);}

C_noret_decl(trf_6787)
static void C_fcall trf_6787(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6787(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6787(t0,t1,t2,t3);}

C_noret_decl(trf_6795)
static void C_fcall trf_6795(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6795(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6795(t0,t1,t2,t3);}

C_noret_decl(trf_6707)
static void C_fcall trf_6707(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6707(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6707(t0,t1,t2);}

C_noret_decl(trf_6715)
static void C_fcall trf_6715(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6715(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6715(t0,t1,t2);}

C_noret_decl(trf_6626)
static void C_fcall trf_6626(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6626(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6626(t0,t1,t2);}

C_noret_decl(trf_6634)
static void C_fcall trf_6634(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6634(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6634(t0,t1,t2);}

C_noret_decl(trf_6491)
static void C_fcall trf_6491(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6491(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6491(t0,t1);}

C_noret_decl(trf_6404)
static void C_fcall trf_6404(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6404(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6404(t0,t1,t2,t3);}

C_noret_decl(trf_6410)
static void C_fcall trf_6410(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6410(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6410(t0,t1,t2,t3);}

C_noret_decl(trf_6110)
static void C_fcall trf_6110(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6110(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6110(t0,t1,t2);}

C_noret_decl(trf_6118)
static void C_fcall trf_6118(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6118(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6118(t0,t1,t2);}

C_noret_decl(trf_6145)
static void C_fcall trf_6145(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6145(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6145(t0,t1);}

C_noret_decl(trf_6165)
static void C_fcall trf_6165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6165(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6165(t0,t1);}

C_noret_decl(trf_6177)
static void C_fcall trf_6177(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6177(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6177(t0,t1);}

C_noret_decl(trf_6186)
static void C_fcall trf_6186(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6186(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6186(t0,t1);}

C_noret_decl(trf_6071)
static void C_fcall trf_6071(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6071(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6071(t0,t1,t2,t3);}

C_noret_decl(trf_6000)
static void C_fcall trf_6000(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6000(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6000(t0,t1,t2);}

C_noret_decl(trf_5916)
static void C_fcall trf_5916(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5916(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5916(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_4649)
static void C_fcall trf_4649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4649(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4649(t0,t1,t2,t3);}

C_noret_decl(trf_5866)
static void C_fcall trf_5866(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5866(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5866(t0,t1);}

C_noret_decl(trf_5826)
static void C_fcall trf_5826(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5826(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5826(t0,t1);}

C_noret_decl(trf_5280)
static void C_fcall trf_5280(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5280(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5280(t0,t1);}

C_noret_decl(trf_5306)
static void C_fcall trf_5306(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5306(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5306(t0,t1);}

C_noret_decl(trf_5556)
static void C_fcall trf_5556(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5556(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5556(t0,t1);}

C_noret_decl(trf_5392)
static void C_fcall trf_5392(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5392(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5392(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5155)
static void C_fcall trf_5155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5155(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5155(t0,t1);}

C_noret_decl(trf_5110)
static void C_fcall trf_5110(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5110(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5110(t0,t1);}

C_noret_decl(trf_4782)
static void C_fcall trf_4782(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4782(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4782(t0,t1);}

C_noret_decl(trf_4689)
static void C_fcall trf_4689(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4689(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4689(t0,t1,t2);}

C_noret_decl(trf_4368)
static void C_fcall trf_4368(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4368(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4368(t0,t1,t2,t3);}

C_noret_decl(trf_4554)
static void C_fcall trf_4554(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4554(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4554(t0,t1,t2);}

C_noret_decl(trf_4489)
static void C_fcall trf_4489(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4489(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4489(t0,t1);}

C_noret_decl(trf_4237)
static void C_fcall trf_4237(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4237(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4237(t0,t1,t2);}

C_noret_decl(trf_4311)
static void C_fcall trf_4311(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4311(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4311(t0,t1,t2);}

C_noret_decl(trf_4197)
static void C_fcall trf_4197(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4197(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4197(t0,t1,t2,t3);}

C_noret_decl(trf_3829)
static void C_fcall trf_3829(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3829(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3829(t0,t1,t2,t3);}

C_noret_decl(trf_3910)
static void C_fcall trf_3910(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3910(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3910(t0,t1);}

C_noret_decl(trf_3960)
static void C_fcall trf_3960(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3960(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3960(t0,t1);}

C_noret_decl(trf_4089)
static void C_fcall trf_4089(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4089(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4089(t0,t1);}

C_noret_decl(trf_4008)
static void C_fcall trf_4008(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4008(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4008(t0,t1);}

C_noret_decl(trf_3883)
static void C_fcall trf_3883(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3883(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3883(t0,t1);}

C_noret_decl(trf_3866)
static void C_fcall trf_3866(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3866(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3866(t0,t1);}

C_noret_decl(trf_3795)
static void C_fcall trf_3795(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3795(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3795(t0,t1,t2,t3);}

C_noret_decl(trf_3801)
static void C_fcall trf_3801(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3801(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3801(t0,t1,t2);}

C_noret_decl(trf_3809)
static void C_fcall trf_3809(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3809(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3809(t0,t1,t2);}

C_noret_decl(trf_3783)
static void C_fcall trf_3783(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3783(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3783(t0,t1,t2,t3);}

C_noret_decl(trf_3760)
static void C_fcall trf_3760(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3760(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3760(t0,t1,t2);}

C_noret_decl(trf_3767)
static void C_fcall trf_3767(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3767(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3767(t0,t1);}

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
if(!C_demand_2(2024)){
C_save(t1);
C_rereclaim2(2024*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,274);
lf[0]=C_h_intern(&lf[0],34,"\010compilerscan-toplevel-assignments");
lf[1]=C_h_intern(&lf[1],13,"alist-update!");
lf[2]=C_h_intern(&lf[2],13,"\004corevariable");
lf[3]=C_h_intern(&lf[3],6,"remove");
lf[4]=C_h_intern(&lf[4],2,"if");
lf[5]=C_h_intern(&lf[5],3,"let");
lf[6]=C_h_intern(&lf[6],6,"append");
lf[7]=C_h_intern(&lf[7],6,"lambda");
lf[8]=C_h_intern(&lf[8],9,"\004corecall");
lf[9]=C_h_intern(&lf[9],4,"set!");
lf[10]=C_h_intern(&lf[10],8,"\003sysput!");
lf[11]=C_h_intern(&lf[11],23,"\010compilertoplevel-alias");
lf[12]=C_h_intern(&lf[12],18,"\010compilerdebugging");
lf[13]=C_h_intern(&lf[13],1,"x");
lf[14]=C_h_intern(&lf[14],17,"get-output-string");
lf[15]=C_h_intern(&lf[15],5,"write");
lf[16]=C_h_intern(&lf[16],7,"display");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\004 -> ");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\020toplevel-alias: ");
lf[19]=C_h_intern(&lf[19],18,"open-output-string");
lf[20]=C_h_intern(&lf[20],4,"node");
lf[21]=C_h_intern(&lf[21],14,"\004coreundefined");
lf[22]=C_h_intern(&lf[22],19,"\010compilercopy-node!");
lf[23]=C_h_intern(&lf[23],25,"\010compilercompiler-warning");
lf[24]=C_h_intern(&lf[24],3,"var");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000;dropping assignment of unused value to global variable `~s\047");
lf[26]=C_h_intern(&lf[26],9,"alist-ref");
lf[27]=C_h_intern(&lf[27],11,"\004corelambda");
lf[28]=C_h_intern(&lf[28],13,"\004corecallunit");
lf[29]=C_h_intern(&lf[29],9,"\004corecond");
lf[30]=C_h_intern(&lf[30],11,"\004coreswitch");
lf[31]=C_h_intern(&lf[31],21,"\010compileralways-bound");
lf[32]=C_h_intern(&lf[32],9,"\003syserror");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[34]=C_h_intern(&lf[34],12,"\003sysfor-each");
lf[35]=C_h_intern(&lf[35],1,"o");
lf[36]=C_decode_literal(C_heaptop,"\376B\000\000\014safe globals");
lf[37]=C_h_intern(&lf[37],17,"delete-duplicates");
lf[38]=C_h_intern(&lf[38],3,"eq\077");
lf[39]=C_h_intern(&lf[39],1,"p");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000 scanning toplevel assignments...");
lf[41]=C_h_intern(&lf[41],24,"\010compilersimplifications");
lf[42]=C_h_intern(&lf[42],23,"\010compilersimplified-ops");
lf[43]=C_h_intern(&lf[43],41,"\010compilerperform-high-level-optimizations");
lf[44]=C_h_intern(&lf[44],12,"\010compilerget");
lf[45]=C_h_intern(&lf[45],5,"quote");
lf[46]=C_h_intern(&lf[46],10,"alist-cons");
lf[47]=C_h_intern(&lf[47],4,"caar");
lf[48]=C_h_intern(&lf[48],19,"\010compilermatch-node");
lf[49]=C_h_intern(&lf[49],3,"any");
lf[50]=C_h_intern(&lf[50],18,"\003syshash-table-ref");
lf[51]=C_h_intern(&lf[51],30,"\010compilerbroken-constant-nodes");
lf[52]=C_h_intern(&lf[52],11,"lset-adjoin");
lf[53]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[54]=C_h_intern(&lf[54],14,"\010compilerqnode");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\033folding constant expression");
lf[56]=C_h_intern(&lf[56],4,"eval");
lf[57]=C_h_intern(&lf[57],22,"with-exception-handler");
lf[58]=C_h_intern(&lf[58],30,"call-with-current-continuation");
lf[59]=C_h_intern(&lf[59],5,"every");
lf[60]=C_h_intern(&lf[60],9,"foldable\077");
lf[61]=C_h_intern(&lf[61],7,"\003sysget");
lf[62]=C_h_intern(&lf[62],18,"\010compilerintrinsic");
lf[63]=C_h_intern(&lf[63],5,"value");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\035substituted constant variable");
lf[65]=C_h_intern(&lf[65],16,"\010compilervarnode");
lf[66]=C_h_intern(&lf[66],11,"collapsable");
lf[67]=C_h_intern(&lf[67],10,"replacable");
lf[68]=C_h_intern(&lf[68],7,"\003sysmap");
lf[69]=C_h_intern(&lf[69],9,"replacing");
lf[70]=C_h_intern(&lf[70],12,"contractable");
lf[71]=C_h_intern(&lf[71],9,"removable");
lf[72]=C_h_intern(&lf[72],6,"unused");
lf[73]=C_h_intern(&lf[73],9,"partition");
lf[74]=C_h_intern(&lf[74],26,"\010compilerbuild-lambda-list");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\047merged explicitly consed rest parameter");
lf[76]=C_h_intern(&lf[76],13,"explicit-rest");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000 removed unused formal parameters");
lf[78]=C_h_intern(&lf[78],30,"\010compilerdecompose-lambda-list");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\047merged explicitly consed rest parameter");
lf[80]=C_h_intern(&lf[80],21,"has-unused-parameters");
lf[81]=C_h_intern(&lf[81],31,"\010compilerinline-lambda-bindings");
lf[82]=C_h_intern(&lf[82],13,"\010compilerput!");
lf[83]=C_h_intern(&lf[83],13,"inline-target");
lf[84]=C_decode_literal(C_heaptop,"\376B\000\000\024contracted procedure");
lf[85]=C_h_intern(&lf[85],24,"\010compilercheck-signature");
lf[86]=C_h_intern(&lf[86],30,"\010compilerconstant-declarations");
lf[87]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\0005removed call to constant procedure with unused result");
lf[89]=C_h_intern(&lf[89],37,"\010compilerexpression-has-side-effects\077");
lf[90]=C_h_intern(&lf[90],8,"assigned");
lf[91]=C_h_intern(&lf[91],10,"references");
lf[92]=C_h_intern(&lf[92],7,"unknown");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\022inlining procedure");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\017global inlining");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\010inlining");
lf[96]=C_h_intern(&lf[96],1,"i");
lf[97]=C_h_intern(&lf[97],22,"\010compilerinline-global");
lf[98]=C_h_intern(&lf[98],14,"append-reverse");
lf[99]=C_h_intern(&lf[99],6,"gensym");
lf[100]=C_h_intern(&lf[100],1,"t");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000+removed unused parameter to known procedure");
lf[102]=C_h_intern(&lf[102],8,"split-at");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[104]=C_h_intern(&lf[104],20,"\004coreinline_allocate");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\042consed rest parameter at call site");
lf[106]=C_h_intern(&lf[106],21,"\010compilerllist-length");
lf[107]=C_h_intern(&lf[107],23,"\010compilerinline-locally");
lf[108]=C_h_intern(&lf[108],3,"yes");
lf[109]=C_h_intern(&lf[109],2,"no");
lf[110]=C_h_intern(&lf[110],24,"\010compilerinline-max-size");
lf[111]=C_h_intern(&lf[111],15,"\010compilerinline");
lf[112]=C_h_intern(&lf[112],9,"inlinable");
lf[113]=C_h_intern(&lf[113],11,"local-value");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\0006removed side-effect free assignment to unused variable");
lf[115]=C_h_intern(&lf[115],16,"inline-transient");
lf[116]=C_h_intern(&lf[116],26,"\010compilervariable-visible\077");
lf[117]=C_h_intern(&lf[117],6,"global");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\031removed conditional forms");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\025removed binding forms");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\022replaced variables");
lf[121]=C_h_intern(&lf[121],5,"print");
lf[122]=C_h_intern(&lf[122],7,"newline");
lf[123]=C_h_intern(&lf[123],6,"print*");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\027  call simplifications:");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\017simplifications");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\022traversal phase...");
lf[127]=C_h_intern(&lf[127],34,"\010compilerperform-pre-optimization!");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\023Removed `not\047 forms");
lf[129]=C_h_intern(&lf[129],24,"node-subexpressions-set!");
lf[130]=C_h_intern(&lf[130],7,"reverse");
lf[131]=C_h_intern(&lf[131],20,"node-parameters-set!");
lf[132]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[133]=C_h_intern(&lf[133],17,"\010compilerget-list");
lf[134]=C_h_intern(&lf[134],3,"not");
lf[135]=C_h_intern(&lf[135],10,"call-sites");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\031pre-optimization phase...");
lf[137]=C_h_intern(&lf[137],24,"register-simplifications");
lf[138]=C_h_intern(&lf[138],19,"\003syshash-table-set!");
lf[139]=C_h_intern(&lf[139],38,"\010compilerreorganize-recursive-bindings");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000!converted assignments to bindings");
lf[141]=C_h_intern(&lf[141],10,"fold-right");
lf[142]=C_h_intern(&lf[142],4,"fold");
lf[143]=C_h_intern(&lf[143],16,"topological-sort");
lf[144]=C_h_intern(&lf[144],6,"lset<=");
lf[145]=C_h_intern(&lf[145],10,"filter-map");
lf[146]=C_h_intern(&lf[146],6,"filter");
lf[147]=C_h_intern(&lf[147],10,"append-map");
lf[148]=C_h_intern(&lf[148],28,"\010compilerscan-used-variables");
lf[149]=C_h_intern(&lf[149],4,"cons");
lf[150]=C_h_intern(&lf[150],27,"\010compilersubstitution-table");
lf[151]=C_h_intern(&lf[151],16,"\010compilerrewrite");
lf[152]=C_h_intern(&lf[152],28,"\010compilersimplify-named-call");
lf[153]=C_h_intern(&lf[153],37,"\010compilerinline-substitutions-enabled");
lf[154]=C_h_intern(&lf[154],11,"\004coreinline");
lf[155]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[156]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[157]=C_h_intern(&lf[157],6,"unsafe");
lf[158]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[159]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[160]=C_h_intern(&lf[160],11,"number-type");
lf[161]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[162]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[163]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[164]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[165]=C_h_intern(&lf[165],6,"fixnum");
lf[166]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[167]=C_h_intern(&lf[167],21,"\010compilerfold-boolean");
lf[168]=C_h_intern(&lf[168],6,"flonum");
lf[169]=C_h_intern(&lf[169],7,"generic");
lf[170]=C_h_intern(&lf[170],5,"cons*");
lf[171]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[172]=C_h_intern(&lf[172],9,"\004coreproc");
lf[173]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[174]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[175]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[176]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[177]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[178]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[179]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[180]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[181]=C_h_intern(&lf[181],19,"\010compilerfold-inner");
lf[182]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[183]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[184]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[185]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[186]=C_h_intern(&lf[186],5,"fifth");
lf[187]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[188]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[189]=C_h_intern(&lf[189],13,"\010compilerbomb");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\023bad type (optimize)");
lf[191]=C_h_intern(&lf[191],34,"\010compilertransform-direct-lambdas!");
lf[192]=C_h_intern(&lf[192],5,"boxed");
lf[193]=C_h_intern(&lf[193],18,"\004coredirect_lambda");
lf[194]=C_h_intern(&lf[194],15,"\004coreinline_ref");
lf[195]=C_h_intern(&lf[195],37,"\010compilerestimate-foreign-result-size");
lf[196]=C_h_intern(&lf[196],19,"\004coreinline_loc_ref");
lf[197]=C_h_intern(&lf[197],16,"\004coredirect_call");
lf[198]=C_h_intern(&lf[198],5,"lset=");
lf[199]=C_h_intern(&lf[199],6,"delete");
lf[200]=C_h_intern(&lf[200],4,"quit");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000;known procedure called with wrong number of arguments: `~A\047");
lf[202]=C_h_intern(&lf[202],15,"lset-difference");
lf[203]=C_h_intern(&lf[203],15,"node-class-set!");
lf[204]=C_h_intern(&lf[204],12,"\004corerecurse");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000Gknown procedure called recursively with wrong number of arguments: `~A\047");
lf[206]=C_h_intern(&lf[206],4,"take");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000Gknown procedure called recursively with wrong number of arguments: `~A\047");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000\014missing kvar");
lf[209]=C_h_intern(&lf[209],11,"\004corereturn");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000\017bad call (leaf)");
lf[211]=C_h_intern(&lf[211],6,"cdaddr");
lf[212]=C_h_intern(&lf[212],6,"caaddr");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\026invalid parameter list");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\0006direct leaf routine with hoistable closures/allocation");
lf[215]=C_h_intern(&lf[215],6,"unzip1");
lf[216]=C_h_intern(&lf[216],16,"\003sysmake-promise");
lf[217]=C_decode_literal(C_heaptop,"\376B\000\000\036direct leaf routine/allocation");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000(direct leaf routine optimization pass...");
lf[219]=C_h_intern(&lf[219],32,"\010compilerperform-lambda-lifting!");
lf[220]=C_h_intern(&lf[220],23,"\003syshash-table-for-each");
lf[221]=C_h_intern(&lf[221],1,"+");
lf[222]=C_h_intern(&lf[222],14,"\004coreprimitive");
lf[223]=C_h_intern(&lf[223],7,"delete!");
lf[224]=C_h_intern(&lf[224],11,"concatenate");
lf[225]=C_h_intern(&lf[225],5,"count");
lf[226]=C_h_intern(&lf[226],22,"\010compilerhide-variable");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\037moving liftables to toplevel...");
lf[228]=C_decode_literal(C_heaptop,"\376B\000\000\032removing local bindings...");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\026changing call sites...");
lf[230]=C_h_intern(&lf[230],12,"pretty-print");
lf[231]=C_h_intern(&lf[231],1,"l");
lf[232]=C_decode_literal(C_heaptop,"\376B\000\000\026additional parameters:");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000\035gathering extra parameters...");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\031liftable local procedures");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000Aeliminating liftables by access-lists and non-liftable callees...");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\014accessibles:");
lf[237]=C_decode_literal(C_heaptop,"\376B\000\000\031computing access-lists...");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000\013call-graph:");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\034eliminating non-liftables...");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\026building call graph...");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\026gathering liftables...");
lf[242]=C_h_intern(&lf[242],11,"make-vector");
lf[243]=C_h_intern(&lf[243],1,"y");
lf[244]=C_h_intern(&lf[244],2,"d2");
lf[245]=C_h_intern(&lf[245],1,"z");
lf[246]=C_h_intern(&lf[246],2,"d3");
lf[247]=C_h_intern(&lf[247],2,"d1");
lf[248]=C_h_intern(&lf[248],2,"op");
lf[249]=C_h_intern(&lf[249],5,"clist");
lf[250]=C_h_intern(&lf[250],34,"\010compilermembership-test-operators");
lf[251]=C_h_intern(&lf[251],32,"\010compilermembership-unfold-limit");
lf[252]=C_h_intern(&lf[252],4,"var1");
lf[253]=C_h_intern(&lf[253],4,"var0");
lf[254]=C_h_intern(&lf[254],6,"const1");
lf[255]=C_h_intern(&lf[255],4,"var2");
lf[256]=C_h_intern(&lf[256],6,"const2");
lf[257]=C_h_intern(&lf[257],4,"rest");
lf[258]=C_h_intern(&lf[258],5,"body2");
lf[259]=C_h_intern(&lf[259],5,"body1");
lf[260]=C_h_intern(&lf[260],27,"\010compilereq-inline-operator");
lf[261]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\001\000\000\000\002\376\377\016");
lf[262]=C_h_intern(&lf[262],19,"\010compilerimmediate\077");
lf[263]=C_h_intern(&lf[263],5,"const");
lf[264]=C_h_intern(&lf[264],1,"n");
lf[265]=C_h_intern(&lf[265],7,"clauses");
lf[266]=C_h_intern(&lf[266],4,"body");
lf[267]=C_h_intern(&lf[267],1,"d");
lf[268]=C_h_intern(&lf[268],4,"more");
lf[269]=C_h_intern(&lf[269],4,"args");
lf[270]=C_h_intern(&lf[270],1,"a");
lf[271]=C_h_intern(&lf[271],1,"b");
lf[272]=C_h_intern(&lf[272],1,"c");
lf[273]=C_h_intern(&lf[273],4,"cdar");
C_register_lf2(lf,274,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3752,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3750 */
static void C_ccall f_3752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3752,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3755,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3753 in k3750 */
static void C_ccall f_3755(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3755,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! scan-toplevel-assignments ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3757,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4191,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 136  make-vector */
((C_proc4)C_retrieve_proc(*((C_word*)lf[242]+1)))(4,*((C_word*)lf[242]+1),t3,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k4189 in k3753 in k3750 */
static void C_ccall f_4191(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4191,2,t0,t1);}
t2=C_mutate((C_word*)lf[41]+1 /* (set! simplifications ...) */,t1);
t3=C_set_block_item(lf[42] /* simplified-ops */,0,C_SCHEME_END_OF_LIST);
t4=C_mutate((C_word*)lf[43]+1 /* (set! perform-high-level-optimizations ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4194,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[127]+1 /* (set! perform-pre-optimization! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6064,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[137]+1 /* (set! register-simplifications ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6383,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6390,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_a_i_cons(&a,2,lf[270],C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,lf[2],t9);
t11=(C_word)C_a_i_cons(&a,2,lf[271],lf[272]);
t12=(C_word)C_a_i_cons(&a,2,t10,t11);
t13=(C_word)C_a_i_cons(&a,2,lf[267],t12);
t14=(C_word)C_a_i_cons(&a,2,lf[8],t13);
t15=(C_word)C_a_i_cons(&a,2,lf[267],C_SCHEME_END_OF_LIST);
t16=(C_word)C_a_i_cons(&a,2,lf[272],t15);
t17=(C_word)C_a_i_cons(&a,2,lf[271],t16);
t18=(C_word)C_a_i_cons(&a,2,lf[270],t17);
t19=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14726,tmp=(C_word)a,a+=2,tmp);
t20=(C_word)C_a_i_cons(&a,2,t19,C_SCHEME_END_OF_LIST);
t21=(C_word)C_a_i_cons(&a,2,t18,t20);
t22=(C_word)C_a_i_cons(&a,2,t14,t21);
t23=(C_word)C_a_i_list(&a,1,t22);
/* optimizer.scm: 506  ##sys#hash-table-set! */
((C_proc5)C_retrieve_symbol_proc(lf[138]))(5,*((C_word*)lf[138]+1),t7,*((C_word*)lf[41]+1),lf[8],t23);}

/* a14725 in k4189 in k3753 in k3750 */
static void C_ccall f_14726(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_14726,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14734,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t6,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 515  ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[50]))(4,*((C_word*)lf[50]+1),t7,C_retrieve(lf[150]),t3);}

/* k14732 in a14725 in k4189 in k3753 in k3750 */
static void C_ccall f_14734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14734,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14739,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_14739(t6,((C_word*)t0)[2],t2);}

/* loop in k14732 in a14725 in k4189 in k3753 in k3750 */
static void C_fcall f_14739(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14739,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14749,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_14789,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t3,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 517  caar */
((C_proc3)C_retrieve_proc(*((C_word*)lf[47]+1)))(3,*((C_word*)lf[47]+1),t4,t2);}}

/* k14787 in loop in k14732 in a14725 in k4189 in k3753 in k3750 */
static void C_ccall f_14789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_14793,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 517  cdar */
((C_proc3)C_retrieve_proc(*((C_word*)lf[273]+1)))(3,*((C_word*)lf[273]+1),t2,((C_word*)t0)[2]);}

/* k14791 in k14787 in loop in k14732 in a14725 in k4189 in k3753 in k3750 */
static void C_ccall f_14793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 517  simplify-named-call */
((C_proc9)C_retrieve_symbol_proc(lf[152]))(9,*((C_word*)lf[152]+1),((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k14747 in loop in k14732 in a14725 in k4189 in k3753 in k3750 */
static void C_ccall f_14749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14749,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_14753,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* g10321033 */
t3=t2;
f_14753(t3,((C_word*)t0)[4],t1);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 524  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_14739(t3,((C_word*)t0)[4],t2);}}

/* g1032 in k14747 in loop in k14732 in a14725 in k4189 in k3753 in k3750 */
static void C_fcall f_14753(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_14753,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_assq(((C_word*)t0)[2],C_retrieve(lf[42]));
if(C_truep(t3)){
t4=(C_word)C_i_cdr(t3);
t5=(C_word)C_fixnum_increase(t4);
t6=(C_word)C_i_set_cdr(t3,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14775,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 522  alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[46]))(5,*((C_word*)lf[46]+1),t4,((C_word*)t0)[2],C_fix(1),C_retrieve(lf[42]));}}

/* k14773 in g1032 in k14747 in loop in k14732 in a14725 in k4189 in k3753 in k3750 */
static void C_ccall f_14775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[42]+1 /* (set! simplified-ops ...) */,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* k6388 in k4189 in k3753 in k3750 */
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
C_save_and_reclaim((void*)tr2,(void*)f_6390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6393,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_a_i_cons(&a,2,lf[252],C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,lf[248],C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[253],C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[2],t6);
t8=(C_word)C_a_i_cons(&a,2,lf[254],C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,lf[45],t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_cons(&a,2,t7,t11);
t13=(C_word)C_a_i_cons(&a,2,t4,t12);
t14=(C_word)C_a_i_cons(&a,2,lf[154],t13);
t15=(C_word)C_a_i_cons(&a,2,lf[252],C_SCHEME_END_OF_LIST);
t16=(C_word)C_a_i_cons(&a,2,t15,C_SCHEME_END_OF_LIST);
t17=(C_word)C_a_i_cons(&a,2,lf[2],t16);
t18=(C_word)C_a_i_cons(&a,2,lf[255],C_SCHEME_END_OF_LIST);
t19=(C_word)C_a_i_cons(&a,2,lf[248],C_SCHEME_END_OF_LIST);
t20=(C_word)C_a_i_cons(&a,2,lf[253],C_SCHEME_END_OF_LIST);
t21=(C_word)C_a_i_cons(&a,2,t20,C_SCHEME_END_OF_LIST);
t22=(C_word)C_a_i_cons(&a,2,lf[2],t21);
t23=(C_word)C_a_i_cons(&a,2,lf[256],C_SCHEME_END_OF_LIST);
t24=(C_word)C_a_i_cons(&a,2,t23,C_SCHEME_END_OF_LIST);
t25=(C_word)C_a_i_cons(&a,2,lf[45],t24);
t26=(C_word)C_a_i_cons(&a,2,t25,C_SCHEME_END_OF_LIST);
t27=(C_word)C_a_i_cons(&a,2,t22,t26);
t28=(C_word)C_a_i_cons(&a,2,t19,t27);
t29=(C_word)C_a_i_cons(&a,2,lf[154],t28);
t30=(C_word)C_a_i_cons(&a,2,lf[255],C_SCHEME_END_OF_LIST);
t31=(C_word)C_a_i_cons(&a,2,t30,C_SCHEME_END_OF_LIST);
t32=(C_word)C_a_i_cons(&a,2,lf[2],t31);
t33=(C_word)C_a_i_cons(&a,2,lf[257],C_SCHEME_END_OF_LIST);
t34=(C_word)C_a_i_cons(&a,2,lf[258],t33);
t35=(C_word)C_a_i_cons(&a,2,t32,t34);
t36=(C_word)C_a_i_cons(&a,2,lf[244],t35);
t37=(C_word)C_a_i_cons(&a,2,lf[4],t36);
t38=(C_word)C_a_i_cons(&a,2,t37,C_SCHEME_END_OF_LIST);
t39=(C_word)C_a_i_cons(&a,2,t29,t38);
t40=(C_word)C_a_i_cons(&a,2,t18,t39);
t41=(C_word)C_a_i_cons(&a,2,lf[5],t40);
t42=(C_word)C_a_i_cons(&a,2,t41,C_SCHEME_END_OF_LIST);
t43=(C_word)C_a_i_cons(&a,2,lf[259],t42);
t44=(C_word)C_a_i_cons(&a,2,t17,t43);
t45=(C_word)C_a_i_cons(&a,2,lf[247],t44);
t46=(C_word)C_a_i_cons(&a,2,lf[4],t45);
t47=(C_word)C_a_i_cons(&a,2,t46,C_SCHEME_END_OF_LIST);
t48=(C_word)C_a_i_cons(&a,2,t14,t47);
t49=(C_word)C_a_i_cons(&a,2,t3,t48);
t50=(C_word)C_a_i_cons(&a,2,lf[5],t49);
t51=(C_word)C_a_i_cons(&a,2,lf[257],C_SCHEME_END_OF_LIST);
t52=(C_word)C_a_i_cons(&a,2,lf[244],t51);
t53=(C_word)C_a_i_cons(&a,2,lf[247],t52);
t54=(C_word)C_a_i_cons(&a,2,lf[258],t53);
t55=(C_word)C_a_i_cons(&a,2,lf[259],t54);
t56=(C_word)C_a_i_cons(&a,2,lf[256],t55);
t57=(C_word)C_a_i_cons(&a,2,lf[254],t56);
t58=(C_word)C_a_i_cons(&a,2,lf[248],t57);
t59=(C_word)C_a_i_cons(&a,2,lf[255],t58);
t60=(C_word)C_a_i_cons(&a,2,lf[252],t59);
t61=(C_word)C_a_i_cons(&a,2,lf[253],t60);
t62=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14405,tmp=(C_word)a,a+=2,tmp);
t63=(C_word)C_a_i_cons(&a,2,t62,C_SCHEME_END_OF_LIST);
t64=(C_word)C_a_i_cons(&a,2,t61,t63);
t65=(C_word)C_a_i_cons(&a,2,t50,t64);
t66=(C_word)C_a_i_cons(&a,2,lf[24],C_SCHEME_END_OF_LIST);
t67=(C_word)C_a_i_cons(&a,2,lf[248],C_SCHEME_END_OF_LIST);
t68=(C_word)C_a_i_cons(&a,2,lf[253],C_SCHEME_END_OF_LIST);
t69=(C_word)C_a_i_cons(&a,2,t68,C_SCHEME_END_OF_LIST);
t70=(C_word)C_a_i_cons(&a,2,lf[2],t69);
t71=(C_word)C_a_i_cons(&a,2,lf[263],C_SCHEME_END_OF_LIST);
t72=(C_word)C_a_i_cons(&a,2,t71,C_SCHEME_END_OF_LIST);
t73=(C_word)C_a_i_cons(&a,2,lf[45],t72);
t74=(C_word)C_a_i_cons(&a,2,t73,C_SCHEME_END_OF_LIST);
t75=(C_word)C_a_i_cons(&a,2,t70,t74);
t76=(C_word)C_a_i_cons(&a,2,t67,t75);
t77=(C_word)C_a_i_cons(&a,2,lf[154],t76);
t78=(C_word)C_a_i_cons(&a,2,lf[24],C_SCHEME_END_OF_LIST);
t79=(C_word)C_a_i_cons(&a,2,t78,C_SCHEME_END_OF_LIST);
t80=(C_word)C_a_i_cons(&a,2,lf[2],t79);
t81=(C_word)C_a_i_cons(&a,2,lf[264],C_SCHEME_END_OF_LIST);
t82=(C_word)C_a_i_cons(&a,2,lf[253],C_SCHEME_END_OF_LIST);
t83=(C_word)C_a_i_cons(&a,2,t82,C_SCHEME_END_OF_LIST);
t84=(C_word)C_a_i_cons(&a,2,lf[2],t83);
t85=(C_word)C_a_i_cons(&a,2,t84,lf[265]);
t86=(C_word)C_a_i_cons(&a,2,t81,t85);
t87=(C_word)C_a_i_cons(&a,2,lf[30],t86);
t88=(C_word)C_a_i_cons(&a,2,t87,C_SCHEME_END_OF_LIST);
t89=(C_word)C_a_i_cons(&a,2,lf[266],t88);
t90=(C_word)C_a_i_cons(&a,2,t80,t89);
t91=(C_word)C_a_i_cons(&a,2,lf[267],t90);
t92=(C_word)C_a_i_cons(&a,2,lf[4],t91);
t93=(C_word)C_a_i_cons(&a,2,t92,C_SCHEME_END_OF_LIST);
t94=(C_word)C_a_i_cons(&a,2,t77,t93);
t95=(C_word)C_a_i_cons(&a,2,t66,t94);
t96=(C_word)C_a_i_cons(&a,2,lf[5],t95);
t97=(C_word)C_a_i_cons(&a,2,lf[265],C_SCHEME_END_OF_LIST);
t98=(C_word)C_a_i_cons(&a,2,lf[264],t97);
t99=(C_word)C_a_i_cons(&a,2,lf[266],t98);
t100=(C_word)C_a_i_cons(&a,2,lf[267],t99);
t101=(C_word)C_a_i_cons(&a,2,lf[263],t100);
t102=(C_word)C_a_i_cons(&a,2,lf[253],t101);
t103=(C_word)C_a_i_cons(&a,2,lf[248],t102);
t104=(C_word)C_a_i_cons(&a,2,lf[24],t103);
t105=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14184,tmp=(C_word)a,a+=2,tmp);
t106=(C_word)C_a_i_cons(&a,2,t105,C_SCHEME_END_OF_LIST);
t107=(C_word)C_a_i_cons(&a,2,t104,t106);
t108=(C_word)C_a_i_cons(&a,2,t96,t107);
t109=(C_word)C_a_i_cons(&a,2,lf[252],C_SCHEME_END_OF_LIST);
t110=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t111=(C_word)C_a_i_cons(&a,2,lf[21],t110);
t112=(C_word)C_a_i_cons(&a,2,lf[268],C_SCHEME_END_OF_LIST);
t113=(C_word)C_a_i_cons(&a,2,t111,t112);
t114=(C_word)C_a_i_cons(&a,2,t109,t113);
t115=(C_word)C_a_i_cons(&a,2,lf[5],t114);
t116=(C_word)C_a_i_cons(&a,2,lf[268],C_SCHEME_END_OF_LIST);
t117=(C_word)C_a_i_cons(&a,2,lf[252],t116);
t118=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13783,tmp=(C_word)a,a+=2,tmp);
t119=(C_word)C_a_i_cons(&a,2,t118,C_SCHEME_END_OF_LIST);
t120=(C_word)C_a_i_cons(&a,2,t117,t119);
t121=(C_word)C_a_i_cons(&a,2,t115,t120);
t122=(C_word)C_a_i_cons(&a,2,lf[24],C_SCHEME_END_OF_LIST);
t123=(C_word)C_a_i_cons(&a,2,lf[248],C_SCHEME_END_OF_LIST);
t124=(C_word)C_a_i_cons(&a,2,t123,lf[269]);
t125=(C_word)C_a_i_cons(&a,2,lf[154],t124);
t126=(C_word)C_a_i_cons(&a,2,lf[24],C_SCHEME_END_OF_LIST);
t127=(C_word)C_a_i_cons(&a,2,t126,C_SCHEME_END_OF_LIST);
t128=(C_word)C_a_i_cons(&a,2,lf[2],t127);
t129=(C_word)C_a_i_cons(&a,2,lf[243],C_SCHEME_END_OF_LIST);
t130=(C_word)C_a_i_cons(&a,2,lf[13],t129);
t131=(C_word)C_a_i_cons(&a,2,t128,t130);
t132=(C_word)C_a_i_cons(&a,2,lf[267],t131);
t133=(C_word)C_a_i_cons(&a,2,lf[4],t132);
t134=(C_word)C_a_i_cons(&a,2,t133,C_SCHEME_END_OF_LIST);
t135=(C_word)C_a_i_cons(&a,2,t125,t134);
t136=(C_word)C_a_i_cons(&a,2,t122,t135);
t137=(C_word)C_a_i_cons(&a,2,lf[5],t136);
t138=(C_word)C_a_i_cons(&a,2,lf[243],C_SCHEME_END_OF_LIST);
t139=(C_word)C_a_i_cons(&a,2,lf[13],t138);
t140=(C_word)C_a_i_cons(&a,2,lf[267],t139);
t141=(C_word)C_a_i_cons(&a,2,lf[269],t140);
t142=(C_word)C_a_i_cons(&a,2,lf[248],t141);
t143=(C_word)C_a_i_cons(&a,2,lf[24],t142);
t144=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13635,tmp=(C_word)a,a+=2,tmp);
t145=(C_word)C_a_i_cons(&a,2,t144,C_SCHEME_END_OF_LIST);
t146=(C_word)C_a_i_cons(&a,2,t143,t145);
t147=(C_word)C_a_i_cons(&a,2,t137,t146);
t148=(C_word)C_a_i_list(&a,4,t65,t108,t121,t147);
/* optimizer.scm: 506  ##sys#hash-table-set! */
((C_proc5)C_retrieve_symbol_proc(lf[138]))(5,*((C_word*)lf[138]+1),t2,*((C_word*)lf[41]+1),lf[5],t148);}

/* a13634 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13635(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_13635,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
if(C_truep((C_word)C_i_equalp(t4,C_retrieve(lf[260])))){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
else{
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13681,a[2]=t6,a[3]=t1,a[4]=t8,a[5]=t7,a[6]=t5,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 665  get-list */
((C_proc5)C_retrieve_symbol_proc(lf[133]))(5,*((C_word*)lf[133]+1),t9,t2,t3,lf[91]);}}

/* k13679 in a13634 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13681(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_13681,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[7]);
t5=((C_word*)t0)[6];
t6=(C_word)C_a_i_record(&a,4,lf[20],lf[154],t4,t5);
t7=(C_word)C_a_i_list(&a,3,t6,((C_word*)t0)[5],((C_word*)t0)[4]);
t8=((C_word*)t0)[3];
t9=((C_word*)t0)[2];
t10=t8;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_record(&a,4,lf[20],lf[4],t9,t7));}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* a13782 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13783(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_13783,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_list(&a,1,t3);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13793,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_13793(t9,t1,t5,t4);}

/* loop1 in a13782 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_13793(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_13793,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=(C_word)C_slot(t4,C_fix(1));
t6=t3;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t3;
t9=(C_word)C_slot(t8,C_fix(3));
t10=(C_word)C_eqp(t5,lf[5]);
if(C_truep(t10)){
t11=(C_word)C_i_cdr(t7);
if(C_truep((C_word)C_i_nullp(t11))){
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t7,a[6]=t9,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t13=(C_word)C_i_car(t7);
/* optimizer.scm: 604  get */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),t12,((C_word*)t0)[2],t13,lf[115]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}

/* k14128 in loop1 in a13782 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14130,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14122,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
/* optimizer.scm: 605  get */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),t2,((C_word*)t0)[2],t3,lf[91]);}}

/* k14120 in k14128 in loop1 in a13782 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14122(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_14122,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_slot(t2,C_fix(2));
t4=(C_word)C_slot(t2,C_fix(3));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_word)C_eqp(t5,lf[21]);
if(C_truep(t6)){
t7=(C_word)C_i_car(((C_word*)t0)[5]);
t8=(C_word)C_a_i_cons(&a,2,t7,((C_word*)t0)[4]);
t9=(C_word)C_i_cadr(((C_word*)t0)[6]);
/* optimizer.scm: 610  loop1 */
t10=((C_word*)((C_word*)t0)[3])[1];
f_13793(t10,((C_word*)t0)[7],t8,t9);}
else{
t7=(C_word)C_eqp(t5,lf[9]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13899,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[6],a[5]=t4,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 612  reverse */
((C_proc3)C_retrieve_proc(*((C_word*)lf[130]+1)))(3,*((C_word*)lf[130]+1),t8,((C_word*)t0)[4]);}
else{
t8=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}}}

/* k13897 in k14120 in k14128 in loop1 in a13782 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13899(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_13899,2,t0,t1);}
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
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13928,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_13928(t12,((C_word*)t0)[2],t6,t7,t8);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop2 in k13897 in k14120 in k14128 in loop1 in a13782 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_13928(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_13928,NULL,5,t0,t1,t2,t3,t4);}
t5=t4;
t6=(C_word)C_slot(t5,C_fix(1));
t7=t4;
t8=(C_word)C_slot(t7,C_fix(2));
t9=t4;
t10=(C_word)C_slot(t9,C_fix(3));
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13959,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=t2,a[8]=t10,tmp=(C_word)a,a+=9,tmp);
t12=(C_word)C_eqp(t6,lf[5]);
if(C_truep(t12)){
t13=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t13))){
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_14098,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=t10,a[5]=t3,a[6]=t11,tmp=(C_word)a,a+=7,tmp);
t15=(C_word)C_i_car(t8);
/* optimizer.scm: 623  get */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),t14,((C_word*)t0)[2],t15,lf[115]);}
else{
t14=t11;
f_13959(t14,C_SCHEME_FALSE);}}
else{
t13=t11;
f_13959(t13,C_SCHEME_FALSE);}}

/* k14096 in loop2 in k13897 in k14120 in k14128 in loop1 in a13782 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14098,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
f_13959(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14090,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* optimizer.scm: 624  get */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),t2,((C_word*)t0)[2],t3,lf[91]);}}

/* k14088 in k14096 in loop2 in k13897 in k14120 in k14128 in loop1 in a13782 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14090(C_word c,C_word t0,C_word t1){
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
f_13959(t2,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t2=(C_word)C_i_car(((C_word*)t0)[2]);
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_eqp(lf[9],t3);
if(C_truep(t4)){
t5=(C_word)C_i_car(((C_word*)t0)[3]);
t6=(C_word)C_i_car(((C_word*)t0)[2]);
t7=(C_word)C_slot(t6,C_fix(2));
t8=(C_word)C_i_car(t7);
t9=((C_word*)t0)[4];
f_13959(t9,(C_word)C_eqp(t5,t8));}
else{
t5=((C_word*)t0)[4];
f_13959(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
f_13959(t2,C_SCHEME_FALSE);}}}

/* k13957 in loop2 in k13897 in k14120 in k14128 in loop1 in a13782 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_13959(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_13959,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[8]);
t3=(C_word)C_slot(t2,C_fix(3));
t4=(C_word)C_i_car(t3);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[7]);
t6=(C_word)C_i_cdr(((C_word*)t0)[6]);
t7=(C_word)C_i_cadr(((C_word*)t0)[8]);
/* optimizer.scm: 628  loop2 */
t8=((C_word*)((C_word*)t0)[5])[1];
f_13928(t8,((C_word*)t0)[4],t5,t6,t7);}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[6]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14002,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_14012,tmp=(C_word)a,a+=2,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* a14011 in k13957 in loop2 in k13897 in k14120 in k14128 in loop1 in a13782 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_14012,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t2:C_SCHEME_FALSE));}

/* a14001 in k13957 in loop2 in k13897 in k14120 in k14128 in loop1 in a13782 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14002,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_14010,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 633  reverse */
((C_proc3)C_retrieve_proc(*((C_word*)lf[130]+1)))(3,*((C_word*)lf[130]+1),t2,((C_word*)t0)[2]);}

/* k14008 in a14001 in k13957 in loop2 in k13897 in k14120 in k14128 in loop1 in a13782 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 633  reorganize-recursive-bindings */
((C_proc5)C_retrieve_symbol_proc(lf[139]))(5,*((C_word*)lf[139]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a14183 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14184(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10){
C_word tmp;
C_word t11;
C_word t12;
C_word ab[10],*a=ab;
if(c!=11) C_bad_argc_2(c,11,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr11,(void*)f_14184,11,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}
if(C_truep((C_word)C_i_equalp(t4,C_retrieve(lf[260])))){
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_14197,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=t6,a[6]=t10,a[7]=t8,a[8]=t1,a[9]=t9,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 574  immediate? */
((C_proc3)C_retrieve_symbol_proc(lf[262]))(3,*((C_word*)lf[262]+1),t11,t6);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}

/* k14195 in a14183 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14197,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14239,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 575  get-list */
((C_proc5)C_retrieve_symbol_proc(lf[133]))(5,*((C_word*)lf[133]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[91]);}
else{
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k14237 in k14195 in a14183 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14239(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_14239,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(C_word)C_fixnum_increase(((C_word*)t0)[7]);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_14219,a[2]=t5,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14223,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 579  varnode */
((C_proc3)C_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t7,((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k14221 in k14237 in k14195 in a14183 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14223,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_14227,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 580  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t2,((C_word*)t0)[2]);}

/* k14225 in k14221 in k14237 in k14195 in a14183 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 579  cons* */
((C_proc6)C_retrieve_symbol_proc(lf[170]))(6,*((C_word*)lf[170]+1),((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k14217 in k14237 in k14195 in a14183 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14219,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[20],lf[30],((C_word*)t0)[2],t1));}

/* a14404 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14405(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13){
C_word tmp;
C_word t14;
C_word t15;
C_word ab[12],*a=ab;
if(c!=14) C_bad_argc_2(c,14,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr14,(void*)f_14405,14,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);}
if(C_truep((C_word)C_i_equalp(t6,C_retrieve(lf[260])))){
t14=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_14418,a[2]=t4,a[3]=t5,a[4]=t2,a[5]=t3,a[6]=t7,a[7]=t8,a[8]=t1,a[9]=t13,a[10]=t10,a[11]=t9,tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm: 547  immediate? */
((C_proc3)C_retrieve_symbol_proc(lf[262]))(3,*((C_word*)lf[262]+1),t14,t7);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}

/* k14416 in a14404 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14418,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_14424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm: 548  immediate? */
((C_proc3)C_retrieve_symbol_proc(lf[262]))(3,*((C_word*)lf[262]+1),t2,((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k14422 in k14416 in a14404 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14424,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_14476,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 549  get-list */
((C_proc5)C_retrieve_symbol_proc(lf[133]))(5,*((C_word*)lf[133]+1),t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[91]);}
else{
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k14474 in k14422 in k14416 in a14404 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14476,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_14468,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 550  get-list */
((C_proc5)C_retrieve_symbol_proc(lf[133]))(5,*((C_word*)lf[133]+1),t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[91]);}
else{
t4=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k14466 in k14474 in k14422 in k14416 in a14404 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14468,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14452,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 554  varnode */
((C_proc3)C_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t4,((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k14450 in k14466 in k14474 in k14422 in k14416 in a14404 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14452,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14456,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 555  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t2,((C_word*)t0)[2]);}

/* k14454 in k14450 in k14466 in k14474 in k14422 in k14416 in a14404 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_14460,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 557  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t2,((C_word*)t0)[2]);}

/* k14458 in k14454 in k14450 in k14466 in k14474 in k14422 in k14416 in a14404 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_14460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_14460,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,6,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[30],lf[261],t2));}

/* k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6393(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6393,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6396,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_a_i_cons(&a,2,lf[24],C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[2],t4);
t6=(C_word)C_a_i_cons(&a,2,lf[243],C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,t5,t6);
t8=(C_word)C_a_i_cons(&a,2,lf[244],t7);
t9=(C_word)C_a_i_cons(&a,2,lf[8],t8);
t10=(C_word)C_a_i_cons(&a,2,lf[24],C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_cons(&a,2,lf[2],t11);
t13=(C_word)C_a_i_cons(&a,2,lf[245],C_SCHEME_END_OF_LIST);
t14=(C_word)C_a_i_cons(&a,2,t12,t13);
t15=(C_word)C_a_i_cons(&a,2,lf[246],t14);
t16=(C_word)C_a_i_cons(&a,2,lf[8],t15);
t17=(C_word)C_a_i_cons(&a,2,t16,C_SCHEME_END_OF_LIST);
t18=(C_word)C_a_i_cons(&a,2,t9,t17);
t19=(C_word)C_a_i_cons(&a,2,lf[13],t18);
t20=(C_word)C_a_i_cons(&a,2,lf[247],t19);
t21=(C_word)C_a_i_cons(&a,2,lf[4],t20);
t22=(C_word)C_a_i_cons(&a,2,lf[24],C_SCHEME_END_OF_LIST);
t23=(C_word)C_a_i_cons(&a,2,lf[245],t22);
t24=(C_word)C_a_i_cons(&a,2,lf[243],t23);
t25=(C_word)C_a_i_cons(&a,2,lf[13],t24);
t26=(C_word)C_a_i_cons(&a,2,lf[246],t25);
t27=(C_word)C_a_i_cons(&a,2,lf[244],t26);
t28=(C_word)C_a_i_cons(&a,2,lf[247],t27);
t29=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13472,tmp=(C_word)a,a+=2,tmp);
t30=(C_word)C_a_i_cons(&a,2,t29,C_SCHEME_END_OF_LIST);
t31=(C_word)C_a_i_cons(&a,2,t28,t30);
t32=(C_word)C_a_i_cons(&a,2,t21,t31);
t33=(C_word)C_a_i_cons(&a,2,lf[248],C_SCHEME_END_OF_LIST);
t34=(C_word)C_a_i_cons(&a,2,lf[249],C_SCHEME_END_OF_LIST);
t35=(C_word)C_a_i_cons(&a,2,t34,C_SCHEME_END_OF_LIST);
t36=(C_word)C_a_i_cons(&a,2,lf[45],t35);
t37=(C_word)C_a_i_cons(&a,2,t36,C_SCHEME_END_OF_LIST);
t38=(C_word)C_a_i_cons(&a,2,lf[13],t37);
t39=(C_word)C_a_i_cons(&a,2,t33,t38);
t40=(C_word)C_a_i_cons(&a,2,lf[154],t39);
t41=(C_word)C_a_i_cons(&a,2,lf[245],C_SCHEME_END_OF_LIST);
t42=(C_word)C_a_i_cons(&a,2,lf[243],t41);
t43=(C_word)C_a_i_cons(&a,2,t40,t42);
t44=(C_word)C_a_i_cons(&a,2,lf[247],t43);
t45=(C_word)C_a_i_cons(&a,2,lf[4],t44);
t46=(C_word)C_a_i_cons(&a,2,lf[245],C_SCHEME_END_OF_LIST);
t47=(C_word)C_a_i_cons(&a,2,lf[243],t46);
t48=(C_word)C_a_i_cons(&a,2,lf[249],t47);
t49=(C_word)C_a_i_cons(&a,2,lf[13],t48);
t50=(C_word)C_a_i_cons(&a,2,lf[248],t49);
t51=(C_word)C_a_i_cons(&a,2,lf[247],t50);
t52=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13276,tmp=(C_word)a,a+=2,tmp);
t53=(C_word)C_a_i_cons(&a,2,t52,C_SCHEME_END_OF_LIST);
t54=(C_word)C_a_i_cons(&a,2,t51,t53);
t55=(C_word)C_a_i_cons(&a,2,t45,t54);
t56=(C_word)C_a_i_list(&a,2,t32,t55);
/* optimizer.scm: 506  ##sys#hash-table-set! */
((C_proc5)C_retrieve_symbol_proc(lf[138]))(5,*((C_word*)lf[138]+1),t2,*((C_word*)lf[41]+1),lf[4],t56);}

/* a13275 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13276(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[9],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_13276,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(C_word)C_i_assoc(t4,C_retrieve(lf[250]));
if(C_truep(t9)){
if(C_truep((C_word)C_i_listp(t6))){
t10=(C_word)C_i_length(t6);
t11=C_retrieve(lf[251]);
if(C_truep((C_word)C_fixnum_lessp(t10,t11))){
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13298,a[2]=t6,a[3]=t1,a[4]=t5,a[5]=t3,a[6]=t8,a[7]=t7,a[8]=t9,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 703  gensym */
((C_proc2)C_retrieve_symbol_proc(lf[99]))(2,*((C_word*)lf[99]+1),t12);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k13296 in a13275 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13298(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_13298,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[8]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_list(&a,1,t1);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13334,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13336,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13378,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 720  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t7,C_SCHEME_FALSE);}

/* k13376 in k13296 in a13275 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 712  fold-right */
((C_proc5)C_retrieve_symbol_proc(lf[141]))(5,*((C_word*)lf[141]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a13335 in k13296 in a13275 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13336(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13336,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13370,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 717  varnode */
((C_proc3)C_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t4,((C_word*)t0)[2]);}

/* k13368 in a13335 in k13296 in a13275 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13374,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 717  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t2,((C_word*)t0)[2]);}

/* k13372 in k13368 in a13335 in k13296 in a13275 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13374,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_record(&a,4,lf[20],lf[154],((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 718  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t4,C_SCHEME_TRUE);}

/* k13360 in k13372 in k13368 in a13335 in k13296 in a13275 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13362,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,((C_word*)t0)[4],t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[29],C_SCHEME_END_OF_LIST,t2));}

/* k13332 in k13296 in a13275 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13334,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,t1,((C_word*)t0)[7],((C_word*)t0)[6]);
t3=((C_word*)t0)[5];
t4=(C_word)C_a_i_record(&a,4,lf[20],lf[4],t3,t2);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t4);
t6=((C_word*)t0)[3];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[20],lf[5],((C_word*)t0)[2],t5));}

/* a13471 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13472(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(c!=10) C_bad_argc_2(c,10,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr10,(void*)f_13472,10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}
if(C_truep(C_retrieve(lf[153]))){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13492,a[2]=t4,a[3]=t1,a[4]=t8,a[5]=t7,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 688  varnode */
((C_proc3)C_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t10,t9);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k13490 in a13471 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13492,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(C_word)C_a_i_record(&a,4,lf[20],lf[29],C_SCHEME_END_OF_LIST,t2);
t4=(C_word)C_a_i_list(&a,2,t1,t3);
t5=((C_word*)t0)[3];
t6=((C_word*)t0)[2];
t7=t5;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[20],lf[8],t6,t4));}

/* k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6396,2,t0,t1);}
t2=C_mutate((C_word*)lf[139]+1 /* (set! reorganize-recursive-bindings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6398,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6885,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 815  make-vector */
((C_proc4)C_retrieve_proc(*((C_word*)lf[242]+1)))(4,*((C_word*)lf[242]+1),t3,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6885,2,t0,t1);}
t2=C_mutate((C_word*)lf[150]+1 /* (set! substitution-table ...) */,t1);
t3=C_mutate((C_word*)lf[151]+1 /* (set! rewrite ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6887,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[152]+1 /* (set! simplify-named-call ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6907,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[191]+1 /* (set! transform-direct-lambdas! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9266,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[219]+1 /* (set! perform-lambda-lifting! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10651,tmp=(C_word)a,a+=2,tmp));
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_UNDEFINED);}

/* ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10651(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_10651,4,t0,t1,t2,t3);}
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
t24=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10654,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t25=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10760,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t26=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11048,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t27=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11181,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t28=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11462,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t29=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11773,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t30=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12182,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t31=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12710,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t32=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12908,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t33=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_13149,a[2]=t7,a[3]=t9,a[4]=t11,a[5]=t13,a[6]=t15,a[7]=t17,a[8]=t21,a[9]=t23,a[10]=t1,a[11]=t19,tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm: 1785 debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t33,lf[39],lf[241]);}

/* k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13149,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_13152,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 1786 find-lifting-candidates */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10654(t3,t2);}

/* k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13152,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_13155,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm: 1787 debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t2,lf[39],lf[240]);}

/* k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13155,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_13158,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 1788 build-call-graph */
t3=((C_word*)((C_word*)t0)[2])[1];
f_10760(t3,t2,((C_word*)t0)[3]);}

/* k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13158,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_13161,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm: 1789 debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t2,lf[39],lf[239]);}

/* k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13161,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13164,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 1790 eliminate */
t3=((C_word*)((C_word*)t0)[4])[1];
f_11048(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13164,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_13167,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13247,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1791 debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t3,lf[231],lf[238]);}

/* k13245 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm: 1791 pretty-print */
((C_proc3)C_retrieve_symbol_proc(lf[230]))(3,*((C_word*)lf[230]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_13167(2,t2,C_SCHEME_UNDEFINED);}}

/* k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13167,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_13170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 1792 debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t2,lf[39],lf[237]);}

/* k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13170,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13173,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 1793 collect-accessibles */
t3=((C_word*)((C_word*)t0)[2])[1];
f_11181(t3,t2,((C_word*)t0)[3]);}

/* k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13173,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13241,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1794 debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t3,lf[231],lf[236]);}

/* k13239 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm: 1794 pretty-print */
((C_proc3)C_retrieve_symbol_proc(lf[230]))(3,*((C_word*)lf[230]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_13176(2,t2,C_SCHEME_UNDEFINED);}}

/* k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13176,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 1795 debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t2,lf[39],lf[235]);}

/* k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13179,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13182,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13238,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 1796 eliminate4 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_11462(t4,t3,((C_word*)t0)[2]);}

/* k13236 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13238,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11428,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_11428(t6,((C_word*)t0)[2],t1,t2);}

/* loop in k13236 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11428(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11428,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11432,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11446,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 1590 filter */
((C_proc4)C_retrieve_symbol_proc(lf[146]))(4,*((C_word*)lf[146]+1),t4,t5,t2);}

/* a11445 in loop in k13236 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11446(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11446,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11452,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_cddr(t2);
/* optimizer.scm: 1590 every */
((C_proc4)C_retrieve_symbol_proc(lf[59]))(4,*((C_word*)lf[59]+1),t1,t3,t4);}

/* a11451 in a11445 in loop in k13236 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11452(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11452,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_assq(t2,((C_word*)t0)[2]));}

/* k11430 in loop in k13236 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11432(C_word c,C_word t0,C_word t1){
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
/* optimizer.scm: 1594 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_11428(t5,((C_word*)t0)[3],t1,t2);}}

/* k13180 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13182,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_pairp(t1))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13228,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13230,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-promise */
t5=*((C_word*)lf[216]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}
else{
t3=t2;
f_13185(2,t3,C_SCHEME_UNDEFINED);}}

/* a13229 in k13180 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13230,2,t0,t1);}
/* optimizer.scm: 1798 unzip1 */
((C_proc3)C_retrieve_symbol_proc(lf[215]))(3,*((C_word*)lf[215]+1),t1,((C_word*)t0)[2]);}

/* k13226 in k13180 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1798 debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),((C_word*)t0)[2],lf[35],lf[234],t1);}

/* k13183 in k13180 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 1799 debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t2,lf[39],lf[233]);}

/* k13186 in k13183 in k13180 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13188,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13191,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1800 compute-extra-variables */
t3=((C_word*)((C_word*)t0)[2])[1];
f_11773(t3,t2,((C_word*)t0)[5]);}

/* k13189 in k13186 in k13183 in k13180 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13191,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13215,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1801 debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t3,lf[231],lf[232]);}

/* k13213 in k13189 in k13186 in k13183 in k13180 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm: 1801 pretty-print */
((C_proc3)C_retrieve_symbol_proc(lf[230]))(3,*((C_word*)lf[230]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_13194(2,t2,C_SCHEME_UNDEFINED);}}

/* k13192 in k13189 in k13186 in k13183 in k13180 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13194,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_13197,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 1802 debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t2,lf[39],lf[229]);}

/* k13195 in k13192 in k13189 in k13186 in k13183 in k13180 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13197,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13200,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1803 extend-call-sites! */
t3=((C_word*)((C_word*)t0)[2])[1];
f_12710(t3,t2,((C_word*)t0)[4]);}

/* k13198 in k13195 in k13192 in k13189 in k13186 in k13183 in k13180 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13200,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1804 debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t2,lf[39],lf[228]);}

/* k13201 in k13198 in k13195 in k13192 in k13189 in k13186 in k13183 in k13180 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13203,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13206,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1805 remove-local-bindings! */
t3=((C_word*)((C_word*)t0)[2])[1];
f_12908(t3,t2,((C_word*)t0)[4]);}

/* k13204 in k13201 in k13198 in k13195 in k13192 in k13189 in k13186 in k13183 in k13180 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13206,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1806 debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t2,lf[39],lf[227]);}

/* k13207 in k13204 in k13201 in k13198 in k13195 in k13192 in k13189 in k13186 in k13183 in k13180 in k13177 in k13174 in k13171 in k13168 in k13165 in k13162 in k13159 in k13156 in k13153 in k13150 in k13147 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1807 reconstruct! */
t2=((C_word*)((C_word*)t0)[5])[1];
f_12182(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12908(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12908,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12914,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12914(t6,t1,((C_word*)t0)[2]);}

/* walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12914(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_12914,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(3));
t9=(C_word)C_eqp(t4,lf[5]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12948,a[2]=t8,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t11=t2;
t12=(C_word)C_slot(t11,C_fix(3));
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13039,a[2]=((C_word*)t0)[2],a[3]=t14,tmp=(C_word)a,a+=4,tmp));
t16=((C_word*)t14)[1];
f_13039(t16,t10,t12);}
else{
t10=(C_word)C_eqp(t4,lf[9]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13069,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t12=t2;
t13=(C_word)C_slot(t12,C_fix(3));
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13099,a[2]=((C_word*)t0)[2],a[3]=t15,tmp=(C_word)a,a+=4,tmp));
t17=((C_word*)t15)[1];
f_13099(t17,t11,t13);}
else{
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13125,a[2]=((C_word*)t0)[2],a[3]=t12,tmp=(C_word)a,a+=4,tmp));
t14=((C_word*)t12)[1];
f_13125(t14,t1,t8);}}}

/* loop3674 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_13125(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13125,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13135,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g36813682 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_12914(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k13133 in loop3674 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_13125(t3,((C_word*)t0)[2],t2);}

/* loop3653 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_13099(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13099,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13109,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g36603661 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_12914(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k13107 in loop3653 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_13099(t3,((C_word*)t0)[2],t2);}

/* k13067 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13069,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_assq(t2,((C_word*)t0)[4]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13078,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1780 node-class-set! */
((C_proc4)C_retrieve_symbol_proc(lf[203]))(4,*((C_word*)lf[203]+1),t3,((C_word*)t0)[2],lf[21]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k13076 in k13067 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13078,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13081,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1781 node-parameters-set! */
((C_proc4)C_retrieve_symbol_proc(lf[131]))(4,*((C_word*)lf[131]+1),t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k13079 in k13076 in k13067 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1782 node-subexpressions-set! */
((C_proc4)C_retrieve_symbol_proc(lf[129]))(4,*((C_word*)lf[129]+1),((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* loop3616 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_13039(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13039,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13049,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g36233624 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_12914(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k13047 in loop3616 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_13049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_13039(t3,((C_word*)t0)[2],t2);}

/* k12946 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12948(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12948,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12953,a[2]=t7,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=t3,tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_12953(t9,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* doloop3632 in k12946 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12953(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_12953,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[6])[1]))){
t4=(C_word)C_i_car(t3);
/* optimizer.scm: 1770 copy-node! */
((C_proc4)C_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),t1,t4,((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12976,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12991,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1772 reverse */
((C_proc3)C_retrieve_proc(*((C_word*)lf[130]+1)))(3,*((C_word*)lf[130]+1),t5,((C_word*)((C_word*)t0)[6])[1]);}}
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

/* k12989 in doloop3632 in k12946 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1772 node-parameters-set! */
((C_proc4)C_retrieve_symbol_proc(lf[131]))(4,*((C_word*)lf[131]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k12974 in doloop3632 in k12946 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12983,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12987,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1773 reverse */
((C_proc3)C_retrieve_proc(*((C_word*)lf[130]+1)))(3,*((C_word*)lf[130]+1),t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k12985 in k12974 in doloop3632 in k12946 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1773 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k12981 in k12974 in doloop3632 in k12946 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1773 node-subexpressions-set! */
((C_proc4)C_retrieve_symbol_proc(lf[129]))(4,*((C_word*)lf[129]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* extend-call-sites! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12710(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12710,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12716,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_12716(t6,t1,((C_word*)t0)[2]);}

/* walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12716(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_12716,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(3));
t9=(C_word)C_eqp(t4,lf[8]);
if(C_truep(t9)){
t10=(C_word)C_i_car(t8);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12753,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t12=(C_word)C_slot(t10,C_fix(1));
t13=(C_word)C_eqp(lf[2],t12);
if(C_truep(t13)){
t14=(C_word)C_slot(t10,C_fix(2));
t15=(C_word)C_i_car(t14);
t16=(C_word)C_i_assq(t15,((C_word*)t0)[2]);
if(C_truep(t16)){
t17=(C_word)C_i_set_car(t6,C_SCHEME_TRUE);
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12811,a[2]=t2,a[3]=t11,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
t19=C_SCHEME_END_OF_LIST;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=C_SCHEME_FALSE;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12815,a[2]=t18,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t24=(C_word)C_i_cdr(t16);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12825,a[2]=t20,a[3]=t26,a[4]=t22,tmp=(C_word)a,a+=5,tmp));
t28=((C_word*)t26)[1];
f_12825(t28,t23,t24);}
else{
t17=C_SCHEME_UNDEFINED;
t18=t11;
f_12753(2,t18,t17);}}
else{
t14=t11;
f_12753(2,t14,C_SCHEME_UNDEFINED);}}
else{
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12885,a[2]=((C_word*)t0)[3],a[3]=t11,tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_12885(t13,t1,t8);}}

/* loop3582 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12885(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12885,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12895,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g35893590 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_12716(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12893 in loop3582 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12885(t3,((C_word*)t0)[2],t2);}

/* loop3541 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12825(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12825,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[65]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12854,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g35573558 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12852 in loop3541 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12854(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12854,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop35413554 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_12825(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop35413554 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_12825(t6,((C_word*)t0)[3],t5);}}

/* k12813 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 1752 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),((C_word*)t0)[2],t1,t2);}

/* k12809 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12811,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* optimizer.scm: 1750 node-subexpressions-set! */
((C_proc4)C_retrieve_symbol_proc(lf[129]))(4,*((C_word*)lf[129]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k12751 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12753,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(C_word)C_slot(t2,C_fix(3));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12767,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_12767(t7,((C_word*)t0)[2],t3);}

/* loop3565 in k12751 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12767(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12767,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12777,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g35723573 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_12716(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12775 in loop3565 in k12751 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12767(t3,((C_word*)t0)[2],t2);}

/* reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12182(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12182,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12194,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12196,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=((C_word*)t0)[3];
t7=(C_word)C_slot(t6,C_fix(3));
t8=(C_word)C_i_car(t7);
/* optimizer.scm: 1686 fold-right */
((C_proc5)C_retrieve_symbol_proc(lf[141]))(5,*((C_word*)lf[141]+1),t4,t5,t8,t2);}

/* a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12196(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12196,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12203,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1689 get */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),t5,((C_word*)t0)[2],t4,lf[63]);}

/* k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12203,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12206,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1690 hide-variable */
((C_proc3)C_retrieve_symbol_proc(lf[226]))(3,*((C_word*)lf[226]+1),t2,((C_word*)t0)[5]);}

/* k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12206,2,t0,t1);}
t2=((C_word*)t0)[6];
t3=(C_word)C_slot(t2,C_fix(2));
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12215,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1691 decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),((C_word*)t0)[2],t4,t5);}

/* a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)tr5,(void*)f_12215,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_assq(((C_word*)t0)[5],((C_word*)t0)[4]);
t6=(C_word)C_i_cdr(t5);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12222,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t6,a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12367,a[2]=t8,a[3]=t13,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_12367(t15,t11,t6);}

/* loop3315 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12367(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12367,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[99]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12396,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g33313332 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12394 in loop3315 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12396(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12396,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop33153328 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_12367(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop33153328 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_12367(t6,((C_word*)t0)[3],t5);}}

/* k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12222(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12222,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12225,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12318,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_12318(t10,t6,((C_word*)t0)[5],t1);}

/* loop3339 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12318(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_12318,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[149]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12351,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
/* g33593360 */
t10=t6;
((C_proc4)C_retrieve_proc(t10))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k12349 in loop3339 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12351,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12331,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_12331(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_12331(t5,t4);}}

/* k12329 in k12349 in loop3339 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12331(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop33393353 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_12318(t5,((C_word*)t0)[2],t3,t4);}

/* k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12225(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12225,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=((C_word*)t0)[9];
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12431,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12446,a[2]=t6,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=((C_word*)t8)[1];
f_12446(t10,t2,t5);}

/* walk in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12446(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_12446,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(3));
t9=(C_word)C_eqp(t4,lf[5]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12480,a[2]=t8,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12510,a[2]=t2,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12512,a[2]=t12,a[3]=t17,a[4]=t14,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_12512(t19,t15,t6);}
else{
t10=(C_word)C_eqp(t4,lf[2]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t6);
t12=f_12431(((C_word*)t0)[2],t11);
t13=(C_word)C_a_i_list(&a,1,t12);
/* optimizer.scm: 1725 node-parameters-set! */
((C_proc4)C_retrieve_symbol_proc(lf[131]))(4,*((C_word*)lf[131]+1),t1,t2,t13);}
else{
t11=(C_word)C_eqp(t4,lf[9]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12575,a[2]=t8,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t13=(C_word)C_i_car(t6);
t14=f_12431(((C_word*)t0)[2],t13);
t15=(C_word)C_a_i_list(&a,1,t14);
/* optimizer.scm: 1727 node-parameters-set! */
((C_proc4)C_retrieve_symbol_proc(lf[131]))(4,*((C_word*)lf[131]+1),t12,t2,t15);}
else{
t12=(C_word)C_eqp(t4,lf[7]);
if(C_truep(t12)){
t13=(C_word)C_i_car(t6);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12628,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t8,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1730 decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),t1,t13,t14);}
else{
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12687,a[2]=((C_word*)t0)[3],a[3]=t14,tmp=(C_word)a,a+=4,tmp));
t16=((C_word*)t14)[1];
f_12687(t16,t1,t8);}}}}}

/* loop3494 in walk in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12687(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12687,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12697,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g35013502 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_12446(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12695 in loop3494 in walk in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12687(t3,((C_word*)t0)[2],t2);}

/* a12627 in walk in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12628(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)tr5,(void*)f_12628,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12643,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12647,a[2]=t4,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12649,a[2]=t7,a[3]=t12,a[4]=t9,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_12649(t14,t10,t2);}

/* loop3470 in a12627 in walk in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12649(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_12649,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=f_12431(((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop34703483 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop34703483 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12645 in a12627 in walk in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1733 build-lambda-list */
((C_proc5)C_retrieve_symbol_proc(lf[74]))(5,*((C_word*)lf[74]+1),((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k12641 in a12627 in walk in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_set_car(((C_word*)t0)[5],t1);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* optimizer.scm: 1734 walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_12446(t4,((C_word*)t0)[2],t3);}

/* k12573 in walk in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12575,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12580,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_12580(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop3453 in k12573 in walk in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12580(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12580,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12590,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g34603461 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_12446(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12588 in loop3453 in k12573 in walk in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12580(t3,((C_word*)t0)[2],t2);}

/* loop3416 in walk in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12512(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_12512,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=f_12431(((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop34163429 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop34163429 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12508 in walk in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1722 node-parameters-set! */
((C_proc4)C_retrieve_symbol_proc(lf[131]))(4,*((C_word*)lf[131]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k12478 in walk in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12480,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12485,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_12485(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop3439 in k12478 in walk in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12485(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12485,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12495,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g34463447 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_12446(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12493 in loop3439 in k12478 in walk in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12485(t3,((C_word*)t0)[2],t2);}

/* rename in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static C_word C_fcall f_12431(C_word t0,C_word t1){
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

/* k12226 in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12228,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12303,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 1699 gensym */
((C_proc3)C_retrieve_symbol_proc(lf[99]))(3,*((C_word*)lf[99]+1),t2,lf[100]);}

/* k12301 in k12226 in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12303,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[10]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12287,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t3,a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12291,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1705 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k12289 in k12301 in k12226 in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_length(((C_word*)t0)[5]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],t2);
/* optimizer.scm: 1705 build-lambda-list */
((C_proc5)C_retrieve_symbol_proc(lf[74]))(5,*((C_word*)lf[74]+1),((C_word*)t0)[3],t1,t3,((C_word*)t0)[2]);}

/* k12285 in k12301 in k12226 in k12223 in k12220 in a12214 in k12204 in k12201 in a12195 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12287(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12287,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[6];
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_a_i_record(&a,4,lf[20],lf[7],t2,t4);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_a_i_record(&a,4,lf[20],lf[9],((C_word*)t0)[5],t6);
t8=(C_word)C_a_i_list(&a,2,t7,((C_word*)t0)[4]);
t9=((C_word*)t0)[3];
t10=t9;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_record(&a,4,lf[20],lf[5],((C_word*)t0)[2],t8));}

/* k12192 in reconstruct! in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12194,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* optimizer.scm: 1683 node-subexpressions-set! */
((C_proc4)C_retrieve_symbol_proc(lf[129]))(4,*((C_word*)lf[129]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11773(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_11773,NULL,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11899,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12134,a[2]=t4,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_12134(t11,t7,t2);}

/* loop3170 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12134(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_12134,NULL,3,t0,t1,t2);}
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
/* loop31703183 */
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}
else{
t8=C_mutate(((C_word *)((C_word*)t0)[2])+1,t7);
t9=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t10=(C_word)C_slot(t2,C_fix(1));
/* loop31703183 */
t16=t1;
t17=t10;
t1=t16;
t2=t17;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11899(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11899,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11901,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12032,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12111,a[2]=t5,a[3]=t9,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_12111(t11,t7,((C_word*)t0)[4]);}

/* loop3194 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12111(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12111,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12121,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g32573258 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_11901(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12119 in loop3194 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12111(t3,((C_word*)t0)[2],t2);}

/* k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12032(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12032,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12037,a[2]=t3,a[3]=t7,a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_12037(t9,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12037(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12037,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12064,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12105,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g32793280 */
t6=t3;
f_12064(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12103 in loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12105(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12105,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop32633276 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_12037(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop32633276 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_12037(t6,((C_word*)t0)[3],t5);}}

/* g3279 in loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_12064(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12064,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12102,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1672 get */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),t4,((C_word*)t0)[2],t3,lf[63]);}

/* k12100 in g3279 in loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12102(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12102,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11780,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11782,a[2]=t6,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_11782(t8,t4,t1);}

/* walk in k12100 in g3279 in loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11782(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_11782,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(3));
t9=(C_word)C_eqp(t4,lf[5]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11817,a[2]=t8,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1648 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t10,t6,((C_word*)((C_word*)t0)[3])[1]);}
else{
t10=(C_word)C_eqp(t4,lf[7]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t6);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11858,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1651 decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),t1,t11,t12);}
else{
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11875,a[2]=((C_word*)t0)[2],a[3]=t12,tmp=(C_word)a,a+=4,tmp));
t14=((C_word*)t12)[1];
f_11875(t14,t1,t8);}}}

/* loop3153 in walk in k12100 in g3279 in loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11875(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11875,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11885,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g31603161 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_11782(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11883 in loop3153 in walk in k12100 in g3279 in loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11875(t3,((C_word*)t0)[2],t2);}

/* a11857 in walk in k12100 in g3279 in loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11858(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11858,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11863,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1654 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t5,t2,((C_word*)((C_word*)t0)[4])[1]);}

/* k11861 in a11857 in walk in k12100 in g3279 in loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* optimizer.scm: 1655 walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_11782(t4,((C_word*)t0)[2],t3);}

/* k11815 in walk in k12100 in g3279 in loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11817,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11822,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11822(t6,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop3135 in k11815 in walk in k12100 in g3279 in loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11822(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11822,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11832,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g31423143 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_11782(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11830 in loop3135 in k11815 in walk in k12100 in g3279 in loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11822(t3,((C_word*)t0)[2],t2);}

/* k11778 in k12100 in g3279 in loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11780,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[6])[1];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12078,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12080,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12094,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* optimizer.scm: 1678 delete-duplicates */
((C_proc4)C_retrieve_symbol_proc(lf[37]))(4,*((C_word*)lf[37]+1),t5,t6,*((C_word*)lf[38]+1));}

/* k12092 in k11778 in k12100 in g3279 in loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1674 remove */
((C_proc4)C_retrieve_symbol_proc(lf[3]))(4,*((C_word*)lf[3]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a12079 in k11778 in k12100 in g3279 in loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12080(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12080,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)t0)[3]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:(C_word)C_i_memq(t2,((C_word*)t0)[2])));}

/* k12076 in k11778 in k12100 in g3279 in loop3263 in k12030 in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12078,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* walk in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11901(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11901,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12023,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12025,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 1663 count */
((C_proc4)C_retrieve_symbol_proc(lf[225]))(4,*((C_word*)lf[225]+1),t4,t5,((C_word*)((C_word*)t0)[5])[1]);}

/* a12024 in walk in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12025(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12025,3,t0,t1,t2);}
t3=*((C_word*)lf[38]+1);
/* g32113212 */
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,((C_word*)t0)[2],t2);}

/* k12021 in walk in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12023(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_12023,2,t0,t1);}
if(C_truep((C_word)C_fixnum_greaterp(t1,C_fix(1)))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=(C_word)C_i_cddr(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11921,a[2]=t4,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11989,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_11989(t9,t5,t4);}}

/* loop3216 in k12021 in walk in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11989(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11989,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11997,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12008,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g32233224 */
t6=t3;
f_11997(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12006 in loop3216 in k12021 in walk in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_12008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11989(t3,((C_word*)t0)[2],t2);}

/* g3223 in loop3216 in k12021 in walk in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11997(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11997,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)t0)[3]);
/* optimizer.scm: 1666 walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_11901(t4,t1,t3);}

/* k11919 in k12021 in walk in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11921(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11921,2,t0,t1);}
t2=(C_word)C_i_assq(((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11931,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11939,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11943,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11945,a[2]=t7,a[3]=t12,a[4]=t9,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_11945(t14,t10,((C_word*)t0)[2]);}

/* loop3231 in k11919 in k12021 in walk in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11945(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_11945,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11972,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_11972(t3,t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop32313244 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop32313244 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g3247 in loop3231 in k11919 in k12021 in walk in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static C_word C_fcall f_11972(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_assq(t1,((C_word*)t0)[2]);
return((C_word)C_i_cdr(t2));}

/* k11941 in k11919 in k12021 in walk in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1668 concatenate */
((C_proc3)C_retrieve_symbol_proc(lf[224]))(3,*((C_word*)lf[224]+1),((C_word*)t0)[2],t1);}

/* k11937 in k11919 in k12021 in walk in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1668 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k11929 in k11919 in k12021 in walk in k11897 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_cdr(((C_word*)t0)[2],t1));}

/* eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11462(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11462,NULL,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11466,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11468,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_11468(t8,t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11468(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_11468,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(1));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(3));
t10=(C_word)C_eqp(t5,lf[2]);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_11502,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t3,a[5]=t7,a[6]=((C_word*)t0)[3],a[7]=t5,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t10)){
t12=t11;
f_11502(t12,t10);}
else{
t12=(C_word)C_eqp(t5,lf[45]);
if(C_truep(t12)){
t13=t11;
f_11502(t13,t12);}
else{
t13=(C_word)C_eqp(t5,lf[21]);
if(C_truep(t13)){
t14=t11;
f_11502(t14,t13);}
else{
t14=(C_word)C_eqp(t5,lf[222]);
t15=t11;
f_11502(t15,(C_truep(t14)?t14:(C_word)C_eqp(t5,lf[172])));}}}}

/* k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11502(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_11502,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[7],lf[5]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11513,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_11513(t6,((C_word*)t0)[8],((C_word*)t0)[5],((C_word*)t0)[3]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[7],lf[7]);
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11564,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1613 decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),((C_word*)t0)[8],t4,t5);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[7],lf[8]);
if(C_truep(t4)){
t5=(C_word)C_i_car(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11588,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11621,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1619 call-with-current-continuation */
((C_proc3)C_retrieve_proc(*((C_word*)lf[58]+1)))(3,*((C_word*)lf[58]+1),t6,t7);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11724,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_11724(t8,((C_word*)t0)[8],((C_word*)t0)[3]);}}}}}

/* loop3096 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11724(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11724,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11732,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11739,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g31033104 */
t6=t3;
f_11732(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11737 in loop3096 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11724(t3,((C_word*)t0)[2],t2);}

/* g3103 in loop3096 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11732(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11732,NULL,3,t0,t1,t2);}
/* optimizer.scm: 1634 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_11468(t3,t1,t2,((C_word*)t0)[2]);}

/* a11620 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11621(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_11621,3,t0,t1,t2);}
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t4=(C_word)C_eqp(lf[2],t3);
if(C_truep(t4)){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(C_word)C_slot(((C_word*)t0)[4],C_fix(2));
t8=(C_word)C_i_car(t7);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11637,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t10,a[5]=((C_word*)t0)[3],a[6]=t6,tmp=(C_word)a,a+=7,tmp));
t12=((C_word*)t10)[1];
f_11637(t12,t1,t8);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* loop in a11620 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11637(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_11637,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_memq(t2,((C_word*)((C_word*)t0)[6])[1]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[6])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t5=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[5])[1]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11657,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11690,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_i_cadr(t5);
/* optimizer.scm: 1628 lset<= */
((C_proc5)C_retrieve_symbol_proc(lf[144]))(5,*((C_word*)lf[144]+1),t7,*((C_word*)lf[38]+1),t8,((C_word*)t0)[2]);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}}

/* k11688 in loop in a11620 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11690,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_11657(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11694,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1630 delete! */
((C_proc5)C_retrieve_symbol_proc(lf[223]))(5,*((C_word*)lf[223]+1),t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1],*((C_word*)lf[38]+1));}}

/* k11692 in k11688 in loop in a11620 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* optimizer.scm: 1631 return */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k11655 in loop in a11620 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11657,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[4]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11666,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_11666(t6,((C_word*)t0)[2],t2);}

/* loop3062 in k11655 in loop in a11620 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11666(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11666,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11676,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g30693070 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_11637(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11674 in loop3062 in k11655 in loop in a11620 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11666(t3,((C_word*)t0)[2],t2);}

/* k11586 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11588,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11593,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_11593(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop3081 in k11586 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11593(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11593,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11601,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11608,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g30883089 */
t6=t3;
f_11601(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11606 in loop3081 in k11586 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11593(t3,((C_word*)t0)[2],t2);}

/* g3088 in loop3081 in k11586 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11601(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11601,NULL,3,t0,t1,t2);}
/* optimizer.scm: 1633 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_11468(t3,t1,t2,((C_word*)t0)[2]);}

/* a11563 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11564(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11564,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11576,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1616 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t6,t2,((C_word*)t0)[2]);}

/* k11574 in a11563 in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1616 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_11468(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11513(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11513,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11531,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1608 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t5,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11534,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t3);
/* optimizer.scm: 1610 walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_11468(t6,t4,t5,((C_word*)t0)[3]);}}

/* k11532 in loop in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm: 1611 loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_11513(t4,((C_word*)t0)[2],t2,t3);}

/* k11529 in loop in k11500 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1608 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_11468(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k11464 in eliminate4 in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* collect-accessibles in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11181(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_11181,NULL,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11185,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11187,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_11187(t9,t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11187(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_11187,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(1));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(3));
t10=(C_word)C_eqp(t5,lf[2]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_11221,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t9,a[7]=t3,a[8]=t7,a[9]=((C_word*)t0)[5],a[10]=t5,a[11]=t1,tmp=(C_word)a,a+=12,tmp);
if(C_truep(t10)){
t12=t11;
f_11221(t12,t10);}
else{
t12=(C_word)C_eqp(t5,lf[45]);
if(C_truep(t12)){
t13=t11;
f_11221(t13,t12);}
else{
t13=(C_word)C_eqp(t5,lf[21]);
if(C_truep(t13)){
t14=t11;
f_11221(t14,t13);}
else{
t14=(C_word)C_eqp(t5,lf[222]);
t15=t11;
f_11221(t15,(C_truep(t14)?t14:(C_word)C_eqp(t5,lf[172])));}}}}

/* k11219 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11221(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_11221,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[10],lf[5]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11232,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_11232(t6,((C_word*)t0)[11],((C_word*)t0)[8],((C_word*)t0)[6]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[10],lf[7]);
if(C_truep(t3)){
t4=(C_word)C_i_assq(((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11280,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_assq(t6,((C_word*)t0)[3]))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11314,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_i_cdr(t4);
/* optimizer.scm: 1565 alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[46]))(5,*((C_word*)lf[46]+1),t7,t8,((C_word*)t0)[7],((C_word*)((C_word*)t0)[2])[1]);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t5;
f_11280(t8,t7);}}
else{
t6=t5;
f_11280(t6,C_SCHEME_UNDEFINED);}}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11323,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_11323(t7,((C_word*)t0)[11],((C_word*)t0)[6]);}}}}

/* loop2960 in k11219 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11323(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11323,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11331,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11338,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g29672968 */
t6=t3;
f_11331(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11336 in loop2960 in k11219 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_11323(t3,((C_word*)t0)[2],t2);}

/* g2967 in loop2960 in k11219 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11331(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11331,NULL,3,t0,t1,t2);}
/* optimizer.scm: 1571 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_11187(t3,t1,t2,((C_word*)t0)[2]);}

/* k11312 in k11219 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_11280(t3,t2);}

/* k11278 in k11219 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11280(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11280,NULL,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11289,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1566 decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),((C_word*)t0)[2],t2,t3);}

/* a11288 in k11278 in k11219 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11289(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11289,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11301,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1569 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t6,t2,((C_word*)t0)[2]);}

/* k11299 in a11288 in k11278 in k11219 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1569 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_11187(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k11219 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11232(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11232,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11250,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1556 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t5,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11253,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t3);
/* optimizer.scm: 1558 walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_11187(t6,t4,t5,((C_word*)t0)[3]);}}

/* k11251 in loop in k11219 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm: 1559 loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_11232(t4,((C_word*)t0)[2],t2,t3);}

/* k11248 in loop in k11219 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1556 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_11187(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k11183 in collect-accessibles in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* eliminate in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11048(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11048,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11054,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1526 remove */
((C_proc4)C_retrieve_symbol_proc(lf[3]))(4,*((C_word*)lf[3]+1),t1,t4,t3);}

/* a11053 in eliminate in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11054(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11054,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11088,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_i_car(t2);
t5=((C_word*)t0)[2];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11098,a[2]=t4,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1536 unzip1 */
((C_proc3)C_retrieve_symbol_proc(lf[215]))(3,*((C_word*)lf[215]+1),t6,t5);}

/* k11096 in a11053 in eliminate in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11098,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11103,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_11103(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* count in k11096 in a11053 in eliminate in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11103(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11103,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_assq(t2,((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11110,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_cddr(t4);
/* optimizer.scm: 1539 lset-difference */
((C_proc6)C_retrieve_symbol_proc(lf[202]))(6,*((C_word*)lf[202]+1),t5,*((C_word*)lf[38]+1),t6,t3,((C_word*)t0)[2]);}

/* k11108 in count in k11096 in a11053 in eliminate in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11110,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11171,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm: 1540 delete-duplicates */
((C_proc4)C_retrieve_symbol_proc(lf[37]))(4,*((C_word*)lf[37]+1),t2,t3,*((C_word*)lf[38]+1));}

/* k11169 in k11108 in count in k11096 in a11053 in eliminate in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11171,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11167,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1541 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k11165 in k11169 in k11108 in count in k11096 in a11053 in eliminate in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11167(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11167,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11123,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11125,a[2]=t4,a[3]=t9,a[4]=t6,a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp));
t11=((C_word*)t9)[1];
f_11125(t11,t7,((C_word*)t0)[2]);}

/* loop2878 in k11165 in k11169 in k11108 in count in k11096 in a11053 in eliminate in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11125(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11125,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11152,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_11159,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g28942895 */
t6=t3;
f_11152(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11157 in loop2878 in k11165 in k11169 in k11108 in count in k11096 in a11053 in eliminate in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11159(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11159,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop28782891 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_11125(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop28782891 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_11125(t6,((C_word*)t0)[3],t5);}}

/* g2894 in loop2878 in k11165 in k11169 in k11108 in count in k11096 in a11053 in eliminate in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_11152(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11152,NULL,3,t0,t1,t2);}
/* optimizer.scm: 1542 count */
t3=((C_word*)((C_word*)t0)[3])[1];
f_11103(t3,t1,t2,((C_word*)t0)[2]);}

/* k11121 in k11165 in k11169 in k11108 in count in k11096 in a11053 in eliminate in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1542 fold */
((C_proc5)C_retrieve_symbol_proc(lf[142]))(5,*((C_word*)lf[142]+1),((C_word*)t0)[3],*((C_word*)lf[221]+1),((C_word*)t0)[2],t1);}

/* k11086 in a11053 in eliminate in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11088,2,t0,t1);}
t2=(C_word)C_fixnum_greaterp(t1,C_fix(16));
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11066,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm: 1529 any */
((C_proc4)C_retrieve_symbol_proc(lf[49]))(4,*((C_word*)lf[49]+1),((C_word*)t0)[5],t3,t4);}}

/* a11065 in k11086 in a11053 in eliminate in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11066(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11066,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11073,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1530 get */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),t3,((C_word*)t0)[2],t2,lf[90]);}

/* k11071 in a11065 in k11086 in a11053 in eliminate in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11073(C_word c,C_word t0,C_word t1){
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

/* build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10760(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_10760,NULL,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10763,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t8,a[5]=t2,a[6]=t10,tmp=(C_word)a,a+=7,tmp));
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10971,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10973,a[2]=t14,a[3]=t10,a[4]=t4,a[5]=t8,a[6]=t6,tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_10973(t16,t12,t2);}

/* loop2750 in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10973(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10973,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10981,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11035,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g28312832 */
t6=t3;
f_10981(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k11033 in loop2750 in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10973(t3,((C_word*)t0)[2],t2);}

/* g2831 in loop2750 in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10981(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_10981,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_slot(t4,C_fix(2));
t6=(C_word)C_i_car(t5);
t7=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_END_OF_LIST);
t8=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_END_OF_LIST);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10996,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11006,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1515 decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),t9,t6,t10);}

/* a11005 in g2831 in loop2750 in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11006(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_11006,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_slot(((C_word*)t0)[3],C_fix(3));
t6=(C_word)C_i_car(t5);
/* optimizer.scm: 1518 walk */
t7=((C_word*)((C_word*)t0)[2])[1];
f_10763(t7,t1,t6,t2);}

/* k10994 in g2831 in loop2750 in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11000,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);
/* optimizer.scm: 1519 alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[46]))(5,*((C_word*)lf[46]+1),t2,((C_word*)t0)[2],t3,((C_word*)((C_word*)t0)[6])[1]);}

/* k10998 in k10994 in g2831 in loop2750 in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_11000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k10969 in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10763(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_10763,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(1));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(3));
t10=(C_word)C_eqp(t5,lf[2]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(t5,lf[9]));
if(C_truep(t11)){
t12=(C_word)C_i_car(t7);
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10803,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t12,a[5]=t9,a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t14=(C_word)C_i_memq(t12,t3);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10850,a[2]=((C_word*)t0)[3],a[3]=t12,a[4]=t13,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t14)){
t16=t15;
f_10850(2,t16,t14);}
else{
/* optimizer.scm: 1491 get */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),t15,((C_word*)t0)[2],t12,lf[117]);}}
else{
t12=(C_word)C_eqp(t5,lf[5]);
if(C_truep(t12)){
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10868,a[2]=t14,a[3]=t3,a[4]=t7,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_10868(t16,t1,t7,t9);}
else{
t13=(C_word)C_eqp(t5,lf[7]);
if(C_truep(t13)){
t14=(C_word)C_i_car(t7);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10922,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1503 decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),t1,t14,t15);}
else{
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10939,a[2]=t15,a[3]=t3,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp));
t17=((C_word*)t15)[1];
f_10939(t17,t1,t9);}}}}

/* loop2817 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10939(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10939,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10947,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10954,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g28242825 */
t6=t3;
f_10947(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10952 in loop2817 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10939(t3,((C_word*)t0)[2],t2);}

/* g2824 in loop2817 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10947(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10947,NULL,3,t0,t1,t2);}
/* optimizer.scm: 1506 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10763(t3,t1,t2,((C_word*)t0)[2]);}

/* a10921 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_10922,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10934,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1505 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t6,t2,((C_word*)t0)[2]);}

/* k10932 in a10921 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1505 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_10763(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10868(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10868,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10886,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1498 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t5,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10892,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_car(t3);
/* optimizer.scm: 1500 walk */
t7=((C_word*)((C_word*)t0)[5])[1];
f_10763(t7,t5,t6,((C_word*)t0)[3]);}}

/* k10890 in loop in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm: 1501 loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_10868(t4,((C_word*)t0)[2],t2,t3);}

/* k10884 in loop in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1498 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_10763(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k10848 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10850,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_10803(t2,C_SCHEME_UNDEFINED);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[4];
f_10803(t4,t3);}}

/* k10801 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10803(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10803,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10806,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_assq(((C_word*)t0)[4],((C_word*)t0)[3]))){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t2;
f_10806(t5,t4);}
else{
t3=t2;
f_10806(t3,C_SCHEME_UNDEFINED);}}

/* k10804 in k10801 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10806(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10806,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10811,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_10811(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop2792 in k10804 in k10801 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10811(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10811,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10819,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10826,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g27992800 */
t6=t3;
f_10819(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10824 in loop2792 in k10804 in k10801 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10811(t3,((C_word*)t0)[2],t2);}

/* g2799 in loop2792 in k10804 in k10801 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10819(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10819,NULL,3,t0,t1,t2);}
/* optimizer.scm: 1494 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_10763(t3,t1,t2,((C_word*)t0)[2]);}

/* find-lifting-candidates in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10654(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10654,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10658,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10660,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1462 ##sys#hash-table-for-each */
((C_proc4)C_retrieve_symbol_proc(lf[220]))(4,*((C_word*)lf[220]+1),t4,t5,((C_word*)t0)[2]);}

/* a10659 in find-lifting-candidates in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10660(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_10660,4,t0,t1,t2,t3);}
t4=(C_word)C_i_assq(lf[63],t3);
if(C_truep(t4)){
t5=(C_word)C_i_assq(lf[91],t3);
if(C_truep(t5)){
t6=(C_word)C_i_assq(lf[135],t3);
if(C_truep(t6)){
t7=(C_word)C_i_cdr(t5);
t8=(C_word)C_i_length(t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10691,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_assq(lf[92],t3))){
t10=t9;
f_10691(t10,C_SCHEME_FALSE);}
else{
t10=(C_word)C_i_cdr(t4);
t11=(C_word)C_slot(t10,C_fix(1));
t12=(C_word)C_eqp(lf[7],t11);
if(C_truep(t12)){
if(C_truep((C_word)C_i_assq(lf[117],t3))){
t13=t9;
f_10691(t13,C_SCHEME_FALSE);}
else{
t13=(C_word)C_i_cdr(t6);
t14=(C_word)C_i_length(t13);
t15=t9;
f_10691(t15,(C_word)C_eqp(t8,t14));}}
else{
t13=t9;
f_10691(t13,C_SCHEME_FALSE);}}}
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

/* k10689 in a10659 in find-lifting-candidates in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10691(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10691,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 1473 alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[46]))(5,*((C_word*)lf[46]+1),t2,t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[6])[1]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k10693 in k10689 in a10659 in find-lifting-candidates in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10695,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10699,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 1474 alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[46]))(5,*((C_word*)lf[46]+1),t3,((C_word*)t0)[2],t4,((C_word*)((C_word*)t0)[5])[1]);}

/* k10697 in k10693 in k10689 in a10659 in find-lifting-candidates in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k10656 in find-lifting-candidates in ##compiler#perform-lambda-lifting! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9266(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_9266,4,t0,t1,t2,t3);}
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
t18=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9269,a[2]=t3,a[3]=t15,a[4]=t13,a[5]=t11,a[6]=t9,a[7]=t7,a[8]=t17,tmp=(C_word)a,a+=9,tmp));
t19=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9468,a[2]=t7,a[3]=t9,a[4]=t3,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t20=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9922,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10646,a[2]=t2,a[3]=t13,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1441 debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t21,lf[39],lf[218]);}

/* k10644 in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10649,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1442 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9269(t3,t2,C_SCHEME_FALSE,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k10647 in k10644 in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_9922(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9922,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9926,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,a[5]=t7,a[6]=t1,a[7]=t5,a[8]=t6,a[9]=t2,a[10]=((C_word*)t0)[3],tmp=(C_word)a,a+=11,tmp);
if(C_truep((C_word)C_i_pairp(t5))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10634,a[2]=t7,a[3]=t3,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10636,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#make-promise */
t11=*((C_word*)lf[216]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}
else{
/* optimizer.scm: 1332 debugging */
((C_proc6)C_retrieve_symbol_proc(lf[12]))(6,*((C_word*)lf[12]+1),t8,lf[35],lf[217],t3,t7);}}

/* a10635 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10636,2,t0,t1);}
/* optimizer.scm: 1331 unzip1 */
((C_proc3)C_retrieve_symbol_proc(lf[215]))(3,*((C_word*)lf[215]+1),t1,((C_word*)t0)[2]);}

/* k10632 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1331 debugging */
((C_proc7)C_retrieve_symbol_proc(lf[12]))(7,*((C_word*)lf[12]+1),((C_word*)t0)[4],lf[35],lf[214],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9926(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9926,2,t0,t1);}
t2=C_set_block_item(((C_word*)t0)[10],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[9];
t4=(C_word)C_slot(t3,C_fix(2));
t5=(C_word)C_i_caddr(t4);
t6=(C_word)C_i_length(t5);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9941,a[2]=((C_word*)t0)[3],a[3]=t8,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=t6,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm: 1337 get */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),t9,((C_word*)t0)[2],((C_word*)t0)[4],lf[135]);}

/* k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9941(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9941,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_9950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
if(C_truep((C_word)C_i_listp(((C_word*)t0)[11]))){
t6=(C_word)C_i_length(((C_word*)t0)[11]);
t7=(C_word)C_eqp(t6,C_fix(4));
if(C_truep(t7)){
t8=(C_word)C_i_caddr(((C_word*)t0)[11]);
t9=t5;
f_9950(t9,(C_word)C_i_listp(t8));}
else{
t8=t5;
f_9950(t8,C_SCHEME_FALSE);}}
else{
t6=t5;
f_9950(t6,C_SCHEME_FALSE);}}

/* k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_9950(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9950,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[13]);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_9956,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm: 1341 caaddr */
((C_proc3)C_retrieve_proc(*((C_word*)lf[212]+1)))(3,*((C_word*)lf[212]+1),t3,((C_word*)t0)[13]);}
else{
/* optimizer.scm: 1439 bomb */
((C_proc4)C_retrieve_symbol_proc(lf[189]))(4,*((C_word*)lf[189]+1),((C_word*)t0)[10],lf[213],((C_word*)t0)[13]);}}

/* k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9956,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_9959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* optimizer.scm: 1342 cdaddr */
((C_proc3)C_retrieve_proc(*((C_word*)lf[211]+1)))(3,*((C_word*)lf[211]+1),t2,((C_word*)t0)[14]);}

/* k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9959,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[15]);
t3=(C_word)C_i_set_car(t2,t1);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_9965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm: 1346 node-class-set! */
((C_proc4)C_retrieve_symbol_proc(lf[203]))(4,*((C_word*)lf[203]+1),t4,((C_word*)t0)[5],lf[193]);}

/* k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9965(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9968,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],tmp=(C_word)a,a+=11,tmp);
t3=((C_word*)t0)[5];
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_car(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_10248,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp));
t9=((C_word*)t7)[1];
f_10248(t9,t2,t5);}

/* rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10248(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_10248,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(2));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(3));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(1));
t9=(C_word)C_eqp(t8,lf[8]);
if(C_truep(t9)){
t10=(C_word)C_i_car(t6);
t11=(C_word)C_i_cadr(t6);
t12=(C_word)C_slot(t10,C_fix(2));
t13=(C_word)C_slot(t11,C_fix(2));
t14=(C_word)C_slot(t10,C_fix(1));
t15=(C_word)C_eqp(lf[2],t14);
if(C_truep(t15)){
t16=(C_word)C_i_car(t12);
t17=(C_word)C_eqp(((C_word*)t0)[9],t16);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_10317,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=t1,a[9]=t6,a[10]=((C_word*)t0)[7],a[11]=t13,a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* optimizer.scm: 1360 alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[46]))(5,*((C_word*)lf[46]+1),t18,C_SCHEME_FALSE,t2,((C_word*)((C_word*)t0)[8])[1]);}
else{
t18=(C_word)C_i_car(t12);
t19=(C_word)C_eqp(((C_word*)t0)[7],t18);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10470,a[2]=t2,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1385 node-class-set! */
((C_proc4)C_retrieve_symbol_proc(lf[203]))(4,*((C_word*)lf[203]+1),t20,t2,lf[209]);}
else{
/* optimizer.scm: 1388 bomb */
((C_proc3)C_retrieve_symbol_proc(lf[189]))(3,*((C_word*)lf[189]+1),t1,lf[210]);}}}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_UNDEFINED);}}
else{
t10=(C_word)C_eqp(t8,lf[5]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t4);
t12=(C_word)C_i_car(t6);
if(C_truep((C_word)C_i_memq(t11,((C_word*)t0)[2]))){
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10522,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1393 alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[46]))(5,*((C_word*)lf[46]+1),t13,t11,t12,((C_word*)((C_word*)t0)[4])[1]);}
else{
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10537,a[2]=((C_word*)t0)[3],a[3]=t14,tmp=(C_word)a,a+=4,tmp));
t16=((C_word*)t14)[1];
f_10537(t16,t1,t6);}}
else{
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10563,a[2]=((C_word*)t0)[3],a[3]=t12,tmp=(C_word)a,a+=4,tmp));
t14=((C_word*)t12)[1];
f_10563(t14,t1,t6);}}}

/* loop2585 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10563(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10563,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10573,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g25922593 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_10248(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10571 in loop2585 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10563(t3,((C_word*)t0)[2],t2);}

/* loop2572 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10537(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10537,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10547,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g25792580 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_10248(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10545 in loop2572 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10537(t3,((C_word*)t0)[2],t2);}

/* k10520 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10522,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10525,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm: 1394 copy-node! */
((C_proc4)C_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),t3,t4,((C_word*)t0)[3]);}

/* k10523 in k10520 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1395 rec */
t2=((C_word*)((C_word*)t0)[4])[1];
f_10248(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10468 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10470,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1386 node-parameters-set! */
((C_proc4)C_retrieve_symbol_proc(lf[131]))(4,*((C_word*)lf[131]+1),t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k10471 in k10468 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm: 1387 node-subexpressions-set! */
((C_proc4)C_retrieve_symbol_proc(lf[129]))(4,*((C_word*)lf[129]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k10315 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10317(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10317,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[12])+1,t1);
t3=(C_word)C_i_car(((C_word*)t0)[11]);
t4=(C_word)C_eqp(((C_word*)t0)[10],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10326,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[9]);
t7=(C_word)C_i_length(t6);
t8=(C_word)C_eqp(((C_word*)t0)[5],t7);
if(C_truep(t8)){
t9=t5;
f_10326(2,t9,C_SCHEME_UNDEFINED);}
else{
/* optimizer.scm: 1363 quit */
((C_proc4)C_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t5,lf[205],((C_word*)t0)[4]);}}
else{
t5=(C_word)C_i_car(((C_word*)t0)[11]);
t6=(C_word)C_i_assq(t5,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10364,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[2],tmp=(C_word)a,a+=8,tmp);
/* g25342535 */
t8=t7;
f_10364(t8,((C_word*)t0)[8],t6);}
else{
/* optimizer.scm: 1383 bomb */
((C_proc4)C_retrieve_symbol_proc(lf[189]))(4,*((C_word*)lf[189]+1),((C_word*)t0)[8],lf[208],((C_word*)t0)[11]);}}}

/* g2534 in k10315 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10364(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_10364,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10374,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t5,a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t7=(C_word)C_i_cdr(((C_word*)t0)[5]);
t8=(C_word)C_i_length(t7);
t9=(C_word)C_eqp(((C_word*)t0)[3],t8);
if(C_truep(t9)){
t10=t6;
f_10374(2,t10,C_SCHEME_UNDEFINED);}
else{
/* optimizer.scm: 1374 quit */
((C_proc4)C_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t6,lf[207],((C_word*)t0)[2]);}}

/* k10372 in g2534 in k10315 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_10377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 1377 node-class-set! */
((C_proc4)C_retrieve_symbol_proc(lf[203]))(4,*((C_word*)lf[203]+1),t2,((C_word*)t0)[3],lf[5]);}

/* k10375 in k10372 in g2534 in k10315 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10380,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10411,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(((C_word*)t0)[2],C_fix(2));
t5=(C_word)C_i_caddr(t4);
/* optimizer.scm: 1378 take */
((C_proc4)C_retrieve_symbol_proc(lf[206]))(4,*((C_word*)lf[206]+1),t3,t5,C_fix(1));}

/* k10409 in k10375 in k10372 in g2534 in k10315 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1378 node-parameters-set! */
((C_proc4)C_retrieve_symbol_proc(lf[131]))(4,*((C_word*)lf[131]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k10378 in k10375 in k10372 in g2534 in k10315 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10380,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10383,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_a_i_list(&a,2,C_SCHEME_FALSE,((C_word*)t0)[4]);
t4=(C_word)C_i_cddr(((C_word*)t0)[3]);
t5=(C_word)C_a_i_record(&a,4,lf[20],lf[204],t3,t4);
t6=(C_word)C_a_i_list(&a,2,t5,((C_word*)t0)[5]);
/* optimizer.scm: 1379 node-subexpressions-set! */
((C_proc4)C_retrieve_symbol_proc(lf[129]))(4,*((C_word*)lf[129]+1),t2,((C_word*)t0)[2],t6);}

/* k10381 in k10378 in k10375 in k10372 in g2534 in k10315 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1382 rec */
t2=((C_word*)((C_word*)t0)[4])[1];
f_10248(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k10324 in k10315 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10326,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1366 node-class-set! */
((C_proc4)C_retrieve_symbol_proc(lf[203]))(4,*((C_word*)lf[203]+1),t2,((C_word*)t0)[3],lf[204]);}

/* k10327 in k10324 in k10315 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10332,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_a_i_list(&a,2,C_SCHEME_TRUE,((C_word*)t0)[2]);
/* optimizer.scm: 1367 node-parameters-set! */
((C_proc4)C_retrieve_symbol_proc(lf[131]))(4,*((C_word*)lf[131]+1),t2,((C_word*)t0)[3],t3);}

/* k10330 in k10327 in k10324 in k10315 in rec in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cddr(((C_word*)t0)[4]);
/* optimizer.scm: 1368 node-subexpressions-set! */
((C_proc4)C_retrieve_symbol_proc(lf[129]))(4,*((C_word*)lf[129]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k9966 in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9971,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10139,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10230,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm: 1416 lset-difference */
((C_proc5)C_retrieve_symbol_proc(lf[202]))(5,*((C_word*)lf[202]+1),t3,t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* a10229 in k9966 in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10230(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10230,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_i_cdr(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_eqp(t4,t5));}

/* k10137 in k9966 in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10139,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10141,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_10141(t5,((C_word*)t0)[2],t1);}

/* loop2602 in k10137 in k9966 in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10141(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10141,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10149,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10217,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g26092610 */
t6=t3;
f_10149(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10215 in loop2602 in k10137 in k9966 in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10141(t3,((C_word*)t0)[2],t2);}

/* g2609 in loop2602 in k10137 in k9966 in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_10149(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_10149,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_slot(t3,C_fix(3));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10164,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_cdr(t4);
t7=(C_word)C_i_length(t6);
t8=(C_word)C_eqp(((C_word*)t0)[3],t7);
if(C_truep(t8)){
t9=t5;
f_10164(2,t9,C_SCHEME_UNDEFINED);}
else{
/* optimizer.scm: 1406 quit */
((C_proc4)C_retrieve_symbol_proc(lf[200]))(4,*((C_word*)lf[200]+1),t5,lf[201],((C_word*)t0)[2]);}}

/* k10162 in g2609 in loop2602 in k10137 in k9966 in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10164(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10164,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,4,C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(C_word)C_i_car(((C_word*)t0)[6]);
t5=(C_word)C_i_cddr(((C_word*)t0)[6]);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(C_word)C_a_i_record(&a,4,lf[20],lf[197],t3,t6);
t8=(C_word)C_a_i_list(&a,2,t2,t7);
/* optimizer.scm: 1409 node-subexpressions-set! */
((C_proc4)C_retrieve_symbol_proc(lf[129]))(4,*((C_word*)lf[129]+1),((C_word*)t0)[3],((C_word*)t0)[2],t8);}

/* k9969 in k9966 in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9971,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[4])?(C_word)C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(C_word)C_a_i_record(&a,4,lf[20],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9988,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1421 copy-node! */
((C_proc4)C_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),t4,((C_word*)t0)[4],t3);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k9986 in k9969 in k9966 in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9988,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9991,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10059,tmp=(C_word)a,a+=2,tmp);
/* optimizer.scm: 1423 fold-right */
((C_proc5)C_retrieve_symbol_proc(lf[141]))(5,*((C_word*)lf[141]+1),t2,t3,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* a10058 in k9986 in k9969 in k9966 in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_10059,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(t2);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_slot(t6,C_fix(3));
t8=(C_word)C_i_car(t7);
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_slot(t8,C_fix(2));
t11=(C_word)C_slot(t8,C_fix(3));
t12=(C_word)C_a_i_record(&a,4,lf[20],t9,t10,t11);
t13=(C_word)C_a_i_list(&a,2,t12,t3);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,(C_word)C_a_i_record(&a,4,lf[20],lf[5],t5,t13));}

/* k9989 in k9986 in k9969 in k9966 in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9991,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9994,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1432 copy-node! */
((C_proc4)C_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),t2,t1,((C_word*)t0)[2]);}

/* k9992 in k9989 in k9986 in k9969 in k9966 in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9994,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9999,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_9999(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop2668 in k9992 in k9989 in k9986 in k9969 in k9966 in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_9999(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9999,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_cdr(t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_10014,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10043,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1436 gensym */
((C_proc2)C_retrieve_symbol_proc(lf[99]))(2,*((C_word*)lf[99]+1),t6);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10041 in loop2668 in k9992 in k9989 in k9986 in k9969 in k9966 in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10043,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* optimizer.scm: 1436 node-parameters-set! */
((C_proc4)C_retrieve_symbol_proc(lf[131]))(4,*((C_word*)lf[131]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k10012 in loop2668 in k9992 in k9989 in k9986 in k9969 in k9966 in k9963 in k9957 in k9954 in k9948 in k9939 in k9924 in transform in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_10014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10014,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(3));
t3=(C_word)C_a_i_record(&a,4,lf[20],lf[21],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t4=(C_word)C_i_set_car(t2,t3);
t5=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t6=((C_word*)((C_word*)t0)[3])[1];
f_9999(t6,((C_word*)t0)[2],t5);}

/* scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_9468(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_save_and_reclaim((void*)trf_9468,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_9471,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t5,a[7]=t12,a[8]=t8,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=t10,a[12]=t6,tmp=(C_word)a,a+=13,tmp));
t14=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_END_OF_LIST);
t15=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_END_OF_LIST);
t16=C_set_block_item(((C_word*)t0)[5],0,C_fix(0));
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9913,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t8,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1326 rec */
t18=((C_word*)t12)[1];
f_9471(t18,t17,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,t6);}

/* k9911 in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9913,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9920,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1327 delete */
((C_proc5)C_retrieve_symbol_proc(lf[199]))(5,*((C_word*)lf[199]+1),t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[38]+1));}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9918 in k9911 in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1327 lset= */
((C_proc5)C_retrieve_symbol_proc(lf[198]))(5,*((C_word*)lf[198]+1),((C_word*)t0)[3],*((C_word*)lf[38]+1),((C_word*)((C_word*)t0)[2])[1],t1);}

/* rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_9471(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_save_and_reclaim((void*)trf_9471,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(3));
t10=t2;
t11=(C_word)C_slot(t10,C_fix(1));
t12=(C_word)C_eqp(t11,lf[2]);
if(C_truep(t12)){
t13=(C_word)C_i_car(t7);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9535,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t13,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1258 get */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),t14,((C_word*)t0)[9],t13,lf[192]);}
else{
t13=(C_word)C_eqp(t11,lf[27]);
if(C_truep(t13)){
if(C_truep(t3)){
t14=(C_word)C_i_caddr(t7);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9553,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=t9,a[5]=((C_word*)t0)[8],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1266 decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),t1,t14,t15);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t14=(C_word)C_eqp(t11,lf[104]);
if(C_truep(t14)){
t15=((C_word*)((C_word*)t0)[11])[1];
if(C_truep(t15)){
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}
else{
t16=(C_word)C_i_cadr(t7);
t17=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[10])[1],t16);
t18=C_mutate(((C_word *)((C_word*)t0)[10])+1,t17);
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9590,a[2]=t5,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1275 every */
((C_proc4)C_retrieve_symbol_proc(lf[59]))(4,*((C_word*)lf[59]+1),t1,t19,t9);}}
else{
t15=(C_word)C_eqp(t11,lf[193]);
if(C_truep(t15)){
if(C_truep(t4)){
if(C_truep(((C_word*)t0)[6])){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9624,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t17=(C_word)C_i_car(t9);
/* optimizer.scm: 1278 scan-used-variables */
((C_proc4)C_retrieve_symbol_proc(lf[148]))(4,*((C_word*)lf[148]+1),t16,t17,t5);}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}
else{
t16=(C_word)C_eqp(t11,lf[194]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9640,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t9,a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t18=(C_word)C_i_cadr(t7);
/* optimizer.scm: 1283 estimate-foreign-result-size */
((C_proc3)C_retrieve_symbol_proc(lf[195]))(3,*((C_word*)lf[195]+1),t17,t18);}
else{
t17=(C_word)C_eqp(t11,lf[196]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9681,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t9,a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t19=(C_word)C_i_car(t7);
/* optimizer.scm: 1291 estimate-foreign-result-size */
((C_proc3)C_retrieve_symbol_proc(lf[195]))(3,*((C_word*)lf[195]+1),t18,t19);}
else{
t18=(C_word)C_eqp(t11,lf[8]);
if(C_truep(t18)){
t19=(C_word)C_i_car(t9);
t20=(C_word)C_slot(t19,C_fix(1));
t21=(C_word)C_eqp(lf[2],t20);
if(C_truep(t21)){
t22=(C_word)C_slot(t19,C_fix(2));
t23=(C_word)C_i_car(t22);
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9734,a[2]=t1,a[3]=t9,a[4]=t5,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t25=(C_word)C_eqp(t23,((C_word*)t0)[4]);
if(C_truep(t25)){
t26=(C_word)C_eqp(((C_word*)((C_word*)t0)[10])[1],C_fix(0));
if(C_truep(t26)){
t27=(C_word)C_i_cadr(t9);
t28=(C_word)C_slot(t27,C_fix(1));
t29=(C_word)C_eqp(lf[2],t28);
if(C_truep(t29)){
t30=(C_word)C_slot(t27,C_fix(2));
t31=(C_word)C_i_car(t30);
t32=(C_word)C_a_i_cons(&a,2,t31,((C_word*)((C_word*)t0)[3])[1]);
t33=C_mutate(((C_word *)((C_word*)t0)[3])+1,t32);
t34=C_set_block_item(((C_word*)t0)[11],0,C_SCHEME_TRUE);
t35=t24;
f_9734(t35,C_SCHEME_TRUE);}
else{
t30=C_set_block_item(((C_word*)t0)[11],0,C_SCHEME_TRUE);
t31=t24;
f_9734(t31,C_SCHEME_TRUE);}}
else{
t27=t24;
f_9734(t27,C_SCHEME_FALSE);}}
else{
t26=t24;
f_9734(t26,(C_word)C_eqp(t23,((C_word*)t0)[2]));}}
else{
t22=t1;
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,C_SCHEME_FALSE);}}
else{
t19=(C_word)C_eqp(t11,lf[197]);
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
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9843,a[2]=t5,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1317 every */
((C_proc4)C_retrieve_symbol_proc(lf[59]))(4,*((C_word*)lf[59]+1),t1,t25,t9);}}}
else{
t20=(C_word)C_eqp(t11,lf[9]);
if(C_truep(t20)){
t21=(C_word)C_i_car(t9);
t22=(C_word)C_i_car(t7);
/* optimizer.scm: 1318 rec */
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
t21=(C_word)C_eqp(t11,lf[5]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9876,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=t9,tmp=(C_word)a,a+=7,tmp);
t23=(C_word)C_i_car(t9);
t24=(C_word)C_i_car(t7);
/* optimizer.scm: 1320 rec */
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
t22=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9900,a[2]=t5,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1322 every */
((C_proc4)C_retrieve_symbol_proc(lf[59]))(4,*((C_word*)lf[59]+1),t1,t22,t9);}}}}}}}}}}}

/* a9899 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9900(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9900,3,t0,t1,t2);}
/* optimizer.scm: 1322 rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9471(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k9874 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9876,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9887,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1321 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9885 in k9874 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1321 rec */
t2=((C_word*)((C_word*)t0)[4])[1];
f_9471(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* a9842 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9843(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9843,3,t0,t1,t2);}
/* optimizer.scm: 1317 rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9471(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k9732 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_9734(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9734,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9739,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 1310 every */
((C_proc4)C_retrieve_symbol_proc(lf[59]))(4,*((C_word*)lf[59]+1),((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a9738 in k9732 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9739(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9739,3,t0,t1,t2);}
/* optimizer.scm: 1310 rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9471(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k9679 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9681,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_fix(0));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9687,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_9687(t4,t2);}
else{
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t4)){
t5=t3;
f_9687(t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t1);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=t3;
f_9687(t7,C_SCHEME_TRUE);}}}

/* k9685 in k9679 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_9687(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9687,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9692,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1297 every */
((C_proc4)C_retrieve_symbol_proc(lf[59]))(4,*((C_word*)lf[59]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a9691 in k9685 in k9679 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9692(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9692,3,t0,t1,t2);}
/* optimizer.scm: 1297 rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9471(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k9638 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9640,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_fix(0));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9646,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_9646(t4,t2);}
else{
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t4)){
t5=t3;
f_9646(t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t1);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=t3;
f_9646(t7,C_SCHEME_TRUE);}}}

/* k9644 in k9638 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_9646(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9646,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9651,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1289 every */
((C_proc4)C_retrieve_symbol_proc(lf[59]))(4,*((C_word*)lf[59]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a9650 in k9644 in k9638 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9651(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9651,3,t0,t1,t2);}
/* optimizer.scm: 1289 rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9471(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k9622 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9624,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9620,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1280 alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[46]))(5,*((C_word*)lf[46]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9618 in k9622 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* a9589 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9590(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9590,3,t0,t1,t2);}
/* optimizer.scm: 1275 rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9471(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* a9552 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9553(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9553,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[5])+1,t5);
t7=(C_word)C_i_car(((C_word*)t0)[4]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9569,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1270 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t8,t2,((C_word*)t0)[2]);}

/* k9567 in a9552 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1270 rec */
t2=((C_word*)((C_word*)t0)[4])[1];
f_9471(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* k9533 in rec in scan in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9535(C_word c,C_word t0,C_word t1){
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

/* walk in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_9269(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_9269,NULL,5,t0,t1,t2,t3,t4);}
t5=t3;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t3;
t8=(C_word)C_slot(t7,C_fix(3));
t9=t3;
t10=(C_word)C_slot(t9,C_fix(1));
t11=(C_word)C_eqp(t10,lf[27]);
if(C_truep(t11)){
t12=(C_word)C_i_caddr(t6);
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9309,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=t3,a[10]=t1,a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t2)){
if(C_truep((C_word)C_i_cadr(t6))){
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9394,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t8,a[7]=t3,a[8]=t12,a[9]=t13,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 1233 get */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),t14,((C_word*)t0)[2],t2,lf[92]);}
else{
t14=t13;
f_9309(2,t14,C_SCHEME_FALSE);}}
else{
t14=t13;
f_9309(2,t14,C_SCHEME_FALSE);}}
else{
t12=(C_word)C_eqp(t10,lf[9]);
if(C_truep(t12)){
t13=(C_word)C_i_car(t6);
t14=(C_word)C_i_car(t8);
/* optimizer.scm: 1243 walk */
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
t13=(C_word)C_eqp(t10,lf[5]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9420,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t15=(C_word)C_i_car(t6);
t16=(C_word)C_i_car(t8);
/* optimizer.scm: 1245 walk */
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
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9440,a[2]=t15,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp));
t17=((C_word*)t15)[1];
f_9440(t17,t1,t8);}}}}

/* loop2308 in walk in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_9440(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9440,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9448,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9455,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g23152316 */
t6=t3;
f_9448(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9453 in loop2308 in walk in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9440(t3,((C_word*)t0)[2],t2);}

/* g2315 in loop2308 in walk in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_9448(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9448,NULL,3,t0,t1,t2);}
/* optimizer.scm: 1247 walk */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9269(t3,t1,C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}

/* k9418 in walk in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* optimizer.scm: 1246 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_9269(t3,((C_word*)t0)[2],C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}

/* k9392 in walk in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9394,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[9];
f_9309(2,t2,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_listp(((C_word*)t0)[8]))){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 1235 get */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),t2,((C_word*)t0)[2],((C_word*)t0)[5],lf[63]);}
else{
t2=((C_word*)t0)[9];
f_9309(2,t2,C_SCHEME_FALSE);}}}

/* k9338 in k9392 in walk in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9340,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 1236 get-list */
((C_proc5)C_retrieve_symbol_proc(lf[133]))(5,*((C_word*)lf[133]+1),t2,((C_word*)t0)[2],((C_word*)t0)[6],lf[91]);}
else{
t2=((C_word*)t0)[4];
f_9309(2,t2,C_SCHEME_FALSE);}}

/* k9344 in k9338 in k9392 in walk in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9346,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9352,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 1237 get-list */
((C_proc5)C_retrieve_symbol_proc(lf[133]))(5,*((C_word*)lf[133]+1),t2,((C_word*)t0)[2],((C_word*)t0)[6],lf[135]);}
else{
t2=((C_word*)t0)[4];
f_9309(2,t2,C_SCHEME_FALSE);}}

/* k9350 in k9344 in k9338 in k9392 in walk in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9352(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9352,2,t0,t1);}
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
/* optimizer.scm: 1240 scan */
t9=((C_word*)((C_word*)t0)[4])[1];
f_9468(t9,((C_word*)t0)[3],t6,t7,((C_word*)t0)[5],((C_word*)t0)[2],t8);}
else{
t6=((C_word*)t0)[3];
f_9309(2,t6,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[3];
f_9309(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
f_9309(2,t2,C_SCHEME_FALSE);}}

/* k9307 in walk in ##compiler#transform-direct-lambdas! in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm: 1241 transform */
t2=((C_word*)((C_word*)t0)[11])[1];
f_9922(t2,((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[3]);
/* optimizer.scm: 1242 walk */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9269(t3,((C_word*)t0)[10],C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}}

/* ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6907(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
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
C_save_and_reclaim((void*)tr9,(void*)f_6907,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
switch(t6){
case C_fix(1):
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6969,a[2]=t5,a[3]=t8,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t10=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t9,t10,lf[62]);
case C_fix(2):
if(C_truep(C_retrieve(lf[153]))){
t9=(C_word)C_i_length(t8);
t10=(C_word)C_i_car(t7);
t11=(C_word)C_eqp(t9,t10);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7120,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t12,t13,lf[62]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(3):
if(C_truep(C_retrieve(lf[153]))){
if(C_truep((C_word)C_i_nullp(t8))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7195,a[2]=t7,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t10=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t9,t10,lf[62]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(4):
if(C_truep(C_retrieve(lf[153]))){
if(C_truep(C_retrieve(lf[157]))){
t9=(C_word)C_i_length(t8);
t10=(C_word)C_eqp(C_fix(2),t9);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7244,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t12=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t11,t12,lf[62]);}
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
if(C_truep(C_retrieve(lf[153]))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7312,a[2]=t1,a[3]=t5,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t10=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t9,t10,lf[62]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(6):
t9=(C_word)C_i_caddr(t7);
t10=(C_truep(t9)?t9:C_retrieve(lf[157]));
if(C_truep(t10)){
if(C_truep(C_retrieve(lf[153]))){
t11=(C_word)C_i_length(t8);
t12=(C_word)C_eqp(C_fix(1),t11);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7417,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t14=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t13,t14,lf[62]);}
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
t10=(C_truep(t9)?t9:C_retrieve(lf[157]));
if(C_truep(t10)){
if(C_truep(C_retrieve(lf[153]))){
t11=(C_word)C_i_length(t8);
t12=(C_word)C_i_car(t7);
t13=(C_word)C_eqp(t11,t12);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7506,a[2]=t8,a[3]=t1,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t15=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t14,t15,lf[62]);}
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
if(C_truep(C_retrieve(lf[153]))){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7579,a[2]=t8,a[3]=t5,a[4]=t2,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t10=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t9,t10,lf[62]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(9):
if(C_truep(C_retrieve(lf[153]))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7605,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t10=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t9,t10,lf[62]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(10):
if(C_truep(C_retrieve(lf[153]))){
t9=(C_word)C_i_cadddr(t7);
t10=(C_truep(t9)?t9:C_retrieve(lf[157]));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7848,a[2]=t1,a[3]=t5,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t12=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t11,t12,lf[62]);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(11):
if(C_truep(C_retrieve(lf[153]))){
t9=(C_word)C_i_caddr(t7);
t10=(C_truep(t9)?t9:C_retrieve(lf[157]));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7947,a[2]=t8,a[3]=t5,a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t12=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t11,t12,lf[62]);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(12):
if(C_truep(C_retrieve(lf[153]))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8018,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t10=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t9,t10,lf[62]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(13):
if(C_truep(C_retrieve(lf[153]))){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8106,a[2]=t3,a[3]=t8,a[4]=t5,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t10=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t9,t10,lf[62]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(14):
if(C_truep(C_retrieve(lf[153]))){
t9=(C_word)C_i_cadr(t7);
t10=(C_word)C_i_length(t8);
t11=(C_word)C_eqp(t9,t10);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8183,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t12,t13,lf[62]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(15):
if(C_truep(C_retrieve(lf[153]))){
t9=(C_word)C_i_length(t8);
t10=(C_word)C_eqp(C_fix(1),t9);
if(C_truep(t10)){
t11=C_retrieve(lf[157]);
t12=(C_truep(t11)?t11:(C_word)C_i_cadddr(t7));
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8277,a[2]=t8,a[3]=t5,a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t14=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t13,t14,lf[62]);}
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
if(C_truep(C_retrieve(lf[153]))){
t12=(C_word)C_i_not(t9);
t13=(C_truep(t12)?t12:(C_word)C_eqp(t10,t9));
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8382,a[2]=t10,a[3]=t11,a[4]=t1,a[5]=t5,a[6]=t8,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t15=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t14,t15,lf[62]);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(17):
if(C_truep(C_retrieve(lf[153]))){
t9=(C_word)C_i_length(t8);
t10=(C_word)C_i_car(t7);
t11=(C_word)C_eqp(t9,t10);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8472,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t13=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t12,t13,lf[62]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(18):
if(C_truep(C_retrieve(lf[153]))){
if(C_truep((C_word)C_i_nullp(t8))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8551,a[2]=t7,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t10=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t9,t10,lf[62]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(19):
if(C_truep(C_retrieve(lf[153]))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8591,a[2]=t8,a[3]=t1,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t10=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t9,t10,lf[62]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(20):
t9=(C_word)C_i_length(t8);
t10=(C_word)C_i_cadddr(t7);
t11=(C_truep(t10)?t10:C_retrieve(lf[157]));
if(C_truep(t11)){
if(C_truep(C_retrieve(lf[153]))){
t12=(C_word)C_i_car(t7);
t13=(C_word)C_eqp(t9,t12);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8773,a[2]=t8,a[3]=t9,a[4]=t1,a[5]=t5,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t15=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t14,t15,lf[62]);}
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
if(C_truep(C_retrieve(lf[153]))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8858,a[2]=t8,a[3]=t1,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t10=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t9,t10,lf[62]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
case C_fix(22):
t9=(C_word)C_i_car(t7);
t10=(C_word)C_i_length(t8);
t11=(C_word)C_i_cadddr(t7);
if(C_truep(C_retrieve(lf[153]))){
t12=(C_word)C_eqp(t10,t9);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9053,a[2]=t11,a[3]=t1,a[4]=t5,a[5]=t8,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t14=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t13,t14,lf[62]);}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(23):
if(C_truep(C_retrieve(lf[153]))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9133,a[2]=t5,a[3]=t1,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t10=t4;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t9,t10,lf[62]);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
default:
/* optimizer.scm: 1208 bomb */
((C_proc3)C_retrieve_symbol_proc(lf[189]))(3,*((C_word*)lf[189]+1),t1,lf[190]);}}

/* k9131 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9133(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9133,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_length(((C_word*)t0)[4]);
t4=(C_word)C_i_car(((C_word*)t0)[5]);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,t4))){
t5=(C_word)C_i_cadr(((C_word*)t0)[5]);
t6=(C_word)C_a_i_list(&a,2,C_SCHEME_TRUE,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9158,a[2]=t6,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9162,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t9=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* optimizer.scm: 1194 varnode */
((C_proc3)C_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t8,t9);}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9160 in k9131 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9162,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9166,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9168,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9174,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}

/* a9173 in k9160 in k9131 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9174(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_9174,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9182,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_cddr(((C_word*)t0)[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9188,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_9188(t9,t4,t3,t5);}

/* loop in a9173 in k9160 in k9131 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_9188(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_9188,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9208,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_car(t3);
if(C_truep((C_word)C_i_symbolp(t5))){
/* optimizer.scm: 824  varnode */
((C_proc3)C_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t4,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6932,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t5))){
t7=(C_word)C_i_car(t5);
t8=t6;
f_6932(t8,(C_word)C_eqp(lf[45],t7));}
else{
t7=t6;
f_6932(t7,C_SCHEME_FALSE);}}}}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9237,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_i_cdr(t3);
/* optimizer.scm: 1206 loop */
t13=t5;
t14=t6;
t15=t7;
t1=t13;
t2=t14;
t3=t15;
goto loop;}}}

/* k9235 in loop in a9173 in k9160 in k9131 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9237,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6930 in loop in a9173 in k9160 in k9131 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_6932(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[3]);
/* optimizer.scm: 825  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),((C_word*)t0)[2],t2);}
else{
/* optimizer.scm: 826  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k9206 in loop in a9173 in k9160 in k9131 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9212,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 1204 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_9188(t4,t2,C_SCHEME_END_OF_LIST,t3);}

/* k9210 in k9206 in loop in a9173 in k9160 in k9131 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9212,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k9180 in a9173 in k9160 in k9131 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1197 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a9167 in k9160 in k9131 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9168,2,t0,t1);}
/* optimizer.scm: 1196 split-at */
((C_proc4)C_retrieve_symbol_proc(lf[102]))(4,*((C_word*)lf[102]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9164 in k9160 in k9131 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1193 cons* */
((C_proc5)C_retrieve_symbol_proc(lf[170]))(5,*((C_word*)lf[170]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k9156 in k9131 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9158,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[20],lf[8],((C_word*)t0)[2],t1));}

/* k9051 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9053(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9053,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_caddr(((C_word*)t0)[6]);
t3=(C_truep(t2)?t2:C_retrieve(lf[157]));
if(C_truep(t3)){
t4=(C_word)C_eqp(C_retrieve(lf[160]),lf[165]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9097,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1175 fifth */
((C_proc3)C_retrieve_symbol_proc(lf[186]))(3,*((C_word*)lf[186]+1),t5,((C_word*)t0)[6]);}
else{
t5=(C_word)C_i_cadr(((C_word*)t0)[6]);
t6=(C_word)C_a_i_list(&a,2,t5,((C_word*)t0)[2]);
t7=((C_word*)t0)[5];
t8=(C_word)C_a_i_record(&a,4,lf[20],lf[104],t6,t7);
t9=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t8);
t10=((C_word*)t0)[3];
t11=t10;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[188],t9));}}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9095 in k9051 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_9097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9097,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[4];
t4=(C_word)C_a_i_record(&a,4,lf[20],lf[154],t2,t3);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[2];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[187],t5));}

/* k8856 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8858,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8864,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1135 fifth */
((C_proc3)C_retrieve_symbol_proc(lf[186]))(3,*((C_word*)lf[186]+1),t3,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8862 in k8856 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8864,2,t0,t1);}
t2=(C_word)C_i_cadddr(((C_word*)t0)[6]);
t3=(C_truep(C_retrieve(lf[157]))?(C_word)C_i_caddr(((C_word*)t0)[6]):(C_word)C_i_cadr(((C_word*)t0)[6]));
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8873,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8980,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 1139 remove */
((C_proc4)C_retrieve_symbol_proc(lf[3]))(4,*((C_word*)lf[3]+1),t4,t5,((C_word*)t0)[2]);}

/* a8979 in k8862 in k8856 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8980(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_8980,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_eqp(lf[45],t4);
if(C_truep(t5)){
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=(C_word)C_i_car(t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_eqp(((C_word*)t0)[2],t8));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k8871 in k8862 in k8856 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8873(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8873,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8895,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1144 qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t2,((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_car(t1);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[7],t3);
t5=((C_word*)t0)[6];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[184],t4));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8933,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8935,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1152 fold-inner */
((C_proc4)C_retrieve_symbol_proc(lf[181]))(4,*((C_word*)lf[181]+1),t3,t4,t1);}}}

/* a8934 in k8871 in k8862 in k8856 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8935(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_8935,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(C_retrieve(lf[160]),lf[165]);
if(C_truep(t4)){
t5=(C_word)C_a_i_list(&a,1,((C_word*)t0)[4]);
t6=(C_word)C_a_i_list(&a,2,t2,t3);
t7=t1;
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_record(&a,4,lf[20],lf[154],t5,t6));}
else{
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t6=(C_word)C_a_i_list(&a,2,t2,t3);
t7=t1;
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_record(&a,4,lf[20],lf[104],t5,t6));}}

/* k8931 in k8871 in k8862 in k8856 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8933,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[185],t2));}

/* k8893 in k8871 in k8862 in k8856 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8895,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[183],t2));}

/* k8771 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8773,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8802,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8814,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,t6);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a8813 in k8771 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8814(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8814,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8826,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_caddr(((C_word*)t0)[2]);
/* optimizer.scm: 1123 qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t4,t5);}

/* k8824 in a8813 in k8771 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8826,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* optimizer.scm: 1122 append */
((C_proc5)C_retrieve_proc(*((C_word*)lf[6]+1)))(5,*((C_word*)lf[6]+1),((C_word*)t0)[4],((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a8803 in k8771 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8804,2,t0,t1);}
t2=(C_word)C_fixnum_decrease(((C_word*)t0)[3]);
/* optimizer.scm: 1121 split-at */
((C_proc4)C_retrieve_symbol_proc(lf[102]))(4,*((C_word*)lf[102]+1),t1,((C_word*)t0)[2],t2);}

/* k8800 in k8771 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8802,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,4,lf[20],lf[154],((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[182],t3));}

/* k8589 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8591,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_truep(C_retrieve(lf[157]))?(C_word)C_i_caddr(((C_word*)t0)[5]):(C_word)C_i_cadr(((C_word*)t0)[5]));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8600,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8697,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 1090 remove */
((C_proc4)C_retrieve_symbol_proc(lf[3]))(4,*((C_word*)lf[3]+1),t4,t5,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a8696 in k8589 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8697(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_8697,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_eqp(lf[45],t4);
if(C_truep(t5)){
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=(C_word)C_i_car(t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_eqp(((C_word*)t0)[2],t8));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k8598 in k8589 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8600(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8600,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8622,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1095 qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_car(t1);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t3);
t5=((C_word*)t0)[5];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[179],t4));}
else{
t3=(C_word)C_i_cadddr(((C_word*)t0)[3]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(C_retrieve(lf[160]),lf[165]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8669,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8671,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 1103 fold-inner */
((C_proc4)C_retrieve_symbol_proc(lf[181]))(4,*((C_word*)lf[181]+1),t5,t6,t1);}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}}}

/* a8670 in k8598 in k8589 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8671(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8671,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
t5=(C_word)C_a_i_list(&a,2,t2,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[20],lf[154],t4,t5));}

/* k8667 in k8598 in k8589 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8669,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[180],t2));}

/* k8620 in k8598 in k8589 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8622,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[178],t2));}

/* k8549 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8551,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8567,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
/* optimizer.scm: 1077 qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t2,t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8565 in k8549 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8567,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[177],t2));}

/* k8470 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8472,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8501,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[157]))){
t3=(C_word)C_i_cddr(((C_word*)t0)[2]);
t4=(C_word)C_i_pairp(t3);
t5=t2;
f_8501(t5,(C_truep(t4)?(C_word)C_i_caddr(((C_word*)t0)[2]):(C_word)C_i_cadr(((C_word*)t0)[2])));}
else{
t3=t2;
f_8501(t3,(C_word)C_i_cadr(((C_word*)t0)[2]));}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8499 in k8470 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_8501(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8501,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[4];
t4=(C_word)C_a_i_record(&a,4,lf[20],lf[154],t2,t3);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[2];
t7=t6;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[176],t5));}

/* k8380 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8382(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8382,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_caddr(((C_word*)t0)[7]);
t3=(C_truep(t2)?t2:C_retrieve(lf[157]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8416,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cadr(((C_word*)t0)[7]);
t6=(C_word)C_eqp(C_SCHEME_TRUE,((C_word*)t0)[3]);
if(C_truep(t6)){
t7=(C_word)C_fixnum_increase(((C_word*)t0)[2]);
t8=t4;
f_8416(t8,(C_word)C_a_i_list(&a,2,t5,t7));}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t7=(C_word)C_i_car(((C_word*)t0)[3]);
t8=(C_word)C_fixnum_times(((C_word*)t0)[2],t7);
t9=t4;
f_8416(t9,(C_word)C_a_i_list(&a,2,t5,t8));}
else{
t7=t4;
f_8416(t7,(C_word)C_a_i_list(&a,2,t5,((C_word*)t0)[3]));}}}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8414 in k8380 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_8416(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8416,NULL,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(C_word)C_a_i_record(&a,4,lf[20],lf[104],t1,t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[2];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[175],t4));}

/* k8275 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8277(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8277,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_eqp(C_retrieve(lf[160]),t2);
if(C_truep(t3)){
t4=(C_word)C_i_caddr(((C_word*)t0)[5]);
t5=(C_word)C_a_i_list(&a,2,C_SCHEME_TRUE,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8299,a[2]=t5,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8303,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_i_caddr(((C_word*)t0)[5]);
/* optimizer.scm: 1028 varnode */
((C_proc3)C_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t7,t8);}
else{
t4=(C_word)C_i_cadr(((C_word*)t0)[5]);
t5=(C_word)C_eqp(C_retrieve(lf[160]),t4);
if(C_truep(t5)){
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t7=((C_word*)t0)[4];
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[174],t6));}
else{
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8301 in k8275 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1028 cons* */
((C_proc5)C_retrieve_symbol_proc(lf[170]))(5,*((C_word*)lf[170]+1),((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8297 in k8275 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8299,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[20],lf[8],((C_word*)t0)[2],t1));}

/* k8181 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8183,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_eqp(C_retrieve(lf[160]),t2);
if(C_truep(t3)){
t4=(C_word)C_i_cadddr(((C_word*)t0)[5]);
t5=(C_truep(t4)?t4:C_retrieve(lf[157]));
if(C_truep(t5)){
t6=(C_truep(C_retrieve(lf[157]))?(C_word)C_i_cadddr(((C_word*)t0)[5]):(C_word)C_i_caddr(((C_word*)t0)[5]));
t7=(C_word)C_a_i_list(&a,1,t6);
t8=((C_word*)t0)[4];
t9=(C_word)C_a_i_record(&a,4,lf[20],lf[154],t7,t8);
t10=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t9);
t11=((C_word*)t0)[2];
t12=t11;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[173],t10));}
else{
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8104 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8106,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(C_truep(t2)?t2:C_retrieve(lf[157]));
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[6]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8130,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t6=(C_word)C_i_cdr(((C_word*)t0)[2]);
t7=t5;
f_8130(t7,(C_word)C_a_i_cons(&a,2,C_SCHEME_TRUE,t6));}
else{
t6=t5;
f_8130(t6,((C_word*)t0)[2]);}}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8128 in k8104 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_8130(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8130,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8134,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],C_SCHEME_TRUE);
t4=(C_word)C_a_i_record(&a,4,lf[20],lf[172],t3,C_SCHEME_END_OF_LIST);
/* optimizer.scm: 1001 cons* */
((C_proc5)C_retrieve_symbol_proc(lf[170]))(5,*((C_word*)lf[170]+1),t2,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8132 in k8128 in k8104 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8134,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[8],t3,t1));}

/* k8016 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8018(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8018,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_truep(t2)?t2:C_retrieve(lf[157]));
if(C_truep(t3)){
t4=(C_word)C_i_length(((C_word*)t0)[4]);
t5=(C_word)C_i_caddr(((C_word*)t0)[5]);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t4,t5))){
t6=(C_word)C_eqp(t4,C_fix(1));
if(C_truep(t6)){
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t8=((C_word*)t0)[2];
t9=t8;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[171],t7));}
else{
t7=(C_word)C_i_car(((C_word*)t0)[5]);
t8=(C_word)C_a_i_list(&a,2,C_SCHEME_TRUE,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8070,a[2]=t8,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8074,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t11=(C_word)C_i_car(((C_word*)t0)[5]);
/* optimizer.scm: 991  varnode */
((C_proc3)C_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t10,t11);}}
else{
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8072 in k8016 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 991  cons* */
((C_proc5)C_retrieve_symbol_proc(lf[170]))(5,*((C_word*)lf[170]+1),((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8068 in k8016 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_8070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8070,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[20],lf[8],((C_word*)t0)[2],t1));}

/* k7945 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7947,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_7959(t5,t3);}
else{
t5=(C_word)C_i_length(((C_word*)t0)[2]);
t6=(C_word)C_i_car(((C_word*)t0)[5]);
t7=t4;
f_7959(t7,(C_word)C_eqp(t5,t6));}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7957 in k7945 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_7959(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7959,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,2,C_SCHEME_TRUE,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7975,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* optimizer.scm: 976  varnode */
((C_proc3)C_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t5,t6);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7977 in k7957 in k7945 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 976  cons* */
((C_proc5)C_retrieve_symbol_proc(lf[170]))(5,*((C_word*)lf[170]+1),((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7973 in k7957 in k7945 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7975,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[20],lf[8],((C_word*)t0)[2],t1));}

/* k7846 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7848,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_length(((C_word*)t0)[5]);
if(C_truep((C_word)C_and((C_word)C_fixnum_lessp(C_fix(0),t2),(C_word)C_fixnum_lessp(t2,C_fix(3))))){
t3=(C_word)C_i_car(((C_word*)t0)[4]);
t4=(C_word)C_a_i_list(&a,2,C_SCHEME_FALSE,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7877,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_car(((C_word*)t0)[4]);
/* optimizer.scm: 958  varnode */
((C_proc3)C_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t5,t6);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7875 in k7846 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7877,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7885,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm: 961  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t3,t4);}

/* k7883 in k7875 in k7846 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7885,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7889,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_i_caddr(((C_word*)t0)[2]);
/* optimizer.scm: 963  varnode */
((C_proc3)C_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t2,t4);}
else{
t4=t2;
f_7889(2,t4,(C_word)C_i_cadr(((C_word*)t0)[3]));}}

/* k7887 in k7883 in k7875 in k7846 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7889,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,5,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[8],((C_word*)t0)[2],t2));}

/* k7603 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7605,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_length(((C_word*)t0)[5]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7627,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 929  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t3,C_SCHEME_TRUE);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7633,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve(lf[157]))){
t4=(C_word)C_eqp(C_retrieve(lf[160]),lf[169]);
t5=t3;
f_7633(t5,(C_word)C_i_not(t4));}
else{
t4=t3;
f_7633(t4,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7631 in k7603 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_7633(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7633,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7636,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_7636(t3,t1);}
else{
t3=(C_word)C_eqp(C_retrieve(lf[160]),lf[165]);
t4=(C_truep(t3)?(C_word)C_i_caddr(((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=t2;
f_7636(t5,t4);}
else{
t5=(C_word)C_eqp(C_retrieve(lf[160]),lf[168]);
t6=t2;
f_7636(t6,(C_truep(t5)?(C_word)C_i_cadddr(((C_word*)t0)[5]):C_SCHEME_FALSE));}}}

/* k7634 in k7631 in k7603 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_7636(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7636,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7749,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_7749(t10,t6,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop1733 in k7634 in k7631 in k7603 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_7749(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7749,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7783,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* optimizer.scm: 933  gensym */
((C_proc2)C_retrieve_symbol_proc(lf[99]))(2,*((C_word*)lf[99]+1),t3);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7781 in loop1733 in k7634 in k7631 in k7603 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7783(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7783,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop17331746 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7749(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop17331746 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7749(t6,((C_word*)t0)[3],t5);}}

/* k7637 in k7634 in k7631 in k7603 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7639(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7639,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7642,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7714,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_7714(t10,t6,t1);}

/* loop1758 in k7637 in k7634 in k7631 in k7603 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_7714(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7714,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[65]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7743,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g17741775 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7741 in loop1758 in k7637 in k7634 in k7631 in k7603 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7743(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7743,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop17581771 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7714(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop17581771 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7714(t6,((C_word*)t0)[3],t5);}}

/* k7640 in k7637 in k7634 in k7631 in k7603 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7642(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7642,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7647,tmp=(C_word)a,a+=2,tmp);
t3=(C_word)C_eqp(C_retrieve(lf[160]),lf[165]);
t4=(C_truep(t3)?(C_word)C_i_car(((C_word*)t0)[6]):(C_word)C_i_cadr(((C_word*)t0)[6]));
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7686,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 945  fold-boolean */
((C_proc4)C_retrieve_symbol_proc(lf[167]))(4,*((C_word*)lf[167]+1),t6,t7,t1);}

/* a7685 in k7640 in k7637 in k7634 in k7631 in k7603 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7686(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7686,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_list(&a,2,t2,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[20],lf[154],((C_word*)t0)[2],t4));}

/* k7682 in k7640 in k7637 in k7634 in k7631 in k7603 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7684,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t1);
t3=(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[166],t2);
/* optimizer.scm: 935  fold-right */
((C_proc6)C_retrieve_symbol_proc(lf[141]))(6,*((C_word*)lf[141]+1),((C_word*)t0)[5],((C_word*)t0)[4],t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a7646 in k7640 in k7637 in k7634 in k7631 in k7603 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7647,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_list(&a,1,t3);
t6=(C_word)C_a_i_list(&a,2,t2,t4);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[20],lf[5],t5,t6));}

/* k7625 in k7603 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7627,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[164],t2));}

/* k7577 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[6]);
/* g16971698 */
t3=t2;
((C_proc6)C_retrieve_proc(t3))(6,t3,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7504 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7506,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7535,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7543,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_caddr(((C_word*)t0)[5]);
/* optimizer.scm: 915  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t5,t6);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7541 in k7504 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7543,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* optimizer.scm: 914  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k7533 in k7504 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7535,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,4,lf[20],lf[154],((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[163],t3));}

/* k7415 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7417(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7417,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_i_cadr(((C_word*)t0)[5]);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=((C_word*)t0)[4];
t7=(C_word)C_a_i_record(&a,4,lf[20],lf[154],t5,t6);
t8=(C_word)C_a_i_list(&a,1,t7);
t9=(C_word)C_a_i_record(&a,4,lf[20],lf[154],t3,t8);
t10=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t9);
t11=((C_word*)t0)[2];
t12=t11;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[162],t10));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7310 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7312(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7312,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_length(((C_word*)t0)[5]);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(C_word)C_i_caddr(((C_word*)t0)[4]);
t5=(C_word)C_i_not(t4);
t6=(C_truep(t5)?t5:(C_word)C_eqp(t4,C_retrieve(lf[160])));
if(C_truep(t6)){
t7=(C_word)C_i_car(((C_word*)t0)[4]);
t8=(C_word)C_a_i_list(&a,1,t7);
t9=(C_word)C_i_car(((C_word*)t0)[5]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7367,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t8,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t11=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* optimizer.scm: 891  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t10,t11);}
else{
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7365 in k7310 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7367,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_record(&a,4,lf[20],lf[154],((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[2];
t6=t5;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[161],t4));}

/* k7242 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7244,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,2,C_SCHEME_FALSE,t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7264,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[5]);
/* optimizer.scm: 873  varnode */
((C_proc3)C_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t4,t5);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7262 in k7242 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7264,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7272,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm: 876  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t3,t4);}

/* k7270 in k7262 in k7242 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7272,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,5,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t1,t2);
t4=((C_word*)t0)[3];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[20],lf[8],((C_word*)t0)[2],t3));}

/* k7193 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7195,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7211,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
/* optimizer.scm: 864  varnode */
((C_proc3)C_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),t2,t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7209 in k7193 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7211,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[159],t2));}

/* k7118 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7120(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7120,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_caddr(((C_word*)t0)[5]);
t3=(C_truep(t2)?t2:C_retrieve(lf[157]));
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[4]);
t5=(C_word)C_i_cadr(((C_word*)t0)[5]);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=((C_word*)t0)[4];
t8=(C_word)C_a_i_record(&a,4,lf[20],lf[154],t6,t7);
t9=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t8);
t10=((C_word*)t0)[2];
t11=t10;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[158],t9));}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6967 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6969(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6969,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_length(((C_word*)t0)[3]);
t4=(C_word)C_i_car(((C_word*)t0)[4]);
t5=(C_word)C_eqp(t3,t4);
if(C_truep(t5)){
t6=(C_word)C_i_car(((C_word*)t0)[3]);
t7=(C_word)C_i_cadr(((C_word*)t0)[3]);
t8=(C_word)C_slot(t6,C_fix(1));
t9=(C_word)C_eqp(lf[2],t8);
if(C_truep(t9)){
t10=(C_word)C_slot(t7,C_fix(1));
t11=(C_word)C_eqp(lf[2],t10);
if(C_truep(t11)){
t12=(C_word)C_slot(t6,C_fix(2));
t13=(C_word)C_slot(t7,C_fix(2));
if(C_truep((C_word)C_i_equalp(t12,t13))){
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7050,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 840  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t14,C_SCHEME_TRUE);}
else{
t14=t2;
f_6972(t14,C_SCHEME_FALSE);}}
else{
t12=t2;
f_6972(t12,C_SCHEME_FALSE);}}
else{
t10=t2;
f_6972(t10,C_SCHEME_FALSE);}}
else{
t6=t2;
f_6972(t6,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k7048 in k6967 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_7050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7050,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
f_6972(t3,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[156],t2));}

/* k6970 in k6967 in ##compiler#simplify-named-call in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_6972(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6972,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_retrieve(lf[153]))){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=((C_word*)t0)[3];
t5=(C_word)C_a_i_record(&a,4,lf[20],lf[154],t3,t4);
t6=(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t5);
t7=((C_word*)t0)[5];
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[155],t6));}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* ##compiler#rewrite in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6887(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6887r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6887r(t0,t1,t2,t3);}}

static void C_ccall f_6887r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6891,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 818  ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[50]))(4,*((C_word*)lf[50]+1),t4,C_retrieve(lf[150]),t2);}

/* k6889 in ##compiler#rewrite in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6891,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6901,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
/* optimizer.scm: 819  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t3,t2,t4);}

/* k6899 in k6889 in ##compiler#rewrite in k6883 in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 819  ##sys#hash-table-set! */
((C_proc5)C_retrieve_symbol_proc(lf[138]))(5,*((C_word*)lf[138]+1),((C_word*)t0)[3],C_retrieve(lf[150]),((C_word*)t0)[2],t1);}

/* ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6398(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)tr5,(void*)f_6398,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6402,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6834,a[2]=t8,a[3]=t13,a[4]=t10,tmp=(C_word)a,a+=5,tmp));
t15=((C_word*)t13)[1];
f_6834(t15,t11,t2,t3);}

/* loop1298 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_6834(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_6834,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[149]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6867,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
/* g13181319 */
t10=t6;
((C_proc4)C_retrieve_proc(t10))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k6865 in loop1298 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6867,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6847,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_6847(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_6847(t5,t4);}}

/* k6845 in k6865 in loop1298 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_6847(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop12981312 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_6834(t5,((C_word*)t0)[2],t3,t4);}

/* k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6402,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6404,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6449,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6787,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6787(t7,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop1325 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_6787(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_6787,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6795,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6807,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
/* g13531354 */
t10=t6;
f_6795(t10,t7,t8,t9);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k6805 in loop1325 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_6787(t4,((C_word*)t0)[2],t2,t3);}

/* g1353 in loop1325 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_6795(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6795,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6800,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6804,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 742  scan-used-variables */
((C_proc4)C_retrieve_symbol_proc(lf[148]))(4,*((C_word*)lf[148]+1),t5,t3,((C_word*)t0)[2]);}

/* k6802 in g1353 in loop1325 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 742  alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[46]))(5,*((C_word*)lf[46]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k6798 in g1353 in loop1325 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6449(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6449,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6707,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t5,tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_6707(t10,t6,((C_word*)t0)[2]);}

/* loop1363 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_6707(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6707,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6715,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6774,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g13701371 */
t6=t3;
f_6715(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6772 in loop1363 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6707(t3,((C_word*)t0)[2],t2);}

/* g1370 in loop1363 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_6715(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6715,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_memq(t2,((C_word*)((C_word*)t0)[5])[1]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6725,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6747,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 751  filter */
((C_proc4)C_retrieve_symbol_proc(lf[146]))(4,*((C_word*)lf[146]+1),t3,t4,((C_word*)t0)[2]);}}

/* a6746 in g1370 in loop1363 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6747(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6747,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6760,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 752  find-path */
t5=((C_word*)t0)[2];
f_6404(t5,t4,((C_word*)t0)[3],t2);}}

/* k6758 in a6746 in g1370 in loop1363 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm: 752  find-path */
t2=((C_word*)t0)[5];
f_6404(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6723 in g1370 in loop1363 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6729,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6741,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 754  gensym */
((C_proc2)C_retrieve_symbol_proc(lf[99]))(2,*((C_word*)lf[99]+1),t3);}

/* k6739 in k6723 in g1370 in loop1363 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6741,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
/* optimizer.scm: 754  alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[46]))(5,*((C_word*)lf[46]+1),((C_word*)t0)[3],t1,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k6727 in k6723 in g1370 in loop1363 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6729,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6733,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[3]);
/* optimizer.scm: 755  append */
((C_proc5)C_retrieve_proc(*((C_word*)lf[6]+1)))(5,*((C_word*)lf[6]+1),t3,t4,((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}

/* k6731 in k6727 in k6723 in g1370 in loop1363 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6452(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6452,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6455,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6626,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=t3,tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_6626(t8,t4,((C_word*)((C_word*)t0)[7])[1]);}

/* loop1387 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_6626(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6626,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6634,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6694,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g13941395 */
t6=t3;
f_6634(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6692 in loop1387 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6626(t3,((C_word*)t0)[2],t2);}

/* g1394 in loop1387 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_6634(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6634,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6641,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6677,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
/* optimizer.scm: 764  append-map */
((C_proc4)C_retrieve_symbol_proc(lf[147]))(4,*((C_word*)lf[147]+1),t4,t5,t6);}

/* a6676 in g1394 in loop1387 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6677(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6677,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6683,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 765  filter */
((C_proc4)C_retrieve_symbol_proc(lf[146]))(4,*((C_word*)lf[146]+1),t1,t3,((C_word*)t0)[2]);}

/* a6682 in a6676 in g1394 in loop1387 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6683(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6683,3,t0,t1,t2);}
/* optimizer.scm: 765  find-path */
t3=((C_word*)t0)[3];
f_6404(t3,t1,((C_word*)t0)[2],t2);}

/* k6639 in g1394 in loop1387 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6645,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6649,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6651,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 770  filter-map */
((C_proc4)C_retrieve_symbol_proc(lf[145]))(4,*((C_word*)lf[145]+1),t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* a6650 in k6639 in g1394 in loop1387 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6651(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6651,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6664,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_cdr(t2);
/* optimizer.scm: 771  lset<= */
((C_proc5)C_retrieve_symbol_proc(lf[144]))(5,*((C_word*)lf[144]+1),t4,*((C_word*)lf[38]+1),t5,((C_word*)t0)[2]);}}

/* k6662 in a6650 in k6639 in g1394 in loop1387 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?(C_word)C_i_car(((C_word*)t0)[2]):C_SCHEME_FALSE));}

/* k6647 in k6639 in g1394 in loop1387 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 768  alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[46]))(5,*((C_word*)lf[46]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k6643 in k6639 in g1394 in loop1387 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6453 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6458,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 777  topological-sort */
((C_proc4)C_retrieve_symbol_proc(lf[143]))(4,*((C_word*)lf[143]+1),t2,((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[38]+1));}

/* k6456 in k6453 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6458,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6461,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6478,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 782  fold */
((C_proc5)C_retrieve_symbol_proc(lf[142]))(5,*((C_word*)lf[142]+1),t4,t5,((C_word*)t0)[2],t1);}

/* a6477 in k6456 in k6453 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6478(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_6478,4,t0,t1,t2,t3);}
t4=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[5])[1]);
t5=(C_word)C_i_cdr(t4);
t6=(C_word)C_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6491,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t8))){
t9=(C_word)C_i_assq(t6,((C_word*)((C_word*)t0)[2])[1]);
t10=(C_word)C_i_cdr(t9);
t11=(C_word)C_i_memq(t6,t10);
t12=t7;
f_6491(t12,(C_word)C_i_not(t11));}
else{
t9=t7;
f_6491(t9,C_SCHEME_FALSE);}}

/* k6489 in a6477 in k6456 in k6453 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_6491(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6491,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=(C_word)C_i_assq(((C_word*)t0)[7],((C_word*)t0)[5]);
t5=(C_word)C_i_cdr(t4);
t6=(C_word)C_a_i_list(&a,2,t5,((C_word*)t0)[4]);
t7=((C_word*)t0)[3];
t8=t7;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_record(&a,4,lf[20],lf[5],((C_word*)t0)[2],t6));}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6520,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6550,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6552,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 796  fold-right */
((C_proc5)C_retrieve_symbol_proc(lf[141]))(5,*((C_word*)lf[141]+1),t3,t4,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* a6551 in k6489 in a6477 in k6456 in k6453 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6552(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6552,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6598,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 799  gensym */
((C_proc2)C_retrieve_symbol_proc(lf[99]))(2,*((C_word*)lf[99]+1),t4);}

/* k6596 in a6551 in k6489 in a6477 in k6456 in k6453 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6598(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6598,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
t4=(C_word)C_i_assq(((C_word*)t0)[5],((C_word*)t0)[4]);
t5=(C_word)C_i_cdr(t4);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_a_i_record(&a,4,lf[20],lf[9],t3,t6);
t8=(C_word)C_a_i_list(&a,2,t7,((C_word*)t0)[3]);
t9=((C_word*)t0)[2];
t10=t9;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_record(&a,4,lf[20],lf[5],t2,t8));}

/* k6548 in k6489 in a6477 in k6456 in k6453 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 791  fold-right */
((C_proc5)C_retrieve_symbol_proc(lf[141]))(5,*((C_word*)lf[141]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a6519 in k6489 in a6477 in k6456 in k6453 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6520(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6520,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_list(&a,1,t2);
t5=(C_word)C_a_i_record(&a,4,lf[20],lf[21],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_list(&a,2,t5,t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[20],lf[5],t4,t6));}

/* k6459 in k6456 in k6453 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6461,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6470,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 808  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t2,lf[35],lf[140],((C_word*)((C_word*)t0)[3])[1]);}
else{
/* optimizer.scm: 810  values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}}

/* k6468 in k6459 in k6456 in k6453 in k6450 in k6447 in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 809  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE);}

/* find-path in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_6404(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6404,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6410,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6410(t7,t1,t2,C_SCHEME_END_OF_LIST);}

/* find in find-path in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_fcall f_6410(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6410,NULL,4,t0,t1,t2,t3);}
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
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6434,a[2]=t7,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 738  any */
((C_proc4)C_retrieve_symbol_proc(lf[49]))(4,*((C_word*)lf[49]+1),t1,t8,t5);}}}

/* a6433 in find in find-path in k6400 in ##compiler#reorganize-recursive-bindings in k6394 in k6391 in k6388 in k4189 in k3753 in k3750 */
static void C_ccall f_6434(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6434,3,t0,t1,t2);}
/* optimizer.scm: 738  find */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6410(t3,t1,t2,((C_word*)t0)[2]);}

/* register-simplifications in k4189 in k3753 in k3750 */
static void C_ccall f_6383(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_6383r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6383r(t0,t1,t2,t3);}}

static void C_ccall f_6383r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* optimizer.scm: 506  ##sys#hash-table-set! */
((C_proc5)C_retrieve_symbol_proc(lf[138]))(5,*((C_word*)lf[138]+1),t1,*((C_word*)lf[41]+1),t2,t3);}

/* ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_ccall f_6064(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_6064,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6067,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t13=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6071,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6078,a[2]=t11,a[3]=t3,a[4]=t9,a[5]=t7,a[6]=t5,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 458  debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t14,lf[39],lf[136]);}

/* k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_ccall f_6078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6078,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6081,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6098,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t3,lf[134],lf[62]);}

/* k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_ccall f_6098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6098,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6105,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 497  test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6071(t3,t2,lf[134],lf[135]);}
else{
t2=((C_word*)t0)[2];
f_6081(2,t2,C_SCHEME_UNDEFINED);}}

/* k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_ccall f_6105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6105,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6110,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_6110(t6,((C_word*)t0)[2],t2);}

/* loop918 in k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_fcall f_6110(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6110,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6118,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6370,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g925926 */
t6=t3;
f_6118(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6368 in loop918 in k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_ccall f_6370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6110(t3,((C_word*)t0)[2],t2);}

/* g925 in loop918 in k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_fcall f_6118(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6118,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_cadr(t4);
t6=(C_word)C_slot(t5,C_fix(2));
t7=(C_word)C_i_car(t6);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6136,a[2]=t7,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=t1,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6354,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 467  test */
t10=((C_word*)((C_word*)t0)[2])[1];
f_6071(t10,t9,t7,lf[92]);}

/* k6352 in g925 in loop918 in k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_ccall f_6354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_6136(2,t2,C_SCHEME_FALSE);}
else{
/* optimizer.scm: 467  test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6071(t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[63]);}}

/* k6134 in g925 in loop918 in k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_ccall f_6136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6136,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6139,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 468  get-list */
((C_proc5)C_retrieve_symbol_proc(lf[133]))(5,*((C_word*)lf[133]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[91]);}

/* k6137 in k6134 in g925 in loop918 in k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_ccall f_6139(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6139,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
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
f_6145(t9,(C_word)C_eqp(lf[27],t8));}
else{
t7=t2;
f_6145(t7,C_SCHEME_FALSE);}}
else{
t5=t2;
f_6145(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6145(t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6145(t3,C_SCHEME_FALSE);}}

/* k6143 in k6137 in k6134 in g925 in loop918 in k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_fcall f_6145(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6145,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=(C_word)C_slot(t2,C_fix(2));
t4=(C_word)C_i_caddr(t3);
t5=((C_word*)t0)[8];
t6=(C_word)C_slot(t5,C_fix(3));
t7=(C_word)C_i_car(t6);
t8=(C_word)C_slot(t7,C_fix(3));
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6165,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t8,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t7,a[10]=t4,tmp=(C_word)a,a+=11,tmp);
if(C_truep((C_word)C_i_listp(t4))){
t10=(C_word)C_i_cdr(t4);
t11=t9;
f_6165(t11,(C_word)C_i_nullp(t10));}
else{
t10=t9;
f_6165(t10,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k6163 in k6143 in k6137 in k6134 in g925 in loop918 in k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_fcall f_6165(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6165,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[10]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6171,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 479  get-list */
((C_proc5)C_retrieve_symbol_proc(lf[133]))(5,*((C_word*)lf[133]+1),t3,((C_word*)t0)[2],t2,lf[91]);}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k6169 in k6163 in k6143 in k6137 in k6134 in g925 in loop918 in k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_ccall f_6171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t1)){
t3=(C_word)C_i_length(t1);
t4=(C_word)C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=(C_word)C_slot(((C_word*)t0)[9],C_fix(1));
t6=t2;
f_6177(t6,(C_word)C_eqp(lf[4],t5));}
else{
t5=t2;
f_6177(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_6177(t3,C_SCHEME_FALSE);}}

/* k6175 in k6169 in k6163 in k6143 in k6137 in k6134 in g925 in loop918 in k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_fcall f_6177(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6177,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[9],C_fix(3));
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6186,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_slot(t3,C_fix(1));
t6=(C_word)C_eqp(lf[2],t5);
if(C_truep(t6)){
t7=(C_word)C_slot(t3,C_fix(2));
t8=(C_word)C_i_car(t7);
t9=t4;
f_6186(t9,(C_word)C_eqp(((C_word*)t0)[2],t8));}
else{
t7=t4;
f_6186(t7,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k6184 in k6175 in k6169 in k6163 in k6143 in k6137 in k6134 in g925 in loop918 in k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_fcall f_6186(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6186,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[8])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[8])+1,t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 491  node-parameters-set! */
((C_proc4)C_retrieve_symbol_proc(lf[131]))(4,*((C_word*)lf[131]+1),t4,((C_word*)t0)[2],lf[132]);}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k6191 in k6184 in k6175 in k6169 in k6163 in k6143 in k6137 in k6134 in g925 in loop918 in k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_ccall f_6193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6196,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 492  node-subexpressions-set! */
((C_proc4)C_retrieve_symbol_proc(lf[129]))(4,*((C_word*)lf[129]+1),t2,((C_word*)t0)[2],t3);}

/* k6194 in k6191 in k6184 in k6175 in k6169 in k6163 in k6143 in k6137 in k6134 in g925 in loop918 in k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_ccall f_6196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6196,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6199,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6214,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 495  reverse */
((C_proc3)C_retrieve_proc(*((C_word*)lf[130]+1)))(3,*((C_word*)lf[130]+1),t4,t5);}

/* k6212 in k6194 in k6191 in k6184 in k6175 in k6169 in k6163 in k6143 in k6137 in k6134 in g925 in loop918 in k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_ccall f_6214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6214,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* optimizer.scm: 493  node-subexpressions-set! */
((C_proc4)C_retrieve_symbol_proc(lf[129]))(4,*((C_word*)lf[129]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k6197 in k6194 in k6191 in k6184 in k6175 in k6169 in k6163 in k6143 in k6137 in k6134 in g925 in loop918 in k6103 in k6096 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_ccall f_6199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 496  touch */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,f_6067(((C_word*)((C_word*)t0)[2])[1]));}

/* k6079 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_ccall f_6081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6081,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6084,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
/* optimizer.scm: 499  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t2,lf[35],lf[128],((C_word*)((C_word*)t0)[2])[1]);}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)((C_word*)t0)[3])[1]);}}

/* k6082 in k6079 in k6076 in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_ccall f_6084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* test in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static void C_fcall f_6071(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6071,NULL,4,t0,t1,t2,t3);}
/* optimizer.scm: 456  get */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),t1,((C_word*)t0)[2],t2,t3);}

/* touch in ##compiler#perform-pre-optimization! in k4189 in k3753 in k3750 */
static C_word C_fcall f_6067(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_check;
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(C_SCHEME_TRUE);}

/* ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4194(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_4194,4,t0,t1,t2,t3);}
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
t30=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4197,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t31=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4203,tmp=(C_word)a,a+=2,tmp));
t32=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4233,a[2]=t15,tmp=(C_word)a,a+=3,tmp));
t33=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4237,a[2]=t3,a[3]=t23,a[4]=t21,a[5]=t13,tmp=(C_word)a,a+=6,tmp));
t34=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4368,a[2]=t27,a[3]=t19,a[4]=t25,a[5]=t21,a[6]=t7,a[7]=t23,a[8]=t15,tmp=(C_word)a,a+=9,tmp));
t35=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4649,a[2]=t11,a[3]=t3,a[4]=t29,a[5]=t25,a[6]=t5,a[7]=t9,a[8]=t17,a[9]=t21,tmp=(C_word)a,a+=10,tmp));
t36=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5916,a[2]=t25,tmp=(C_word)a,a+=3,tmp));
t37=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5946,a[2]=t25,a[3]=t13,a[4]=t9,a[5]=t5,a[6]=t7,a[7]=t15,a[8]=t2,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 424  perform-pre-optimization! */
((C_proc4)C_retrieve_symbol_proc(lf[127]))(4,*((C_word*)lf[127]+1),t37,t2,t3);}

/* k5944 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5946,2,t0,t1);}
if(C_truep(t1)){
/* optimizer.scm: 425  values */
C_values(4,0,((C_word*)t0)[9],((C_word*)t0)[8],C_SCHEME_TRUE);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5952,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 427  debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t2,lf[39],lf[126]);}}

/* k5950 in k5944 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5952,2,t0,t1);}
t2=C_set_block_item(lf[42] /* simplified-ops */,0,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5956,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 429  walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4368(t4,t3,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k5954 in k5950 in k5944 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5956,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5959,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
/* optimizer.scm: 430  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t2,lf[35],lf[125],((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=t2;
f_5959(2,t3,C_SCHEME_UNDEFINED);}}

/* k5957 in k5954 in k5950 in k5944 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5959,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5995,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(C_retrieve(lf[42])))){
/* optimizer.scm: 431  debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t3,lf[35],lf[124]);}
else{
t4=t3;
f_5995(2,t4,C_SCHEME_FALSE);}}

/* k5993 in k5957 in k5954 in k5950 in k5944 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5995,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6000,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_6000(t5,((C_word*)t0)[2],C_retrieve(lf[42]));}
else{
t2=((C_word*)t0)[2];
f_5962(2,t2,C_SCHEME_UNDEFINED);}}

/* loop869 in k5993 in k5957 in k5954 in k5950 in k5944 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_6000(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6000,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6039,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6012,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_car(t4);
/* optimizer.scm: 434  print* */
((C_proc4)C_retrieve_proc(*((C_word*)lf[123]+1)))(4,*((C_word*)lf[123]+1),t5,C_make_character(9),t6);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6010 in loop869 in k5993 in k5957 in k5954 in k5950 in k5944 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_6012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(1)))){
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 436  print */
((C_proc4)C_retrieve_proc(*((C_word*)lf[121]+1)))(4,*((C_word*)lf[121]+1),((C_word*)t0)[2],C_make_character(9),t3);}
else{
/* optimizer.scm: 437  newline */
((C_proc2)C_retrieve_proc(*((C_word*)lf[122]+1)))(2,*((C_word*)lf[122]+1),((C_word*)t0)[2]);}}

/* k6037 in loop869 in k5993 in k5957 in k5954 in k5950 in k5944 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_6039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6000(t3,((C_word*)t0)[2],t2);}

/* k5960 in k5957 in k5954 in k5950 in k5944 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5965,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
/* optimizer.scm: 439  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t2,lf[35],lf[120],((C_word*)((C_word*)t0)[2])[1]);}
else{
t4=t2;
f_5965(2,t4,C_SCHEME_UNDEFINED);}}

/* k5963 in k5960 in k5957 in k5954 in k5950 in k5944 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5968,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
/* optimizer.scm: 440  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t2,lf[35],lf[119],((C_word*)((C_word*)t0)[2])[1]);}
else{
t4=t2;
f_5968(2,t4,C_SCHEME_UNDEFINED);}}

/* k5966 in k5963 in k5960 in k5957 in k5954 in k5950 in k5944 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5971,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
/* optimizer.scm: 441  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t2,lf[35],lf[118],((C_word*)((C_word*)t0)[2])[1]);}
else{
/* optimizer.scm: 442  values */
C_values(4,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);}}

/* k5969 in k5966 in k5963 in k5960 in k5957 in k5954 in k5950 in k5944 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 442  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* walk-generic in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_5916(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5916,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5920,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5936,a[2]=t6,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* map */
t9=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,t5);}

/* a5935 in walk-generic in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5936(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5936,3,t0,t1,t2);}
/* g853854 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4368(t3,t1,t2,((C_word*)t0)[2]);}

/* k5918 in walk-generic in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5920,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5926,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 420  every */
((C_proc5)C_retrieve_symbol_proc(lf[59]))(5,*((C_word*)lf[59]+1),t2,*((C_word*)lf[38]+1),((C_word*)t0)[2],t1);}

/* k5924 in k5918 in walk-generic in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5926,2,t0,t1);}
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
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[20],t3,t4,t5));}}

/* walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_4649(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4649,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(3));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(t9,lf[2]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t7);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4689,a[2]=((C_word*)t0)[7],a[3]=t7,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t13,tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_4689(t15,t1,t11);}
else{
t11=(C_word)C_eqp(t9,lf[5]);
if(C_truep(t11)){
t12=(C_word)C_i_car(t7);
t13=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4779,a[2]=t12,a[3]=((C_word*)t0)[8],a[4]=t7,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 236  test */
t14=((C_word*)((C_word*)t0)[8])[1];
f_4197(t14,t13,t12,lf[71]);}
else{
t12=(C_word)C_eqp(t9,lf[27]);
if(C_truep(t12)){
t13=(C_word)C_i_caddr(t7);
t14=(C_word)C_i_car(t7);
t15=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4845,a[2]=t9,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t13,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t3,a[9]=t14,a[10]=t5,a[11]=t7,a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
/* optimizer.scm: 246  test */
t16=((C_word*)((C_word*)t0)[8])[1];
f_4197(t16,t15,t14,lf[80]);}
else{
t13=(C_word)C_eqp(t9,lf[8]);
if(C_truep(t13)){
t14=(C_word)C_i_car(t5);
t15=(C_word)C_slot(t14,C_fix(1));
t16=(C_word)C_eqp(t15,lf[2]);
if(C_truep(t16)){
t17=(C_word)C_slot(t14,C_fix(2));
t18=(C_word)C_i_car(t17);
t19=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_5040,a[2]=((C_word*)t0)[2],a[3]=t14,a[4]=((C_word*)t0)[8],a[5]=t7,a[6]=t9,a[7]=t2,a[8]=((C_word*)t0)[4],a[9]=t18,a[10]=((C_word*)t0)[3],a[11]=t3,a[12]=t1,a[13]=((C_word*)t0)[5],a[14]=((C_word*)t0)[9],a[15]=t5,tmp=(C_word)a,a+=16,tmp);
t20=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5738,a[2]=t18,a[3]=((C_word*)t0)[8],a[4]=t19,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 284  test */
t21=((C_word*)((C_word*)t0)[8])[1];
f_4197(t21,t20,t18,lf[92]);}
else{
t17=(C_word)C_eqp(t15,lf[27]);
if(C_truep(t17)){
if(C_truep((C_word)C_i_car(t7))){
/* optimizer.scm: 397  walk-generic */
t18=((C_word*)((C_word*)t0)[4])[1];
f_5916(t18,t1,t2,t9,t7,t5,t3);}
else{
t18=(C_word)C_i_cdr(t7);
t19=(C_word)C_a_i_cons(&a,2,C_SCHEME_TRUE,t18);
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5778,a[2]=t19,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t21=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5780,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* map */
t22=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t22+1)))(4,t22,t20,t21,t5);}}
else{
/* optimizer.scm: 399  walk-generic */
t18=((C_word*)((C_word*)t0)[4])[1];
f_5916(t18,t1,t2,t9,t7,t5,t3);}}}
else{
t14=(C_word)C_eqp(t9,lf[9]);
if(C_truep(t14)){
t15=(C_word)C_i_car(t7);
t16=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5806,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t5,a[7]=t7,a[8]=t15,a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 403  test */
t17=((C_word*)((C_word*)t0)[8])[1];
f_4197(t17,t16,t15,lf[70]);}
else{
/* optimizer.scm: 416  walk-generic */
t15=((C_word*)((C_word*)t0)[4])[1];
f_5916(t15,t1,t2,t9,t7,t5,t3);}}}}}}

/* k5804 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5806,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t1)){
t3=t2;
f_5809(2,t3,t1);}
else{
/* optimizer.scm: 403  test */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4197(t3,t2,((C_word*)t0)[8],lf[67]);}}

/* k5807 in k5804 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5809,2,t0,t1);}
if(C_truep(t1)){
t2=f_4233(((C_word*)((C_word*)t0)[10])[1]);
t3=((C_word*)t0)[9];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[21],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5826,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5908,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 406  test */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4197(t4,t3,((C_word*)t0)[8],lf[117]);}}

/* k5906 in k5807 in k5804 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5908,2,t0,t1);}
t2=(C_word)C_i_not(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_5866(t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5904,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 407  variable-visible? */
((C_proc3)C_retrieve_symbol_proc(lf[116]))(3,*((C_word*)lf[116]+1),t4,((C_word*)t0)[2]);}}

/* k5902 in k5906 in k5807 in k5804 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5866(t2,(C_word)C_i_not(t1));}

/* k5864 in k5906 in k5807 in k5804 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_5866(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5866,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5897,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 408  test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4197(t3,t2,((C_word*)t0)[2],lf[115]);}
else{
t2=((C_word*)t0)[6];
f_5826(t2,C_SCHEME_FALSE);}}

/* k5895 in k5864 in k5906 in k5807 in k5804 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5897,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
f_5826(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5893,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 409  test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4197(t3,t2,((C_word*)t0)[2],lf[91]);}}

/* k5891 in k5895 in k5864 in k5906 in k5807 in k5804 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5893,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_5826(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5885,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* optimizer.scm: 410  expression-has-side-effects? */
((C_proc4)C_retrieve_symbol_proc(lf[89]))(4,*((C_word*)lf[89]+1),t2,t3,((C_word*)t0)[2]);}}

/* k5883 in k5891 in k5895 in k5864 in k5906 in k5807 in k5804 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5826(t2,(C_word)C_i_not(t1));}

/* k5824 in k5807 in k5804 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_5826(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5826,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=f_4233(((C_word*)((C_word*)t0)[8])[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5832,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 412  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t3,lf[35],lf[114],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5856,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* optimizer.scm: 414  walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4368(t4,t2,t3,((C_word*)t0)[2]);}}

/* k5854 in k5824 in k5807 in k5804 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5856,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[9],((C_word*)t0)[2],t2));}

/* k5830 in k5824 in k5807 in k5804 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5832,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[20],lf[21],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}

/* a5779 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5780(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5780,3,t0,t1,t2);}
/* g785786 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4368(t3,t1,t2,((C_word*)t0)[2]);}

/* k5776 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5778,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[20],lf[8],((C_word*)t0)[2],t1));}

/* k5736 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5738,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_5040(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 285  test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4197(t3,t2,((C_word*)t0)[2],lf[63]);}}

/* k5726 in k5736 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[4];
f_5040(2,t3,t2);}
else{
/* optimizer.scm: 286  test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4197(t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[113]);}}

/* k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5040,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[15]);
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[15],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=t2,a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],a[17]=t1,tmp=(C_word)a,a+=18,tmp);
/* optimizer.scm: 288  test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4197(t4,t3,((C_word*)t0)[9],lf[70]);}

/* k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5049(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5049,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[17];
t3=(C_word)C_slot(t2,C_fix(2));
t4=(C_word)C_i_caddr(t3);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5063,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t4,a[6]=((C_word*)t0)[17],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],a[9]=((C_word*)t0)[15],a[10]=((C_word*)t0)[16],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 291  check-signature */
((C_proc5)C_retrieve_symbol_proc(lf[85]))(5,*((C_word*)lf[85]+1),t5,((C_word*)t0)[10],((C_word*)t0)[12],t4);}
else{
if(C_truep((C_word)C_i_memq(((C_word*)t0)[10],C_retrieve(lf[86])))){
t2=(C_word)C_i_car(((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5110,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[14],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t2)){
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_eqp(lf[2],t4);
if(C_truep(t5)){
t6=(C_word)C_slot(t2,C_fix(2));
t7=(C_word)C_i_car(t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5131,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[10],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5256,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 302  test */
t10=((C_word*)((C_word*)t0)[4])[1];
f_4197(t10,t9,t7,lf[92]);}
else{
t8=t3;
f_5110(t8,C_SCHEME_FALSE);}}
else{
t6=t3;
f_5110(t6,C_SCHEME_FALSE);}}
else{
t4=t3;
f_5110(t4,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_5280,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
if(C_truep(((C_word*)t0)[17])){
t3=((C_word*)t0)[17];
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
f_5280(t5,(C_word)C_eqp(lf[27],t4));}
else{
t3=t2;
f_5280(t3,C_SCHEME_FALSE);}}}}

/* k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_5280(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5280,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[17];
t3=(C_word)C_slot(t2,C_fix(2));
t4=(C_word)C_i_caddr(t3);
t5=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_5296,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t4,a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=t3,tmp=(C_word)a,a+=19,tmp);
/* optimizer.scm: 318  decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),((C_word*)t0)[2],t4,t5);}
else{
/* optimizer.scm: 394  walk-generic */
t2=((C_word*)((C_word*)t0)[10])[1];
f_5916(t2,((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[14]);}}

/* a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5296(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[30],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5296,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[18]);
t6=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_5306,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=t3,a[12]=t5,a[13]=((C_word*)t0)[18],a[14]=((C_word*)t0)[10],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],a[17]=((C_word*)t0)[13],a[18]=((C_word*)t0)[14],a[19]=((C_word*)t0)[15],a[20]=t1,a[21]=((C_word*)t0)[16],a[22]=((C_word*)t0)[17],tmp=(C_word)a,a+=23,tmp);
if(C_truep(C_retrieve(lf[107]))){
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5670,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[18],a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 323  test */
t8=((C_word*)((C_word*)t0)[3])[1];
f_4197(t8,t7,((C_word*)t0)[10],lf[112]);}
else{
t7=t6;
f_5306(t7,C_SCHEME_FALSE);}}

/* k5668 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5670,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5707,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 324  test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4197(t3,t2,((C_word*)t0)[2],lf[83]);}
else{
t2=((C_word*)t0)[6];
f_5306(t2,C_SCHEME_FALSE);}}

/* k5705 in k5668 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5707,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_5306(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5684,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t2,((C_word*)t0)[2],lf[111]);}}

/* k5682 in k5705 in k5668 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_eqp(t1,lf[108]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
f_5306(t3,C_SCHEME_TRUE);}
else{
t3=(C_word)C_eqp(t1,lf[109]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
f_5306(t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_cadddr(((C_word*)t0)[2]);
t5=C_retrieve(lf[110]);
t6=((C_word*)t0)[3];
f_5306(t6,(C_word)C_fixnum_lessp(t4,t5));}}}

/* k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_5306(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5306,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5309,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[16],a[5]=((C_word*)t0)[17],a[6]=((C_word*)t0)[18],a[7]=((C_word*)t0)[19],a[8]=((C_word*)t0)[20],a[9]=((C_word*)t0)[21],a[10]=((C_word*)t0)[22],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5372,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[14],a[4]=t2,a[5]=((C_word*)t0)[13],tmp=(C_word)a,a+=6,tmp);
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t3,((C_word*)t0)[14],lf[97]);}
else{
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_5378,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[17],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[14],a[8]=((C_word*)t0)[15],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[21],a[11]=((C_word*)t0)[22],a[12]=((C_word*)t0)[19],a[13]=((C_word*)t0)[6],a[14]=((C_word*)t0)[7],a[15]=((C_word*)t0)[8],a[16]=((C_word*)t0)[9],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[10],a[19]=((C_word*)t0)[11],a[20]=((C_word*)t0)[16],tmp=(C_word)a,a+=21,tmp);
/* optimizer.scm: 343  test */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4197(t3,t2,((C_word*)t0)[12],lf[80]);}}

/* k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5378(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5378,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_length(((C_word*)t0)[20]);
t3=((C_word*)t0)[19];
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
/* optimizer.scm: 345  walk-generic */
t4=((C_word*)((C_word*)t0)[18])[1];
f_5916(t4,((C_word*)t0)[17],((C_word*)t0)[16],((C_word*)t0)[15],((C_word*)t0)[14],((C_word*)t0)[13],((C_word*)t0)[12]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5392,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t5,a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp));
t7=((C_word*)t5)[1];
f_5392(t7,((C_word*)t0)[17],((C_word*)t0)[5],((C_word*)t0)[19],((C_word*)t0)[20],C_SCHEME_END_OF_LIST);}}
else{
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5556,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[17],a[13]=((C_word*)t0)[18],a[14]=((C_word*)t0)[20],tmp=(C_word)a,a+=15,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5657,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[16],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 369  test */
t4=((C_word*)((C_word*)t0)[6])[1];
f_4197(t4,t3,((C_word*)t0)[2],lf[76]);}}

/* k5655 in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_memq(((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[2];
f_5556(t3,(C_word)C_i_not(t2));}
else{
t2=((C_word*)t0)[2];
f_5556(t2,C_SCHEME_FALSE);}}

/* k5554 in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_5556(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5556,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5559,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],tmp=(C_word)a,a+=13,tmp);
/* optimizer.scm: 371  llist-length */
((C_proc3)C_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),t2,((C_word*)t0)[3]);}
else{
/* optimizer.scm: 393  walk-generic */
t2=((C_word*)((C_word*)t0)[13])[1];
f_5916(t2,((C_word*)t0)[12],((C_word*)t0)[2],((C_word*)t0)[11],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);}}

/* k5557 in k5554 in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5559,2,t0,t1);}
t2=(C_word)C_i_length(((C_word*)t0)[12]);
t3=t1;
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
/* optimizer.scm: 373  walk-generic */
t4=((C_word*)((C_word*)t0)[11])[1];
f_5916(t4,((C_word*)t0)[10],t1,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5571,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 375  debugging */
((C_proc6)C_retrieve_symbol_proc(lf[12]))(6,*((C_word*)lf[12]+1),t4,lf[35],lf[105],((C_word*)t0)[2],t1);}}

/* k5569 in k5557 in k5554 in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5571,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5576,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5582,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a5581 in k5569 in k5557 in k5554 in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5582(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_5582,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5599,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5601,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5613,a[2]=t5,a[3]=t4,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5621,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* optimizer.scm: 386  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t7,C_SCHEME_END_OF_LIST);}
else{
t8=(C_word)C_i_length(t3);
t9=(C_word)C_fixnum_times(C_fix(3),t8);
t10=(C_word)C_a_i_list(&a,2,lf[103],t9);
t11=t3;
t12=(C_word)C_a_i_record(&a,4,lf[20],lf[104],t10,t11);
t13=(C_word)C_a_i_list(&a,1,t12);
/* optimizer.scm: 382  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t6,t2,t13);}}

/* k5619 in a5581 in k5569 in k5557 in k5554 in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5621,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* optimizer.scm: 382  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k5611 in a5581 in k5569 in k5557 in k5554 in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5613,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* map */
t3=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a5600 in a5581 in k5569 in k5557 in k5554 in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5601(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5601,3,t0,t1,t2);}
/* g752753 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4368(t3,t1,t2,((C_word*)t0)[2]);}

/* k5597 in a5581 in k5569 in k5557 in k5554 in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5599,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,4,lf[20],lf[8],((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* a5575 in k5569 in k5557 in k5554 in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5576,2,t0,t1);}
/* optimizer.scm: 376  split-at */
((C_proc4)C_retrieve_symbol_proc(lf[102]))(4,*((C_word*)lf[102]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_5392(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_save_and_reclaim((void*)trf_5392,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_nullp(t2);
t7=(C_truep(t6)?t6:(C_word)C_eqp(t3,C_fix(0)));
if(C_truep(t7)){
t8=f_4233(((C_word*)((C_word*)t0)[10])[1]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5417,a[2]=((C_word*)t0)[9],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5419,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5431,a[2]=t10,a[3]=t9,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 352  append-reverse */
((C_proc4)C_retrieve_symbol_proc(lf[98]))(4,*((C_word*)lf[98]+1),t11,t5,t4);}
else{
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5437,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t5,a[7]=((C_word*)t0)[5],a[8]=t4,a[9]=t3,a[10]=t2,a[11]=t1,a[12]=((C_word*)t0)[10],tmp=(C_word)a,a+=13,tmp);
t9=(C_word)C_i_car(t2);
/* optimizer.scm: 353  test */
t10=((C_word*)((C_word*)t0)[2])[1];
f_4197(t10,t8,t9,lf[72]);}}

/* k5435 in loop in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5437(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5437,2,t0,t1);}
if(C_truep(t1)){
t2=f_4233(((C_word*)((C_word*)t0)[12])[1]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5443,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[10]);
/* optimizer.scm: 355  debugging */
((C_proc6)C_retrieve_symbol_proc(lf[12]))(6,*((C_word*)lf[12]+1),t3,lf[35],lf[101],t4,((C_word*)t0)[2]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[10]);
t3=(C_word)C_fixnum_decrease(((C_word*)t0)[9]);
t4=(C_word)C_i_cdr(((C_word*)t0)[8]);
t5=(C_word)C_i_car(((C_word*)t0)[8]);
t6=(C_word)C_a_i_cons(&a,2,t5,((C_word*)t0)[6]);
/* optimizer.scm: 365  loop */
t7=((C_word*)((C_word*)t0)[7])[1];
f_5392(t7,((C_word*)t0)[11],t2,t3,t4,t6);}}

/* k5441 in k5435 in loop in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5443,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5449,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[7]);
/* optimizer.scm: 358  expression-has-side-effects? */
((C_proc4)C_retrieve_symbol_proc(lf[89]))(4,*((C_word*)lf[89]+1),t2,t3,((C_word*)t0)[2]);}

/* k5447 in k5441 in k5435 in loop in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5449,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 361  gensym */
((C_proc3)C_retrieve_symbol_proc(lf[99]))(3,*((C_word*)lf[99]+1),t2,lf[100]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[8]);
t3=(C_word)C_fixnum_decrease(((C_word*)t0)[7]);
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* optimizer.scm: 364  loop */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5392(t5,((C_word*)t0)[9],t2,t3,t4,((C_word*)t0)[4]);}}

/* k5491 in k5447 in k5441 in k5435 in loop in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5493,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5469,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t2,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[6]);
/* optimizer.scm: 362  walk */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4368(t5,t3,t4,((C_word*)t0)[2]);}

/* k5467 in k5491 in k5447 in k5441 in k5435 in loop in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5469,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5473,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
t4=(C_word)C_fixnum_decrease(((C_word*)t0)[5]);
t5=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm: 363  loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_5392(t6,t2,t3,t4,t5,((C_word*)t0)[2]);}

/* k5471 in k5467 in k5491 in k5447 in k5441 in k5435 in loop in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5473,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[5],((C_word*)t0)[2],t2));}

/* k5429 in loop in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5431,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* map */
t3=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a5418 in loop in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5419(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5419,3,t0,t1,t2);}
/* g703704 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4368(t3,t1,t2,((C_word*)t0)[2]);}

/* k5415 in loop in k5376 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5417,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[20],lf[8],((C_word*)t0)[2],t1));}

/* k5370 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_i_structurep(t1,lf[20]);
t3=(C_truep(t2)?lf[94]:lf[95]);
t4=(C_word)C_i_cadddr(((C_word*)t0)[5]);
/* optimizer.scm: 330  debugging */
((C_proc7)C_retrieve_symbol_proc(lf[12]))(7,*((C_word*)lf[12]+1),((C_word*)t0)[4],lf[96],t3,((C_word*)t0)[3],((C_word*)t0)[2],t4);}

/* k5307 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5343,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[7]);}

/* a5342 in k5307 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5343(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5343,3,t0,t1,t2);}
t3=C_retrieve(lf[82]);
/* g653654 */
t4=t3;
((C_proc6)C_retrieve_proc(t4))(6,t4,t1,((C_word*)t0)[2],t2,lf[83],C_SCHEME_TRUE);}

/* k5310 in k5307 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5315,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 337  check-signature */
((C_proc5)C_retrieve_symbol_proc(lf[85]))(5,*((C_word*)lf[85]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4],((C_word*)t0)[5]);}

/* k5313 in k5310 in k5307 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5318,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 338  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t2,lf[35],lf[93],((C_word*)t0)[2]);}

/* k5316 in k5313 in k5310 in k5307 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5318,2,t0,t1);}
t2=f_4233(((C_word*)((C_word*)t0)[9])[1]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5328,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)t0)[5];
t5=(C_word)C_slot(t4,C_fix(3));
t6=(C_word)C_i_car(t5);
/* optimizer.scm: 341  inline-lambda-bindings */
((C_proc7)C_retrieve_symbol_proc(lf[81]))(7,*((C_word*)lf[81]+1),t3,((C_word*)t0)[4],((C_word*)t0)[3],t6,C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* k5326 in k5316 in k5313 in k5310 in k5307 in k5304 in a5295 in k5278 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 340  walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_4368(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5254 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_5131(2,t2,C_SCHEME_FALSE);}
else{
/* optimizer.scm: 302  test */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4197(t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[63]);}}

/* k5129 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5131(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5131,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_eqp(lf[27],t3);
if(C_truep(t4)){
t5=t1;
t6=(C_word)C_slot(t5,C_fix(2));
t7=(C_word)C_i_caddr(t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5152,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t9=(C_word)C_i_car(t7);
/* optimizer.scm: 305  test */
t10=((C_word*)((C_word*)t0)[2])[1];
f_4197(t10,t8,t9,lf[72]);}
else{
t8=((C_word*)t0)[7];
f_5110(t8,C_SCHEME_FALSE);}}
else{
t5=((C_word*)t0)[7];
f_5110(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[7];
f_5110(t2,C_SCHEME_FALSE);}}

/* k5150 in k5129 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5152,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5155,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_5155(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[3]);
/* optimizer.scm: 306  test */
t5=((C_word*)((C_word*)t0)[2])[1];
f_4197(t5,t3,t4,lf[91]);}}

/* k5218 in k5150 in k5129 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5220,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_5155(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5212,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* optimizer.scm: 307  test */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4197(t4,t2,t3,lf[90]);}}

/* k5210 in k5218 in k5150 in k5129 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5155(t2,(C_word)C_i_not(t1));}

/* k5153 in k5150 in k5129 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_5155(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5155,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5189,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5191,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* optimizer.scm: 308  any */
((C_proc4)C_retrieve_symbol_proc(lf[49]))(4,*((C_word*)lf[49]+1),t2,t3,t4);}
else{
t2=((C_word*)t0)[6];
f_5110(t2,C_SCHEME_FALSE);}}

/* a5190 in k5153 in k5150 in k5129 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5191(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5191,3,t0,t1,t2);}
t3=C_retrieve(lf[89]);
/* g584585 */
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,((C_word*)t0)[2]);}

/* k5187 in k5153 in k5150 in k5129 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5189,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_5110(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5164,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 309  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t2,lf[13],lf[88],((C_word*)t0)[2]);}}

/* k5162 in k5187 in k5153 in k5150 in k5129 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5164,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,4,lf[20],lf[21],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
f_5110(t4,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[87],t3));}

/* k5108 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_5110(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* optimizer.scm: 313  walk-generic */
t2=((C_word*)((C_word*)t0)[7])[1];
f_5916(t2,((C_word*)t0)[8],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k5061 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5063,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5066,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 292  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t2,lf[35],lf[84],((C_word*)t0)[2]);}

/* k5064 in k5061 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5066,2,t0,t1);}
t2=f_4233(((C_word*)((C_word*)t0)[9])[1]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5094,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t5=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[6]);}

/* a5093 in k5064 in k5061 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5094(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5094,3,t0,t1,t2);}
t3=C_retrieve(lf[82]);
/* g535536 */
t4=t3;
((C_proc6)C_retrieve_proc(t4))(6,t4,t1,((C_word*)t0)[2],t2,lf[83],C_SCHEME_TRUE);}

/* k5070 in k5064 in k5061 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5072,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5079,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[5];
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_car(t4);
/* optimizer.scm: 296  inline-lambda-bindings */
((C_proc7)C_retrieve_symbol_proc(lf[81]))(7,*((C_word*)lf[81]+1),t2,((C_word*)t0)[4],((C_word*)t0)[3],t5,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k5077 in k5070 in k5064 in k5061 in k5047 in k5038 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_5079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 295  walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_4368(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4843 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4845,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4850,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 247  decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),((C_word*)t0)[6],((C_word*)t0)[5],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
/* optimizer.scm: 262  test */
t3=((C_word*)((C_word*)t0)[13])[1];
f_4197(t3,t2,((C_word*)t0)[9],lf[76]);}}

/* k4942 in k4843 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4944,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4949,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 263  decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[78]))(4,*((C_word*)lf[78]+1),((C_word*)t0)[6],((C_word*)t0)[5],t2);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[8]);
/* optimizer.scm: 275  walk-generic */
t3=((C_word*)((C_word*)t0)[4])[1];
f_5916(t3,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[11],((C_word*)t0)[10],t2);}}

/* a4948 in k4942 in k4843 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4949(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4949,5,t0,t1,t2,t3,t4);}
t5=f_4233(((C_word*)((C_word*)t0)[7])[1]);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4956,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 267  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t6,lf[35],lf[79],t4);}

/* k4954 in a4948 in k4942 in k4843 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4956,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[9]);
t3=(C_word)C_i_cadr(((C_word*)t0)[9]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4996,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t3,a[8]=t2,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t5=(C_word)C_fixnum_increase(((C_word*)t0)[3]);
/* optimizer.scm: 272  build-lambda-list */
((C_proc5)C_retrieve_symbol_proc(lf[74]))(5,*((C_word*)lf[74]+1),t4,((C_word*)t0)[2],t5,C_SCHEME_FALSE);}

/* k4994 in k4954 in a4948 in k4942 in k4843 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4996,2,t0,t1);}
t2=(C_word)C_i_cadddr(((C_word*)t0)[9]);
t3=(C_word)C_a_i_list(&a,4,((C_word*)t0)[8],((C_word*)t0)[7],t1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4976,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[5]);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
/* optimizer.scm: 274  walk */
t7=((C_word*)((C_word*)t0)[2])[1];
f_4368(t7,t4,t5,t6);}

/* k4974 in k4994 in k4954 in a4948 in k4942 in k4843 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4976,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[27],((C_word*)t0)[2],t2));}

/* a4849 in k4843 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4850(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4850,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4856,a[2]=t2,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4868,a[2]=((C_word*)t0)[8],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a4867 in a4849 in k4843 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4868(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4868,4,t0,t1,t2,t3);}
t4=f_4233(((C_word*)((C_word*)t0)[10])[1]);
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm: 252  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t5,lf[35],lf[77],t2);}

/* k4873 in a4867 in a4849 in k4843 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4875,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[11]);
t3=(C_word)C_i_cadr(((C_word*)t0)[11]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4915,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=t3,a[8]=t2,a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4922,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
/* optimizer.scm: 256  test */
t6=((C_word*)((C_word*)t0)[2])[1];
f_4197(t6,t5,((C_word*)t0)[8],lf[76]);}
else{
t6=t5;
f_4922(2,t6,C_SCHEME_FALSE);}}

/* k4920 in k4873 in a4867 in a4849 in k4843 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4922,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4925,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 257  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t2,lf[35],lf[75],((C_word*)t0)[2]);}
else{
/* optimizer.scm: 259  build-lambda-list */
((C_proc5)C_retrieve_symbol_proc(lf[74]))(5,*((C_word*)lf[74]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k4923 in k4920 in k4873 in a4867 in a4849 in k4843 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[4]);
/* optimizer.scm: 258  build-lambda-list */
((C_proc5)C_retrieve_symbol_proc(lf[74]))(5,*((C_word*)lf[74]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2,C_SCHEME_FALSE);}

/* k4913 in k4873 in a4867 in a4849 in k4843 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4915,2,t0,t1);}
t2=(C_word)C_i_cadddr(((C_word*)t0)[9]);
t3=(C_word)C_a_i_list(&a,4,((C_word*)t0)[8],((C_word*)t0)[7],t1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4895,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[5]);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
/* optimizer.scm: 261  walk */
t7=((C_word*)((C_word*)t0)[2])[1];
f_4368(t7,t4,t5,t6);}

/* k4893 in k4913 in k4873 in a4867 in a4849 in k4843 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4895,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[27],((C_word*)t0)[2],t2));}

/* a4855 in a4849 in k4843 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4856,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4862,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 250  partition */
((C_proc4)C_retrieve_symbol_proc(lf[73]))(4,*((C_word*)lf[73]+1),t1,t2,((C_word*)t0)[2]);}

/* a4861 in a4855 in a4849 in k4843 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4862(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4862,3,t0,t1,t2);}
/* optimizer.scm: 250  test */
t3=((C_word*)((C_word*)t0)[2])[1];
f_4197(t3,t1,t2,lf[72]);}

/* k4777 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4779,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4782,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t1)){
t3=t2;
f_4782(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 237  test */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4197(t4,t3,((C_word*)t0)[2],lf[70]);}}

/* k4818 in k4777 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4820,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4827,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 237  test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4197(t3,t2,((C_word*)t0)[2],lf[69]);}
else{
t2=((C_word*)t0)[4];
f_4782(t2,C_SCHEME_FALSE);}}

/* k4825 in k4818 in k4777 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4782(t2,(C_word)C_i_not(t1));}

/* k4780 in k4777 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_4782(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4782,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=f_4233(((C_word*)((C_word*)t0)[8])[1]);
t3=(C_word)C_fixnum_increase(((C_word*)((C_word*)t0)[7])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[7])+1,t3);
t5=(C_word)C_i_cadr(((C_word*)t0)[6]);
/* optimizer.scm: 240  walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_4368(t6,((C_word*)t0)[4],t5,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4808,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4810,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* map */
t4=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[6]);}}

/* a4809 in k4780 in k4777 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4810(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4810,3,t0,t1,t2);}
/* g441442 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4368(t3,t1,t2,((C_word*)t0)[2]);}

/* k4806 in k4780 in k4777 in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4808,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[20],lf[5],((C_word*)t0)[2],t1));}

/* replace in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_4689(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4689,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 221  test */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4197(t4,t3,t2,lf[67]);}

/* k4691 in replace in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4693,2,t0,t1);}
if(C_truep(t1)){
/* replace382 */
t2=((C_word*)((C_word*)t0)[8])[1];
f_4689(t2,((C_word*)t0)[7],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4705,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 222  test */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4197(t3,t2,((C_word*)t0)[4],lf[66]);}}

/* k4703 in k4691 in replace in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4705,2,t0,t1);}
if(C_truep(t1)){
t2=f_4233(((C_word*)((C_word*)t0)[8])[1]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4711,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 224  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t3,lf[35],lf[64],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4734,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 226  ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t2,((C_word*)t0)[5],lf[11]);}}

/* k4732 in k4703 in k4691 in replace in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
/* replace382 */
t2=((C_word*)((C_word*)t0)[7])[1];
f_4689(t2,((C_word*)t0)[6],t1);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_eqp(((C_word*)t0)[4],t2);
if(C_truep(t3)){
/* optimizer.scm: 232  varnode */
((C_proc3)C_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),((C_word*)t0)[6],((C_word*)t0)[4]);}
else{
t4=f_4233(((C_word*)((C_word*)t0)[3])[1]);
t5=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
/* optimizer.scm: 232  varnode */
((C_proc3)C_retrieve_symbol_proc(lf[65]))(3,*((C_word*)lf[65]+1),((C_word*)t0)[6],((C_word*)t0)[4]);}}}

/* k4709 in k4703 in k4691 in replace in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4731,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 225  test */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4197(t3,t2,((C_word*)t0)[2],lf[63]);}

/* k4729 in k4709 in k4703 in k4691 in replace in walk1 in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(t1,C_fix(2));
t3=(C_word)C_i_car(t2);
/* optimizer.scm: 225  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),((C_word*)t0)[2],t3);}

/* walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_4368(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4368,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_memq(t2,C_retrieve(lf[51])))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=((C_word*)((C_word*)t0)[8])[1];
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4382,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=t4,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=t1,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 174  walk1 */
t6=((C_word*)((C_word*)t0)[2])[1];
f_4649(t6,t5,t2,t3);}}

/* k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4382(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4382,2,t0,t1);}
t2=t1;
t3=(C_word)C_slot(t2,C_fix(3));
t4=t1;
t5=(C_word)C_slot(t4,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4401,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_eqp(t5,lf[4]);
if(C_truep(t7)){
t8=(C_word)C_i_car(t3);
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(lf[45],t9);
if(C_truep(t10)){
t11=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[8])[1],C_fix(1));
t12=C_mutate(((C_word *)((C_word*)t0)[8])+1,t11);
t13=f_4233(((C_word*)((C_word*)t0)[7])[1]);
t14=(C_word)C_i_car(t3);
t15=(C_word)C_slot(t14,C_fix(2));
t16=(C_word)C_i_car(t15);
t17=(C_truep(t16)?(C_word)C_i_cadr(t3):(C_word)C_i_caddr(t3));
/* optimizer.scm: 182  walk */
t18=((C_word*)((C_word*)t0)[6])[1];
f_4368(t18,t6,t17,((C_word*)t0)[5]);}
else{
t11=t1;
/* optimizer.scm: 172  simplify */
t12=((C_word*)((C_word*)t0)[10])[1];
f_4237(t12,((C_word*)t0)[9],t11);}}
else{
t8=(C_word)C_eqp(t5,lf[8]);
if(C_truep(t8)){
t9=(C_word)C_i_car(t3);
t10=(C_word)C_slot(t9,C_fix(1));
t11=(C_word)C_eqp(lf[2],t10);
if(C_truep(t11)){
t12=(C_word)C_i_car(t3);
t13=(C_word)C_slot(t12,C_fix(2));
t14=(C_word)C_i_car(t13);
t15=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4462,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t3,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t1,a[9]=t6,a[10]=t14,tmp=(C_word)a,a+=11,tmp);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4608,a[2]=t14,a[3]=((C_word*)t0)[2],a[4]=t15,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),t16,t14,lf[62]);}
else{
t12=t1;
/* optimizer.scm: 172  simplify */
t13=((C_word*)((C_word*)t0)[10])[1];
f_4237(t13,((C_word*)t0)[9],t12);}}
else{
t9=t1;
/* optimizer.scm: 172  simplify */
t10=((C_word*)((C_word*)t0)[10])[1];
f_4237(t10,((C_word*)t0)[9],t9);}}}

/* k4606 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4608,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4614,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 192  foldable? */
((C_proc3)C_retrieve_symbol_proc(lf[60]))(3,*((C_word*)lf[60]+1),t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
f_4462(2,t2,C_SCHEME_FALSE);}}

/* k4612 in k4606 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cddr(((C_word*)t0)[4]);
/* optimizer.scm: 193  every */
((C_proc4)C_retrieve_symbol_proc(lf[59]))(4,*((C_word*)lf[59]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t2);}
else{
t2=((C_word*)t0)[3];
f_4462(2,t2,C_SCHEME_FALSE);}}

/* k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4462(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4462,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4548,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t7=(C_word)C_i_cddr(((C_word*)t0)[4]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4554,a[2]=t3,a[3]=t9,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_4554(t11,t6,t7);}
else{
t2=((C_word*)t0)[8];
/* optimizer.scm: 172  simplify */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4237(t3,((C_word*)t0)[2],t2);}}

/* loop317 in k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_4554(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4554,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(2));
t5=(C_word)C_i_car(t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[45],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t9=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t8);
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t8);
t11=(C_word)C_slot(t2,C_fix(1));
/* loop317330 */
t17=t1;
t18=t11;
t1=t17;
t2=t18;
goto loop;}
else{
t9=C_mutate(((C_word *)((C_word*)t0)[2])+1,t8);
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t8);
t11=(C_word)C_slot(t2,C_fix(1));
/* loop317330 */
t17=t1;
t18=t11;
t1=t17;
t2=t18;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4546 in k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4548,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4468,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4473,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* call-with-current-continuation */
((C_proc3)C_retrieve_proc(*((C_word*)lf[58]+1)))(3,*((C_word*)lf[58]+1),t3,t4);}

/* a4472 in k4546 in k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4473(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4473,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4479,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4496,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_symbol_proc(lf[57]))(4,*((C_word*)lf[57]+1),t1,t3,t4);}

/* a4495 in a4472 in k4546 in k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4496,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4502,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4534,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a4533 in a4495 in a4472 in k4546 in k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4534(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_4534r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4534r(t0,t1,t2);}}

static void C_ccall f_4534r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4540,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* k343348 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a4539 in a4533 in a4495 in a4472 in k4546 in k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4540,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a4501 in a4495 in a4472 in k4546 in k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4502,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4506,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 201  eval */
((C_proc3)C_retrieve_symbol_proc(lf[56]))(3,*((C_word*)lf[56]+1),t2,((C_word*)t0)[2]);}

/* k4504 in a4501 in a4495 in a4472 in k4546 in k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4509,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 202  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),t2,lf[35],lf[55],((C_word*)t0)[2]);}

/* k4507 in k4504 in a4501 in a4495 in a4472 in k4546 in k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4509,2,t0,t1);}
t2=f_4233(((C_word*)((C_word*)t0)[5])[1]);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4532,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 207  qnode */
((C_proc3)C_retrieve_symbol_proc(lf[54]))(3,*((C_word*)lf[54]+1),t4,((C_word*)t0)[2]);}

/* k4530 in k4507 in k4504 in a4501 in a4495 in a4472 in k4546 in k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4532,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[20],lf[8],lf[53],t2));}

/* a4478 in a4472 in k4546 in k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4479(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4479,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4485,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* k343348 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a4484 in a4478 in a4472 in k4546 in k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4485,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4489,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_4489(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=t2;
f_4489(t4,t3);}}

/* k4487 in a4484 in a4478 in a4472 in k4546 in k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_4489(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4489,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 199  lset-adjoin */
((C_proc5)C_retrieve_symbol_proc(lf[52]))(5,*((C_word*)lf[52]+1),t2,*((C_word*)lf[38]+1),C_retrieve(lf[51]),((C_word*)t0)[2]);}

/* k4491 in k4487 in a4484 in a4478 in a4472 in k4546 in k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[51]+1 /* (set! broken-constant-nodes ...) */,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* k4466 in k4546 in k4460 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g346347 */
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k4399 in k4380 in walk in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 172  simplify */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4237(t2,((C_word*)t0)[2],t1);}

/* simplify in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_4237(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4237,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4241,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t4=t2;
t5=(C_word)C_slot(t4,C_fix(1));
/* optimizer.scm: 153  ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[50]))(4,*((C_word*)lf[50]+1),t3,*((C_word*)lf[41]+1),t5);}

/* k4239 in simplify in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4241,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4244,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4252,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 154  any */
((C_proc4)C_retrieve_symbol_proc(lf[49]))(4,*((C_word*)lf[49]+1),t2,t3,t1);}
else{
t3=((C_word*)t0)[6];
t4=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* a4251 in k4239 in simplify in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4252(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4252,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4262,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_i_car(t2);
/* optimizer.scm: 156  match-node */
((C_proc5)C_retrieve_symbol_proc(lf[48]))(5,*((C_word*)lf[48]+1),t4,((C_word*)t0)[2],t5,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k4260 in a4251 in k4239 in simplify in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4262(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4262,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4268,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4309,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4311,a[2]=t5,a[3]=t10,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_4311(t12,t8,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop248 in k4260 in a4251 in k4239 in simplify in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_4311(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4311,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4338,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_4338(t3,t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop248261 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop248261 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g264 in loop248 in k4260 in a4251 in k4239 in simplify in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static C_word C_fcall f_4338(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_assq(t1,((C_word*)t0)[2]);
return((C_word)C_i_cdr(t2));}

/* k4307 in k4260 in a4251 in k4239 in simplify in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4266 in k4260 in a4251 in k4239 in simplify in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4268,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4274,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 159  caar */
((C_proc3)C_retrieve_proc(*((C_word*)lf[47]+1)))(3,*((C_word*)lf[47]+1),t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4272 in k4266 in k4260 in a4251 in k4239 in simplify in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4274(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4274,2,t0,t1);}
t2=(C_word)C_i_assq(t1,((C_word*)((C_word*)t0)[6])[1]);
if(C_truep(t2)){
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_fixnum_increase(t3);
t5=(C_word)C_i_set_cdr(t2,t4);
t6=f_4233(((C_word*)((C_word*)t0)[5])[1]);
/* optimizer.scm: 165  simplify */
t7=((C_word*)((C_word*)t0)[4])[1];
f_4237(t7,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4301,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 163  alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[46]))(5,*((C_word*)lf[46]+1),t3,t1,C_fix(1),((C_word*)((C_word*)t0)[6])[1]);}}

/* k4299 in k4272 in k4266 in k4260 in a4251 in k4239 in simplify in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=f_4233(((C_word*)((C_word*)t0)[5])[1]);
/* optimizer.scm: 165  simplify */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4237(t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4242 in k4239 in simplify in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4244(C_word c,C_word t0,C_word t1){
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

/* touch in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static C_word C_fcall f_4233(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_check;
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(t1);}

/* constant-node? in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_ccall f_4203(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4203,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_eqp(lf[45],t3));}

/* test in ##compiler#perform-high-level-optimizations in k4189 in k3753 in k3750 */
static void C_fcall f_4197(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4197,NULL,4,t0,t1,t2,t3);}
/* optimizer.scm: 147  get */
((C_proc5)C_retrieve_symbol_proc(lf[44]))(5,*((C_word*)lf[44]+1),t1,((C_word*)t0)[2],t2,t3);}

/* ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_3757(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[50],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3757,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_END_OF_LIST;
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
t21=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3760,a[2]=t6,a[3]=t8,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t22=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3783,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t23=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3790,a[2]=t10,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t24=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3795,a[2]=t20,tmp=(C_word)a,a+=3,tmp));
t25=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3829,a[2]=t8,a[3]=t12,a[4]=t14,a[5]=t20,a[6]=t18,a[7]=t16,a[8]=t4,a[9]=t6,a[10]=t10,tmp=(C_word)a,a+=11,tmp));
t26=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4135,a[2]=t2,a[3]=t20,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 113  debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t26,lf[39],lf[40]);}

/* k4133 in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_4135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4135,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4138,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 114  scan */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3829(t3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k4136 in k4133 in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_4138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4138,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4187,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 116  delete-duplicates */
((C_proc4)C_retrieve_symbol_proc(lf[37]))(4,*((C_word*)lf[37]+1),t3,((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[38]+1));}
else{
t3=t2;
f_4141(2,t3,C_SCHEME_UNDEFINED);}}

/* k4185 in k4136 in k4133 in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_4187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 116  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[12]))(5,*((C_word*)lf[12]+1),((C_word*)t0)[2],lf[35],lf[36],t1);}

/* k4139 in k4136 in k4133 in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_4141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4141,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4146,tmp=(C_word)a,a+=2,tmp);
/* for-each */
t3=*((C_word*)lf[34]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)((C_word*)t0)[2])[1]);}

/* a4145 in k4139 in k4136 in k4133 in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_4146(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4146,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4152,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[10]))(5,*((C_word*)lf[10]+1),t1,t2,lf[31],C_SCHEME_TRUE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=(C_word)C_i_car(t3);
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[10]))(5,*((C_word*)lf[10]+1),t1,t2,lf[31],t6);}
else{
/* ##sys#error */
t6=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[33],t3);}}}

/* k4150 in a4145 in k4139 in k4136 in k4133 in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_4152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[10]))(5,*((C_word*)lf[10]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[31],t1);}

/* scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_fcall f_3829(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3829,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(2));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(3));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(t9,lf[2]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t5);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3866,a[2]=t11,a[3]=t1,a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3883,a[2]=t12,a[3]=((C_word*)t0)[9],a[4]=t11,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_memq(t11,t3))){
t14=t13;
f_3883(t14,C_SCHEME_FALSE);}
else{
t14=(C_word)C_i_memq(t11,((C_word*)((C_word*)t0)[8])[1]);
t15=t13;
f_3883(t15,(C_word)C_i_not(t14));}}
else{
t11=(C_word)C_eqp(t9,lf[4]);
t12=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3910,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=t5,a[9]=t9,a[10]=((C_word*)t0)[5],a[11]=t3,a[12]=t1,a[13]=((C_word*)t0)[6],a[14]=t7,a[15]=((C_word*)t0)[7],tmp=(C_word)a,a+=16,tmp);
if(C_truep(t11)){
t13=t12;
f_3910(t13,t11);}
else{
t13=(C_word)C_eqp(t9,lf[29]);
t14=t12;
f_3910(t14,(C_truep(t13)?t13:(C_word)C_eqp(t9,lf[30])));}}}

/* k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_fcall f_3910(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3910,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3913,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[14],a[6]=((C_word*)t0)[15],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[14]);
/* optimizer.scm: 75   scan */
t4=((C_word*)((C_word*)t0)[10])[1];
f_3829(t4,t2,t3,((C_word*)t0)[11]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[9],lf[5]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3936,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[14],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[14]);
/* optimizer.scm: 80   scan */
t5=((C_word*)((C_word*)t0)[10])[1];
f_3829(t5,t3,t4,((C_word*)t0)[11]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[9],lf[7]);
t4=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3960,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[8],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[9],a[15]=((C_word*)t0)[12],tmp=(C_word)a,a+=16,tmp);
if(C_truep(t3)){
t5=t4;
f_3960(t5,t3);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[9],lf[27]);
t6=t4;
f_3960(t6,(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[9],lf[28])));}}}}

/* k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_fcall f_3960(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3960,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[15];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[14],lf[8]);
if(C_truep(t2)){
/* optimizer.scm: 85   touch */
t3=((C_word*)t0)[15];
((C_proc2)C_retrieve_proc(t3))(2,t3,f_3790(((C_word*)((C_word*)t0)[13])[1]));}
else{
t3=(C_word)C_eqp(((C_word*)t0)[14],lf[9]);
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[12]);
t5=(C_word)C_i_car(((C_word*)t0)[11]);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3984,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t5,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t4,a[10]=((C_word*)t0)[15],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm: 90   scan */
t7=((C_word*)((C_word*)t0)[3])[1];
f_3829(t7,t6,t5,((C_word*)t0)[8]);}
else{
/* optimizer.scm: 111  scan-each */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3795(t4,((C_word*)t0)[15],((C_word*)t0)[11],((C_word*)t0)[8]);}}}}

/* k3982 in k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_3984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3984,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3987,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 91   alist-ref */
((C_proc4)C_retrieve_symbol_proc(lf[26]))(4,*((C_word*)lf[26]+1),t2,((C_word*)t0)[9],((C_word*)((C_word*)t0)[2])[1]);}

/* k3985 in k3982 in k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_3987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4089,a[2]=((C_word*)t0)[8],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t4=(C_word)C_i_memq(((C_word*)t0)[8],((C_word*)((C_word*)t0)[2])[1]);
t5=t3;
f_4089(t5,(C_word)C_i_not(t4));}
else{
t4=t3;
f_4089(t4,C_SCHEME_FALSE);}}

/* k4087 in k3985 in k3982 in k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_fcall f_4089(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4089,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4092,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 93   compiler-warning */
((C_proc5)C_retrieve_symbol_proc(lf[23]))(5,*((C_word*)lf[23]+1),t2,lf[24],lf[25],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
f_3990(2,t2,C_SCHEME_UNDEFINED);}}

/* k4090 in k4087 in k3985 in k3982 in k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_4092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4092,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,4,lf[20],lf[21],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
/* optimizer.scm: 97   copy-node! */
((C_proc4)C_retrieve_symbol_proc(lf[22]))(4,*((C_word*)lf[22]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k3988 in k3985 in k3982 in k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_3990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3990,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3993,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4008,a[2]=((C_word*)t0)[8],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t4)){
t5=t3;
f_4008(t5,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_memq(((C_word*)t0)[8],((C_word*)t0)[6]))){
t5=t3;
f_4008(t5,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_memq(((C_word*)t0)[8],((C_word*)((C_word*)t0)[2])[1]))){
t5=t3;
f_4008(t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t6=t3;
f_4008(t6,(C_word)C_eqp(lf[2],t5));}}}}

/* k4006 in k3988 in k3985 in k3982 in k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_fcall f_4008(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4008,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(2));
t3=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_memq(t3,((C_word*)t0)[4]))){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[3];
f_3993(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4020,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4027,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[19]))(2,*((C_word*)lf[19]+1),t5);}}
else{
t2=((C_word*)t0)[3];
f_3993(2,t2,C_SCHEME_UNDEFINED);}}

/* k4025 in k4006 in k3988 in k3985 in k3982 in k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_4027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[16]+1)))(4,*((C_word*)lf[16]+1),t2,lf[18],t1);}

/* k4028 in k4025 in k4006 in k3988 in k3985 in k3982 in k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_4030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4033,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k4031 in k4028 in k4025 in k4006 in k3988 in k3985 in k3982 in k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_4033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[16]+1)))(4,*((C_word*)lf[16]+1),t2,lf[17],((C_word*)t0)[3]);}

/* k4034 in k4031 in k4028 in k4025 in k4006 in k3988 in k3985 in k3982 in k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_4036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4039,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4037 in k4034 in k4031 in k4028 in k4025 in k4006 in k3988 in k3985 in k3982 in k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_4039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4042,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[14]))(3,*((C_word*)lf[14]+1),t2,((C_word*)t0)[2]);}

/* k4040 in k4037 in k4034 in k4031 in k4028 in k4025 in k4006 in k3988 in k3985 in k3982 in k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_4042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 106  debugging */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),((C_word*)t0)[2],lf[13],t1);}

/* k4018 in k4006 in k3988 in k3985 in k3982 in k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_4020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 107  ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[10]))(5,*((C_word*)lf[10]+1),((C_word*)t0)[4],((C_word*)t0)[3],lf[11],((C_word*)t0)[2]);}

/* k3991 in k3988 in k3985 in k3982 in k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_3993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3996,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_memq(((C_word*)t0)[5],((C_word*)t0)[3]))){
/* optimizer.scm: 109  remember */
t3=((C_word*)((C_word*)t0)[7])[1];
f_3783(t3,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
/* optimizer.scm: 108  mark */
t3=((C_word*)((C_word*)t0)[2])[1];
f_3760(t3,t2,((C_word*)t0)[5]);}}

/* k3994 in k3991 in k3988 in k3985 in k3982 in k3958 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_3996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 109  remember */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3783(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3934 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_3936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3936,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3947,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 81   append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[6]+1)))(4,*((C_word*)lf[6]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3945 in k3934 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_3947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 81   scan */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3829(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3911 in k3908 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_3913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=f_3790(((C_word*)((C_word*)t0)[6])[1]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* optimizer.scm: 77   scan-each */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3795(t4,((C_word*)t0)[3],t3,((C_word*)t0)[2]);}

/* k3881 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_fcall f_3883(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3883,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_3866(t4,t3);}
else{
t2=((C_word*)t0)[2];
f_3866(t2,C_SCHEME_UNDEFINED);}}

/* k3864 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_fcall f_3866(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3866,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3870,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3872,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 72   remove */
((C_proc4)C_retrieve_symbol_proc(lf[3]))(4,*((C_word*)lf[3]+1),t2,t3,((C_word*)((C_word*)t0)[4])[1]);}

/* a3871 in k3864 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_3872(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3872,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_eqp(t3,((C_word*)t0)[2]));}

/* k3868 in k3864 in scan in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_3870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* scan-each in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_fcall f_3795(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3795,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3801,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3801(t7,t1,t2);}

/* loop53 in scan-each in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_fcall f_3801(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3801,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3809,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3816,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g6061 */
t6=t3;
f_3809(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3814 in loop53 in scan-each in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_3816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3801(t3,((C_word*)t0)[2],t2);}

/* g60 in loop53 in scan-each in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_fcall f_3809(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3809,NULL,3,t0,t1,t2);}
/* optimizer.scm: 60   scan */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3829(t3,t1,t2,((C_word*)t0)[2]);}

/* touch in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static C_word C_fcall f_3790(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_stack_check;
t1=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t2=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_END_OF_LIST);
return(t2);}

/* remember in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_fcall f_3783(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3783,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3788,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 53   alist-update! */
((C_proc5)C_retrieve_symbol_proc(lf[1]))(5,*((C_word*)lf[1]+1),t4,t2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k3786 in remember in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_ccall f_3788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* mark in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_fcall f_3760(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3760,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3767,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t4)){
t5=t3;
f_3767(t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]);
t6=t3;
f_3767(t6,(C_word)C_i_not(t5));}}

/* k3765 in mark in ##compiler#scan-toplevel-assignments in k3753 in k3750 */
static void C_fcall f_3767(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3767,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[684] = {
{"toplevel:optimizer_scm",(void*)C_optimizer_toplevel},
{"f_3752:optimizer_scm",(void*)f_3752},
{"f_3755:optimizer_scm",(void*)f_3755},
{"f_4191:optimizer_scm",(void*)f_4191},
{"f_14726:optimizer_scm",(void*)f_14726},
{"f_14734:optimizer_scm",(void*)f_14734},
{"f_14739:optimizer_scm",(void*)f_14739},
{"f_14789:optimizer_scm",(void*)f_14789},
{"f_14793:optimizer_scm",(void*)f_14793},
{"f_14749:optimizer_scm",(void*)f_14749},
{"f_14753:optimizer_scm",(void*)f_14753},
{"f_14775:optimizer_scm",(void*)f_14775},
{"f_6390:optimizer_scm",(void*)f_6390},
{"f_13635:optimizer_scm",(void*)f_13635},
{"f_13681:optimizer_scm",(void*)f_13681},
{"f_13783:optimizer_scm",(void*)f_13783},
{"f_13793:optimizer_scm",(void*)f_13793},
{"f_14130:optimizer_scm",(void*)f_14130},
{"f_14122:optimizer_scm",(void*)f_14122},
{"f_13899:optimizer_scm",(void*)f_13899},
{"f_13928:optimizer_scm",(void*)f_13928},
{"f_14098:optimizer_scm",(void*)f_14098},
{"f_14090:optimizer_scm",(void*)f_14090},
{"f_13959:optimizer_scm",(void*)f_13959},
{"f_14012:optimizer_scm",(void*)f_14012},
{"f_14002:optimizer_scm",(void*)f_14002},
{"f_14010:optimizer_scm",(void*)f_14010},
{"f_14184:optimizer_scm",(void*)f_14184},
{"f_14197:optimizer_scm",(void*)f_14197},
{"f_14239:optimizer_scm",(void*)f_14239},
{"f_14223:optimizer_scm",(void*)f_14223},
{"f_14227:optimizer_scm",(void*)f_14227},
{"f_14219:optimizer_scm",(void*)f_14219},
{"f_14405:optimizer_scm",(void*)f_14405},
{"f_14418:optimizer_scm",(void*)f_14418},
{"f_14424:optimizer_scm",(void*)f_14424},
{"f_14476:optimizer_scm",(void*)f_14476},
{"f_14468:optimizer_scm",(void*)f_14468},
{"f_14452:optimizer_scm",(void*)f_14452},
{"f_14456:optimizer_scm",(void*)f_14456},
{"f_14460:optimizer_scm",(void*)f_14460},
{"f_6393:optimizer_scm",(void*)f_6393},
{"f_13276:optimizer_scm",(void*)f_13276},
{"f_13298:optimizer_scm",(void*)f_13298},
{"f_13378:optimizer_scm",(void*)f_13378},
{"f_13336:optimizer_scm",(void*)f_13336},
{"f_13370:optimizer_scm",(void*)f_13370},
{"f_13374:optimizer_scm",(void*)f_13374},
{"f_13362:optimizer_scm",(void*)f_13362},
{"f_13334:optimizer_scm",(void*)f_13334},
{"f_13472:optimizer_scm",(void*)f_13472},
{"f_13492:optimizer_scm",(void*)f_13492},
{"f_6396:optimizer_scm",(void*)f_6396},
{"f_6885:optimizer_scm",(void*)f_6885},
{"f_10651:optimizer_scm",(void*)f_10651},
{"f_13149:optimizer_scm",(void*)f_13149},
{"f_13152:optimizer_scm",(void*)f_13152},
{"f_13155:optimizer_scm",(void*)f_13155},
{"f_13158:optimizer_scm",(void*)f_13158},
{"f_13161:optimizer_scm",(void*)f_13161},
{"f_13164:optimizer_scm",(void*)f_13164},
{"f_13247:optimizer_scm",(void*)f_13247},
{"f_13167:optimizer_scm",(void*)f_13167},
{"f_13170:optimizer_scm",(void*)f_13170},
{"f_13173:optimizer_scm",(void*)f_13173},
{"f_13241:optimizer_scm",(void*)f_13241},
{"f_13176:optimizer_scm",(void*)f_13176},
{"f_13179:optimizer_scm",(void*)f_13179},
{"f_13238:optimizer_scm",(void*)f_13238},
{"f_11428:optimizer_scm",(void*)f_11428},
{"f_11446:optimizer_scm",(void*)f_11446},
{"f_11452:optimizer_scm",(void*)f_11452},
{"f_11432:optimizer_scm",(void*)f_11432},
{"f_13182:optimizer_scm",(void*)f_13182},
{"f_13230:optimizer_scm",(void*)f_13230},
{"f_13228:optimizer_scm",(void*)f_13228},
{"f_13185:optimizer_scm",(void*)f_13185},
{"f_13188:optimizer_scm",(void*)f_13188},
{"f_13191:optimizer_scm",(void*)f_13191},
{"f_13215:optimizer_scm",(void*)f_13215},
{"f_13194:optimizer_scm",(void*)f_13194},
{"f_13197:optimizer_scm",(void*)f_13197},
{"f_13200:optimizer_scm",(void*)f_13200},
{"f_13203:optimizer_scm",(void*)f_13203},
{"f_13206:optimizer_scm",(void*)f_13206},
{"f_13209:optimizer_scm",(void*)f_13209},
{"f_12908:optimizer_scm",(void*)f_12908},
{"f_12914:optimizer_scm",(void*)f_12914},
{"f_13125:optimizer_scm",(void*)f_13125},
{"f_13135:optimizer_scm",(void*)f_13135},
{"f_13099:optimizer_scm",(void*)f_13099},
{"f_13109:optimizer_scm",(void*)f_13109},
{"f_13069:optimizer_scm",(void*)f_13069},
{"f_13078:optimizer_scm",(void*)f_13078},
{"f_13081:optimizer_scm",(void*)f_13081},
{"f_13039:optimizer_scm",(void*)f_13039},
{"f_13049:optimizer_scm",(void*)f_13049},
{"f_12948:optimizer_scm",(void*)f_12948},
{"f_12953:optimizer_scm",(void*)f_12953},
{"f_12991:optimizer_scm",(void*)f_12991},
{"f_12976:optimizer_scm",(void*)f_12976},
{"f_12987:optimizer_scm",(void*)f_12987},
{"f_12983:optimizer_scm",(void*)f_12983},
{"f_12710:optimizer_scm",(void*)f_12710},
{"f_12716:optimizer_scm",(void*)f_12716},
{"f_12885:optimizer_scm",(void*)f_12885},
{"f_12895:optimizer_scm",(void*)f_12895},
{"f_12825:optimizer_scm",(void*)f_12825},
{"f_12854:optimizer_scm",(void*)f_12854},
{"f_12815:optimizer_scm",(void*)f_12815},
{"f_12811:optimizer_scm",(void*)f_12811},
{"f_12753:optimizer_scm",(void*)f_12753},
{"f_12767:optimizer_scm",(void*)f_12767},
{"f_12777:optimizer_scm",(void*)f_12777},
{"f_12182:optimizer_scm",(void*)f_12182},
{"f_12196:optimizer_scm",(void*)f_12196},
{"f_12203:optimizer_scm",(void*)f_12203},
{"f_12206:optimizer_scm",(void*)f_12206},
{"f_12215:optimizer_scm",(void*)f_12215},
{"f_12367:optimizer_scm",(void*)f_12367},
{"f_12396:optimizer_scm",(void*)f_12396},
{"f_12222:optimizer_scm",(void*)f_12222},
{"f_12318:optimizer_scm",(void*)f_12318},
{"f_12351:optimizer_scm",(void*)f_12351},
{"f_12331:optimizer_scm",(void*)f_12331},
{"f_12225:optimizer_scm",(void*)f_12225},
{"f_12446:optimizer_scm",(void*)f_12446},
{"f_12687:optimizer_scm",(void*)f_12687},
{"f_12697:optimizer_scm",(void*)f_12697},
{"f_12628:optimizer_scm",(void*)f_12628},
{"f_12649:optimizer_scm",(void*)f_12649},
{"f_12647:optimizer_scm",(void*)f_12647},
{"f_12643:optimizer_scm",(void*)f_12643},
{"f_12575:optimizer_scm",(void*)f_12575},
{"f_12580:optimizer_scm",(void*)f_12580},
{"f_12590:optimizer_scm",(void*)f_12590},
{"f_12512:optimizer_scm",(void*)f_12512},
{"f_12510:optimizer_scm",(void*)f_12510},
{"f_12480:optimizer_scm",(void*)f_12480},
{"f_12485:optimizer_scm",(void*)f_12485},
{"f_12495:optimizer_scm",(void*)f_12495},
{"f_12431:optimizer_scm",(void*)f_12431},
{"f_12228:optimizer_scm",(void*)f_12228},
{"f_12303:optimizer_scm",(void*)f_12303},
{"f_12291:optimizer_scm",(void*)f_12291},
{"f_12287:optimizer_scm",(void*)f_12287},
{"f_12194:optimizer_scm",(void*)f_12194},
{"f_11773:optimizer_scm",(void*)f_11773},
{"f_12134:optimizer_scm",(void*)f_12134},
{"f_11899:optimizer_scm",(void*)f_11899},
{"f_12111:optimizer_scm",(void*)f_12111},
{"f_12121:optimizer_scm",(void*)f_12121},
{"f_12032:optimizer_scm",(void*)f_12032},
{"f_12037:optimizer_scm",(void*)f_12037},
{"f_12105:optimizer_scm",(void*)f_12105},
{"f_12064:optimizer_scm",(void*)f_12064},
{"f_12102:optimizer_scm",(void*)f_12102},
{"f_11782:optimizer_scm",(void*)f_11782},
{"f_11875:optimizer_scm",(void*)f_11875},
{"f_11885:optimizer_scm",(void*)f_11885},
{"f_11858:optimizer_scm",(void*)f_11858},
{"f_11863:optimizer_scm",(void*)f_11863},
{"f_11817:optimizer_scm",(void*)f_11817},
{"f_11822:optimizer_scm",(void*)f_11822},
{"f_11832:optimizer_scm",(void*)f_11832},
{"f_11780:optimizer_scm",(void*)f_11780},
{"f_12094:optimizer_scm",(void*)f_12094},
{"f_12080:optimizer_scm",(void*)f_12080},
{"f_12078:optimizer_scm",(void*)f_12078},
{"f_11901:optimizer_scm",(void*)f_11901},
{"f_12025:optimizer_scm",(void*)f_12025},
{"f_12023:optimizer_scm",(void*)f_12023},
{"f_11989:optimizer_scm",(void*)f_11989},
{"f_12008:optimizer_scm",(void*)f_12008},
{"f_11997:optimizer_scm",(void*)f_11997},
{"f_11921:optimizer_scm",(void*)f_11921},
{"f_11945:optimizer_scm",(void*)f_11945},
{"f_11972:optimizer_scm",(void*)f_11972},
{"f_11943:optimizer_scm",(void*)f_11943},
{"f_11939:optimizer_scm",(void*)f_11939},
{"f_11931:optimizer_scm",(void*)f_11931},
{"f_11462:optimizer_scm",(void*)f_11462},
{"f_11468:optimizer_scm",(void*)f_11468},
{"f_11502:optimizer_scm",(void*)f_11502},
{"f_11724:optimizer_scm",(void*)f_11724},
{"f_11739:optimizer_scm",(void*)f_11739},
{"f_11732:optimizer_scm",(void*)f_11732},
{"f_11621:optimizer_scm",(void*)f_11621},
{"f_11637:optimizer_scm",(void*)f_11637},
{"f_11690:optimizer_scm",(void*)f_11690},
{"f_11694:optimizer_scm",(void*)f_11694},
{"f_11657:optimizer_scm",(void*)f_11657},
{"f_11666:optimizer_scm",(void*)f_11666},
{"f_11676:optimizer_scm",(void*)f_11676},
{"f_11588:optimizer_scm",(void*)f_11588},
{"f_11593:optimizer_scm",(void*)f_11593},
{"f_11608:optimizer_scm",(void*)f_11608},
{"f_11601:optimizer_scm",(void*)f_11601},
{"f_11564:optimizer_scm",(void*)f_11564},
{"f_11576:optimizer_scm",(void*)f_11576},
{"f_11513:optimizer_scm",(void*)f_11513},
{"f_11534:optimizer_scm",(void*)f_11534},
{"f_11531:optimizer_scm",(void*)f_11531},
{"f_11466:optimizer_scm",(void*)f_11466},
{"f_11181:optimizer_scm",(void*)f_11181},
{"f_11187:optimizer_scm",(void*)f_11187},
{"f_11221:optimizer_scm",(void*)f_11221},
{"f_11323:optimizer_scm",(void*)f_11323},
{"f_11338:optimizer_scm",(void*)f_11338},
{"f_11331:optimizer_scm",(void*)f_11331},
{"f_11314:optimizer_scm",(void*)f_11314},
{"f_11280:optimizer_scm",(void*)f_11280},
{"f_11289:optimizer_scm",(void*)f_11289},
{"f_11301:optimizer_scm",(void*)f_11301},
{"f_11232:optimizer_scm",(void*)f_11232},
{"f_11253:optimizer_scm",(void*)f_11253},
{"f_11250:optimizer_scm",(void*)f_11250},
{"f_11185:optimizer_scm",(void*)f_11185},
{"f_11048:optimizer_scm",(void*)f_11048},
{"f_11054:optimizer_scm",(void*)f_11054},
{"f_11098:optimizer_scm",(void*)f_11098},
{"f_11103:optimizer_scm",(void*)f_11103},
{"f_11110:optimizer_scm",(void*)f_11110},
{"f_11171:optimizer_scm",(void*)f_11171},
{"f_11167:optimizer_scm",(void*)f_11167},
{"f_11125:optimizer_scm",(void*)f_11125},
{"f_11159:optimizer_scm",(void*)f_11159},
{"f_11152:optimizer_scm",(void*)f_11152},
{"f_11123:optimizer_scm",(void*)f_11123},
{"f_11088:optimizer_scm",(void*)f_11088},
{"f_11066:optimizer_scm",(void*)f_11066},
{"f_11073:optimizer_scm",(void*)f_11073},
{"f_10760:optimizer_scm",(void*)f_10760},
{"f_10973:optimizer_scm",(void*)f_10973},
{"f_11035:optimizer_scm",(void*)f_11035},
{"f_10981:optimizer_scm",(void*)f_10981},
{"f_11006:optimizer_scm",(void*)f_11006},
{"f_10996:optimizer_scm",(void*)f_10996},
{"f_11000:optimizer_scm",(void*)f_11000},
{"f_10971:optimizer_scm",(void*)f_10971},
{"f_10763:optimizer_scm",(void*)f_10763},
{"f_10939:optimizer_scm",(void*)f_10939},
{"f_10954:optimizer_scm",(void*)f_10954},
{"f_10947:optimizer_scm",(void*)f_10947},
{"f_10922:optimizer_scm",(void*)f_10922},
{"f_10934:optimizer_scm",(void*)f_10934},
{"f_10868:optimizer_scm",(void*)f_10868},
{"f_10892:optimizer_scm",(void*)f_10892},
{"f_10886:optimizer_scm",(void*)f_10886},
{"f_10850:optimizer_scm",(void*)f_10850},
{"f_10803:optimizer_scm",(void*)f_10803},
{"f_10806:optimizer_scm",(void*)f_10806},
{"f_10811:optimizer_scm",(void*)f_10811},
{"f_10826:optimizer_scm",(void*)f_10826},
{"f_10819:optimizer_scm",(void*)f_10819},
{"f_10654:optimizer_scm",(void*)f_10654},
{"f_10660:optimizer_scm",(void*)f_10660},
{"f_10691:optimizer_scm",(void*)f_10691},
{"f_10695:optimizer_scm",(void*)f_10695},
{"f_10699:optimizer_scm",(void*)f_10699},
{"f_10658:optimizer_scm",(void*)f_10658},
{"f_9266:optimizer_scm",(void*)f_9266},
{"f_10646:optimizer_scm",(void*)f_10646},
{"f_10649:optimizer_scm",(void*)f_10649},
{"f_9922:optimizer_scm",(void*)f_9922},
{"f_10636:optimizer_scm",(void*)f_10636},
{"f_10634:optimizer_scm",(void*)f_10634},
{"f_9926:optimizer_scm",(void*)f_9926},
{"f_9941:optimizer_scm",(void*)f_9941},
{"f_9950:optimizer_scm",(void*)f_9950},
{"f_9956:optimizer_scm",(void*)f_9956},
{"f_9959:optimizer_scm",(void*)f_9959},
{"f_9965:optimizer_scm",(void*)f_9965},
{"f_10248:optimizer_scm",(void*)f_10248},
{"f_10563:optimizer_scm",(void*)f_10563},
{"f_10573:optimizer_scm",(void*)f_10573},
{"f_10537:optimizer_scm",(void*)f_10537},
{"f_10547:optimizer_scm",(void*)f_10547},
{"f_10522:optimizer_scm",(void*)f_10522},
{"f_10525:optimizer_scm",(void*)f_10525},
{"f_10470:optimizer_scm",(void*)f_10470},
{"f_10473:optimizer_scm",(void*)f_10473},
{"f_10317:optimizer_scm",(void*)f_10317},
{"f_10364:optimizer_scm",(void*)f_10364},
{"f_10374:optimizer_scm",(void*)f_10374},
{"f_10377:optimizer_scm",(void*)f_10377},
{"f_10411:optimizer_scm",(void*)f_10411},
{"f_10380:optimizer_scm",(void*)f_10380},
{"f_10383:optimizer_scm",(void*)f_10383},
{"f_10326:optimizer_scm",(void*)f_10326},
{"f_10329:optimizer_scm",(void*)f_10329},
{"f_10332:optimizer_scm",(void*)f_10332},
{"f_9968:optimizer_scm",(void*)f_9968},
{"f_10230:optimizer_scm",(void*)f_10230},
{"f_10139:optimizer_scm",(void*)f_10139},
{"f_10141:optimizer_scm",(void*)f_10141},
{"f_10217:optimizer_scm",(void*)f_10217},
{"f_10149:optimizer_scm",(void*)f_10149},
{"f_10164:optimizer_scm",(void*)f_10164},
{"f_9971:optimizer_scm",(void*)f_9971},
{"f_9988:optimizer_scm",(void*)f_9988},
{"f_10059:optimizer_scm",(void*)f_10059},
{"f_9991:optimizer_scm",(void*)f_9991},
{"f_9994:optimizer_scm",(void*)f_9994},
{"f_9999:optimizer_scm",(void*)f_9999},
{"f_10043:optimizer_scm",(void*)f_10043},
{"f_10014:optimizer_scm",(void*)f_10014},
{"f_9468:optimizer_scm",(void*)f_9468},
{"f_9913:optimizer_scm",(void*)f_9913},
{"f_9920:optimizer_scm",(void*)f_9920},
{"f_9471:optimizer_scm",(void*)f_9471},
{"f_9900:optimizer_scm",(void*)f_9900},
{"f_9876:optimizer_scm",(void*)f_9876},
{"f_9887:optimizer_scm",(void*)f_9887},
{"f_9843:optimizer_scm",(void*)f_9843},
{"f_9734:optimizer_scm",(void*)f_9734},
{"f_9739:optimizer_scm",(void*)f_9739},
{"f_9681:optimizer_scm",(void*)f_9681},
{"f_9687:optimizer_scm",(void*)f_9687},
{"f_9692:optimizer_scm",(void*)f_9692},
{"f_9640:optimizer_scm",(void*)f_9640},
{"f_9646:optimizer_scm",(void*)f_9646},
{"f_9651:optimizer_scm",(void*)f_9651},
{"f_9624:optimizer_scm",(void*)f_9624},
{"f_9620:optimizer_scm",(void*)f_9620},
{"f_9590:optimizer_scm",(void*)f_9590},
{"f_9553:optimizer_scm",(void*)f_9553},
{"f_9569:optimizer_scm",(void*)f_9569},
{"f_9535:optimizer_scm",(void*)f_9535},
{"f_9269:optimizer_scm",(void*)f_9269},
{"f_9440:optimizer_scm",(void*)f_9440},
{"f_9455:optimizer_scm",(void*)f_9455},
{"f_9448:optimizer_scm",(void*)f_9448},
{"f_9420:optimizer_scm",(void*)f_9420},
{"f_9394:optimizer_scm",(void*)f_9394},
{"f_9340:optimizer_scm",(void*)f_9340},
{"f_9346:optimizer_scm",(void*)f_9346},
{"f_9352:optimizer_scm",(void*)f_9352},
{"f_9309:optimizer_scm",(void*)f_9309},
{"f_6907:optimizer_scm",(void*)f_6907},
{"f_9133:optimizer_scm",(void*)f_9133},
{"f_9162:optimizer_scm",(void*)f_9162},
{"f_9174:optimizer_scm",(void*)f_9174},
{"f_9188:optimizer_scm",(void*)f_9188},
{"f_9237:optimizer_scm",(void*)f_9237},
{"f_6932:optimizer_scm",(void*)f_6932},
{"f_9208:optimizer_scm",(void*)f_9208},
{"f_9212:optimizer_scm",(void*)f_9212},
{"f_9182:optimizer_scm",(void*)f_9182},
{"f_9168:optimizer_scm",(void*)f_9168},
{"f_9166:optimizer_scm",(void*)f_9166},
{"f_9158:optimizer_scm",(void*)f_9158},
{"f_9053:optimizer_scm",(void*)f_9053},
{"f_9097:optimizer_scm",(void*)f_9097},
{"f_8858:optimizer_scm",(void*)f_8858},
{"f_8864:optimizer_scm",(void*)f_8864},
{"f_8980:optimizer_scm",(void*)f_8980},
{"f_8873:optimizer_scm",(void*)f_8873},
{"f_8935:optimizer_scm",(void*)f_8935},
{"f_8933:optimizer_scm",(void*)f_8933},
{"f_8895:optimizer_scm",(void*)f_8895},
{"f_8773:optimizer_scm",(void*)f_8773},
{"f_8814:optimizer_scm",(void*)f_8814},
{"f_8826:optimizer_scm",(void*)f_8826},
{"f_8804:optimizer_scm",(void*)f_8804},
{"f_8802:optimizer_scm",(void*)f_8802},
{"f_8591:optimizer_scm",(void*)f_8591},
{"f_8697:optimizer_scm",(void*)f_8697},
{"f_8600:optimizer_scm",(void*)f_8600},
{"f_8671:optimizer_scm",(void*)f_8671},
{"f_8669:optimizer_scm",(void*)f_8669},
{"f_8622:optimizer_scm",(void*)f_8622},
{"f_8551:optimizer_scm",(void*)f_8551},
{"f_8567:optimizer_scm",(void*)f_8567},
{"f_8472:optimizer_scm",(void*)f_8472},
{"f_8501:optimizer_scm",(void*)f_8501},
{"f_8382:optimizer_scm",(void*)f_8382},
{"f_8416:optimizer_scm",(void*)f_8416},
{"f_8277:optimizer_scm",(void*)f_8277},
{"f_8303:optimizer_scm",(void*)f_8303},
{"f_8299:optimizer_scm",(void*)f_8299},
{"f_8183:optimizer_scm",(void*)f_8183},
{"f_8106:optimizer_scm",(void*)f_8106},
{"f_8130:optimizer_scm",(void*)f_8130},
{"f_8134:optimizer_scm",(void*)f_8134},
{"f_8018:optimizer_scm",(void*)f_8018},
{"f_8074:optimizer_scm",(void*)f_8074},
{"f_8070:optimizer_scm",(void*)f_8070},
{"f_7947:optimizer_scm",(void*)f_7947},
{"f_7959:optimizer_scm",(void*)f_7959},
{"f_7979:optimizer_scm",(void*)f_7979},
{"f_7975:optimizer_scm",(void*)f_7975},
{"f_7848:optimizer_scm",(void*)f_7848},
{"f_7877:optimizer_scm",(void*)f_7877},
{"f_7885:optimizer_scm",(void*)f_7885},
{"f_7889:optimizer_scm",(void*)f_7889},
{"f_7605:optimizer_scm",(void*)f_7605},
{"f_7633:optimizer_scm",(void*)f_7633},
{"f_7636:optimizer_scm",(void*)f_7636},
{"f_7749:optimizer_scm",(void*)f_7749},
{"f_7783:optimizer_scm",(void*)f_7783},
{"f_7639:optimizer_scm",(void*)f_7639},
{"f_7714:optimizer_scm",(void*)f_7714},
{"f_7743:optimizer_scm",(void*)f_7743},
{"f_7642:optimizer_scm",(void*)f_7642},
{"f_7686:optimizer_scm",(void*)f_7686},
{"f_7684:optimizer_scm",(void*)f_7684},
{"f_7647:optimizer_scm",(void*)f_7647},
{"f_7627:optimizer_scm",(void*)f_7627},
{"f_7579:optimizer_scm",(void*)f_7579},
{"f_7506:optimizer_scm",(void*)f_7506},
{"f_7543:optimizer_scm",(void*)f_7543},
{"f_7535:optimizer_scm",(void*)f_7535},
{"f_7417:optimizer_scm",(void*)f_7417},
{"f_7312:optimizer_scm",(void*)f_7312},
{"f_7367:optimizer_scm",(void*)f_7367},
{"f_7244:optimizer_scm",(void*)f_7244},
{"f_7264:optimizer_scm",(void*)f_7264},
{"f_7272:optimizer_scm",(void*)f_7272},
{"f_7195:optimizer_scm",(void*)f_7195},
{"f_7211:optimizer_scm",(void*)f_7211},
{"f_7120:optimizer_scm",(void*)f_7120},
{"f_6969:optimizer_scm",(void*)f_6969},
{"f_7050:optimizer_scm",(void*)f_7050},
{"f_6972:optimizer_scm",(void*)f_6972},
{"f_6887:optimizer_scm",(void*)f_6887},
{"f_6891:optimizer_scm",(void*)f_6891},
{"f_6901:optimizer_scm",(void*)f_6901},
{"f_6398:optimizer_scm",(void*)f_6398},
{"f_6834:optimizer_scm",(void*)f_6834},
{"f_6867:optimizer_scm",(void*)f_6867},
{"f_6847:optimizer_scm",(void*)f_6847},
{"f_6402:optimizer_scm",(void*)f_6402},
{"f_6787:optimizer_scm",(void*)f_6787},
{"f_6807:optimizer_scm",(void*)f_6807},
{"f_6795:optimizer_scm",(void*)f_6795},
{"f_6804:optimizer_scm",(void*)f_6804},
{"f_6800:optimizer_scm",(void*)f_6800},
{"f_6449:optimizer_scm",(void*)f_6449},
{"f_6707:optimizer_scm",(void*)f_6707},
{"f_6774:optimizer_scm",(void*)f_6774},
{"f_6715:optimizer_scm",(void*)f_6715},
{"f_6747:optimizer_scm",(void*)f_6747},
{"f_6760:optimizer_scm",(void*)f_6760},
{"f_6725:optimizer_scm",(void*)f_6725},
{"f_6741:optimizer_scm",(void*)f_6741},
{"f_6729:optimizer_scm",(void*)f_6729},
{"f_6733:optimizer_scm",(void*)f_6733},
{"f_6452:optimizer_scm",(void*)f_6452},
{"f_6626:optimizer_scm",(void*)f_6626},
{"f_6694:optimizer_scm",(void*)f_6694},
{"f_6634:optimizer_scm",(void*)f_6634},
{"f_6677:optimizer_scm",(void*)f_6677},
{"f_6683:optimizer_scm",(void*)f_6683},
{"f_6641:optimizer_scm",(void*)f_6641},
{"f_6651:optimizer_scm",(void*)f_6651},
{"f_6664:optimizer_scm",(void*)f_6664},
{"f_6649:optimizer_scm",(void*)f_6649},
{"f_6645:optimizer_scm",(void*)f_6645},
{"f_6455:optimizer_scm",(void*)f_6455},
{"f_6458:optimizer_scm",(void*)f_6458},
{"f_6478:optimizer_scm",(void*)f_6478},
{"f_6491:optimizer_scm",(void*)f_6491},
{"f_6552:optimizer_scm",(void*)f_6552},
{"f_6598:optimizer_scm",(void*)f_6598},
{"f_6550:optimizer_scm",(void*)f_6550},
{"f_6520:optimizer_scm",(void*)f_6520},
{"f_6461:optimizer_scm",(void*)f_6461},
{"f_6470:optimizer_scm",(void*)f_6470},
{"f_6404:optimizer_scm",(void*)f_6404},
{"f_6410:optimizer_scm",(void*)f_6410},
{"f_6434:optimizer_scm",(void*)f_6434},
{"f_6383:optimizer_scm",(void*)f_6383},
{"f_6064:optimizer_scm",(void*)f_6064},
{"f_6078:optimizer_scm",(void*)f_6078},
{"f_6098:optimizer_scm",(void*)f_6098},
{"f_6105:optimizer_scm",(void*)f_6105},
{"f_6110:optimizer_scm",(void*)f_6110},
{"f_6370:optimizer_scm",(void*)f_6370},
{"f_6118:optimizer_scm",(void*)f_6118},
{"f_6354:optimizer_scm",(void*)f_6354},
{"f_6136:optimizer_scm",(void*)f_6136},
{"f_6139:optimizer_scm",(void*)f_6139},
{"f_6145:optimizer_scm",(void*)f_6145},
{"f_6165:optimizer_scm",(void*)f_6165},
{"f_6171:optimizer_scm",(void*)f_6171},
{"f_6177:optimizer_scm",(void*)f_6177},
{"f_6186:optimizer_scm",(void*)f_6186},
{"f_6193:optimizer_scm",(void*)f_6193},
{"f_6196:optimizer_scm",(void*)f_6196},
{"f_6214:optimizer_scm",(void*)f_6214},
{"f_6199:optimizer_scm",(void*)f_6199},
{"f_6081:optimizer_scm",(void*)f_6081},
{"f_6084:optimizer_scm",(void*)f_6084},
{"f_6071:optimizer_scm",(void*)f_6071},
{"f_6067:optimizer_scm",(void*)f_6067},
{"f_4194:optimizer_scm",(void*)f_4194},
{"f_5946:optimizer_scm",(void*)f_5946},
{"f_5952:optimizer_scm",(void*)f_5952},
{"f_5956:optimizer_scm",(void*)f_5956},
{"f_5959:optimizer_scm",(void*)f_5959},
{"f_5995:optimizer_scm",(void*)f_5995},
{"f_6000:optimizer_scm",(void*)f_6000},
{"f_6012:optimizer_scm",(void*)f_6012},
{"f_6039:optimizer_scm",(void*)f_6039},
{"f_5962:optimizer_scm",(void*)f_5962},
{"f_5965:optimizer_scm",(void*)f_5965},
{"f_5968:optimizer_scm",(void*)f_5968},
{"f_5971:optimizer_scm",(void*)f_5971},
{"f_5916:optimizer_scm",(void*)f_5916},
{"f_5936:optimizer_scm",(void*)f_5936},
{"f_5920:optimizer_scm",(void*)f_5920},
{"f_5926:optimizer_scm",(void*)f_5926},
{"f_4649:optimizer_scm",(void*)f_4649},
{"f_5806:optimizer_scm",(void*)f_5806},
{"f_5809:optimizer_scm",(void*)f_5809},
{"f_5908:optimizer_scm",(void*)f_5908},
{"f_5904:optimizer_scm",(void*)f_5904},
{"f_5866:optimizer_scm",(void*)f_5866},
{"f_5897:optimizer_scm",(void*)f_5897},
{"f_5893:optimizer_scm",(void*)f_5893},
{"f_5885:optimizer_scm",(void*)f_5885},
{"f_5826:optimizer_scm",(void*)f_5826},
{"f_5856:optimizer_scm",(void*)f_5856},
{"f_5832:optimizer_scm",(void*)f_5832},
{"f_5780:optimizer_scm",(void*)f_5780},
{"f_5778:optimizer_scm",(void*)f_5778},
{"f_5738:optimizer_scm",(void*)f_5738},
{"f_5728:optimizer_scm",(void*)f_5728},
{"f_5040:optimizer_scm",(void*)f_5040},
{"f_5049:optimizer_scm",(void*)f_5049},
{"f_5280:optimizer_scm",(void*)f_5280},
{"f_5296:optimizer_scm",(void*)f_5296},
{"f_5670:optimizer_scm",(void*)f_5670},
{"f_5707:optimizer_scm",(void*)f_5707},
{"f_5684:optimizer_scm",(void*)f_5684},
{"f_5306:optimizer_scm",(void*)f_5306},
{"f_5378:optimizer_scm",(void*)f_5378},
{"f_5657:optimizer_scm",(void*)f_5657},
{"f_5556:optimizer_scm",(void*)f_5556},
{"f_5559:optimizer_scm",(void*)f_5559},
{"f_5571:optimizer_scm",(void*)f_5571},
{"f_5582:optimizer_scm",(void*)f_5582},
{"f_5621:optimizer_scm",(void*)f_5621},
{"f_5613:optimizer_scm",(void*)f_5613},
{"f_5601:optimizer_scm",(void*)f_5601},
{"f_5599:optimizer_scm",(void*)f_5599},
{"f_5576:optimizer_scm",(void*)f_5576},
{"f_5392:optimizer_scm",(void*)f_5392},
{"f_5437:optimizer_scm",(void*)f_5437},
{"f_5443:optimizer_scm",(void*)f_5443},
{"f_5449:optimizer_scm",(void*)f_5449},
{"f_5493:optimizer_scm",(void*)f_5493},
{"f_5469:optimizer_scm",(void*)f_5469},
{"f_5473:optimizer_scm",(void*)f_5473},
{"f_5431:optimizer_scm",(void*)f_5431},
{"f_5419:optimizer_scm",(void*)f_5419},
{"f_5417:optimizer_scm",(void*)f_5417},
{"f_5372:optimizer_scm",(void*)f_5372},
{"f_5309:optimizer_scm",(void*)f_5309},
{"f_5343:optimizer_scm",(void*)f_5343},
{"f_5312:optimizer_scm",(void*)f_5312},
{"f_5315:optimizer_scm",(void*)f_5315},
{"f_5318:optimizer_scm",(void*)f_5318},
{"f_5328:optimizer_scm",(void*)f_5328},
{"f_5256:optimizer_scm",(void*)f_5256},
{"f_5131:optimizer_scm",(void*)f_5131},
{"f_5152:optimizer_scm",(void*)f_5152},
{"f_5220:optimizer_scm",(void*)f_5220},
{"f_5212:optimizer_scm",(void*)f_5212},
{"f_5155:optimizer_scm",(void*)f_5155},
{"f_5191:optimizer_scm",(void*)f_5191},
{"f_5189:optimizer_scm",(void*)f_5189},
{"f_5164:optimizer_scm",(void*)f_5164},
{"f_5110:optimizer_scm",(void*)f_5110},
{"f_5063:optimizer_scm",(void*)f_5063},
{"f_5066:optimizer_scm",(void*)f_5066},
{"f_5094:optimizer_scm",(void*)f_5094},
{"f_5072:optimizer_scm",(void*)f_5072},
{"f_5079:optimizer_scm",(void*)f_5079},
{"f_4845:optimizer_scm",(void*)f_4845},
{"f_4944:optimizer_scm",(void*)f_4944},
{"f_4949:optimizer_scm",(void*)f_4949},
{"f_4956:optimizer_scm",(void*)f_4956},
{"f_4996:optimizer_scm",(void*)f_4996},
{"f_4976:optimizer_scm",(void*)f_4976},
{"f_4850:optimizer_scm",(void*)f_4850},
{"f_4868:optimizer_scm",(void*)f_4868},
{"f_4875:optimizer_scm",(void*)f_4875},
{"f_4922:optimizer_scm",(void*)f_4922},
{"f_4925:optimizer_scm",(void*)f_4925},
{"f_4915:optimizer_scm",(void*)f_4915},
{"f_4895:optimizer_scm",(void*)f_4895},
{"f_4856:optimizer_scm",(void*)f_4856},
{"f_4862:optimizer_scm",(void*)f_4862},
{"f_4779:optimizer_scm",(void*)f_4779},
{"f_4820:optimizer_scm",(void*)f_4820},
{"f_4827:optimizer_scm",(void*)f_4827},
{"f_4782:optimizer_scm",(void*)f_4782},
{"f_4810:optimizer_scm",(void*)f_4810},
{"f_4808:optimizer_scm",(void*)f_4808},
{"f_4689:optimizer_scm",(void*)f_4689},
{"f_4693:optimizer_scm",(void*)f_4693},
{"f_4705:optimizer_scm",(void*)f_4705},
{"f_4734:optimizer_scm",(void*)f_4734},
{"f_4711:optimizer_scm",(void*)f_4711},
{"f_4731:optimizer_scm",(void*)f_4731},
{"f_4368:optimizer_scm",(void*)f_4368},
{"f_4382:optimizer_scm",(void*)f_4382},
{"f_4608:optimizer_scm",(void*)f_4608},
{"f_4614:optimizer_scm",(void*)f_4614},
{"f_4462:optimizer_scm",(void*)f_4462},
{"f_4554:optimizer_scm",(void*)f_4554},
{"f_4548:optimizer_scm",(void*)f_4548},
{"f_4473:optimizer_scm",(void*)f_4473},
{"f_4496:optimizer_scm",(void*)f_4496},
{"f_4534:optimizer_scm",(void*)f_4534},
{"f_4540:optimizer_scm",(void*)f_4540},
{"f_4502:optimizer_scm",(void*)f_4502},
{"f_4506:optimizer_scm",(void*)f_4506},
{"f_4509:optimizer_scm",(void*)f_4509},
{"f_4532:optimizer_scm",(void*)f_4532},
{"f_4479:optimizer_scm",(void*)f_4479},
{"f_4485:optimizer_scm",(void*)f_4485},
{"f_4489:optimizer_scm",(void*)f_4489},
{"f_4493:optimizer_scm",(void*)f_4493},
{"f_4468:optimizer_scm",(void*)f_4468},
{"f_4401:optimizer_scm",(void*)f_4401},
{"f_4237:optimizer_scm",(void*)f_4237},
{"f_4241:optimizer_scm",(void*)f_4241},
{"f_4252:optimizer_scm",(void*)f_4252},
{"f_4262:optimizer_scm",(void*)f_4262},
{"f_4311:optimizer_scm",(void*)f_4311},
{"f_4338:optimizer_scm",(void*)f_4338},
{"f_4309:optimizer_scm",(void*)f_4309},
{"f_4268:optimizer_scm",(void*)f_4268},
{"f_4274:optimizer_scm",(void*)f_4274},
{"f_4301:optimizer_scm",(void*)f_4301},
{"f_4244:optimizer_scm",(void*)f_4244},
{"f_4233:optimizer_scm",(void*)f_4233},
{"f_4203:optimizer_scm",(void*)f_4203},
{"f_4197:optimizer_scm",(void*)f_4197},
{"f_3757:optimizer_scm",(void*)f_3757},
{"f_4135:optimizer_scm",(void*)f_4135},
{"f_4138:optimizer_scm",(void*)f_4138},
{"f_4187:optimizer_scm",(void*)f_4187},
{"f_4141:optimizer_scm",(void*)f_4141},
{"f_4146:optimizer_scm",(void*)f_4146},
{"f_4152:optimizer_scm",(void*)f_4152},
{"f_3829:optimizer_scm",(void*)f_3829},
{"f_3910:optimizer_scm",(void*)f_3910},
{"f_3960:optimizer_scm",(void*)f_3960},
{"f_3984:optimizer_scm",(void*)f_3984},
{"f_3987:optimizer_scm",(void*)f_3987},
{"f_4089:optimizer_scm",(void*)f_4089},
{"f_4092:optimizer_scm",(void*)f_4092},
{"f_3990:optimizer_scm",(void*)f_3990},
{"f_4008:optimizer_scm",(void*)f_4008},
{"f_4027:optimizer_scm",(void*)f_4027},
{"f_4030:optimizer_scm",(void*)f_4030},
{"f_4033:optimizer_scm",(void*)f_4033},
{"f_4036:optimizer_scm",(void*)f_4036},
{"f_4039:optimizer_scm",(void*)f_4039},
{"f_4042:optimizer_scm",(void*)f_4042},
{"f_4020:optimizer_scm",(void*)f_4020},
{"f_3993:optimizer_scm",(void*)f_3993},
{"f_3996:optimizer_scm",(void*)f_3996},
{"f_3936:optimizer_scm",(void*)f_3936},
{"f_3947:optimizer_scm",(void*)f_3947},
{"f_3913:optimizer_scm",(void*)f_3913},
{"f_3883:optimizer_scm",(void*)f_3883},
{"f_3866:optimizer_scm",(void*)f_3866},
{"f_3872:optimizer_scm",(void*)f_3872},
{"f_3870:optimizer_scm",(void*)f_3870},
{"f_3795:optimizer_scm",(void*)f_3795},
{"f_3801:optimizer_scm",(void*)f_3801},
{"f_3816:optimizer_scm",(void*)f_3816},
{"f_3809:optimizer_scm",(void*)f_3809},
{"f_3790:optimizer_scm",(void*)f_3790},
{"f_3783:optimizer_scm",(void*)f_3783},
{"f_3788:optimizer_scm",(void*)f_3788},
{"f_3760:optimizer_scm",(void*)f_3760},
{"f_3767:optimizer_scm",(void*)f_3767},
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
