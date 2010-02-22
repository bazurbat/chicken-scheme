/* Generated from c-backend.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-22 11:33
   Version 4.3.5 
   windows-mingw32-x86 [ manyargs dload ptables ]
   compiled 2010-02-17 on lenovo-1 (MINGW32_NT-6.0)
   command line: c-backend.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -no-lambda-info -local -extend private-namespace.scm -output-file c-backend.c
   unit: backend
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[864];
static double C_possibly_force_alignment;


#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub2463(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2463(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word lit=(C_word )(C_a0);
return(C_header_size(lit));
C_ret:
#undef return

return C_r;}

#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_ret; C_cblockend
static C_word C_fcall stub2459(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub2459(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word lit=(C_word )(C_a0);

#ifdef C_SIXTY_FOUR
return((C_header_bits(lit) >> (24 + 32)) & 0xff);
#else
return((C_header_bits(lit) >> 24) & 0xff);
#endif

C_ret:
#undef return

return C_r;}

C_noret_decl(C_backend_toplevel)
C_externexport void C_ccall C_backend_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2508)
static void C_ccall f_2508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10305)
static void C_ccall f_10305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10308)
static void C_ccall f_10308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10335)
static void C_ccall f_10335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10331)
static void C_ccall f_10331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10311)
static void C_ccall f_10311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10314)
static void C_ccall f_10314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10327)
static void C_ccall f_10327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10317)
static void C_ccall f_10317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10320)
static void C_ccall f_10320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10323)
static void C_ccall f_10323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2597)
static void C_ccall f_2597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10005)
static void C_ccall f_10005(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10281)
static void C_ccall f_10281(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10279)
static void C_ccall f_10279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10267)
static void C_ccall f_10267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10237)
static void C_ccall f_10237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10198)
static void C_ccall f_10198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10185)
static void C_ccall f_10185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10181)
static void C_ccall f_10181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10067)
static void C_ccall f_10067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10014)
static C_word C_fcall f_10014(C_word *a,C_word t0);
C_noret_decl(f_9398)
static void C_ccall f_9398(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9509)
static void C_fcall f_9509(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9674)
static void C_ccall f_9674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9701)
static void C_fcall f_9701(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9879)
static void C_ccall f_9879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9882)
static void C_ccall f_9882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9885)
static void C_ccall f_9885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9888)
static void C_ccall f_9888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9858)
static void C_ccall f_9858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9861)
static void C_ccall f_9861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9864)
static void C_ccall f_9864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9867)
static void C_ccall f_9867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9837)
static void C_ccall f_9837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9840)
static void C_ccall f_9840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9843)
static void C_ccall f_9843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9846)
static void C_ccall f_9846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9800)
static void C_ccall f_9800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9803)
static void C_ccall f_9803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9806)
static void C_ccall f_9806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9809)
static void C_ccall f_9809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9779)
static void C_ccall f_9779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9782)
static void C_ccall f_9782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9785)
static void C_ccall f_9785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9788)
static void C_ccall f_9788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9758)
static void C_ccall f_9758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9761)
static void C_ccall f_9761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9764)
static void C_ccall f_9764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9767)
static void C_ccall f_9767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9737)
static void C_ccall f_9737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9740)
static void C_ccall f_9740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9743)
static void C_ccall f_9743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9746)
static void C_ccall f_9746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9716)
static void C_ccall f_9716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9719)
static void C_ccall f_9719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9722)
static void C_ccall f_9722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9725)
static void C_ccall f_9725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9678)
static void C_fcall f_9678(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9644)
static void C_ccall f_9644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9647)
static void C_ccall f_9647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9650)
static void C_ccall f_9650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9653)
static void C_ccall f_9653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9623)
static void C_ccall f_9623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9626)
static void C_ccall f_9626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9629)
static void C_ccall f_9629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9632)
static void C_ccall f_9632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9602)
static void C_ccall f_9602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9605)
static void C_ccall f_9605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9608)
static void C_ccall f_9608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9611)
static void C_ccall f_9611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9578)
static void C_ccall f_9578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9581)
static void C_ccall f_9581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9584)
static void C_ccall f_9584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9587)
static void C_ccall f_9587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9557)
static void C_ccall f_9557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9560)
static void C_ccall f_9560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9563)
static void C_ccall f_9563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9566)
static void C_ccall f_9566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9533)
static void C_ccall f_9533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9536)
static void C_ccall f_9536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9539)
static void C_ccall f_9539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9542)
static void C_ccall f_9542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9512)
static void C_ccall f_9512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9515)
static void C_ccall f_9515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9518)
static void C_ccall f_9518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9521)
static void C_ccall f_9521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9488)
static void C_ccall f_9488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9491)
static void C_ccall f_9491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9494)
static void C_ccall f_9494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9497)
static void C_ccall f_9497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9467)
static void C_ccall f_9467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9470)
static void C_ccall f_9470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9473)
static void C_ccall f_9473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9476)
static void C_ccall f_9476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9400)
static void C_fcall f_9400(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8908)
static void C_ccall f_8908(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8938)
static void C_fcall f_8938(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8965)
static void C_fcall f_8965(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9160)
static void C_fcall f_9160(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9169)
static void C_fcall f_9169(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9178)
static void C_ccall f_9178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9205)
static void C_fcall f_9205(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9282)
static void C_ccall f_9282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8910)
static void C_fcall f_8910(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8024)
static void C_ccall f_8024(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8101)
static void C_fcall f_8101(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8203)
static void C_fcall f_8203(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8236)
static void C_fcall f_8236(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8332)
static void C_fcall f_8332(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8344)
static void C_fcall f_8344(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8359)
static void C_ccall f_8359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8404)
static void C_fcall f_8404(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8421)
static void C_fcall f_8421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8438)
static void C_fcall f_8438(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8477)
static void C_fcall f_8477(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8494)
static void C_fcall f_8494(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8511)
static void C_fcall f_8511(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8528)
static void C_fcall f_8528(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8545)
static void C_fcall f_8545(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8562)
static void C_fcall f_8562(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8579)
static void C_fcall f_8579(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8591)
static void C_ccall f_8591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8598)
static void C_ccall f_8598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8608)
static void C_fcall f_8608(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8648)
static void C_ccall f_8648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8618)
static void C_fcall f_8618(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8606)
static void C_ccall f_8606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8602)
static void C_ccall f_8602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8569)
static void C_ccall f_8569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8552)
static void C_ccall f_8552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8535)
static void C_ccall f_8535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8518)
static void C_ccall f_8518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8501)
static void C_ccall f_8501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8484)
static void C_ccall f_8484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8449)
static void C_ccall f_8449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8459)
static void C_ccall f_8459(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8457)
static void C_ccall f_8457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8453)
static void C_ccall f_8453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8445)
static void C_ccall f_8445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8432)
static void C_ccall f_8432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8415)
static void C_ccall f_8415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8363)
static void C_fcall f_8363(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8031)
static void C_fcall f_8031(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8026)
static void C_fcall f_8026(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7959)
static void C_ccall f_7959(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7963)
static void C_ccall f_7963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7966)
static void C_ccall f_7966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7969)
static void C_ccall f_7969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7972)
static void C_ccall f_7972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7978)
static void C_ccall f_7978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8022)
static void C_ccall f_8022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7981)
static void C_ccall f_7981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7989)
static void C_ccall f_7989(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8010)
static void C_ccall f_8010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7993)
static void C_ccall f_7993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7984)
static void C_ccall f_7984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7465)
static void C_ccall f_7465(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7471)
static void C_fcall f_7471(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7946)
static void C_ccall f_7946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7479)
static void C_fcall f_7479(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7483)
static void C_ccall f_7483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7486)
static void C_ccall f_7486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7489)
static void C_ccall f_7489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7492)
static void C_ccall f_7492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7498)
static void C_ccall f_7498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7844)
static void C_ccall f_7844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7847)
static void C_ccall f_7847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7943)
static void C_ccall f_7943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7850)
static void C_ccall f_7850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7853)
static void C_ccall f_7853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7856)
static void C_ccall f_7856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7859)
static void C_ccall f_7859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7892)
static void C_fcall f_7892(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7908)
static void C_ccall f_7908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7911)
static void C_ccall f_7911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7862)
static void C_ccall f_7862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7890)
static void C_ccall f_7890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7865)
static void C_ccall f_7865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7868)
static void C_ccall f_7868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7871)
static void C_ccall f_7871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7500)
static void C_ccall f_7500(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7510)
static void C_fcall f_7510(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7519)
static void C_fcall f_7519(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7531)
static void C_fcall f_7531(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7543)
static void C_fcall f_7543(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7549)
static void C_ccall f_7549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7588)
static void C_fcall f_7588(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7553)
static void C_fcall f_7553(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7151)
static void C_ccall f_7151(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7157)
static void C_fcall f_7157(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7452)
static void C_ccall f_7452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7165)
static void C_fcall f_7165(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7169)
static void C_ccall f_7169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7172)
static void C_ccall f_7172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7175)
static void C_ccall f_7175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7449)
static void C_ccall f_7449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7181)
static void C_ccall f_7181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7184)
static void C_ccall f_7184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7187)
static void C_ccall f_7187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7190)
static void C_ccall f_7190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7193)
static void C_ccall f_7193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7196)
static void C_ccall f_7196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7199)
static void C_ccall f_7199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7202)
static void C_ccall f_7202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7205)
static void C_ccall f_7205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7208)
static void C_ccall f_7208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7438)
static void C_ccall f_7438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7211)
static void C_ccall f_7211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7214)
static void C_ccall f_7214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7217)
static void C_ccall f_7217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7220)
static void C_ccall f_7220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7223)
static void C_ccall f_7223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7226)
static void C_ccall f_7226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7229)
static void C_ccall f_7229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7232)
static void C_ccall f_7232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7329)
static void C_ccall f_7329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7331)
static void C_fcall f_7331(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7338)
static void C_fcall f_7338(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7365)
static void C_ccall f_7365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7368)
static void C_ccall f_7368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7371)
static void C_ccall f_7371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7359)
static void C_ccall f_7359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7347)
static void C_ccall f_7347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7351)
static void C_ccall f_7351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7355)
static void C_ccall f_7355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7377)
static void C_ccall f_7377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7235)
static void C_ccall f_7235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7238)
static void C_ccall f_7238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7268)
static void C_ccall f_7268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7271)
static void C_ccall f_7271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7309)
static void C_ccall f_7309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7305)
static void C_ccall f_7305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7274)
static void C_ccall f_7274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7277)
static void C_ccall f_7277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7280)
static void C_ccall f_7280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7247)
static void C_ccall f_7247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7250)
static void C_ccall f_7250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7241)
static void C_ccall f_7241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7111)
static void C_ccall f_7111(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7117)
static void C_fcall f_7117(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7129)
static void C_ccall f_7129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7132)
static void C_ccall f_7132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7138)
static void C_ccall f_7138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7057)
static void C_ccall f_7057(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7061)
static void C_ccall f_7061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7066)
static void C_fcall f_7066(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7095)
static void C_ccall f_7095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7098)
static void C_ccall f_7098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7041)
static void C_ccall f_7041(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7047)
static void C_ccall f_7047(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7055)
static void C_ccall f_7055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7025)
static void C_ccall f_7025(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7031)
static void C_ccall f_7031(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7039)
static void C_ccall f_7039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6936)
static void C_ccall f_6936(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6945)
static void C_fcall f_6945(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6974)
static void C_fcall f_6974(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6984)
static void C_ccall f_6984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6859)
static void C_ccall f_6859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6863)
static void C_ccall f_6863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6877)
static void C_fcall f_6877(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6890)
static void C_ccall f_6890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6922)
static void C_ccall f_6922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6893)
static void C_ccall f_6893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6896)
static void C_ccall f_6896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6866)
static void C_ccall f_6866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6869)
static void C_ccall f_6869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6872)
static void C_ccall f_6872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_6826)
static void C_ccall f_6826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6830)
static void C_ccall f_6830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6833)
static void C_ccall f_6833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6836)
static void C_ccall f_6836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6839)
static void C_ccall f_6839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6842)
static void C_ccall f_6842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6845)
static void C_ccall f_6845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6848)
static void C_ccall f_6848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6851)
static void C_ccall f_6851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6854)
static void C_ccall f_6854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6041)
static void C_fcall f_6041(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6047)
static void C_fcall f_6047(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6812)
static void C_ccall f_6812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6055)
static void C_fcall f_6055(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6059)
static void C_ccall f_6059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6062)
static void C_ccall f_6062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6065)
static void C_ccall f_6065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6068)
static void C_ccall f_6068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6071)
static void C_ccall f_6071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6074)
static void C_ccall f_6074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6809)
static void C_ccall f_6809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6077)
static void C_fcall f_6077(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6083)
static void C_ccall f_6083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6086)
static void C_ccall f_6086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6089)
static void C_ccall f_6089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6092)
static void C_ccall f_6092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6095)
static void C_ccall f_6095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6098)
static void C_ccall f_6098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6101)
static void C_ccall f_6101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6104)
static void C_ccall f_6104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6107)
static void C_ccall f_6107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6110)
static void C_ccall f_6110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6113)
static void C_ccall f_6113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6116)
static void C_ccall f_6116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6119)
static void C_ccall f_6119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6778)
static void C_ccall f_6778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6122)
static void C_ccall f_6122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6739)
static void C_ccall f_6739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6742)
static void C_ccall f_6742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6745)
static void C_ccall f_6745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6761)
static void C_ccall f_6761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6764)
static void C_ccall f_6764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6125)
static void C_ccall f_6125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6128)
static void C_ccall f_6128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6131)
static void C_ccall f_6131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6711)
static void C_fcall f_6711(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6714)
static void C_ccall f_6714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6134)
static void C_ccall f_6134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6137)
static void C_ccall f_6137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6140)
static void C_ccall f_6140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6143)
static void C_ccall f_6143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6146)
static void C_fcall f_6146(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6149)
static void C_ccall f_6149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6671)
static void C_fcall f_6671(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6673)
static void C_fcall f_6673(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6683)
static void C_ccall f_6683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6624)
static void C_ccall f_6624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6629)
static void C_fcall f_6629(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6645)
static void C_ccall f_6645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6656)
static void C_ccall f_6656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6152)
static void C_ccall f_6152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6573)
static void C_fcall f_6573(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6585)
static void C_ccall f_6585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6588)
static void C_ccall f_6588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6495)
static void C_ccall f_6495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6537)
static void C_fcall f_6537(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6498)
static void C_ccall f_6498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6504)
static void C_fcall f_6504(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6507)
static void C_ccall f_6507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6431)
static void C_ccall f_6431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6434)
static void C_ccall f_6434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6437)
static void C_ccall f_6437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6440)
static void C_ccall f_6440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6443)
static void C_ccall f_6443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6458)
static void C_fcall f_6458(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6446)
static void C_ccall f_6446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6449)
static void C_ccall f_6449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6417)
static void C_ccall f_6417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6425)
static void C_ccall f_6425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6342)
static void C_ccall f_6342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6348)
static void C_ccall f_6348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6351)
static void C_ccall f_6351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6385)
static void C_ccall f_6385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6388)
static void C_ccall f_6388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6391)
static void C_ccall f_6391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6354)
static void C_ccall f_6354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6357)
static void C_ccall f_6357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6360)
static void C_ccall f_6360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6363)
static void C_ccall f_6363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6372)
static void C_ccall f_6372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6375)
static void C_ccall f_6375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6155)
static void C_ccall f_6155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6178)
static void C_fcall f_6178(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6283)
static void C_ccall f_6283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6286)
static void C_ccall f_6286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6298)
static void C_ccall f_6298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6289)
static void C_ccall f_6289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6184)
static void C_ccall f_6184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6187)
static void C_ccall f_6187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6270)
static void C_ccall f_6270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6190)
static void C_ccall f_6190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6193)
static void C_ccall f_6193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6196)
static void C_ccall f_6196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6199)
static void C_ccall f_6199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6264)
static void C_ccall f_6264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6260)
static void C_ccall f_6260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6202)
static void C_ccall f_6202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6205)
static void C_ccall f_6205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6208)
static void C_ccall f_6208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6211)
static void C_ccall f_6211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6214)
static void C_ccall f_6214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6217)
static void C_ccall f_6217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6235)
static void C_fcall f_6235(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6245)
static void C_ccall f_6245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6220)
static void C_ccall f_6220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6158)
static void C_ccall f_6158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6168)
static void C_ccall f_6168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6161)
static void C_ccall f_6161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5993)
static void C_fcall f_5993(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6000)
static void C_ccall f_6000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6003)
static void C_ccall f_6003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5916)
static void C_fcall f_5916(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5923)
static void C_ccall f_5923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5926)
static void C_ccall f_5926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5931)
static void C_fcall f_5931(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5987)
static void C_ccall f_5987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5983)
static void C_ccall f_5983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5968)
static void C_ccall f_5968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5947)
static void C_fcall f_5947(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5958)
static void C_ccall f_5958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5954)
static void C_ccall f_5954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5774)
static void C_fcall f_5774(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5914)
static void C_ccall f_5914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5781)
static void C_fcall f_5781(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5787)
static void C_ccall f_5787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5870)
static void C_fcall f_5870(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5873)
static void C_ccall f_5873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5883)
static void C_ccall f_5883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5876)
static void C_ccall f_5876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5837)
static void C_ccall f_5837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5843)
static void C_ccall f_5843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5580)
static void C_fcall f_5580(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5587)
static void C_ccall f_5587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5696)
static void C_ccall f_5696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5714)
static void C_ccall f_5714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5743)
static void C_fcall f_5743(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5765)
static void C_ccall f_5765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5721)
static void C_ccall f_5721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5655)
static void C_ccall f_5655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5657)
static void C_fcall f_5657(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5686)
static void C_ccall f_5686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5651)
static void C_ccall f_5651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5647)
static void C_ccall f_5647(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5618)
static void C_ccall f_5618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5622)
static void C_ccall f_5622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5525)
static void C_fcall f_5525(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5531)
static void C_fcall f_5531(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5563)
static void C_ccall f_5563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5566)
static void C_ccall f_5566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5569)
static void C_ccall f_5569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5572)
static void C_ccall f_5572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5541)
static void C_ccall f_5541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5205)
static void C_fcall f_5205(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5394)
static void C_fcall f_5394(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5512)
static void C_ccall f_5512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5402)
static void C_fcall f_5402(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5406)
static void C_ccall f_5406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5409)
static void C_ccall f_5409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5412)
static void C_ccall f_5412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5415)
static void C_ccall f_5415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5418)
static void C_ccall f_5418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5509)
static void C_ccall f_5509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5421)
static void C_fcall f_5421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5424)
static void C_fcall f_5424(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5430)
static void C_ccall f_5430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5498)
static void C_ccall f_5498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5464)
static void C_ccall f_5464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5470)
static void C_fcall f_5470(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5478)
static void C_ccall f_5478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5474)
static void C_ccall f_5474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5436)
static void C_ccall f_5436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5439)
static void C_ccall f_5439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5442)
static void C_ccall f_5442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5445)
static void C_ccall f_5445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5448)
static void C_ccall f_5448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5451)
static void C_ccall f_5451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5324)
static void C_ccall f_5324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5343)
static void C_fcall f_5343(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5381)
static void C_ccall f_5381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5351)
static void C_fcall f_5351(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5355)
static void C_ccall f_5355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5358)
static void C_ccall f_5358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5361)
static void C_ccall f_5361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5364)
static void C_ccall f_5364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5378)
static void C_ccall f_5378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5374)
static void C_ccall f_5374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5367)
static void C_ccall f_5367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5327)
static void C_ccall f_5327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5341)
static void C_ccall f_5341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5330)
static void C_ccall f_5330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5337)
static void C_ccall f_5337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5244)
static void C_fcall f_5244(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5246)
static void C_ccall f_5246(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5250)
static void C_ccall f_5250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5253)
static void C_ccall f_5253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5256)
static void C_ccall f_5256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5259)
static void C_ccall f_5259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5262)
static void C_ccall f_5262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5265)
static void C_ccall f_5265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5268)
static void C_ccall f_5268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5271)
static void C_ccall f_5271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5274)
static void C_ccall f_5274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5277)
static void C_ccall f_5277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5280)
static void C_ccall f_5280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5283)
static void C_ccall f_5283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5297)
static void C_ccall f_5297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5293)
static void C_ccall f_5293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5286)
static void C_ccall f_5286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5208)
static void C_fcall f_5208(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5221)
static void C_fcall f_5221(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5231)
static void C_ccall f_5231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5212)
static void C_ccall f_5212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4865)
static void C_fcall f_4865(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4869)
static void C_ccall f_4869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4938)
static void C_fcall f_4938(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5192)
static void C_ccall f_5192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4946)
static void C_fcall f_4946(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4950)
static void C_ccall f_4950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5189)
static void C_ccall f_5189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4956)
static void C_fcall f_4956(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5175)
static void C_ccall f_5175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4959)
static void C_ccall f_4959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4962)
static void C_ccall f_4962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4965)
static void C_ccall f_4965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4968)
static void C_ccall f_4968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4971)
static void C_ccall f_4971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4974)
static void C_ccall f_4974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5167)
static void C_ccall f_5167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4977)
static void C_fcall f_4977(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4980)
static void C_ccall f_4980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5121)
static void C_ccall f_5121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5123)
static void C_fcall f_5123(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5149)
static void C_ccall f_5149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5131)
static void C_fcall f_5131(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5142)
static void C_ccall f_5142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4983)
static void C_ccall f_4983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5070)
static void C_ccall f_5070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5073)
static void C_ccall f_5073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5076)
static void C_ccall f_5076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5079)
static void C_ccall f_5079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5095)
static void C_ccall f_5095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5098)
static void C_ccall f_5098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11178)
static void C_ccall f11178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5101)
static void C_ccall f_5101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5104)
static void C_ccall f_5104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4986)
static void C_ccall f_4986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4989)
static void C_ccall f_4989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4992)
static void C_ccall f_4992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5042)
static void C_fcall f_5042(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5045)
static void C_ccall f_5045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4995)
static void C_ccall f_4995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4998)
static void C_ccall f_4998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5030)
static void C_ccall f_5030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5004)
static void C_ccall f_5004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5013)
static void C_ccall f_5013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5016)
static void C_ccall f_5016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4872)
static void C_ccall f_4872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4877)
static void C_fcall f_4877(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4889)
static void C_ccall f_4889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4899)
static void C_ccall f_4899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4901)
static void C_fcall f_4901(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4911)
static void C_ccall f_4911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4892)
static void C_ccall f_4892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4925)
static void C_ccall f_4925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4694)
static void C_fcall f_4694(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4837)
static void C_fcall f_4837(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4852)
static void C_ccall f_4852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4704)
static void C_ccall f_4704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4707)
static void C_ccall f_4707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4710)
static void C_ccall f_4710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4715)
static void C_fcall f_4715(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4725)
static void C_ccall f_4725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4731)
static void C_ccall f_4731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4784)
static void C_fcall f_4784(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4794)
static void C_ccall f_4794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4734)
static void C_ccall f_4734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4757)
static void C_fcall f_4757(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4767)
static void C_ccall f_4767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4737)
static void C_ccall f_4737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4740)
static void C_ccall f_4740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4525)
static void C_fcall f_4525(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4686)
static void C_ccall f_4686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4545)
static void C_ccall f_4545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4644)
static void C_ccall f_4644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4652)
static void C_ccall f_4652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4656)
static void C_ccall f_4656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4678)
static void C_ccall f_4678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4674)
static void C_ccall f_4674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4666)
static void C_ccall f_4666(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4664)
static void C_ccall f_4664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4660)
static void C_ccall f_4660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4563)
static void C_ccall f_4563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4566)
static void C_ccall f_4566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4569)
static void C_ccall f_4569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4633)
static void C_ccall f_4633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4572)
static void C_ccall f_4572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4575)
static void C_ccall f_4575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4578)
static void C_ccall f_4578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4593)
static void C_ccall f_4593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4598)
static void C_fcall f_4598(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4613)
static void C_ccall f_4613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4581)
static void C_ccall f_4581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4528)
static void C_fcall f_4528(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4542)
static void C_ccall f_4542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2644)
static void C_fcall f_2644(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4493)
static void C_fcall f_4493(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4499)
static void C_ccall f_4499(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4503)
static void C_ccall f_4503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2647)
static void C_fcall f_2647(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4452)
static void C_ccall f_4452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4455)
static void C_ccall f_4455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4458)
static void C_ccall f_4458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4461)
static void C_ccall f_4461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4464)
static void C_ccall f_4464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4372)
static void C_ccall f_4372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4385)
static void C_fcall f_4385(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4417)
static void C_ccall f_4417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4395)
static void C_ccall f_4395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4398)
static void C_ccall f_4398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4347)
static void C_ccall f_4347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4324)
static void C_ccall f_4324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4327)
static void C_ccall f_4327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4302)
static void C_ccall f_4302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4274)
static void C_ccall f_4274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4277)
static void C_ccall f_4277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4294)
static void C_ccall f_4294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4280)
static void C_ccall f_4280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4283)
static void C_ccall f_4283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4244)
static void C_ccall f_4244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4247)
static void C_ccall f_4247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4228)
static void C_ccall f_4228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4232)
static void C_ccall f_4232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4210)
static void C_ccall f_4210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4213)
static void C_ccall f_4213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4190)
static void C_ccall f_4190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4154)
static void C_ccall f_4154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4157)
static void C_ccall f_4157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4138)
static void C_ccall f_4138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4116)
static void C_ccall f_4116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4097)
static void C_ccall f_4097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4100)
static void C_ccall f_4100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4078)
static void C_ccall f_4078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4074)
static void C_ccall f_4074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4055)
static void C_ccall f_4055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4025)
static void C_ccall f_4025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4043)
static void C_ccall f_4043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4028)
static void C_ccall f_4028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4031)
static void C_ccall f_4031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3989)
static void C_ccall f_3989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3973)
static void C_ccall f_3973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11150)
static void C_ccall f11150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3976)
static void C_ccall f_3976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3860)
static void C_ccall f_3860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3863)
static void C_ccall f_3863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3920)
static void C_fcall f_3920(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3928)
static void C_fcall f_3928(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3932)
static void C_ccall f_3932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3935)
static void C_ccall f_3935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3876)
static void C_ccall f_3876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3878)
static void C_fcall f_3878(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3893)
static void C_ccall f_3893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3869)
static void C_ccall f_3869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3401)
static void C_ccall f_3401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3404)
static void C_fcall f_3404(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3810)
static void C_ccall f_3810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3410)
static void C_fcall f_3410(C_word t0,C_word t1) C_noret;
C_noret_decl(f11142)
static void C_ccall f11142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3799)
static void C_ccall f_3799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2632)
static void C_ccall f_2632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3792)
static void C_ccall f_3792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3416)
static void C_ccall f_3416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3620)
static void C_fcall f_3620(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3709)
static void C_ccall f_3709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3712)
static void C_ccall f_3712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3715)
static void C_ccall f_3715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3730)
static void C_fcall f_3730(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3718)
static void C_ccall f_3718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3724)
static void C_ccall f_3724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3640)
static void C_ccall f_3640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3706)
static void C_ccall f_3706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3699)
static void C_ccall f_3699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3695)
static void C_ccall f_3695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3688)
static void C_ccall f_3688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3681)
static void C_ccall f_3681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3673)
static void C_ccall f_3673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3669)
static void C_ccall f_3669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3643)
static void C_ccall f_3643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3646)
static void C_ccall f_3646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3649)
static void C_ccall f_3649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3614)
static void C_ccall f_3614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3452)
static void C_ccall f_3452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3598)
static void C_ccall f_3598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3601)
static void C_ccall f_3601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3574)
static void C_ccall f_3574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3577)
static void C_ccall f_3577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3580)
static void C_ccall f_3580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11137)
static void C_ccall f11137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3583)
static void C_ccall f_3583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3586)
static void C_ccall f_3586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3455)
static void C_ccall f_3455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3458)
static void C_ccall f_3458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3521)
static void C_fcall f_3521(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3542)
static void C_ccall f_3542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3529)
static void C_fcall f_3529(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3533)
static void C_ccall f_3533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3536)
static void C_ccall f_3536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3461)
static void C_ccall f_3461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3477)
static void C_ccall f_3477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3479)
static void C_fcall f_3479(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3494)
static void C_ccall f_3494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3464)
static void C_ccall f_3464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3467)
static void C_ccall f_3467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3433)
static void C_ccall f_3433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3436)
static void C_ccall f_3436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3368)
static void C_ccall f_3368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11129)
static void C_ccall f11129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3364)
static void C_ccall f_3364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3350)
static void C_ccall f_3350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3353)
static void C_ccall f_3353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3347)
static void C_ccall f_3347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11124)
static void C_ccall f11124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3343)
static void C_ccall f_3343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3329)
static void C_ccall f_3329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3332)
static void C_ccall f_3332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3281)
static void C_ccall f_3281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3302)
static void C_ccall f_3302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f11119)
static void C_ccall f11119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3298)
static void C_ccall f_3298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3284)
static void C_ccall f_3284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3287)
static void C_ccall f_3287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3250)
static void C_ccall f_3250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3246)
static void C_ccall f_3246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3204)
static void C_ccall f_3204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3172)
static void C_ccall f_3172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3101)
static void C_ccall f_3101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3117)
static void C_fcall f_3117(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3138)
static void C_ccall f_3138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3125)
static void C_fcall f_3125(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3104)
static void C_ccall f_3104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3069)
static void C_ccall f_3069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3075)
static void C_ccall f_3075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3040)
static void C_ccall f_3040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3046)
static void C_ccall f_3046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3049)
static void C_ccall f_3049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3009)
static void C_ccall f_3009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3012)
static void C_ccall f_3012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2976)
static void C_ccall f_2976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2979)
static void C_ccall f_2979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2898)
static void C_ccall f_2898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2844)
static void C_fcall f_2844(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2854)
static void C_ccall f_2854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2860)
static void C_ccall f_2860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2786)
static void C_ccall f_2786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2789)
static void C_ccall f_2789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2792)
static void C_ccall f_2792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2795)
static void C_ccall f_2795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2798)
static void C_ccall f_2798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2801)
static void C_ccall f_2801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2602)
static void C_fcall f_2602(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2565)
static void C_ccall f_2565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2567)
static void C_fcall f_2567(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2582)
static void C_ccall f_2582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2520)
static void C_fcall f_2520(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_9509)
static void C_fcall trf_9509(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9509(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9509(t0,t1);}

C_noret_decl(trf_9701)
static void C_fcall trf_9701(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9701(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9701(t0,t1);}

C_noret_decl(trf_9678)
static void C_fcall trf_9678(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9678(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9678(t0,t1,t2);}

C_noret_decl(trf_9400)
static void C_fcall trf_9400(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9400(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9400(t0,t1);}

C_noret_decl(trf_8938)
static void C_fcall trf_8938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8938(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8938(t0,t1);}

C_noret_decl(trf_8965)
static void C_fcall trf_8965(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8965(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8965(t0,t1);}

C_noret_decl(trf_9160)
static void C_fcall trf_9160(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9160(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9160(t0,t1);}

C_noret_decl(trf_9169)
static void C_fcall trf_9169(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9169(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9169(t0,t1);}

C_noret_decl(trf_9205)
static void C_fcall trf_9205(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9205(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9205(t0,t1);}

C_noret_decl(trf_8910)
static void C_fcall trf_8910(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8910(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8910(t0,t1);}

C_noret_decl(trf_8101)
static void C_fcall trf_8101(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8101(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8101(t0,t1);}

C_noret_decl(trf_8203)
static void C_fcall trf_8203(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8203(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8203(t0,t1);}

C_noret_decl(trf_8236)
static void C_fcall trf_8236(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8236(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8236(t0,t1);}

C_noret_decl(trf_8332)
static void C_fcall trf_8332(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8332(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8332(t0,t1);}

C_noret_decl(trf_8344)
static void C_fcall trf_8344(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8344(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8344(t0,t1);}

C_noret_decl(trf_8404)
static void C_fcall trf_8404(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8404(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8404(t0,t1);}

C_noret_decl(trf_8421)
static void C_fcall trf_8421(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8421(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8421(t0,t1);}

C_noret_decl(trf_8438)
static void C_fcall trf_8438(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8438(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8438(t0,t1);}

C_noret_decl(trf_8477)
static void C_fcall trf_8477(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8477(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8477(t0,t1);}

C_noret_decl(trf_8494)
static void C_fcall trf_8494(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8494(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8494(t0,t1);}

C_noret_decl(trf_8511)
static void C_fcall trf_8511(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8511(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8511(t0,t1);}

C_noret_decl(trf_8528)
static void C_fcall trf_8528(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8528(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8528(t0,t1);}

C_noret_decl(trf_8545)
static void C_fcall trf_8545(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8545(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8545(t0,t1);}

C_noret_decl(trf_8562)
static void C_fcall trf_8562(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8562(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8562(t0,t1);}

C_noret_decl(trf_8579)
static void C_fcall trf_8579(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8579(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8579(t0,t1);}

C_noret_decl(trf_8608)
static void C_fcall trf_8608(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8608(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8608(t0,t1,t2);}

C_noret_decl(trf_8618)
static void C_fcall trf_8618(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8618(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8618(t0,t1);}

C_noret_decl(trf_8363)
static void C_fcall trf_8363(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8363(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8363(t0,t1,t2);}

C_noret_decl(trf_8031)
static void C_fcall trf_8031(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8031(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8031(t0,t1,t2);}

C_noret_decl(trf_8026)
static void C_fcall trf_8026(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8026(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8026(t0,t1);}

C_noret_decl(trf_7471)
static void C_fcall trf_7471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7471(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7471(t0,t1,t2);}

C_noret_decl(trf_7479)
static void C_fcall trf_7479(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7479(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7479(t0,t1,t2);}

C_noret_decl(trf_7892)
static void C_fcall trf_7892(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7892(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7892(t0,t1,t2,t3);}

C_noret_decl(trf_7510)
static void C_fcall trf_7510(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7510(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7510(t0,t1);}

C_noret_decl(trf_7519)
static void C_fcall trf_7519(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7519(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7519(t0,t1);}

C_noret_decl(trf_7531)
static void C_fcall trf_7531(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7531(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7531(t0,t1);}

C_noret_decl(trf_7543)
static void C_fcall trf_7543(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7543(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7543(t0,t1);}

C_noret_decl(trf_7588)
static void C_fcall trf_7588(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7588(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7588(t0,t1);}

C_noret_decl(trf_7553)
static void C_fcall trf_7553(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7553(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7553(t0,t1,t2);}

C_noret_decl(trf_7157)
static void C_fcall trf_7157(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7157(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7157(t0,t1,t2);}

C_noret_decl(trf_7165)
static void C_fcall trf_7165(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7165(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7165(t0,t1,t2);}

C_noret_decl(trf_7331)
static void C_fcall trf_7331(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7331(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7331(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7338)
static void C_fcall trf_7338(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7338(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7338(t0,t1);}

C_noret_decl(trf_7117)
static void C_fcall trf_7117(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7117(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7117(t0,t1,t2);}

C_noret_decl(trf_7066)
static void C_fcall trf_7066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7066(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7066(t0,t1,t2);}

C_noret_decl(trf_6945)
static void C_fcall trf_6945(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6945(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6945(t0,t1,t2);}

C_noret_decl(trf_6974)
static void C_fcall trf_6974(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6974(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6974(t0,t1);}

C_noret_decl(trf_6877)
static void C_fcall trf_6877(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6877(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6877(t0,t1,t2);}

C_noret_decl(trf_6041)
static void C_fcall trf_6041(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6041(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6041(t0,t1);}

C_noret_decl(trf_6047)
static void C_fcall trf_6047(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6047(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6047(t0,t1,t2);}

C_noret_decl(trf_6055)
static void C_fcall trf_6055(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6055(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6055(t0,t1,t2);}

C_noret_decl(trf_6077)
static void C_fcall trf_6077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6077(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6077(t0,t1);}

C_noret_decl(trf_6711)
static void C_fcall trf_6711(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6711(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6711(t0,t1);}

C_noret_decl(trf_6146)
static void C_fcall trf_6146(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6146(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6146(t0,t1);}

C_noret_decl(trf_6671)
static void C_fcall trf_6671(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6671(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6671(t0,t1);}

C_noret_decl(trf_6673)
static void C_fcall trf_6673(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6673(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6673(t0,t1,t2,t3);}

C_noret_decl(trf_6629)
static void C_fcall trf_6629(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6629(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6629(t0,t1,t2);}

C_noret_decl(trf_6573)
static void C_fcall trf_6573(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6573(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6573(t0,t1);}

C_noret_decl(trf_6537)
static void C_fcall trf_6537(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6537(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6537(t0,t1);}

C_noret_decl(trf_6504)
static void C_fcall trf_6504(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6504(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6504(t0,t1);}

C_noret_decl(trf_6458)
static void C_fcall trf_6458(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6458(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6458(t0,t1);}

C_noret_decl(trf_6178)
static void C_fcall trf_6178(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6178(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6178(t0,t1);}

C_noret_decl(trf_6235)
static void C_fcall trf_6235(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6235(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6235(t0,t1,t2,t3);}

C_noret_decl(trf_5993)
static void C_fcall trf_5993(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5993(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5993(t0,t1,t2,t3);}

C_noret_decl(trf_5916)
static void C_fcall trf_5916(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5916(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5916(t0,t1,t2);}

C_noret_decl(trf_5931)
static void C_fcall trf_5931(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5931(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5931(t0,t1,t2,t3);}

C_noret_decl(trf_5947)
static void C_fcall trf_5947(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5947(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5947(t0,t1);}

C_noret_decl(trf_5774)
static void C_fcall trf_5774(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5774(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5774(t0,t1,t2,t3);}

C_noret_decl(trf_5781)
static void C_fcall trf_5781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5781(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5781(t0,t1);}

C_noret_decl(trf_5870)
static void C_fcall trf_5870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5870(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5870(t0,t1);}

C_noret_decl(trf_5580)
static void C_fcall trf_5580(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5580(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5580(t0,t1,t2);}

C_noret_decl(trf_5743)
static void C_fcall trf_5743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5743(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5743(t0,t1,t2,t3);}

C_noret_decl(trf_5657)
static void C_fcall trf_5657(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5657(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5657(t0,t1,t2);}

C_noret_decl(trf_5525)
static void C_fcall trf_5525(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5525(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5525(t0,t1);}

C_noret_decl(trf_5531)
static void C_fcall trf_5531(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5531(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5531(t0,t1,t2,t3);}

C_noret_decl(trf_5205)
static void C_fcall trf_5205(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5205(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5205(t0,t1);}

C_noret_decl(trf_5394)
static void C_fcall trf_5394(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5394(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5394(t0,t1,t2);}

C_noret_decl(trf_5402)
static void C_fcall trf_5402(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5402(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5402(t0,t1,t2);}

C_noret_decl(trf_5421)
static void C_fcall trf_5421(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5421(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5421(t0,t1);}

C_noret_decl(trf_5424)
static void C_fcall trf_5424(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5424(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5424(t0,t1);}

C_noret_decl(trf_5470)
static void C_fcall trf_5470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5470(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5470(t0,t1);}

C_noret_decl(trf_5343)
static void C_fcall trf_5343(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5343(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5343(t0,t1,t2);}

C_noret_decl(trf_5351)
static void C_fcall trf_5351(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5351(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5351(t0,t1,t2);}

C_noret_decl(trf_5244)
static void C_fcall trf_5244(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5244(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5244(t0,t1,t2);}

C_noret_decl(trf_5208)
static void C_fcall trf_5208(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5208(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5208(t0,t1);}

C_noret_decl(trf_5221)
static void C_fcall trf_5221(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5221(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5221(t0,t1,t2,t3);}

C_noret_decl(trf_4865)
static void C_fcall trf_4865(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4865(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4865(t0,t1);}

C_noret_decl(trf_4938)
static void C_fcall trf_4938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4938(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4938(t0,t1,t2);}

C_noret_decl(trf_4946)
static void C_fcall trf_4946(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4946(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4946(t0,t1,t2);}

C_noret_decl(trf_4956)
static void C_fcall trf_4956(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4956(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4956(t0,t1);}

C_noret_decl(trf_4977)
static void C_fcall trf_4977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4977(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4977(t0,t1);}

C_noret_decl(trf_5123)
static void C_fcall trf_5123(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5123(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5123(t0,t1,t2);}

C_noret_decl(trf_5131)
static void C_fcall trf_5131(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5131(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5131(t0,t1,t2);}

C_noret_decl(trf_5042)
static void C_fcall trf_5042(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5042(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5042(t0,t1);}

C_noret_decl(trf_4877)
static void C_fcall trf_4877(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4877(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4877(t0,t1,t2);}

C_noret_decl(trf_4901)
static void C_fcall trf_4901(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4901(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4901(t0,t1,t2);}

C_noret_decl(trf_4694)
static void C_fcall trf_4694(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4694(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4694(t0,t1);}

C_noret_decl(trf_4837)
static void C_fcall trf_4837(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4837(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4837(t0,t1,t2);}

C_noret_decl(trf_4715)
static void C_fcall trf_4715(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4715(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4715(t0,t1,t2,t3);}

C_noret_decl(trf_4784)
static void C_fcall trf_4784(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4784(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4784(t0,t1,t2);}

C_noret_decl(trf_4757)
static void C_fcall trf_4757(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4757(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4757(t0,t1,t2);}

C_noret_decl(trf_4525)
static void C_fcall trf_4525(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4525(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4525(t0,t1);}

C_noret_decl(trf_4598)
static void C_fcall trf_4598(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4598(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4598(t0,t1,t2);}

C_noret_decl(trf_4528)
static void C_fcall trf_4528(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4528(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4528(t0,t1);}

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

C_noret_decl(trf_4493)
static void C_fcall trf_4493(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4493(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4493(t0,t1,t2,t3);}

C_noret_decl(trf_2647)
static void C_fcall trf_2647(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2647(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2647(t0,t1,t2,t3);}

C_noret_decl(trf_4385)
static void C_fcall trf_4385(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4385(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4385(t0,t1,t2,t3);}

C_noret_decl(trf_3920)
static void C_fcall trf_3920(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3920(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3920(t0,t1,t2,t3);}

C_noret_decl(trf_3928)
static void C_fcall trf_3928(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3928(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3928(t0,t1,t2,t3);}

C_noret_decl(trf_3878)
static void C_fcall trf_3878(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3878(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3878(t0,t1,t2,t3);}

C_noret_decl(trf_3404)
static void C_fcall trf_3404(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3404(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3404(t0,t1);}

C_noret_decl(trf_3410)
static void C_fcall trf_3410(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3410(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3410(t0,t1);}

C_noret_decl(trf_3620)
static void C_fcall trf_3620(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3620(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3620(t0,t1);}

C_noret_decl(trf_3730)
static void C_fcall trf_3730(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3730(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3730(t0,t1);}

C_noret_decl(trf_3521)
static void C_fcall trf_3521(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3521(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3521(t0,t1,t2,t3);}

C_noret_decl(trf_3529)
static void C_fcall trf_3529(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3529(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3529(t0,t1,t2,t3);}

C_noret_decl(trf_3479)
static void C_fcall trf_3479(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3479(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3479(t0,t1,t2,t3);}

C_noret_decl(trf_3117)
static void C_fcall trf_3117(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3117(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3117(t0,t1,t2,t3);}

C_noret_decl(trf_3125)
static void C_fcall trf_3125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3125(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3125(t0,t1,t2,t3);}

C_noret_decl(trf_2844)
static void C_fcall trf_2844(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2844(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2844(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2602)
static void C_fcall trf_2602(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2602(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2602(t0,t1,t2);}

C_noret_decl(trf_2567)
static void C_fcall trf_2567(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2567(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2567(t0,t1,t2);}

C_noret_decl(trf_2520)
static void C_fcall trf_2520(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2520(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2520(t0,t1,t2);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_backend_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_backend_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("backend_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(2512)){
C_save(t1);
C_rereclaim2(2512*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,864);
lf[0]=C_h_intern(&lf[0],15,"\010compileroutput");
lf[1]=C_h_intern(&lf[1],12,"\010compilergen");
lf[2]=C_h_intern(&lf[2],7,"newline");
lf[3]=C_h_intern(&lf[3],7,"display");
lf[4]=C_h_intern(&lf[4],17,"\010compilergen-list");
lf[5]=C_h_intern(&lf[5],11,"intersperse");
lf[6]=C_h_intern(&lf[6],18,"\010compilerunique-id");
lf[7]=C_h_intern(&lf[7],22,"\010compilergenerate-code");
lf[8]=C_h_intern(&lf[8],13,"\010compilerbomb");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\021can\047t find lambda");
lf[10]=C_h_intern(&lf[10],17,"lambda-literal-id");
lf[11]=C_h_intern(&lf[11],4,"find");
lf[12]=C_h_intern(&lf[12],14,"\004coreimmediate");
lf[13]=C_h_intern(&lf[13],4,"bool");
lf[14]=C_decode_literal(C_heaptop,"\376B\000\000\015C_SCHEME_TRUE");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\016C_SCHEME_FALSE");
lf[16]=C_h_intern(&lf[16],4,"char");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\021C_make_character(");
lf[18]=C_h_intern(&lf[18],3,"nil");
lf[19]=C_decode_literal(C_heaptop,"\376B\000\000\024C_SCHEME_END_OF_LIST");
lf[20]=C_h_intern(&lf[20],3,"fix");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\006C_fix(");
lf[22]=C_h_intern(&lf[22],3,"eof");
lf[23]=C_decode_literal(C_heaptop,"\376B\000\000\024C_SCHEME_END_OF_FILE");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\015bad immediate");
lf[25]=C_h_intern(&lf[25],12,"\004coreliteral");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\013((C_word)li");
lf[27]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[29]=C_h_intern(&lf[29],2,"if");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\005else{");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\013if(C_truep(");
lf[33]=C_h_intern(&lf[33],9,"\004coreproc");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\010(C_word)");
lf[35]=C_h_intern(&lf[35],9,"\004corebind");
lf[36]=C_h_intern(&lf[36],16,"\004corelet_unboxed");
lf[37]=C_h_intern(&lf[37],8,"\004coreref");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\002)[");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\012((C_word*)");
lf[40]=C_h_intern(&lf[40],10,"\004coreunbox");
lf[41]=C_decode_literal(C_heaptop,"\376B\000\000\004)[1]");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\012((C_word*)");
lf[43]=C_h_intern(&lf[43],13,"\004coreupdate_i");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\021C_set_block_item(");
lf[45]=C_h_intern(&lf[45],11,"\004coreupdate");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\002)+");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\024C_mutate(((C_word *)");
lf[49]=C_h_intern(&lf[49],16,"\004coreupdatebox_i");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\003,0,");
lf[51]=C_decode_literal(C_heaptop,"\376B\000\000\021C_set_block_item(");
lf[52]=C_h_intern(&lf[52],14,"\004coreupdatebox");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\004)+1,");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\024C_mutate(((C_word *)");
lf[55]=C_h_intern(&lf[55],12,"\004coreclosure");
lf[56]=C_decode_literal(C_heaptop,"\376B\000\000\021tmp=(C_word)a,a+=");
lf[57]=C_decode_literal(C_heaptop,"\376B\000\000\005,tmp)");
lf[58]=C_decode_literal(C_heaptop,"\376B\000\000\002a[");
lf[59]=C_decode_literal(C_heaptop,"\376B\000\000\002]=");
lf[60]=C_h_intern(&lf[60],4,"iota");
lf[61]=C_decode_literal(C_heaptop,"\376B\000\000\023(*a=C_CLOSURE_TYPE|");
lf[62]=C_h_intern(&lf[62],8,"\004corebox");
lf[63]=C_decode_literal(C_heaptop,"\376B\000\000\030,tmp=(C_word)a,a+=2,tmp)");
lf[64]=C_decode_literal(C_heaptop,"\376B\000\000\031(*a=C_VECTOR_TYPE|1,a[1]=");
lf[65]=C_h_intern(&lf[65],10,"\004corelocal");
lf[66]=C_h_intern(&lf[66],13,"\004coresetlocal");
lf[67]=C_h_intern(&lf[67],11,"\004coreglobal");
lf[68]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\017C_retrieve2(lf[");
lf[71]=C_decode_literal(C_heaptop,"\376B\000\000\002],");
lf[72]=C_h_intern(&lf[72],21,"\010compilerc-ify-string");
lf[73]=C_h_intern(&lf[73],14,"symbol->string");
lf[74]=C_decode_literal(C_heaptop,"\376B\000\000\016*((C_word*)lf[");
lf[75]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[76]=C_decode_literal(C_heaptop,"\376B\000\000\016C_retrieve(lf[");
lf[77]=C_decode_literal(C_heaptop,"\376B\000\000\002])");
lf[78]=C_h_intern(&lf[78],14,"\004coresetglobal");
lf[79]=C_decode_literal(C_heaptop,"\376B\000\000\012 /* (set! ");
lf[80]=C_decode_literal(C_heaptop,"\376B\000\000\011 ...) */,");
lf[81]=C_h_intern(&lf[81],17,"string-translate*");
lf[82]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\002*/\376B\000\000\003* /\376\377\016");
lf[83]=C_h_intern(&lf[83],8,"->string");
lf[84]=C_h_intern(&lf[84],28,"\003syssymbol->qualified-string");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000\015C_mutate(&lf[");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mutate((C_word*)lf[");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000\003]+1");
lf[89]=C_h_intern(&lf[89],16,"\004coresetglobal_i");
lf[90]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[91]=C_decode_literal(C_heaptop,"\376B\000\000\005] /* ");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\005 */ =");
lf[93]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\002*/\376B\000\000\003* /\376\377\016");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\024C_set_block_item(lf[");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\005] /* ");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\006 */,0,");
lf[97]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\002*/\376B\000\000\003* /\376\377\016");
lf[98]=C_h_intern(&lf[98],14,"\004coreundefined");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\022C_SCHEME_UNDEFINED");
lf[100]=C_h_intern(&lf[100],9,"\004corecall");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\003,0,");
lf[103]=C_decode_literal(C_heaptop,"\376B\000\000\012goto loop;");
lf[104]=C_decode_literal(C_heaptop,"\376B\000\000\002c=");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\002=t");
lf[106]=C_h_intern(&lf[106],26,"lambda-literal-temporaries");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[108]=C_h_intern(&lf[108],22,"lambda-literal-looping");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\020C_retrieve_proc(");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[113]=C_decode_literal(C_heaptop,"\376B\000\000\030C_retrieve2_symbol_proc(");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[115]=C_h_intern(&lf[115],13,"string-append");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\001]");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\020C_retrieve_proc(");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\016*((C_word*)lf[");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\032C_retrieve_symbol_proc(lf[");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\002])");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\016*((C_word*)lf[");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\004]+1)");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\010((C_proc");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\002,t");
lf[131]=C_h_intern(&lf[131],6,"unsafe");
lf[132]=C_decode_literal(C_heaptop,"\376B\000\000\024(void*)(*((C_word*)t");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000\004+1))");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\021C_retrieve_proc(t");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[136]=C_h_intern(&lf[136],28,"\010compilerno-procedure-checks");
lf[137]=C_decode_literal(C_heaptop,"\376B\000\000\010((C_proc");
lf[138]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[139]=C_h_intern(&lf[139],24,"\010compileremit-trace-info");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000\011C_trace(\042");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\003\042);");
lf[142]=C_h_intern(&lf[142],16,"string-translate");
lf[143]=C_decode_literal(C_heaptop,"\376B\000\000\001\134");
lf[144]=C_decode_literal(C_heaptop,"\376B\000\000\001/");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\003/* ");
lf[146]=C_decode_literal(C_heaptop,"\376B\000\000\003 */");
lf[147]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376B\000\000\002*/\376B\000\000\003* /\376\377\016");
lf[148]=C_h_intern(&lf[148],27,"lambda-literal-closure-size");
lf[149]=C_h_intern(&lf[149],28,"\010compilersource-info->string");
lf[150]=C_h_intern(&lf[150],12,"\004corerecurse");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\012goto loop;");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\002=t");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\003t0,");
lf[154]=C_h_intern(&lf[154],16,"\004coredirect_call");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\011C_a_i(&a,");
lf[156]=C_h_intern(&lf[156],13,"\004corecallunit");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[159]=C_decode_literal(C_heaptop,"\376B\000\000\012_toplevel(");
lf[160]=C_decode_literal(C_heaptop,"\376B\000\000\024,C_SCHEME_UNDEFINED,");
lf[161]=C_h_intern(&lf[161],11,"\004corereturn");
lf[162]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000\007return(");
lf[164]=C_h_intern(&lf[164],11,"\004coreinline");
lf[165]=C_h_intern(&lf[165],20,"\004coreinline_allocate");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\004(&a,");
lf[167]=C_h_intern(&lf[167],15,"\004coreinline_ref");
lf[168]=C_h_intern(&lf[168],34,"\010compilerforeign-result-conversion");
lf[169]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[170]=C_h_intern(&lf[170],18,"\004coreinline_update");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\002=(");
lf[173]=C_h_intern(&lf[173],36,"\010compilerforeign-argument-conversion");
lf[174]=C_h_intern(&lf[174],33,"\010compilerforeign-type-declaration");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[176]=C_h_intern(&lf[176],19,"\004coreinline_loc_ref");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\003)))");
lf[178]=C_decode_literal(C_heaptop,"\376B\000\000\003*((");
lf[179]=C_decode_literal(C_heaptop,"\376B\000\000\021*)C_data_pointer(");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[182]=C_h_intern(&lf[182],22,"\004coreinline_loc_update");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\003))=");
lf[185]=C_decode_literal(C_heaptop,"\376B\000\000\004((*(");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\021*)C_data_pointer(");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[188]=C_h_intern(&lf[188],16,"\004coreunboxed_ref");
lf[189]=C_h_intern(&lf[189],17,"\004coreunboxed_set!");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\025),C_SCHEME_UNDEFINED)");
lf[191]=C_decode_literal(C_heaptop,"\376B\000\000\002((");
lf[192]=C_h_intern(&lf[192],19,"\004coreinline_unboxed");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[194]=C_h_intern(&lf[194],11,"\004coreswitch");
lf[195]=C_decode_literal(C_heaptop,"\376B\000\000\010default:");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\005case ");
lf[197]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[198]=C_decode_literal(C_heaptop,"\376B\000\000\007switch(");
lf[199]=C_h_intern(&lf[199],9,"\004corecond");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\002)\077");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\011(C_truep(");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\010bad form");
lf[203]=C_h_intern(&lf[203],13,"pair-for-each");
lf[204]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[205]=C_h_intern(&lf[205],30,"\010compilerexternal-protos-first");
lf[206]=C_h_intern(&lf[206],50,"\010compilergenerate-foreign-callback-stub-prototypes");
lf[207]=C_h_intern(&lf[207],22,"foreign-callback-stubs");
lf[208]=C_h_intern(&lf[208],29,"\010compilerforeign-declarations");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\002*/");
lf[210]=C_decode_literal(C_heaptop,"\376B\000\000\012#include \042");
lf[211]=C_h_intern(&lf[211],28,"\010compilertarget-include-file");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\001\042");
lf[213]=C_h_intern(&lf[213],18,"\010compilerunit-name");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000\011   unit: ");
lf[215]=C_h_intern(&lf[215],19,"\010compilerused-units");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\017   used units: ");
lf[217]=C_h_intern(&lf[217],27,"\010compilercompiler-arguments");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000\022/* Generated from ");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\030 by the CHICKEN compiler");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\0000   http://www.call-with-current-continuation.org");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\021   command line: ");
lf[223]=C_h_intern(&lf[223],18,"string-intersperse");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\003   ");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[227]=C_h_intern(&lf[227],7,"\003sysmap");
lf[228]=C_h_intern(&lf[228],12,"string-split");
lf[229]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[230]=C_h_intern(&lf[230],15,"chicken-version");
lf[231]=C_h_intern(&lf[231],18,"\003sysdecode-seconds");
lf[232]=C_h_intern(&lf[232],15,"current-seconds");
lf[233]=C_decode_literal(C_heaptop,"\376B\000\000\002};");
lf[234]=C_decode_literal(C_heaptop,"\376B\000\000\002,0");
lf[235]=C_decode_literal(C_heaptop,"\376B\000\000\026static C_char C_TLS li");
lf[236]=C_decode_literal(C_heaptop,"\376B\000\000\026[] C_aligned={C_lihdr(");
lf[237]=C_h_intern(&lf[237],23,"\003syslambda-info->string");
lf[238]=C_decode_literal(C_heaptop,"\376B\000\000)static double C_possibly_force_alignment;");
lf[239]=C_decode_literal(C_heaptop,"\376B\000\000\027static C_TLS C_word lf[");
lf[240]=C_decode_literal(C_heaptop,"\376B\000\000\002];");
lf[241]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(C_");
lf[242]=C_decode_literal(C_heaptop,"\376B\000\000\012_toplevel)");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\036C_externimport void C_ccall C_");
lf[244]=C_decode_literal(C_heaptop,"\376B\000\000._toplevel(C_word c,C_word d,C_word k) C_noret;");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000+static C_PTABLE_ENTRY *create_ptable(void);");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\012) C_noret;");
lf[247]=C_h_intern(&lf[247],9,"make-list");
lf[248]=C_decode_literal(C_heaptop,"\376B\000\000\007,C_word");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\025typedef void (*C_proc");
lf[250]=C_decode_literal(C_heaptop,"\376B\000\000\010)(C_word");
lf[251]=C_h_intern(&lf[251],4,"none");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\011,C_word t");
lf[253]=C_decode_literal(C_heaptop,"\376B\000\000\012) C_noret;");
lf[254]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[255]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[256]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[257]=C_decode_literal(C_heaptop,"\376B\000\000\002r(");
lf[258]=C_decode_literal(C_heaptop,"\376B\000\000\016,...) C_noret;");
lf[259]=C_decode_literal(C_heaptop,"\376B\000\000\010 C_noret");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word *a");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word c,");
lf[262]=C_h_intern(&lf[262],8,"toplevel");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\034C_externexport void C_ccall ");
lf[265]=C_h_intern(&lf[265],27,"\010compileremit-unsafe-marker");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\0001C_externexport void C_dynamic_and_unsafe(void) {}");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(C_");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\011_toplevel");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\010toplevel");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\000\010C_fcall ");
lf[272]=C_decode_literal(C_heaptop,"\376B\000\000\010C_ccall ");
lf[273]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\005void ");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[277]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[278]=C_h_intern(&lf[278],21,"small-parameter-limit");
lf[279]=C_h_intern(&lf[279],11,"lset-adjoin");
lf[280]=C_h_intern(&lf[280],1,"=");
lf[281]=C_h_intern(&lf[281],32,"lambda-literal-callee-signatures");
lf[282]=C_h_intern(&lf[282],24,"lambda-literal-allocated");
lf[283]=C_h_intern(&lf[283],21,"lambda-literal-direct");
lf[284]=C_h_intern(&lf[284],33,"lambda-literal-rest-argument-mode");
lf[285]=C_h_intern(&lf[285],28,"lambda-literal-rest-argument");
lf[286]=C_h_intern(&lf[286],27,"\010compilermake-variable-list");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[288]=C_h_intern(&lf[288],27,"lambda-literal-customizable");
lf[289]=C_h_intern(&lf[289],29,"lambda-literal-argument-count");
lf[290]=C_decode_literal(C_heaptop,"\376B\000\000\020C_adjust_stack(-");
lf[291]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\010=C_pick(");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[295]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[296]=C_h_intern(&lf[296],27,"\010compilermake-argument-list");
lf[297]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[298]=C_decode_literal(C_heaptop,"\376B\000\000\004(k)(");
lf[299]=C_decode_literal(C_heaptop,"\376B\000\000\006(a,n);");
lf[300]=C_decode_literal(C_heaptop,"\376B\000\000\007_vector");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\017=C_restore_rest");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\017a=C_alloc(n+1);");
lf[303]=C_decode_literal(C_heaptop,"\376B\000\000\017a=C_alloc(n*3);");
lf[304]=C_decode_literal(C_heaptop,"\376B\000\000\022n=C_rest_count(0);");
lf[305]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\004 k){");
lf[307]=C_decode_literal(C_heaptop,"\376B\000\000\006int n;");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word *a,t");
lf[309]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static void C_fcall tr");
lf[310]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[311]=C_decode_literal(C_heaptop,"\376B\000\000\026 k) C_regparm C_noret;");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[314]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[315]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[316]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_fcall tr");
lf[317]=C_h_intern(&lf[317],12,"\003sysfor-each");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\004(k)(");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static void C_fcall tr");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\004 k){");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[325]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_fcall tr");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000\007(C_proc");
lf[328]=C_decode_literal(C_heaptop,"\376B\000\000\026 k) C_regparm C_noret;");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[330]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static void C_fcall tr");
lf[332]=C_decode_literal(C_heaptop,"\376B\000\000\016(void *dummy){");
lf[333]=C_decode_literal(C_heaptop,"\376B\000\000\017C_noret_decl(tr");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\026static void C_fcall tr");
lf[336]=C_decode_literal(C_heaptop,"\376B\000\000 (void *dummy) C_regparm C_noret;");
lf[337]=C_h_intern(&lf[337],23,"lambda-literal-external");
lf[338]=C_h_intern(&lf[338],17,"get-output-string");
lf[339]=C_h_intern(&lf[339],19,"\003syswrite-char/port");
lf[340]=C_h_intern(&lf[340],5,"write");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\003lf[");
lf[342]=C_h_intern(&lf[342],18,"open-output-string");
lf[343]=C_h_intern(&lf[343],25,"\010compilerwords-per-flonum");
lf[344]=C_h_intern(&lf[344],6,"reduce");
lf[345]=C_h_intern(&lf[345],1,"+");
lf[346]=C_h_intern(&lf[346],12,"vector->list");
lf[347]=C_decode_literal(C_heaptop,"\376B\000\000\035type of literal not supported");
lf[348]=C_h_intern(&lf[348],14,"\010compilerwords");
lf[349]=C_h_intern(&lf[349],15,"\003sysbytevector\077");
lf[350]=C_h_intern(&lf[350],32,"\010compilerblock-variable-literal\077");
lf[351]=C_h_intern(&lf[351],19,"\010compilerimmediate\077");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\000\007=C_fix(");
lf[353]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[354]=C_h_intern(&lf[354],19,"\003sysundefined-value");
lf[355]=C_decode_literal(C_heaptop,"\376B\000\000\024=C_SCHEME_UNDEFINED;");
lf[356]=C_decode_literal(C_heaptop,"\376B\000\000\015C_SCHEME_TRUE");
lf[357]=C_decode_literal(C_heaptop,"\376B\000\000\016C_SCHEME_FALSE");
lf[358]=C_decode_literal(C_heaptop,"\376B\000\000\022=C_make_character(");
lf[359]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[360]=C_decode_literal(C_heaptop,"\376B\000\000\014C_h_intern(&");
lf[361]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[362]=C_decode_literal(C_heaptop,"\376B\000\000\001=");
lf[363]=C_decode_literal(C_heaptop,"\376B\000\000\026=C_SCHEME_END_OF_LIST;");
lf[364]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[365]=C_h_intern(&lf[365],23,"\010compilerencode-literal");
lf[366]=C_decode_literal(C_heaptop,"\376B\000\000\034=C_decode_literal(C_heaptop,");
lf[367]=C_h_intern(&lf[367],20,"\010compilerbig-fixnum\077");
lf[368]=C_h_intern(&lf[368],6,"modulo");
lf[369]=C_h_intern(&lf[369],3,"fx/");
lf[370]=C_h_intern(&lf[370],14,"\003syscopy-bytes");
lf[371]=C_h_intern(&lf[371],11,"make-string");
lf[372]=C_h_intern(&lf[372],19,"lambda-literal-body");
lf[373]=C_decode_literal(C_heaptop,"\376B\000\000\022C_word *a=C_alloc(");
lf[374]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[375]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[376]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word tmp;");
lf[377]=C_decode_literal(C_heaptop,"\376B\000\000\011,C_word t");
lf[378]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[379]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000\002r(");
lf[381]=C_decode_literal(C_heaptop,"\376B\000\000\002,t");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000\004);}}");
lf[383]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[384]=C_decode_literal(C_heaptop,"\376B\000\000\002r(");
lf[385]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[386]=C_decode_literal(C_heaptop,"\376B\000\000#=C_restore_rest(a,C_rest_count(0));");
lf[387]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\005else{");
lf[389]=C_decode_literal(C_heaptop,"\376B\000\000\015a=C_alloc((c-");
lf[390]=C_decode_literal(C_heaptop,"\376B\000\000\005)*3);");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\001r");
lf[393]=C_decode_literal(C_heaptop,"\376B\000\000\022C_save_and_reclaim");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\012((void*)tr");
lf[395]=C_decode_literal(C_heaptop,"\376B\000\000\011C_reclaim");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\003);}");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\005,NULL");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[399]=C_decode_literal(C_heaptop,"\376B\000\000\022C_save_and_reclaim");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\012((void*)tr");
lf[401]=C_decode_literal(C_heaptop,"\376B\000\000\011C_reclaim");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\022C_register_lf2(lf,");
lf[403]=C_decode_literal(C_heaptop,"\376B\000\000\022,create_ptable());");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\023C_initialize_lf(lf,");
lf[405]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[406]=C_decode_literal(C_heaptop,"\376B\000\000\012a=C_alloc(");
lf[407]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[408]=C_decode_literal(C_heaptop,"\376B\000\000\017if(!C_demand_2(");
lf[409]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[410]=C_decode_literal(C_heaptop,"\376B\000\000\013C_save(t1);");
lf[411]=C_decode_literal(C_heaptop,"\376B\000\000\015C_rereclaim2(");
lf[412]=C_decode_literal(C_heaptop,"\376B\000\000\024*sizeof(C_word), 1);");
lf[413]=C_decode_literal(C_heaptop,"\376B\000\000\016t1=C_restore;}");
lf[414]=C_decode_literal(C_heaptop,"\376B\000\000\030C_check_nursery_minimum(");
lf[415]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000\015if(!C_demand(");
lf[417]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[418]=C_decode_literal(C_heaptop,"\376B\000\000\013C_save(t1);");
lf[419]=C_decode_literal(C_heaptop,"\376B\000\000,C_reclaim((void*)toplevel_trampoline,NULL);}");
lf[420]=C_decode_literal(C_heaptop,"\376B\000\000\027toplevel_initialized=1;");
lf[421]=C_h_intern(&lf[421],26,"\010compilertarget-stack-size");
lf[422]=C_decode_literal(C_heaptop,"\376B\000\000\017C_resize_stack(");
lf[423]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[424]=C_h_intern(&lf[424],30,"\010compilertarget-heap-shrinkage");
lf[425]=C_decode_literal(C_heaptop,"\376B\000\000\021C_heap_shrinkage=");
lf[426]=C_h_intern(&lf[426],27,"\010compilertarget-heap-growth");
lf[427]=C_decode_literal(C_heaptop,"\376B\000\000\016C_heap_growth=");
lf[428]=C_h_intern(&lf[428],33,"\010compilertarget-initial-heap-size");
lf[429]=C_decode_literal(C_heaptop,"\376B\000\000\032C_set_or_change_heap_size(");
lf[430]=C_decode_literal(C_heaptop,"\376B\000\000\004,1);");
lf[431]=C_h_intern(&lf[431],25,"\010compilertarget-heap-size");
lf[432]=C_decode_literal(C_heaptop,"\376B\000\000\032C_set_or_change_heap_size(");
lf[433]=C_decode_literal(C_heaptop,"\376B\000\000\004,1);");
lf[434]=C_decode_literal(C_heaptop,"\376B\000\000\027C_heap_size_is_fixed=1;");
lf[435]=C_h_intern(&lf[435],40,"\010compilerdisable-stack-overflow-checking");
lf[436]=C_decode_literal(C_heaptop,"\376B\000\000\033C_disable_overflow_check=1;");
lf[437]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word *a;");
lf[438]=C_decode_literal(C_heaptop,"\376B\000\000;if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);");
lf[439]=C_decode_literal(C_heaptop,"\376B\000\000\036else C_toplevel_entry(C_text(\042");
lf[440]=C_decode_literal(C_heaptop,"\376B\000\000\004\042));");
lf[441]=C_h_intern(&lf[441],4,"fold");
lf[442]=C_decode_literal(C_heaptop,"\376B\000\000\035if(!C_demand(c*C_SIZEOF_PAIR+");
lf[443]=C_decode_literal(C_heaptop,"\376B\000\000\003)){");
lf[444]=C_h_intern(&lf[444],28,"\010compilerinsert-timer-checks");
lf[445]=C_decode_literal(C_heaptop,"\376B\000\000\026C_check_for_interrupt;");
lf[446]=C_decode_literal(C_heaptop,"\376B\000\000\005if(c<");
lf[447]=C_decode_literal(C_heaptop,"\376B\000\000\025) C_bad_min_argc_2(c,");
lf[448]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[449]=C_h_intern(&lf[449],23,"\010compilerno-argc-checks");
lf[450]=C_decode_literal(C_heaptop,"\376B\000\000\004,c2,");
lf[451]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[452]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[453]=C_decode_literal(C_heaptop,"\376B\000\000\014C_save_rest(");
lf[454]=C_decode_literal(C_heaptop,"\376B\000\000\017C_word *a,c2=c;");
lf[455]=C_decode_literal(C_heaptop,"\376B\000\000\012va_list v;");
lf[456]=C_decode_literal(C_heaptop,"\376B\000\000\026if(!C_stack_probe(a)){");
lf[457]=C_decode_literal(C_heaptop,"\376B\000\000\027if(!C_stack_probe(&a)){");
lf[458]=C_decode_literal(C_heaptop,"\376B\000\000\026C_check_for_interrupt;");
lf[459]=C_decode_literal(C_heaptop,"\376B\000\000\005if(c<");
lf[460]=C_decode_literal(C_heaptop,"\376B\000\000\025) C_bad_min_argc_2(c,");
lf[461]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[462]=C_decode_literal(C_heaptop,"\376B\000\000\006if(c!=");
lf[463]=C_decode_literal(C_heaptop,"\376B\000\000\021) C_bad_argc_2(c,");
lf[464]=C_decode_literal(C_heaptop,"\376B\000\000\005,t0);");
lf[465]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word *a;");
lf[466]=C_decode_literal(C_heaptop,"\376B\000\000\005loop:");
lf[467]=C_decode_literal(C_heaptop,"\376B\000\000\012a=C_alloc(");
lf[468]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[469]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word ab[");
lf[470]=C_decode_literal(C_heaptop,"\376B\000\000\010],*a=ab;");
lf[471]=C_decode_literal(C_heaptop,"\376B\000\000\016C_stack_check;");
lf[472]=C_decode_literal(C_heaptop,"\376B\000\000\005loop:");
lf[473]=C_decode_literal(C_heaptop,"\376B\000\000\012C_word *a;");
lf[474]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[475]=C_h_intern(&lf[475],6,"fixnum");
lf[476]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[477]=C_h_intern(&lf[477],6,"flonum");
lf[478]=C_decode_literal(C_heaptop,"\376B\000\000\006double");
lf[479]=C_decode_literal(C_heaptop,"\376B\000\000\004char");
lf[480]=C_h_intern(&lf[480],7,"pointer");
lf[481]=C_decode_literal(C_heaptop,"\376B\000\000\006void *");
lf[482]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[483]=C_decode_literal(C_heaptop,"\376B\000\000\024invalid unboxed type");
lf[484]=C_decode_literal(C_heaptop,"\376B\000\000\010C_word t");
lf[485]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word tmp;");
lf[486]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[487]=C_decode_literal(C_heaptop,"\376B\000\000\004,...");
lf[488]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word *a");
lf[489]=C_decode_literal(C_heaptop,"\376B\000\000\011C_word c,");
lf[490]=C_decode_literal(C_heaptop,"\376B\000\000!C_noret_decl(toplevel_trampoline)");
lf[491]=C_decode_literal(C_heaptop,"\376B\000\000Gstatic void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;");
lf[492]=C_decode_literal(C_heaptop,"\376B\000\000\077C_regparm static void C_fcall toplevel_trampoline(void *dummy){");
lf[493]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[494]=C_decode_literal(C_heaptop,"\376B\000\000\042(2,C_SCHEME_UNDEFINED,C_restore);}");
lf[495]=C_decode_literal(C_heaptop,"\376B\000\000\017void C_ccall C_");
lf[496]=C_decode_literal(C_heaptop,"\376B\000\000\022C_main_entry_point");
lf[497]=C_decode_literal(C_heaptop,"\376B\000\000(static C_TLS int toplevel_initialized=0;");
lf[498]=C_decode_literal(C_heaptop,"\376B\000\000\010C_fcall ");
lf[499]=C_decode_literal(C_heaptop,"\376B\000\000\010C_ccall ");
lf[500]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[501]=C_decode_literal(C_heaptop,"\376B\000\000\005void ");
lf[502]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[503]=C_decode_literal(C_heaptop,"\376B\000\000\003/* ");
lf[504]=C_decode_literal(C_heaptop,"\376B\000\000\003 */");
lf[505]=C_h_intern(&lf[505],16,"\010compilercleanup");
lf[506]=C_h_intern(&lf[506],18,"\010compilerdebugging");
lf[507]=C_h_intern(&lf[507],1,"o");
lf[508]=C_decode_literal(C_heaptop,"\376B\000\000 dropping unused closure argument");
lf[509]=C_decode_literal(C_heaptop,"\376B\000\000\011_toplevel");
lf[510]=C_decode_literal(C_heaptop,"\376B\000\000\010toplevel");
lf[511]=C_h_intern(&lf[511],34,"lambda-literal-unboxed-temporaries");
lf[512]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[513]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[514]=C_h_intern(&lf[514],18,"\010compilerreal-name");
lf[515]=C_decode_literal(C_heaptop,"\376B\000\000\021/* end of file */");
lf[516]=C_h_intern(&lf[516],25,"emit-procedure-table-info");
lf[517]=C_h_intern(&lf[517],31,"generate-foreign-callback-stubs");
lf[518]=C_h_intern(&lf[518],31,"\010compilergenerate-foreign-stubs");
lf[519]=C_h_intern(&lf[519],29,"\010compilerforeign-lambda-stubs");
lf[520]=C_h_intern(&lf[520],36,"\010compilergenerate-external-variables");
lf[521]=C_h_intern(&lf[521],27,"\010compilerexternal-variables");
lf[522]=C_h_intern(&lf[522],1,"p");
lf[523]=C_decode_literal(C_heaptop,"\376B\000\000\030code generation phase...");
lf[524]=C_decode_literal(C_heaptop,"\376B\000\000\001{");
lf[525]=C_decode_literal(C_heaptop,"\376B\000\000\027#ifdef C_ENABLE_PTABLES");
lf[526]=C_decode_literal(C_heaptop,"\376B\000\000\016return ptable;");
lf[527]=C_decode_literal(C_heaptop,"\376B\000\000\005#else");
lf[528]=C_decode_literal(C_heaptop,"\376B\000\000\014return NULL;");
lf[529]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[530]=C_decode_literal(C_heaptop,"\376B\000\000\001}");
lf[531]=C_decode_literal(C_heaptop,"\376B\000\000*static C_PTABLE_ENTRY *create_ptable(void)");
lf[532]=C_decode_literal(C_heaptop,"\376B\000\000\006#endif");
lf[533]=C_decode_literal(C_heaptop,"\376B\000\000\015{NULL,NULL}};");
lf[534]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
lf[535]=C_decode_literal(C_heaptop,"\376B\000\000\013_toplevel},");
lf[536]=C_decode_literal(C_heaptop,"\376B\000\000\014C_toplevel},");
lf[537]=C_decode_literal(C_heaptop,"\376B\000\000\002},");
lf[538]=C_decode_literal(C_heaptop,"\376B\000\000\002{\042");
lf[539]=C_decode_literal(C_heaptop,"\376B\000\000\011\042,(void*)");
lf[540]=C_h_intern(&lf[540],29,"\010compilerstring->c-identifier");
lf[541]=C_decode_literal(C_heaptop,"\376B\000\000\027#ifdef C_ENABLE_PTABLES");
lf[542]=C_decode_literal(C_heaptop,"\376B\000\000\035static C_PTABLE_ENTRY ptable[");
lf[543]=C_decode_literal(C_heaptop,"\376B\000\000\005] = {");
lf[544]=C_h_intern(&lf[544],11,"string-copy");
lf[545]=C_decode_literal(C_heaptop,"\376B\000\000\007C_word ");
lf[546]=C_h_intern(&lf[546],13,"list-tabulate");
lf[547]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[548]=C_decode_literal(C_heaptop,"\376B\000\000\007static ");
lf[549]=C_h_intern(&lf[549],41,"\010compilergenerate-foreign-callback-header");
lf[550]=C_decode_literal(C_heaptop,"\376B\000\000\017C_externexport ");
lf[551]=C_decode_literal(C_heaptop,"\376B\000\000.C_k=C_restore_callback_continuation2(C_level);");
lf[552]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[553]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[554]=C_decode_literal(C_heaptop,"\376B\000\000\013return C_r;");
lf[555]=C_decode_literal(C_heaptop,"\376B\000\000\015#undef return");
lf[556]=C_decode_literal(C_heaptop,"\376B\000\000\006C_ret:");
lf[557]=C_decode_literal(C_heaptop,"\376B\000\000.C_k=C_restore_callback_continuation2(C_level);");
lf[558]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[559]=C_decode_literal(C_heaptop,"\376B\000\000\024C_kontinue(C_k,C_r);");
lf[560]=C_decode_literal(C_heaptop,"\376B\000\000\013return C_r;");
lf[561]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[562]=C_h_intern(&lf[562],4,"void");
lf[563]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[564]=C_decode_literal(C_heaptop,"\376B\000\000\004C_r=");
lf[565]=C_decode_literal(C_heaptop,"\376B\000\0003int C_level=C_save_callback_continuation(&C_a,C_k);");
lf[566]=C_decode_literal(C_heaptop,"\376B\000\000\002=(");
lf[567]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[568]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[569]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[570]=C_decode_literal(C_heaptop,"\376B\000\0002C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;");
lf[571]=C_decode_literal(C_heaptop,"\376B\000\000\002){");
lf[572]=C_decode_literal(C_heaptop,"\376B\000\000\012) C_noret;");
lf[573]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[574]=C_decode_literal(C_heaptop,"\376B\000\000%(C_word C_c,C_word C_self,C_word C_k,");
lf[575]=C_decode_literal(C_heaptop,"\376B\000\000\014) C_regparm;");
lf[576]=C_decode_literal(C_heaptop,"\376B\000\000 C_regparm static C_word C_fcall ");
lf[577]=C_decode_literal(C_heaptop,"\376B\000\000\015C_noret_decl(");
lf[578]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[579]=C_decode_literal(C_heaptop,"\376B\000\000\024static void C_ccall ");
lf[580]=C_decode_literal(C_heaptop,"\376B\000\000%(C_word C_c,C_word C_self,C_word C_k,");
lf[581]=C_decode_literal(C_heaptop,"\376B\000\000\026static C_word C_fcall ");
lf[582]=C_decode_literal(C_heaptop,"\376B\000\000\042#define return(x) C_cblock C_r = (");
lf[583]=C_decode_literal(C_heaptop,"\376B\000\000\036(x))); goto C_ret; C_cblockend");
lf[584]=C_decode_literal(C_heaptop,"\376B\000\000\010/* from ");
lf[585]=C_decode_literal(C_heaptop,"\376B\000\000\003 */");
lf[586]=C_h_intern(&lf[586],21,"foreign-stub-callback");
lf[587]=C_h_intern(&lf[587],16,"foreign-stub-cps");
lf[588]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[589]=C_h_intern(&lf[589],27,"foreign-stub-argument-names");
lf[590]=C_h_intern(&lf[590],17,"foreign-stub-body");
lf[591]=C_h_intern(&lf[591],17,"foreign-stub-name");
lf[592]=C_h_intern(&lf[592],24,"foreign-stub-return-type");
lf[593]=C_decode_literal(C_heaptop,"\376B\000\000\014C_word C_buf");
lf[594]=C_decode_literal(C_heaptop,"\376B\000\000\003C_a");
lf[595]=C_h_intern(&lf[595],27,"foreign-stub-argument-types");
lf[596]=C_h_intern(&lf[596],19,"\010compilerreal-name2");
lf[597]=C_h_intern(&lf[597],15,"foreign-stub-id");
lf[598]=C_h_intern(&lf[598],5,"float");
lf[599]=C_decode_literal(C_heaptop,"\376B\000\000\002+3");
lf[600]=C_h_intern(&lf[600],8,"c-string");
lf[601]=C_decode_literal(C_heaptop,"\376B\000\000\004+2+(");
lf[602]=C_decode_literal(C_heaptop,"\376B\000\000!==NULL\0771:C_bytestowords(C_strlen(");
lf[603]=C_decode_literal(C_heaptop,"\376B\000\000\003)))");
lf[604]=C_h_intern(&lf[604],16,"nonnull-c-string");
lf[605]=C_decode_literal(C_heaptop,"\376B\000\000\033+2+C_bytestowords(C_strlen(");
lf[606]=C_decode_literal(C_heaptop,"\376B\000\000\002))");
lf[607]=C_h_intern(&lf[607],3,"ref");
lf[608]=C_decode_literal(C_heaptop,"\376B\000\000\002+3");
lf[609]=C_h_intern(&lf[609],5,"const");
lf[610]=C_h_intern(&lf[610],9,"c-pointer");
lf[611]=C_h_intern(&lf[611],15,"nonnull-pointer");
lf[612]=C_h_intern(&lf[612],17,"nonnull-c-pointer");
lf[613]=C_h_intern(&lf[613],8,"function");
lf[614]=C_h_intern(&lf[614],8,"instance");
lf[615]=C_h_intern(&lf[615],16,"nonnull-instance");
lf[616]=C_h_intern(&lf[616],12,"instance-ref");
lf[617]=C_h_intern(&lf[617],18,"\003syshash-table-ref");
lf[618]=C_h_intern(&lf[618],27,"\010compilerforeign-type-table");
lf[619]=C_h_intern(&lf[619],17,"nonnull-c-string*");
lf[620]=C_h_intern(&lf[620],25,"nonnull-unsigned-c-string");
lf[621]=C_h_intern(&lf[621],26,"nonnull-unsigned-c-string*");
lf[622]=C_h_intern(&lf[622],6,"symbol");
lf[623]=C_h_intern(&lf[623],9,"c-string*");
lf[624]=C_h_intern(&lf[624],17,"unsigned-c-string");
lf[625]=C_h_intern(&lf[625],18,"unsigned-c-string*");
lf[626]=C_h_intern(&lf[626],6,"double");
lf[627]=C_h_intern(&lf[627],16,"unsigned-integer");
lf[628]=C_h_intern(&lf[628],18,"unsigned-integer32");
lf[629]=C_h_intern(&lf[629],4,"long");
lf[630]=C_h_intern(&lf[630],7,"integer");
lf[631]=C_h_intern(&lf[631],9,"integer32");
lf[632]=C_h_intern(&lf[632],13,"unsigned-long");
lf[633]=C_h_intern(&lf[633],6,"number");
lf[634]=C_h_intern(&lf[634],9,"integer64");
lf[635]=C_h_intern(&lf[635],13,"c-string-list");
lf[636]=C_h_intern(&lf[636],14,"c-string-list*");
lf[637]=C_h_intern(&lf[637],3,"int");
lf[638]=C_h_intern(&lf[638],5,"int32");
lf[639]=C_h_intern(&lf[639],5,"short");
lf[640]=C_h_intern(&lf[640],14,"unsigned-short");
lf[641]=C_h_intern(&lf[641],13,"scheme-object");
lf[642]=C_h_intern(&lf[642],13,"unsigned-char");
lf[643]=C_h_intern(&lf[643],12,"unsigned-int");
lf[644]=C_h_intern(&lf[644],14,"unsigned-int32");
lf[645]=C_h_intern(&lf[645],4,"byte");
lf[646]=C_h_intern(&lf[646],13,"unsigned-byte");
lf[647]=C_decode_literal(C_heaptop,"\376B\000\000\002;}");
lf[648]=C_decode_literal(C_heaptop,"\376B\000\000\033C_callback_wrapper((void *)");
lf[649]=C_decode_literal(C_heaptop,"\376B\000\000\007return ");
lf[650]=C_decode_literal(C_heaptop,"\376B\000\000\002x=");
lf[651]=C_decode_literal(C_heaptop,"\376B\000\000\002);");
lf[652]=C_decode_literal(C_heaptop,"\376B\000\000\012C_save(x);");
lf[653]=C_decode_literal(C_heaptop,"\376B\000\000\001a");
lf[654]=C_decode_literal(C_heaptop,"\376B\000\000\035C_callback_adjust_stack(a,s);");
lf[655]=C_decode_literal(C_heaptop,"\376B\000\000\013C_word x,s=");
lf[656]=C_decode_literal(C_heaptop,"\376B\000\000\017,*a=C_alloc(s);");
lf[657]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[658]=C_decode_literal(C_heaptop,"\376B\000\000\010/* from ");
lf[659]=C_decode_literal(C_heaptop,"\376B\000\000\003 */");
lf[660]=C_decode_literal(C_heaptop,"\376B\000\000\0010");
lf[661]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[662]=C_h_intern(&lf[662],36,"foreign-callback-stub-argument-types");
lf[663]=C_h_intern(&lf[663],33,"foreign-callback-stub-return-type");
lf[664]=C_h_intern(&lf[664],24,"foreign-callback-stub-id");
lf[665]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[666]=C_decode_literal(C_heaptop,"\376B\000\000\001t");
lf[667]=C_h_intern(&lf[667],32,"foreign-callback-stub-qualifiers");
lf[668]=C_h_intern(&lf[668],26,"foreign-callback-stub-name");
lf[669]=C_h_intern(&lf[669],4,"quit");
lf[670]=C_decode_literal(C_heaptop,"\376B\000\000\031illegal foreign type `~A\047");
lf[671]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[672]=C_decode_literal(C_heaptop,"\376B\000\000\006C_word");
lf[673]=C_decode_literal(C_heaptop,"\376B\000\000\006C_char");
lf[674]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned C_char");
lf[675]=C_decode_literal(C_heaptop,"\376B\000\000\014unsigned int");
lf[676]=C_decode_literal(C_heaptop,"\376B\000\000\005C_u32");
lf[677]=C_decode_literal(C_heaptop,"\376B\000\000\003int");
lf[678]=C_decode_literal(C_heaptop,"\376B\000\000\005C_s32");
lf[679]=C_decode_literal(C_heaptop,"\376B\000\000\005C_s64");
lf[680]=C_decode_literal(C_heaptop,"\376B\000\000\005short");
lf[681]=C_decode_literal(C_heaptop,"\376B\000\000\004long");
lf[682]=C_decode_literal(C_heaptop,"\376B\000\000\016unsigned short");
lf[683]=C_decode_literal(C_heaptop,"\376B\000\000\015unsigned long");
lf[684]=C_decode_literal(C_heaptop,"\376B\000\000\005float");
lf[685]=C_decode_literal(C_heaptop,"\376B\000\000\006double");
lf[686]=C_decode_literal(C_heaptop,"\376B\000\000\006void *");
lf[687]=C_decode_literal(C_heaptop,"\376B\000\000\006void *");
lf[688]=C_decode_literal(C_heaptop,"\376B\000\000\011C_char **");
lf[689]=C_h_intern(&lf[689],11,"byte-vector");
lf[690]=C_h_intern(&lf[690],19,"nonnull-byte-vector");
lf[691]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned char *");
lf[692]=C_h_intern(&lf[692],4,"blob");
lf[693]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned char *");
lf[694]=C_h_intern(&lf[694],9,"u16vector");
lf[695]=C_h_intern(&lf[695],17,"nonnull-u16vector");
lf[696]=C_decode_literal(C_heaptop,"\376B\000\000\020unsigned short *");
lf[697]=C_h_intern(&lf[697],8,"s8vector");
lf[698]=C_h_intern(&lf[698],16,"nonnull-s8vector");
lf[699]=C_decode_literal(C_heaptop,"\376B\000\000\006char *");
lf[700]=C_h_intern(&lf[700],9,"u32vector");
lf[701]=C_h_intern(&lf[701],17,"nonnull-u32vector");
lf[702]=C_decode_literal(C_heaptop,"\376B\000\000\016unsigned int *");
lf[703]=C_h_intern(&lf[703],9,"s16vector");
lf[704]=C_h_intern(&lf[704],17,"nonnull-s16vector");
lf[705]=C_decode_literal(C_heaptop,"\376B\000\000\007short *");
lf[706]=C_h_intern(&lf[706],9,"s32vector");
lf[707]=C_h_intern(&lf[707],17,"nonnull-s32vector");
lf[708]=C_decode_literal(C_heaptop,"\376B\000\000\005int *");
lf[709]=C_h_intern(&lf[709],9,"f32vector");
lf[710]=C_h_intern(&lf[710],17,"nonnull-f32vector");
lf[711]=C_decode_literal(C_heaptop,"\376B\000\000\007float *");
lf[712]=C_h_intern(&lf[712],9,"f64vector");
lf[713]=C_h_intern(&lf[713],17,"nonnull-f64vector");
lf[714]=C_decode_literal(C_heaptop,"\376B\000\000\010double *");
lf[715]=C_decode_literal(C_heaptop,"\376B\000\000\006char *");
lf[716]=C_decode_literal(C_heaptop,"\376B\000\000\017unsigned char *");
lf[717]=C_decode_literal(C_heaptop,"\376B\000\000\004void");
lf[718]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[719]=C_decode_literal(C_heaptop,"\376B\000\000\001&");
lf[720]=C_decode_literal(C_heaptop,"\376B\000\000\001<");
lf[721]=C_decode_literal(C_heaptop,"\376B\000\000\002> ");
lf[722]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[723]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[724]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[725]=C_decode_literal(C_heaptop,"\376B\000\000\006const ");
lf[726]=C_decode_literal(C_heaptop,"\376B\000\000\007struct ");
lf[727]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[728]=C_decode_literal(C_heaptop,"\376B\000\000\006union ");
lf[729]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[730]=C_decode_literal(C_heaptop,"\376B\000\000\005enum ");
lf[731]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[732]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[733]=C_decode_literal(C_heaptop,"\376B\000\000\001&");
lf[734]=C_decode_literal(C_heaptop,"\376B\000\000\003 (*");
lf[735]=C_decode_literal(C_heaptop,"\376B\000\000\002)(");
lf[736]=C_decode_literal(C_heaptop,"\376B\000\000\001)");
lf[737]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[738]=C_h_intern(&lf[738],3,"...");
lf[739]=C_decode_literal(C_heaptop,"\376B\000\000\003...");
lf[740]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[741]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[742]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[743]=C_h_intern(&lf[743],9,"\003syserror");
lf[744]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[745]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010instance\376\003\000\000\002\376\001\000\000\020nonnull-instance\376\377\016");
lf[746]=C_h_intern(&lf[746],4,"enum");
lf[747]=C_h_intern(&lf[747],5,"union");
lf[748]=C_h_intern(&lf[748],6,"struct");
lf[749]=C_h_intern(&lf[749],8,"template");
lf[750]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\007pointer\376\003\000\000\002\376\001\000\000\017nonnull-pointer\376\003\000\000\002\376\001\000\000\011c-pointer\376\003\000\000\002\376\001\000\000\021nonnull-c"
"-pointer\376\377\016");
lf[751]=C_h_intern(&lf[751],12,"nonnull-blob");
lf[752]=C_h_intern(&lf[752],8,"u8vector");
lf[753]=C_h_intern(&lf[753],16,"nonnull-u8vector");
lf[754]=C_h_intern(&lf[754],14,"scheme-pointer");
lf[755]=C_h_intern(&lf[755],22,"nonnull-scheme-pointer");
lf[756]=C_decode_literal(C_heaptop,"\376B\000\000\042illegal foreign argument type `~A\047");
lf[757]=C_decode_literal(C_heaptop,"\376B\000\000\001(");
lf[758]=C_decode_literal(C_heaptop,"\376B\000\000\031C_character_code((C_word)");
lf[759]=C_decode_literal(C_heaptop,"\376B\000\000\010C_unfix(");
lf[760]=C_decode_literal(C_heaptop,"\376B\000\000\010C_unfix(");
lf[761]=C_decode_literal(C_heaptop,"\376B\000\000\030(unsigned short)C_unfix(");
lf[762]=C_decode_literal(C_heaptop,"\376B\000\000\027C_num_to_unsigned_long(");
lf[763]=C_decode_literal(C_heaptop,"\376B\000\000\013C_c_double(");
lf[764]=C_decode_literal(C_heaptop,"\376B\000\000\015C_num_to_int(");
lf[765]=C_decode_literal(C_heaptop,"\376B\000\000\017C_num_to_int64(");
lf[766]=C_decode_literal(C_heaptop,"\376B\000\000\016C_num_to_long(");
lf[767]=C_decode_literal(C_heaptop,"\376B\000\000\026C_num_to_unsigned_int(");
lf[768]=C_decode_literal(C_heaptop,"\376B\000\000\027C_data_pointer_or_null(");
lf[769]=C_decode_literal(C_heaptop,"\376B\000\000\017C_data_pointer(");
lf[770]=C_decode_literal(C_heaptop,"\376B\000\000\027C_data_pointer_or_null(");
lf[771]=C_decode_literal(C_heaptop,"\376B\000\000\017C_data_pointer(");
lf[772]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[773]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[774]=C_decode_literal(C_heaptop,"\376B\000\000\027C_c_bytevector_or_null(");
lf[775]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_bytevector(");
lf[776]=C_decode_literal(C_heaptop,"\376B\000\000\027C_c_bytevector_or_null(");
lf[777]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_bytevector(");
lf[778]=C_decode_literal(C_heaptop,"\376B\000\000\025C_c_u8vector_or_null(");
lf[779]=C_decode_literal(C_heaptop,"\376B\000\000\015C_c_u8vector(");
lf[780]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_u16vector_or_null(");
lf[781]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_u16vector(");
lf[782]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_u32vector_or_null(");
lf[783]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_u32vector(");
lf[784]=C_decode_literal(C_heaptop,"\376B\000\000\025C_c_s8vector_or_null(");
lf[785]=C_decode_literal(C_heaptop,"\376B\000\000\015C_c_s8vector(");
lf[786]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_s16vector_or_null(");
lf[787]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_s16vector(");
lf[788]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_s32vector_or_null(");
lf[789]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_s32vector(");
lf[790]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_f32vector_or_null(");
lf[791]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_f32vector(");
lf[792]=C_decode_literal(C_heaptop,"\376B\000\000\026C_c_f64vector_or_null(");
lf[793]=C_decode_literal(C_heaptop,"\376B\000\000\016C_c_f64vector(");
lf[794]=C_decode_literal(C_heaptop,"\376B\000\000\021C_string_or_null(");
lf[795]=C_decode_literal(C_heaptop,"\376B\000\000\013C_c_string(");
lf[796]=C_decode_literal(C_heaptop,"\376B\000\000\010C_truep(");
lf[797]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[798]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[799]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[800]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[801]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[802]=C_decode_literal(C_heaptop,"\376B\000\000\017C_c_pointer_nn(");
lf[803]=C_decode_literal(C_heaptop,"\376B\000\000\024C_c_pointer_or_null(");
lf[804]=C_decode_literal(C_heaptop,"\376B\000\000\015C_num_to_int(");
lf[805]=C_decode_literal(C_heaptop,"\376B\000\000\002*(");
lf[806]=C_decode_literal(C_heaptop,"\376B\000\000\020)C_c_pointer_nn(");
lf[807]=C_decode_literal(C_heaptop,"\376B\000\000\001*");
lf[808]=C_decode_literal(C_heaptop,"\376B\000\000\002*(");
lf[809]=C_decode_literal(C_heaptop,"\376B\000\000\021*)C_c_pointer_nn(");
lf[810]=C_decode_literal(C_heaptop,"\376B\000\000 illegal foreign return type `~A\047");
lf[811]=C_decode_literal(C_heaptop,"\376B\000\000\031C_make_character((C_word)");
lf[812]=C_decode_literal(C_heaptop,"\376B\000\000\016C_fix((C_word)");
lf[813]=C_decode_literal(C_heaptop,"\376B\000\000%C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)");
lf[814]=C_decode_literal(C_heaptop,"\376B\000\000\015C_fix((short)");
lf[815]=C_decode_literal(C_heaptop,"\376B\000\000\025C_fix(0xffff&(C_word)");
lf[816]=C_decode_literal(C_heaptop,"\376B\000\000\014C_fix((char)");
lf[817]=C_decode_literal(C_heaptop,"\376B\000\000\023C_fix(0xff&(C_word)");
lf[818]=C_decode_literal(C_heaptop,"\376B\000\000\012C_flonum(&");
lf[819]=C_decode_literal(C_heaptop,"\376B\000\000\012C_number(&");
lf[820]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[821]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[822]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[823]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[824]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[825]=C_decode_literal(C_heaptop,"\376B\000\000\023C_a_double_to_num(&");
lf[826]=C_decode_literal(C_heaptop,"\376B\000\000\027C_unsigned_int_to_num(&");
lf[827]=C_decode_literal(C_heaptop,"\376B\000\000\017C_long_to_num(&");
lf[828]=C_decode_literal(C_heaptop,"\376B\000\000\030C_unsigned_long_to_num(&");
lf[829]=C_decode_literal(C_heaptop,"\376B\000\000\012C_mk_bool(");
lf[830]=C_decode_literal(C_heaptop,"\376B\000\000\011((C_word)");
lf[831]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[832]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[833]=C_decode_literal(C_heaptop,"\376B\000\000\011,(void*)&");
lf[834]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[835]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[836]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[837]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[838]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[839]=C_decode_literal(C_heaptop,"\376B\000\000\011,(void*)&");
lf[840]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[841]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[842]=C_decode_literal(C_heaptop,"\376B\000\000\025C_mpointer_or_false(&");
lf[843]=C_decode_literal(C_heaptop,"\376B\000\000\010,(void*)");
lf[844]=C_decode_literal(C_heaptop,"\376B\000\000\014C_mpointer(&");
lf[845]=C_decode_literal(C_heaptop,"\376B\000\000\016C_int_to_num(&");
lf[846]=C_decode_literal(C_heaptop,"\376B\000\000\003\377\006\001");
lf[847]=C_decode_literal(C_heaptop,"\376B\000\000\003\377\006\000");
lf[848]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\012");
lf[849]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\016");
lf[850]=C_decode_literal(C_heaptop,"\376B\000\000\002\377>");
lf[851]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\036");
lf[852]=C_decode_literal(C_heaptop,"\376B\000\000\002\377U");
lf[853]=C_decode_literal(C_heaptop,"\376B\000\000\001\000");
lf[854]=C_decode_literal(C_heaptop,"\376B\000\000\002\377\001");
lf[855]=C_decode_literal(C_heaptop,"\376B\000\000\001U");
lf[856]=C_decode_literal(C_heaptop,"\376B\000\000\001\000");
lf[857]=C_decode_literal(C_heaptop,"\376B\000\000\001\001");
lf[858]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid literal - cannot encode");
lf[859]=C_h_intern(&lf[859],17,"\003sysstring-append");
lf[860]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[861]=C_h_intern(&lf[861],5,"cons*");
lf[862]=C_h_intern(&lf[862],6,"random");
lf[863]=C_decode_literal(C_heaptop,"\376B\000\000\002C_");
C_register_lf2(lf,864,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2508,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2506 */
static void C_ccall f_2508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2511,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k2509 in k2506 */
static void C_ccall f_2511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2511,2,t0,t1);}
t2=C_set_block_item(lf[0] /* output */,0,C_SCHEME_FALSE);
t3=C_mutate((C_word*)lf[1]+1 /* (set! gen ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2514,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[4]+1 /* (set! gen-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2557,tmp=(C_word)a,a+=2,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2597,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10305,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t6);}

/* k10303 in k2509 in k2506 */
static void C_ccall f_10305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10308,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[863],t1);}

/* k10306 in k10303 in k2509 in k2506 */
static void C_ccall f_10308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10308,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10331,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10335,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 57   random");
((C_proc3)C_retrieve_symbol_proc(lf[862]))(3,*((C_word*)lf[862]+1),t4,C_fix(16777216));}

/* k10333 in k10306 in k10303 in k2509 in k2506 */
static void C_ccall f_10335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("number->string");
C_number_to_string(4,0,((C_word*)t0)[2],t1,C_fix(16));}

/* k10329 in k10306 in k10303 in k2509 in k2506 */
static void C_ccall f_10331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k10309 in k10306 in k10303 in k2509 in k2506 */
static void C_ccall f_10311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10314,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[339]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(95),((C_word*)t0)[2]);}

/* k10312 in k10309 in k10306 in k10303 in k2509 in k2506 */
static void C_ccall f_10314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10327,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 57   current-seconds");
((C_proc2)C_retrieve_symbol_proc(lf[232]))(2,*((C_word*)lf[232]+1),t3);}

/* k10325 in k10312 in k10309 in k10306 in k10303 in k2509 in k2506 */
static void C_ccall f_10327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k10315 in k10312 in k10309 in k10306 in k10303 in k2509 in k2506 */
static void C_ccall f_10317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10320,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[339]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(95),((C_word*)t0)[2]);}

/* k10318 in k10315 in k10312 in k10309 in k10306 in k10303 in k2509 in k2506 */
static void C_ccall f_10320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10323,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),t2,((C_word*)t0)[2]);}

/* k10321 in k10318 in k10315 in k10312 in k10309 in k10306 in k10303 in k2509 in k2506 */
static void C_ccall f_10323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 56   string->c-identifier");
((C_proc3)C_retrieve_symbol_proc(lf[540]))(3,*((C_word*)lf[540]+1),((C_word*)t0)[2],t1);}

/* k2595 in k2509 in k2506 */
static void C_ccall f_2597(C_word c,C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2597,2,t0,t1);}
t2=C_mutate((C_word*)lf[6]+1 /* (set! unique-id ...) */,t1);
t3=C_mutate((C_word*)lf[7]+1 /* (set! generate-code ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2599,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[516]+1 /* (set! emit-procedure-table-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6859,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[505]+1 /* (set! cleanup ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6936,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[286]+1 /* (set! make-variable-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7025,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[296]+1 /* (set! make-argument-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7041,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[520]+1 /* (set! generate-external-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7057,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[206]+1 /* (set! generate-foreign-callback-stub-prototypes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7111,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[518]+1 /* (set! generate-foreign-stubs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7151,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[517]+1 /* (set! generate-foreign-callback-stubs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7465,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[549]+1 /* (set! generate-foreign-callback-header ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7959,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[174]+1 /* (set! foreign-type-declaration ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8024,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[173]+1 /* (set! foreign-argument-conversion ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8908,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[168]+1 /* (set! foreign-result-conversion ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9398,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[365]+1 /* (set! encode-literal ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10005,tmp=(C_word)a,a+=2,tmp));
t17=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,C_SCHEME_UNDEFINED);}

/* ##compiler#encode-literal in k2595 in k2509 in k2506 */
static void C_ccall f_10005(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[22],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10005,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10014,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10067,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=C_eqp(C_SCHEME_TRUE,t2);
if(C_truep(t5)){
t6=t1;
t7=C_a_i_string(&a,1,C_make_character(254));
C_trace("c-backend.scm: 1394 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),t6,t7,lf[846]);}
else{
t6=C_eqp(C_SCHEME_FALSE,t2);
if(C_truep(t6)){
t7=t1;
t8=C_a_i_string(&a,1,C_make_character(254));
C_trace("c-backend.scm: 1394 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),t7,t8,lf[847]);}
else{
if(C_truep(C_charp(t2))){
t7=C_fix(C_character_code(t2));
t8=f_10014(C_a_i(&a,4),t7);
C_trace("c-backend.scm: 1398 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),t4,lf[848],t8);}
else{
if(C_truep(C_i_nullp(t2))){
t7=t1;
t8=C_a_i_string(&a,1,C_make_character(254));
C_trace("c-backend.scm: 1394 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),t7,t8,lf[849]);}
else{
if(C_truep(C_eofp(t2))){
t7=t1;
t8=C_a_i_string(&a,1,C_make_character(254));
C_trace("c-backend.scm: 1394 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),t7,t8,lf[850]);}
else{
t7=C_retrieve(lf[354]);
t8=C_eqp(t7,t2);
if(C_truep(t8)){
t9=t1;
t10=C_a_i_string(&a,1,C_make_character(254));
C_trace("c-backend.scm: 1394 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),t9,t10,lf[851]);}
else{
if(C_truep(C_fixnump(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10185,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 1403 big-fixnum?");
((C_proc3)C_retrieve_symbol_proc(lf[367]))(3,*((C_word*)lf[367]+1),t9,t2);}
else{
if(C_truep(C_i_numberp(t2))){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10198,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 1412 number->string");
C_number_to_string(3,0,t9,t2);}
else{
if(C_truep(C_i_symbolp(t2))){
t9=C_slot(t2,C_fix(1));
t10=C_i_string_length(t9);
t11=f_10014(C_a_i(&a,4),t10);
C_trace("c-backend.scm: 1415 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[115]+1)))(5,*((C_word*)lf[115]+1),t4,lf[857],t11,t9);}
else{
if(C_truep(C_immp(t2))){
C_trace("c-backend.scm: 1420 bomb");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t4,lf[858],t2);}
else{
if(C_truep(C_byteblockp(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10237,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t10=t2;
t11=stub2459(C_SCHEME_UNDEFINED,t10);
t12=C_make_character(C_unfix(t11));
t13=C_a_i_string(&a,1,t12);
t14=t2;
t15=stub2463(C_SCHEME_UNDEFINED,t14);
t16=f_10014(C_a_i(&a,4),t15);
C_trace("c-backend.scm: 1423 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),t9,t13,t16);}
else{
t9=t2;
t10=stub2463(C_SCHEME_UNDEFINED,t9);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10267,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t12=t2;
t13=stub2459(C_SCHEME_UNDEFINED,t12);
t14=C_make_character(C_unfix(t13));
t15=C_a_i_string(&a,1,t14);
t16=f_10014(C_a_i(&a,4),t10);
t17=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10279,a[2]=t16,a[3]=t15,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10281,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 1433 list-tabulate");
((C_proc4)C_retrieve_symbol_proc(lf[546]))(4,*((C_word*)lf[546]+1),t17,t10,t18);}}}}}}}}}}}}

/* a10280 in ##compiler#encode-literal in k2595 in k2509 in k2506 */
static void C_ccall f_10281(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_10281,3,t0,t1,t2);}
t3=C_slot(((C_word*)t0)[2],t2);
C_trace("c-backend.scm: 1433 encode-literal");
((C_proc3)C_retrieve_symbol_proc(lf[365]))(3,*((C_word*)lf[365]+1),t1,t3);}

/* k10277 in ##compiler#encode-literal in k2595 in k2509 in k2506 */
static void C_ccall f_10279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1430 cons*");
((C_proc5)C_retrieve_symbol_proc(lf[861]))(5,*((C_word*)lf[861]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k10265 in ##compiler#encode-literal in k2595 in k2509 in k2506 */
static void C_ccall f_10267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1429 string-intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[223]))(4,*((C_word*)lf[223]+1),((C_word*)t0)[2],t1,lf[860]);}

/* k10235 in ##compiler#encode-literal in k2595 in k2509 in k2506 */
static void C_ccall f_10237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1422 ##sys#string-append");
((C_proc4)C_retrieve_symbol_proc(lf[859]))(4,*((C_word*)lf[859]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k10196 in ##compiler#encode-literal in k2595 in k2509 in k2506 */
static void C_ccall f_10198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1412 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[115]+1)))(5,*((C_word*)lf[115]+1),((C_word*)t0)[2],lf[855],t1,lf[856]);}

/* k10183 in ##compiler#encode-literal in k2595 in k2509 in k2506 */
static void C_ccall f_10185(C_word c,C_word t0,C_word t1){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10185,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10181,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 1410 number->string");
C_number_to_string(3,0,t2,((C_word*)t0)[2]);}
else{
t2=C_fixnum_shift_right(((C_word*)t0)[2],C_fix(24));
t3=C_fixnum_and(C_fix(255),t2);
t4=C_make_character(C_unfix(t3));
t5=C_fixnum_shift_right(((C_word*)t0)[2],C_fix(16));
t6=C_fixnum_and(C_fix(255),t5);
t7=C_make_character(C_unfix(t6));
t8=C_fixnum_shift_right(((C_word*)t0)[2],C_fix(8));
t9=C_fixnum_and(C_fix(255),t8);
t10=C_make_character(C_unfix(t9));
t11=C_fixnum_and(C_fix(255),((C_word*)t0)[2]);
t12=C_make_character(C_unfix(t11));
t13=C_a_i_string(&a,4,t4,t7,t10,t12);
C_trace("c-backend.scm: 1404 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),((C_word*)t0)[3],lf[854],t13);}}

/* k10179 in k10183 in ##compiler#encode-literal in k2595 in k2509 in k2506 */
static void C_ccall f_10181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1410 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[115]+1)))(5,*((C_word*)lf[115]+1),((C_word*)t0)[2],lf[852],t1,lf[853]);}

/* k10065 in ##compiler#encode-literal in k2595 in k2509 in k2506 */
static void C_ccall f_10067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10067,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=C_a_i_string(&a,1,C_make_character(254));
C_trace("c-backend.scm: 1394 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),t2,t3,t1);}

/* encode-size in ##compiler#encode-literal in k2595 in k2509 in k2506 */
static C_word C_fcall f_10014(C_word *a,C_word t1){
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
C_stack_check;
t2=C_fixnum_shift_right(t1,C_fix(16));
t3=C_fixnum_and(C_fix(255),t2);
t4=C_make_character(C_unfix(t3));
t5=C_fixnum_shift_right(t1,C_fix(8));
t6=C_fixnum_and(C_fix(255),t5);
t7=C_make_character(C_unfix(t6));
t8=C_fixnum_and(C_fix(255),t1);
t9=C_make_character(C_unfix(t8));
return(C_a_i_string(&a,3,t4,t7,t9));}

/* ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9398(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9398,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9400,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t2;
t6=C_eqp(t5,lf[16]);
t7=(C_truep(t6)?t6:C_eqp(t5,lf[642]));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[811]);}
else{
t8=C_eqp(t5,lf[637]);
t9=(C_truep(t8)?t8:C_eqp(t5,lf[638]));
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[812]);}
else{
t10=C_eqp(t5,lf[643]);
t11=(C_truep(t10)?t10:C_eqp(t5,lf[644]));
if(C_truep(t11)){
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[813]);}
else{
t12=C_eqp(t5,lf[639]);
if(C_truep(t12)){
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[814]);}
else{
t13=C_eqp(t5,lf[640]);
if(C_truep(t13)){
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,lf[815]);}
else{
t14=C_eqp(t5,lf[645]);
if(C_truep(t14)){
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[816]);}
else{
t15=C_eqp(t5,lf[646]);
if(C_truep(t15)){
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,lf[817]);}
else{
t16=C_eqp(t5,lf[598]);
t17=(C_truep(t16)?t16:C_eqp(t5,lf[626]));
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9467,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t18);}
else{
t18=C_eqp(t5,lf[633]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9488,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t19);}
else{
t19=C_eqp(t5,lf[604]);
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9509,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t19)){
t21=t20;
f_9509(t21,t19);}
else{
t21=C_eqp(t5,lf[600]);
if(C_truep(t21)){
t22=t20;
f_9509(t22,t21);}
else{
t22=C_eqp(t5,lf[612]);
if(C_truep(t22)){
t23=t20;
f_9509(t23,t22);}
else{
t23=C_eqp(t5,lf[623]);
if(C_truep(t23)){
t24=t20;
f_9509(t24,t23);}
else{
t24=C_eqp(t5,lf[619]);
if(C_truep(t24)){
t25=t20;
f_9509(t25,t24);}
else{
t25=C_eqp(t5,lf[624]);
if(C_truep(t25)){
t26=t20;
f_9509(t26,t25);}
else{
t26=C_eqp(t5,lf[625]);
if(C_truep(t26)){
t27=t20;
f_9509(t27,t26);}
else{
t27=C_eqp(t5,lf[620]);
if(C_truep(t27)){
t28=t20;
f_9509(t28,t27);}
else{
t28=C_eqp(t5,lf[621]);
if(C_truep(t28)){
t29=t20;
f_9509(t29,t28);}
else{
t29=C_eqp(t5,lf[622]);
if(C_truep(t29)){
t30=t20;
f_9509(t30,t29);}
else{
t30=C_eqp(t5,lf[635]);
t31=t20;
f_9509(t31,(C_truep(t30)?t30:C_eqp(t5,lf[636])));}}}}}}}}}}}}}}}}}}}}

/* k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_fcall f_9509(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9509,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9512,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t2);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[610]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9533,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t3);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[630]);
t4=(C_truep(t3)?t3:C_eqp(((C_word*)t0)[4],lf[631]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9557,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t5);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[634]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9578,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t6);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[627]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[628]));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9602,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t8);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[629]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9623,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t9);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[632]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9644,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t10);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[13]);
if(C_truep(t10)){
t11=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,lf[829]);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[562]);
t12=(C_truep(t11)?t11:C_eqp(((C_word*)t0)[4],lf[641]));
if(C_truep(t12)){
t13=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[830]);}
else{
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9674,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
C_trace("c-backend.scm: 1347 ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[617]))(4,*((C_word*)lf[617]+1),t13,C_retrieve(lf[618]),((C_word*)t0)[3]);}
else{
t14=t13;
f_9674(2,t14,C_SCHEME_FALSE);}}}}}}}}}}}

/* k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9674,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9678,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("g23682369");
t3=t2;
f_9678(t3,((C_word*)t0)[4],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9701,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t3=C_i_length(((C_word*)t0)[3]);
t4=t2;
f_9701(t4,C_fixnum_greater_or_equal_p(t3,C_fix(2)));}
else{
t3=t2;
f_9701(t3,C_SCHEME_FALSE);}}}

/* k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_fcall f_9701(C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9701,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[5]);
t3=C_eqp(t2,lf[611]);
t4=(C_truep(t3)?t3:C_eqp(t2,lf[612]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9716,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t5);}
else{
t5=C_eqp(t2,lf[607]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9737,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t6);}
else{
t6=C_eqp(t2,lf[614]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9758,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t7);}
else{
t7=C_eqp(t2,lf[615]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9779,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t8);}
else{
t8=C_eqp(t2,lf[616]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9800,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t9);}
else{
t9=C_eqp(t2,lf[609]);
if(C_truep(t9)){
t10=C_i_cadr(((C_word*)t0)[5]);
C_trace("c-backend.scm: 1362 foreign-result-conversion");
((C_proc4)C_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),((C_word*)t0)[4],t10,((C_word*)t0)[3]);}
else{
t10=C_eqp(t2,lf[480]);
t11=(C_truep(t10)?t10:C_eqp(t2,lf[610]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9837,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t12);}
else{
t12=C_eqp(t2,lf[613]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9858,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t13);}
else{
t13=C_eqp(t2,lf[746]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9879,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t14);}
else{
C_trace("c-backend.scm: 1367 err");
t14=((C_word*)t0)[2];
f_9400(t14,((C_word*)t0)[4]);}}}}}}}}}}
else{
C_trace("c-backend.scm: 1368 err");
t2=((C_word*)t0)[2];
f_9400(t2,((C_word*)t0)[4]);}}

/* k9877 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9879,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9882,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[845],t1);}

/* k9880 in k9877 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9882,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9885,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9883 in k9880 in k9877 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9885,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9888,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[339]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9886 in k9883 in k9880 in k9877 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9856 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9858,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9861,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[844],t1);}

/* k9859 in k9856 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9861,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9864,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9862 in k9859 in k9856 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9864,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9867,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[843],((C_word*)t0)[2]);}

/* k9865 in k9862 in k9859 in k9856 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9835 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9837,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9840,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[842],t1);}

/* k9838 in k9835 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9843,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9841 in k9838 in k9835 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9843,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9846,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[841],((C_word*)t0)[2]);}

/* k9844 in k9841 in k9838 in k9835 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9798 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9803,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[840],t1);}

/* k9801 in k9798 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9803,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9806,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9804 in k9801 in k9798 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9806,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[839],((C_word*)t0)[2]);}

/* k9807 in k9804 in k9801 in k9798 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9777 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9779,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9782,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[838],t1);}

/* k9780 in k9777 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9785,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9783 in k9780 in k9777 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9785,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9788,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[837],((C_word*)t0)[2]);}

/* k9786 in k9783 in k9780 in k9777 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9756 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9758,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9761,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[836],t1);}

/* k9759 in k9756 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9761,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9764,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9762 in k9759 in k9756 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9764,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[835],((C_word*)t0)[2]);}

/* k9765 in k9762 in k9759 in k9756 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9735 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9737,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9740,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[834],t1);}

/* k9738 in k9735 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9740,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9743,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9741 in k9738 in k9735 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9743,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9746,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[833],((C_word*)t0)[2]);}

/* k9744 in k9741 in k9738 in k9735 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9714 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9716,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9719,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[832],t1);}

/* k9717 in k9714 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9722,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9720 in k9717 in k9714 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9725,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[831],((C_word*)t0)[2]);}

/* k9723 in k9720 in k9717 in k9714 in k9699 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* g2368 in k9672 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_fcall f_9678(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9678,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
C_trace("c-backend.scm: 1349 foreign-result-conversion");
((C_proc4)C_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),t1,t3,((C_word*)t0)[2]);}
else{
t3=t2;
C_trace("c-backend.scm: 1349 foreign-result-conversion");
((C_proc4)C_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),t1,t3,((C_word*)t0)[2]);}}

/* k9642 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9644,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9647,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[828],t1);}

/* k9645 in k9642 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9647,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9650,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9648 in k9645 in k9642 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9650,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9653,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[339]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9651 in k9648 in k9645 in k9642 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9621 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9623,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9626,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[827],t1);}

/* k9624 in k9621 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9626,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9629,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9627 in k9624 in k9621 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9629,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9632,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[339]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9630 in k9627 in k9624 in k9621 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9600 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9602,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9605,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[826],t1);}

/* k9603 in k9600 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9608,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9606 in k9603 in k9600 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9608,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9611,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[339]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9609 in k9606 in k9603 in k9600 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9576 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9578,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9581,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[825],t1);}

/* k9579 in k9576 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9581,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9584,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9582 in k9579 in k9576 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9584,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9587,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[339]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9585 in k9582 in k9579 in k9576 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9555 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9560,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[824],t1);}

/* k9558 in k9555 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9560,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9563,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9561 in k9558 in k9555 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9563,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9566,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[339]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9564 in k9561 in k9558 in k9555 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9531 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9536,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[823],t1);}

/* k9534 in k9531 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9536,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9539,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9537 in k9534 in k9531 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9539,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[822],((C_word*)t0)[2]);}

/* k9540 in k9537 in k9534 in k9531 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9510 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9515,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[821],t1);}

/* k9513 in k9510 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9515,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9518,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9516 in k9513 in k9510 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9518,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[820],((C_word*)t0)[2]);}

/* k9519 in k9516 in k9513 in k9510 in k9507 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9486 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9491,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[819],t1);}

/* k9489 in k9486 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9491,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9494,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9492 in k9489 in k9486 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9494,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[339]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9495 in k9492 in k9489 in k9486 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9465 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9470,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[818],t1);}

/* k9468 in k9465 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9470,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9473,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9471 in k9468 in k9465 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9473,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9476,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[339]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(44),((C_word*)t0)[2]);}

/* k9474 in k9471 in k9468 in k9465 in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* err in ##compiler#foreign-result-conversion in k2595 in k2509 in k2506 */
static void C_fcall f_9400(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9400,NULL,2,t0,t1);}
C_trace("c-backend.scm: 1323 quit");
((C_proc4)C_retrieve_symbol_proc(lf[669]))(4,*((C_word*)lf[669]+1),t1,lf[810],((C_word*)t0)[2]);}

/* ##compiler#foreign-argument-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_8908(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8908,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8910,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=t2;
t5=C_eqp(t4,lf[641]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[757]);}
else{
t6=C_eqp(t4,lf[16]);
t7=(C_truep(t6)?t6:C_eqp(t4,lf[642]));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[758]);}
else{
t8=C_eqp(t4,lf[645]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8938,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t8)){
t10=t9;
f_8938(t10,t8);}
else{
t10=C_eqp(t4,lf[637]);
if(C_truep(t10)){
t11=t9;
f_8938(t11,t10);}
else{
t11=C_eqp(t4,lf[643]);
if(C_truep(t11)){
t12=t9;
f_8938(t12,t11);}
else{
t12=C_eqp(t4,lf[644]);
t13=t9;
f_8938(t13,(C_truep(t12)?t12:C_eqp(t4,lf[646])));}}}}}}

/* k8936 in ##compiler#foreign-argument-conversion in k2595 in k2509 in k2506 */
static void C_fcall f_8938(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_8938,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[759]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[639]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[760]);}
else{
t3=C_eqp(((C_word*)t0)[4],lf[640]);
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[761]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[632]);
if(C_truep(t4)){
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[762]);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[626]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_8965(t7,t5);}
else{
t7=C_eqp(((C_word*)t0)[4],lf[633]);
t8=t6;
f_8965(t8,(C_truep(t7)?t7:C_eqp(((C_word*)t0)[4],lf[598])));}}}}}}

/* k8963 in k8936 in ##compiler#foreign-argument-conversion in k2595 in k2509 in k2506 */
static void C_fcall f_8965(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8965,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[763]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[630]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[4],lf[631]));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[764]);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[634]);
if(C_truep(t4)){
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[765]);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[629]);
if(C_truep(t5)){
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[766]);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[627]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[628]));
if(C_truep(t7)){
t8=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[767]);}
else{
t8=C_eqp(((C_word*)t0)[4],lf[480]);
if(C_truep(t8)){
t9=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,lf[768]);}
else{
t9=C_eqp(((C_word*)t0)[4],lf[611]);
if(C_truep(t9)){
t10=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[769]);}
else{
t10=C_eqp(((C_word*)t0)[4],lf[754]);
if(C_truep(t10)){
t11=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,lf[770]);}
else{
t11=C_eqp(((C_word*)t0)[4],lf[755]);
if(C_truep(t11)){
t12=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[771]);}
else{
t12=C_eqp(((C_word*)t0)[4],lf[610]);
if(C_truep(t12)){
t13=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,lf[772]);}
else{
t13=C_eqp(((C_word*)t0)[4],lf[612]);
if(C_truep(t13)){
t14=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,lf[773]);}
else{
t14=C_eqp(((C_word*)t0)[4],lf[692]);
if(C_truep(t14)){
t15=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,lf[774]);}
else{
t15=C_eqp(((C_word*)t0)[4],lf[751]);
if(C_truep(t15)){
t16=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,lf[775]);}
else{
t16=C_eqp(((C_word*)t0)[4],lf[689]);
if(C_truep(t16)){
t17=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,lf[776]);}
else{
t17=C_eqp(((C_word*)t0)[4],lf[690]);
if(C_truep(t17)){
t18=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,lf[777]);}
else{
t18=C_eqp(((C_word*)t0)[4],lf[752]);
if(C_truep(t18)){
t19=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,lf[778]);}
else{
t19=C_eqp(((C_word*)t0)[4],lf[753]);
if(C_truep(t19)){
t20=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,lf[779]);}
else{
t20=C_eqp(((C_word*)t0)[4],lf[694]);
if(C_truep(t20)){
t21=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t21+1)))(2,t21,lf[780]);}
else{
t21=C_eqp(((C_word*)t0)[4],lf[695]);
if(C_truep(t21)){
t22=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,lf[781]);}
else{
t22=C_eqp(((C_word*)t0)[4],lf[700]);
if(C_truep(t22)){
t23=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,lf[782]);}
else{
t23=C_eqp(((C_word*)t0)[4],lf[701]);
if(C_truep(t23)){
t24=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t24+1)))(2,t24,lf[783]);}
else{
t24=C_eqp(((C_word*)t0)[4],lf[697]);
if(C_truep(t24)){
t25=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t25+1)))(2,t25,lf[784]);}
else{
t25=C_eqp(((C_word*)t0)[4],lf[698]);
if(C_truep(t25)){
t26=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t26+1)))(2,t26,lf[785]);}
else{
t26=C_eqp(((C_word*)t0)[4],lf[703]);
if(C_truep(t26)){
t27=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t27+1)))(2,t27,lf[786]);}
else{
t27=C_eqp(((C_word*)t0)[4],lf[704]);
if(C_truep(t27)){
t28=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t28+1)))(2,t28,lf[787]);}
else{
t28=C_eqp(((C_word*)t0)[4],lf[706]);
if(C_truep(t28)){
t29=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t29+1)))(2,t29,lf[788]);}
else{
t29=C_eqp(((C_word*)t0)[4],lf[707]);
if(C_truep(t29)){
t30=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t30+1)))(2,t30,lf[789]);}
else{
t30=C_eqp(((C_word*)t0)[4],lf[709]);
if(C_truep(t30)){
t31=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t31+1)))(2,t31,lf[790]);}
else{
t31=C_eqp(((C_word*)t0)[4],lf[710]);
if(C_truep(t31)){
t32=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t32+1)))(2,t32,lf[791]);}
else{
t32=C_eqp(((C_word*)t0)[4],lf[712]);
if(C_truep(t32)){
t33=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t33+1)))(2,t33,lf[792]);}
else{
t33=C_eqp(((C_word*)t0)[4],lf[713]);
if(C_truep(t33)){
t34=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t34+1)))(2,t34,lf[793]);}
else{
t34=C_eqp(((C_word*)t0)[4],lf[600]);
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t34)){
t36=t35;
f_9160(t36,t34);}
else{
t36=C_eqp(((C_word*)t0)[4],lf[623]);
if(C_truep(t36)){
t37=t35;
f_9160(t37,t36);}
else{
t37=C_eqp(((C_word*)t0)[4],lf[624]);
t38=t35;
f_9160(t38,(C_truep(t37)?t37:C_eqp(((C_word*)t0)[4],lf[625])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k9158 in k8963 in k8936 in ##compiler#foreign-argument-conversion in k2595 in k2509 in k2506 */
static void C_fcall f_9160(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9160,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[794]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[604]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9169,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_9169(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[619]);
if(C_truep(t4)){
t5=t3;
f_9169(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[620]);
if(C_truep(t5)){
t6=t3;
f_9169(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[621]);
t7=t3;
f_9169(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[622])));}}}}}

/* k9167 in k9158 in k8963 in k8936 in ##compiler#foreign-argument-conversion in k2595 in k2509 in k2506 */
static void C_fcall f_9169(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9169,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[795]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[13]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[796]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
C_trace("c-backend.scm: 1296 ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[617]))(4,*((C_word*)lf[617]+1),t3,C_retrieve(lf[618]),((C_word*)t0)[3]);}
else{
t4=t3;
f_9178(2,t4,C_SCHEME_FALSE);}}}}

/* k9176 in k9167 in k9158 in k8963 in k8936 in ##compiler#foreign-argument-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9178,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=t1;
if(C_truep(C_i_vectorp(t3))){
t4=C_i_vector_ref(t3,C_fix(0));
C_trace("c-backend.scm: 1298 foreign-argument-conversion");
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),t2,t4);}
else{
C_trace("c-backend.scm: 1298 foreign-argument-conversion");
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),t2,t3);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_i_listp(((C_word*)t0)[3]))){
t3=C_i_length(((C_word*)t0)[3]);
t4=t2;
f_9205(t4,C_fixnum_greater_or_equal_p(t3,C_fix(2)));}
else{
t3=t2;
f_9205(t3,C_SCHEME_FALSE);}}}

/* k9203 in k9176 in k9167 in k9158 in k8963 in k8936 in ##compiler#foreign-argument-conversion in k2595 in k2509 in k2506 */
static void C_fcall f_9205(C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9205,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_car(((C_word*)t0)[4]);
t3=C_eqp(t2,lf[480]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[797]);}
else{
t4=C_eqp(t2,lf[611]);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[798]);}
else{
t5=C_eqp(t2,lf[610]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[799]);}
else{
t6=C_eqp(t2,lf[612]);
if(C_truep(t6)){
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,lf[800]);}
else{
t7=C_eqp(t2,lf[614]);
if(C_truep(t7)){
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[801]);}
else{
t8=C_eqp(t2,lf[615]);
if(C_truep(t8)){
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,lf[802]);}
else{
t9=C_eqp(t2,lf[613]);
if(C_truep(t9)){
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,lf[803]);}
else{
t10=C_eqp(t2,lf[609]);
if(C_truep(t10)){
t11=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1309 foreign-argument-conversion");
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),((C_word*)t0)[3],t11);}
else{
t11=C_eqp(t2,lf[746]);
if(C_truep(t11)){
t12=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,lf[804]);}
else{
t12=C_eqp(t2,lf[607]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9282,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t14=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1312 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t13,t14,lf[807]);}
else{
t13=C_eqp(t2,lf[616]);
if(C_truep(t13)){
t14=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1315 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[115]+1)))(5,*((C_word*)lf[115]+1),((C_word*)t0)[3],lf[808],t14,lf[809]);}
else{
C_trace("c-backend.scm: 1316 err");
t14=((C_word*)t0)[2];
f_8910(t14,((C_word*)t0)[3]);}}}}}}}}}}}}
else{
C_trace("c-backend.scm: 1317 err");
t2=((C_word*)t0)[2];
f_8910(t2,((C_word*)t0)[3]);}}

/* k9280 in k9203 in k9176 in k9167 in k9158 in k8963 in k8936 in ##compiler#foreign-argument-conversion in k2595 in k2509 in k2506 */
static void C_ccall f_9282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1312 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[115]+1)))(5,*((C_word*)lf[115]+1),((C_word*)t0)[2],lf[805],t1,lf[806]);}

/* err in ##compiler#foreign-argument-conversion in k2595 in k2509 in k2506 */
static void C_fcall f_8910(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8910,NULL,2,t0,t1);}
C_trace("c-backend.scm: 1250 quit");
((C_proc4)C_retrieve_symbol_proc(lf[669]))(4,*((C_word*)lf[669]+1),t1,lf[756],((C_word*)t0)[2]);}

/* ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8024(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8024,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8026,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8031,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=t2;
t7=C_eqp(t6,lf[641]);
if(C_truep(t7)){
C_trace("c-backend.scm: 1157 str");
t8=t5;
f_8031(t8,t1,lf[672]);}
else{
t8=C_eqp(t6,lf[16]);
t9=(C_truep(t8)?t8:C_eqp(t6,lf[645]));
if(C_truep(t9)){
C_trace("c-backend.scm: 1158 str");
t10=t5;
f_8031(t10,t1,lf[673]);}
else{
t10=C_eqp(t6,lf[642]);
t11=(C_truep(t10)?t10:C_eqp(t6,lf[646]));
if(C_truep(t11)){
C_trace("c-backend.scm: 1159 str");
t12=t5;
f_8031(t12,t1,lf[674]);}
else{
t12=C_eqp(t6,lf[643]);
t13=(C_truep(t12)?t12:C_eqp(t6,lf[627]));
if(C_truep(t13)){
C_trace("c-backend.scm: 1160 str");
t14=t5;
f_8031(t14,t1,lf[675]);}
else{
t14=C_eqp(t6,lf[644]);
t15=(C_truep(t14)?t14:C_eqp(t6,lf[628]));
if(C_truep(t15)){
C_trace("c-backend.scm: 1161 str");
t16=t5;
f_8031(t16,t1,lf[676]);}
else{
t16=C_eqp(t6,lf[637]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8101,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t6,a[6]=t1,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t16)){
t18=t17;
f_8101(t18,t16);}
else{
t18=C_eqp(t6,lf[630]);
t19=t17;
f_8101(t19,(C_truep(t18)?t18:C_eqp(t6,lf[13])));}}}}}}}

/* k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8101(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8101,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1162 str");
t2=((C_word*)t0)[7];
f_8031(t2,((C_word*)t0)[6],lf[677]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[638]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[5],lf[631]));
if(C_truep(t3)){
C_trace("c-backend.scm: 1163 str");
t4=((C_word*)t0)[7];
f_8031(t4,((C_word*)t0)[6],lf[678]);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[634]);
if(C_truep(t4)){
C_trace("c-backend.scm: 1164 str");
t5=((C_word*)t0)[7];
f_8031(t5,((C_word*)t0)[6],lf[679]);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[639]);
if(C_truep(t5)){
C_trace("c-backend.scm: 1165 str");
t6=((C_word*)t0)[7];
f_8031(t6,((C_word*)t0)[6],lf[680]);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[629]);
if(C_truep(t6)){
C_trace("c-backend.scm: 1166 str");
t7=((C_word*)t0)[7];
f_8031(t7,((C_word*)t0)[6],lf[681]);}
else{
t7=C_eqp(((C_word*)t0)[5],lf[640]);
if(C_truep(t7)){
C_trace("c-backend.scm: 1167 str");
t8=((C_word*)t0)[7];
f_8031(t8,((C_word*)t0)[6],lf[682]);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[632]);
if(C_truep(t8)){
C_trace("c-backend.scm: 1168 str");
t9=((C_word*)t0)[7];
f_8031(t9,((C_word*)t0)[6],lf[683]);}
else{
t9=C_eqp(((C_word*)t0)[5],lf[598]);
if(C_truep(t9)){
C_trace("c-backend.scm: 1169 str");
t10=((C_word*)t0)[7];
f_8031(t10,((C_word*)t0)[6],lf[684]);}
else{
t10=C_eqp(((C_word*)t0)[5],lf[626]);
t11=(C_truep(t10)?t10:C_eqp(((C_word*)t0)[5],lf[633]));
if(C_truep(t11)){
C_trace("c-backend.scm: 1170 str");
t12=((C_word*)t0)[7];
f_8031(t12,((C_word*)t0)[6],lf[685]);}
else{
t12=C_eqp(((C_word*)t0)[5],lf[480]);
t13=(C_truep(t12)?t12:C_eqp(((C_word*)t0)[5],lf[611]));
if(C_truep(t13)){
C_trace("c-backend.scm: 1172 str");
t14=((C_word*)t0)[7];
f_8031(t14,((C_word*)t0)[6],lf[686]);}
else{
t14=C_eqp(((C_word*)t0)[5],lf[610]);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8203,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t14)){
t16=t15;
f_8203(t16,t14);}
else{
t16=C_eqp(((C_word*)t0)[5],lf[612]);
if(C_truep(t16)){
t17=t15;
f_8203(t17,t16);}
else{
t17=C_eqp(((C_word*)t0)[5],lf[754]);
t18=t15;
f_8203(t18,(C_truep(t17)?t17:C_eqp(((C_word*)t0)[5],lf[755])));}}}}}}}}}}}}}

/* k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8203(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8203,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1173 str");
t2=((C_word*)t0)[7];
f_8031(t2,((C_word*)t0)[6],lf[687]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[635]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[5],lf[636]));
if(C_truep(t3)){
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[688]);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[689]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[5],lf[690]));
if(C_truep(t5)){
C_trace("c-backend.scm: 1176 str");
t6=((C_word*)t0)[7];
f_8031(t6,((C_word*)t0)[6],lf[691]);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[692]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8236,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_8236(t8,t6);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[751]);
if(C_truep(t8)){
t9=t7;
f_8236(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[5],lf[752]);
t10=t7;
f_8236(t10,(C_truep(t9)?t9:C_eqp(((C_word*)t0)[5],lf[753])));}}}}}}

/* k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8236(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8236,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1177 str");
t2=((C_word*)t0)[7];
f_8031(t2,((C_word*)t0)[6],lf[693]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[694]);
t3=(C_truep(t2)?t2:C_eqp(((C_word*)t0)[5],lf[695]));
if(C_truep(t3)){
C_trace("c-backend.scm: 1178 str");
t4=((C_word*)t0)[7];
f_8031(t4,((C_word*)t0)[6],lf[696]);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[697]);
t5=(C_truep(t4)?t4:C_eqp(((C_word*)t0)[5],lf[698]));
if(C_truep(t5)){
C_trace("c-backend.scm: 1179 str");
t6=((C_word*)t0)[7];
f_8031(t6,((C_word*)t0)[6],lf[699]);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[700]);
t7=(C_truep(t6)?t6:C_eqp(((C_word*)t0)[5],lf[701]));
if(C_truep(t7)){
C_trace("c-backend.scm: 1180 str");
t8=((C_word*)t0)[7];
f_8031(t8,((C_word*)t0)[6],lf[702]);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[703]);
t9=(C_truep(t8)?t8:C_eqp(((C_word*)t0)[5],lf[704]));
if(C_truep(t9)){
C_trace("c-backend.scm: 1181 str");
t10=((C_word*)t0)[7];
f_8031(t10,((C_word*)t0)[6],lf[705]);}
else{
t10=C_eqp(((C_word*)t0)[5],lf[706]);
t11=(C_truep(t10)?t10:C_eqp(((C_word*)t0)[5],lf[707]));
if(C_truep(t11)){
C_trace("c-backend.scm: 1182 str");
t12=((C_word*)t0)[7];
f_8031(t12,((C_word*)t0)[6],lf[708]);}
else{
t12=C_eqp(((C_word*)t0)[5],lf[709]);
t13=(C_truep(t12)?t12:C_eqp(((C_word*)t0)[5],lf[710]));
if(C_truep(t13)){
C_trace("c-backend.scm: 1183 str");
t14=((C_word*)t0)[7];
f_8031(t14,((C_word*)t0)[6],lf[711]);}
else{
t14=C_eqp(((C_word*)t0)[5],lf[712]);
t15=(C_truep(t14)?t14:C_eqp(((C_word*)t0)[5],lf[713]));
if(C_truep(t15)){
C_trace("c-backend.scm: 1184 str");
t16=((C_word*)t0)[7];
f_8031(t16,((C_word*)t0)[6],lf[714]);}
else{
t16=C_eqp(((C_word*)t0)[5],lf[604]);
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8332,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t16)){
t18=t17;
f_8332(t18,t16);}
else{
t18=C_eqp(((C_word*)t0)[5],lf[600]);
if(C_truep(t18)){
t19=t17;
f_8332(t19,t18);}
else{
t19=C_eqp(((C_word*)t0)[5],lf[619]);
if(C_truep(t19)){
t20=t17;
f_8332(t20,t19);}
else{
t20=C_eqp(((C_word*)t0)[5],lf[623]);
t21=t17;
f_8332(t21,(C_truep(t20)?t20:C_eqp(((C_word*)t0)[5],lf[622])));}}}}}}}}}}}}

/* k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8332(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8332,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1186 str");
t2=((C_word*)t0)[7];
f_8031(t2,((C_word*)t0)[6],lf[715]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[620]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8344,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_8344(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[621]);
if(C_truep(t4)){
t5=t3;
f_8344(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[624]);
t6=t3;
f_8344(t6,(C_truep(t5)?t5:C_eqp(((C_word*)t0)[5],lf[625])));}}}}

/* k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8344(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8344,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1188 str");
t2=((C_word*)t0)[7];
f_8031(t2,((C_word*)t0)[6],lf[716]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[562]);
if(C_truep(t2)){
C_trace("c-backend.scm: 1189 str");
t3=((C_word*)t0)[7];
f_8031(t3,((C_word*)t0)[6],lf[717]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8359,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
C_trace("c-backend.scm: 1191 ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[617]))(4,*((C_word*)lf[617]+1),t3,C_retrieve(lf[618]),((C_word*)t0)[3]);}
else{
t4=t3;
f_8359(2,t4,C_SCHEME_FALSE);}}}}

/* k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8359,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8363,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
C_trace("g19961997");
t3=t2;
f_8363(t3,((C_word*)t0)[5],t1);}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[4]))){
C_trace("c-backend.scm: 1194 str");
t2=((C_word*)t0)[3];
f_8031(t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
if(C_truep(C_i_listp(((C_word*)t0)[4]))){
t2=C_i_length(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8404,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t4=C_eqp(C_fix(2),t2);
if(C_truep(t4)){
t5=C_i_car(((C_word*)t0)[4]);
t6=t3;
f_8404(t6,C_i_memq(t5,lf[750]));}
else{
t5=t3;
f_8404(t5,C_SCHEME_FALSE);}}
else{
C_trace("c-backend.scm: 1244 err");
t2=((C_word*)t0)[2];
f_8026(t2,((C_word*)t0)[5]);}}}}

/* k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8404(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8404,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8415,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 1201 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),t3,lf[718],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_eqp(C_fix(2),((C_word*)t0)[2]);
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[7]);
t5=t2;
f_8421(t5,C_eqp(lf[607],t4));}
else{
t4=t2;
f_8421(t4,C_SCHEME_FALSE);}}}

/* k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8421(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8421,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8432,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 1204 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),t3,lf[719],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8438,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[2],C_fix(2)))){
t3=C_i_car(((C_word*)t0)[7]);
t4=t2;
f_8438(t4,C_eqp(lf[749],t3));}
else{
t3=t2;
f_8438(t3,C_SCHEME_FALSE);}}}

/* k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8438(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_8438,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8445,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8449,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_i_cadr(((C_word*)t0)[5]);
C_trace("c-backend.scm: 1209 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t3,t4,lf[724]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8477,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[2],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[5]);
t5=t2;
f_8477(t5,C_eqp(lf[609],t4));}
else{
t4=t2;
f_8477(t4,C_SCHEME_FALSE);}}}

/* k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8477(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8477,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8484,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[5]);
C_trace("c-backend.scm: 1216 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t2,t3,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8494,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[2],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[5]);
t5=t2;
f_8494(t5,C_eqp(lf[748],t4));}
else{
t4=t2;
f_8494(t4,C_SCHEME_FALSE);}}}

/* k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8494(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8494,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8501,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1218 ->string");
((C_proc3)C_retrieve_symbol_proc(lf[83]))(3,*((C_word*)lf[83]+1),t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8511,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[2],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8511(t5,C_eqp(lf[747],t4));}
else{
t4=t2;
f_8511(t4,C_SCHEME_FALSE);}}}

/* k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8511(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8511,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8518,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1220 ->string");
((C_proc3)C_retrieve_symbol_proc(lf[83]))(3,*((C_word*)lf[83]+1),t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[2],C_fix(2));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8528(t5,C_eqp(lf[746],t4));}
else{
t4=t2;
f_8528(t4,C_SCHEME_FALSE);}}}

/* k8526 in k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8528(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8528,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8535,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1222 ->string");
((C_proc3)C_retrieve_symbol_proc(lf[83]))(3,*((C_word*)lf[83]+1),t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8545,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[2],C_fix(3));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8545(t5,C_i_memq(t4,lf[745]));}
else{
t4=t2;
f_8545(t4,C_SCHEME_FALSE);}}}

/* k8543 in k8526 in k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8545(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8545,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8552,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1224 ->string");
((C_proc3)C_retrieve_symbol_proc(lf[83]))(3,*((C_word*)lf[83]+1),t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8562,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_eqp(((C_word*)t0)[2],C_fix(3));
if(C_truep(t3)){
t4=C_i_car(((C_word*)t0)[4]);
t5=t2;
f_8562(t5,C_eqp(lf[616],t4));}
else{
t4=t2;
f_8562(t4,C_SCHEME_FALSE);}}}

/* k8560 in k8543 in k8526 in k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8562(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8562,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8569,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1226 ->string");
((C_proc3)C_retrieve_symbol_proc(lf[83]))(3,*((C_word*)lf[83]+1),t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8579,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnum_greater_or_equal_p(((C_word*)t0)[2],C_fix(3)))){
t3=C_i_car(((C_word*)t0)[4]);
t4=t2;
f_8579(t4,C_eqp(lf[613],t3));}
else{
t3=t2;
f_8579(t3,C_SCHEME_FALSE);}}}

/* k8577 in k8560 in k8543 in k8526 in k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8579(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8579,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_i_cadr(((C_word*)t0)[5]);
t3=C_i_caddr(((C_word*)t0)[5]);
t4=C_i_cdddr(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8591,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_i_nullp(t4))){
t6=t5;
f_8591(2,t6,lf[742]);}
else{
t6=C_i_cdr(t4);
if(C_truep(C_i_nullp(t6))){
t7=t5;
f_8591(2,t7,C_i_car(t4));}
else{
C_trace("##sys#error");
t7=*((C_word*)lf[743]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[744],t4);}}}
else{
C_trace("c-backend.scm: 1243 err");
t2=((C_word*)t0)[2];
f_8026(t2,((C_word*)t0)[4]);}}

/* k8589 in k8577 in k8560 in k8543 in k8526 in k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8591,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8598,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 1232 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t2,((C_word*)t0)[2],lf[741]);}

/* k8596 in k8589 in k8577 in k8560 in k8543 in k8526 in k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8598(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8598,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8602,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8606,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8608,a[2]=t4,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_8608(t11,t7,((C_word*)t0)[2]);}

/* loop2057 in k8596 in k8589 in k8577 in k8560 in k8543 in k8526 in k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8608(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8608,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8618,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8648,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_slot(t2,C_fix(0));
t6=C_eqp(lf[738],t5);
if(C_truep(t6)){
t7=t3;
f_8618(t7,C_a_i_cons(&a,2,lf[739],C_SCHEME_END_OF_LIST));}
else{
C_trace("c-backend.scm: 1239 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t4,t5,lf[740]);}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8646 in loop2057 in k8596 in k8589 in k8577 in k8560 in k8543 in k8526 in k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8648,2,t0,t1);}
t2=((C_word*)t0)[2];
f_8618(t2,C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST));}

/* k8616 in loop2057 in k8596 in k8589 in k8577 in k8560 in k8543 in k8526 in k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8618(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t2=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t1);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t4=C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop20572070");
t5=((C_word*)((C_word*)t0)[4])[1];
f_8608(t5,((C_word*)t0)[3],t4);}
else{
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t4=C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop20572070");
t5=((C_word*)((C_word*)t0)[4])[1];
f_8608(t5,((C_word*)t0)[3],t4);}}

/* k8604 in k8596 in k8589 in k8577 in k8560 in k8543 in k8526 in k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1235 string-intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[223]))(4,*((C_word*)lf[223]+1),((C_word*)t0)[2],t1,lf[737]);}

/* k8600 in k8596 in k8589 in k8577 in k8560 in k8543 in k8526 in k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1231 string-append");
((C_proc9)C_retrieve_proc(*((C_word*)lf[115]+1)))(9,*((C_word*)lf[115]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],lf[734],((C_word*)t0)[2],lf[735],t1,lf[736]);}

/* k8567 in k8560 in k8543 in k8526 in k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1226 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[115]+1)))(5,*((C_word*)lf[115]+1),((C_word*)t0)[3],t1,lf[733],((C_word*)t0)[2]);}

/* k8550 in k8543 in k8526 in k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1224 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[115]+1)))(5,*((C_word*)lf[115]+1),((C_word*)t0)[3],t1,lf[732],((C_word*)t0)[2]);}

/* k8533 in k8526 in k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1222 string-append");
((C_proc6)C_retrieve_proc(*((C_word*)lf[115]+1)))(6,*((C_word*)lf[115]+1),((C_word*)t0)[3],lf[730],t1,lf[731],((C_word*)t0)[2]);}

/* k8516 in k8509 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1220 string-append");
((C_proc6)C_retrieve_proc(*((C_word*)lf[115]+1)))(6,*((C_word*)lf[115]+1),((C_word*)t0)[3],lf[728],t1,lf[729],((C_word*)t0)[2]);}

/* k8499 in k8492 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1218 string-append");
((C_proc6)C_retrieve_proc(*((C_word*)lf[115]+1)))(6,*((C_word*)lf[115]+1),((C_word*)t0)[3],lf[726],t1,lf[727],((C_word*)t0)[2]);}

/* k8482 in k8475 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1216 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),((C_word*)t0)[2],lf[725],t1);}

/* k8447 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8453,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8457,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8459,tmp=(C_word)a,a+=2,tmp);
t5=C_i_cddr(((C_word*)t0)[2]);
C_trace("map");
t6=*((C_word*)lf[227]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}

/* a8458 in k8447 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8459(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8459,3,t0,t1,t2);}
t3=C_retrieve(lf[174]);
C_trace("g20312032");
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,lf[723]);}

/* k8455 in k8447 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1211 string-intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[223]))(4,*((C_word*)lf[223]+1),((C_word*)t0)[2],t1,lf[722]);}

/* k8451 in k8447 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1208 string-append");
((C_proc6)C_retrieve_proc(*((C_word*)lf[115]+1)))(6,*((C_word*)lf[115]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[720],t1,lf[721]);}

/* k8443 in k8436 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1207 str");
t2=((C_word*)t0)[3];
f_8031(t2,((C_word*)t0)[2],t1);}

/* k8430 in k8419 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1204 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8413 in k8402 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_ccall f_8415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1201 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* g1996 in k8357 in k8342 in k8330 in k8234 in k8201 in k8099 in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8363(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8363,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
C_trace("c-backend.scm: 1193 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t1,t3,((C_word*)t0)[2]);}
else{
t3=t2;
C_trace("c-backend.scm: 1193 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t1,t3,((C_word*)t0)[2]);}}

/* str in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8031(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8031,NULL,3,t0,t1,t2);}
C_trace("c-backend.scm: 1155 string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[115]+1)))(5,*((C_word*)lf[115]+1),t1,t2,lf[671],((C_word*)t0)[2]);}

/* err in ##compiler#foreign-type-declaration in k2595 in k2509 in k2506 */
static void C_fcall f_8026(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8026,NULL,2,t0,t1);}
C_trace("c-backend.scm: 1154 quit");
((C_proc4)C_retrieve_symbol_proc(lf[669]))(4,*((C_word*)lf[669]+1),t1,lf[670],((C_word*)t0)[2]);}

/* ##compiler#generate-foreign-callback-header in k2595 in k2509 in k2506 */
static void C_ccall f_7959(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7959,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7963,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1136 foreign-callback-stub-name");
((C_proc3)C_retrieve_symbol_proc(lf[668]))(3,*((C_word*)lf[668]+1),t4,t3);}

/* k7961 in ##compiler#generate-foreign-callback-header in k2595 in k2509 in k2506 */
static void C_ccall f_7963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7963,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7966,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 1137 foreign-callback-stub-qualifiers");
((C_proc3)C_retrieve_symbol_proc(lf[667]))(3,*((C_word*)lf[667]+1),t2,((C_word*)t0)[2]);}

/* k7964 in k7961 in ##compiler#generate-foreign-callback-header in k2595 in k2509 in k2506 */
static void C_ccall f_7966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7969,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 1138 foreign-callback-stub-return-type");
((C_proc3)C_retrieve_symbol_proc(lf[663]))(3,*((C_word*)lf[663]+1),t2,((C_word*)t0)[2]);}

/* k7967 in k7964 in k7961 in ##compiler#generate-foreign-callback-header in k2595 in k2509 in k2506 */
static void C_ccall f_7969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7972,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 1139 foreign-callback-stub-argument-types");
((C_proc3)C_retrieve_symbol_proc(lf[662]))(3,*((C_word*)lf[662]+1),t2,((C_word*)t0)[2]);}

/* k7970 in k7967 in k7964 in k7961 in ##compiler#generate-foreign-callback-header in k2595 in k2509 in k2506 */
static void C_ccall f_7972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7972,2,t0,t1);}
t2=C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 1141 make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[296]))(4,*((C_word*)lf[296]+1),t3,t2,lf[666]);}

/* k7976 in k7970 in k7967 in k7964 in k7961 in ##compiler#generate-foreign-callback-header in k2595 in k2509 in k2506 */
static void C_ccall f_7978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7981,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8022,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 1142 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t3,((C_word*)t0)[2],lf[665]);}

/* k8020 in k7976 in k7970 in k7967 in k7964 in k7961 in ##compiler#generate-foreign-callback-header in k2595 in k2509 in k2506 */
static void C_ccall f_8022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1142 gen");
((C_proc10)C_retrieve_proc(*((C_word*)lf[1]+1)))(10,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4],C_make_character(32),t1,((C_word*)t0)[3],C_make_character(32),((C_word*)t0)[2],C_make_character(40));}

/* k7979 in k7976 in k7970 in k7967 in k7964 in k7961 in ##compiler#generate-foreign-callback-header in k2595 in k2509 in k2506 */
static void C_ccall f_7981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7984,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7989,tmp=(C_word)a,a+=2,tmp);
C_trace("c-backend.scm: 1143 pair-for-each");
((C_proc5)C_retrieve_symbol_proc(lf[203]))(5,*((C_word*)lf[203]+1),t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a7988 in k7979 in k7976 in k7970 in k7967 in k7964 in k7961 in ##compiler#generate-foreign-callback-header in k2595 in k2509 in k2506 */
static void C_ccall f_7989(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7989,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7993,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8010,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=C_i_car(t3);
t7=C_i_car(t2);
C_trace("c-backend.scm: 1145 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t5,t6,t7);}

/* k8008 in a7988 in k7979 in k7976 in k7970 in k7967 in k7964 in k7961 in ##compiler#generate-foreign-callback-header in k2595 in k2509 in k2506 */
static void C_ccall f_8010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1145 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],t1);}

/* k7991 in a7988 in k7979 in k7976 in k7970 in k7967 in k7964 in k7961 in ##compiler#generate-foreign-callback-header in k2595 in k2509 in k2506 */
static void C_ccall f_7993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[3]);
if(C_truep(C_i_pairp(t2))){
C_trace("c-backend.scm: 1146 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(44));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7982 in k7979 in k7976 in k7970 in k7967 in k7964 in k7961 in ##compiler#generate-foreign-callback-header in k2595 in k2509 in k2506 */
static void C_ccall f_7984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1148 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7465(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7465,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7471,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7471(t7,t1,t2);}

/* loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_fcall f_7471(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7471,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7479,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7946,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t2,C_fix(0));
C_trace("g15231524");
t6=t3;
f_7479(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7944 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7471(t3,((C_word*)t0)[2],t2);}

/* g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_fcall f_7479(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7479,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7483,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1083 foreign-callback-stub-id");
((C_proc3)C_retrieve_symbol_proc(lf[664]))(3,*((C_word*)lf[664]+1),t3,t2);}

/* k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7486,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1084 real-name2");
((C_proc4)C_retrieve_symbol_proc(lf[596]))(4,*((C_word*)lf[596]+1),t2,t1,((C_word*)t0)[2]);}

/* k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7486,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7489,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 1085 foreign-callback-stub-return-type");
((C_proc3)C_retrieve_symbol_proc(lf[663]))(3,*((C_word*)lf[663]+1),t2,((C_word*)t0)[2]);}

/* k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7489,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 1086 foreign-callback-stub-argument-types");
((C_proc3)C_retrieve_symbol_proc(lf[662]))(3,*((C_word*)lf[662]+1),t2,((C_word*)t0)[3]);}

/* k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7492,2,t0,t1);}
t2=C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7498,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 1088 make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[296]))(4,*((C_word*)lf[296]+1),t3,t2,lf[661]);}

/* k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7498,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7500,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7844,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 1115 fold");
((C_proc6)C_retrieve_symbol_proc(lf[441]))(6,*((C_word*)lf[441]+1),t5,((C_word*)t3)[1],lf[660],((C_word*)t0)[4],t1);}

/* k7842 in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7844,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7847,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 1116 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE);}

/* k7845 in k7842 in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7847,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7850,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7943,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 1118 cleanup");
((C_proc3)C_retrieve_symbol_proc(lf[505]))(3,*((C_word*)lf[505]+1),t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_7850(2,t3,C_SCHEME_UNDEFINED);}}

/* k7941 in k7845 in k7842 in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1118 gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[658],t1,lf[659]);}

/* k7848 in k7845 in k7842 in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7850,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7853,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 1119 generate-foreign-callback-header");
((C_proc4)C_retrieve_symbol_proc(lf[549]))(4,*((C_word*)lf[549]+1),t2,lf[657],((C_word*)t0)[2]);}

/* k7851 in k7848 in k7845 in k7842 in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7853,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7856,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 1120 gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,C_make_character(123),C_SCHEME_TRUE,lf[655],((C_word*)t0)[2],lf[656]);}

/* k7854 in k7851 in k7848 in k7845 in k7842 in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7856,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 1121 gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[654]);}

/* k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7862,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7892,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_7892(t6,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop1770 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_fcall f_7892(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_7892,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7911,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7908,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 1124 foreign-result-conversion");
((C_proc4)C_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),t9,t8,lf[653]);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7906 in loop1770 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1124 gen");
((C_proc9)C_retrieve_proc(*((C_word*)lf[1]+1)))(9,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[650],t1,((C_word*)t0)[2],lf[651],C_SCHEME_TRUE,lf[652]);}

/* k7909 in loop1770 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_7892(t4,((C_word*)t0)[2],t2,t3);}

/* k7860 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7865,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_eqp(lf[562],((C_word*)t0)[4]);
if(C_truep(t3)){
t4=t2;
f_7865(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7890,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 1129 foreign-argument-conversion");
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),t4,((C_word*)t0)[4]);}}

/* k7888 in k7860 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1129 gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[649],t1);}

/* k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7865,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7868,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 1130 gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,lf[648],((C_word*)t0)[3],C_make_character(44),((C_word*)t0)[2],C_make_character(41));}

/* k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7868,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7871,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=C_eqp(lf[562],((C_word*)t0)[2]);
if(C_truep(t3)){
C_trace("c-backend.scm: 1132 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[647]);}
else{
C_trace("c-backend.scm: 1131 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(41));}}

/* k7869 in k7866 in k7863 in k7860 in k7857 in k7854 in k7851 in k7848 in k7845 in k7842 in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1132 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[647]);}

/* compute-size in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7500(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7500,5,t0,t1,t2,t3,t4);}
t5=t2;
t6=C_eqp(t5,lf[16]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7510,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t5,a[6]=t1,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_7510(t8,t6);}
else{
t8=C_eqp(t5,lf[637]);
if(C_truep(t8)){
t9=t7;
f_7510(t9,t8);}
else{
t9=C_eqp(t5,lf[638]);
if(C_truep(t9)){
t10=t7;
f_7510(t10,t9);}
else{
t10=C_eqp(t5,lf[639]);
if(C_truep(t10)){
t11=t7;
f_7510(t11,t10);}
else{
t11=C_eqp(t5,lf[13]);
if(C_truep(t11)){
t12=t7;
f_7510(t12,t11);}
else{
t12=C_eqp(t5,lf[562]);
if(C_truep(t12)){
t13=t7;
f_7510(t13,t12);}
else{
t13=C_eqp(t5,lf[640]);
if(C_truep(t13)){
t14=t7;
f_7510(t14,t13);}
else{
t14=C_eqp(t5,lf[641]);
if(C_truep(t14)){
t15=t7;
f_7510(t15,t14);}
else{
t15=C_eqp(t5,lf[642]);
if(C_truep(t15)){
t16=t7;
f_7510(t16,t15);}
else{
t16=C_eqp(t5,lf[643]);
if(C_truep(t16)){
t17=t7;
f_7510(t17,t16);}
else{
t17=C_eqp(t5,lf[644]);
if(C_truep(t17)){
t18=t7;
f_7510(t18,t17);}
else{
t18=C_eqp(t5,lf[645]);
t19=t7;
f_7510(t19,(C_truep(t18)?t18:C_eqp(t5,lf[646])));}}}}}}}}}}}}

/* k7508 in compute-size in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_fcall f_7510(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7510,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[7];
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[598]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7519,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_7519(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[626]);
if(C_truep(t4)){
t5=t3;
f_7519(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[610]);
if(C_truep(t5)){
t6=t3;
f_7519(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[627]);
if(C_truep(t6)){
t7=t3;
f_7519(t7,t6);}
else{
t7=C_eqp(((C_word*)t0)[5],lf[628]);
if(C_truep(t7)){
t8=t3;
f_7519(t8,t7);}
else{
t8=C_eqp(((C_word*)t0)[5],lf[629]);
if(C_truep(t8)){
t9=t3;
f_7519(t9,t8);}
else{
t9=C_eqp(((C_word*)t0)[5],lf[630]);
if(C_truep(t9)){
t10=t3;
f_7519(t10,t9);}
else{
t10=C_eqp(((C_word*)t0)[5],lf[631]);
if(C_truep(t10)){
t11=t3;
f_7519(t11,t10);}
else{
t11=C_eqp(((C_word*)t0)[5],lf[632]);
if(C_truep(t11)){
t12=t3;
f_7519(t12,t11);}
else{
t12=C_eqp(((C_word*)t0)[5],lf[612]);
if(C_truep(t12)){
t13=t3;
f_7519(t13,t12);}
else{
t13=C_eqp(((C_word*)t0)[5],lf[633]);
if(C_truep(t13)){
t14=t3;
f_7519(t14,t13);}
else{
t14=C_eqp(((C_word*)t0)[5],lf[634]);
if(C_truep(t14)){
t15=t3;
f_7519(t15,t14);}
else{
t15=C_eqp(((C_word*)t0)[5],lf[635]);
t16=t3;
f_7519(t16,(C_truep(t15)?t15:C_eqp(((C_word*)t0)[5],lf[636])));}}}}}}}}}}}}}}

/* k7517 in k7508 in compute-size in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_fcall f_7519(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7519,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1097 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),((C_word*)t0)[7],((C_word*)t0)[6],lf[599]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[600]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7531,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_7531(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[5],lf[623]);
if(C_truep(t4)){
t5=t3;
f_7531(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[5],lf[624]);
if(C_truep(t5)){
t6=t3;
f_7531(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[5],lf[624]);
t7=t3;
f_7531(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[5],lf[625])));}}}}}

/* k7529 in k7517 in k7508 in compute-size in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_fcall f_7531(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7531,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1099 string-append");
((C_proc8)C_retrieve_proc(*((C_word*)lf[115]+1)))(8,*((C_word*)lf[115]+1),((C_word*)t0)[7],((C_word*)t0)[6],lf[601],((C_word*)t0)[5],lf[602],((C_word*)t0)[5],lf[603]);}
else{
t2=C_eqp(((C_word*)t0)[4],lf[604]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7543,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_7543(t4,t2);}
else{
t4=C_eqp(((C_word*)t0)[4],lf[619]);
if(C_truep(t4)){
t5=t3;
f_7543(t5,t4);}
else{
t5=C_eqp(((C_word*)t0)[4],lf[620]);
if(C_truep(t5)){
t6=t3;
f_7543(t6,t5);}
else{
t6=C_eqp(((C_word*)t0)[4],lf[621]);
t7=t3;
f_7543(t7,(C_truep(t6)?t6:C_eqp(((C_word*)t0)[4],lf[622])));}}}}}

/* k7541 in k7529 in k7517 in k7508 in compute-size in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_fcall f_7543(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7543,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 1101 string-append");
((C_proc6)C_retrieve_proc(*((C_word*)lf[115]+1)))(6,*((C_word*)lf[115]+1),((C_word*)t0)[6],((C_word*)t0)[5],lf[605],((C_word*)t0)[4],lf[606]);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7549,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_symbolp(((C_word*)t0)[2]))){
C_trace("c-backend.scm: 1103 ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[617]))(4,*((C_word*)lf[617]+1),t2,C_retrieve(lf[618]),((C_word*)t0)[2]);}
else{
t3=t2;
f_7549(2,t3,C_SCHEME_FALSE);}}}

/* k7547 in k7541 in k7529 in k7517 in k7508 in compute-size in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7549(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7549,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7553,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace("g17171718");
t3=t2;
f_7553(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
t2=C_i_car(((C_word*)t0)[2]);
t3=C_eqp(t2,lf[607]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7588,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_7588(t5,t3);}
else{
t5=C_eqp(t2,lf[480]);
if(C_truep(t5)){
t6=t4;
f_7588(t6,t5);}
else{
t6=C_eqp(t2,lf[610]);
if(C_truep(t6)){
t7=t4;
f_7588(t7,t6);}
else{
t7=C_eqp(t2,lf[611]);
if(C_truep(t7)){
t8=t4;
f_7588(t8,t7);}
else{
t8=C_eqp(t2,lf[612]);
if(C_truep(t8)){
t9=t4;
f_7588(t9,t8);}
else{
t9=C_eqp(t2,lf[613]);
if(C_truep(t9)){
t10=t4;
f_7588(t10,t9);}
else{
t10=C_eqp(t2,lf[614]);
if(C_truep(t10)){
t11=t4;
f_7588(t11,t10);}
else{
t11=C_eqp(t2,lf[615]);
t12=t4;
f_7588(t12,(C_truep(t11)?t11:C_eqp(t2,lf[616])));}}}}}}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}}

/* k7586 in k7547 in k7541 in k7529 in k7517 in k7508 in compute-size in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_fcall f_7588(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
C_trace("c-backend.scm: 1110 string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),((C_word*)t0)[7],((C_word*)t0)[6],lf[608]);}
else{
t2=C_eqp(((C_word*)t0)[5],lf[609]);
if(C_truep(t2)){
t3=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 1111 compute-size");
t4=((C_word*)((C_word*)t0)[3])[1];
f_7500(5,t4,((C_word*)t0)[7],t3,((C_word*)t0)[2],((C_word*)t0)[6]);}
else{
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[6]);}}}

/* g1717 in k7547 in k7541 in k7529 in k7517 in k7508 in compute-size in k7496 in k7490 in k7487 in k7484 in k7481 in g1523 in loop1516 in generate-foreign-callback-stubs in k2595 in k2509 in k2506 */
static void C_fcall f_7553(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7553,NULL,3,t0,t1,t2);}
if(C_truep(C_i_vectorp(t2))){
t3=C_i_vector_ref(t2,C_fix(0));
C_trace("c-backend.scm: 1105 compute-size");
t4=((C_word*)((C_word*)t0)[4])[1];
f_7500(5,t4,t1,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=t2;
C_trace("c-backend.scm: 1105 compute-size");
t4=((C_word*)((C_word*)t0)[4])[1];
f_7500(5,t4,t1,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7151(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7151,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7157,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_7157(t7,t1,t2);}

/* loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_fcall f_7157(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7157,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7165,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7452,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t2,C_fix(0));
C_trace("g14121413");
t6=t3;
f_7165(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7450 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7157(t3,((C_word*)t0)[2],t2);}

/* g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_fcall f_7165(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7165,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7169,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1016 foreign-stub-id");
((C_proc3)C_retrieve_symbol_proc(lf[597]))(3,*((C_word*)lf[597]+1),t3,t2);}

/* k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7172,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1017 real-name2");
((C_proc4)C_retrieve_symbol_proc(lf[596]))(4,*((C_word*)lf[596]+1),t2,t1,((C_word*)t0)[2]);}

/* k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7175,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 1018 foreign-stub-argument-types");
((C_proc3)C_retrieve_symbol_proc(lf[595]))(3,*((C_word*)lf[595]+1),t2,((C_word*)t0)[2]);}

/* k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7175,2,t0,t1);}
t2=C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7449,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 1020 make-variable-list");
((C_proc4)C_retrieve_symbol_proc(lf[286]))(4,*((C_word*)lf[286]+1),t4,t2,lf[594]);}

/* k7447 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7449,2,t0,t1);}
t2=C_a_i_cons(&a,2,lf[593],t1);
C_trace("c-backend.scm: 1020 intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),((C_word*)t0)[2],t2,C_make_character(44));}

/* k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7181,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 1021 foreign-stub-return-type");
((C_proc3)C_retrieve_symbol_proc(lf[592]))(3,*((C_word*)lf[592]+1),t2,((C_word*)t0)[2]);}

/* k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7184,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 1022 foreign-stub-name");
((C_proc3)C_retrieve_symbol_proc(lf[591]))(3,*((C_word*)lf[591]+1),t2,((C_word*)t0)[2]);}

/* k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7187,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 1023 foreign-stub-body");
((C_proc3)C_retrieve_symbol_proc(lf[590]))(3,*((C_word*)lf[590]+1),t2,((C_word*)t0)[2]);}

/* k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 1024 foreign-stub-argument-names");
((C_proc3)C_retrieve_symbol_proc(lf[589]))(3,*((C_word*)lf[589]+1),t2,((C_word*)t0)[2]);}

/* k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=t2;
f_7196(2,t3,t1);}
else{
C_trace("c-backend.scm: 1024 make-list");
((C_proc4)C_retrieve_symbol_proc(lf[247]))(4,*((C_word*)lf[247]+1),t2,((C_word*)t0)[8],C_SCHEME_FALSE);}}

/* k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7196,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
C_trace("c-backend.scm: 1025 foreign-result-conversion");
((C_proc4)C_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),t2,((C_word*)t0)[9],lf[588]);}

/* k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7202,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
C_trace("c-backend.scm: 1026 foreign-stub-cps");
((C_proc3)C_retrieve_symbol_proc(lf[587]))(3,*((C_word*)lf[587]+1),t2,((C_word*)t0)[2]);}

/* k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7205,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t1,a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
C_trace("c-backend.scm: 1027 foreign-stub-callback");
((C_proc3)C_retrieve_symbol_proc(lf[586]))(3,*((C_word*)lf[586]+1),t2,((C_word*)t0)[2]);}

/* k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7205,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_7208,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
C_trace("c-backend.scm: 1028 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE);}

/* k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7211,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7438,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 1030 cleanup");
((C_proc3)C_retrieve_symbol_proc(lf[505]))(3,*((C_word*)lf[505]+1),t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_7211(2,t3,C_SCHEME_UNDEFINED);}}

/* k7436 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1030 gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[584],t1,lf[585]);}

/* k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7211,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7214,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[12])){
C_trace("c-backend.scm: 1032 gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[582],((C_word*)t0)[6],lf[583]);}
else{
t3=t2;
f_7214(2,t3,C_SCHEME_UNDEFINED);}}

/* k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7214,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
if(C_truep(((C_word*)t0)[10])){
C_trace("c-backend.scm: 1035 gen");
((C_proc10)C_retrieve_proc(*((C_word*)lf[1]+1)))(10,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[577],((C_word*)t0)[2],lf[578],C_SCHEME_TRUE,lf[579],((C_word*)t0)[2],lf[580]);}
else{
C_trace("c-backend.scm: 1037 gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[581],((C_word*)t0)[2],C_make_character(40));}}

/* k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_7220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[3]);}

/* k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7220,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7223,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
if(C_truep(((C_word*)t0)[10])){
C_trace("c-backend.scm: 1040 gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,lf[572],C_SCHEME_TRUE,lf[573],((C_word*)t0)[2],lf[574]);}
else{
C_trace("c-backend.scm: 1041 gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,lf[575],C_SCHEME_TRUE,lf[576],((C_word*)t0)[2],C_make_character(40));}}

/* k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7223,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7226,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7226,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7229,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 1043 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[571]);}

/* k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7229,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 1044 gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[570]);}

/* k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7232,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7235,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7329,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1053 iota");
((C_proc3)C_retrieve_symbol_proc(lf[60]))(3,*((C_word*)lf[60]+1),t3,((C_word*)t0)[6]);}

/* k7327 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7329,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7331,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_7331(t5,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* loop1439 in k7327 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_fcall f_7331(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7331,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7338,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_i_pairp(t2))){
t6=C_i_pairp(t3);
t7=t5;
f_7338(t7,(C_truep(t6)?C_i_pairp(t4):C_SCHEME_FALSE));}
else{
t6=t5;
f_7338(t6,C_SCHEME_FALSE);}}

/* k7336 in loop1439 in k7327 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_fcall f_7338(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7338,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_slot(((C_word*)t0)[6],C_fix(0));
t4=C_slot(((C_word*)t0)[5],C_fix(0));
t5=C_slot(((C_word*)t0)[4],C_fix(0));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7347,a[2]=t3,a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7359,a[2]=t3,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t5)){
C_trace("c-backend.scm: 1050 symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[73]+1)))(3,*((C_word*)lf[73]+1),t7,t5);}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7365,a[2]=t4,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t8);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k7363 in k7336 in loop1439 in k7327 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7368,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[339]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(116),t1);}

/* k7366 in k7363 in k7336 in loop1439 in k7327 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7371,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k7369 in k7366 in k7363 in k7336 in loop1439 in k7327 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7357 in k7336 in loop1439 in k7327 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1048 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7345 in k7336 in loop1439 in k7327 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 1051 foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t2,((C_word*)t0)[2],lf[569]);}

/* k7349 in k7345 in k7336 in loop1439 in k7327 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7355,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 1052 foreign-argument-conversion");
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),t2,((C_word*)t0)[2]);}

/* k7353 in k7349 in k7345 in k7336 in loop1439 in k7327 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1047 gen");
((C_proc11)C_retrieve_proc(*((C_word*)lf[1]+1)))(11,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4],lf[566],((C_word*)t0)[3],C_make_character(41),t1,lf[567],((C_word*)t0)[2],lf[568]);}

/* k7375 in k7336 in loop1439 in k7327 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_slot(((C_word*)t0)[6],C_fix(1));
t3=C_slot(((C_word*)t0)[5],C_fix(1));
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_7331(t5,((C_word*)t0)[2],t2,t3,t4);}

/* k7233 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7235,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7238,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[7])){
C_trace("c-backend.scm: 1054 gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[565]);}
else{
t3=t2;
f_7238(2,t3,C_SCHEME_UNDEFINED);}}

/* k7236 in k7233 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7238,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7241,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[8])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7247,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1056 gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,((C_word*)t0)[8],C_SCHEME_TRUE,lf[556]);}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7268,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_eqp(((C_word*)t0)[5],lf[562]);
if(C_truep(t4)){
C_trace("c-backend.scm: 1067 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE);}
else{
C_trace("c-backend.scm: 1066 gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[564],((C_word*)t0)[2]);}}}

/* k7266 in k7236 in k7233 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7271,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 1068 gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,((C_word*)t0)[2],C_make_character(40));}

/* k7269 in k7266 in k7236 in k7233 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7271,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7274,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7305,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7309,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 1069 make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[296]))(4,*((C_word*)lf[296]+1),t4,((C_word*)t0)[2],lf[563]);}

/* k7307 in k7269 in k7266 in k7236 in k7233 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1069 intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_make_character(44));}

/* k7303 in k7269 in k7266 in k7236 in k7233 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k7272 in k7269 in k7266 in k7236 in k7233 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7277,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(((C_word*)t0)[2],lf[562]);
if(C_truep(t3)){
t4=t2;
f_7277(2,t4,C_SCHEME_UNDEFINED);}
else{
C_trace("c-backend.scm: 1070 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(41));}}

/* k7275 in k7272 in k7269 in k7266 in k7236 in k7233 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7277,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1071 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[561]);}

/* k7278 in k7275 in k7272 in k7269 in k7266 in k7236 in k7233 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
C_trace("c-backend.scm: 1073 gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[557],C_SCHEME_TRUE,lf[558]);}
else{
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 1075 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[559]);}
else{
C_trace("c-backend.scm: 1076 gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[560]);}}}

/* k7245 in k7236 in k7233 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7247,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7250,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 1058 gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[555],C_SCHEME_TRUE);}

/* k7248 in k7245 in k7236 in k7233 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
C_trace("c-backend.scm: 1060 gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[551],C_SCHEME_TRUE,lf[552]);}
else{
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 1062 gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[553]);}
else{
C_trace("c-backend.scm: 1063 gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[554]);}}}

/* k7239 in k7236 in k7233 in k7230 in k7227 in k7224 in k7221 in k7218 in k7215 in k7212 in k7209 in k7206 in k7203 in k7200 in k7197 in k7194 in k7191 in k7188 in k7185 in k7182 in k7179 in k7173 in k7170 in k7167 in g1412 in loop1405 in ##compiler#generate-foreign-stubs in k2595 in k2509 in k2506 */
static void C_ccall f_7241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1077 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(125));}

/* ##compiler#generate-foreign-callback-stub-prototypes in k2595 in k2509 in k2506 */
static void C_ccall f_7111(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7111,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7117,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_7117(t6,t1,t2);}

/* loop1386 in ##compiler#generate-foreign-callback-stub-prototypes in k2595 in k2509 in k2506 */
static void C_fcall f_7117(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7117,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7138,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7129,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 1008 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t5,C_SCHEME_TRUE);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7127 in loop1386 in ##compiler#generate-foreign-callback-stub-prototypes in k2595 in k2509 in k2506 */
static void C_ccall f_7129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7132,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 1009 generate-foreign-callback-header");
((C_proc4)C_retrieve_symbol_proc(lf[549]))(4,*((C_word*)lf[549]+1),t2,lf[550],((C_word*)t0)[2]);}

/* k7130 in k7127 in loop1386 in ##compiler#generate-foreign-callback-stub-prototypes in k2595 in k2509 in k2506 */
static void C_ccall f_7132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 1010 gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(59));}

/* k7136 in loop1386 in ##compiler#generate-foreign-callback-stub-prototypes in k2595 in k2509 in k2506 */
static void C_ccall f_7138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7117(t3,((C_word*)t0)[2],t2);}

/* ##compiler#generate-external-variables in k2595 in k2509 in k2506 */
static void C_ccall f_7057(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7057,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7061,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 993  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE);}

/* k7059 in ##compiler#generate-external-variables in k2595 in k2509 in k2506 */
static void C_ccall f_7061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7061,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7066,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_7066(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop1366 in k7059 in ##compiler#generate-external-variables in k2595 in k2509 in k2506 */
static void C_fcall f_7066(C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7066,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7098,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_i_vector_ref(t4,C_fix(0));
t6=C_i_vector_ref(t4,C_fix(1));
t7=C_i_vector_ref(t4,C_fix(2));
t8=(C_truep(t7)?lf[547]:lf[548]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7095,a[2]=t8,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 999  foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t9,t6,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7093 in loop1366 in k7059 in ##compiler#generate-external-variables in k2595 in k2509 in k2506 */
static void C_ccall f_7095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 999  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,((C_word*)t0)[2],t1,C_make_character(59));}

/* k7096 in loop1366 in k7059 in ##compiler#generate-external-variables in k2595 in k2509 in k2506 */
static void C_ccall f_7098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_7066(t3,((C_word*)t0)[2],t2);}

/* ##compiler#make-argument-list in k2595 in k2509 in k2506 */
static void C_ccall f_7041(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7041,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7047,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 985  list-tabulate");
((C_proc4)C_retrieve_symbol_proc(lf[546]))(4,*((C_word*)lf[546]+1),t1,t2,t4);}

/* a7046 in ##compiler#make-argument-list in k2595 in k2509 in k2506 */
static void C_ccall f_7047(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7047,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7055,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 987  number->string");
C_number_to_string(3,0,t3,t2);}

/* k7053 in a7046 in ##compiler#make-argument-list in k2595 in k2509 in k2506 */
static void C_ccall f_7055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 987  string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##compiler#make-variable-list in k2595 in k2509 in k2506 */
static void C_ccall f_7025(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7025,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7031,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 980  list-tabulate");
((C_proc4)C_retrieve_symbol_proc(lf[546]))(4,*((C_word*)lf[546]+1),t1,t2,t4);}

/* a7030 in ##compiler#make-variable-list in k2595 in k2509 in k2506 */
static void C_ccall f_7031(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7031,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7039,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 982  number->string");
C_number_to_string(3,0,t3,t2);}

/* k7037 in a7030 in ##compiler#make-variable-list in k2595 in k2509 in k2506 */
static void C_ccall f_7039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 982  string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[115]+1)))(5,*((C_word*)lf[115]+1),((C_word*)t0)[3],lf[545],((C_word*)t0)[2],t1);}

/* ##compiler#cleanup in k2595 in k2509 in k2506 */
static void C_ccall f_6936(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_6936,3,t0,t1,t2);}
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_i_string_length(t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6945,a[2]=t7,a[3]=t2,a[4]=t4,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_6945(t9,t1,C_fix(0));}

/* loop in ##compiler#cleanup in k2595 in k2509 in k2506 */
static void C_fcall f_6945(C_word t0,C_word t1,C_word t2){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6945,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[5]))){
t4=((C_word*)((C_word*)t0)[4])[1];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:((C_word*)t0)[3]));}
else{
t4=C_i_string_ref(((C_word*)t0)[3],t2);
t5=C_fixnum_lessp(t4,C_make_character(32));
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6974,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t5)){
t7=t6;
f_6974(t7,t5);}
else{
t7=C_fixnum_greaterp(t4,C_make_character(126));
if(C_truep(t7)){
t8=t6;
f_6974(t8,t7);}
else{
t8=C_eqp(t4,C_make_character(42));
if(C_truep(t8)){
t9=C_fixnum_decrease(((C_word*)t0)[5]);
t10=t2;
if(C_truep(C_fixnum_lessp(t10,t9))){
t11=C_fixnum_increase(t2);
t12=C_i_string_ref(((C_word*)t0)[3],t11);
t13=t6;
f_6974(t13,C_eqp(C_make_character(47),t12));}
else{
t11=t6;
f_6974(t11,C_SCHEME_FALSE);}}
else{
t9=t6;
f_6974(t9,C_SCHEME_FALSE);}}}}}

/* k6972 in loop in ##compiler#cleanup in k2595 in k2509 in k2506 */
static void C_fcall f_6974(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6974,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t2=C_i_string_set(((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[6],C_make_character(126));
t3=C_fixnum_increase(((C_word*)t0)[6]);
C_trace("c-backend.scm: 974  loop");
t4=((C_word*)((C_word*)t0)[5])[1];
f_6945(t4,((C_word*)t0)[4],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6984,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 971  string-copy");
((C_proc3)C_retrieve_symbol_proc(lf[544]))(3,*((C_word*)lf[544]+1),t2,((C_word*)t0)[3]);}}
else{
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t2=C_i_string_set(((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[6],((C_word*)t0)[2]);
t3=C_fixnum_increase(((C_word*)t0)[6]);
C_trace("c-backend.scm: 974  loop");
t4=((C_word*)((C_word*)t0)[5])[1];
f_6945(t4,((C_word*)t0)[4],t3);}
else{
t2=C_fixnum_increase(((C_word*)t0)[6]);
C_trace("c-backend.scm: 974  loop");
t3=((C_word*)((C_word*)t0)[5])[1];
f_6945(t3,((C_word*)t0)[4],t2);}}}

/* k6982 in k6972 in loop in ##compiler#cleanup in k2595 in k2509 in k2506 */
static void C_ccall f_6984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=C_i_string_set(((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[4],C_make_character(126));
t4=C_fixnum_increase(((C_word*)t0)[4]);
C_trace("c-backend.scm: 974  loop");
t5=((C_word*)((C_word*)t0)[3])[1];
f_6945(t5,((C_word*)t0)[2],t4);}

/* emit-procedure-table-info in k2595 in k2509 in k2506 */
static void C_ccall f_6859(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6859,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6863,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=C_i_length(t2);
t6=C_fixnum_increase(t5);
C_trace("c-backend.scm: 936  gen");
((C_proc9)C_retrieve_proc(*((C_word*)lf[1]+1)))(9,*((C_word*)lf[1]+1),t4,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[541],C_SCHEME_TRUE,lf[542],t6,lf[543]);}

/* k6861 in emit-procedure-table-info in k2595 in k2509 in k2506 */
static void C_ccall f_6863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6866,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6877,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_6877(t6,t2,((C_word*)t0)[2]);}

/* doloop1308 in k6861 in emit-procedure-table-info in k2595 in k2509 in k2506 */
static void C_fcall f_6877(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6877,NULL,3,t0,t1,t2);}
if(C_truep(C_i_nullp(t2))){
C_trace("c-backend.scm: 940  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t1,C_SCHEME_TRUE,lf[533]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6890,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_i_car(t2);
C_trace("c-backend.scm: 941  lambda-literal-id");
((C_proc3)C_retrieve_symbol_proc(lf[10]))(3,*((C_word*)lf[10]+1),t3,t4);}}

/* k6888 in doloop1308 in k6861 in emit-procedure-table-info in k2595 in k2509 in k2506 */
static void C_ccall f_6890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6890,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6893,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6922,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 942  string->c-identifier");
((C_proc3)C_retrieve_symbol_proc(lf[540]))(3,*((C_word*)lf[540]+1),t3,((C_word*)t0)[2]);}

/* k6920 in k6888 in doloop1308 in k6861 in emit-procedure-table-info in k2595 in k2509 in k2506 */
static void C_ccall f_6922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 942  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[538],((C_word*)t0)[2],C_make_character(58),t1,lf[539]);}

/* k6891 in k6888 in doloop1308 in k6861 in emit-procedure-table-info in k2595 in k2509 in k2506 */
static void C_ccall f_6893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6893,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6896,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=C_eqp(lf[262],((C_word*)t0)[2]);
if(C_truep(t3)){
if(C_truep(C_retrieve(lf[213]))){
C_trace("c-backend.scm: 945  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,lf[534],C_retrieve(lf[213]),lf[535]);}
else{
C_trace("c-backend.scm: 946  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[536]);}}
else{
C_trace("c-backend.scm: 947  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,((C_word*)t0)[2],lf[537]);}}

/* k6894 in k6891 in k6888 in doloop1308 in k6861 in emit-procedure-table-info in k2595 in k2509 in k2506 */
static void C_ccall f_6896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_6877(t3,((C_word*)t0)[2],t2);}

/* k6864 in k6861 in emit-procedure-table-info in k2595 in k2509 in k2506 */
static void C_ccall f_6866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6869,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 948  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[532]);}

/* k6867 in k6864 in k6861 in emit-procedure-table-info in k2595 in k2509 in k2506 */
static void C_ccall f_6869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6869,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6872,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 949  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[531]);}

/* k6870 in k6867 in k6864 in k6861 in emit-procedure-table-info in k2595 in k2509 in k2506 */
static void C_ccall f_6872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 950  gen");
((C_proc15)C_retrieve_proc(*((C_word*)lf[1]+1)))(15,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[524],C_SCHEME_TRUE,lf[525],C_SCHEME_TRUE,lf[526],C_SCHEME_TRUE,lf[527],C_SCHEME_TRUE,lf[528],C_SCHEME_TRUE,lf[529],C_SCHEME_TRUE,lf[530]);}

/* ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2599(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
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
C_word ab[78],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_2599,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
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
t33=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2602,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t34=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2644,a[2]=t10,tmp=(C_word)a,a+=3,tmp));
t35=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4525,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t36=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4694,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t37=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4865,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t38=C_set_block_item(t20,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5205,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t39=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5525,a[2]=t2,a[3]=t26,tmp=(C_word)a,a+=4,tmp));
t40=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5580,a[2]=t24,tmp=(C_word)a,a+=3,tmp));
t41=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5774,a[2]=t28,tmp=(C_word)a,a+=3,tmp));
t42=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5916,a[2]=t30,tmp=(C_word)a,a+=3,tmp));
t43=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5993,tmp=(C_word)a,a+=2,tmp));
t44=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6041,a[2]=t4,a[3]=t8,a[4]=t24,a[5]=t22,a[6]=t2,a[7]=t12,tmp=(C_word)a,a+=8,tmp));
t45=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6826,a[2]=t14,a[3]=t16,a[4]=t18,a[5]=t8,a[6]=t20,a[7]=t32,a[8]=t6,a[9]=t4,a[10]=t1,a[11]=t5,tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 919  debugging");
((C_proc4)C_retrieve_symbol_proc(lf[506]))(4,*((C_word*)lf[506]+1),t45,lf[522],lf[523]);}

/* k6824 in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6826,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! output ...) */,((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6830,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 921  header");
t4=((C_word*)((C_word*)t0)[2])[1];
f_4525(t4,t3);}

/* k6828 in k6824 in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6830,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6833,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 922  declarations");
t3=((C_word*)((C_word*)t0)[2])[1];
f_4694(t3,t2);}

/* k6831 in k6828 in k6824 in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6833,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6836,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 923  generate-external-variables");
((C_proc3)C_retrieve_symbol_proc(lf[520]))(3,*((C_word*)lf[520]+1),t2,C_retrieve(lf[521]));}

/* k6834 in k6831 in k6828 in k6824 in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6836,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6839,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 924  generate-foreign-stubs");
((C_proc4)C_retrieve_symbol_proc(lf[518]))(4,*((C_word*)lf[518]+1),t2,C_retrieve(lf[519]),((C_word*)t0)[3]);}

/* k6837 in k6834 in k6831 in k6828 in k6824 in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6839,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6842,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 925  prototypes");
t3=((C_word*)((C_word*)t0)[2])[1];
f_4865(t3,t2);}

/* k6840 in k6837 in k6834 in k6831 in k6828 in k6824 in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6842,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6845,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 926  generate-foreign-callback-stubs");
((C_proc4)C_retrieve_symbol_proc(lf[517]))(4,*((C_word*)lf[517]+1),t2,C_retrieve(lf[207]),((C_word*)t0)[2]);}

/* k6843 in k6840 in k6837 in k6834 in k6831 in k6828 in k6824 in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6845,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6848,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 927  trampolines");
t3=((C_word*)((C_word*)t0)[2])[1];
f_5205(t3,t2);}

/* k6846 in k6843 in k6840 in k6837 in k6834 in k6831 in k6828 in k6824 in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6848,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6851,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 928  procedures");
t3=((C_word*)((C_word*)t0)[2])[1];
f_6041(t3,t2);}

/* k6849 in k6846 in k6843 in k6840 in k6837 in k6834 in k6831 in k6828 in k6824 in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6851,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6854,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 929  emit-procedure-table-info");
((C_proc4)C_retrieve_symbol_proc(lf[516]))(4,*((C_word*)lf[516]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6852 in k6849 in k6846 in k6843 in k6840 in k6837 in k6834 in k6831 in k6828 in k6824 in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[2];
C_trace("c-backend.scm: 488  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[515],C_SCHEME_TRUE);}

/* procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_6041(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6041,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6047,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_6047(t5,t1,((C_word*)t0)[2]);}

/* loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_6047(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6047,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6055,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6812,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t2,C_fix(0));
C_trace("g10271028");
t6=t3;
f_6055(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6810 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6047(t3,((C_word*)t0)[2],t2);}

/* g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_6055(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6055,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 738  lambda-literal-argument-count");
((C_proc3)C_retrieve_symbol_proc(lf[289]))(3,*((C_word*)lf[289]+1),t3,t2);}

/* k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6062,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 739  lambda-literal-id");
((C_proc3)C_retrieve_symbol_proc(lf[10]))(3,*((C_word*)lf[10]+1),t2,((C_word*)t0)[6]);}

/* k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6062,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6065,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 740  real-name");
((C_proc4)C_retrieve_symbol_proc(lf[514]))(4,*((C_word*)lf[514]+1),t2,t1,((C_word*)t0)[2]);}

/* k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6065,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6068,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 741  lambda-literal-allocated");
((C_proc3)C_retrieve_symbol_proc(lf[282]))(3,*((C_word*)lf[282]+1),t2,((C_word*)t0)[6]);}

/* k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6068,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 742  lambda-literal-rest-argument");
((C_proc3)C_retrieve_symbol_proc(lf[285]))(3,*((C_word*)lf[285]+1),t2,((C_word*)t0)[7]);}

/* k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6071,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6074,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t3,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
C_trace("c-backend.scm: 743  lambda-literal-customizable");
((C_proc3)C_retrieve_symbol_proc(lf[288]))(3,*((C_word*)lf[288]+1),t4,((C_word*)t0)[8]);}

/* k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6074,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6077,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6809,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 744  lambda-literal-closure-size");
((C_proc3)C_retrieve_symbol_proc(lf[148]))(3,*((C_word*)lf[148]+1),t3,((C_word*)t0)[8]);}
else{
t3=t2;
f_6077(t3,C_SCHEME_FALSE);}}

/* k6807 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6077(t2,C_eqp(t1,C_fix(0)));}

/* k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_6077(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6077,NULL,2,t0,t1);}
t2=(C_truep(t1)?C_fixnum_difference(((C_word*)t0)[13],C_fix(1)):C_a_i_minus(&a,2,((C_word*)t0)[13],C_fix(0)));
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6083,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t2,a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[11],a[15]=((C_word*)t0)[12],tmp=(C_word)a,a+=16,tmp);
C_trace("c-backend.scm: 746  make-variable-list");
((C_proc4)C_retrieve_symbol_proc(lf[286]))(4,*((C_word*)lf[286]+1),t3,((C_word*)t0)[13],lf[513]);}

/* k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6083,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6086,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
C_trace("c-backend.scm: 747  make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[296]))(4,*((C_word*)lf[296]+1),t2,((C_word*)t0)[13],lf[512]);}

/* k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6086,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6089,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=C_i_cdr(((C_word*)t0)[2]);
C_trace("c-backend.scm: 748  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),t2,t3,C_make_character(44));}
else{
t3=((C_word*)t0)[2];
C_trace("c-backend.scm: 748  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),t2,t3,C_make_character(44));}}

/* k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6089,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_6092,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t1,a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=C_i_cdr(((C_word*)t0)[2]);
C_trace("c-backend.scm: 749  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),t2,t3,C_make_character(44));}
else{
t3=((C_word*)t0)[2];
C_trace("c-backend.scm: 749  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),t2,t3,C_make_character(44));}}

/* k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6092,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_6095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
C_trace("c-backend.scm: 750  lambda-literal-external");
((C_proc3)C_retrieve_symbol_proc(lf[337]))(3,*((C_word*)lf[337]+1),t2,((C_word*)t0)[12]);}

/* k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_6098,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],tmp=(C_word)a,a+=19,tmp);
C_trace("c-backend.scm: 751  lambda-literal-looping");
((C_proc3)C_retrieve_symbol_proc(lf[108]))(3,*((C_word*)lf[108]+1),t2,((C_word*)t0)[13]);}

/* k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_6101,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
C_trace("c-backend.scm: 752  lambda-literal-direct");
((C_proc3)C_retrieve_symbol_proc(lf[283]))(3,*((C_word*)lf[283]+1),t2,((C_word*)t0)[14]);}

/* k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_6104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],tmp=(C_word)a,a+=21,tmp);
C_trace("c-backend.scm: 753  lambda-literal-rest-argument-mode");
((C_proc3)C_retrieve_symbol_proc(lf[284]))(3,*((C_word*)lf[284]+1),t2,((C_word*)t0)[15]);}

/* k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6104,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_6107,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],tmp=(C_word)a,a+=22,tmp);
C_trace("c-backend.scm: 754  lambda-literal-temporaries");
((C_proc3)C_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),t2,((C_word*)t0)[16]);}

/* k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6107,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_6110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t1,a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
C_trace("c-backend.scm: 755  lambda-literal-unboxed-temporaries");
((C_proc3)C_retrieve_symbol_proc(lf[511]))(3,*((C_word*)lf[511]+1),t2,((C_word*)t0)[17]);}

/* k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6110,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6113,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
if(C_truep(C_retrieve(lf[213]))){
C_trace("c-backend.scm: 757  string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),t2,C_retrieve(lf[213]),lf[509]);}
else{
t3=t2;
f_6113(2,t3,lf[510]);}}

/* k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_6116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],tmp=(C_word)a,a+=25,tmp);
if(C_truep(((C_word*)t0)[6])){
C_trace("c-backend.scm: 759  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[506]))(5,*((C_word*)lf[506]+1),t2,lf[507],lf[508],((C_word*)t0)[15]);}
else{
t3=t2;
f_6116(2,t3,C_SCHEME_UNDEFINED);}}

/* k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6116,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_6119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
C_trace("c-backend.scm: 760  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,C_SCHEME_TRUE);}

/* k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6119,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6122,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],tmp=(C_word)a,a+=24,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6778,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 761  cleanup");
((C_proc3)C_retrieve_symbol_proc(lf[505]))(3,*((C_word*)lf[505]+1),t3,((C_word*)t0)[2]);}

/* k6776 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 761  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[503],t1,lf[504],C_SCHEME_TRUE);}

/* k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6122,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t3=C_eqp(lf[262],((C_word*)t0)[15]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6761,a[2]=((C_word*)t0)[7],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 770  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t4,lf[497]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6739,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[15],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 763  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t4,lf[502]);}}

/* k6737 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6739,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6742,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 764  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[500]);}
else{
C_trace("c-backend.scm: 764  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[501]);}}

/* k6740 in k6737 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6742,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6745,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 766  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[498]);}
else{
C_trace("c-backend.scm: 767  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[499]);}}

/* k6743 in k6740 in k6737 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 768  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6759 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6761,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6764,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[213]))){
t3=t2;
f_6764(2,t3,C_SCHEME_UNDEFINED);}
else{
C_trace("c-backend.scm: 772  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[496]);}}

/* k6762 in k6759 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 773  gen");
((C_proc16)C_retrieve_proc(*((C_word*)lf[1]+1)))(16,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[490],C_SCHEME_TRUE,lf[491],C_SCHEME_TRUE,lf[492],C_SCHEME_TRUE,lf[493],((C_word*)t0)[2],lf[494],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[495],((C_word*)t0)[2]);}

/* k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6125,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6128,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
C_trace("c-backend.scm: 778  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(40));}

/* k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6128,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)t0)[12])){
t3=t2;
f_6131(2,t3,C_SCHEME_UNDEFINED);}
else{
C_trace("c-backend.scm: 779  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[489]);}}

/* k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6131,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6134,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6711,a[2]=t2,a[3]=((C_word*)t0)[16],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[11])){
t4=C_eqp(((C_word*)t0)[18],C_fix(0));
t5=t3;
f_6711(t5,C_i_not(t4));}
else{
t4=t3;
f_6711(t4,C_SCHEME_FALSE);}}

/* k6709 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_6711(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6711,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 781  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[488]);}
else{
t2=((C_word*)t0)[2];
f_6134(2,t2,C_SCHEME_UNDEFINED);}}

/* k6712 in k6709 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
C_trace("c-backend.scm: 782  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(44));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_6134(2,t3,t2);}}

/* k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[16]);}

/* k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6137,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)((C_word*)t0)[22])[1])){
C_trace("c-backend.scm: 784  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[487]);}
else{
t3=t2;
f_6140(2,t3,C_SCHEME_UNDEFINED);}}

/* k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
C_trace("c-backend.scm: 785  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[486]);}

/* k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6143,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
t3=C_eqp(((C_word*)t0)[3],lf[251]);
if(C_truep(t3)){
t4=C_set_block_item(((C_word*)t0)[22],0,C_SCHEME_FALSE);
t5=t2;
f_6146(t5,t4);}
else{
t4=t2;
f_6146(t4,C_SCHEME_UNDEFINED);}}

/* k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_6146(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6146,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_6149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
C_trace("c-backend.scm: 787  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[485]);}

/* k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6149,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_6152,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],tmp=(C_word)a,a+=23,tmp);
if(C_truep(((C_word*)((C_word*)t0)[22])[1])){
C_trace("c-backend.scm: 789  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[474],((C_word*)t0)[21],C_make_character(59));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6624,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6671,a[2]=((C_word*)t0)[21],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
t5=C_fixnum_decrease(((C_word*)t0)[21]);
t6=t4;
f_6671(t6,C_fixnum_plus(((C_word*)t0)[17],t5));}
else{
t5=t4;
f_6671(t5,((C_word*)t0)[17]);}}}

/* k6669 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_6671(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6671,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6673,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_6673(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* doloop1080 in k6669 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_6673(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6673,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6683,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 794  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t5,C_SCHEME_TRUE,lf[484],t2,C_make_character(59));}}

/* k6681 in doloop1080 in k6669 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_increase(((C_word*)t0)[5]);
t3=C_fixnum_decrease(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_6673(t4,((C_word*)t0)[2],t2,t3);}

/* k6622 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6624,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6629,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_6629(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop1090 in k6622 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_6629(C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6629,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6656,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6645,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_i_cdr(t4);
t7=C_eqp(t6,lf[475]);
if(C_truep(t7)){
t8=C_i_car(t4);
C_trace("c-backend.scm: 797  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[476],C_make_character(32),t8,C_make_character(59));}
else{
t8=C_eqp(t6,lf[477]);
if(C_truep(t8)){
t9=C_i_car(t4);
C_trace("c-backend.scm: 797  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[478],C_make_character(32),t9,C_make_character(59));}
else{
t9=C_eqp(t6,lf[16]);
if(C_truep(t9)){
t10=C_i_car(t4);
C_trace("c-backend.scm: 797  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[479],C_make_character(32),t10,C_make_character(59));}
else{
t10=C_eqp(t6,lf[480]);
if(C_truep(t10)){
t11=C_i_car(t4);
C_trace("c-backend.scm: 797  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[481],C_make_character(32),t11,C_make_character(59));}
else{
t11=C_eqp(t6,lf[13]);
if(C_truep(t11)){
t12=C_i_car(t4);
C_trace("c-backend.scm: 797  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[482],C_make_character(32),t12,C_make_character(59));}
else{
C_trace("c-backend.scm: 733  bomb");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t5,lf[483],t6);}}}}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6643 in loop1090 in k6622 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[3]);
C_trace("c-backend.scm: 797  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,t1,C_make_character(32),t2,C_make_character(59));}

/* k6654 in loop1090 in k6622 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_6629(t3,((C_word*)t0)[2],t2);}

/* k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
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
C_word t11;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6152,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6155,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[14],a[8]=((C_word*)t0)[15],a[9]=((C_word*)t0)[16],a[10]=((C_word*)t0)[17],a[11]=((C_word*)t0)[18],a[12]=((C_word*)t0)[19],a[13]=((C_word*)t0)[20],a[14]=((C_word*)t0)[21],a[15]=((C_word*)t0)[22],tmp=(C_word)a,a+=16,tmp);
t3=C_eqp(lf[262],((C_word*)t0)[14]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6342,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[17],a[4]=((C_word*)t0)[7],a[5]=t2,a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6417,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 800  fold");
((C_proc5)C_retrieve_symbol_proc(lf[441]))(5,*((C_word*)lf[441]+1),t4,t5,C_fix(0),((C_word*)t0)[8]);}
else{
if(C_truep(((C_word*)((C_word*)t0)[21])[1])){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6431,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[17],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 834  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t4,C_SCHEME_TRUE,lf[455]);}
else{
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6495,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[20],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=t2,a[8]=((C_word*)t0)[17],a[9]=((C_word*)t0)[3],tmp=(C_word)a,a+=10,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6573,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[17],a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t6=((C_word*)t0)[10];
if(C_truep(t6)){
t7=t5;
f_6573(t7,C_SCHEME_FALSE);}
else{
t7=((C_word*)t0)[17];
t8=t5;
f_6573(t8,C_fixnum_greaterp(t7,C_fix(0)));}}}}

/* k6571 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_6573(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6573,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[5])){
C_trace("c-backend.scm: 848  gen");
((C_proc10)C_retrieve_proc(*((C_word*)lf[1]+1)))(10,*((C_word*)lf[1]+1),((C_word*)t0)[4],C_SCHEME_TRUE,lf[465],C_SCHEME_TRUE,lf[466],C_SCHEME_TRUE,lf[467],((C_word*)t0)[3],lf[468]);}
else{
C_trace("c-backend.scm: 851  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[4],C_SCHEME_TRUE,lf[469],((C_word*)t0)[3],lf[470]);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6585,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_6585(2,t3,C_SCHEME_UNDEFINED);}
else{
C_trace("c-backend.scm: 853  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[473]);}}}

/* k6583 in k6571 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6585,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6588,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 854  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[472]);}
else{
t3=t2;
f_6588(2,t3,C_SCHEME_UNDEFINED);}}

/* k6586 in k6583 in k6571 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(((C_word*)t0)[3])){
t2=C_retrieve(lf[131]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
f_6495(2,t4,t3);}
else{
t3=C_retrieve(lf[435]);
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[2];
f_6495(2,t5,t4);}
else{
C_trace("c-backend.scm: 858  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[471]);}}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_6495(2,t3,t2);}}

/* k6493 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6495,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6498,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6537,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=C_retrieve(lf[131]);
if(C_truep(t4)){
t5=t3;
f_6537(t5,C_SCHEME_FALSE);}
else{
t5=C_retrieve(lf[449]);
t6=t3;
f_6537(t6,(C_truep(t5)?C_SCHEME_FALSE:C_i_not(((C_word*)t0)[2])));}}
else{
t4=t3;
f_6537(t4,C_SCHEME_FALSE);}}

/* k6535 in k6493 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_6537(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=C_eqp(((C_word*)t0)[4],lf[251]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
if(C_truep(C_fixnum_greaterp(t3,C_fix(2)))){
C_trace("c-backend.scm: 862  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[459],((C_word*)t0)[3],lf[460],((C_word*)t0)[3],lf[461]);}
else{
t4=((C_word*)t0)[2];
f_6498(2,t4,C_SCHEME_UNDEFINED);}}
else{
C_trace("c-backend.scm: 863  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[462],((C_word*)t0)[3],lf[463],((C_word*)t0)[3],lf[464]);}}
else{
t2=((C_word*)t0)[2];
f_6498(2,t2,C_SCHEME_UNDEFINED);}}

/* k6496 in k6493 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6504,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[3];
if(C_truep(t3)){
t4=t2;
f_6504(t4,C_SCHEME_FALSE);}
else{
if(C_truep(((C_word*)t0)[2])){
t4=((C_word*)t0)[2];
t5=t2;
f_6504(t5,t4);}
else{
t4=((C_word*)t0)[5];
t5=t2;
f_6504(t5,C_fixnum_greaterp(t4,C_fix(0)));}}}

/* k6502 in k6496 in k6493 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_6504(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6504,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6507,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[444]))){
C_trace("c-backend.scm: 865  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[458]);}
else{
t3=t2;
f_6507(2,t3,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[2];
f_6155(2,t2,C_SCHEME_UNDEFINED);}}

/* k6505 in k6502 in k6496 in k6493 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
t2=((C_word*)t0)[3];
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
C_trace("c-backend.scm: 867  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[456]);}
else{
C_trace("c-backend.scm: 868  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[457]);}}
else{
C_trace("c-backend.scm: 868  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[457]);}}

/* k6429 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 835  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[454]);}

/* k6432 in k6429 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6434,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6437,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 836  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[453]);}

/* k6435 in k6432 in k6429 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)t0)[3];
if(C_truep(C_fixnum_greaterp(t3,C_fix(0)))){
t4=C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
C_trace("c-backend.scm: 838  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_make_character(116),t4);}
else{
C_trace("c-backend.scm: 839  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[452]);}}

/* k6438 in k6435 in k6432 in k6429 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 840  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,lf[450],((C_word*)t0)[3],lf[451]);}

/* k6441 in k6438 in k6435 in k6432 in k6429 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6443(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6443,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6446,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6458,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=C_retrieve(lf[131]);
if(C_truep(t4)){
t5=t3;
f_6458(t5,C_SCHEME_FALSE);}
else{
t5=C_retrieve(lf[449]);
if(C_truep(t5)){
t6=t3;
f_6458(t6,C_SCHEME_FALSE);}
else{
t6=((C_word*)t0)[3];
t7=C_fixnum_greaterp(t6,C_fix(2));
t8=t3;
f_6458(t8,(C_truep(t7)?C_i_not(((C_word*)t0)[2]):C_SCHEME_FALSE));}}}

/* k6456 in k6441 in k6438 in k6435 in k6432 in k6429 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_6458(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("c-backend.scm: 842  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[446],((C_word*)t0)[2],lf[447],((C_word*)t0)[2],lf[448]);}
else{
t2=((C_word*)t0)[3];
f_6446(2,t2,C_SCHEME_UNDEFINED);}}

/* k6444 in k6441 in k6438 in k6435 in k6432 in k6429 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[444]))){
C_trace("c-backend.scm: 843  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[445]);}
else{
C_trace("c-backend.scm: 844  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[442],((C_word*)t0)[2],lf[443]);}}

/* k6447 in k6444 in k6441 in k6438 in k6435 in k6432 in k6429 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 844  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[442],((C_word*)t0)[2],lf[443]);}

/* a6416 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6417,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6425,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 800  literal-size");
t5=((C_word*)((C_word*)t0)[2])[1];
f_5580(t5,t4,t2);}

/* k6423 in a6416 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_plus(((C_word*)t0)[2],t1));}

/* k6340 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6342,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6348,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 802  gen");
((C_proc10)C_retrieve_proc(*((C_word*)lf[1]+1)))(10,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[437],C_SCHEME_TRUE,lf[438],C_SCHEME_TRUE,lf[439],((C_word*)t0)[2],lf[440]);}

/* k6346 in k6340 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve(lf[435]))){
C_trace("c-backend.scm: 806  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[436]);}
else{
t3=t2;
f_6351(2,t3,C_SCHEME_UNDEFINED);}}

/* k6349 in k6346 in k6340 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(C_retrieve(lf[213]))){
t3=t2;
f_6354(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6385,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[428]))){
C_trace("c-backend.scm: 809  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[429],C_retrieve(lf[428]),lf[430]);}
else{
if(C_truep(C_retrieve(lf[431]))){
C_trace("c-backend.scm: 811  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[432],C_retrieve(lf[431]),lf[433],C_SCHEME_TRUE,lf[434]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t3;
f_6385(2,t5,t4);}}}}

/* k6383 in k6349 in k6346 in k6340 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6385,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6388,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[426]))){
C_trace("c-backend.scm: 814  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[427],C_retrieve(lf[426]),C_make_character(59));}
else{
t3=t2;
f_6388(2,t3,C_SCHEME_UNDEFINED);}}

/* k6386 in k6383 in k6349 in k6346 in k6340 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6391,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[424]))){
C_trace("c-backend.scm: 816  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[425],C_retrieve(lf[424]),C_make_character(59));}
else{
t3=t2;
f_6391(2,t3,C_SCHEME_UNDEFINED);}}

/* k6389 in k6386 in k6383 in k6349 in k6346 in k6340 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_retrieve(lf[421]))){
C_trace("c-backend.scm: 818  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[422],C_retrieve(lf[421]),lf[423]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_6354(2,t3,t2);}}

/* k6352 in k6349 in k6346 in k6340 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 819  gen");
((C_proc16)C_retrieve_proc(*((C_word*)lf[1]+1)))(16,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[414],((C_word*)t0)[3],lf[415],C_SCHEME_TRUE,lf[416],((C_word*)t0)[3],lf[417],C_SCHEME_TRUE,lf[418],C_SCHEME_TRUE,lf[419],C_SCHEME_TRUE,lf[420]);}

/* k6355 in k6352 in k6349 in k6346 in k6340 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6360,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 824  gen");
((C_proc14)C_retrieve_proc(*((C_word*)lf[1]+1)))(14,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[408],((C_word*)t0)[2],lf[409],C_SCHEME_TRUE,lf[410],C_SCHEME_TRUE,lf[411],((C_word*)t0)[2],lf[412],C_SCHEME_TRUE,lf[413]);}

/* k6358 in k6355 in k6352 in k6349 in k6346 in k6340 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6363,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 828  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[406],((C_word*)t0)[2],lf[407]);}

/* k6361 in k6358 in k6355 in k6352 in k6349 in k6346 in k6340 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6363,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[4],C_fix(0));
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_6155(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 830  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[404],((C_word*)t0)[4],lf[405]);}}

/* k6370 in k6361 in k6358 in k6355 in k6352 in k6349 in k6346 in k6340 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6372,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6375,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 831  literal-frame");
t3=((C_word*)((C_word*)t0)[2])[1];
f_5525(t3,t2);}

/* k6373 in k6370 in k6361 in k6358 in k6355 in k6352 in k6349 in k6346 in k6340 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 832  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[402],((C_word*)t0)[2],lf[403]);}

/* k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6155,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6158,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[14],a[6]=((C_word*)t0)[15],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6178,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[13],a[9]=t2,a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[14],tmp=(C_word)a,a+=12,tmp);
t4=C_eqp(lf[262],((C_word*)t0)[7]);
if(C_truep(t4)){
t5=t3;
f_6178(t5,C_SCHEME_FALSE);}
else{
t5=((C_word*)t0)[3];
if(C_truep(t5)){
t6=t3;
f_6178(t6,C_SCHEME_FALSE);}
else{
t6=((C_word*)((C_word*)t0)[14])[1];
if(C_truep(t6)){
t7=t3;
f_6178(t7,t6);}
else{
if(C_truep(((C_word*)t0)[2])){
t7=((C_word*)t0)[2];
t8=t3;
f_6178(t8,t7);}
else{
t7=((C_word*)t0)[10];
t8=t3;
f_6178(t8,C_fixnum_greaterp(t7,C_fix(0)));}}}}}

/* k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_6178(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6178,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[11])[1])){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6184,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[4],C_fix(0)))){
C_trace("c-backend.scm: 879  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[393],lf[394],((C_word*)t0)[8],C_make_character(114));}
else{
C_trace("c-backend.scm: 879  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[395],lf[394],((C_word*)t0)[8],C_make_character(114));}}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6283,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[4],C_fix(0)))){
C_trace("c-backend.scm: 902  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[399],lf[400]);}
else{
C_trace("c-backend.scm: 902  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[401],lf[400]);}}}
else{
t2=((C_word*)t0)[9];
f_6158(2,t2,C_SCHEME_UNDEFINED);}}

/* k6281 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6283,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6286,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
C_trace("c-backend.scm: 904  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,((C_word*)t0)[3],lf[397]);}
else{
C_trace("c-backend.scm: 905  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,((C_word*)t0)[2],lf[398],((C_word*)t0)[3]);}}

/* k6284 in k6281 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6286,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6289,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[3],C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6298,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 907  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t3,C_make_character(44),((C_word*)t0)[3],C_make_character(44));}
else{
C_trace("c-backend.scm: 909  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[4],lf[396]);}}

/* k6296 in k6284 in k6281 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k6287 in k6284 in k6281 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 909  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[396]);}

/* k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6184,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 880  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,lf[391],((C_word*)t0)[4],lf[392]);}

/* k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6187(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6187,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6190,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_fixnum_greaterp(((C_word*)t0)[3],C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6270,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 882  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t3,C_make_character(44),((C_word*)t0)[3],C_make_character(44));}
else{
t3=t2;
f_6190(2,t3,C_SCHEME_UNDEFINED);}}

/* k6268 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k6188 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 884  gen");
((C_proc9)C_retrieve_proc(*((C_word*)lf[1]+1)))(9,*((C_word*)lf[1]+1),t2,lf[387],C_SCHEME_TRUE,lf[388],C_SCHEME_TRUE,lf[389],((C_word*)t0)[5],lf[390]);}

/* k6191 in k6188 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 887  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[385],((C_word*)t0)[5],lf[386]);}

/* k6194 in k6191 in k6188 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6196,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 888  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,((C_word*)t0)[2],lf[384]);}

/* k6197 in k6194 in k6191 in k6188 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6202,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6260,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6264,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 889  make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[296]))(4,*((C_word*)lf[296]+1),t4,((C_word*)t0)[5],lf[383]);}

/* k6262 in k6197 in k6194 in k6191 in k6188 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 889  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_make_character(44));}

/* k6258 in k6197 in k6194 in k6191 in k6188 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k6200 in k6197 in k6194 in k6191 in k6188 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6205,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 890  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,lf[381],((C_word*)t0)[5],lf[382]);}

/* k6203 in k6200 in k6197 in k6194 in k6191 in k6188 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6205,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6208,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 892  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[379],((C_word*)t0)[2],lf[380]);}

/* k6206 in k6203 in k6200 in k6197 in k6194 in k6191 in k6188 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6211,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k6209 in k6206 in k6203 in k6200 in k6197 in k6194 in k6191 in k6188 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6211,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6214,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 894  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,lf[377],((C_word*)t0)[3],lf[378]);}

/* k6212 in k6209 in k6206 in k6203 in k6200 in k6197 in k6194 in k6191 in k6188 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6214,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6217,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 895  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[376]);}

/* k6215 in k6212 in k6209 in k6206 in k6203 in k6200 in k6197 in k6194 in k6191 in k6188 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6220,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6235,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_6235(t7,t2,t3,((C_word*)t0)[2]);}

/* doloop1230 in k6215 in k6212 in k6209 in k6206 in k6203 in k6200 in k6197 in k6194 in k6191 in k6188 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_6235(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6235,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6245,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 899  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t5,C_SCHEME_TRUE,lf[375],t2,C_make_character(59));}}

/* k6243 in doloop1230 in k6215 in k6212 in k6209 in k6206 in k6203 in k6200 in k6197 in k6194 in k6191 in k6188 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_6235(t4,((C_word*)t0)[2],t2,t3);}

/* k6218 in k6215 in k6212 in k6209 in k6206 in k6203 in k6200 in k6197 in k6194 in k6191 in k6188 in k6185 in k6182 in k6176 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)t0)[3];
if(C_truep(C_fixnum_greaterp(t2,C_fix(0)))){
C_trace("c-backend.scm: 900  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[373],((C_word*)t0)[3],lf[374]);}
else{
t3=((C_word*)t0)[2];
f_6158(2,t3,C_SCHEME_UNDEFINED);}}

/* k6156 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6158,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6161,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6168,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 911  lambda-literal-body");
((C_proc3)C_retrieve_symbol_proc(lf[372]))(3,*((C_word*)lf[372]+1),t3,((C_word*)t0)[2]);}

/* k6166 in k6156 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t2=C_fixnum_increase(((C_word*)t0)[5]);
C_trace("c-backend.scm: 910  expression");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2644(t3,((C_word*)t0)[3],t1,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
C_trace("c-backend.scm: 910  expression");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2644(t3,((C_word*)t0)[3],t1,t2,((C_word*)t0)[2]);}}

/* k6159 in k6156 in k6153 in k6150 in k6147 in k6144 in k6141 in k6138 in k6135 in k6132 in k6129 in k6126 in k6123 in k6120 in k6117 in k6114 in k6111 in k6108 in k6105 in k6102 in k6099 in k6096 in k6093 in k6090 in k6087 in k6084 in k6081 in k6075 in k6072 in k6069 in k6066 in k6063 in k6060 in k6057 in g1027 in loop1020 in procedures in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 916  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(125));}

/* string-like-substring in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5993(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5993,NULL,4,t1,t2,t3,t4);}
t5=C_fixnum_difference(t4,t3);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6000,a[2]=t5,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 722  make-string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[371]+1)))(3,*((C_word*)lf[371]+1),t6,t5);}

/* k5998 in string-like-substring in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6000,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6003,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 723  ##sys#copy-bytes");
((C_proc7)C_retrieve_symbol_proc(lf[370]))(7,*((C_word*)lf[370]+1),t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k6001 in k5998 in string-like-substring in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_6003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* gen-string-constant in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5916(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5916,NULL,3,t0,t1,t2);}
t3=C_block_size(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5923,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 711  fx/");
((C_proc4)C_retrieve_proc(*((C_word*)lf[369]+1)))(4,*((C_word*)lf[369]+1),t4,t3,C_fix(80));}

/* k5921 in gen-string-constant in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5923,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5926,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 712  modulo");
((C_proc4)C_retrieve_proc(*((C_word*)lf[368]+1)))(4,*((C_word*)lf[368]+1),t2,((C_word*)t0)[5],C_fix(80));}

/* k5924 in k5921 in gen-string-constant in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5926,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5931,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_5931(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}

/* doloop990 in k5924 in k5921 in gen-string-constant in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5931(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5931,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=C_eqp(((C_word*)t0)[6],C_fix(0));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5947,a[2]=((C_word*)t0)[6],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_5947(t7,t5);}
else{
t7=C_eqp(((C_word*)t0)[3],C_fix(0));
t8=t6;
f_5947(t8,C_i_not(t7));}}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5968,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5983,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5987,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=C_fixnum_plus(t3,C_fix(80));
C_trace("c-backend.scm: 718  string-like-substring");
f_5993(t7,((C_word*)t0)[4],t3,t8);}}

/* k5985 in doloop990 in k5924 in k5921 in gen-string-constant in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 718  c-ify-string");
((C_proc3)C_retrieve_symbol_proc(lf[72]))(3,*((C_word*)lf[72]+1),((C_word*)t0)[2],t1);}

/* k5981 in doloop990 in k5924 in k5921 in gen-string-constant in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 718  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],t1,C_SCHEME_TRUE);}

/* k5966 in doloop990 in k5924 in k5921 in gen-string-constant in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_decrease(((C_word*)t0)[5]);
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(80));
t4=((C_word*)((C_word*)t0)[3])[1];
f_5931(t4,((C_word*)t0)[2],t2,t3);}

/* k5945 in doloop990 in k5924 in k5921 in gen-string-constant in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5947(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5947,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5954,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5958,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 717  string-like-substring");
f_5993(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k5956 in k5945 in doloop990 in k5924 in k5921 in gen-string-constant in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 717  c-ify-string");
((C_proc3)C_retrieve_symbol_proc(lf[72]))(3,*((C_word*)lf[72]+1),((C_word*)t0)[2],t1);}

/* k5952 in k5945 in doloop990 in k5924 in k5921 in gen-string-constant in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 717  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],t1);}

/* gen-lit in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5774(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5774,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5781,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_fixnump(t2))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5914,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 684  big-fixnum?");
((C_proc3)C_retrieve_symbol_proc(lf[367]))(3,*((C_word*)lf[367]+1),t5,t2);}
else{
t5=t4;
f_5781(t5,C_SCHEME_FALSE);}}

/* k5912 in gen-lit in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5781(t2,C_i_not(t1));}

/* k5779 in gen-lit in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5781(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5781,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("c-backend.scm: 685  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[4],lf[352],((C_word*)t0)[3],lf[353]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 686  block-variable-literal?");
((C_proc3)C_retrieve_symbol_proc(lf[350]))(3,*((C_word*)lf[350]+1),t2,((C_word*)t0)[3]);}}

/* k5785 in k5779 in gen-lit in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5787(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5787,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=C_retrieve(lf[354]);
t3=C_eqp(((C_word*)t0)[4],t2);
if(C_truep(t3)){
C_trace("c-backend.scm: 688  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3],lf[355]);}
else{
if(C_truep(C_booleanp(((C_word*)t0)[4]))){
if(C_truep(((C_word*)t0)[4])){
C_trace("c-backend.scm: 690  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3],C_make_character(61),lf[356],C_make_character(59));}
else{
C_trace("c-backend.scm: 690  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3],C_make_character(61),lf[357],C_make_character(59));}}
else{
if(C_truep(C_charp(((C_word*)t0)[4]))){
t4=C_fix(C_character_code(((C_word*)t0)[4]));
C_trace("c-backend.scm: 692  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3],lf[358],t4,lf[359]);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[4]))){
t4=C_slot(((C_word*)t0)[4],C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5837,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 695  c-ify-string");
((C_proc3)C_retrieve_symbol_proc(lf[72]))(3,*((C_word*)lf[72]+1),t5,t4);}
else{
if(C_truep(C_i_nullp(((C_word*)t0)[4]))){
C_trace("c-backend.scm: 700  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_SCHEME_TRUE,((C_word*)t0)[3],lf[363]);}
else{
t4=C_immp(((C_word*)t0)[4]);
t5=(C_truep(t4)?C_SCHEME_FALSE:C_lambdainfop(((C_word*)t0)[4]));
if(C_truep(t5)){
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=C_fixnump(((C_word*)t0)[4]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5870,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t8=t7;
f_5870(t8,t6);}
else{
t8=C_immp(((C_word*)t0)[4]);
t9=t7;
f_5870(t9,C_i_not(t8));}}}}}}}}}

/* k5868 in k5785 in k5779 in gen-lit in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5870(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5870,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5873,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 704  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,((C_word*)t0)[2],lf[366]);}
else{
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[3];
C_trace("c-backend.scm: 661  bomb");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t2,lf[347],t3);}}

/* k5871 in k5868 in k5785 in k5779 in gen-lit in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5873,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5876,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5883,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 705  encode-literal");
((C_proc3)C_retrieve_symbol_proc(lf[365]))(3,*((C_word*)lf[365]+1),t3,((C_word*)t0)[2]);}

/* k5881 in k5871 in k5868 in k5785 in k5779 in gen-lit in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 705  gen-string-constant");
t2=((C_word*)((C_word*)t0)[3])[1];
f_5916(t2,((C_word*)t0)[2],t1);}

/* k5874 in k5871 in k5868 in k5785 in k5779 in gen-lit in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 706  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[364]);}

/* k5835 in k5785 in k5779 in gen-lit in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5837,2,t0,t1);}
t2=C_block_size(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5843,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 697  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,((C_word*)t0)[2],lf[362]);}

/* k5841 in k5835 in k5785 in k5779 in gen-lit in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 698  gen");
((C_proc9)C_retrieve_proc(*((C_word*)lf[1]+1)))(9,*((C_word*)lf[1]+1),((C_word*)t0)[5],lf[360],((C_word*)t0)[4],C_make_character(44),((C_word*)t0)[3],C_make_character(44),((C_word*)t0)[2],lf[361]);}

/* literal-size in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5580(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5580,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5587,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 664  immediate?");
((C_proc3)C_retrieve_symbol_proc(lf[351]))(3,*((C_word*)lf[351]+1),t3,t2);}

/* k5585 in literal-size in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5587(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5587,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep(C_i_stringp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep(C_i_numberp(((C_word*)t0)[3]))){
t2=C_retrieve(lf[343]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(C_i_symbolp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(10));}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_i_car(((C_word*)t0)[3]);
C_trace("c-backend.scm: 668  literal-size");
t4=((C_word*)((C_word*)t0)[2])[1];
f_5580(t4,t2,t3);}
else{
if(C_truep(C_i_vectorp(((C_word*)t0)[3]))){
t2=C_i_vector_length(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5647,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5651,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5655,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 669  vector->list");
((C_proc3)C_retrieve_proc(*((C_word*)lf[346]+1)))(3,*((C_word*)lf[346]+1),t9,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 670  block-variable-literal?");
((C_proc3)C_retrieve_symbol_proc(lf[350]))(3,*((C_word*)lf[350]+1),t2,((C_word*)t0)[3]);}}}}}}}

/* k5694 in k5585 in literal-size in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5696,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
if(C_truep(C_immp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
C_trace("c-backend.scm: 661  bomb");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t2,lf[347],t3);}
else{
if(C_truep(C_lambdainfop(((C_word*)t0)[3]))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 673  ##sys#bytevector?");
((C_proc3)C_retrieve_proc(*((C_word*)lf[349]+1)))(3,*((C_word*)lf[349]+1),t2,((C_word*)t0)[3]);}}}}

/* k5712 in k5694 in k5585 in literal-size in ##compiler#generate-code in k2595 in k2509 in k2506 */
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5714,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5721,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=C_block_size(((C_word*)t0)[3]);
C_trace("c-backend.scm: 673  words");
((C_proc3)C_retrieve_symbol_proc(lf[348]))(3,*((C_word*)lf[348]+1),t2,t3);}
else{
if(C_truep(C_structurep(((C_word*)t0)[3]))){
t2=C_block_size(((C_word*)t0)[3]);
t3=C_fixnum_plus(C_fix(2),t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5743,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_5743(t7,((C_word*)t0)[4],C_fix(0),t3);}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
C_trace("c-backend.scm: 661  bomb");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t2,lf[347],t3);}}}

/* loop in k5712 in k5694 in k5585 in literal-size in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5743(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5743,NULL,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t4,((C_word*)t0)[5]))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_fixnum_increase(t2);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5765,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(((C_word*)t0)[3],t2);
C_trace("c-backend.scm: 679  literal-size");
t8=((C_word*)((C_word*)t0)[2])[1];
f_5580(t8,t6,t7);}}

/* k5763 in loop in k5712 in k5694 in k5585 in literal-size in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[5],t1);
C_trace("c-backend.scm: 679  loop");
t3=((C_word*)((C_word*)t0)[4])[1];
f_5743(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k5719 in k5712 in k5694 in k5585 in literal-size in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_plus(C_fix(2),t1));}

/* k5653 in k5585 in literal-size in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5655,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5657,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_5657(t5,((C_word*)t0)[2],t1);}

/* loop925 in k5653 in k5585 in literal-size in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5657(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5657,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5686,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("g941942");
t5=((C_word*)((C_word*)t0)[2])[1];
f_5580(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5684 in loop925 in k5653 in k5585 in literal-size in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5686(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5686,2,t0,t1);}
t2=C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop925938");
t6=((C_word*)((C_word*)t0)[4])[1];
f_5657(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop925938");
t6=((C_word*)((C_word*)t0)[4])[1];
f_5657(t6,((C_word*)t0)[3],t5);}}

/* k5649 in k5585 in literal-size in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 669  reduce");
((C_proc5)C_retrieve_symbol_proc(lf[344]))(5,*((C_word*)lf[344]+1),((C_word*)t0)[2],*((C_word*)lf[345]+1),C_fix(0),t1);}

/* k5645 in k5585 in literal-size in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5647(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_plus(C_fixnum_plus(C_fix(1),((C_word*)t0)[2]),t1));}

/* k5616 in k5585 in literal-size in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5618,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5622,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_i_cdr(((C_word*)t0)[3]);
C_trace("c-backend.scm: 668  literal-size");
t4=((C_word*)((C_word*)t0)[2])[1];
f_5580(t4,t2,t3);}

/* k5620 in k5616 in k5585 in literal-size in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fixnum_plus(C_fixnum_plus(C_fix(3),((C_word*)t0)[2]),t1));}

/* literal-frame in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5525(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5525,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5531,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5531(t5,t1,C_fix(0),((C_word*)t0)[2]);}

/* doloop899 in literal-frame in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5531(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5531,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5541,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5560,a[2]=t2,a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[342]))(2,*((C_word*)lf[342]+1),t6);}}

/* k5558 in doloop899 in literal-frame in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5560,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5563,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t2,lf[341],t1);}

/* k5561 in k5558 in doloop899 in literal-frame in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5563,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5566,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[340]+1)))(4,*((C_word*)lf[340]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5564 in k5561 in k5558 in doloop899 in literal-frame in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5569,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[339]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(93),((C_word*)t0)[2]);}

/* k5567 in k5564 in k5561 in k5558 in doloop899 in literal-frame in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5572,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[338]))(3,*((C_word*)lf[338]+1),t2,((C_word*)t0)[2]);}

/* k5570 in k5567 in k5564 in k5561 in k5558 in doloop899 in literal-frame in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 658  gen-lit");
t2=((C_word*)((C_word*)t0)[4])[1];
f_5774(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5539 in doloop899 in literal-frame in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_increase(((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_5531(t4,((C_word*)t0)[2],t2,t3);}

/* trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5205(C_word t0,C_word t1){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5205,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5208,tmp=(C_word)a,a+=2,tmp));
t11=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5244,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5324,a[2]=t3,a[3]=t7,a[4]=t5,a[5]=t9,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5394,a[2]=t14,a[3]=t3,a[4]=t5,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_5394(t16,t12,((C_word*)t0)[2]);}

/* loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5394(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5394,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5402,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5512,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t2,C_fix(0));
C_trace("g820821");
t6=t3;
f_5402(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5510 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5394(t3,((C_word*)t0)[2],t2);}

/* g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5402(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5402,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5406,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 619  lambda-literal-argument-count");
((C_proc3)C_retrieve_symbol_proc(lf[289]))(3,*((C_word*)lf[289]+1),t3,t2);}

/* k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5406,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5409,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 620  lambda-literal-rest-argument");
((C_proc3)C_retrieve_symbol_proc(lf[285]))(3,*((C_word*)lf[285]+1),t4,((C_word*)t0)[2]);}

/* k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5409,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5412,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 621  lambda-literal-rest-argument-mode");
((C_proc3)C_retrieve_symbol_proc(lf[284]))(3,*((C_word*)lf[284]+1),t2,((C_word*)t0)[2]);}

/* k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5412,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5415,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 622  lambda-literal-id");
((C_proc3)C_retrieve_symbol_proc(lf[10]))(3,*((C_word*)lf[10]+1),t2,((C_word*)t0)[2]);}

/* k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5415,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 623  lambda-literal-customizable");
((C_proc3)C_retrieve_symbol_proc(lf[288]))(3,*((C_word*)lf[288]+1),t2,((C_word*)t0)[2]);}

/* k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5509,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 624  lambda-literal-closure-size");
((C_proc3)C_retrieve_symbol_proc(lf[148]))(3,*((C_word*)lf[148]+1),t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_5421(t3,C_SCHEME_FALSE);}}

/* k5507 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5421(t2,C_eqp(t1,C_fix(0)));}

/* k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5421(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5421,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5424,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t1)){
t3=C_fixnum_decrease(((C_word*)((C_word*)t0)[9])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[9])+1,t3);
t5=t2;
f_5424(t5,t4);}
else{
t3=t2;
f_5424(t3,C_SCHEME_UNDEFINED);}}

/* k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5424(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5424,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 626  lambda-literal-direct");
((C_proc3)C_retrieve_symbol_proc(lf[283]))(3,*((C_word*)lf[283]+1),t2,((C_word*)t0)[2]);}

/* k5428 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5430,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
if(C_truep(((C_word*)t0)[10])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5436,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 628  gen");
((C_proc11)C_retrieve_proc(*((C_word*)lf[1]+1)))(11,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[333],((C_word*)t0)[8],lf[334],C_SCHEME_TRUE,lf[335],((C_word*)t0)[8],lf[336]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5464,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=t2;
f_5464(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5498,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 636  lambda-literal-allocated");
((C_proc3)C_retrieve_symbol_proc(lf[282]))(3,*((C_word*)lf[282]+1),t3,((C_word*)t0)[2]);}}}}

/* k5496 in k5428 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_greaterp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
f_5464(2,t3,t2);}
else{
C_trace("c-backend.scm: 636  lambda-literal-external");
((C_proc3)C_retrieve_symbol_proc(lf[337]))(3,*((C_word*)lf[337]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k5462 in k5428 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5464,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5470,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=C_eqp(((C_word*)t0)[2],lf[251]);
t4=t2;
f_5470(t4,C_i_not(t3));}
else{
t3=t2;
f_5470(t3,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k5468 in k5462 in k5428 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5470(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5470,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5474,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 638  lset-adjoin");
((C_proc5)C_retrieve_symbol_proc(lf[279]))(5,*((C_word*)lf[279]+1),t2,*((C_word*)lf[280]+1),((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[3])[1]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5478,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 639  lset-adjoin");
((C_proc5)C_retrieve_symbol_proc(lf[279]))(5,*((C_word*)lf[279]+1),t2,*((C_word*)lf[280]+1),((C_word*)((C_word*)t0)[2])[1],((C_word*)((C_word*)t0)[3])[1]);}}

/* k5476 in k5468 in k5462 in k5428 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5472 in k5468 in k5462 in k5428 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k5434 in k5428 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 630  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[331],((C_word*)t0)[3],lf[332]);}

/* k5437 in k5434 in k5428 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5442,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 631  restore");
f_5208(t2,((C_word*)((C_word*)t0)[4])[1]);}

/* k5440 in k5437 in k5434 in k5428 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5442,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5445,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 632  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,((C_word*)t0)[2],C_make_character(40));}

/* k5443 in k5440 in k5437 in k5434 in k5428 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5445,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5448,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 633  make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[296]))(4,*((C_word*)lf[296]+1),t2,((C_word*)((C_word*)t0)[2])[1],lf[330]);}

/* k5446 in k5443 in k5440 in k5437 in k5434 in k5428 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5451,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5458,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 634  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),t3,t1,C_make_character(44));}

/* k5456 in k5446 in k5443 in k5440 in k5437 in k5434 in k5428 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k5449 in k5446 in k5443 in k5440 in k5437 in k5434 in k5428 in k5422 in k5419 in k5416 in k5413 in k5410 in k5407 in k5404 in g820 in loop782 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 635  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[329]);}

/* k5322 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5327,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5343,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5343(t6,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* loop865 in k5322 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5343(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5343,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5351,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5381,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t2,C_fix(0));
C_trace("g872873");
t6=t3;
f_5351(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5379 in loop865 in k5322 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5343(t3,((C_word*)t0)[2],t2);}

/* g872 in loop865 in k5322 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5351(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5351,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5355,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 643  gen");
((C_proc13)C_retrieve_proc(*((C_word*)lf[1]+1)))(13,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[324],t2,lf[325],C_SCHEME_TRUE,lf[326],t2,lf[327],t2,lf[328]);}

/* k5353 in g872 in loop865 in k5322 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 645  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[321],((C_word*)t0)[3],lf[322],((C_word*)t0)[3],lf[323]);}

/* k5356 in k5353 in g872 in loop865 in k5322 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5361,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 646  restore");
f_5208(t2,((C_word*)t0)[3]);}

/* k5359 in k5356 in k5353 in g872 in loop865 in k5322 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5364,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 647  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[320],((C_word*)t0)[2],C_make_character(44));}

/* k5362 in k5359 in k5356 in k5353 in g872 in loop865 in k5322 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5364,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5367,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5374,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5378,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 648  make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[296]))(4,*((C_word*)lf[296]+1),t4,((C_word*)t0)[2],lf[319]);}

/* k5376 in k5362 in k5359 in k5356 in k5353 in g872 in loop865 in k5322 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 648  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_make_character(44));}

/* k5372 in k5362 in k5359 in k5356 in k5353 in g872 in loop865 in k5322 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k5365 in k5362 in k5359 in k5356 in k5353 in g872 in loop865 in k5322 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 649  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[318]);}

/* k5325 in k5322 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5330,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5341,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 651  emitter");
t4=((C_word*)((C_word*)t0)[3])[1];
f_5244(t4,t3,C_SCHEME_FALSE);}

/* k5339 in k5325 in k5322 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("for-each");
t2=*((C_word*)lf[317]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k5328 in k5325 in k5322 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5330,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5337,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 652  emitter");
t3=((C_word*)((C_word*)t0)[2])[1];
f_5244(t3,t2,C_SCHEME_TRUE);}

/* k5335 in k5328 in k5325 in k5322 in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("for-each");
t2=*((C_word*)lf[317]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* emitter in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5244(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5244,NULL,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5246,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp));}

/* f_5246 in emitter in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5246(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5246,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5250,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_truep(((C_word*)t0)[3])?C_make_character(118):lf[312]);
t5=(C_truep(((C_word*)t0)[3])?C_make_character(118):lf[313]);
C_trace("c-backend.scm: 597  gen");
((C_proc14)C_retrieve_proc(*((C_word*)lf[1]+1)))(14,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[314],t2,C_make_character(114),t4,lf[315],C_SCHEME_TRUE,lf[316],t2,C_make_character(114),t5);}

/* k5248 */
static void C_ccall f_5250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5250,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5253,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 599  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,lf[310],((C_word*)t0)[4],lf[311]);}

/* k5251 in k5248 */
static void C_ccall f_5253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5253,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5256,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 600  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[309],((C_word*)t0)[4],C_make_character(114));}

/* k5254 in k5251 in k5248 */
static void C_ccall f_5256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5256,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5259,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace("c-backend.scm: 601  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(118));}
else{
t3=t2;
f_5259(2,t3,C_SCHEME_UNDEFINED);}}

/* k5257 in k5254 in k5251 in k5248 */
static void C_ccall f_5259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5259,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 602  gen");
((C_proc11)C_retrieve_proc(*((C_word*)lf[1]+1)))(11,*((C_word*)lf[1]+1),t2,lf[305],((C_word*)t0)[4],lf[306],C_SCHEME_TRUE,lf[307],C_SCHEME_TRUE,lf[308],((C_word*)t0)[4],C_make_character(59));}

/* k5260 in k5257 in k5254 in k5251 in k5248 */
static void C_ccall f_5262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5262,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5265,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 605  restore");
f_5208(t2,((C_word*)t0)[4]);}

/* k5263 in k5260 in k5257 in k5254 in k5251 in k5248 */
static void C_ccall f_5265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5265,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5268,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 606  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[304]);}

/* k5266 in k5263 in k5260 in k5257 in k5254 in k5251 in k5248 */
static void C_ccall f_5268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 608  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[302]);}
else{
C_trace("c-backend.scm: 609  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[303]);}}

/* k5269 in k5266 in k5263 in k5260 in k5257 in k5254 in k5251 in k5248 */
static void C_ccall f_5271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5271,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5274,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 610  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[3],lf[301]);}

/* k5272 in k5269 in k5266 in k5263 in k5260 in k5257 in k5254 in k5251 in k5248 */
static void C_ccall f_5274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5277,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 611  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[300]);}
else{
t3=t2;
f_5277(2,t3,C_SCHEME_UNDEFINED);}}

/* k5275 in k5272 in k5269 in k5266 in k5263 in k5260 in k5257 in k5254 in k5251 in k5248 */
static void C_ccall f_5277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5277,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 612  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[299]);}

/* k5278 in k5275 in k5272 in k5269 in k5266 in k5263 in k5260 in k5257 in k5254 in k5251 in k5248 */
static void C_ccall f_5280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5280,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5283,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 613  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[298]);}

/* k5281 in k5278 in k5275 in k5272 in k5269 in k5266 in k5263 in k5260 in k5257 in k5254 in k5251 in k5248 */
static void C_ccall f_5283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5283,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5286,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5293,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5297,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_fixnum_plus(((C_word*)t0)[2],C_fix(1));
C_trace("c-backend.scm: 614  make-argument-list");
((C_proc4)C_retrieve_symbol_proc(lf[296]))(4,*((C_word*)lf[296]+1),t4,t5,lf[297]);}

/* k5295 in k5281 in k5278 in k5275 in k5272 in k5269 in k5266 in k5263 in k5260 in k5257 in k5254 in k5251 in k5248 */
static void C_ccall f_5297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 614  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_make_character(44));}

/* k5291 in k5281 in k5278 in k5275 in k5272 in k5269 in k5266 in k5263 in k5260 in k5257 in k5254 in k5251 in k5248 */
static void C_ccall f_5293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[1]+1),t1);}

/* k5284 in k5281 in k5278 in k5275 in k5272 in k5269 in k5266 in k5263 in k5260 in k5257 in k5254 in k5251 in k5248 */
static void C_ccall f_5286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 615  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[295]);}

/* restore in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5208(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5208,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5212,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=C_fixnum_difference(t2,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5221,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
t8=((C_word*)t6)[1];
f_5221(t8,t3,t4,C_fix(0));}

/* doloop790 in restore in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5221(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5221,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_fixnum_lessp(t2,C_fix(0)))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5231,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 592  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),t4,C_SCHEME_TRUE,lf[292],t2,lf[293],t3,lf[294]);}}

/* k5229 in doloop790 in restore in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_5221(t4,((C_word*)t0)[2],t2,t3);}

/* k5210 in restore in trampolines in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 593  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_SCHEME_TRUE,lf[290],((C_word*)t0)[2],lf[291]);}

/* prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4865(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4865,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4869,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 521  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t4,C_SCHEME_TRUE);}

/* k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4869,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4872,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4938,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4938(t6,t2,((C_word*)t0)[2]);}

/* loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4938(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4938,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4946,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5192,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t2,C_fix(0));
C_trace("g665666");
t6=t3;
f_4946(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5190 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4938(t3,((C_word*)t0)[2],t2);}

/* g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4946(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4946,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4950,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 524  lambda-literal-argument-count");
((C_proc3)C_retrieve_symbol_proc(lf[289]))(3,*((C_word*)lf[289]+1),t3,t2);}

/* k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 525  lambda-literal-customizable");
((C_proc3)C_retrieve_symbol_proc(lf[288]))(3,*((C_word*)lf[288]+1),t2,((C_word*)t0)[2]);}

/* k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4953,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4956,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5189,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 526  lambda-literal-closure-size");
((C_proc3)C_retrieve_symbol_proc(lf[148]))(3,*((C_word*)lf[148]+1),t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_4956(t3,C_SCHEME_FALSE);}}

/* k5187 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4956(t2,C_eqp(t1,C_fix(0)));}

/* k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4956(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4956,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4959,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5175,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t4=C_fixnum_decrease(((C_word*)t0)[5]);
C_trace("c-backend.scm: 527  make-variable-list");
((C_proc4)C_retrieve_symbol_proc(lf[286]))(4,*((C_word*)lf[286]+1),t3,t4,lf[287]);}
else{
t4=((C_word*)t0)[5];
C_trace("c-backend.scm: 527  make-variable-list");
((C_proc4)C_retrieve_symbol_proc(lf[286]))(4,*((C_word*)lf[286]+1),t3,t4,lf[287]);}}

/* k5173 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 527  intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),((C_word*)t0)[2],t1,C_make_character(44));}

/* k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4959,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 528  lambda-literal-id");
((C_proc3)C_retrieve_symbol_proc(lf[10]))(3,*((C_word*)lf[10]+1),t2,((C_word*)t0)[2]);}

/* k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 529  lambda-literal-rest-argument");
((C_proc3)C_retrieve_symbol_proc(lf[285]))(3,*((C_word*)lf[285]+1),t2,((C_word*)t0)[2]);}

/* k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 530  lambda-literal-rest-argument-mode");
((C_proc3)C_retrieve_symbol_proc(lf[284]))(3,*((C_word*)lf[284]+1),t2,((C_word*)t0)[2]);}

/* k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 531  lambda-literal-direct");
((C_proc3)C_retrieve_symbol_proc(lf[283]))(3,*((C_word*)lf[283]+1),t2,((C_word*)t0)[2]);}

/* k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4971,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 532  lambda-literal-allocated");
((C_proc3)C_retrieve_symbol_proc(lf[282]))(3,*((C_word*)lf[282]+1),t2,((C_word*)t0)[2]);}

/* k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4974,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
t3=((C_word*)t0)[8];
t4=C_retrieve(lf[278]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5167,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=C_fixnum_increase(((C_word*)t0)[8]);
C_trace("c-backend.scm: 534  lset-adjoin");
((C_proc5)C_retrieve_symbol_proc(lf[279]))(5,*((C_word*)lf[279]+1),t5,*((C_word*)lf[280]+1),((C_word*)((C_word*)t0)[3])[1],t6);}
else{
t5=t2;
f_4977(t5,C_SCHEME_UNDEFINED);}}

/* k5165 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_4977(t3,t2);}

/* k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4977(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4977,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_4980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],tmp=(C_word)a,a+=13,tmp);
C_trace("c-backend.scm: 535  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE);}

/* k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4983,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5121,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 540  lambda-literal-callee-signatures");
((C_proc3)C_retrieve_symbol_proc(lf[281]))(3,*((C_word*)lf[281]+1),t3,((C_word*)t0)[2]);}

/* k5119 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5121,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5123,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_5123(t5,((C_word*)t0)[2],t1);}

/* loop684 in k5119 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5123(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5123,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5131,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5149,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t2,C_fix(0));
C_trace("g691692");
t6=t3;
f_5131(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5147 in loop684 in k5119 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5123(t3,((C_word*)t0)[2],t2);}

/* g691 in loop684 in k5119 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5131(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5131,NULL,3,t0,t1,t2);}
t3=t2;
t4=C_retrieve(lf[278]);
if(C_truep(C_fixnum_greater_or_equal_p(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5142,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=C_fixnum_increase(t2);
C_trace("c-backend.scm: 539  lset-adjoin");
((C_proc5)C_retrieve_symbol_proc(lf[279]))(5,*((C_word*)lf[279]+1),t5,*((C_word*)lf[280]+1),((C_word*)((C_word*)t0)[2])[1],t6);}
else{
t5=C_SCHEME_UNDEFINED;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k5140 in g691 in loop684 in k5119 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4983,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4986,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=C_eqp(lf[262],((C_word*)t0)[5]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5095,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[213]))){
C_trace("c-backend.scm: 550  string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),t4,C_retrieve(lf[213]),lf[269]);}
else{
t5=t4;
f_5095(2,t5,lf[270]);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5070,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 542  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t4,lf[276],((C_word*)t0)[5],lf[277],C_SCHEME_TRUE);}}

/* k5068 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5070,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5073,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 543  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[275]);}

/* k5071 in k5068 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5076,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 544  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[273]);}
else{
C_trace("c-backend.scm: 544  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[274]);}}

/* k5074 in k5071 in k5068 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5076,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5079,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 546  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[271]);}
else{
C_trace("c-backend.scm: 547  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[272]);}}

/* k5077 in k5074 in k5071 in k5068 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 548  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5093 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5098,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 551  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,lf[267],t1,lf[268],C_SCHEME_TRUE);}

/* k5096 in k5093 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[265]))){
C_trace("c-backend.scm: 553  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,lf[266],C_SCHEME_TRUE);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f11178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 554  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,lf[264]);}}

/* f11178 in k5096 in k5093 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f11178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 555  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[263],((C_word*)t0)[2]);}

/* k5099 in k5096 in k5093 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 554  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[264]);}

/* k5102 in k5099 in k5096 in k5093 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 555  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[263],((C_word*)t0)[2]);}

/* k4984 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4986,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 556  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(40));}

/* k4987 in k4984 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4989,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4992,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_4992(2,t3,C_SCHEME_UNDEFINED);}
else{
C_trace("c-backend.scm: 557  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[261]);}}

/* k4990 in k4987 in k4984 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4992,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4995,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5042,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=C_eqp(((C_word*)t0)[2],C_fix(0));
t5=t3;
f_5042(t5,C_i_not(t4));}
else{
t4=t3;
f_5042(t4,C_SCHEME_FALSE);}}

/* k5040 in k4990 in k4987 in k4984 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_5042(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5042,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 559  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[260]);}
else{
t2=((C_word*)t0)[2];
f_4995(2,t2,C_SCHEME_UNDEFINED);}}

/* k5043 in k5040 in k4990 in k4987 in k4984 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
C_trace("c-backend.scm: 560  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(44));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_4995(2,t3,t2);}}

/* k4993 in k4990 in k4987 in k4984 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4995,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4998,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[4]);}

/* k4996 in k4993 in k4990 in k4987 in k4984 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4998,2,t0,t1);}
if(C_truep(((C_word*)t0)[8])){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5004,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 563  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[258]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 571  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(41));}}

/* k5028 in k4996 in k4993 in k4990 in k4987 in k4984 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5033,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("c-backend.scm: 574  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_make_character(59));}
else{
C_trace("c-backend.scm: 573  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[259]);}}

/* k5031 in k5028 in k4996 in k4993 in k4990 in k4987 in k4984 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 574  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(59));}

/* k5002 in k4996 in k4993 in k4990 in k4987 in k4984 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5004,2,t0,t1);}
t2=C_eqp(((C_word*)t0)[6],lf[251]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5013,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 566  gen");
((C_proc10)C_retrieve_proc(*((C_word*)lf[1]+1)))(10,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[254],((C_word*)t0)[2],lf[255],C_SCHEME_TRUE,lf[256],((C_word*)t0)[2],lf[257]);}}

/* k5011 in k5002 in k4996 in k4993 in k4990 in k4987 in k4984 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5013,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5016,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_apply(4,0,t2,*((C_word*)lf[1]+1),((C_word*)t0)[2]);}

/* k5014 in k5011 in k5002 in k4996 in k4993 in k4990 in k4987 in k4984 in k4981 in k4978 in k4975 in k4972 in k4969 in k4966 in k4963 in k4960 in k4957 in k4954 in k4951 in k4948 in g665 in loop658 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_5016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
C_trace("c-backend.scm: 569  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[252],t2,lf[253]);}

/* k4870 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4872,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4877,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4877(t5,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* loop748 in k4870 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4877(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4877,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4925,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4889,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 578  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t5,C_SCHEME_TRUE,lf[249],t4,lf[250]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4887 in loop748 in k4870 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4889,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4892,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4899,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 579  make-list");
((C_proc4)C_retrieve_symbol_proc(lf[247]))(4,*((C_word*)lf[247]+1),t3,((C_word*)t0)[2],lf[248]);}

/* k4897 in k4887 in loop748 in k4870 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4899,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4901,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4901(t5,((C_word*)t0)[2],t1);}

/* loop760 in k4897 in k4887 in loop748 in k4870 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4901(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4901,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=*((C_word*)lf[1]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4911,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_slot(t2,C_fix(0));
C_trace("g767768");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4909 in loop760 in k4897 in k4887 in loop748 in k4870 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4901(t3,((C_word*)t0)[2],t2);}

/* k4890 in k4887 in loop748 in k4870 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 580  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[246]);}

/* k4923 in loop748 in k4870 in k4867 in prototypes in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4877(t3,((C_word*)t0)[2],t2);}

/* declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4694(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4694,NULL,2,t0,t1);}
t2=C_i_length(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4701,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 492  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[245]);}

/* k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4701,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4704,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4837,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4837(t6,t2,C_retrieve(lf[215]));}

/* loop609 in k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4837(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4837,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4852,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("c-backend.scm: 495  gen");
((C_proc10)C_retrieve_proc(*((C_word*)lf[1]+1)))(10,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[241],t4,lf[242],C_SCHEME_TRUE,lf[243],t4,lf[244]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4850 in loop609 in k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4837(t3,((C_word*)t0)[2],t2);}

/* k4702 in k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4704,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4707,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t3)){
t4=t2;
f_4707(2,t4,C_SCHEME_UNDEFINED);}
else{
C_trace("c-backend.scm: 499  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,C_SCHEME_TRUE,lf[239],((C_word*)t0)[2],lf[240]);}}

/* k4705 in k4702 in k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 500  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[238]);}

/* k4708 in k4705 in k4702 in k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4710,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4715,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4715(t5,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* doloop623 in k4708 in k4705 in k4702 in k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4715(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4715,NULL,4,t0,t1,t2,t3);}
if(C_truep(C_i_nullp(t3))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4725,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=C_i_car(t3);
C_trace("c-backend.scm: 504  ##sys#lambda-info->string");
((C_proc3)C_retrieve_symbol_proc(lf[237]))(3,*((C_word*)lf[237]+1),t4,t5);}}

/* k4723 in doloop623 in k4708 in k4705 in k4702 in k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4725(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4725,2,t0,t1);}
t2=C_i_string_length(t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4731,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=C_fixnum_shift_right(t2,C_fix(16));
t5=C_fixnum_shift_right(t2,C_fix(8));
t6=C_fixnum_and(C_fix(255),t5);
t7=C_fixnum_and(C_fix(255),t2);
C_trace("c-backend.scm: 506  gen");
((C_proc12)C_retrieve_proc(*((C_word*)lf[1]+1)))(12,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,lf[235],((C_word*)t0)[5],lf[236],t4,C_make_character(44),t6,C_make_character(44),t7,C_make_character(41));}

/* k4729 in k4723 in doloop623 in k4708 in k4705 in k4702 in k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4731,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4734,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4784,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4784(t6,t2,C_fix(0));}

/* doloop632 in k4729 in k4723 in doloop623 in k4708 in k4705 in k4702 in k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4784(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4784,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[4]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4794,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_i_string_ref(((C_word*)t0)[2],t2);
t6=C_fix(C_character_code(t5));
C_trace("c-backend.scm: 513  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t4,C_make_character(44),t6);}}

/* k4792 in doloop632 in k4729 in k4723 in doloop623 in k4708 in k4705 in k4702 in k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_increase(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_4784(t3,((C_word*)t0)[2],t2);}

/* k4732 in k4729 in k4723 in doloop623 in k4708 in k4705 in k4702 in k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4734(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4734,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4737,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=C_fixnum_plus(((C_word*)t0)[2],C_fix(7));
t4=C_fixnum_and(C_fix(16777208),t3);
t5=C_fixnum_difference(t4,((C_word*)t0)[2]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4757,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t7)[1];
f_4757(t9,t2,t5);}

/* doloop639 in k4732 in k4729 in k4723 in doloop623 in k4708 in k4705 in k4702 in k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4757(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4757,NULL,3,t0,t1,t2);}
t3=C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4767,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 516  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t4,lf[234]);}}

/* k4765 in doloop639 in k4732 in k4729 in k4723 in doloop623 in k4708 in k4705 in k4702 in k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_decrease(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_4757(t3,((C_word*)t0)[2],t2);}

/* k4735 in k4732 in k4729 in k4723 in doloop623 in k4708 in k4705 in k4702 in k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4737,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 517  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[233]);}

/* k4738 in k4735 in k4732 in k4729 in k4723 in doloop623 in k4708 in k4705 in k4702 in k4699 in declarations in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_increase(((C_word*)t0)[5]);
t3=C_i_cdr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4715(t4,((C_word*)t0)[2],t2,t3);}

/* header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4525(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4525,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4528,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4545,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4686,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 458  current-seconds");
((C_proc2)C_retrieve_symbol_proc(lf[232]))(2,*((C_word*)lf[232]+1),t4);}

/* k4684 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 458  ##sys#decode-seconds");
((C_proc4)C_retrieve_symbol_proc(lf[231]))(4,*((C_word*)lf[231]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4545(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4545,2,t0,t1);}
t2=C_i_vector_ref(t1,C_fix(1));
t3=C_i_vector_ref(t1,C_fix(2));
t4=C_i_vector_ref(t1,C_fix(3));
t5=C_i_vector_ref(t1,C_fix(4));
t6=C_i_vector_ref(t1,C_fix(5));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4563,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t8=C_fixnum_plus(C_fix(1900),t6);
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4644,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t8,a[7]=((C_word*)t0)[3],a[8]=t7,tmp=(C_word)a,a+=9,tmp);
t10=C_fixnum_increase(t5);
C_trace("c-backend.scm: 466  pad0");
f_4528(t9,t10);}

/* k4642 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4644,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4648,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 466  pad0");
f_4528(t2,((C_word*)t0)[2]);}

/* k4646 in k4642 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4648,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4652,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 466  pad0");
f_4528(t2,((C_word*)t0)[2]);}

/* k4650 in k4646 in k4642 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4652,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4656,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 466  pad0");
f_4528(t2,((C_word*)t0)[2]);}

/* k4654 in k4650 in k4646 in k4642 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4656,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4660,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4664,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4666,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4674,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4678,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 469  chicken-version");
((C_proc3)C_retrieve_symbol_proc(lf[230]))(3,*((C_word*)lf[230]+1),t6,C_SCHEME_TRUE);}

/* k4676 in k4654 in k4650 in k4646 in k4642 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 469  string-split");
((C_proc4)C_retrieve_symbol_proc(lf[228]))(4,*((C_word*)lf[228]+1),((C_word*)t0)[2],t1,lf[229]);}

/* k4672 in k4654 in k4650 in k4646 in k4642 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("map");
t2=*((C_word*)lf[227]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a4665 in k4654 in k4650 in k4646 in k4642 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4666(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4666,3,t0,t1,t2);}
t3=*((C_word*)lf[115]+1);
C_trace("g568569");
t4=t3;
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,lf[225],t2,lf[226]);}

/* k4662 in k4654 in k4650 in k4646 in k4642 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 467  string-intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[223]))(4,*((C_word*)lf[223]+1),((C_word*)t0)[2],t1,lf[224]);}

/* k4658 in k4654 in k4650 in k4646 in k4642 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 464  gen");
((C_proc21)C_retrieve_proc(*((C_word*)lf[1]+1)))(21,*((C_word*)lf[1]+1),((C_word*)t0)[8],lf[218],((C_word*)t0)[7],lf[219],C_SCHEME_TRUE,lf[220],C_SCHEME_TRUE,lf[221],((C_word*)t0)[6],C_make_character(45),((C_word*)t0)[5],C_make_character(45),((C_word*)t0)[4],C_make_character(32),((C_word*)t0)[3],C_make_character(58),((C_word*)t0)[2],C_SCHEME_TRUE,t1,lf[222]);}

/* k4561 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4563,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4566,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 472  gen-list");
((C_proc3)C_retrieve_proc(*((C_word*)lf[4]+1)))(3,*((C_word*)lf[4]+1),t2,C_retrieve(lf[217]));}

/* k4564 in k4561 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4569,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 473  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE);}

/* k4567 in k4564 in k4561 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4569,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4572,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[213]))){
C_trace("c-backend.scm: 474  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,lf[214],C_retrieve(lf[213]));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4633,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 476  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,lf[216]);}}

/* k4631 in k4567 in k4564 in k4561 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 477  gen-list");
((C_proc3)C_retrieve_proc(*((C_word*)lf[4]+1)))(3,*((C_word*)lf[4]+1),((C_word*)t0)[2],C_retrieve(lf[215]));}

/* k4570 in k4567 in k4564 in k4561 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4572,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4575,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 478  gen");
((C_proc9)C_retrieve_proc(*((C_word*)lf[1]+1)))(9,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[209],C_SCHEME_TRUE,C_SCHEME_TRUE,lf[210],C_retrieve(lf[211]),lf[212]);}

/* k4573 in k4570 in k4567 in k4564 in k4561 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4578,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[205]))){
C_trace("c-backend.scm: 480  generate-foreign-callback-stub-prototypes");
((C_proc3)C_retrieve_symbol_proc(lf[206]))(3,*((C_word*)lf[206]+1),t2,C_retrieve(lf[207]));}
else{
t3=t2;
f_4578(2,t3,C_SCHEME_UNDEFINED);}}

/* k4576 in k4573 in k4570 in k4567 in k4564 in k4561 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4578,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4581,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(C_retrieve(lf[208])))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4593,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 482  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE);}
else{
if(C_truep(C_retrieve(lf[205]))){
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
C_trace("c-backend.scm: 485  generate-foreign-callback-stub-prototypes");
((C_proc3)C_retrieve_symbol_proc(lf[206]))(3,*((C_word*)lf[206]+1),((C_word*)t0)[2],C_retrieve(lf[207]));}}}

/* k4591 in k4576 in k4573 in k4570 in k4567 in k4564 in k4561 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4593,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4598,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4598(t5,((C_word*)t0)[2],C_retrieve(lf[208]));}

/* loop583 in k4591 in k4576 in k4573 in k4570 in k4567 in k4564 in k4561 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4598(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4598,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4613,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("c-backend.scm: 483  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4611 in loop583 in k4591 in k4576 in k4573 in k4570 in k4567 in k4564 in k4561 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4598(t3,((C_word*)t0)[2],t2);}

/* k4579 in k4576 in k4573 in k4570 in k4567 in k4564 in k4561 in k4543 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_retrieve(lf[205]))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
C_trace("c-backend.scm: 485  generate-foreign-callback-stub-prototypes");
((C_proc3)C_retrieve_symbol_proc(lf[206]))(3,*((C_word*)lf[206]+1),((C_word*)t0)[2],C_retrieve(lf[207]));}}

/* pad0 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4528(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4528,NULL,2,t1,t2);}
t3=t2;
if(C_truep(C_fixnum_lessp(t3,C_fix(10)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4542,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 456  number->string");
C_number_to_string(3,0,t4,t2);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k4540 in pad0 in header in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 456  string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[115]+1)))(4,*((C_word*)lf[115]+1),((C_word*)t0)[2],lf[204],t1);}

/* expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_2644(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2644,NULL,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2647,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t8,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t10=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4493,a[2]=t6,tmp=(C_word)a,a+=3,tmp));
C_trace("c-backend.scm: 451  expr");
t11=((C_word*)t6)[1];
f_2647(t11,t1,t2,t3);}

/* expr-args in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4493(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4493,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4499,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 445  pair-for-each");
((C_proc4)C_retrieve_symbol_proc(lf[203]))(4,*((C_word*)lf[203]+1),t1,t4,t2);}

/* a4498 in expr-args in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4499(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4499,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4503,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=C_eqp(t2,((C_word*)t0)[2]);
if(C_truep(t4)){
t5=C_i_car(t2);
C_trace("c-backend.scm: 448  expr");
t6=((C_word*)((C_word*)t0)[4])[1];
f_2647(t6,t1,t5,((C_word*)t0)[3]);}
else{
C_trace("c-backend.scm: 447  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,C_make_character(44));}}

/* k4501 in a4498 in expr-args in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[5]);
C_trace("c-backend.scm: 448  expr");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2647(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_2647(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2647,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=C_slot(t4,C_fix(3));
t6=t2;
t7=C_slot(t6,C_fix(2));
t8=t2;
t9=C_slot(t8,C_fix(1));
t10=C_eqp(t9,lf[12]);
if(C_truep(t10)){
t11=C_i_car(t7);
t12=C_eqp(t11,lf[13]);
if(C_truep(t12)){
if(C_truep(C_i_cadr(t7))){
C_trace("c-backend.scm: 84   gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t1,lf[14]);}
else{
C_trace("c-backend.scm: 84   gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t1,lf[15]);}}
else{
t13=C_eqp(t11,lf[16]);
if(C_truep(t13)){
t14=C_i_cadr(t7);
t15=C_fix(C_character_code(t14));
C_trace("c-backend.scm: 85   gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,lf[17],t15,C_make_character(41));}
else{
t14=C_eqp(t11,lf[18]);
if(C_truep(t14)){
C_trace("c-backend.scm: 86   gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t1,lf[19]);}
else{
t15=C_eqp(t11,lf[20]);
if(C_truep(t15)){
t16=C_i_cadr(t7);
C_trace("c-backend.scm: 87   gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,lf[21],t16,C_make_character(41));}
else{
t16=C_eqp(t11,lf[22]);
if(C_truep(t16)){
C_trace("c-backend.scm: 88   gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t1,lf[23]);}
else{
C_trace("c-backend.scm: 89   bomb");
((C_proc3)C_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),t1,lf[24]);}}}}}}
else{
t11=C_eqp(t9,lf[25]);
if(C_truep(t11)){
t12=C_i_car(t7);
if(C_truep(C_i_vectorp(t12))){
t13=C_i_vector_ref(t12,C_fix(0));
C_trace("c-backend.scm: 94   gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,lf[26],t13,lf[27]);}
else{
t13=C_i_car(t7);
C_trace("c-backend.scm: 95   gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,lf[28],t13,C_make_character(93));}}
else{
t12=C_eqp(t9,lf[29]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2786,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 98   gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t13,C_SCHEME_TRUE,lf[32]);}
else{
t13=C_eqp(t9,lf[33]);
if(C_truep(t13)){
t14=C_i_car(t7);
C_trace("c-backend.scm: 107  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t1,lf[34],t14);}
else{
t14=C_eqp(t9,lf[35]);
if(C_truep(t14)){
t15=C_i_car(t7);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2844,a[2]=((C_word*)t0)[5],a[3]=t17,tmp=(C_word)a,a+=4,tmp));
t19=((C_word*)t17)[1];
f_2844(t19,t1,t5,t3,t15);}
else{
t15=C_eqp(t9,lf[36]);
if(C_truep(t15)){
t16=C_i_car(t7);
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2898,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 120  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t17,C_SCHEME_TRUE,t16,C_make_character(61));}
else{
t16=C_eqp(t9,lf[37]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2924,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 126  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t17,lf[39]);}
else{
t17=C_eqp(t9,lf[40]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2951,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 131  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t18,lf[42]);}
else{
t18=C_eqp(t9,lf[43]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2970,a[2]=t7,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 136  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t19,lf[44]);}
else{
t19=C_eqp(t9,lf[45]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3003,a[2]=t7,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 143  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t20,lf[48]);}
else{
t20=C_eqp(t9,lf[49]);
if(C_truep(t20)){
t21=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3040,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 150  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t21,lf[51]);}
else{
t21=C_eqp(t9,lf[52]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3069,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 157  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t22,lf[54]);}
else{
t22=C_eqp(t9,lf[55]);
if(C_truep(t22)){
t23=C_i_car(t7);
t24=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3101,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t23,tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 165  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t24,lf[61],t23,C_make_character(44));}
else{
t23=C_eqp(t9,lf[62]);
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3172,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 175  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t24,lf[64]);}
else{
t24=C_eqp(t9,lf[65]);
if(C_truep(t24)){
t25=C_i_car(t7);
C_trace("c-backend.scm: 179  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t1,C_make_character(116),t25);}
else{
t25=C_eqp(t9,lf[66]);
if(C_truep(t25)){
t26=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3204,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t27=C_i_car(t7);
C_trace("c-backend.scm: 182  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t26,C_make_character(116),t27,C_make_character(61));}
else{
t26=C_eqp(t9,lf[67]);
if(C_truep(t26)){
t27=C_i_car(t7);
t28=C_i_cadr(t7);
if(C_truep(C_i_caddr(t7))){
if(C_truep(t28)){
C_trace("c-backend.scm: 191  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,lf[68],t27,lf[69]);}
else{
t29=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3246,a[2]=t27,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t30=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3250,a[2]=t29,tmp=(C_word)a,a+=3,tmp);
t31=C_i_cadddr(t7);
C_trace("c-backend.scm: 192  symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[73]+1)))(3,*((C_word*)lf[73]+1),t30,t31);}}
else{
if(C_truep(t28)){
C_trace("c-backend.scm: 193  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,lf[74],t27,lf[75]);}
else{
C_trace("c-backend.scm: 194  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t1,lf[76],t27,lf[77]);}}}
else{
t27=C_eqp(t9,lf[78]);
if(C_truep(t27)){
t28=C_i_car(t7);
t29=C_i_cadr(t7);
t30=C_i_caddr(t7);
t31=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3281,a[2]=t30,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t29)){
C_trace("c-backend.scm: 201  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t31,lf[85],t28,lf[86]);}
else{
C_trace("c-backend.scm: 202  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t31,lf[87],t28,lf[88]);}}
else{
t28=C_eqp(t9,lf[89]);
if(C_truep(t28)){
t29=C_i_car(t7);
t30=C_i_cadr(t7);
t31=C_i_caddr(t7);
if(C_truep(t30)){
t32=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3329,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t33=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3343,a[2]=t29,a[3]=t32,tmp=(C_word)a,a+=4,tmp);
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3347,a[2]=t33,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 213  symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[73]+1)))(3,*((C_word*)lf[73]+1),t34,t31);}
else{
t32=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3350,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t33=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3364,a[2]=t29,a[3]=t32,tmp=(C_word)a,a+=4,tmp);
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3368,a[2]=t33,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 218  symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[73]+1)))(3,*((C_word*)lf[73]+1),t34,t31);}}
else{
t29=C_eqp(t9,lf[98]);
if(C_truep(t29)){
C_trace("c-backend.scm: 222  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t1,lf[99]);}
else{
t30=C_eqp(t9,lf[100]);
if(C_truep(t30)){
t31=C_i_cdr(t5);
t32=C_i_length(t31);
t33=t3;
t34=C_fixnum_increase(t32);
t35=C_i_cdr(t7);
t36=C_i_pairp(t35);
t37=(C_truep(t36)?C_i_cadr(t7):C_SCHEME_FALSE);
t38=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3401,a[2]=t36,a[3]=((C_word*)t0)[2],a[4]=t37,a[5]=t33,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[5],a[8]=t32,a[9]=t34,a[10]=t3,a[11]=t31,a[12]=((C_word*)t0)[4],a[13]=t1,a[14]=t5,a[15]=t7,tmp=(C_word)a,a+=16,tmp);
C_trace("c-backend.scm: 231  source-info->string");
((C_proc3)C_retrieve_symbol_proc(lf[149]))(3,*((C_word*)lf[149]+1),t38,t37);}
else{
t31=C_eqp(t9,lf[150]);
if(C_truep(t31)){
t32=C_i_length(t5);
t33=C_fixnum_increase(t32);
t34=C_i_car(t7);
t35=C_i_cadr(t7);
t36=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3989,a[2]=t35,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=t33,a[6]=t5,a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=t32,a[10]=t1,a[11]=t34,tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 315  lambda-literal-closure-size");
((C_proc3)C_retrieve_symbol_proc(lf[148]))(3,*((C_word*)lf[148]+1),t36,((C_word*)t0)[3]);}
else{
t32=C_eqp(t9,lf[154]);
if(C_truep(t32)){
t33=C_i_cdr(t5);
t34=C_i_length(t33);
t35=C_fixnum_increase(t34);
t36=C_i_caddr(t7);
t37=C_i_cadddr(t7);
t38=C_eqp(t37,C_fix(0));
t39=C_i_not(t38);
t40=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4074,a[2]=t36,a[3]=t37,a[4]=t39,a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=t33,a[9]=t1,a[10]=t5,tmp=(C_word)a,a+=11,tmp);
t41=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4078,a[2]=t40,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 343  find-lambda");
t42=((C_word*)((C_word*)t0)[2])[1];
f_2602(t42,t41,t36);}
else{
t33=C_eqp(t9,lf[156]);
if(C_truep(t33)){
t34=C_i_length(t5);
t35=C_fixnum_plus(t34,C_fix(1));
t36=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4097,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t37=C_i_car(t7);
C_trace("c-backend.scm: 360  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),t36,C_SCHEME_TRUE,lf[158],t37,lf[159],t35,lf[160]);}
else{
t34=C_eqp(t9,lf[161]);
if(C_truep(t34)){
t35=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4116,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 365  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t35,C_SCHEME_TRUE,lf[163]);}
else{
t35=C_eqp(t9,lf[164]);
if(C_truep(t35)){
t36=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4135,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t37=C_i_car(t7);
C_trace("c-backend.scm: 370  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t36,t37,C_make_character(40));}
else{
t36=C_eqp(t9,lf[165]);
if(C_truep(t36)){
t37=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4154,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t38=C_i_car(t7);
t39=C_i_length(t5);
C_trace("c-backend.scm: 375  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t37,t38,lf[166],t39);}
else{
t37=C_eqp(t9,lf[167]);
if(C_truep(t37)){
t38=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4190,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t39=C_i_cadr(t7);
C_trace("c-backend.scm: 383  foreign-result-conversion");
((C_proc4)C_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),t38,t39,lf[169]);}
else{
t38=C_eqp(t9,lf[170]);
if(C_truep(t38)){
t39=C_i_cadr(t7);
t40=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4210,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t41=C_i_car(t7);
t42=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4228,a[2]=t39,a[3]=t41,a[4]=t40,tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 387  foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t42,t39,lf[175]);}
else{
t39=C_eqp(t9,lf[176]);
if(C_truep(t39)){
t40=C_i_car(t7);
t41=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4244,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t42=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4258,a[2]=t40,a[3]=t41,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 393  foreign-result-conversion");
((C_proc4)C_retrieve_symbol_proc(lf[168]))(4,*((C_word*)lf[168]+1),t42,t40,lf[181]);}
else{
t40=C_eqp(t9,lf[182]);
if(C_truep(t40)){
t41=C_i_car(t7);
t42=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4274,a[2]=t41,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t43=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4302,a[2]=t42,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 399  foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t43,t41,lf[187]);}
else{
t41=C_eqp(t9,lf[188]);
if(C_truep(t41)){
t42=C_i_car(t7);
C_trace("c-backend.scm: 406  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t1,t42);}
else{
t42=C_eqp(t9,lf[189]);
if(C_truep(t42)){
t43=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4324,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t44=C_i_car(t7);
C_trace("c-backend.scm: 409  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t43,lf[191],t44,C_make_character(61));}
else{
t43=C_eqp(t9,lf[192]);
if(C_truep(t43)){
t44=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4347,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t45=C_i_car(t7);
C_trace("c-backend.scm: 414  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t44,t45,lf[193]);}
else{
t44=C_eqp(t9,lf[194]);
if(C_truep(t44)){
t45=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4366,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t5,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 419  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t45,C_SCHEME_TRUE,lf[198]);}
else{
t45=C_eqp(t9,lf[199]);
if(C_truep(t45)){
t46=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4449,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 434  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t46,lf[201]);}
else{
t46=t2;
t47=C_slot(t46,C_fix(1));
C_trace("c-backend.scm: 442  bomb");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t1,lf[202],t47);}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k4447 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 435  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k4450 in k4447 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4452,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 436  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[200]);}

/* k4453 in k4450 in k4447 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 437  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k4456 in k4453 in k4450 in k4447 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 438  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(58));}

/* k4459 in k4456 in k4453 in k4450 in k4447 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4461,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4464,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_caddr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 439  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k4462 in k4459 in k4456 in k4453 in k4450 in k4447 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 440  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k4364 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[5]);
C_trace("c-backend.scm: 420  expr");
t4=((C_word*)((C_word*)t0)[4])[1];
f_2647(t4,t2,t3,((C_word*)t0)[3]);}

/* k4367 in k4364 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4369,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 421  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[197]);}

/* k4370 in k4367 in k4364 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4372,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[6]);
t3=C_i_cdr(((C_word*)t0)[5]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4385,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4385(t7,((C_word*)t0)[2],t2,t3);}

/* doloop509 in k4370 in k4367 in k4364 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_4385(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4385,NULL,4,t0,t1,t2,t3);}
t4=C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4395,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 425  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t5,C_SCHEME_TRUE,lf[195]);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4408,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 428  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t5,C_SCHEME_TRUE,lf[196]);}}

/* k4406 in doloop509 in k4370 in k4367 in k4364 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4408,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4411,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=C_i_car(((C_word*)t0)[6]);
C_trace("c-backend.scm: 429  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k4409 in k4406 in doloop509 in k4370 in k4367 in k4364 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4411,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 430  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(58));}

/* k4412 in k4409 in k4406 in doloop509 in k4370 in k4367 in k4364 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4414,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4417,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[6]);
C_trace("c-backend.scm: 431  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k4415 in k4412 in k4409 in k4406 in doloop509 in k4370 in k4367 in k4364 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_fixnum_decrease(((C_word*)t0)[5]);
t3=C_i_cddr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_4385(t4,((C_word*)t0)[2],t2,t3);}

/* k4393 in doloop509 in k4370 in k4367 in k4364 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4395,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4398,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 426  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k4396 in k4393 in doloop509 in k4370 in k4367 in k4364 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 427  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(125));}

/* k4345 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4350,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 415  expr-args");
t3=((C_word*)((C_word*)t0)[4])[1];
f_4493(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4348 in k4345 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 416  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k4322 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4327,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 410  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k4325 in k4322 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 411  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[190]);}

/* k4300 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 399  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[185],t1,lf[186]);}

/* k4272 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4274,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4277,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[5]);
C_trace("c-backend.scm: 400  expr");
t4=((C_word*)((C_word*)t0)[4])[1];
f_2647(t4,t2,t3,((C_word*)t0)[3]);}

/* k4275 in k4272 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4277,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4280,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4294,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 401  foreign-argument-conversion");
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),t3,((C_word*)t0)[2]);}

/* k4292 in k4275 in k4272 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 401  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[184],t1);}

/* k4278 in k4275 in k4272 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4280,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4283,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 402  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k4281 in k4278 in k4275 in k4272 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 403  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[183]);}

/* k4256 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4258,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4262,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 393  foreign-type-declaration");
((C_proc4)C_retrieve_symbol_proc(lf[174]))(4,*((C_word*)lf[174]+1),t2,((C_word*)t0)[2],lf[180]);}

/* k4260 in k4256 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 393  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[178],t1,lf[179]);}

/* k4242 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4244,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4247,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 394  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k4245 in k4242 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 395  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[177]);}

/* k4226 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4228,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4232,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 387  foreign-argument-conversion");
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),t2,((C_word*)t0)[2]);}

/* k4230 in k4226 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 387  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),((C_word*)t0)[4],C_make_character(40),((C_word*)t0)[3],lf[172],((C_word*)t0)[2],C_make_character(41),t1);}

/* k4208 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4210,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4213,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 388  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k4211 in k4208 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 389  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[171]);}

/* k4188 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[3]);
C_trace("c-backend.scm: 383  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],t1,t2,C_make_character(41));}

/* k4152 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4154,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4157,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 378  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t3,C_make_character(44));}
else{
C_trace("c-backend.scm: 380  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_make_character(41));}}

/* k4164 in k4152 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 379  expr-args");
t2=((C_word*)((C_word*)t0)[5])[1];
f_4493(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4155 in k4152 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 380  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k4133 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4135,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4138,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 371  expr-args");
t3=((C_word*)((C_word*)t0)[4])[1];
f_4493(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4136 in k4133 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 372  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k4114 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4116,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4119,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 366  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k4117 in k4114 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 367  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[162]);}

/* k4095 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4100,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 361  expr-args");
t3=((C_word*)((C_word*)t0)[4])[1];
f_4493(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4098 in k4095 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 362  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[157]);}

/* k4076 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 343  lambda-literal-closure-size");
((C_proc3)C_retrieve_symbol_proc(lf[148]))(3,*((C_word*)lf[148]+1),((C_word*)t0)[2],t1);}

/* k4072 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4074,2,t0,t1);}
t2=C_eqp(t1,C_fix(0));
t3=C_i_car(((C_word*)t0)[10]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4022,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 345  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t4,((C_word*)t0)[2],C_make_character(40));}

/* k4020 in k4072 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4022,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4025,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4055,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 347  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t3,lf[155],((C_word*)t0)[2],C_make_character(41));}
else{
t3=t2;
f_4025(2,t3,C_SCHEME_UNDEFINED);}}

/* k4053 in k4020 in k4072 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_not(((C_word*)t0)[4]);
if(C_truep(t2)){
if(C_truep(t2)){
C_trace("c-backend.scm: 348  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_make_character(44));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_4025(2,t4,t3);}}
else{
if(C_truep(C_i_pairp(((C_word*)t0)[2]))){
C_trace("c-backend.scm: 348  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[3],C_make_character(44));}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
f_4025(2,t4,t3);}}}

/* k4023 in k4020 in k4072 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4025,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4028,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=t2;
f_4028(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4043,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 350  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t3,((C_word*)t0)[2],((C_word*)t0)[5]);}}

/* k4041 in k4023 in k4020 in k4072 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(C_i_pairp(((C_word*)t0)[3]))){
C_trace("c-backend.scm: 351  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(44));}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[2];
f_4028(2,t3,t2);}}

/* k4026 in k4023 in k4020 in k4072 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4028,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4031,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_i_pairp(((C_word*)t0)[4]))){
C_trace("c-backend.scm: 352  expr-args");
t3=((C_word*)((C_word*)t0)[3])[1];
f_4493(t3,t2,((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
C_trace("c-backend.scm: 353  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[5],C_make_character(41));}}

/* k4029 in k4026 in k4023 in k4020 in k4072 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_4031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 353  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3989,2,t0,t1);}
t2=C_eqp(t1,C_fix(0));
if(C_truep(((C_word*)t0)[11])){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3860,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 317  lambda-literal-temporaries");
((C_proc3)C_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3973,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 330  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t3,((C_word*)t0)[2],C_make_character(40));}}

/* k3971 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3973,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3976,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11150,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 332  expr-args");
t4=((C_word*)((C_word*)t0)[5])[1];
f_4493(t4,t3,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
C_trace("c-backend.scm: 331  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[153]);}}

/* f11150 in k3971 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f11150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 333  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k3974 in k3971 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3979,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 332  expr-args");
t3=((C_word*)((C_word*)t0)[4])[1];
f_4493(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3977 in k3974 in k3971 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 333  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k3858 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3863,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_fixnum_plus(t1,((C_word*)t0)[2]);
C_trace("c-backend.scm: 318  iota");
((C_proc5)C_retrieve_symbol_proc(lf[60]))(5,*((C_word*)lf[60]+1),t2,((C_word*)t0)[6],t3,C_fix(1));}

/* k3861 in k3858 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3866,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3920,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_3920(t6,t2,((C_word*)t0)[2],t1);}

/* loop407 in k3861 in k3858 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_3920(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3920,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3928,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3941,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=C_slot(t2,C_fix(0));
t9=C_slot(t3,C_fix(0));
C_trace("g418419");
t10=t6;
f_3928(t10,t7,t8,t9);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3939 in loop407 in k3861 in k3858 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3920(t4,((C_word*)t0)[2],t2,t3);}

/* g418 in loop407 in k3861 in k3858 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_3928(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3928,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3932,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 321  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t4,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}

/* k3930 in g418 in loop407 in k3861 in k3858 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3932,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3935,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 322  expr");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2647(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3933 in k3930 in g418 in loop407 in k3861 in k3858 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 323  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(59));}

/* k3864 in k3861 in k3858 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3866,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3869,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3876,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 327  iota");
((C_proc5)C_retrieve_symbol_proc(lf[60]))(5,*((C_word*)lf[60]+1),t3,((C_word*)t0)[2],C_fix(1),C_fix(1));}

/* k3874 in k3864 in k3861 in k3858 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3876,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3878,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3878(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop428 in k3874 in k3864 in k3861 in k3858 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_3878(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3878,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3893,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
C_trace("c-backend.scm: 326  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),t6,C_SCHEME_TRUE,C_make_character(116),t8,lf[152],t7,C_make_character(59));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3891 in loop428 in k3874 in k3864 in k3861 in k3858 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3878(t4,((C_word*)t0)[2],t2,t3);}

/* k3867 in k3864 in k3861 in k3858 in k3987 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 328  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[151]);}

/* k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3404,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=C_i_cddr(((C_word*)t0)[15]);
t4=C_i_pairp(t3);
t5=t2;
f_3404(t5,(C_truep(t4)?C_i_caddr(((C_word*)t0)[15]):C_SCHEME_FALSE));}
else{
t3=t2;
f_3404(t3,C_SCHEME_FALSE);}}

/* k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_3404(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3404,NULL,2,t0,t1);}
t2=(C_truep(t1)?C_i_cadddr(((C_word*)t0)[15]):C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3410,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=t1,a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],tmp=(C_word)a,a+=17,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3806,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3810,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 234  find-lambda");
t6=((C_word*)((C_word*)t0)[2])[1];
f_2602(t6,t5,t1);}
else{
t4=t3;
f_3410(t4,C_SCHEME_FALSE);}}

/* k3808 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 234  lambda-literal-closure-size");
((C_proc3)C_retrieve_symbol_proc(lf[148]))(3,*((C_word*)lf[148]+1),((C_word*)t0)[2],t1);}

/* k3804 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3410(t2,C_eqp(t1,C_fix(0)));}

/* k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_3410(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3410,NULL,2,t0,t1);}
t2=C_i_car(((C_word*)t0)[16]);
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3416,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=t2,tmp=(C_word)a,a+=16,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep(C_retrieve(lf[139]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3792,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[2];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2632,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 71   ->string");
((C_proc3)C_retrieve_symbol_proc(lf[83]))(3,*((C_word*)lf[83]+1),t6,t5);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3799,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=((C_word*)t0)[2];
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11142,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 72   ->string");
((C_proc3)C_retrieve_symbol_proc(lf[83]))(3,*((C_word*)lf[83]+1),t6,t5);}}
else{
t4=t3;
f_3416(2,t4,C_SCHEME_UNDEFINED);}}

/* f11142 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f11142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 72   string-translate*");
((C_proc4)C_retrieve_symbol_proc(lf[81]))(4,*((C_word*)lf[81]+1),((C_word*)t0)[2],t1,lf[147]);}

/* k3797 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 239  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[145],t1,lf[146]);}

/* k2630 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 71   string-translate");
((C_proc5)C_retrieve_symbol_proc(lf[142]))(5,*((C_word*)lf[142]+1),((C_word*)t0)[2],t1,lf[143],lf[144]);}

/* k3790 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 238  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[140],t1,lf[141]);}

/* k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3416(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3416,2,t0,t1);}
t2=C_slot(((C_word*)t0)[15],C_fix(1));
t3=C_eqp(lf[33],t2);
if(C_truep(t3)){
t4=C_slot(((C_word*)t0)[15],C_fix(2));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3433,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[14],tmp=(C_word)a,a+=6,tmp);
t6=C_i_car(t4);
C_trace("c-backend.scm: 242  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t5,C_SCHEME_TRUE,t6,C_make_character(40),((C_word*)t0)[10],lf[102]);}
else{
if(C_truep(((C_word*)t0)[9])){
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3452,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3614,a[2]=((C_word*)t0)[5],a[3]=t4,a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
C_trace("c-backend.scm: 246  lambda-literal-id");
((C_proc3)C_retrieve_symbol_proc(lf[10]))(3,*((C_word*)lf[10]+1),t5,((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3620,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[15],tmp=(C_word)a,a+=11,tmp);
t5=C_slot(((C_word*)t0)[15],C_fix(1));
t6=C_eqp(lf[67],t5);
if(C_truep(t6)){
t7=C_retrieve(lf[131]);
if(C_truep(t7)){
t8=t4;
f_3620(t8,C_SCHEME_FALSE);}
else{
t8=C_retrieve(lf[136]);
if(C_truep(t8)){
t9=t4;
f_3620(t9,C_SCHEME_FALSE);}
else{
t9=C_i_car(((C_word*)t0)[2]);
t10=t4;
f_3620(t10,C_i_not(t9));}}}
else{
t7=t4;
f_3620(t7,C_SCHEME_FALSE);}}}}

/* k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_3620(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3620,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_slot(((C_word*)t0)[10],C_fix(2));
t3=C_i_car(t2);
t4=C_i_cadr(t2);
t5=C_i_caddr(t2);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3640,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t5,a[6]=t7,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
C_trace("c-backend.scm: 280  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t8,C_SCHEME_TRUE,lf[126],((C_word*)t0)[5],lf[127]);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3709,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("c-backend.scm: 299  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[4],C_make_character(61));}}

/* k3707 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3712,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 300  expr");
t3=((C_word*)((C_word*)t0)[3])[1];
f_2647(t3,t2,((C_word*)t0)[2],((C_word*)t0)[7]);}

/* k3710 in k3707 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3712,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3715,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 301  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,C_make_character(59),C_SCHEME_TRUE,lf[137],((C_word*)t0)[4],lf[138]);}

/* k3713 in k3710 in k3707 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3715,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3718,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=C_retrieve(lf[131]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3730,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_3730(t5,t3);}
else{
t5=C_retrieve(lf[136]);
t6=t4;
f_3730(t6,(C_truep(t5)?t5:C_i_car(((C_word*)t0)[2])));}}

/* k3728 in k3713 in k3710 in k3707 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_3730(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("c-backend.scm: 304  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[132],((C_word*)t0)[2],lf[133]);}
else{
C_trace("c-backend.scm: 305  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[134],((C_word*)t0)[2],lf[135]);}}

/* k3716 in k3713 in k3710 in k3707 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3718,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3721,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 306  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,lf[129],((C_word*)t0)[3],lf[130],((C_word*)t0)[2],C_make_character(44));}

/* k3719 in k3716 in k3713 in k3710 in k3707 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3721,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3724,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 307  expr-args");
t3=((C_word*)((C_word*)t0)[4])[1];
f_4493(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3722 in k3719 in k3716 in k3713 in k3710 in k3707 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 308  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[128]);}

/* k3638 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3640(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3640,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3643,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3656,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3681,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 282  number->string");
C_number_to_string(3,0,t4,((C_word*)t0)[2]);}
else{
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3688,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3695,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 289  number->string");
C_number_to_string(3,0,t4,((C_word*)t0)[2]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3699,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3706,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 293  number->string");
C_number_to_string(3,0,t4,((C_word*)t0)[2]);}}}

/* k3704 in k3638 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 293  string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[115]+1)))(5,*((C_word*)lf[115]+1),((C_word*)t0)[2],lf[124],t1,lf[125]);}

/* k3697 in k3638 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
C_trace("c-backend.scm: 294  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[122],((C_word*)t0)[2],lf[123]);}

/* k3693 in k3638 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 289  string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[115]+1)))(5,*((C_word*)lf[115]+1),((C_word*)t0)[2],lf[120],t1,lf[121]);}

/* k3686 in k3638 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
C_trace("c-backend.scm: 290  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[118],((C_word*)((C_word*)t0)[3])[1],lf[119]);}

/* k3679 in k3638 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 282  string-append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[115]+1)))(5,*((C_word*)lf[115]+1),((C_word*)t0)[2],lf[116],t1,lf[117]);}

/* k3654 in k3638 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3656,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
if(C_truep(((C_word*)t0)[4])){
C_trace("c-backend.scm: 284  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[111],((C_word*)((C_word*)t0)[5])[1],lf[112]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3669,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3673,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=C_i_cadddr(((C_word*)t0)[2]);
C_trace("c-backend.scm: 286  symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[73]+1)))(3,*((C_word*)lf[73]+1),t4,t5);}}

/* k3671 in k3654 in k3638 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 286  c-ify-string");
((C_proc3)C_retrieve_symbol_proc(lf[72]))(3,*((C_word*)lf[72]+1),((C_word*)t0)[2],t1);}

/* k3667 in k3654 in k3638 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 285  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[113],((C_word*)((C_word*)t0)[2])[1],lf[114],t1,C_make_character(41));}

/* k3641 in k3638 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3643,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3646,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 295  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),t2,lf[110],((C_word*)t0)[3],C_make_character(44),((C_word*)((C_word*)t0)[2])[1],C_make_character(44));}

/* k3644 in k3641 in k3638 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3649,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 296  expr-args");
t3=((C_word*)((C_word*)t0)[4])[1];
f_4493(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3647 in k3644 in k3641 in k3638 in k3618 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 297  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[109]);}

/* k3612 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_eqp(((C_word*)t0)[4],t1);
if(C_truep(t2)){
C_trace("c-backend.scm: 247  lambda-literal-looping");
((C_proc3)C_retrieve_symbol_proc(lf[108]))(3,*((C_word*)lf[108]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
f_3452(2,t3,C_SCHEME_FALSE);}}

/* k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3452,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3455,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],tmp=(C_word)a,a+=9,tmp);
C_trace("c-backend.scm: 248  lambda-literal-temporaries");
((C_proc3)C_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),t2,((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3574,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[13],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[14],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_3574(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3598,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[10],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 263  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t3,C_SCHEME_TRUE,C_make_character(116),((C_word*)t0)[4],C_make_character(61));}}}

/* k3596 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3598,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3601,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 264  expr");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2647(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3599 in k3596 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 265  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(59));}

/* k3572 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3574,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3577,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
C_trace("c-backend.scm: 266  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,((C_word*)t0)[2],C_make_character(40));}

/* k3575 in k3572 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3577,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3580,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_3580(2,t3,C_SCHEME_UNDEFINED);}
else{
C_trace("c-backend.scm: 267  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),t2,((C_word*)t0)[2],C_make_character(44));}}

/* k3578 in k3575 in k3572 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3583,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11137,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 269  expr-args");
t4=((C_word*)((C_word*)t0)[6])[1];
f_4493(t4,t3,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
C_trace("c-backend.scm: 268  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_make_character(116),((C_word*)t0)[2],C_make_character(44));}}

/* f11137 in k3578 in k3575 in k3572 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f11137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 270  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[107]);}

/* k3581 in k3578 in k3575 in k3572 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3583,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3586,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 269  expr-args");
t3=((C_word*)((C_word*)t0)[4])[1];
f_4493(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3584 in k3581 in k3578 in k3575 in k3572 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 270  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[107]);}

/* k3453 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3458,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=C_fixnum_plus(t1,((C_word*)t0)[6]);
C_trace("c-backend.scm: 249  iota");
((C_proc5)C_retrieve_symbol_proc(lf[60]))(5,*((C_word*)lf[60]+1),t2,((C_word*)t0)[5],t3,C_fix(1));}

/* k3456 in k3453 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3461,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3521,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_3521(t6,t2,((C_word*)t0)[2],t1);}

/* loop286 in k3456 in k3453 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_3521(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3521,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3529,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3542,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=C_slot(t2,C_fix(0));
t9=C_slot(t3,C_fix(0));
C_trace("g297298");
t10=t6;
f_3529(t10,t7,t8,t9);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3540 in loop286 in k3456 in k3453 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3521(t4,((C_word*)t0)[2],t2,t3);}

/* g297 in loop286 in k3456 in k3453 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_3529(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3529,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3533,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 252  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t4,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}

/* k3531 in g297 in loop286 in k3456 in k3453 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3536,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 253  expr");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2647(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3534 in k3531 in g297 in loop286 in k3456 in k3453 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 254  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(59));}

/* k3459 in k3456 in k3453 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3461,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3464,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3477,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 258  iota");
((C_proc5)C_retrieve_symbol_proc(lf[60]))(5,*((C_word*)lf[60]+1),t3,((C_word*)t0)[2],C_fix(1),C_fix(1));}

/* k3475 in k3459 in k3456 in k3453 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3477,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3479,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3479(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop307 in k3475 in k3459 in k3456 in k3453 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_3479(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3479,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3494,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=C_slot(t2,C_fix(0));
t8=C_slot(t3,C_fix(0));
C_trace("c-backend.scm: 257  gen");
((C_proc8)C_retrieve_proc(*((C_word*)lf[1]+1)))(8,*((C_word*)lf[1]+1),t6,C_SCHEME_TRUE,C_make_character(116),t8,lf[105],t7,C_make_character(59));}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3492 in loop307 in k3475 in k3459 in k3456 in k3453 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3479(t4,((C_word*)t0)[2],t2,t3);}

/* k3462 in k3459 in k3456 in k3453 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3464,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3467,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace("c-backend.scm: 260  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[4],C_SCHEME_TRUE,lf[103]);}
else{
C_trace("c-backend.scm: 259  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t2,C_SCHEME_TRUE,lf[104],((C_word*)t0)[2],C_make_character(59));}}

/* k3465 in k3462 in k3459 in k3456 in k3453 in k3450 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 260  gen");
((C_proc4)C_retrieve_proc(*((C_word*)lf[1]+1)))(4,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_SCHEME_TRUE,lf[103]);}

/* k3431 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3436,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 243  expr-args");
t3=((C_word*)((C_word*)t0)[4])[1];
f_4493(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3434 in k3431 in k3414 in k3408 in k3402 in k3399 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 244  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[101]);}

/* k3366 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11129,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 72   ->string");
((C_proc3)C_retrieve_symbol_proc(lf[83]))(3,*((C_word*)lf[83]+1),t2,t1);}

/* f11129 in k3366 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f11129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 72   string-translate*");
((C_proc4)C_retrieve_symbol_proc(lf[81]))(4,*((C_word*)lf[81]+1),((C_word*)t0)[2],t1,lf[97]);}

/* k3362 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 217  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[94],((C_word*)t0)[2],lf[95],t1,lf[96]);}

/* k3348 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3353,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 219  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k3351 in k3348 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 220  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k3345 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11124,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 72   ->string");
((C_proc3)C_retrieve_symbol_proc(lf[83]))(3,*((C_word*)lf[83]+1),t2,t1);}

/* f11124 in k3345 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f11124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 72   string-translate*");
((C_proc4)C_retrieve_symbol_proc(lf[81]))(4,*((C_word*)lf[81]+1),((C_word*)t0)[2],t1,lf[93]);}

/* k3341 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 212  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[90],((C_word*)t0)[2],lf[91],t1,lf[92]);}

/* k3327 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3332,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 214  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k3330 in k3327 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 215  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(59));}

/* k3279 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3281(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3281,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3284,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3298,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3302,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 203  ##sys#symbol->qualified-string");
((C_proc3)C_retrieve_symbol_proc(lf[84]))(3,*((C_word*)lf[84]+1),t4,((C_word*)t0)[2]);}

/* k3300 in k3279 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3302,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f11119,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 72   ->string");
((C_proc3)C_retrieve_symbol_proc(lf[83]))(3,*((C_word*)lf[83]+1),t2,t1);}

/* f11119 in k3300 in k3279 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f11119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 72   string-translate*");
((C_proc4)C_retrieve_symbol_proc(lf[81]))(4,*((C_word*)lf[81]+1),((C_word*)t0)[2],t1,lf[82]);}

/* k3296 in k3279 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 203  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[79],t1,lf[80]);}

/* k3282 in k3279 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3284,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3287,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 204  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k3285 in k3282 in k3279 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 205  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k3248 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 192  c-ify-string");
((C_proc3)C_retrieve_symbol_proc(lf[72]))(3,*((C_word*)lf[72]+1),((C_word*)t0)[2],t1);}

/* k3244 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 192  gen");
((C_proc7)C_retrieve_proc(*((C_word*)lf[1]+1)))(7,*((C_word*)lf[1]+1),((C_word*)t0)[3],lf[70],((C_word*)t0)[2],lf[71],t1,C_make_character(41));}

/* k3202 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_car(((C_word*)t0)[5]);
C_trace("c-backend.scm: 183  expr");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2647(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k3170 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3175,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 176  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k3173 in k3170 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 177  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[63]);}

/* k3099 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3104,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3115,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 171  iota");
((C_proc5)C_retrieve_symbol_proc(lf[60]))(5,*((C_word*)lf[60]+1),t3,((C_word*)t0)[6],C_fix(1),C_fix(1));}

/* k3113 in k3099 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3115,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3117,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3117(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop182 in k3113 in k3099 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_3117(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3117,NULL,4,t0,t1,t2,t3);}
t4=C_i_pairp(t2);
t5=(C_truep(t4)?C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3125,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3138,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t8=C_slot(t2,C_fix(0));
t9=C_slot(t3,C_fix(0));
C_trace("g193194");
t10=t6;
f_3125(t10,t7,t8,t9);}
else{
t6=C_SCHEME_UNDEFINED;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k3136 in loop182 in k3113 in k3099 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_slot(((C_word*)t0)[5],C_fix(1));
t3=C_slot(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3117(t4,((C_word*)t0)[2],t2,t3);}

/* g193 in loop182 in k3113 in k3099 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_3125(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3125,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3129,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 168  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t4,lf[58],t3,lf[59]);}

/* k3127 in g193 in loop182 in k3113 in k3099 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3132,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 169  expr");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2647(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3130 in k3127 in g193 in loop182 in k3113 in k3099 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 170  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(44));}

/* k3102 in k3099 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_fixnum_increase(((C_word*)t0)[3]);
C_trace("c-backend.scm: 172  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[56],t2,lf[57]);}

/* k3067 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3072,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 158  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k3070 in k3067 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3072,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 159  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[53]);}

/* k3073 in k3070 in k3067 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3078,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 160  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k3076 in k3073 in k3070 in k3067 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 161  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k3038 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3040,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3043,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 151  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k3041 in k3038 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3043,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 152  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[50]);}

/* k3044 in k3041 in k3038 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3046,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3049,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 153  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k3047 in k3044 in k3041 in k3038 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 154  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k3001 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3003,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3006,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[5]);
C_trace("c-backend.scm: 144  expr");
t4=((C_word*)((C_word*)t0)[4])[1];
f_2647(t4,t2,t3,((C_word*)t0)[3]);}

/* k3004 in k3001 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3006,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3009,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[2]);
t4=C_fixnum_plus(t3,C_fix(1));
C_trace("c-backend.scm: 145  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,lf[46],t4,lf[47]);}

/* k3007 in k3004 in k3001 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3012,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 146  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k3010 in k3007 in k3004 in k3001 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_3012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 147  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k2968 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2970,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[5]);
C_trace("c-backend.scm: 137  expr");
t4=((C_word*)((C_word*)t0)[4])[1];
f_2647(t4,t2,t3,((C_word*)t0)[3]);}

/* k2971 in k2968 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2973,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2976,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[2]);
C_trace("c-backend.scm: 138  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_make_character(44),t3,C_make_character(44));}

/* k2974 in k2971 in k2968 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2979,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 139  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k2977 in k2974 in k2971 in k2968 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 140  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(41));}

/* k2949 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2954,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 132  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k2952 in k2949 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 133  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[41]);}

/* k2922 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2924,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2927,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 127  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k2925 in k2922 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_i_car(((C_word*)t0)[3]);
t3=C_fixnum_plus(t2,C_fix(1));
C_trace("c-backend.scm: 128  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),((C_word*)t0)[2],lf[38],t3,C_make_character(93));}

/* k2896 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2898,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[5]);
C_trace("c-backend.scm: 121  expr");
t4=((C_word*)((C_word*)t0)[4])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k2899 in k2896 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2904,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 122  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(59));}

/* k2902 in k2899 in k2896 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_i_cadr(((C_word*)t0)[5]);
C_trace("c-backend.scm: 123  expr");
t3=((C_word*)((C_word*)t0)[4])[1];
f_2647(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* loop in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_2844(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2844,NULL,5,t0,t1,t2,t3,t4);}
t5=t4;
if(C_truep(C_fixnum_greaterp(t5,C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2854,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
C_trace("c-backend.scm: 112  gen");
((C_proc6)C_retrieve_proc(*((C_word*)lf[1]+1)))(6,*((C_word*)lf[1]+1),t6,C_SCHEME_TRUE,C_make_character(116),t3,C_make_character(61));}
else{
t6=C_i_car(t2);
C_trace("c-backend.scm: 116  expr");
t7=((C_word*)((C_word*)t0)[2])[1];
f_2647(t7,t1,t6,t3);}}

/* k2852 in loop in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2854,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2857,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=C_i_car(((C_word*)t0)[7]);
C_trace("c-backend.scm: 113  expr");
t4=((C_word*)((C_word*)t0)[2])[1];
f_2647(t4,t2,t3,((C_word*)t0)[6]);}

/* k2855 in k2852 in loop in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2857,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2860,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("c-backend.scm: 114  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,C_make_character(59));}

/* k2858 in k2855 in k2852 in loop in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_i_cdr(((C_word*)t0)[6]);
t3=C_fixnum_increase(((C_word*)t0)[5]);
t4=C_fixnum_decrease(((C_word*)t0)[4]);
C_trace("c-backend.scm: 115  loop");
t5=((C_word*)((C_word*)t0)[3])[1];
f_2844(t5,((C_word*)t0)[2],t2,t3,t4);}

/* k2784 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_car(((C_word*)t0)[4]);
C_trace("c-backend.scm: 99   expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k2787 in k2784 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 100  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,lf[31]);}

/* k2790 in k2787 in k2784 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2792,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2795,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=C_i_cadr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 101  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k2793 in k2790 in k2787 in k2784 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2795,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("c-backend.scm: 102  gen");
((C_proc5)C_retrieve_proc(*((C_word*)lf[1]+1)))(5,*((C_word*)lf[1]+1),t2,C_make_character(125),C_SCHEME_TRUE,lf[30]);}

/* k2796 in k2793 in k2790 in k2787 in k2784 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2798,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2801,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=C_i_caddr(((C_word*)t0)[4]);
C_trace("c-backend.scm: 103  expr");
t4=((C_word*)((C_word*)t0)[3])[1];
f_2647(t4,t2,t3,((C_word*)t0)[2]);}

/* k2799 in k2796 in k2793 in k2790 in k2787 in k2784 in expr in expression in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("c-backend.scm: 104  gen");
((C_proc3)C_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),((C_word*)t0)[2],C_make_character(125));}

/* find-lambda in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_fcall f_2602(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2602,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2606,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2614,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 68   find");
((C_proc4)C_retrieve_symbol_proc(lf[11]))(4,*((C_word*)lf[11]+1),t3,t4,((C_word*)t0)[2]);}

/* a2613 in find-lambda in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2614(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2614,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2622,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("c-backend.scm: 68   lambda-literal-id");
((C_proc3)C_retrieve_symbol_proc(lf[10]))(3,*((C_word*)lf[10]+1),t3,t2);}

/* k2620 in a2613 in find-lambda in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_eqp(((C_word*)t0)[2],t1));}

/* k2604 in find-lambda in ##compiler#generate-code in k2595 in k2509 in k2506 */
static void C_ccall f_2606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
C_trace("c-backend.scm: 69   bomb");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[9],((C_word*)t0)[2]);}}

/* ##compiler#gen-list in k2509 in k2506 */
static void C_ccall f_2557(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2557,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2565,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("c-backend.scm: 50   intersperse");
((C_proc4)C_retrieve_symbol_proc(lf[5]))(4,*((C_word*)lf[5]+1),t3,t2,C_make_character(32));}

/* k2563 in ##compiler#gen-list in k2509 in k2506 */
static void C_ccall f_2565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2565,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2567,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2567(t5,((C_word*)t0)[2],t1);}

/* loop50 in k2563 in ##compiler#gen-list in k2509 in k2506 */
static void C_fcall f_2567(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2567,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2582,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
C_trace("c-backend.scm: 49   display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t3,t4,*((C_word*)lf[0]+1));}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2580 in loop50 in k2563 in ##compiler#gen-list in k2509 in k2506 */
static void C_ccall f_2582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2567(t3,((C_word*)t0)[2],t2);}

/* ##compiler#gen in k2509 in k2506 */
static void C_ccall f_2514(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2514r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2514r(t0,t1,t2);}}

static void C_ccall f_2514r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2520,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_2520(t6,t1,t2);}

/* loop34 in ##compiler#gen in k2509 in k2506 */
static void C_fcall f_2520(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2520,NULL,3,t0,t1,t2);}
if(C_truep(C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2544,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=C_slot(t2,C_fix(0));
t5=C_eqp(C_SCHEME_TRUE,t4);
if(C_truep(t5)){
C_trace("c-backend.scm: 43   newline");
((C_proc3)C_retrieve_proc(*((C_word*)lf[2]+1)))(3,*((C_word*)lf[2]+1),t3,*((C_word*)lf[0]+1));}
else{
C_trace("c-backend.scm: 44   display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[3]+1)))(4,*((C_word*)lf[3]+1),t3,t4,*((C_word*)lf[0]+1));}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2542 in loop34 in ##compiler#gen in k2509 in k2506 */
static void C_ccall f_2544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2520(t3,((C_word*)t0)[2],t2);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[795] = {
{"toplevel:c_backend_scm",(void*)C_backend_toplevel},
{"f_2508:c_backend_scm",(void*)f_2508},
{"f_2511:c_backend_scm",(void*)f_2511},
{"f_10305:c_backend_scm",(void*)f_10305},
{"f_10308:c_backend_scm",(void*)f_10308},
{"f_10335:c_backend_scm",(void*)f_10335},
{"f_10331:c_backend_scm",(void*)f_10331},
{"f_10311:c_backend_scm",(void*)f_10311},
{"f_10314:c_backend_scm",(void*)f_10314},
{"f_10327:c_backend_scm",(void*)f_10327},
{"f_10317:c_backend_scm",(void*)f_10317},
{"f_10320:c_backend_scm",(void*)f_10320},
{"f_10323:c_backend_scm",(void*)f_10323},
{"f_2597:c_backend_scm",(void*)f_2597},
{"f_10005:c_backend_scm",(void*)f_10005},
{"f_10281:c_backend_scm",(void*)f_10281},
{"f_10279:c_backend_scm",(void*)f_10279},
{"f_10267:c_backend_scm",(void*)f_10267},
{"f_10237:c_backend_scm",(void*)f_10237},
{"f_10198:c_backend_scm",(void*)f_10198},
{"f_10185:c_backend_scm",(void*)f_10185},
{"f_10181:c_backend_scm",(void*)f_10181},
{"f_10067:c_backend_scm",(void*)f_10067},
{"f_10014:c_backend_scm",(void*)f_10014},
{"f_9398:c_backend_scm",(void*)f_9398},
{"f_9509:c_backend_scm",(void*)f_9509},
{"f_9674:c_backend_scm",(void*)f_9674},
{"f_9701:c_backend_scm",(void*)f_9701},
{"f_9879:c_backend_scm",(void*)f_9879},
{"f_9882:c_backend_scm",(void*)f_9882},
{"f_9885:c_backend_scm",(void*)f_9885},
{"f_9888:c_backend_scm",(void*)f_9888},
{"f_9858:c_backend_scm",(void*)f_9858},
{"f_9861:c_backend_scm",(void*)f_9861},
{"f_9864:c_backend_scm",(void*)f_9864},
{"f_9867:c_backend_scm",(void*)f_9867},
{"f_9837:c_backend_scm",(void*)f_9837},
{"f_9840:c_backend_scm",(void*)f_9840},
{"f_9843:c_backend_scm",(void*)f_9843},
{"f_9846:c_backend_scm",(void*)f_9846},
{"f_9800:c_backend_scm",(void*)f_9800},
{"f_9803:c_backend_scm",(void*)f_9803},
{"f_9806:c_backend_scm",(void*)f_9806},
{"f_9809:c_backend_scm",(void*)f_9809},
{"f_9779:c_backend_scm",(void*)f_9779},
{"f_9782:c_backend_scm",(void*)f_9782},
{"f_9785:c_backend_scm",(void*)f_9785},
{"f_9788:c_backend_scm",(void*)f_9788},
{"f_9758:c_backend_scm",(void*)f_9758},
{"f_9761:c_backend_scm",(void*)f_9761},
{"f_9764:c_backend_scm",(void*)f_9764},
{"f_9767:c_backend_scm",(void*)f_9767},
{"f_9737:c_backend_scm",(void*)f_9737},
{"f_9740:c_backend_scm",(void*)f_9740},
{"f_9743:c_backend_scm",(void*)f_9743},
{"f_9746:c_backend_scm",(void*)f_9746},
{"f_9716:c_backend_scm",(void*)f_9716},
{"f_9719:c_backend_scm",(void*)f_9719},
{"f_9722:c_backend_scm",(void*)f_9722},
{"f_9725:c_backend_scm",(void*)f_9725},
{"f_9678:c_backend_scm",(void*)f_9678},
{"f_9644:c_backend_scm",(void*)f_9644},
{"f_9647:c_backend_scm",(void*)f_9647},
{"f_9650:c_backend_scm",(void*)f_9650},
{"f_9653:c_backend_scm",(void*)f_9653},
{"f_9623:c_backend_scm",(void*)f_9623},
{"f_9626:c_backend_scm",(void*)f_9626},
{"f_9629:c_backend_scm",(void*)f_9629},
{"f_9632:c_backend_scm",(void*)f_9632},
{"f_9602:c_backend_scm",(void*)f_9602},
{"f_9605:c_backend_scm",(void*)f_9605},
{"f_9608:c_backend_scm",(void*)f_9608},
{"f_9611:c_backend_scm",(void*)f_9611},
{"f_9578:c_backend_scm",(void*)f_9578},
{"f_9581:c_backend_scm",(void*)f_9581},
{"f_9584:c_backend_scm",(void*)f_9584},
{"f_9587:c_backend_scm",(void*)f_9587},
{"f_9557:c_backend_scm",(void*)f_9557},
{"f_9560:c_backend_scm",(void*)f_9560},
{"f_9563:c_backend_scm",(void*)f_9563},
{"f_9566:c_backend_scm",(void*)f_9566},
{"f_9533:c_backend_scm",(void*)f_9533},
{"f_9536:c_backend_scm",(void*)f_9536},
{"f_9539:c_backend_scm",(void*)f_9539},
{"f_9542:c_backend_scm",(void*)f_9542},
{"f_9512:c_backend_scm",(void*)f_9512},
{"f_9515:c_backend_scm",(void*)f_9515},
{"f_9518:c_backend_scm",(void*)f_9518},
{"f_9521:c_backend_scm",(void*)f_9521},
{"f_9488:c_backend_scm",(void*)f_9488},
{"f_9491:c_backend_scm",(void*)f_9491},
{"f_9494:c_backend_scm",(void*)f_9494},
{"f_9497:c_backend_scm",(void*)f_9497},
{"f_9467:c_backend_scm",(void*)f_9467},
{"f_9470:c_backend_scm",(void*)f_9470},
{"f_9473:c_backend_scm",(void*)f_9473},
{"f_9476:c_backend_scm",(void*)f_9476},
{"f_9400:c_backend_scm",(void*)f_9400},
{"f_8908:c_backend_scm",(void*)f_8908},
{"f_8938:c_backend_scm",(void*)f_8938},
{"f_8965:c_backend_scm",(void*)f_8965},
{"f_9160:c_backend_scm",(void*)f_9160},
{"f_9169:c_backend_scm",(void*)f_9169},
{"f_9178:c_backend_scm",(void*)f_9178},
{"f_9205:c_backend_scm",(void*)f_9205},
{"f_9282:c_backend_scm",(void*)f_9282},
{"f_8910:c_backend_scm",(void*)f_8910},
{"f_8024:c_backend_scm",(void*)f_8024},
{"f_8101:c_backend_scm",(void*)f_8101},
{"f_8203:c_backend_scm",(void*)f_8203},
{"f_8236:c_backend_scm",(void*)f_8236},
{"f_8332:c_backend_scm",(void*)f_8332},
{"f_8344:c_backend_scm",(void*)f_8344},
{"f_8359:c_backend_scm",(void*)f_8359},
{"f_8404:c_backend_scm",(void*)f_8404},
{"f_8421:c_backend_scm",(void*)f_8421},
{"f_8438:c_backend_scm",(void*)f_8438},
{"f_8477:c_backend_scm",(void*)f_8477},
{"f_8494:c_backend_scm",(void*)f_8494},
{"f_8511:c_backend_scm",(void*)f_8511},
{"f_8528:c_backend_scm",(void*)f_8528},
{"f_8545:c_backend_scm",(void*)f_8545},
{"f_8562:c_backend_scm",(void*)f_8562},
{"f_8579:c_backend_scm",(void*)f_8579},
{"f_8591:c_backend_scm",(void*)f_8591},
{"f_8598:c_backend_scm",(void*)f_8598},
{"f_8608:c_backend_scm",(void*)f_8608},
{"f_8648:c_backend_scm",(void*)f_8648},
{"f_8618:c_backend_scm",(void*)f_8618},
{"f_8606:c_backend_scm",(void*)f_8606},
{"f_8602:c_backend_scm",(void*)f_8602},
{"f_8569:c_backend_scm",(void*)f_8569},
{"f_8552:c_backend_scm",(void*)f_8552},
{"f_8535:c_backend_scm",(void*)f_8535},
{"f_8518:c_backend_scm",(void*)f_8518},
{"f_8501:c_backend_scm",(void*)f_8501},
{"f_8484:c_backend_scm",(void*)f_8484},
{"f_8449:c_backend_scm",(void*)f_8449},
{"f_8459:c_backend_scm",(void*)f_8459},
{"f_8457:c_backend_scm",(void*)f_8457},
{"f_8453:c_backend_scm",(void*)f_8453},
{"f_8445:c_backend_scm",(void*)f_8445},
{"f_8432:c_backend_scm",(void*)f_8432},
{"f_8415:c_backend_scm",(void*)f_8415},
{"f_8363:c_backend_scm",(void*)f_8363},
{"f_8031:c_backend_scm",(void*)f_8031},
{"f_8026:c_backend_scm",(void*)f_8026},
{"f_7959:c_backend_scm",(void*)f_7959},
{"f_7963:c_backend_scm",(void*)f_7963},
{"f_7966:c_backend_scm",(void*)f_7966},
{"f_7969:c_backend_scm",(void*)f_7969},
{"f_7972:c_backend_scm",(void*)f_7972},
{"f_7978:c_backend_scm",(void*)f_7978},
{"f_8022:c_backend_scm",(void*)f_8022},
{"f_7981:c_backend_scm",(void*)f_7981},
{"f_7989:c_backend_scm",(void*)f_7989},
{"f_8010:c_backend_scm",(void*)f_8010},
{"f_7993:c_backend_scm",(void*)f_7993},
{"f_7984:c_backend_scm",(void*)f_7984},
{"f_7465:c_backend_scm",(void*)f_7465},
{"f_7471:c_backend_scm",(void*)f_7471},
{"f_7946:c_backend_scm",(void*)f_7946},
{"f_7479:c_backend_scm",(void*)f_7479},
{"f_7483:c_backend_scm",(void*)f_7483},
{"f_7486:c_backend_scm",(void*)f_7486},
{"f_7489:c_backend_scm",(void*)f_7489},
{"f_7492:c_backend_scm",(void*)f_7492},
{"f_7498:c_backend_scm",(void*)f_7498},
{"f_7844:c_backend_scm",(void*)f_7844},
{"f_7847:c_backend_scm",(void*)f_7847},
{"f_7943:c_backend_scm",(void*)f_7943},
{"f_7850:c_backend_scm",(void*)f_7850},
{"f_7853:c_backend_scm",(void*)f_7853},
{"f_7856:c_backend_scm",(void*)f_7856},
{"f_7859:c_backend_scm",(void*)f_7859},
{"f_7892:c_backend_scm",(void*)f_7892},
{"f_7908:c_backend_scm",(void*)f_7908},
{"f_7911:c_backend_scm",(void*)f_7911},
{"f_7862:c_backend_scm",(void*)f_7862},
{"f_7890:c_backend_scm",(void*)f_7890},
{"f_7865:c_backend_scm",(void*)f_7865},
{"f_7868:c_backend_scm",(void*)f_7868},
{"f_7871:c_backend_scm",(void*)f_7871},
{"f_7500:c_backend_scm",(void*)f_7500},
{"f_7510:c_backend_scm",(void*)f_7510},
{"f_7519:c_backend_scm",(void*)f_7519},
{"f_7531:c_backend_scm",(void*)f_7531},
{"f_7543:c_backend_scm",(void*)f_7543},
{"f_7549:c_backend_scm",(void*)f_7549},
{"f_7588:c_backend_scm",(void*)f_7588},
{"f_7553:c_backend_scm",(void*)f_7553},
{"f_7151:c_backend_scm",(void*)f_7151},
{"f_7157:c_backend_scm",(void*)f_7157},
{"f_7452:c_backend_scm",(void*)f_7452},
{"f_7165:c_backend_scm",(void*)f_7165},
{"f_7169:c_backend_scm",(void*)f_7169},
{"f_7172:c_backend_scm",(void*)f_7172},
{"f_7175:c_backend_scm",(void*)f_7175},
{"f_7449:c_backend_scm",(void*)f_7449},
{"f_7181:c_backend_scm",(void*)f_7181},
{"f_7184:c_backend_scm",(void*)f_7184},
{"f_7187:c_backend_scm",(void*)f_7187},
{"f_7190:c_backend_scm",(void*)f_7190},
{"f_7193:c_backend_scm",(void*)f_7193},
{"f_7196:c_backend_scm",(void*)f_7196},
{"f_7199:c_backend_scm",(void*)f_7199},
{"f_7202:c_backend_scm",(void*)f_7202},
{"f_7205:c_backend_scm",(void*)f_7205},
{"f_7208:c_backend_scm",(void*)f_7208},
{"f_7438:c_backend_scm",(void*)f_7438},
{"f_7211:c_backend_scm",(void*)f_7211},
{"f_7214:c_backend_scm",(void*)f_7214},
{"f_7217:c_backend_scm",(void*)f_7217},
{"f_7220:c_backend_scm",(void*)f_7220},
{"f_7223:c_backend_scm",(void*)f_7223},
{"f_7226:c_backend_scm",(void*)f_7226},
{"f_7229:c_backend_scm",(void*)f_7229},
{"f_7232:c_backend_scm",(void*)f_7232},
{"f_7329:c_backend_scm",(void*)f_7329},
{"f_7331:c_backend_scm",(void*)f_7331},
{"f_7338:c_backend_scm",(void*)f_7338},
{"f_7365:c_backend_scm",(void*)f_7365},
{"f_7368:c_backend_scm",(void*)f_7368},
{"f_7371:c_backend_scm",(void*)f_7371},
{"f_7359:c_backend_scm",(void*)f_7359},
{"f_7347:c_backend_scm",(void*)f_7347},
{"f_7351:c_backend_scm",(void*)f_7351},
{"f_7355:c_backend_scm",(void*)f_7355},
{"f_7377:c_backend_scm",(void*)f_7377},
{"f_7235:c_backend_scm",(void*)f_7235},
{"f_7238:c_backend_scm",(void*)f_7238},
{"f_7268:c_backend_scm",(void*)f_7268},
{"f_7271:c_backend_scm",(void*)f_7271},
{"f_7309:c_backend_scm",(void*)f_7309},
{"f_7305:c_backend_scm",(void*)f_7305},
{"f_7274:c_backend_scm",(void*)f_7274},
{"f_7277:c_backend_scm",(void*)f_7277},
{"f_7280:c_backend_scm",(void*)f_7280},
{"f_7247:c_backend_scm",(void*)f_7247},
{"f_7250:c_backend_scm",(void*)f_7250},
{"f_7241:c_backend_scm",(void*)f_7241},
{"f_7111:c_backend_scm",(void*)f_7111},
{"f_7117:c_backend_scm",(void*)f_7117},
{"f_7129:c_backend_scm",(void*)f_7129},
{"f_7132:c_backend_scm",(void*)f_7132},
{"f_7138:c_backend_scm",(void*)f_7138},
{"f_7057:c_backend_scm",(void*)f_7057},
{"f_7061:c_backend_scm",(void*)f_7061},
{"f_7066:c_backend_scm",(void*)f_7066},
{"f_7095:c_backend_scm",(void*)f_7095},
{"f_7098:c_backend_scm",(void*)f_7098},
{"f_7041:c_backend_scm",(void*)f_7041},
{"f_7047:c_backend_scm",(void*)f_7047},
{"f_7055:c_backend_scm",(void*)f_7055},
{"f_7025:c_backend_scm",(void*)f_7025},
{"f_7031:c_backend_scm",(void*)f_7031},
{"f_7039:c_backend_scm",(void*)f_7039},
{"f_6936:c_backend_scm",(void*)f_6936},
{"f_6945:c_backend_scm",(void*)f_6945},
{"f_6974:c_backend_scm",(void*)f_6974},
{"f_6984:c_backend_scm",(void*)f_6984},
{"f_6859:c_backend_scm",(void*)f_6859},
{"f_6863:c_backend_scm",(void*)f_6863},
{"f_6877:c_backend_scm",(void*)f_6877},
{"f_6890:c_backend_scm",(void*)f_6890},
{"f_6922:c_backend_scm",(void*)f_6922},
{"f_6893:c_backend_scm",(void*)f_6893},
{"f_6896:c_backend_scm",(void*)f_6896},
{"f_6866:c_backend_scm",(void*)f_6866},
{"f_6869:c_backend_scm",(void*)f_6869},
{"f_6872:c_backend_scm",(void*)f_6872},
{"f_2599:c_backend_scm",(void*)f_2599},
{"f_6826:c_backend_scm",(void*)f_6826},
{"f_6830:c_backend_scm",(void*)f_6830},
{"f_6833:c_backend_scm",(void*)f_6833},
{"f_6836:c_backend_scm",(void*)f_6836},
{"f_6839:c_backend_scm",(void*)f_6839},
{"f_6842:c_backend_scm",(void*)f_6842},
{"f_6845:c_backend_scm",(void*)f_6845},
{"f_6848:c_backend_scm",(void*)f_6848},
{"f_6851:c_backend_scm",(void*)f_6851},
{"f_6854:c_backend_scm",(void*)f_6854},
{"f_6041:c_backend_scm",(void*)f_6041},
{"f_6047:c_backend_scm",(void*)f_6047},
{"f_6812:c_backend_scm",(void*)f_6812},
{"f_6055:c_backend_scm",(void*)f_6055},
{"f_6059:c_backend_scm",(void*)f_6059},
{"f_6062:c_backend_scm",(void*)f_6062},
{"f_6065:c_backend_scm",(void*)f_6065},
{"f_6068:c_backend_scm",(void*)f_6068},
{"f_6071:c_backend_scm",(void*)f_6071},
{"f_6074:c_backend_scm",(void*)f_6074},
{"f_6809:c_backend_scm",(void*)f_6809},
{"f_6077:c_backend_scm",(void*)f_6077},
{"f_6083:c_backend_scm",(void*)f_6083},
{"f_6086:c_backend_scm",(void*)f_6086},
{"f_6089:c_backend_scm",(void*)f_6089},
{"f_6092:c_backend_scm",(void*)f_6092},
{"f_6095:c_backend_scm",(void*)f_6095},
{"f_6098:c_backend_scm",(void*)f_6098},
{"f_6101:c_backend_scm",(void*)f_6101},
{"f_6104:c_backend_scm",(void*)f_6104},
{"f_6107:c_backend_scm",(void*)f_6107},
{"f_6110:c_backend_scm",(void*)f_6110},
{"f_6113:c_backend_scm",(void*)f_6113},
{"f_6116:c_backend_scm",(void*)f_6116},
{"f_6119:c_backend_scm",(void*)f_6119},
{"f_6778:c_backend_scm",(void*)f_6778},
{"f_6122:c_backend_scm",(void*)f_6122},
{"f_6739:c_backend_scm",(void*)f_6739},
{"f_6742:c_backend_scm",(void*)f_6742},
{"f_6745:c_backend_scm",(void*)f_6745},
{"f_6761:c_backend_scm",(void*)f_6761},
{"f_6764:c_backend_scm",(void*)f_6764},
{"f_6125:c_backend_scm",(void*)f_6125},
{"f_6128:c_backend_scm",(void*)f_6128},
{"f_6131:c_backend_scm",(void*)f_6131},
{"f_6711:c_backend_scm",(void*)f_6711},
{"f_6714:c_backend_scm",(void*)f_6714},
{"f_6134:c_backend_scm",(void*)f_6134},
{"f_6137:c_backend_scm",(void*)f_6137},
{"f_6140:c_backend_scm",(void*)f_6140},
{"f_6143:c_backend_scm",(void*)f_6143},
{"f_6146:c_backend_scm",(void*)f_6146},
{"f_6149:c_backend_scm",(void*)f_6149},
{"f_6671:c_backend_scm",(void*)f_6671},
{"f_6673:c_backend_scm",(void*)f_6673},
{"f_6683:c_backend_scm",(void*)f_6683},
{"f_6624:c_backend_scm",(void*)f_6624},
{"f_6629:c_backend_scm",(void*)f_6629},
{"f_6645:c_backend_scm",(void*)f_6645},
{"f_6656:c_backend_scm",(void*)f_6656},
{"f_6152:c_backend_scm",(void*)f_6152},
{"f_6573:c_backend_scm",(void*)f_6573},
{"f_6585:c_backend_scm",(void*)f_6585},
{"f_6588:c_backend_scm",(void*)f_6588},
{"f_6495:c_backend_scm",(void*)f_6495},
{"f_6537:c_backend_scm",(void*)f_6537},
{"f_6498:c_backend_scm",(void*)f_6498},
{"f_6504:c_backend_scm",(void*)f_6504},
{"f_6507:c_backend_scm",(void*)f_6507},
{"f_6431:c_backend_scm",(void*)f_6431},
{"f_6434:c_backend_scm",(void*)f_6434},
{"f_6437:c_backend_scm",(void*)f_6437},
{"f_6440:c_backend_scm",(void*)f_6440},
{"f_6443:c_backend_scm",(void*)f_6443},
{"f_6458:c_backend_scm",(void*)f_6458},
{"f_6446:c_backend_scm",(void*)f_6446},
{"f_6449:c_backend_scm",(void*)f_6449},
{"f_6417:c_backend_scm",(void*)f_6417},
{"f_6425:c_backend_scm",(void*)f_6425},
{"f_6342:c_backend_scm",(void*)f_6342},
{"f_6348:c_backend_scm",(void*)f_6348},
{"f_6351:c_backend_scm",(void*)f_6351},
{"f_6385:c_backend_scm",(void*)f_6385},
{"f_6388:c_backend_scm",(void*)f_6388},
{"f_6391:c_backend_scm",(void*)f_6391},
{"f_6354:c_backend_scm",(void*)f_6354},
{"f_6357:c_backend_scm",(void*)f_6357},
{"f_6360:c_backend_scm",(void*)f_6360},
{"f_6363:c_backend_scm",(void*)f_6363},
{"f_6372:c_backend_scm",(void*)f_6372},
{"f_6375:c_backend_scm",(void*)f_6375},
{"f_6155:c_backend_scm",(void*)f_6155},
{"f_6178:c_backend_scm",(void*)f_6178},
{"f_6283:c_backend_scm",(void*)f_6283},
{"f_6286:c_backend_scm",(void*)f_6286},
{"f_6298:c_backend_scm",(void*)f_6298},
{"f_6289:c_backend_scm",(void*)f_6289},
{"f_6184:c_backend_scm",(void*)f_6184},
{"f_6187:c_backend_scm",(void*)f_6187},
{"f_6270:c_backend_scm",(void*)f_6270},
{"f_6190:c_backend_scm",(void*)f_6190},
{"f_6193:c_backend_scm",(void*)f_6193},
{"f_6196:c_backend_scm",(void*)f_6196},
{"f_6199:c_backend_scm",(void*)f_6199},
{"f_6264:c_backend_scm",(void*)f_6264},
{"f_6260:c_backend_scm",(void*)f_6260},
{"f_6202:c_backend_scm",(void*)f_6202},
{"f_6205:c_backend_scm",(void*)f_6205},
{"f_6208:c_backend_scm",(void*)f_6208},
{"f_6211:c_backend_scm",(void*)f_6211},
{"f_6214:c_backend_scm",(void*)f_6214},
{"f_6217:c_backend_scm",(void*)f_6217},
{"f_6235:c_backend_scm",(void*)f_6235},
{"f_6245:c_backend_scm",(void*)f_6245},
{"f_6220:c_backend_scm",(void*)f_6220},
{"f_6158:c_backend_scm",(void*)f_6158},
{"f_6168:c_backend_scm",(void*)f_6168},
{"f_6161:c_backend_scm",(void*)f_6161},
{"f_5993:c_backend_scm",(void*)f_5993},
{"f_6000:c_backend_scm",(void*)f_6000},
{"f_6003:c_backend_scm",(void*)f_6003},
{"f_5916:c_backend_scm",(void*)f_5916},
{"f_5923:c_backend_scm",(void*)f_5923},
{"f_5926:c_backend_scm",(void*)f_5926},
{"f_5931:c_backend_scm",(void*)f_5931},
{"f_5987:c_backend_scm",(void*)f_5987},
{"f_5983:c_backend_scm",(void*)f_5983},
{"f_5968:c_backend_scm",(void*)f_5968},
{"f_5947:c_backend_scm",(void*)f_5947},
{"f_5958:c_backend_scm",(void*)f_5958},
{"f_5954:c_backend_scm",(void*)f_5954},
{"f_5774:c_backend_scm",(void*)f_5774},
{"f_5914:c_backend_scm",(void*)f_5914},
{"f_5781:c_backend_scm",(void*)f_5781},
{"f_5787:c_backend_scm",(void*)f_5787},
{"f_5870:c_backend_scm",(void*)f_5870},
{"f_5873:c_backend_scm",(void*)f_5873},
{"f_5883:c_backend_scm",(void*)f_5883},
{"f_5876:c_backend_scm",(void*)f_5876},
{"f_5837:c_backend_scm",(void*)f_5837},
{"f_5843:c_backend_scm",(void*)f_5843},
{"f_5580:c_backend_scm",(void*)f_5580},
{"f_5587:c_backend_scm",(void*)f_5587},
{"f_5696:c_backend_scm",(void*)f_5696},
{"f_5714:c_backend_scm",(void*)f_5714},
{"f_5743:c_backend_scm",(void*)f_5743},
{"f_5765:c_backend_scm",(void*)f_5765},
{"f_5721:c_backend_scm",(void*)f_5721},
{"f_5655:c_backend_scm",(void*)f_5655},
{"f_5657:c_backend_scm",(void*)f_5657},
{"f_5686:c_backend_scm",(void*)f_5686},
{"f_5651:c_backend_scm",(void*)f_5651},
{"f_5647:c_backend_scm",(void*)f_5647},
{"f_5618:c_backend_scm",(void*)f_5618},
{"f_5622:c_backend_scm",(void*)f_5622},
{"f_5525:c_backend_scm",(void*)f_5525},
{"f_5531:c_backend_scm",(void*)f_5531},
{"f_5560:c_backend_scm",(void*)f_5560},
{"f_5563:c_backend_scm",(void*)f_5563},
{"f_5566:c_backend_scm",(void*)f_5566},
{"f_5569:c_backend_scm",(void*)f_5569},
{"f_5572:c_backend_scm",(void*)f_5572},
{"f_5541:c_backend_scm",(void*)f_5541},
{"f_5205:c_backend_scm",(void*)f_5205},
{"f_5394:c_backend_scm",(void*)f_5394},
{"f_5512:c_backend_scm",(void*)f_5512},
{"f_5402:c_backend_scm",(void*)f_5402},
{"f_5406:c_backend_scm",(void*)f_5406},
{"f_5409:c_backend_scm",(void*)f_5409},
{"f_5412:c_backend_scm",(void*)f_5412},
{"f_5415:c_backend_scm",(void*)f_5415},
{"f_5418:c_backend_scm",(void*)f_5418},
{"f_5509:c_backend_scm",(void*)f_5509},
{"f_5421:c_backend_scm",(void*)f_5421},
{"f_5424:c_backend_scm",(void*)f_5424},
{"f_5430:c_backend_scm",(void*)f_5430},
{"f_5498:c_backend_scm",(void*)f_5498},
{"f_5464:c_backend_scm",(void*)f_5464},
{"f_5470:c_backend_scm",(void*)f_5470},
{"f_5478:c_backend_scm",(void*)f_5478},
{"f_5474:c_backend_scm",(void*)f_5474},
{"f_5436:c_backend_scm",(void*)f_5436},
{"f_5439:c_backend_scm",(void*)f_5439},
{"f_5442:c_backend_scm",(void*)f_5442},
{"f_5445:c_backend_scm",(void*)f_5445},
{"f_5448:c_backend_scm",(void*)f_5448},
{"f_5458:c_backend_scm",(void*)f_5458},
{"f_5451:c_backend_scm",(void*)f_5451},
{"f_5324:c_backend_scm",(void*)f_5324},
{"f_5343:c_backend_scm",(void*)f_5343},
{"f_5381:c_backend_scm",(void*)f_5381},
{"f_5351:c_backend_scm",(void*)f_5351},
{"f_5355:c_backend_scm",(void*)f_5355},
{"f_5358:c_backend_scm",(void*)f_5358},
{"f_5361:c_backend_scm",(void*)f_5361},
{"f_5364:c_backend_scm",(void*)f_5364},
{"f_5378:c_backend_scm",(void*)f_5378},
{"f_5374:c_backend_scm",(void*)f_5374},
{"f_5367:c_backend_scm",(void*)f_5367},
{"f_5327:c_backend_scm",(void*)f_5327},
{"f_5341:c_backend_scm",(void*)f_5341},
{"f_5330:c_backend_scm",(void*)f_5330},
{"f_5337:c_backend_scm",(void*)f_5337},
{"f_5244:c_backend_scm",(void*)f_5244},
{"f_5246:c_backend_scm",(void*)f_5246},
{"f_5250:c_backend_scm",(void*)f_5250},
{"f_5253:c_backend_scm",(void*)f_5253},
{"f_5256:c_backend_scm",(void*)f_5256},
{"f_5259:c_backend_scm",(void*)f_5259},
{"f_5262:c_backend_scm",(void*)f_5262},
{"f_5265:c_backend_scm",(void*)f_5265},
{"f_5268:c_backend_scm",(void*)f_5268},
{"f_5271:c_backend_scm",(void*)f_5271},
{"f_5274:c_backend_scm",(void*)f_5274},
{"f_5277:c_backend_scm",(void*)f_5277},
{"f_5280:c_backend_scm",(void*)f_5280},
{"f_5283:c_backend_scm",(void*)f_5283},
{"f_5297:c_backend_scm",(void*)f_5297},
{"f_5293:c_backend_scm",(void*)f_5293},
{"f_5286:c_backend_scm",(void*)f_5286},
{"f_5208:c_backend_scm",(void*)f_5208},
{"f_5221:c_backend_scm",(void*)f_5221},
{"f_5231:c_backend_scm",(void*)f_5231},
{"f_5212:c_backend_scm",(void*)f_5212},
{"f_4865:c_backend_scm",(void*)f_4865},
{"f_4869:c_backend_scm",(void*)f_4869},
{"f_4938:c_backend_scm",(void*)f_4938},
{"f_5192:c_backend_scm",(void*)f_5192},
{"f_4946:c_backend_scm",(void*)f_4946},
{"f_4950:c_backend_scm",(void*)f_4950},
{"f_4953:c_backend_scm",(void*)f_4953},
{"f_5189:c_backend_scm",(void*)f_5189},
{"f_4956:c_backend_scm",(void*)f_4956},
{"f_5175:c_backend_scm",(void*)f_5175},
{"f_4959:c_backend_scm",(void*)f_4959},
{"f_4962:c_backend_scm",(void*)f_4962},
{"f_4965:c_backend_scm",(void*)f_4965},
{"f_4968:c_backend_scm",(void*)f_4968},
{"f_4971:c_backend_scm",(void*)f_4971},
{"f_4974:c_backend_scm",(void*)f_4974},
{"f_5167:c_backend_scm",(void*)f_5167},
{"f_4977:c_backend_scm",(void*)f_4977},
{"f_4980:c_backend_scm",(void*)f_4980},
{"f_5121:c_backend_scm",(void*)f_5121},
{"f_5123:c_backend_scm",(void*)f_5123},
{"f_5149:c_backend_scm",(void*)f_5149},
{"f_5131:c_backend_scm",(void*)f_5131},
{"f_5142:c_backend_scm",(void*)f_5142},
{"f_4983:c_backend_scm",(void*)f_4983},
{"f_5070:c_backend_scm",(void*)f_5070},
{"f_5073:c_backend_scm",(void*)f_5073},
{"f_5076:c_backend_scm",(void*)f_5076},
{"f_5079:c_backend_scm",(void*)f_5079},
{"f_5095:c_backend_scm",(void*)f_5095},
{"f_5098:c_backend_scm",(void*)f_5098},
{"f11178:c_backend_scm",(void*)f11178},
{"f_5101:c_backend_scm",(void*)f_5101},
{"f_5104:c_backend_scm",(void*)f_5104},
{"f_4986:c_backend_scm",(void*)f_4986},
{"f_4989:c_backend_scm",(void*)f_4989},
{"f_4992:c_backend_scm",(void*)f_4992},
{"f_5042:c_backend_scm",(void*)f_5042},
{"f_5045:c_backend_scm",(void*)f_5045},
{"f_4995:c_backend_scm",(void*)f_4995},
{"f_4998:c_backend_scm",(void*)f_4998},
{"f_5030:c_backend_scm",(void*)f_5030},
{"f_5033:c_backend_scm",(void*)f_5033},
{"f_5004:c_backend_scm",(void*)f_5004},
{"f_5013:c_backend_scm",(void*)f_5013},
{"f_5016:c_backend_scm",(void*)f_5016},
{"f_4872:c_backend_scm",(void*)f_4872},
{"f_4877:c_backend_scm",(void*)f_4877},
{"f_4889:c_backend_scm",(void*)f_4889},
{"f_4899:c_backend_scm",(void*)f_4899},
{"f_4901:c_backend_scm",(void*)f_4901},
{"f_4911:c_backend_scm",(void*)f_4911},
{"f_4892:c_backend_scm",(void*)f_4892},
{"f_4925:c_backend_scm",(void*)f_4925},
{"f_4694:c_backend_scm",(void*)f_4694},
{"f_4701:c_backend_scm",(void*)f_4701},
{"f_4837:c_backend_scm",(void*)f_4837},
{"f_4852:c_backend_scm",(void*)f_4852},
{"f_4704:c_backend_scm",(void*)f_4704},
{"f_4707:c_backend_scm",(void*)f_4707},
{"f_4710:c_backend_scm",(void*)f_4710},
{"f_4715:c_backend_scm",(void*)f_4715},
{"f_4725:c_backend_scm",(void*)f_4725},
{"f_4731:c_backend_scm",(void*)f_4731},
{"f_4784:c_backend_scm",(void*)f_4784},
{"f_4794:c_backend_scm",(void*)f_4794},
{"f_4734:c_backend_scm",(void*)f_4734},
{"f_4757:c_backend_scm",(void*)f_4757},
{"f_4767:c_backend_scm",(void*)f_4767},
{"f_4737:c_backend_scm",(void*)f_4737},
{"f_4740:c_backend_scm",(void*)f_4740},
{"f_4525:c_backend_scm",(void*)f_4525},
{"f_4686:c_backend_scm",(void*)f_4686},
{"f_4545:c_backend_scm",(void*)f_4545},
{"f_4644:c_backend_scm",(void*)f_4644},
{"f_4648:c_backend_scm",(void*)f_4648},
{"f_4652:c_backend_scm",(void*)f_4652},
{"f_4656:c_backend_scm",(void*)f_4656},
{"f_4678:c_backend_scm",(void*)f_4678},
{"f_4674:c_backend_scm",(void*)f_4674},
{"f_4666:c_backend_scm",(void*)f_4666},
{"f_4664:c_backend_scm",(void*)f_4664},
{"f_4660:c_backend_scm",(void*)f_4660},
{"f_4563:c_backend_scm",(void*)f_4563},
{"f_4566:c_backend_scm",(void*)f_4566},
{"f_4569:c_backend_scm",(void*)f_4569},
{"f_4633:c_backend_scm",(void*)f_4633},
{"f_4572:c_backend_scm",(void*)f_4572},
{"f_4575:c_backend_scm",(void*)f_4575},
{"f_4578:c_backend_scm",(void*)f_4578},
{"f_4593:c_backend_scm",(void*)f_4593},
{"f_4598:c_backend_scm",(void*)f_4598},
{"f_4613:c_backend_scm",(void*)f_4613},
{"f_4581:c_backend_scm",(void*)f_4581},
{"f_4528:c_backend_scm",(void*)f_4528},
{"f_4542:c_backend_scm",(void*)f_4542},
{"f_2644:c_backend_scm",(void*)f_2644},
{"f_4493:c_backend_scm",(void*)f_4493},
{"f_4499:c_backend_scm",(void*)f_4499},
{"f_4503:c_backend_scm",(void*)f_4503},
{"f_2647:c_backend_scm",(void*)f_2647},
{"f_4449:c_backend_scm",(void*)f_4449},
{"f_4452:c_backend_scm",(void*)f_4452},
{"f_4455:c_backend_scm",(void*)f_4455},
{"f_4458:c_backend_scm",(void*)f_4458},
{"f_4461:c_backend_scm",(void*)f_4461},
{"f_4464:c_backend_scm",(void*)f_4464},
{"f_4366:c_backend_scm",(void*)f_4366},
{"f_4369:c_backend_scm",(void*)f_4369},
{"f_4372:c_backend_scm",(void*)f_4372},
{"f_4385:c_backend_scm",(void*)f_4385},
{"f_4408:c_backend_scm",(void*)f_4408},
{"f_4411:c_backend_scm",(void*)f_4411},
{"f_4414:c_backend_scm",(void*)f_4414},
{"f_4417:c_backend_scm",(void*)f_4417},
{"f_4395:c_backend_scm",(void*)f_4395},
{"f_4398:c_backend_scm",(void*)f_4398},
{"f_4347:c_backend_scm",(void*)f_4347},
{"f_4350:c_backend_scm",(void*)f_4350},
{"f_4324:c_backend_scm",(void*)f_4324},
{"f_4327:c_backend_scm",(void*)f_4327},
{"f_4302:c_backend_scm",(void*)f_4302},
{"f_4274:c_backend_scm",(void*)f_4274},
{"f_4277:c_backend_scm",(void*)f_4277},
{"f_4294:c_backend_scm",(void*)f_4294},
{"f_4280:c_backend_scm",(void*)f_4280},
{"f_4283:c_backend_scm",(void*)f_4283},
{"f_4258:c_backend_scm",(void*)f_4258},
{"f_4262:c_backend_scm",(void*)f_4262},
{"f_4244:c_backend_scm",(void*)f_4244},
{"f_4247:c_backend_scm",(void*)f_4247},
{"f_4228:c_backend_scm",(void*)f_4228},
{"f_4232:c_backend_scm",(void*)f_4232},
{"f_4210:c_backend_scm",(void*)f_4210},
{"f_4213:c_backend_scm",(void*)f_4213},
{"f_4190:c_backend_scm",(void*)f_4190},
{"f_4154:c_backend_scm",(void*)f_4154},
{"f_4166:c_backend_scm",(void*)f_4166},
{"f_4157:c_backend_scm",(void*)f_4157},
{"f_4135:c_backend_scm",(void*)f_4135},
{"f_4138:c_backend_scm",(void*)f_4138},
{"f_4116:c_backend_scm",(void*)f_4116},
{"f_4119:c_backend_scm",(void*)f_4119},
{"f_4097:c_backend_scm",(void*)f_4097},
{"f_4100:c_backend_scm",(void*)f_4100},
{"f_4078:c_backend_scm",(void*)f_4078},
{"f_4074:c_backend_scm",(void*)f_4074},
{"f_4022:c_backend_scm",(void*)f_4022},
{"f_4055:c_backend_scm",(void*)f_4055},
{"f_4025:c_backend_scm",(void*)f_4025},
{"f_4043:c_backend_scm",(void*)f_4043},
{"f_4028:c_backend_scm",(void*)f_4028},
{"f_4031:c_backend_scm",(void*)f_4031},
{"f_3989:c_backend_scm",(void*)f_3989},
{"f_3973:c_backend_scm",(void*)f_3973},
{"f11150:c_backend_scm",(void*)f11150},
{"f_3976:c_backend_scm",(void*)f_3976},
{"f_3979:c_backend_scm",(void*)f_3979},
{"f_3860:c_backend_scm",(void*)f_3860},
{"f_3863:c_backend_scm",(void*)f_3863},
{"f_3920:c_backend_scm",(void*)f_3920},
{"f_3941:c_backend_scm",(void*)f_3941},
{"f_3928:c_backend_scm",(void*)f_3928},
{"f_3932:c_backend_scm",(void*)f_3932},
{"f_3935:c_backend_scm",(void*)f_3935},
{"f_3866:c_backend_scm",(void*)f_3866},
{"f_3876:c_backend_scm",(void*)f_3876},
{"f_3878:c_backend_scm",(void*)f_3878},
{"f_3893:c_backend_scm",(void*)f_3893},
{"f_3869:c_backend_scm",(void*)f_3869},
{"f_3401:c_backend_scm",(void*)f_3401},
{"f_3404:c_backend_scm",(void*)f_3404},
{"f_3810:c_backend_scm",(void*)f_3810},
{"f_3806:c_backend_scm",(void*)f_3806},
{"f_3410:c_backend_scm",(void*)f_3410},
{"f11142:c_backend_scm",(void*)f11142},
{"f_3799:c_backend_scm",(void*)f_3799},
{"f_2632:c_backend_scm",(void*)f_2632},
{"f_3792:c_backend_scm",(void*)f_3792},
{"f_3416:c_backend_scm",(void*)f_3416},
{"f_3620:c_backend_scm",(void*)f_3620},
{"f_3709:c_backend_scm",(void*)f_3709},
{"f_3712:c_backend_scm",(void*)f_3712},
{"f_3715:c_backend_scm",(void*)f_3715},
{"f_3730:c_backend_scm",(void*)f_3730},
{"f_3718:c_backend_scm",(void*)f_3718},
{"f_3721:c_backend_scm",(void*)f_3721},
{"f_3724:c_backend_scm",(void*)f_3724},
{"f_3640:c_backend_scm",(void*)f_3640},
{"f_3706:c_backend_scm",(void*)f_3706},
{"f_3699:c_backend_scm",(void*)f_3699},
{"f_3695:c_backend_scm",(void*)f_3695},
{"f_3688:c_backend_scm",(void*)f_3688},
{"f_3681:c_backend_scm",(void*)f_3681},
{"f_3656:c_backend_scm",(void*)f_3656},
{"f_3673:c_backend_scm",(void*)f_3673},
{"f_3669:c_backend_scm",(void*)f_3669},
{"f_3643:c_backend_scm",(void*)f_3643},
{"f_3646:c_backend_scm",(void*)f_3646},
{"f_3649:c_backend_scm",(void*)f_3649},
{"f_3614:c_backend_scm",(void*)f_3614},
{"f_3452:c_backend_scm",(void*)f_3452},
{"f_3598:c_backend_scm",(void*)f_3598},
{"f_3601:c_backend_scm",(void*)f_3601},
{"f_3574:c_backend_scm",(void*)f_3574},
{"f_3577:c_backend_scm",(void*)f_3577},
{"f_3580:c_backend_scm",(void*)f_3580},
{"f11137:c_backend_scm",(void*)f11137},
{"f_3583:c_backend_scm",(void*)f_3583},
{"f_3586:c_backend_scm",(void*)f_3586},
{"f_3455:c_backend_scm",(void*)f_3455},
{"f_3458:c_backend_scm",(void*)f_3458},
{"f_3521:c_backend_scm",(void*)f_3521},
{"f_3542:c_backend_scm",(void*)f_3542},
{"f_3529:c_backend_scm",(void*)f_3529},
{"f_3533:c_backend_scm",(void*)f_3533},
{"f_3536:c_backend_scm",(void*)f_3536},
{"f_3461:c_backend_scm",(void*)f_3461},
{"f_3477:c_backend_scm",(void*)f_3477},
{"f_3479:c_backend_scm",(void*)f_3479},
{"f_3494:c_backend_scm",(void*)f_3494},
{"f_3464:c_backend_scm",(void*)f_3464},
{"f_3467:c_backend_scm",(void*)f_3467},
{"f_3433:c_backend_scm",(void*)f_3433},
{"f_3436:c_backend_scm",(void*)f_3436},
{"f_3368:c_backend_scm",(void*)f_3368},
{"f11129:c_backend_scm",(void*)f11129},
{"f_3364:c_backend_scm",(void*)f_3364},
{"f_3350:c_backend_scm",(void*)f_3350},
{"f_3353:c_backend_scm",(void*)f_3353},
{"f_3347:c_backend_scm",(void*)f_3347},
{"f11124:c_backend_scm",(void*)f11124},
{"f_3343:c_backend_scm",(void*)f_3343},
{"f_3329:c_backend_scm",(void*)f_3329},
{"f_3332:c_backend_scm",(void*)f_3332},
{"f_3281:c_backend_scm",(void*)f_3281},
{"f_3302:c_backend_scm",(void*)f_3302},
{"f11119:c_backend_scm",(void*)f11119},
{"f_3298:c_backend_scm",(void*)f_3298},
{"f_3284:c_backend_scm",(void*)f_3284},
{"f_3287:c_backend_scm",(void*)f_3287},
{"f_3250:c_backend_scm",(void*)f_3250},
{"f_3246:c_backend_scm",(void*)f_3246},
{"f_3204:c_backend_scm",(void*)f_3204},
{"f_3172:c_backend_scm",(void*)f_3172},
{"f_3175:c_backend_scm",(void*)f_3175},
{"f_3101:c_backend_scm",(void*)f_3101},
{"f_3115:c_backend_scm",(void*)f_3115},
{"f_3117:c_backend_scm",(void*)f_3117},
{"f_3138:c_backend_scm",(void*)f_3138},
{"f_3125:c_backend_scm",(void*)f_3125},
{"f_3129:c_backend_scm",(void*)f_3129},
{"f_3132:c_backend_scm",(void*)f_3132},
{"f_3104:c_backend_scm",(void*)f_3104},
{"f_3069:c_backend_scm",(void*)f_3069},
{"f_3072:c_backend_scm",(void*)f_3072},
{"f_3075:c_backend_scm",(void*)f_3075},
{"f_3078:c_backend_scm",(void*)f_3078},
{"f_3040:c_backend_scm",(void*)f_3040},
{"f_3043:c_backend_scm",(void*)f_3043},
{"f_3046:c_backend_scm",(void*)f_3046},
{"f_3049:c_backend_scm",(void*)f_3049},
{"f_3003:c_backend_scm",(void*)f_3003},
{"f_3006:c_backend_scm",(void*)f_3006},
{"f_3009:c_backend_scm",(void*)f_3009},
{"f_3012:c_backend_scm",(void*)f_3012},
{"f_2970:c_backend_scm",(void*)f_2970},
{"f_2973:c_backend_scm",(void*)f_2973},
{"f_2976:c_backend_scm",(void*)f_2976},
{"f_2979:c_backend_scm",(void*)f_2979},
{"f_2951:c_backend_scm",(void*)f_2951},
{"f_2954:c_backend_scm",(void*)f_2954},
{"f_2924:c_backend_scm",(void*)f_2924},
{"f_2927:c_backend_scm",(void*)f_2927},
{"f_2898:c_backend_scm",(void*)f_2898},
{"f_2901:c_backend_scm",(void*)f_2901},
{"f_2904:c_backend_scm",(void*)f_2904},
{"f_2844:c_backend_scm",(void*)f_2844},
{"f_2854:c_backend_scm",(void*)f_2854},
{"f_2857:c_backend_scm",(void*)f_2857},
{"f_2860:c_backend_scm",(void*)f_2860},
{"f_2786:c_backend_scm",(void*)f_2786},
{"f_2789:c_backend_scm",(void*)f_2789},
{"f_2792:c_backend_scm",(void*)f_2792},
{"f_2795:c_backend_scm",(void*)f_2795},
{"f_2798:c_backend_scm",(void*)f_2798},
{"f_2801:c_backend_scm",(void*)f_2801},
{"f_2602:c_backend_scm",(void*)f_2602},
{"f_2614:c_backend_scm",(void*)f_2614},
{"f_2622:c_backend_scm",(void*)f_2622},
{"f_2606:c_backend_scm",(void*)f_2606},
{"f_2557:c_backend_scm",(void*)f_2557},
{"f_2565:c_backend_scm",(void*)f_2565},
{"f_2567:c_backend_scm",(void*)f_2567},
{"f_2582:c_backend_scm",(void*)f_2582},
{"f_2514:c_backend_scm",(void*)f_2514},
{"f_2520:c_backend_scm",(void*)f_2520},
{"f_2544:c_backend_scm",(void*)f_2544},
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
