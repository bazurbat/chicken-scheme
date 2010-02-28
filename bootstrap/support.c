/* Generated from support.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-09 21:38
   Version 4.2.12
   windows-mingw32-x86 [ manyargs ptables ]
   compiled 2010-01-08 on lenovo-1 (MINGW32_NT-6.0)
   command line: support.scm -optimize-level 2 -include-path . -include-path ./ -inline -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file support.c
   unit: support
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[499];
static double C_possibly_force_alignment;


/* from k4613 */
static C_word C_fcall stub273(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub273(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_wordstobytes(t0));
return C_r;}

/* from k4606 */
static C_word C_fcall stub269(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub269(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_bytestowords(t0));
return C_r;}

C_noret_decl(C_support_toplevel)
C_externexport void C_ccall C_support_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4007)
static void C_ccall f_4007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5069)
static void C_ccall f_5069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13364)
static void C_ccall f_13364(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13368)
static void C_ccall f_13368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13458)
static void C_ccall f_13458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13374)
static void C_ccall f_13374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13445)
static void C_ccall f_13445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13448)
static void C_ccall f_13448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13451)
static void C_ccall f_13451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13380)
static void C_ccall f_13380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13387)
static void C_ccall f_13387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13389)
static void C_fcall f_13389(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13413)
static void C_ccall f_13413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13409)
static void C_ccall f_13409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13431)
static void C_ccall f_13431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13353)
static void C_ccall f_13353(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13342)
static void C_ccall f_13342(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13336)
static void C_ccall f_13336(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13308)
static void C_ccall f_13308(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_13308)
static void C_ccall f_13308r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_13312)
static void C_ccall f_13312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13287)
static void C_ccall f_13287(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13291)
static void C_ccall f_13291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13254)
static void C_ccall f_13254(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13260)
static void C_ccall f_13260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13221)
static void C_ccall f_13221(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13227)
static void C_ccall f_13227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13197)
static void C_ccall f_13197(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13128)
static void C_ccall f_13128(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13132)
static void C_ccall f_13132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13137)
static void C_fcall f_13137(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13141)
static void C_ccall f_13141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13192)
static void C_ccall f_13192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13171)
static void C_ccall f_13171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13183)
static void C_ccall f_13183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13186)
static void C_ccall f_13186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13159)
static void C_ccall f_13159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13095)
static void C_ccall f_13095(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13105)
static void C_ccall f_13105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13108)
static void C_ccall f_13108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12972)
static void C_ccall f_12972(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12981)
static void C_fcall f_12981(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13009)
static void C_ccall f_13009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13015)
static void C_ccall f_13015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13018)
static void C_ccall f_13018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13021)
static void C_ccall f_13021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13024)
static void C_ccall f_13024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13027)
static void C_ccall f_13027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13030)
static void C_ccall f_13030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13089)
static void C_ccall f_13089(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13033)
static void C_ccall f_13033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13048)
static void C_ccall f_13048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13051)
static void C_ccall f_13051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13059)
static void C_fcall f_13059(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13069)
static void C_ccall f_13069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13072)
static void C_ccall f_13072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13054)
static void C_ccall f_13054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13039)
static void C_ccall f_13039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12976)
static void C_ccall f_12976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12969)
static void C_ccall f_12969(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12951)
static void C_ccall f_12951(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12905)
static void C_ccall f_12905(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12924)
static void C_ccall f_12924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12935)
static void C_ccall f_12935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12931)
static void C_ccall f_12931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12884)
static void C_ccall f_12884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12890)
static void C_ccall f_12890(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12894)
static void C_ccall f_12894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12897)
static void C_ccall f_12897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12900)
static void C_ccall f_12900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12872)
static void C_ccall f_12872(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12876)
static void C_ccall f_12876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12781)
static void C_ccall f_12781(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_12781)
static void C_ccall f_12781r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_12800)
static void C_ccall f_12800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12825)
static void C_ccall f_12825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12829)
static void C_ccall f_12829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12831)
static void C_fcall f_12831(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12838)
static void C_ccall f_12838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12851)
static void C_ccall f_12851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12854)
static void C_ccall f_12854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12857)
static void C_ccall f_12857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12860)
static void C_ccall f_12860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12863)
static void C_ccall f_12863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12867)
static void C_ccall f_12867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12784)
static void C_fcall f_12784(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12788)
static void C_ccall f_12788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12794)
static void C_ccall f_12794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12775)
static void C_ccall f_12775(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12716)
static void C_ccall f_12716(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_12716)
static void C_ccall f_12716r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_12724)
static void C_ccall f_12724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12751)
static void C_ccall f_12751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12727)
static void C_ccall f_12727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12730)
static void C_ccall f_12730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12747)
static void C_ccall f_12747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12733)
static void C_ccall f_12733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12743)
static void C_ccall f_12743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12736)
static void C_ccall f_12736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12739)
static void C_ccall f_12739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12707)
static void C_ccall f_12707(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12701)
static void C_ccall f_12701(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12695)
static void C_ccall f_12695(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12683)
static void C_ccall f_12683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12687)
static void C_ccall f_12687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12690)
static void C_ccall f_12690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12645)
static void C_ccall f_12645(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_12645)
static void C_ccall f_12645r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_12649)
static void C_ccall f_12649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f14588)
static void C_ccall f14588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12652)
static void C_ccall f_12652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12659)
static void C_ccall f_12659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12603)
static void C_ccall f_12603(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12612)
static void C_fcall f_12612(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12574)
static void C_ccall f_12574(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12584)
static void C_fcall f_12584(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12365)
static void C_ccall f_12365(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12569)
static void C_ccall f_12569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12534)
static void C_fcall f_12534(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12540)
static void C_fcall f_12540(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12555)
static void C_ccall f_12555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12548)
static void C_fcall f_12548(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12368)
static void C_fcall f_12368(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12402)
static void C_fcall f_12402(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12496)
static void C_ccall f_12496(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12508)
static void C_ccall f_12508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12466)
static void C_ccall f_12466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12477)
static void C_ccall f_12477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12457)
static void C_ccall f_12457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12421)
static void C_ccall f_12421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12427)
static void C_ccall f_12427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12431)
static void C_ccall f_12431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12226)
static void C_ccall f_12226(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12232)
static void C_fcall f_12232(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12325)
static void C_fcall f_12325(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12330)
static void C_fcall f_12330(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12340)
static void C_ccall f_12340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12293)
static void C_fcall f_12293(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12264)
static void C_fcall f_12264(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12269)
static void C_fcall f_12269(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12279)
static void C_ccall f_12279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12230)
static void C_ccall f_12230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11857)
static void C_ccall f_11857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12056)
static void C_fcall f_12056(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12148)
static void C_fcall f_12148(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12059)
static void C_ccall f_12059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11536)
static void C_ccall f_11536(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11851)
static void C_ccall f_11851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11548)
static void C_ccall f_11548(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11558)
static void C_fcall f_11558(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11576)
static void C_ccall f_11576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11615)
static void C_fcall f_11615(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11580)
static void C_fcall f_11580(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11206)
static void C_ccall f_11206(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11530)
static void C_ccall f_11530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11212)
static void C_ccall f_11212(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11222)
static void C_fcall f_11222(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11231)
static void C_fcall f_11231(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11243)
static void C_fcall f_11243(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11255)
static void C_fcall f_11255(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11261)
static void C_ccall f_11261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11265)
static void C_fcall f_11265(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11161)
static void C_ccall f_11161(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11200)
static void C_ccall f_11200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11167)
static void C_ccall f_11167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11171)
static void C_ccall f_11171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11175)
static void C_fcall f_11175(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11130)
static void C_ccall f_11130(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11143)
static void C_ccall f_11143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11099)
static void C_ccall f_11099(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11112)
static void C_ccall f_11112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10041)
static void C_ccall f_10041(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11093)
static void C_ccall f_11093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10047)
static void C_ccall f_10047(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_10053)
static void C_fcall f_10053(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10082)
static void C_fcall f_10082(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10101)
static void C_fcall f_10101(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10120)
static void C_fcall f_10120(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10190)
static void C_fcall f_10190(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10209)
static void C_fcall f_10209(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10291)
static void C_fcall f_10291(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10330)
static void C_fcall f_10330(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10349)
static void C_fcall f_10349(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10368)
static void C_fcall f_10368(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10448)
static void C_fcall f_10448(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10533)
static void C_fcall f_10533(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10608)
static void C_ccall f_10608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10647)
static void C_fcall f_10647(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10717)
static void C_ccall f_10717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10650)
static void C_ccall f_10650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10612)
static void C_fcall f_10612(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10451)
static void C_ccall f_10451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10482)
static void C_fcall f_10482(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10371)
static void C_ccall f_10371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10212)
static void C_ccall f_10212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10243)
static void C_fcall f_10243(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10123)
static void C_ccall f_10123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10154)
static void C_fcall f_10154(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9983)
static void C_ccall f_9983(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9987)
static void C_ccall f_9987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9998)
static void C_ccall f_9998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10004)
static void C_fcall f_10004(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10016)
static void C_ccall f_10016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10022)
static void C_ccall f_10022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9990)
static void C_ccall f_9990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9902)
static void C_ccall f_9902(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9914)
static void C_ccall f_9914(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_9921)
static void C_ccall f_9921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9924)
static void C_ccall f_9924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9927)
static void C_ccall f_9927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9930)
static void C_ccall f_9930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9933)
static void C_ccall f_9933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9936)
static void C_ccall f_9936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9939)
static void C_ccall f_9939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9942)
static void C_ccall f_9942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9945)
static void C_ccall f_9945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9948)
static void C_ccall f_9948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9951)
static void C_ccall f_9951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9954)
static void C_ccall f_9954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9957)
static void C_ccall f_9957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9960)
static void C_ccall f_9960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9963)
static void C_ccall f_9963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9966)
static void C_ccall f_9966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9969)
static void C_ccall f_9969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9972)
static void C_ccall f_9972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9975)
static void C_ccall f_9975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9978)
static void C_ccall f_9978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9908)
static void C_ccall f_9908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9794)
static void C_ccall f_9794(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9803)
static void C_ccall f_9803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9809)
static void C_fcall f_9809(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9817)
static C_word C_fcall f_9817(C_word t0,C_word t1);
C_noret_decl(f_9798)
static void C_ccall f_9798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9773)
static void C_ccall f_9773(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9783)
static void C_ccall f_9783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9724)
static void C_ccall f_9724(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9730)
static void C_ccall f_9730(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9771)
static void C_ccall f_9771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9743)
static void C_ccall f_9743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9687)
static void C_ccall f_9687(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9693)
static void C_ccall f_9693(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9722)
static void C_ccall f_9722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9700)
static void C_fcall f_9700(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9703)
static void C_ccall f_9703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9646)
static void C_ccall f_9646(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9652)
static void C_ccall f_9652(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9685)
static void C_ccall f_9685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9659)
static void C_fcall f_9659(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9662)
static void C_ccall f_9662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9524)
static void C_ccall f_9524(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9553)
static void C_ccall f_9553(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9423)
static void C_ccall f_9423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9429)
static void C_ccall f_9429(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9455)
static void C_fcall f_9455(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9469)
static void C_ccall f_9469(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9477)
static void C_ccall f_9477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9198)
static void C_ccall f_9198(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9397)
static void C_ccall f_9397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9403)
static void C_ccall f_9403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9278)
static void C_fcall f_9278(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9300)
static void C_ccall f_9300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9318)
static void C_fcall f_9318(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9349)
static void C_ccall f_9349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9235)
static void C_fcall f_9235(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9257)
static void C_ccall f_9257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9201)
static void C_fcall f_9201(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9230)
static void C_ccall f_9230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9209)
static C_word C_fcall f_9209(C_word t0,C_word t1);
C_noret_decl(f_9129)
static void C_ccall f_9129(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9135)
static void C_ccall f_9135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9141)
static void C_fcall f_9141(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9145)
static void C_ccall f_9145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9192)
static void C_ccall f_9192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9156)
static void C_ccall f_9156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9181)
static void C_ccall f_9181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8937)
static void C_ccall f_8937(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8968)
static void C_ccall f_8968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9127)
static void C_ccall f_9127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8972)
static void C_ccall f_8972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8980)
static void C_ccall f_8980(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8987)
static void C_ccall f_8987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9123)
static void C_ccall f_9123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9011)
static void C_fcall f_9011(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9090)
static void C_ccall f_9090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9045)
static void C_ccall f_9045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9048)
static void C_fcall f_9048(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9066)
static void C_ccall f_9066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9055)
static void C_ccall f_9055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8975)
static void C_ccall f_8975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8941)
static void C_ccall f_8941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8947)
static void C_ccall f_8947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8960)
static void C_ccall f_8960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8952)
static void C_ccall f_8952(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8869)
static void C_ccall f_8869(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8875)
static void C_fcall f_8875(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8902)
static void C_fcall f_8902(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8931)
static void C_ccall f_8931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8896)
static void C_ccall f_8896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8783)
static void C_ccall f_8783(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8789)
static void C_fcall f_8789(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8834)
static void C_fcall f_8834(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8863)
static void C_ccall f_8863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8823)
static void C_ccall f_8823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8819)
static void C_ccall f_8819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8744)
static void C_ccall f_8744(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8748)
static void C_ccall f_8748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8751)
static void C_ccall f_8751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8754)
static void C_ccall f_8754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8710)
static void C_ccall f_8710(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8716)
static void C_fcall f_8716(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8730)
static void C_ccall f_8730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8734)
static void C_ccall f_8734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8325)
static void C_ccall f_8325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8661)
static void C_fcall f_8661(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8694)
static void C_ccall f_8694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8674)
static void C_fcall f_8674(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8329)
static void C_ccall f_8329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8337)
static void C_fcall f_8337(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8646)
static void C_ccall f_8646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8652)
static void C_ccall f_8652(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8650)
static void C_ccall f_8650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8486)
static void C_ccall f_8486(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8593)
static void C_fcall f_8593(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8630)
static void C_ccall f_8630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8620)
static void C_fcall f_8620(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8624)
static void C_ccall f_8624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8627)
static void C_ccall f_8627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8490)
static void C_ccall f_8490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8544)
static void C_fcall f_8544(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8577)
static void C_ccall f_8577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8557)
static void C_fcall f_8557(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8542)
static void C_ccall f_8542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8493)
static void C_ccall f_8493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8519)
static void C_ccall f_8519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8535)
static void C_ccall f_8535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8527)
static void C_ccall f_8527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8511)
static void C_ccall f_8511(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8509)
static void C_ccall f_8509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8437)
static void C_ccall f_8437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8440)
static void C_ccall f_8440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8443)
static void C_ccall f_8443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8463)
static void C_ccall f_8463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8421)
static void C_ccall f_8421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8413)
static void C_ccall f_8413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8384)
static void C_ccall f_8384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8374)
static void C_ccall f_8374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8381)
static void C_ccall f_8381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8177)
static void C_ccall f_8177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8183)
static void C_ccall f_8183(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8195)
static void C_ccall f_8195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8290)
static void C_fcall f_8290(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8319)
static void C_ccall f_8319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8199)
static void C_ccall f_8199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8202)
static void C_ccall f_8202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8282)
static void C_ccall f_8282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8228)
static void C_fcall f_8228(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8232)
static void C_ccall f_8232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8207)
static void C_ccall f_8207(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8189)
static void C_ccall f_8189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8123)
static void C_ccall f_8123(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8129)
static void C_fcall f_8129(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8155)
static void C_ccall f_8155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8159)
static void C_ccall f_8159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7442)
static void C_ccall f_7442(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7448)
static void C_fcall f_7448(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7482)
static void C_fcall f_7482(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7940)
static void C_fcall f_7940(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8058)
static void C_fcall f_8058(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8087)
static void C_ccall f_8087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8056)
static void C_ccall f_8056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8052)
static void C_ccall f_8052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8012)
static void C_fcall f_8012(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8041)
static void C_ccall f_8041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8010)
static void C_ccall f_8010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7947)
static void C_ccall f_7947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7957)
static void C_fcall f_7957(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7986)
static void C_ccall f_7986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7951)
static void C_ccall f_7951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7878)
static void C_fcall f_7878(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7927)
static void C_ccall f_7927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7896)
static void C_ccall f_7896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7904)
static void C_ccall f_7904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7821)
static void C_fcall f_7821(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7850)
static void C_ccall f_7850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7819)
static void C_ccall f_7819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7769)
static void C_fcall f_7769(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7798)
static void C_ccall f_7798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7751)
static void C_ccall f_7751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7695)
static void C_ccall f_7695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7697)
static void C_fcall f_7697(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7726)
static void C_ccall f_7726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7642)
static void C_ccall f_7642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7644)
static void C_fcall f_7644(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7677)
static void C_ccall f_7677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7657)
static void C_fcall f_7657(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7626)
static void C_ccall f_7626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7638)
static void C_ccall f_7638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7634)
static void C_ccall f_7634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7547)
static void C_fcall f_7547(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7576)
static void C_ccall f_7576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7545)
static void C_ccall f_7545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7541)
static void C_ccall f_7541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7491)
static void C_fcall f_7491(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7520)
static void C_ccall f_7520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7489)
static void C_ccall f_7489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6519)
static void C_ccall f_6519(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7437)
static void C_ccall f_7437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7440)
static void C_ccall f_7440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6522)
static void C_fcall f_6522(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7397)
static void C_fcall f_7397(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7426)
static void C_ccall f_7426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7395)
static void C_ccall f_7395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7135)
static void C_fcall f_7135(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7262)
static void C_ccall f_7262(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7346)
static void C_ccall f_7346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7318)
static void C_fcall f_7318(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7325)
static void C_ccall f_7325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7332)
static void C_ccall f_7332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7322)
static void C_ccall f_7322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7281)
static void C_fcall f_7281(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7310)
static void C_ccall f_7310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7279)
static void C_ccall f_7279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7256)
static void C_ccall f_7256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7218)
static void C_fcall f_7218(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7247)
static void C_ccall f_7247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7212)
static void C_ccall f_7212(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7161)
static void C_fcall f_7161(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7190)
static void C_ccall f_7190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7155)
static void C_ccall f_7155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7114)
static void C_ccall f_7114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7098)
static void C_ccall f_7098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7094)
static void C_ccall f_7094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7028)
static void C_fcall f_7028(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7057)
static void C_ccall f_7057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7022)
static void C_ccall f_7022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6938)
static void C_fcall f_6938(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6967)
static void C_ccall f_6967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6932)
static void C_ccall f_6932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6840)
static void C_fcall f_6840(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6850)
static void C_fcall f_6850(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6879)
static void C_ccall f_6879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6844)
static void C_ccall f_6844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6807)
static void C_ccall f_6807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6714)
static void C_ccall f_6714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6736)
static void C_fcall f_6736(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6774)
static void C_ccall f_6774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6763)
static void C_fcall f_6763(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6722)
static void C_ccall f_6722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6730)
static void C_ccall f_6730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6718)
static void C_ccall f_6718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6655)
static void C_fcall f_6655(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6658)
static void C_ccall f_6658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6665)
static void C_ccall f_6665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6603)
static void C_fcall f_6603(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6632)
static void C_ccall f_6632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6597)
static void C_ccall f_6597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6504)
static void C_ccall f_6504(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6489)
static void C_ccall f_6489(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6483)
static void C_ccall f_6483(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6474)
static void C_ccall f_6474(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6465)
static void C_ccall f_6465(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6456)
static void C_ccall f_6456(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6447)
static void C_ccall f_6447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6438)
static void C_ccall f_6438(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6429)
static void C_ccall f_6429(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6423)
static void C_ccall f_6423(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6417)
static void C_ccall f_6417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5918)
static void C_ccall f_5918(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6415)
static void C_ccall f_6415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5922)
static void C_fcall f_5922(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5927)
static void C_ccall f_5927(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5937)
static void C_ccall f_5937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6100)
static void C_fcall f_6100(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6110)
static void C_ccall f_6110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6126)
static void C_fcall f_6126(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6202)
static void C_fcall f_6202(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6242)
static void C_ccall f_6242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6232)
static void C_ccall f_6232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6205)
static void C_ccall f_6205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6222)
static void C_ccall f_6222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6208)
static void C_ccall f_6208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6211)
static void C_ccall f_6211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6218)
static void C_ccall f_6218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6193)
static void C_ccall f_6193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6183)
static void C_ccall f_6183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6167)
static void C_ccall f_6167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6129)
static void C_ccall f_6129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6144)
static void C_ccall f_6144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6113)
static void C_ccall f_6113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5940)
static void C_ccall f_5940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5981)
static void C_fcall f_5981(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6015)
static void C_fcall f_6015(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6049)
static void C_fcall f_6049(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6052)
static void C_ccall f_6052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6018)
static void C_ccall f_6018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5984)
static void C_ccall f_5984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5943)
static void C_ccall f_5943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5971)
static void C_ccall f_5971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5946)
static void C_ccall f_5946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5958)
static void C_ccall f_5958(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5949)
static void C_ccall f_5949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5855)
static void C_ccall f_5855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5861)
static void C_ccall f_5861(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5868)
static void C_ccall f_5868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5871)
static void C_ccall f_5871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5883)
static void C_fcall f_5883(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5912)
static void C_ccall f_5912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5881)
static void C_ccall f_5881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5874)
static void C_ccall f_5874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5837)
static void C_fcall f_5837(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5847)
static void C_ccall f_5847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5790)
static void C_ccall f_5790(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5797)
static void C_ccall f_5797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5800)
static void C_fcall f_5800(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5804)
static void C_fcall f_5804(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5780)
static void C_ccall f_5780(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5771)
static void C_ccall f_5771(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5775)
static void C_ccall f_5775(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5714)
static void C_ccall f_5714(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_5714)
static void C_ccall f_5714r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_5718)
static void C_ccall f_5718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5748)
static void C_ccall f_5748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5662)
static void C_ccall f_5662(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5666)
static void C_ccall f_5666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5693)
static void C_ccall f_5693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5616)
static void C_ccall f_5616(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5620)
static void C_ccall f_5620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5642)
static void C_ccall f_5642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5598)
static void C_ccall f_5598(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5598)
static void C_ccall f_5598r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5602)
static void C_ccall f_5602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5610)
static void C_ccall f_5610(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5580)
static void C_ccall f_5580(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5584)
static void C_ccall f_5584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5327)
static void C_ccall f_5327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5489)
static void C_fcall f_5489(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5503)
static void C_ccall f_5503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5528)
static void C_ccall f_5528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5539)
static void C_ccall f_5539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5567)
static void C_ccall f_5567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5335)
static void C_ccall f_5335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5398)
static void C_fcall f_5398(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5412)
static void C_ccall f_5412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5437)
static void C_ccall f_5437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5448)
static void C_ccall f_5448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5476)
static void C_ccall f_5476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5338)
static void C_ccall f_5338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5343)
static void C_fcall f_5343(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5357)
static void C_ccall f_5357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5385)
static void C_ccall f_5385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5331)
static void C_ccall f_5331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5186)
static void C_ccall f_5186(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5190)
static void C_ccall f_5190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5194)
static void C_ccall f_5194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5183)
static void C_ccall f_5183(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5180)
static void C_ccall f_5180(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5073)
static void C_ccall f_5073(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5082)
static void C_ccall f_5082(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5113)
static void C_ccall f_5113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5167)
static void C_ccall f_5167(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5167)
static void C_ccall f_5167r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5173)
static void C_ccall f_5173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5119)
static void C_ccall f_5119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5151)
static void C_ccall f_5151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5165)
static void C_ccall f_5165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5157)
static void C_ccall f_5157(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5123)
static void C_ccall f_5123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5145)
static void C_ccall f_5145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5088)
static void C_ccall f_5088(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5094)
static void C_ccall f_5094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5105)
static void C_ccall f_5105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5102)
static void C_ccall f_5102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5077)
static void C_ccall f_5077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4972)
static void C_ccall f_4972(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4978)
static void C_fcall f_4978(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5055)
static void C_ccall f_5055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5006)
static void C_fcall f_5006(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5044)
static void C_ccall f_5044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4912)
static void C_ccall f_4912(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4928)
static void C_ccall f_4928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4970)
static void C_ccall f_4970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4934)
static void C_ccall f_4934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4949)
static void C_ccall f_4949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4866)
static void C_ccall f_4866(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4910)
static void C_ccall f_4910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4870)
static void C_fcall f_4870(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4836)
static void C_ccall f_4836(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4790)
static void C_ccall f_4790(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4770)
static void C_ccall f_4770(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4776)
static void C_ccall f_4776(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4784)
static void C_ccall f_4784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4788)
static void C_ccall f_4788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4739)
static void C_ccall f_4739(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4745)
static void C_fcall f_4745(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4760)
static void C_ccall f_4760(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4690)
static void C_ccall f_4690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4692)
static void C_fcall f_4692(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4721)
static void C_ccall f_4721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4664)
static void C_ccall f_4664(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4617)
static void C_ccall f_4617(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4617)
static void C_ccall f_4617r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4633)
static void C_ccall f_4633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4645)
static void C_fcall f_4645(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4603)
static void C_ccall f_4603(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4547)
static void C_ccall f_4547(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4601)
static void C_ccall f_4601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4551)
static void C_ccall f_4551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4574)
static void C_ccall f_4574(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4453)
static void C_ccall f_4453(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4469)
static void C_ccall f_4469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4471)
static void C_fcall f_4471(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4493)
static void C_fcall f_4493(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4532)
static void C_ccall f_4532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4500)
static void C_fcall f_4500(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4516)
static void C_ccall f_4516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4504)
static void C_ccall f_4504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4465)
static void C_ccall f_4465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4409)
static void C_ccall f_4409(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4415)
static void C_fcall f_4415(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4439)
static void C_ccall f_4439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4401)
static void C_ccall f_4401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4404)
static void C_ccall f_4404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4407)
static void C_ccall f_4407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4351)
static void C_ccall f_4351(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4370)
static void C_ccall f_4370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4373)
static void C_ccall f_4373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4315)
static void C_ccall f_4315(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4321)
static C_word C_fcall f_4321(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_4247)
static void C_ccall f_4247(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4271)
static void C_fcall f_4271(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4250)
static void C_fcall f_4250(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4204)
static void C_ccall f_4204(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4210)
static void C_fcall f_4210(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4233)
static void C_ccall f_4233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4237)
static void C_ccall f_4237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4201)
static void C_ccall f_4201(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4156)
static void C_ccall f_4156(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4156)
static void C_ccall f_4156r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4160)
static void C_ccall f_4160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4163)
static void C_fcall f_4163(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4177)
static void C_ccall f_4177(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4169)
static void C_ccall f_4169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4172)
static void C_ccall f_4172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4137)
static void C_ccall f_4137(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4137)
static void C_ccall f_4137r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4141)
static void C_ccall f_4141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4154)
static void C_ccall f_4154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4147)
static void C_ccall f_4147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4108)
static void C_ccall f_4108(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4108)
static void C_ccall f_4108r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4115)
static void C_fcall f_4115(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4118)
static void C_ccall f_4118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4128)
static void C_ccall f_4128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4121)
static void C_ccall f_4121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4043)
static void C_ccall f_4043(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4043)
static void C_ccall f_4043r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4053)
static void C_ccall f_4053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4068)
static void C_ccall f_4068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4073)
static void C_fcall f_4073(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4092)
static void C_ccall f_4092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4085)
static void C_ccall f_4085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4095)
static void C_ccall f_4095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4056)
static void C_ccall f_4056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4059)
static void C_ccall f_4059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4062)
static void C_ccall f_4062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4016)
static void C_ccall f_4016(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4016)
static void C_ccall f_4016r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4011)
static void C_ccall f_4011(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_13389)
static void C_fcall trf_13389(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13389(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_13389(t0,t1,t2);}

C_noret_decl(trf_13137)
static void C_fcall trf_13137(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13137(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13137(t0,t1);}

C_noret_decl(trf_12981)
static void C_fcall trf_12981(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12981(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12981(t0,t1,t2,t3);}

C_noret_decl(trf_13059)
static void C_fcall trf_13059(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13059(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_13059(t0,t1,t2);}

C_noret_decl(trf_12831)
static void C_fcall trf_12831(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12831(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12831(t0,t1,t2,t3);}

C_noret_decl(trf_12784)
static void C_fcall trf_12784(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12784(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12784(t0,t1);}

C_noret_decl(trf_12612)
static void C_fcall trf_12612(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12612(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12612(t0,t1,t2);}

C_noret_decl(trf_12584)
static void C_fcall trf_12584(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12584(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12584(t0,t1);}

C_noret_decl(trf_12534)
static void C_fcall trf_12534(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12534(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12534(t0,t1,t2,t3);}

C_noret_decl(trf_12540)
static void C_fcall trf_12540(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12540(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12540(t0,t1,t2);}

C_noret_decl(trf_12548)
static void C_fcall trf_12548(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12548(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12548(t0,t1,t2);}

C_noret_decl(trf_12368)
static void C_fcall trf_12368(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12368(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12368(t0,t1,t2,t3);}

C_noret_decl(trf_12402)
static void C_fcall trf_12402(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12402(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12402(t0,t1);}

C_noret_decl(trf_12232)
static void C_fcall trf_12232(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12232(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12232(t0,t1,t2);}

C_noret_decl(trf_12325)
static void C_fcall trf_12325(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12325(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12325(t0,t1);}

C_noret_decl(trf_12330)
static void C_fcall trf_12330(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12330(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12330(t0,t1,t2);}

C_noret_decl(trf_12293)
static void C_fcall trf_12293(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12293(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12293(t0,t1);}

C_noret_decl(trf_12264)
static void C_fcall trf_12264(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12264(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12264(t0,t1);}

C_noret_decl(trf_12269)
static void C_fcall trf_12269(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12269(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12269(t0,t1,t2);}

C_noret_decl(trf_12056)
static void C_fcall trf_12056(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12056(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12056(t0,t1);}

C_noret_decl(trf_12148)
static void C_fcall trf_12148(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12148(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12148(t0,t1);}

C_noret_decl(trf_11558)
static void C_fcall trf_11558(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11558(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11558(t0,t1);}

C_noret_decl(trf_11615)
static void C_fcall trf_11615(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11615(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11615(t0,t1);}

C_noret_decl(trf_11580)
static void C_fcall trf_11580(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11580(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11580(t0,t1,t2);}

C_noret_decl(trf_11222)
static void C_fcall trf_11222(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11222(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11222(t0,t1);}

C_noret_decl(trf_11231)
static void C_fcall trf_11231(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11231(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11231(t0,t1);}

C_noret_decl(trf_11243)
static void C_fcall trf_11243(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11243(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11243(t0,t1);}

C_noret_decl(trf_11255)
static void C_fcall trf_11255(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11255(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11255(t0,t1);}

C_noret_decl(trf_11265)
static void C_fcall trf_11265(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11265(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11265(t0,t1,t2);}

C_noret_decl(trf_11175)
static void C_fcall trf_11175(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11175(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11175(t0,t1,t2);}

C_noret_decl(trf_10053)
static void C_fcall trf_10053(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10053(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10053(t0,t1,t2);}

C_noret_decl(trf_10082)
static void C_fcall trf_10082(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10082(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10082(t0,t1);}

C_noret_decl(trf_10101)
static void C_fcall trf_10101(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10101(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10101(t0,t1);}

C_noret_decl(trf_10120)
static void C_fcall trf_10120(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10120(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10120(t0,t1);}

C_noret_decl(trf_10190)
static void C_fcall trf_10190(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10190(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10190(t0,t1);}

C_noret_decl(trf_10209)
static void C_fcall trf_10209(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10209(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10209(t0,t1);}

C_noret_decl(trf_10291)
static void C_fcall trf_10291(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10291(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10291(t0,t1);}

C_noret_decl(trf_10330)
static void C_fcall trf_10330(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10330(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10330(t0,t1);}

C_noret_decl(trf_10349)
static void C_fcall trf_10349(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10349(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10349(t0,t1);}

C_noret_decl(trf_10368)
static void C_fcall trf_10368(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10368(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10368(t0,t1);}

C_noret_decl(trf_10448)
static void C_fcall trf_10448(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10448(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10448(t0,t1);}

C_noret_decl(trf_10533)
static void C_fcall trf_10533(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10533(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10533(t0,t1);}

C_noret_decl(trf_10647)
static void C_fcall trf_10647(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10647(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10647(t0,t1);}

C_noret_decl(trf_10612)
static void C_fcall trf_10612(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10612(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10612(t0,t1,t2);}

C_noret_decl(trf_10482)
static void C_fcall trf_10482(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10482(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10482(t0,t1);}

C_noret_decl(trf_10243)
static void C_fcall trf_10243(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10243(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10243(t0,t1);}

C_noret_decl(trf_10154)
static void C_fcall trf_10154(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10154(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10154(t0,t1);}

C_noret_decl(trf_10004)
static void C_fcall trf_10004(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10004(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10004(t0,t1,t2);}

C_noret_decl(trf_9809)
static void C_fcall trf_9809(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9809(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9809(t0,t1,t2);}

C_noret_decl(trf_9700)
static void C_fcall trf_9700(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9700(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9700(t0,t1);}

C_noret_decl(trf_9659)
static void C_fcall trf_9659(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9659(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9659(t0,t1);}

C_noret_decl(trf_9455)
static void C_fcall trf_9455(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9455(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9455(t0,t1);}

C_noret_decl(trf_9278)
static void C_fcall trf_9278(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9278(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9278(t0,t1,t2,t3);}

C_noret_decl(trf_9318)
static void C_fcall trf_9318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9318(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9318(t0,t1,t2,t3);}

C_noret_decl(trf_9235)
static void C_fcall trf_9235(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9235(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9235(t0,t1,t2,t3);}

C_noret_decl(trf_9201)
static void C_fcall trf_9201(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9201(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9201(t0,t1,t2,t3);}

C_noret_decl(trf_9141)
static void C_fcall trf_9141(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9141(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9141(t0,t1);}

C_noret_decl(trf_9011)
static void C_fcall trf_9011(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9011(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9011(t0,t1);}

C_noret_decl(trf_9048)
static void C_fcall trf_9048(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9048(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9048(t0,t1);}

C_noret_decl(trf_8875)
static void C_fcall trf_8875(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8875(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8875(t0,t1,t2);}

C_noret_decl(trf_8902)
static void C_fcall trf_8902(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8902(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8902(t0,t1,t2);}

C_noret_decl(trf_8789)
static void C_fcall trf_8789(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8789(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8789(t0,t1,t2);}

C_noret_decl(trf_8834)
static void C_fcall trf_8834(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8834(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8834(t0,t1,t2);}

C_noret_decl(trf_8716)
static void C_fcall trf_8716(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8716(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8716(t0,t1,t2);}

C_noret_decl(trf_8661)
static void C_fcall trf_8661(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8661(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8661(t0,t1,t2,t3);}

C_noret_decl(trf_8674)
static void C_fcall trf_8674(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8674(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8674(t0,t1);}

C_noret_decl(trf_8337)
static void C_fcall trf_8337(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8337(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8337(t0,t1,t2,t3);}

C_noret_decl(trf_8593)
static void C_fcall trf_8593(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8593(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8593(t0,t1,t2);}

C_noret_decl(trf_8620)
static void C_fcall trf_8620(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8620(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8620(t0,t1,t2);}

C_noret_decl(trf_8544)
static void C_fcall trf_8544(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8544(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8544(t0,t1,t2,t3);}

C_noret_decl(trf_8557)
static void C_fcall trf_8557(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8557(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8557(t0,t1);}

C_noret_decl(trf_8290)
static void C_fcall trf_8290(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8290(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8290(t0,t1,t2);}

C_noret_decl(trf_8228)
static void C_fcall trf_8228(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8228(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8228(t0,t1);}

C_noret_decl(trf_8129)
static void C_fcall trf_8129(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8129(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8129(t0,t1,t2);}

C_noret_decl(trf_7448)
static void C_fcall trf_7448(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7448(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7448(t0,t1,t2);}

C_noret_decl(trf_7482)
static void C_fcall trf_7482(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7482(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7482(t0,t1);}

C_noret_decl(trf_7940)
static void C_fcall trf_7940(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7940(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7940(t0,t1);}

C_noret_decl(trf_8058)
static void C_fcall trf_8058(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8058(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8058(t0,t1,t2);}

C_noret_decl(trf_8012)
static void C_fcall trf_8012(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8012(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8012(t0,t1,t2);}

C_noret_decl(trf_7957)
static void C_fcall trf_7957(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7957(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7957(t0,t1,t2);}

C_noret_decl(trf_7878)
static void C_fcall trf_7878(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7878(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7878(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7821)
static void C_fcall trf_7821(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7821(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7821(t0,t1,t2);}

C_noret_decl(trf_7769)
static void C_fcall trf_7769(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7769(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7769(t0,t1,t2);}

C_noret_decl(trf_7697)
static void C_fcall trf_7697(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7697(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7697(t0,t1,t2);}

C_noret_decl(trf_7644)
static void C_fcall trf_7644(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7644(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7644(t0,t1,t2,t3);}

C_noret_decl(trf_7657)
static void C_fcall trf_7657(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7657(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7657(t0,t1);}

C_noret_decl(trf_7547)
static void C_fcall trf_7547(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7547(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7547(t0,t1,t2);}

C_noret_decl(trf_7491)
static void C_fcall trf_7491(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7491(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7491(t0,t1,t2);}

C_noret_decl(trf_6522)
static void C_fcall trf_6522(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6522(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6522(t0,t1,t2);}

C_noret_decl(trf_7397)
static void C_fcall trf_7397(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7397(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7397(t0,t1,t2);}

C_noret_decl(trf_7135)
static void C_fcall trf_7135(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7135(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7135(t0,t1);}

C_noret_decl(trf_7318)
static void C_fcall trf_7318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7318(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7318(t0,t1);}

C_noret_decl(trf_7281)
static void C_fcall trf_7281(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7281(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7281(t0,t1,t2);}

C_noret_decl(trf_7218)
static void C_fcall trf_7218(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7218(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7218(t0,t1,t2);}

C_noret_decl(trf_7161)
static void C_fcall trf_7161(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7161(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7161(t0,t1,t2);}

C_noret_decl(trf_7028)
static void C_fcall trf_7028(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7028(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7028(t0,t1,t2);}

C_noret_decl(trf_6938)
static void C_fcall trf_6938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6938(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6938(t0,t1,t2);}

C_noret_decl(trf_6840)
static void C_fcall trf_6840(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6840(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6840(t0,t1);}

C_noret_decl(trf_6850)
static void C_fcall trf_6850(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6850(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6850(t0,t1,t2);}

C_noret_decl(trf_6736)
static void C_fcall trf_6736(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6736(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6736(t0,t1,t2);}

C_noret_decl(trf_6763)
static void C_fcall trf_6763(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6763(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6763(t0,t1,t2);}

C_noret_decl(trf_6655)
static void C_fcall trf_6655(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6655(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6655(t0,t1);}

C_noret_decl(trf_6603)
static void C_fcall trf_6603(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6603(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6603(t0,t1,t2);}

C_noret_decl(trf_5922)
static void C_fcall trf_5922(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5922(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5922(t0,t1);}

C_noret_decl(trf_6100)
static void C_fcall trf_6100(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6100(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6100(t0,t1,t2);}

C_noret_decl(trf_6126)
static void C_fcall trf_6126(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6126(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6126(t0,t1);}

C_noret_decl(trf_6202)
static void C_fcall trf_6202(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6202(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6202(t0,t1);}

C_noret_decl(trf_5981)
static void C_fcall trf_5981(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5981(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5981(t0,t1);}

C_noret_decl(trf_6015)
static void C_fcall trf_6015(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6015(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6015(t0,t1);}

C_noret_decl(trf_6049)
static void C_fcall trf_6049(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6049(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6049(t0,t1);}

C_noret_decl(trf_5883)
static void C_fcall trf_5883(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5883(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5883(t0,t1,t2);}

C_noret_decl(trf_5837)
static void C_fcall trf_5837(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5837(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5837(t0,t1,t2);}

C_noret_decl(trf_5800)
static void C_fcall trf_5800(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5800(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5800(t0,t1);}

C_noret_decl(trf_5804)
static void C_fcall trf_5804(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5804(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5804(t0,t1,t2);}

C_noret_decl(trf_5489)
static void C_fcall trf_5489(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5489(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5489(t0,t1,t2);}

C_noret_decl(trf_5398)
static void C_fcall trf_5398(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5398(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5398(t0,t1,t2);}

C_noret_decl(trf_5343)
static void C_fcall trf_5343(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5343(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5343(t0,t1,t2);}

C_noret_decl(trf_4978)
static void C_fcall trf_4978(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4978(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4978(t0,t1,t2);}

C_noret_decl(trf_5006)
static void C_fcall trf_5006(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5006(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5006(t0,t1);}

C_noret_decl(trf_4870)
static void C_fcall trf_4870(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4870(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4870(t0,t1);}

C_noret_decl(trf_4745)
static void C_fcall trf_4745(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4745(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4745(t0,t1,t2,t3);}

C_noret_decl(trf_4692)
static void C_fcall trf_4692(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4692(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4692(t0,t1,t2);}

C_noret_decl(trf_4645)
static void C_fcall trf_4645(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4645(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4645(t0,t1);}

C_noret_decl(trf_4471)
static void C_fcall trf_4471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4471(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4471(t0,t1,t2);}

C_noret_decl(trf_4493)
static void C_fcall trf_4493(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4493(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4493(t0,t1);}

C_noret_decl(trf_4500)
static void C_fcall trf_4500(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4500(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4500(t0,t1);}

C_noret_decl(trf_4415)
static void C_fcall trf_4415(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4415(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4415(t0,t1,t2,t3);}

C_noret_decl(trf_4271)
static void C_fcall trf_4271(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4271(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4271(t0,t1,t2,t3);}

C_noret_decl(trf_4250)
static void C_fcall trf_4250(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4250(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4250(t0,t1);}

C_noret_decl(trf_4210)
static void C_fcall trf_4210(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4210(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4210(t0,t1,t2);}

C_noret_decl(trf_4163)
static void C_fcall trf_4163(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4163(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4163(t0,t1);}

C_noret_decl(trf_4115)
static void C_fcall trf_4115(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4115(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4115(t0,t1);}

C_noret_decl(trf_4073)
static void C_fcall trf_4073(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4073(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4073(t0,t1,t2);}

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
C_support_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_support_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("support_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(5170)){
C_save(t1);
C_rereclaim2(5170*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,499);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],30,"\010compilercompiler-cleanup-hook");
lf[3]=C_h_intern(&lf[3],26,"\010compilerdebugging-chicken");
lf[4]=C_h_intern(&lf[4],26,"\010compilerdisabled-warnings");
lf[5]=C_h_intern(&lf[5],13,"\010compilerbomb");
lf[6]=C_h_intern(&lf[6],5,"error");
lf[7]=C_h_intern(&lf[7],13,"string-append");
lf[8]=C_decode_literal(C_heaptop,"\376B\000\000\032[internal compiler error] ");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\031[internal compiler error]");
lf[10]=C_h_intern(&lf[10],18,"\010compilerdebugging");
lf[11]=C_h_intern(&lf[11],19,"\003sysstandard-output");
lf[12]=C_h_intern(&lf[12],12,"flush-output");
lf[13]=C_h_intern(&lf[13],7,"newline");
lf[14]=C_h_intern(&lf[14],19,"\003syswrite-char/port");
lf[15]=C_h_intern(&lf[15],5,"write");
lf[16]=C_h_intern(&lf[16],5,"force");
lf[17]=C_h_intern(&lf[17],7,"display");
lf[18]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[19]=C_h_intern(&lf[19],25,"\010compilercompiler-warning");
lf[20]=C_h_intern(&lf[20],7,"fprintf");
lf[21]=C_decode_literal(C_heaptop,"\376B\000\000\012\012Warning: ");
lf[22]=C_h_intern(&lf[22],18,"current-error-port");
lf[23]=C_h_intern(&lf[23],20,"\003syswarnings-enabled");
lf[24]=C_h_intern(&lf[24],4,"quit");
lf[25]=C_h_intern(&lf[25],4,"exit");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\010\012Error: ");
lf[27]=C_h_intern(&lf[27],21,"\003syssyntax-error-hook");
lf[28]=C_h_intern(&lf[28],16,"print-call-chain");
lf[29]=C_h_intern(&lf[29],18,"\003syscurrent-thread");
lf[30]=C_decode_literal(C_heaptop,"\376B\000\000\025\012\011Expansion history:\012");
lf[31]=C_decode_literal(C_heaptop,"\376B\000\000\005\011~s~%");
lf[32]=C_h_intern(&lf[32],12,"\003sysfor-each");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\031Syntax error (~a): ~a~%~%");
lf[34]=C_decode_literal(C_heaptop,"\376B\000\000\024Syntax error: ~a~%~%");
lf[35]=C_h_intern(&lf[35],12,"syntax-error");
lf[36]=C_h_intern(&lf[36],31,"\010compileremit-syntax-trace-info");
lf[37]=C_h_intern(&lf[37],9,"map-llist");
lf[38]=C_h_intern(&lf[38],24,"\010compilercheck-signature");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000@Arguments to inlined call of `~A\047 do not match parameter-list ~A");
lf[40]=C_h_intern(&lf[40],18,"\010compilerreal-name");
lf[41]=C_h_intern(&lf[41],13,"\010compilerposq");
lf[42]=C_h_intern(&lf[42],18,"\010compilerstringify");
lf[43]=C_h_intern(&lf[43],14,"symbol->string");
lf[44]=C_h_intern(&lf[44],17,"get-output-string");
lf[45]=C_h_intern(&lf[45],18,"open-output-string");
lf[46]=C_h_intern(&lf[46],18,"\010compilersymbolify");
lf[47]=C_h_intern(&lf[47],14,"string->symbol");
lf[48]=C_h_intern(&lf[48],26,"\010compilerbuild-lambda-list");
lf[49]=C_h_intern(&lf[49],29,"\010compilerstring->c-identifier");
lf[50]=C_h_intern(&lf[50],24,"\003sysstring->c-identifier");
lf[51]=C_h_intern(&lf[51],21,"\010compilerc-ify-string");
lf[52]=C_h_intern(&lf[52],16,"\003syslist->string");
lf[53]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\042\376\377\016");
lf[54]=C_h_intern(&lf[54],6,"append");
lf[55]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\377\016");
lf[56]=C_h_intern(&lf[56],16,"\003sysstring->list");
lf[57]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\0000\376\003\000\000\002\376\377\012\000\0000\376\377\016");
lf[58]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\0000\376\377\016");
lf[59]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\042\376\003\000\000\002\376\377\012\000\000\047\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000\077\376\377\016");
lf[60]=C_h_intern(&lf[60],28,"\010compilervalid-c-identifier\077");
lf[61]=C_h_intern(&lf[61],3,"any");
lf[62]=C_h_intern(&lf[62],8,"->string");
lf[63]=C_h_intern(&lf[63],14,"\010compilerwords");
lf[64]=C_h_intern(&lf[64],21,"\010compilerwords->bytes");
lf[65]=C_h_intern(&lf[65],34,"\010compilercheck-and-open-input-file");
lf[66]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[67]=C_h_intern(&lf[67],18,"current-input-port");
lf[68]=C_h_intern(&lf[68],15,"open-input-file");
lf[69]=C_decode_literal(C_heaptop,"\376B\000\000\024Can not open file ~s");
lf[70]=C_decode_literal(C_heaptop,"\376B\000\000\037Can not open file ~s in line ~s");
lf[71]=C_h_intern(&lf[71],12,"file-exists\077");
lf[72]=C_h_intern(&lf[72],33,"\010compilerclose-checked-input-file");
lf[73]=C_decode_literal(C_heaptop,"\376B\000\000\001-");
lf[74]=C_h_intern(&lf[74],16,"close-input-port");
lf[75]=C_h_intern(&lf[75],19,"\010compilerfold-inner");
lf[76]=C_h_intern(&lf[76],7,"reverse");
lf[77]=C_h_intern(&lf[77],28,"\010compilerfollow-without-loop");
lf[78]=C_h_intern(&lf[78],21,"\010compilersort-symbols");
lf[79]=C_h_intern(&lf[79],8,"string<\077");
lf[80]=C_h_intern(&lf[80],4,"sort");
lf[81]=C_h_intern(&lf[81],18,"\010compilerconstant\077");
lf[82]=C_h_intern(&lf[82],5,"quote");
lf[83]=C_h_intern(&lf[83],29,"\010compilercollapsable-literal\077");
lf[84]=C_h_intern(&lf[84],19,"\010compilerimmediate\077");
lf[85]=C_h_intern(&lf[85],20,"\010compilerbig-fixnum\077");
lf[86]=C_h_intern(&lf[86],23,"\010compilerbasic-literal\077");
lf[87]=C_h_intern(&lf[87],5,"every");
lf[88]=C_h_intern(&lf[88],12,"vector->list");
lf[89]=C_h_intern(&lf[89],32,"\010compilercanonicalize-begin-body");
lf[90]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[91]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[92]=C_h_intern(&lf[92],3,"let");
lf[93]=C_h_intern(&lf[93],6,"gensym");
lf[94]=C_h_intern(&lf[94],1,"t");
lf[95]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010\003sysvoid\376\377\016");
lf[96]=C_h_intern(&lf[96],21,"\010compilerstring->expr");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\042cannot parse expression: ~s [~a]~%");
lf[98]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016");
lf[99]=C_h_intern(&lf[99],5,"begin");
lf[100]=C_h_intern(&lf[100],10,"\003sysappend");
lf[101]=C_h_intern(&lf[101],4,"read");
lf[102]=C_h_intern(&lf[102],6,"unfold");
lf[103]=C_h_intern(&lf[103],11,"eof-object\077");
lf[104]=C_h_intern(&lf[104],6,"values");
lf[105]=C_h_intern(&lf[105],22,"with-input-from-string");
lf[106]=C_h_intern(&lf[106],22,"with-exception-handler");
lf[107]=C_h_intern(&lf[107],30,"call-with-current-continuation");
lf[108]=C_h_intern(&lf[108],30,"\010compilerdecompose-lambda-list");
lf[109]=C_h_intern(&lf[109],25,"\003sysdecompose-lambda-list");
lf[110]=C_h_intern(&lf[110],37,"\010compilerprocess-lambda-documentation");
lf[111]=C_h_intern(&lf[111],21,"\010compilerllist-length");
lf[112]=C_h_intern(&lf[112],30,"\010compilerexpand-profile-lambda");
lf[113]=C_h_intern(&lf[113],29,"\010compilerprofile-lambda-index");
lf[114]=C_h_intern(&lf[114],28,"\010compilerprofile-lambda-list");
lf[115]=C_h_intern(&lf[115],33,"\010compilerprofile-info-vector-name");
lf[116]=C_h_intern(&lf[116],17,"\003sysprofile-entry");
lf[117]=C_h_intern(&lf[117],6,"lambda");
lf[118]=C_h_intern(&lf[118],5,"apply");
lf[119]=C_h_intern(&lf[119],16,"\003sysprofile-exit");
lf[120]=C_h_intern(&lf[120],16,"\003sysdynamic-wind");
lf[121]=C_h_intern(&lf[121],10,"alist-cons");
lf[122]=C_h_intern(&lf[122],37,"\010compilerinitialize-analysis-database");
lf[123]=C_h_intern(&lf[123],8,"internal");
lf[124]=C_h_intern(&lf[124],8,"\003sysput!");
lf[125]=C_h_intern(&lf[125],18,"\010compilerintrinsic");
lf[126]=C_h_intern(&lf[126],9,"\003syserror");
lf[127]=C_h_intern(&lf[127],26,"\010compilerinternal-bindings");
lf[128]=C_h_intern(&lf[128],26,"\010compilerfoldable-bindings");
lf[129]=C_h_intern(&lf[129],17,"\010compilerfoldable");
lf[130]=C_h_intern(&lf[130],8,"extended");
lf[131]=C_h_intern(&lf[131],17,"extended-bindings");
lf[132]=C_h_intern(&lf[132],8,"standard");
lf[133]=C_h_intern(&lf[133],17,"standard-bindings");
lf[134]=C_h_intern(&lf[134],12,"\010compilerget");
lf[135]=C_h_intern(&lf[135],18,"\003syshash-table-ref");
lf[136]=C_h_intern(&lf[136],16,"\010compilerget-all");
lf[137]=C_h_intern(&lf[137],10,"filter-map");
lf[138]=C_h_intern(&lf[138],13,"\010compilerput!");
lf[139]=C_h_intern(&lf[139],19,"\003syshash-table-set!");
lf[140]=C_h_intern(&lf[140],17,"\010compilercollect!");
lf[141]=C_h_intern(&lf[141],15,"\010compilercount!");
lf[142]=C_h_intern(&lf[142],17,"\010compilerget-list");
lf[143]=C_h_intern(&lf[143],17,"\010compilerget-line");
lf[144]=C_h_intern(&lf[144],24,"\003sysline-number-database");
lf[145]=C_h_intern(&lf[145],19,"\010compilerget-line-2");
lf[146]=C_h_intern(&lf[146],30,"\010compilerfind-lambda-container");
lf[147]=C_h_intern(&lf[147],12,"contained-in");
lf[148]=C_h_intern(&lf[148],37,"\010compilerdisplay-line-number-database");
lf[149]=C_h_intern(&lf[149],3,"cdr");
lf[150]=C_h_intern(&lf[150],23,"\003syshash-table-for-each");
lf[151]=C_h_intern(&lf[151],34,"\010compilerdisplay-analysis-database");
lf[152]=C_decode_literal(C_heaptop,"\376B\000\000\005\011css=");
lf[153]=C_decode_literal(C_heaptop,"\376B\000\000\006\011refs=");
lf[154]=C_decode_literal(C_heaptop,"\376B\000\000\005\011val=");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\006\011lval=");
lf[156]=C_decode_literal(C_heaptop,"\376B\000\000\006\011pval=");
lf[157]=C_h_intern(&lf[157],7,"unknown");
lf[158]=C_h_intern(&lf[158],8,"captured");
lf[159]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010captured\376\001\000\000\003cpt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010assigned\376\001\000\000\003set\376\003\000\000\002\376\003\000\000\002\376\001\000\000\005box"
"ed\376\001\000\000\003box\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006global\376\001\000\000\003glo\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020assigned-locally\376\001\000\000\003stl\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\014contractable\376\001\000\000\003con\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020standard-binding\376\001\000\000\003stb\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\006simple\376\001\000\000\003sim\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011inlinable\376\001\000\000\003inl\376\003\000\000\002\376\003\000\000\002\376\001\000\000\013collapsable\376"
"\001\000\000\003col\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011removable\376\001\000\000\003rem\376\003\000\000\002\376\003\000\000\002\376\001\000\000\010constant\376\001\000\000\003con\376\003\000\000\002\376\003\000\000\002"
"\376\001\000\000\015inline-target\376\001\000\000\003ilt\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020inline-transient\376\001\000\000\003itr\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011"
"undefined\376\001\000\000\003und\376\003\000\000\002\376\003\000\000\002\376\001\000\000\011replacing\376\001\000\000\003rpg\376\003\000\000\002\376\003\000\000\002\376\001\000\000\006unused\376\001\000\000\003uud\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\020extended-binding\376\001\000\000\003xtb\376\003\000\000\002\376\003\000\000\002\376\001\000\000\015inline-export\376\001\000\000\003ilx\376\003\000\000\002\376\003"
"\000\000\002\376\001\000\000\014customizable\376\001\000\000\003cst\376\003\000\000\002\376\003\000\000\002\376\001\000\000\025has-unused-parameters\376\001\000\000\003hup\376\003\000\000\002\376\003\000"
"\000\002\376\001\000\000\012boxed-rest\376\001\000\000\003bxr\376\377\016");
lf[160]=C_h_intern(&lf[160],4,"caar");
lf[161]=C_h_intern(&lf[161],5,"value");
lf[162]=C_h_intern(&lf[162],4,"cdar");
lf[163]=C_h_intern(&lf[163],11,"local-value");
lf[164]=C_h_intern(&lf[164],15,"potential-value");
lf[165]=C_h_intern(&lf[165],10,"replacable");
lf[166]=C_h_intern(&lf[166],10,"references");
lf[167]=C_h_intern(&lf[167],10,"call-sites");
lf[168]=C_decode_literal(C_heaptop,"\376B\000\000\020Illegal property");
lf[169]=C_h_intern(&lf[169],4,"home");
lf[170]=C_h_intern(&lf[170],8,"contains");
lf[171]=C_h_intern(&lf[171],8,"use-expr");
lf[172]=C_h_intern(&lf[172],12,"closure-size");
lf[173]=C_h_intern(&lf[173],14,"rest-parameter");
lf[174]=C_h_intern(&lf[174],18,"captured-variables");
lf[175]=C_h_intern(&lf[175],13,"explicit-rest");
lf[176]=C_h_intern(&lf[176],8,"assigned");
lf[177]=C_h_intern(&lf[177],5,"boxed");
lf[178]=C_h_intern(&lf[178],6,"global");
lf[179]=C_h_intern(&lf[179],12,"contractable");
lf[180]=C_h_intern(&lf[180],16,"standard-binding");
lf[181]=C_h_intern(&lf[181],16,"assigned-locally");
lf[182]=C_h_intern(&lf[182],11,"collapsable");
lf[183]=C_h_intern(&lf[183],9,"removable");
lf[184]=C_h_intern(&lf[184],9,"undefined");
lf[185]=C_h_intern(&lf[185],9,"replacing");
lf[186]=C_h_intern(&lf[186],6,"unused");
lf[187]=C_h_intern(&lf[187],6,"simple");
lf[188]=C_h_intern(&lf[188],9,"inlinable");
lf[189]=C_h_intern(&lf[189],13,"inline-export");
lf[190]=C_h_intern(&lf[190],21,"has-unused-parameters");
lf[191]=C_h_intern(&lf[191],16,"extended-binding");
lf[192]=C_h_intern(&lf[192],12,"customizable");
lf[193]=C_h_intern(&lf[193],8,"constant");
lf[194]=C_h_intern(&lf[194],10,"boxed-rest");
lf[195]=C_h_intern(&lf[195],11,"hidden-refs");
lf[196]=C_h_intern(&lf[196],34,"\010compilerdefault-standard-bindings");
lf[197]=C_h_intern(&lf[197],34,"\010compilerdefault-extended-bindings");
lf[198]=C_h_intern(&lf[198],9,"make-node");
lf[199]=C_h_intern(&lf[199],4,"node");
lf[200]=C_h_intern(&lf[200],5,"node\077");
lf[201]=C_h_intern(&lf[201],15,"node-class-set!");
lf[202]=C_h_intern(&lf[202],14,"\003sysblock-set!");
lf[203]=C_h_intern(&lf[203],10,"node-class");
lf[204]=C_h_intern(&lf[204],20,"node-parameters-set!");
lf[205]=C_h_intern(&lf[205],15,"node-parameters");
lf[206]=C_h_intern(&lf[206],24,"node-subexpressions-set!");
lf[207]=C_h_intern(&lf[207],19,"node-subexpressions");
lf[208]=C_h_intern(&lf[208],16,"\010compilervarnode");
lf[209]=C_h_intern(&lf[209],13,"\004corevariable");
lf[210]=C_h_intern(&lf[210],14,"\010compilerqnode");
lf[211]=C_h_intern(&lf[211],25,"\010compilerbuild-node-graph");
lf[212]=C_decode_literal(C_heaptop,"\376B\000\000\016bad expression");
lf[213]=C_h_intern(&lf[213],15,"\004coreglobal-ref");
lf[214]=C_h_intern(&lf[214],2,"if");
lf[215]=C_h_intern(&lf[215],14,"\004coreundefined");
lf[216]=C_h_intern(&lf[216],8,"truncate");
lf[217]=C_h_intern(&lf[217],4,"type");
lf[218]=C_decode_literal(C_heaptop,"\376B\000\000;literal \047~s\047 is out of range - will be truncated to integer");
lf[219]=C_h_intern(&lf[219],6,"fixnum");
lf[220]=C_h_intern(&lf[220],11,"number-type");
lf[221]=C_h_intern(&lf[221],6,"unzip1");
lf[222]=C_h_intern(&lf[222],11,"\004corelambda");
lf[223]=C_h_intern(&lf[223],14,"\004coreprimitive");
lf[224]=C_h_intern(&lf[224],11,"\004coreinline");
lf[225]=C_h_intern(&lf[225],13,"\004corecallunit");
lf[226]=C_h_intern(&lf[226],9,"\004coreproc");
lf[227]=C_h_intern(&lf[227],4,"set!");
lf[228]=C_h_intern(&lf[228],9,"\004coreset!");
lf[229]=C_h_intern(&lf[229],29,"\004coreforeign-callback-wrapper");
lf[230]=C_h_intern(&lf[230],5,"sixth");
lf[231]=C_h_intern(&lf[231],5,"fifth");
lf[232]=C_h_intern(&lf[232],20,"\004coreinline_allocate");
lf[233]=C_h_intern(&lf[233],8,"\004coreapp");
lf[234]=C_h_intern(&lf[234],9,"\004corecall");
lf[235]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[236]=C_h_intern(&lf[236],24,"\010compilersource-filename");
lf[237]=C_h_intern(&lf[237],28,"\003syssymbol->qualified-string");
lf[238]=C_h_intern(&lf[238],7,"\003sysget");
lf[239]=C_h_intern(&lf[239],34,"\010compileralways-bound-to-procedure");
lf[240]=C_h_intern(&lf[240],15,"\004coreinline_ref");
lf[241]=C_h_intern(&lf[241],18,"\004coreinline_update");
lf[242]=C_h_intern(&lf[242],19,"\004coreinline_loc_ref");
lf[243]=C_h_intern(&lf[243],22,"\004coreinline_loc_update");
lf[244]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\000\376\377\016");
lf[245]=C_h_intern(&lf[245],1,"o");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\033eliminated procedure checks");
lf[247]=C_h_intern(&lf[247],30,"\010compilerbuild-expression-tree");
lf[248]=C_h_intern(&lf[248],12,"\004coreclosure");
lf[249]=C_h_intern(&lf[249],4,"last");
lf[250]=C_h_intern(&lf[250],4,"list");
lf[251]=C_h_intern(&lf[251],7,"butlast");
lf[252]=C_h_intern(&lf[252],5,"cons*");
lf[253]=C_h_intern(&lf[253],9,"\004corebind");
lf[254]=C_h_intern(&lf[254],10,"\004coreunbox");
lf[255]=C_h_intern(&lf[255],16,"\004corelet_unboxed");
lf[256]=C_h_intern(&lf[256],8,"\004coreref");
lf[257]=C_h_intern(&lf[257],11,"\004coreupdate");
lf[258]=C_h_intern(&lf[258],13,"\004coreupdate_i");
lf[259]=C_h_intern(&lf[259],8,"\004corebox");
lf[260]=C_h_intern(&lf[260],9,"\004corecond");
lf[261]=C_h_intern(&lf[261],21,"\010compilerfold-boolean");
lf[262]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\005C_and\376\377\016");
lf[263]=C_h_intern(&lf[263],31,"\010compilerinline-lambda-bindings");
lf[264]=C_h_intern(&lf[264],8,"split-at");
lf[265]=C_h_intern(&lf[265],10,"fold-right");
lf[266]=C_h_intern(&lf[266],4,"take");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\012C_a_i_list");
lf[268]=C_h_intern(&lf[268],34,"\010compilercopy-node-tree-and-rename");
lf[269]=C_h_intern(&lf[269],9,"alist-ref");
lf[270]=C_h_intern(&lf[270],3,"eq\077");
lf[271]=C_h_intern(&lf[271],7,"\003sysmap");
lf[272]=C_h_intern(&lf[272],1,"f");
lf[273]=C_h_intern(&lf[273],4,"cons");
lf[274]=C_h_intern(&lf[274],16,"inline-transient");
lf[275]=C_h_intern(&lf[275],18,"\010compilertree-copy");
lf[276]=C_h_intern(&lf[276],19,"\010compilercopy-node!");
lf[277]=C_h_intern(&lf[277],20,"\010compilernode->sexpr");
lf[278]=C_h_intern(&lf[278],20,"\010compilersexpr->node");
lf[279]=C_h_intern(&lf[279],32,"\010compileremit-global-inline-file");
lf[280]=C_h_intern(&lf[280],5,"print");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[282]=C_h_intern(&lf[282],1,"i");
lf[283]=C_decode_literal(C_heaptop,"\376B\000\0001the following procedures can be globally inlined:");
lf[284]=C_decode_literal(C_heaptop,"\376B\000\000\015; END OF FILE");
lf[285]=C_h_intern(&lf[285],2,"pp");
lf[286]=C_h_intern(&lf[286],3,"yes");
lf[287]=C_h_intern(&lf[287],2,"no");
lf[288]=C_h_intern(&lf[288],24,"\010compilerinline-max-size");
lf[289]=C_h_intern(&lf[289],15,"\010compilerinline");
lf[290]=C_h_intern(&lf[290],22,"\010compilerinline-global");
lf[291]=C_h_intern(&lf[291],26,"\010compilervariable-visible\077");
lf[292]=C_decode_literal(C_heaptop,"\376B\000\000\027; GENERATED BY CHICKEN ");
lf[293]=C_decode_literal(C_heaptop,"\376B\000\000\006 FROM ");
lf[294]=C_decode_literal(C_heaptop,"\376B\000\000\001\012");
lf[295]=C_h_intern(&lf[295],15,"chicken-version");
lf[296]=C_h_intern(&lf[296],19,"with-output-to-file");
lf[297]=C_h_intern(&lf[297],25,"\010compilerload-inline-file");
lf[298]=C_h_intern(&lf[298],20,"with-input-from-file");
lf[299]=C_h_intern(&lf[299],19,"\010compilermatch-node");
lf[300]=C_h_intern(&lf[300],1,"a");
lf[301]=C_decode_literal(C_heaptop,"\376B\000\000\007matched");
lf[302]=C_h_intern(&lf[302],37,"\010compilerexpression-has-side-effects\077");
lf[303]=C_h_intern(&lf[303],24,"foreign-callback-stub-id");
lf[304]=C_h_intern(&lf[304],4,"find");
lf[305]=C_h_intern(&lf[305],22,"foreign-callback-stubs");
lf[306]=C_h_intern(&lf[306],28,"\010compilersimple-lambda-node\077");
lf[307]=C_h_intern(&lf[307],31,"\010compilerdump-undefined-globals");
lf[308]=C_h_intern(&lf[308],8,"keyword\077");
lf[309]=C_h_intern(&lf[309],29,"\010compilerdump-defined-globals");
lf[310]=C_h_intern(&lf[310],25,"\010compilerdump-global-refs");
lf[311]=C_h_intern(&lf[311],28,"\003systoplevel-definition-hook");
lf[312]=C_h_intern(&lf[312],22,"\010compilerhide-variable");
lf[313]=C_decode_literal(C_heaptop,"\376B\000\000\042hiding nonexported module bindings");
lf[314]=C_h_intern(&lf[314],36,"\010compilercompute-database-statistics");
lf[315]=C_h_intern(&lf[315],29,"\010compilercurrent-program-size");
lf[316]=C_h_intern(&lf[316],30,"\010compileroriginal-program-size");
lf[317]=C_h_intern(&lf[317],33,"\010compilerprint-program-statistics");
lf[318]=C_decode_literal(C_heaptop,"\376B\000\000\027;   database entries: \011");
lf[319]=C_decode_literal(C_heaptop,"\376B\000\000\027;   known call sites: \011");
lf[320]=C_decode_literal(C_heaptop,"\376B\000\000\027;   global variables: \011");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000\027;   known procedures: \011");
lf[322]=C_decode_literal(C_heaptop,"\376B\000\000\042;   variables with known values: \011");
lf[323]=C_decode_literal(C_heaptop,"\376B\000\000\032 \011original program size: \011");
lf[324]=C_decode_literal(C_heaptop,"\376B\000\000\023;   program size: \011");
lf[325]=C_h_intern(&lf[325],1,"s");
lf[326]=C_decode_literal(C_heaptop,"\376B\000\000\023program statistics:");
lf[327]=C_h_intern(&lf[327],35,"\010compilerpprint-expressions-to-file");
lf[328]=C_h_intern(&lf[328],17,"close-output-port");
lf[329]=C_h_intern(&lf[329],12,"pretty-print");
lf[330]=C_h_intern(&lf[330],19,"with-output-to-port");
lf[331]=C_h_intern(&lf[331],16,"open-output-file");
lf[332]=C_h_intern(&lf[332],19,"current-output-port");
lf[333]=C_h_intern(&lf[333],27,"\010compilerforeign-type-check");
lf[334]=C_h_intern(&lf[334],4,"char");
lf[335]=C_h_intern(&lf[335],13,"unsigned-char");
lf[336]=C_h_intern(&lf[336],6,"unsafe");
lf[337]=C_h_intern(&lf[337],25,"\003sysforeign-char-argument");
lf[338]=C_h_intern(&lf[338],3,"int");
lf[339]=C_h_intern(&lf[339],27,"\003sysforeign-fixnum-argument");
lf[340]=C_h_intern(&lf[340],5,"float");
lf[341]=C_h_intern(&lf[341],27,"\003sysforeign-flonum-argument");
lf[342]=C_h_intern(&lf[342],7,"pointer");
lf[343]=C_h_intern(&lf[343],26,"\003sysforeign-block-argument");
lf[344]=C_h_intern(&lf[344],15,"nonnull-pointer");
lf[345]=C_h_intern(&lf[345],8,"u8vector");
lf[346]=C_h_intern(&lf[346],34,"\003sysforeign-number-vector-argument");
lf[347]=C_h_intern(&lf[347],16,"nonnull-u8vector");
lf[348]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020nonnull-u8vector\376\001\000\000\010u8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-u16vector\376\001\000\000"
"\011u16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\020nonnull-s8vector\376\001\000\000\010s8vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-s16"
"vector\376\001\000\000\011s16vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-u32vector\376\001\000\000\011u32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000"
"\021nonnull-s32vector\376\001\000\000\011s32vector\376\003\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-f32vector\376\001\000\000\011f32vector\376\003"
"\000\000\002\376\003\000\000\002\376\001\000\000\021nonnull-f64vector\376\001\000\000\011f64vector\376\377\016");
lf[349]=C_h_intern(&lf[349],7,"integer");
lf[350]=C_h_intern(&lf[350],28,"\003sysforeign-integer-argument");
lf[351]=C_h_intern(&lf[351],16,"unsigned-integer");
lf[352]=C_h_intern(&lf[352],37,"\003sysforeign-unsigned-integer-argument");
lf[353]=C_h_intern(&lf[353],9,"c-pointer");
lf[354]=C_h_intern(&lf[354],28,"\003sysforeign-pointer-argument");
lf[355]=C_h_intern(&lf[355],17,"nonnull-c-pointer");
lf[356]=C_h_intern(&lf[356],8,"c-string");
lf[357]=C_h_intern(&lf[357],17,"\003sysmake-c-string");
lf[358]=C_h_intern(&lf[358],27,"\003sysforeign-string-argument");
lf[359]=C_h_intern(&lf[359],16,"nonnull-c-string");
lf[360]=C_h_intern(&lf[360],6,"symbol");
lf[361]=C_h_intern(&lf[361],18,"\003syssymbol->string");
lf[362]=C_h_intern(&lf[362],3,"ref");
lf[363]=C_h_intern(&lf[363],8,"instance");
lf[364]=C_h_intern(&lf[364],12,"instance-ref");
lf[365]=C_h_intern(&lf[365],4,"this");
lf[366]=C_h_intern(&lf[366],8,"slot-ref");
lf[367]=C_h_intern(&lf[367],16,"nonnull-instance");
lf[368]=C_h_intern(&lf[368],5,"const");
lf[369]=C_h_intern(&lf[369],4,"enum");
lf[370]=C_h_intern(&lf[370],8,"function");
lf[371]=C_h_intern(&lf[371],27,"\010compilerforeign-type-table");
lf[372]=C_h_intern(&lf[372],17,"nonnull-c-string*");
lf[373]=C_h_intern(&lf[373],26,"nonnull-unsigned-c-string*");
lf[374]=C_h_intern(&lf[374],9,"c-string*");
lf[375]=C_h_intern(&lf[375],17,"unsigned-c-string");
lf[376]=C_h_intern(&lf[376],18,"unsigned-c-string*");
lf[377]=C_h_intern(&lf[377],13,"c-string-list");
lf[378]=C_h_intern(&lf[378],14,"c-string-list*");
lf[379]=C_h_intern(&lf[379],18,"unsigned-integer32");
lf[380]=C_h_intern(&lf[380],13,"unsigned-long");
lf[381]=C_h_intern(&lf[381],4,"long");
lf[382]=C_h_intern(&lf[382],9,"integer32");
lf[383]=C_h_intern(&lf[383],17,"nonnull-u16vector");
lf[384]=C_h_intern(&lf[384],16,"nonnull-s8vector");
lf[385]=C_h_intern(&lf[385],17,"nonnull-s16vector");
lf[386]=C_h_intern(&lf[386],17,"nonnull-u32vector");
lf[387]=C_h_intern(&lf[387],17,"nonnull-s32vector");
lf[388]=C_h_intern(&lf[388],17,"nonnull-f32vector");
lf[389]=C_h_intern(&lf[389],17,"nonnull-f64vector");
lf[390]=C_h_intern(&lf[390],9,"u16vector");
lf[391]=C_h_intern(&lf[391],8,"s8vector");
lf[392]=C_h_intern(&lf[392],9,"s16vector");
lf[393]=C_h_intern(&lf[393],9,"u32vector");
lf[394]=C_h_intern(&lf[394],9,"s32vector");
lf[395]=C_h_intern(&lf[395],9,"f32vector");
lf[396]=C_h_intern(&lf[396],9,"f64vector");
lf[397]=C_h_intern(&lf[397],22,"nonnull-scheme-pointer");
lf[398]=C_h_intern(&lf[398],12,"nonnull-blob");
lf[399]=C_h_intern(&lf[399],19,"nonnull-byte-vector");
lf[400]=C_h_intern(&lf[400],11,"byte-vector");
lf[401]=C_h_intern(&lf[401],4,"blob");
lf[402]=C_h_intern(&lf[402],14,"scheme-pointer");
lf[403]=C_h_intern(&lf[403],6,"double");
lf[404]=C_h_intern(&lf[404],6,"number");
lf[405]=C_h_intern(&lf[405],12,"unsigned-int");
lf[406]=C_h_intern(&lf[406],5,"short");
lf[407]=C_h_intern(&lf[407],14,"unsigned-short");
lf[408]=C_h_intern(&lf[408],4,"byte");
lf[409]=C_h_intern(&lf[409],13,"unsigned-byte");
lf[410]=C_h_intern(&lf[410],5,"int32");
lf[411]=C_h_intern(&lf[411],14,"unsigned-int32");
lf[412]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[413]=C_h_intern(&lf[413],36,"\010compilerforeign-type-convert-result");
lf[414]=C_h_intern(&lf[414],38,"\010compilerforeign-type-convert-argument");
lf[415]=C_h_intern(&lf[415],27,"\010compilerfinal-foreign-type");
lf[416]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[417]=C_h_intern(&lf[417],37,"\010compilerestimate-foreign-result-size");
lf[418]=C_h_intern(&lf[418],9,"integer64");
lf[419]=C_h_intern(&lf[419],4,"bool");
lf[420]=C_h_intern(&lf[420],4,"void");
lf[421]=C_h_intern(&lf[421],13,"scheme-object");
lf[422]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[423]=C_h_intern(&lf[423],46,"\010compilerestimate-foreign-result-location-size");
lf[424]=C_decode_literal(C_heaptop,"\376B\000\0005cannot compute size of location for foreign type `~S\047");
lf[425]=C_decode_literal(C_heaptop,"\376B\000\000\042foreign type `~S\047 refers to itself");
lf[426]=C_h_intern(&lf[426],30,"\010compilerfinish-foreign-result");
lf[427]=C_h_intern(&lf[427],17,"\003syspeek-c-string");
lf[428]=C_h_intern(&lf[428],25,"\003syspeek-nonnull-c-string");
lf[429]=C_h_intern(&lf[429],26,"\003syspeek-and-free-c-string");
lf[430]=C_h_intern(&lf[430],34,"\003syspeek-and-free-nonnull-c-string");
lf[431]=C_h_intern(&lf[431],17,"\003sysintern-symbol");
lf[432]=C_h_intern(&lf[432],22,"\003syspeek-c-string-list");
lf[433]=C_h_intern(&lf[433],31,"\003syspeek-and-free-c-string-list");
lf[434]=C_h_intern(&lf[434],17,"\003sysnull-pointer\077");
lf[435]=C_h_intern(&lf[435],3,"not");
lf[436]=C_h_intern(&lf[436],4,"make");
lf[437]=C_h_intern(&lf[437],3,"and");
lf[438]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\010instance\376\003\000\000\002\376\001\000\000\014instance-ref\376\377\016");
lf[439]=C_h_intern(&lf[439],28,"\010compilerscan-used-variables");
lf[440]=C_h_intern(&lf[440],28,"\010compilerscan-free-variables");
lf[441]=C_h_intern(&lf[441],11,"lset-adjoin");
lf[442]=C_h_intern(&lf[442],23,"\010compilerchop-separator");
lf[443]=C_h_intern(&lf[443],9,"substring");
lf[444]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\012\000\000\134\376\003\000\000\002\376\377\012\000\000/\376\377\016");
lf[445]=C_h_intern(&lf[445],23,"\010compilerchop-extension");
lf[446]=C_h_intern(&lf[446],22,"\010compilerprint-version");
lf[447]=C_h_intern(&lf[447],6,"print*");
lf[448]=C_decode_literal(C_heaptop,"\376B\000\000\077(c)2008-2010 The Chicken Team\012(c)2000-2007 Felix L. Winkelmann\012");
lf[449]=C_h_intern(&lf[449],20,"\010compilerprint-usage");
lf[450]=C_decode_literal(C_heaptop,"\376B\000\030\221Usage: chicken FILENAME OPTION ...\012\012  `chicken\047 is the CHICKEN compiler.\012  "
"\012  FILENAME should be a complete source file name with extension, or \042-\042 for\012  s"
"tandard input. OPTION may be one of the following:\012\012  General options:\012\012    -hel"
"p                        display this text and exit\012    -version                "
"     display compiler version and exit\012    -release                     print re"
"lease number and exit\012    -verbose                     display information on co"
"mpilation progress\012\012  File and pathname options:\012\012    -output-file FILENAME     "
"   specifies output-filename, default is \047out.c\047\012    -include-path PATHNAME     "
"  specifies alternative path for included files\012    -to-stdout                  "
" write compiled file to stdout instead of file\012\012  Language options:\012\012    -featur"
"e SYMBOL              register feature identifier\012\012  Syntax related options:\012\012  "
"  -case-insensitive            don\047t preserve case of read symbols\012    -keyword-"
"style STYLE         allow alternative keyword syntax\012                           "
"       (prefix, suffix or none)\012    -no-parentheses-synonyms     disables list d"
"elimiter synonyms\012    -no-symbol-escape            disables support for escaped "
"symbols\012    -r5rs-syntax                 disables the Chicken extensions to\012    "
"                              R5RS syntax\012    -compile-syntax              macro"
"s are made available at run-time\012    -emit-import-library MODULE  write compile-"
"time module information into\012                                  separate file\012   "
" -emit-all-import-libraries   emit import-libraries for all defined modules\012    "
"-no-compiler-syntax          disable expansion of compiler-macros\012\012  Translation"
" options:\012\012    -explicit-use                do not use units \047library\047 and \047eval"
"\047 by\012                                  default\012    -check-syntax                "
"stop compilation after macro-expansion\012    -analyze-only                stop com"
"pilation after first analysis pass\012\012  Debugging options:\012\012    -no-warnings      "
"           disable warnings\012    -disable-warning CLASS       disable specific cl"
"ass of warnings\012    -debug-level NUMBER          set level of available debuggin"
"g information\012    -no-trace                    disable tracing information\012    -"
"profile                     executable emits profiling information \012    -profile"
"-name FILENAME       name of the generated profile information file\012    -accumul"
"ate-profile          executable emits profiling information in\012                 "
"                 append mode\012    -no-lambda-info              omit additional pr"
"ocedure-information\012    -scrutinize                  perform local flow analysis"
"\012    -types FILENAME              load additional type database\012\012  Optimization "
"options:\012\012    -optimize-level NUMBER       enable certain sets of optimization o"
"ptions\012    -optimize-leaf-routines      enable leaf routine optimization\012    -la"
"mbda-lift                 enable lambda-lifting\012    -no-usual-integrations      "
" standard procedures may be redefined\012    -unsafe                      disable a"
"ll safety checks\012    -local                       assume globals are only modifi"
"ed in current\012                                  file\012    -block                 "
"      enable block-compilation\012    -disable-interrupts          disable interrup"
"ts in compiled code\012    -fixnum-arithmetic           assume all numbers are fixn"
"ums\012    -benchmark-mode              equivalent to \047block -optimize-level 4\012    "
"                              -debug-level 0 -fixnum-arithmetic -lambda-lift\012   "
"                               -inline -disable-interrupts\047\012    -disable-stack-o"
"verflow-checks  disables detection of stack-overflows\012    -inline               "
"       enable inlining\012    -inline-limit                set inlining threshold\012 "
"   -inline-global               enable cross-module inlining\012    -unboxing      "
"              use unboxed temporaries if possible\012    -emit-inline-file FILENAME"
"   generate file with globally inlinable\012                                  proce"
"dures (implies -inline -local)\012    -consult-inline-file FILENAME  explicitly loa"
"d inline file\012    -no-argc-checks              disable argument count checks\012   "
" -no-bound-checks             disable bound variable checks\012    -no-procedure-ch"
"ecks         disable procedure call checks\012    -no-procedure-checks-for-usual-bi"
"ndings\012                                 disable procedure call checks only for u"
"sual\012                                  bindings\012\012  Configuration options:\012\012    -"
"unit NAME                   compile file as a library unit\012    -uses NAME       "
"            declare library unit as used.\012    -heap-size NUMBER            speci"
"fies heap-size of compiled executable\012    -heap-initial-size NUMBER    specifies"
" heap-size at startup time\012    -heap-growth PERCENTAGE      specifies growth-rat"
"e of expanding heap\012    -heap-shrinkage PERCENTAGE   specifies shrink-rate of co"
"ntracting heap\012    -nursery NUMBER  -stack-size NUMBER\012                         "
"        specifies nursery size of compiled executable\012    -extend FILENAME      "
"       load file before compilation commences\012    -prelude EXPRESSION          a"
"dd expression to front of source file\012    -postlude EXPRESSION         add expre"
"ssion to end of source file\012    -prologue FILENAME           include file before"
" main source file\012    -epilogue FILENAME           include file after main sourc"
"e file\012    -dynamic                     compile as dynamically loadable code\012   "
" -require-extension NAME      require and import extension NAME\012    -static-exte"
"nsion NAME       import extension NAME but link statically\012                     "
"             (if available)\012\012  Obscure options:\012\012    -debug MODES               "
"  display debugging output for the given modes\012    -unsafe-libraries            "
"marks the generated file as being linked with\012                                  "
"the unsafe runtime system\012    -raw                         do not generate impli"
"cit init- and exit code                           \012    -emit-external-prototypes"
"-first\012                                 emit prototypes for callbacks before for"
"eign\012                                  declarations\012    -ignore-repository      "
"     do not refer to repository for extensions\012    -setup-mode                  "
"prefer the current directory when locating extensions\012");
lf[451]=C_h_intern(&lf[451],36,"\010compilermake-block-variable-literal");
lf[452]=C_h_intern(&lf[452],22,"block-variable-literal");
lf[453]=C_h_intern(&lf[453],32,"\010compilerblock-variable-literal\077");
lf[454]=C_h_intern(&lf[454],36,"\010compilerblock-variable-literal-name");
lf[455]=C_h_intern(&lf[455],25,"\010compilermake-random-name");
lf[456]=C_h_intern(&lf[456],6,"random");
lf[457]=C_h_intern(&lf[457],15,"current-seconds");
lf[458]=C_h_intern(&lf[458],23,"\010compilerset-real-name!");
lf[459]=C_h_intern(&lf[459],24,"\010compilerreal-name-table");
lf[460]=C_decode_literal(C_heaptop,"\376B\000\000\004 in ");
lf[461]=C_h_intern(&lf[461],19,"\010compilerreal-name2");
lf[462]=C_h_intern(&lf[462],32,"\010compilerdisplay-real-name-table");
lf[463]=C_h_intern(&lf[463],28,"\010compilersource-info->string");
lf[464]=C_h_intern(&lf[464],4,"conc");
lf[465]=C_decode_literal(C_heaptop,"\376B\000\000\002: ");
lf[466]=C_decode_literal(C_heaptop,"\376B\000\000\001 ");
lf[467]=C_h_intern(&lf[467],11,"make-string");
lf[468]=C_h_intern(&lf[468],3,"max");
lf[469]=C_h_intern(&lf[469],26,"\010compilersource-info->line");
lf[470]=C_h_intern(&lf[470],12,"string-null\077");
lf[471]=C_h_intern(&lf[471],19,"\010compilerdump-nodes");
lf[472]=C_h_intern(&lf[472],18,"\003sysuser-read-hook");
lf[473]=C_h_intern(&lf[473],15,"foreign-declare");
lf[474]=C_h_intern(&lf[474],7,"declare");
lf[475]=C_h_intern(&lf[475],34,"\010compilerscan-sharp-greater-string");
lf[476]=C_h_intern(&lf[476],18,"\003sysread-char/port");
lf[477]=C_decode_literal(C_heaptop,"\376B\000\000&unexpected end of `#> ... <#\047 sequence");
lf[478]=C_h_intern(&lf[478],6,"hidden");
lf[479]=C_h_intern(&lf[479],19,"\010compilervisibility");
lf[480]=C_h_intern(&lf[480],24,"\010compilerexport-variable");
lf[481]=C_h_intern(&lf[481],8,"exported");
lf[482]=C_h_intern(&lf[482],26,"\010compilerblock-compilation");
lf[483]=C_h_intern(&lf[483],22,"\010compilermark-variable");
lf[484]=C_h_intern(&lf[484],22,"\010compilervariable-mark");
lf[485]=C_h_intern(&lf[485],19,"\010compilerintrinsic\077");
lf[486]=C_h_intern(&lf[486],9,"foldable\077");
lf[487]=C_h_intern(&lf[487],33,"\010compilerload-identifier-database");
lf[488]=C_h_intern(&lf[488],7,"\004coredb");
lf[489]=C_h_intern(&lf[489],9,"read-file");
lf[490]=C_h_intern(&lf[490],21,"\010compilerverbose-mode");
lf[491]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[492]=C_decode_literal(C_heaptop,"\376B\000\000\034loading identifier database ");
lf[493]=C_h_intern(&lf[493],13,"make-pathname");
lf[494]=C_h_intern(&lf[494],15,"repository-path");
lf[495]=C_h_intern(&lf[495],27,"condition-property-accessor");
lf[496]=C_h_intern(&lf[496],3,"exn");
lf[497]=C_h_intern(&lf[497],7,"message");
lf[498]=C_h_intern(&lf[498],19,"condition-predicate");
C_register_lf2(lf,499,create_ptable());
t2=C_mutate(&lf[0] /* (set! c525 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4004,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k4002 */
static void C_ccall f_4004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4004,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4007,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k4005 in k4002 */
static void C_ccall f_4007(C_word c,C_word t0,C_word t1){
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
C_word ab[57],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4007,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! compiler-cleanup-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4011,tmp=(C_word)a,a+=2,tmp));
t3=C_set_block_item(lf[3] /* debugging-chicken */,0,C_SCHEME_END_OF_LIST);
t4=C_set_block_item(lf[4] /* disabled-warnings */,0,C_SCHEME_END_OF_LIST);
t5=C_mutate((C_word*)lf[5]+1 /* (set! bomb ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4016,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[10]+1 /* (set! debugging ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4043,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[19]+1 /* (set! compiler-warning ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4108,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[24]+1 /* (set! quit ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4137,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[27]+1 /* (set! syntax-error-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4156,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[35]+1 /* (set! syntax-error ...) */,*((C_word*)lf[27]+1));
t11=C_mutate((C_word*)lf[36]+1 /* (set! emit-syntax-trace-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4201,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[37]+1 /* (set! map-llist ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4204,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[38]+1 /* (set! check-signature ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4247,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[41]+1 /* (set! posq ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4315,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[42]+1 /* (set! stringify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4351,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[46]+1 /* (set! symbolify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4378,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[48]+1 /* (set! build-lambda-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4409,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[49]+1 /* (set! string->c-identifier ...) */,C_retrieve(lf[50]));
t19=C_mutate((C_word*)lf[51]+1 /* (set! c-ify-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4453,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate((C_word*)lf[60]+1 /* (set! valid-c-identifier? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4547,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate((C_word*)lf[63]+1 /* (set! words ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4603,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate((C_word*)lf[64]+1 /* (set! words->bytes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4610,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate((C_word*)lf[65]+1 /* (set! check-and-open-input-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4617,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[72]+1 /* (set! close-checked-input-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4664,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[75]+1 /* (set! fold-inner ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4676,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[77]+1 /* (set! follow-without-loop ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4739,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[78]+1 /* (set! sort-symbols ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4770,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[81]+1 /* (set! constant? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4790,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[83]+1 /* (set! collapsable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4836,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[84]+1 /* (set! immediate? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4866,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate((C_word*)lf[86]+1 /* (set! basic-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4912,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate((C_word*)lf[89]+1 /* (set! canonicalize-begin-body ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4972,tmp=(C_word)a,a+=2,tmp));
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5069,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 255  condition-predicate */
((C_proc3)C_retrieve_symbol_proc(lf[498]))(3,*((C_word*)lf[498]+1),t33,lf[496]);}

/* k5067 in k4005 in k4002 */
static void C_ccall f_5069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5072,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 256  condition-property-accessor */
((C_proc4)C_retrieve_symbol_proc(lf[495]))(4,*((C_word*)lf[495]+1),t2,lf[496],lf[497]);}

/* k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5072(C_word c,C_word t0,C_word t1){
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
C_word ab[177],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5072,2,t0,t1);}
t2=C_mutate((C_word*)lf[96]+1 /* (set! string->expr ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5073,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[108]+1 /* (set! decompose-lambda-list ...) */,C_retrieve(lf[109]));
t4=C_mutate((C_word*)lf[110]+1 /* (set! process-lambda-documentation ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5180,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[111]+1 /* (set! llist-length ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5183,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[112]+1 /* (set! expand-profile-lambda ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5186,tmp=(C_word)a,a+=2,tmp));
t7=C_SCHEME_TRUE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_mutate((C_word*)lf[122]+1 /* (set! initialize-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5327,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[134]+1 /* (set! get ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5580,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[136]+1 /* (set! get-all ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5598,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[138]+1 /* (set! put! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5616,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[140]+1 /* (set! collect! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5662,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[141]+1 /* (set! count! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5714,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[142]+1 /* (set! get-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5771,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[143]+1 /* (set! get-line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5780,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[145]+1 /* (set! get-line-2 ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5790,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[146]+1 /* (set! find-lambda-container ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5831,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[148]+1 /* (set! display-line-number-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5855,tmp=(C_word)a,a+=2,tmp));
t20=C_SCHEME_FALSE;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_mutate((C_word*)lf[151]+1 /* (set! display-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5918,a[2]=t21,tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[198]+1 /* (set! make-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6417,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[200]+1 /* (set! node? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6423,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[201]+1 /* (set! node-class-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6429,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[203]+1 /* (set! node-class ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6438,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[204]+1 /* (set! node-parameters-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6447,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[205]+1 /* (set! node-parameters ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6456,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[206]+1 /* (set! node-subexpressions-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6465,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[207]+1 /* (set! node-subexpressions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6474,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate((C_word*)lf[198]+1 /* (set! make-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6483,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate((C_word*)lf[208]+1 /* (set! varnode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6489,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate((C_word*)lf[210]+1 /* (set! qnode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6504,tmp=(C_word)a,a+=2,tmp));
t34=C_mutate((C_word*)lf[211]+1 /* (set! build-node-graph ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6519,tmp=(C_word)a,a+=2,tmp));
t35=C_mutate((C_word*)lf[247]+1 /* (set! build-expression-tree ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7442,tmp=(C_word)a,a+=2,tmp));
t36=C_mutate((C_word*)lf[261]+1 /* (set! fold-boolean ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8123,tmp=(C_word)a,a+=2,tmp));
t37=C_mutate((C_word*)lf[263]+1 /* (set! inline-lambda-bindings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8177,tmp=(C_word)a,a+=2,tmp));
t38=C_mutate((C_word*)lf[268]+1 /* (set! copy-node-tree-and-rename ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8325,tmp=(C_word)a,a+=2,tmp));
t39=C_mutate((C_word*)lf[275]+1 /* (set! tree-copy ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8710,tmp=(C_word)a,a+=2,tmp));
t40=C_mutate((C_word*)lf[276]+1 /* (set! copy-node! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8744,tmp=(C_word)a,a+=2,tmp));
t41=C_mutate((C_word*)lf[277]+1 /* (set! node->sexpr ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8783,tmp=(C_word)a,a+=2,tmp));
t42=C_mutate((C_word*)lf[278]+1 /* (set! sexpr->node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8869,tmp=(C_word)a,a+=2,tmp));
t43=C_mutate((C_word*)lf[279]+1 /* (set! emit-global-inline-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8937,tmp=(C_word)a,a+=2,tmp));
t44=C_mutate((C_word*)lf[297]+1 /* (set! load-inline-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9129,tmp=(C_word)a,a+=2,tmp));
t45=C_mutate((C_word*)lf[299]+1 /* (set! match-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9198,tmp=(C_word)a,a+=2,tmp));
t46=C_mutate((C_word*)lf[302]+1 /* (set! expression-has-side-effects? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9423,tmp=(C_word)a,a+=2,tmp));
t47=C_mutate((C_word*)lf[306]+1 /* (set! simple-lambda-node? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9524,tmp=(C_word)a,a+=2,tmp));
t48=C_mutate((C_word*)lf[307]+1 /* (set! dump-undefined-globals ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9646,tmp=(C_word)a,a+=2,tmp));
t49=C_mutate((C_word*)lf[309]+1 /* (set! dump-defined-globals ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9687,tmp=(C_word)a,a+=2,tmp));
t50=C_mutate((C_word*)lf[310]+1 /* (set! dump-global-refs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9724,tmp=(C_word)a,a+=2,tmp));
t51=C_mutate((C_word*)lf[311]+1 /* (set! toplevel-definition-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9773,tmp=(C_word)a,a+=2,tmp));
t52=C_mutate((C_word*)lf[314]+1 /* (set! compute-database-statistics ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9794,tmp=(C_word)a,a+=2,tmp));
t53=C_mutate((C_word*)lf[317]+1 /* (set! print-program-statistics ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9902,tmp=(C_word)a,a+=2,tmp));
t54=C_mutate((C_word*)lf[327]+1 /* (set! pprint-expressions-to-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9983,tmp=(C_word)a,a+=2,tmp));
t55=C_mutate((C_word*)lf[333]+1 /* (set! foreign-type-check ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_10041,tmp=(C_word)a,a+=2,tmp));
t56=C_mutate((C_word*)lf[413]+1 /* (set! foreign-type-convert-result ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11099,tmp=(C_word)a,a+=2,tmp));
t57=C_mutate((C_word*)lf[414]+1 /* (set! foreign-type-convert-argument ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11130,tmp=(C_word)a,a+=2,tmp));
t58=C_mutate((C_word*)lf[415]+1 /* (set! final-foreign-type ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11161,tmp=(C_word)a,a+=2,tmp));
t59=C_mutate((C_word*)lf[417]+1 /* (set! estimate-foreign-result-size ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11206,tmp=(C_word)a,a+=2,tmp));
t60=C_mutate((C_word*)lf[423]+1 /* (set! estimate-foreign-result-location-size ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11536,tmp=(C_word)a,a+=2,tmp));
t61=C_mutate((C_word*)lf[426]+1 /* (set! finish-foreign-result ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11857,tmp=(C_word)a,a+=2,tmp));
t62=C_mutate((C_word*)lf[439]+1 /* (set! scan-used-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12226,tmp=(C_word)a,a+=2,tmp));
t63=C_mutate((C_word*)lf[440]+1 /* (set! scan-free-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12365,tmp=(C_word)a,a+=2,tmp));
t64=C_mutate((C_word*)lf[442]+1 /* (set! chop-separator ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12574,tmp=(C_word)a,a+=2,tmp));
t65=C_mutate((C_word*)lf[445]+1 /* (set! chop-extension ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12603,tmp=(C_word)a,a+=2,tmp));
t66=C_mutate((C_word*)lf[446]+1 /* (set! print-version ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12645,tmp=(C_word)a,a+=2,tmp));
t67=C_mutate((C_word*)lf[449]+1 /* (set! print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12683,tmp=(C_word)a,a+=2,tmp));
t68=C_mutate((C_word*)lf[451]+1 /* (set! make-block-variable-literal ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12695,tmp=(C_word)a,a+=2,tmp));
t69=C_mutate((C_word*)lf[453]+1 /* (set! block-variable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12701,tmp=(C_word)a,a+=2,tmp));
t70=C_mutate((C_word*)lf[454]+1 /* (set! block-variable-literal-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12707,tmp=(C_word)a,a+=2,tmp));
t71=C_mutate((C_word*)lf[455]+1 /* (set! make-random-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12716,tmp=(C_word)a,a+=2,tmp));
t72=C_mutate((C_word*)lf[458]+1 /* (set! set-real-name! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12775,tmp=(C_word)a,a+=2,tmp));
t73=C_mutate((C_word*)lf[40]+1 /* (set! real-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12781,tmp=(C_word)a,a+=2,tmp));
t74=C_mutate((C_word*)lf[461]+1 /* (set! real-name2 ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12872,tmp=(C_word)a,a+=2,tmp));
t75=C_mutate((C_word*)lf[462]+1 /* (set! display-real-name-table ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12884,tmp=(C_word)a,a+=2,tmp));
t76=C_mutate((C_word*)lf[463]+1 /* (set! source-info->string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12905,tmp=(C_word)a,a+=2,tmp));
t77=C_mutate((C_word*)lf[469]+1 /* (set! source-info->line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12951,tmp=(C_word)a,a+=2,tmp));
t78=C_mutate((C_word*)lf[470]+1 /* (set! string-null? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12969,tmp=(C_word)a,a+=2,tmp));
t79=C_mutate((C_word*)lf[471]+1 /* (set! dump-nodes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12972,tmp=(C_word)a,a+=2,tmp));
t80=C_retrieve(lf[472]);
t81=C_mutate((C_word*)lf[472]+1 /* (set! user-read-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13095,a[2]=t80,tmp=(C_word)a,a+=3,tmp));
t82=C_mutate((C_word*)lf[475]+1 /* (set! scan-sharp-greater-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13128,tmp=(C_word)a,a+=2,tmp));
t83=C_mutate((C_word*)lf[85]+1 /* (set! big-fixnum? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13197,tmp=(C_word)a,a+=2,tmp));
t84=C_mutate((C_word*)lf[312]+1 /* (set! hide-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13221,tmp=(C_word)a,a+=2,tmp));
t85=C_mutate((C_word*)lf[480]+1 /* (set! export-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13254,tmp=(C_word)a,a+=2,tmp));
t86=C_mutate((C_word*)lf[291]+1 /* (set! variable-visible? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13287,tmp=(C_word)a,a+=2,tmp));
t87=C_mutate((C_word*)lf[483]+1 /* (set! mark-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13308,tmp=(C_word)a,a+=2,tmp));
t88=C_mutate((C_word*)lf[484]+1 /* (set! variable-mark ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13336,tmp=(C_word)a,a+=2,tmp));
t89=C_mutate((C_word*)lf[485]+1 /* (set! intrinsic? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13342,tmp=(C_word)a,a+=2,tmp));
t90=C_mutate((C_word*)lf[486]+1 /* (set! foldable? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13353,tmp=(C_word)a,a+=2,tmp));
t91=C_mutate((C_word*)lf[487]+1 /* (set! load-identifier-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13364,tmp=(C_word)a,a+=2,tmp));
t92=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t92+1)))(2,t92,C_SCHEME_UNDEFINED);}

/* ##compiler#load-identifier-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13364(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13364,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13368,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1485 repository-path */
((C_proc2)C_retrieve_symbol_proc(lf[494]))(2,*((C_word*)lf[494]+1),t3);}

/* k13366 in ##compiler#load-identifier-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13368,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13374,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13458,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1486 make-pathname */
((C_proc4)C_retrieve_symbol_proc(lf[493]))(4,*((C_word*)lf[493]+1),t3,t1,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k13456 in k13366 in ##compiler#load-identifier-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1486 file-exists? */
((C_proc3)C_retrieve_symbol_proc(lf[71]))(3,*((C_word*)lf[71]+1),((C_word*)t0)[2],t1);}

/* k13372 in k13366 in ##compiler#load-identifier-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13374,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13380,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[490]))){
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13445,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t4,lf[492],t3);}
else{
t3=t2;
f_13380(2,t3,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k13443 in k13372 in k13366 in ##compiler#load-identifier-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13445,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13448,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k13446 in k13443 in k13372 in k13366 in ##compiler#load-identifier-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,lf[491],((C_word*)t0)[2]);}

/* k13449 in k13446 in k13443 in k13372 in k13366 in ##compiler#load-identifier-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k13378 in k13372 in k13366 in ##compiler#load-identifier-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13380,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13387,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1494 read-file */
((C_proc3)C_retrieve_symbol_proc(lf[489]))(3,*((C_word*)lf[489]+1),t2,((C_word*)t0)[2]);}

/* k13385 in k13378 in k13372 in k13366 in ##compiler#load-identifier-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13387,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13389,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_13389(t5,((C_word*)t0)[2],t1);}

/* loop3870 in k13385 in k13378 in k13372 in k13366 in ##compiler#load-identifier-database in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_13389(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13389,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13431,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13409,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13413,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_i_car(t4);
/* support.scm: 1493 ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[238]))(4,*((C_word*)lf[238]+1),t7,t8,lf[488]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k13411 in loop3870 in k13385 in k13378 in k13372 in k13366 in ##compiler#load-identifier-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13413,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
t4=(C_word)C_a_i_list(&a,1,t3);
/* support.scm: 1493 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[54]+1)))(4,*((C_word*)lf[54]+1),((C_word*)t0)[2],t2,t4);}

/* k13407 in loop3870 in k13385 in k13378 in k13372 in k13366 in ##compiler#load-identifier-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1491 ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[488],t1);}

/* k13429 in loop3870 in k13385 in k13378 in k13372 in k13366 in ##compiler#load-identifier-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_13389(t3,((C_word*)t0)[2],t2);}

/* foldable? in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13353(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13353,3,t0,t1,t2);}
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[238]))(4,*((C_word*)lf[238]+1),t1,t2,lf[129]);}

/* ##compiler#intrinsic? in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13342(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13342,3,t0,t1,t2);}
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[238]))(4,*((C_word*)lf[238]+1),t1,t2,lf[125]);}

/* ##compiler#variable-mark in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13336(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13336,4,t0,t1,t2,t3);}
/* support.scm: 1476 ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[238]))(4,*((C_word*)lf[238]+1),t1,t2,t3);}

/* ##compiler#mark-variable in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13308(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_13308r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_13308r(t0,t1,t2,t3,t4);}}

static void C_ccall f_13308r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13312,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* support.scm: 1473 ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t1,t2,t3,C_SCHEME_TRUE);}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=(C_word)C_i_car(t4);
/* support.scm: 1473 ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t1,t2,t3,t7);}
else{
/* ##sys#error */
t7=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k13310 in ##compiler#mark-variable in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1473 ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##compiler#variable-visible? in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13287(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13287,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13291,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1466 ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[238]))(4,*((C_word*)lf[238]+1),t3,t2,lf[479]);}

/* k13289 in ##compiler#variable-visible? in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_eqp(t1,lf[478]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(C_word)C_eqp(t1,lf[481]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?C_SCHEME_TRUE:(C_word)C_i_not(C_retrieve(lf[482]))));}}

/* ##compiler#export-variable in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13254(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13254,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,1,lf[481]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13260,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t1,t2,lf[479],C_SCHEME_TRUE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=(C_word)C_i_car(t3);
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t1,t2,lf[479],t6);}
else{
/* ##sys#error */
t6=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k13258 in ##compiler#export-variable in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[479],t1);}

/* ##compiler#hide-variable in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13221(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13221,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,1,lf[478]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13227,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t1,t2,lf[479],C_SCHEME_TRUE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=(C_word)C_i_car(t3);
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t1,t2,lf[479],t6);}
else{
/* ##sys#error */
t6=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k13225 in ##compiler#hide-variable in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[479],t1);}

/* ##compiler#big-fixnum? in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13197(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13197,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnump(t2))){
if(C_truep((C_word)C_fudge(C_fix(3)))){
t3=(C_word)C_fixnum_greaterp(t2,C_fix(1073741823));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:(C_word)C_fixnum_lessp(t2,C_fix(-1073741824))));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* ##compiler#scan-sharp-greater-string in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13128(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13128,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13132,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1428 open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[45]))(2,*((C_word*)lf[45]+1),t3);}

/* k13130 in ##compiler#scan-sharp-greater-string in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13132,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13137,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_13137(t5,((C_word*)t0)[2]);}

/* loop in k13130 in ##compiler#scan-sharp-greater-string in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_13137(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13137,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13141,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* read-char/port */
t3=C_retrieve(lf[476]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k13139 in loop in k13130 in ##compiler#scan-sharp-greater-string in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13141,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
/* support.scm: 1431 quit */
((C_proc3)C_retrieve_proc(*((C_word*)lf[24]+1)))(3,*((C_word*)lf[24]+1),((C_word*)t0)[5],lf[477]);}
else{
switch(t1){
case C_make_character(10):
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13159,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1433 newline */
((C_proc3)C_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[3]);
case C_make_character(60):
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13171,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* read-char/port */
t3=C_retrieve(lf[476]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);
default:
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13192,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[3]);}}}

/* k13190 in k13139 in loop in k13130 in ##compiler#scan-sharp-greater-string in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1445 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_13137(t2,((C_word*)t0)[2]);}

/* k13169 in k13139 in loop in k13130 in ##compiler#scan-sharp-greater-string in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13171,2,t0,t1);}
t2=(C_word)C_eqp(C_make_character(35),t1);
if(C_truep(t2)){
/* support.scm: 1438 get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[44]))(3,*((C_word*)lf[44]+1),((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13183,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t4=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(60),((C_word*)t0)[3]);}}

/* k13181 in k13169 in k13139 in loop in k13130 in ##compiler#scan-sharp-greater-string in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13186,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k13184 in k13181 in k13169 in k13139 in loop in k13130 in ##compiler#scan-sharp-greater-string in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1442 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_13137(t2,((C_word*)t0)[2]);}

/* k13157 in k13139 in loop in k13130 in ##compiler#scan-sharp-greater-string in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1434 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_13137(t2,((C_word*)t0)[2]);}

/* ##sys#user-read-hook in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13095(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13095,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(C_make_character(62),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13105,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* read-char/port */
t6=C_retrieve(lf[476]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
/* support.scm: 1425 old-hook */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k13103 in ##sys#user-read-hook in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13105,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13108,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1423 scan-sharp-greater-string */
((C_proc3)C_retrieve_symbol_proc(lf[475]))(3,*((C_word*)lf[475]+1),t2,((C_word*)t0)[2]);}

/* k13106 in k13103 in ##sys#user-read-hook in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13108,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[473],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,lf[474],t4));}

/* ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12972(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12972,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12976,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12981,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_12981(t7,t3,C_fix(0),t2);}

/* loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12981(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_12981,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=(C_word)C_slot(t4,C_fix(1));
t6=t3;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t3;
t9=(C_word)C_slot(t8,C_fix(3));
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13009,a[2]=t5,a[3]=t7,a[4]=t9,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* support.scm: 1401 make-string */
((C_proc4)C_retrieve_proc(*((C_word*)lf[467]+1)))(4,*((C_word*)lf[467]+1),t10,t2,C_make_character(32));}

/* k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13009,2,t0,t1);}
t2=(C_word)C_fixnum_plus(((C_word*)t0)[8],C_fix(2));
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_13015,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* write-char/port */
t5=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(10),t3);}

/* k13013 in k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13015,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_13018,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k13016 in k13013 in k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13018,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_13021,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(60),((C_word*)t0)[3]);}

/* k13019 in k13016 in k13013 in k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13021,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13024,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k13022 in k13019 in k13016 in k13013 in k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13024,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_13027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* write-char/port */
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[2]);}

/* k13025 in k13022 in k13019 in k13016 in k13013 in k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13030,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13033,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13089,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t4=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a13088 in k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13089(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13089,3,t0,t1,t2);}
/* g37043705 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_12981(t3,t1,((C_word*)t0)[2],t2);}

/* k13031 in k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13033,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13039,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(4)))){
t4=*((C_word*)lf[11]+1);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13048,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t6=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_make_character(91),t4);}
else{
/* write-char/port */
t4=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],C_make_character(62),*((C_word*)lf[11]+1));}}

/* k13046 in k13031 in k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13048,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13051,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(4));
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,t3,((C_word*)t0)[2]);}

/* k13049 in k13046 in k13031 in k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13051,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13054,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13059,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_13059(t6,t2,C_fix(5));}

/* doloop3713 in k13049 in k13046 in k13031 in k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_13059(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13059,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_13069,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* write-char/port */
t5=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(32),t3);}}

/* k13067 in doloop3713 in k13049 in k13046 in k13031 in k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13072,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],((C_word*)t0)[6]);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,t3,((C_word*)t0)[2]);}

/* k13070 in k13067 in doloop3713 in k13049 in k13046 in k13031 in k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_13059(t3,((C_word*)t0)[2],t2);}

/* k13052 in k13049 in k13046 in k13031 in k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(93),*((C_word*)lf[11]+1));}

/* k13037 in k13031 in k13028 in k13025 in k13022 in k13019 in k13016 in k13013 in k13007 in loop in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_13039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(62),*((C_word*)lf[11]+1));}

/* k12974 in ##compiler#dump-nodes in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1413 newline */
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[2]);}

/* string-null? in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12969(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12969,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_string_null_p(C_retrieve(lf[325])));}

/* ##compiler#source-info->line in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12951(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12951,3,t0,t1,t2);}
if(C_truep((C_word)C_i_listp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_cadr(t2));}
else{
if(C_truep(t2)){
/* support.scm: 1385 ->string */
((C_proc3)C_retrieve_symbol_proc(lf[62]))(3,*((C_word*)lf[62]+1),t1,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}}

/* ##compiler#source-info->string in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12905(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12905,3,t0,t1,t2);}
if(C_truep((C_word)C_i_listp(t2))){
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cadr(t2);
t5=(C_word)C_i_caddr(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12924,a[2]=t5,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1378 ->string */
((C_proc3)C_retrieve_symbol_proc(lf[62]))(3,*((C_word*)lf[62]+1),t6,t4);}
else{
if(C_truep(t2)){
/* support.scm: 1380 ->string */
((C_proc3)C_retrieve_symbol_proc(lf[62]))(3,*((C_word*)lf[62]+1),t1,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}}

/* k12922 in ##compiler#source-info->string in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12924,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12931,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12935,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_string_length(t1);
t5=(C_word)C_fixnum_difference(C_fix(4),t4);
/* support.scm: 1379 max */
((C_proc4)C_retrieve_proc(*((C_word*)lf[468]+1)))(4,*((C_word*)lf[468]+1),t3,C_fix(0),t5);}

/* k12933 in k12922 in ##compiler#source-info->string in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1379 make-string */
((C_proc4)C_retrieve_proc(*((C_word*)lf[467]+1)))(4,*((C_word*)lf[467]+1),((C_word*)t0)[2],t1,C_make_character(32));}

/* k12929 in k12922 in ##compiler#source-info->string in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1379 conc */
((C_proc8)C_retrieve_symbol_proc(lf[464]))(8,*((C_word*)lf[464]+1),((C_word*)t0)[5],((C_word*)t0)[4],lf[465],((C_word*)t0)[3],t1,lf[466],((C_word*)t0)[2]);}

/* ##compiler#display-real-name-table in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12884,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12890,tmp=(C_word)a,a+=2,tmp);
/* support.scm: 1368 ##sys#hash-table-for-each */
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),t1,t2,C_retrieve(lf[459]));}

/* a12889 in ##compiler#display-real-name-table in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12890(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12890,4,t0,t1,t2,t3);}
t4=*((C_word*)lf[11]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12894,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t5,t2,t4);}

/* k12892 in a12889 in ##compiler#display-real-name-table in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12894,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12897,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(9),((C_word*)t0)[3]);}

/* k12895 in k12892 in a12889 in ##compiler#display-real-name-table in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12900,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k12898 in k12895 in k12892 in a12889 in ##compiler#display-real-name-table in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* ##compiler#real-name2 in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12872(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12872,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12876,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1364 ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t4,C_retrieve(lf[459]),t2);}

/* k12874 in ##compiler#real-name2 in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm: 1365 real-name */
((C_proc4)C_retrieve_symbol_proc(lf[40]))(4,*((C_word*)lf[40]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#real-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12781(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3rv,(void*)f_12781r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_12781r(t0,t1,t2,t3);}}

static void C_ccall f_12781r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12784,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12800,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm: 1348 resolve */
f_12784(t5,t2);}

/* k12798 in ##compiler#real-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12800,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
if(C_truep((C_word)C_notvemptyp(((C_word*)t0)[5]))){
t3=(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm: 1352 ##sys#symbol->qualified-string */
((C_proc3)C_retrieve_symbol_proc(lf[237]))(3,*((C_word*)lf[237]+1),t4,t1);}
else{
/* support.scm: 1361 ##sys#symbol->qualified-string */
((C_proc3)C_retrieve_symbol_proc(lf[237]))(3,*((C_word*)lf[237]+1),((C_word*)t0)[3],t1);}}
else{
/* support.scm: 1349 ##sys#symbol->qualified-string */
((C_proc3)C_retrieve_symbol_proc(lf[237]))(3,*((C_word*)lf[237]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k12823 in k12798 in ##compiler#real-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12825,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12829,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 1353 get */
((C_proc5)C_retrieve_symbol_proc(lf[134]))(5,*((C_word*)lf[134]+1),t2,((C_word*)t0)[5],((C_word*)t0)[2],lf[147]);}

/* k12827 in k12823 in k12798 in ##compiler#real-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12829,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12831,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_12831(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k12827 in k12823 in k12798 in ##compiler#real-name in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12831(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12831,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12838,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 1355 resolve */
f_12784(t4,t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k12836 in loop in k12827 in k12823 in k12798 in ##compiler#real-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12838,2,t0,t1);}
t2=(C_word)C_eqp(t1,((C_word*)t0)[6]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12851,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[45]))(2,*((C_word*)lf[45]+1),t3);}}

/* k12849 in k12836 in loop in k12827 in k12823 in k12798 in ##compiler#real-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12851,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12854,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2],t1);}

/* k12852 in k12849 in k12836 in loop in k12827 in k12823 in k12798 in ##compiler#real-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12854,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12857,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,lf[460],((C_word*)t0)[3]);}

/* k12855 in k12852 in k12849 in k12836 in loop in k12827 in k12823 in k12798 in ##compiler#real-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12857,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12860,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k12858 in k12855 in k12852 in k12849 in k12836 in loop in k12827 in k12823 in k12798 in ##compiler#real-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12863,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[44]))(3,*((C_word*)lf[44]+1),t2,((C_word*)t0)[2]);}

/* k12861 in k12858 in k12855 in k12852 in k12849 in k12836 in loop in k12827 in k12823 in k12798 in ##compiler#real-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12867,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1359 get */
((C_proc5)C_retrieve_symbol_proc(lf[134]))(5,*((C_word*)lf[134]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[147]);}

/* k12865 in k12861 in k12858 in k12855 in k12852 in k12849 in k12836 in loop in k12827 in k12823 in k12798 in ##compiler#real-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1358 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_12831(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* resolve in ##compiler#real-name in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12784(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12784,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12788,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1343 ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t3,C_retrieve(lf[459]),t2);}

/* k12786 in resolve in ##compiler#real-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12788,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12794,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1345 ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t2,C_retrieve(lf[459]),t1);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k12792 in k12786 in resolve in ##compiler#real-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[2]));}

/* ##compiler#set-real-name! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12775(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12775,4,t0,t1,t2,t3);}
/* support.scm: 1339 ##sys#hash-table-set! */
((C_proc5)C_retrieve_symbol_proc(lf[139]))(5,*((C_word*)lf[139]+1),t1,C_retrieve(lf[459]),t2,t3);}

/* ##compiler#make-random-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12716(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_12716r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_12716r(t0,t1,t2);}}

static void C_ccall f_12716r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12724,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[45]))(2,*((C_word*)lf[45]+1),t3);}

/* k12722 in ##compiler#make-random-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12724,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12727,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12751,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* support.scm: 1326 gensym */
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t4);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=(C_word)C_i_car(t3);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,t6,t1);}
else{
/* ##sys#error */
t6=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k12749 in k12722 in ##compiler#make-random-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k12725 in k12722 in ##compiler#make-random-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12727,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12730,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(45),((C_word*)t0)[2]);}

/* k12728 in k12725 in k12722 in ##compiler#make-random-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12730,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12733,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12747,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1327 current-seconds */
((C_proc2)C_retrieve_symbol_proc(lf[457]))(2,*((C_word*)lf[457]+1),t3);}

/* k12745 in k12728 in k12725 in k12722 in ##compiler#make-random-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k12731 in k12728 in k12725 in k12722 in ##compiler#make-random-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12733,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12736,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12743,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1328 random */
((C_proc3)C_retrieve_symbol_proc(lf[456]))(3,*((C_word*)lf[456]+1),t3,C_fix(1000));}

/* k12741 in k12731 in k12728 in k12725 in k12722 in ##compiler#make-random-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k12734 in k12731 in k12728 in k12725 in k12722 in ##compiler#make-random-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12736,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12739,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[44]))(3,*((C_word*)lf[44]+1),t2,((C_word*)t0)[2]);}

/* k12737 in k12734 in k12731 in k12728 in k12725 in k12722 in ##compiler#make-random-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1324 string->symbol */
((C_proc3)C_retrieve_proc(*((C_word*)lf[47]+1)))(3,*((C_word*)lf[47]+1),((C_word*)t0)[2],t1);}

/* ##compiler#block-variable-literal-name in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12707(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12707,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[452]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(1)));}

/* ##compiler#block-variable-literal? in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12701(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12701,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[452]));}

/* ##compiler#make-block-variable-literal in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12695(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12695,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,2,lf[452],t2));}

/* ##compiler#print-usage in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12683,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12687,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1184 print-version */
((C_proc2)C_retrieve_symbol_proc(lf[446]))(2,*((C_word*)lf[446]+1),t2);}

/* k12685 in ##compiler#print-usage in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12687,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12690,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1185 newline */
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t2);}

/* k12688 in k12685 in ##compiler#print-usage in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1186 display */
((C_proc3)C_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),((C_word*)t0)[2],lf[450]);}

/* ##compiler#print-version in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12645(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_12645r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_12645r(t0,t1,t2);}}

static void C_ccall f_12645r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12649,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_12649(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_12649(2,t5,(C_word)C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k12647 in ##compiler#print-version in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12649,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12652,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
/* support.scm: 1180 print* */
((C_proc3)C_retrieve_proc(*((C_word*)lf[447]+1)))(3,*((C_word*)lf[447]+1),t2,lf[448]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f14588,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1181 chicken-version */
((C_proc3)C_retrieve_symbol_proc(lf[295]))(3,*((C_word*)lf[295]+1),t3,C_SCHEME_TRUE);}}

/* f14588 in k12647 in ##compiler#print-version in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f14588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1181 print */
((C_proc3)C_retrieve_proc(*((C_word*)lf[280]+1)))(3,*((C_word*)lf[280]+1),((C_word*)t0)[2],t1);}

/* k12650 in k12647 in ##compiler#print-version in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12652,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12659,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1181 chicken-version */
((C_proc3)C_retrieve_symbol_proc(lf[295]))(3,*((C_word*)lf[295]+1),t2,C_SCHEME_TRUE);}

/* k12657 in k12650 in k12647 in ##compiler#print-version in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1181 print */
((C_proc3)C_retrieve_proc(*((C_word*)lf[280]+1)))(3,*((C_word*)lf[280]+1),((C_word*)t0)[2],t1);}

/* ##compiler#chop-extension in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12603(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12603,3,t0,t1,t2);}
t3=(C_word)C_i_string_length(t2);
t4=(C_word)C_fixnum_decrease(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12612,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_12612(t8,t1,t4);}

/* loop in ##compiler#chop-extension in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12612(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12612,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[3];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
t5=(C_word)C_eqp(C_make_character(46),t4);
if(C_truep(t5)){
/* support.scm: 1173 substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[443]+1)))(5,*((C_word*)lf[443]+1),t1,((C_word*)t0)[3],C_fix(0),t2);}
else{
t6=(C_word)C_fixnum_decrease(t2);
/* support.scm: 1174 loop */
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}}

/* ##compiler#chop-separator in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12574(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12574,3,t0,t1,t2);}
t3=(C_word)C_i_string_length(t2);
t4=(C_word)C_fixnum_decrease(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12584,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t4,C_fix(0)))){
t6=(C_word)C_i_string_ref(t2,t4);
t7=t5;
f_12584(t7,(C_word)C_i_memq(t6,lf[444]));}
else{
t6=t5;
f_12584(t6,C_SCHEME_FALSE);}}

/* k12582 in ##compiler#chop-separator in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12584(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* support.scm: 1166 substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[443]+1)))(5,*((C_word*)lf[443]+1),((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12365(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[22],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12365,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12368,a[2]=t10,a[3]=t8,a[4]=t6,a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t12=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12534,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12569,a[2]=t6,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1156 walk */
t14=((C_word*)t8)[1];
f_12368(t14,t13,t2,C_SCHEME_END_OF_LIST);}

/* k12567 in ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1157 values */
C_values(4,0,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* walkeach in ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12534(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12534,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12540,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_12540(t7,t1,t2);}

/* loop3517 in walkeach in ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12540(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12540,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12548,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12555,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g35243525 */
t6=t3;
f_12548(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12553 in loop3517 in walkeach in ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12540(t3,((C_word*)t0)[2],t2);}

/* g3524 in loop3517 in walkeach in ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12548(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12548,NULL,3,t0,t1,t2);}
/* support.scm: 1154 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_12368(t3,t1,t2,((C_word*)t0)[2]);}

/* walk in ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12368(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12368,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(3));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(t9,lf[82]);
t11=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=t7,a[9]=t9,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
if(C_truep(t10)){
t12=t11;
f_12402(t12,t10);}
else{
t12=(C_word)C_eqp(t9,lf[215]);
if(C_truep(t12)){
t13=t11;
f_12402(t13,t12);}
else{
t13=(C_word)C_eqp(t9,lf[223]);
if(C_truep(t13)){
t14=t11;
f_12402(t14,t13);}
else{
t14=(C_word)C_eqp(t9,lf[226]);
t15=t11;
f_12402(t15,(C_truep(t14)?t14:(C_word)C_eqp(t9,lf[240])));}}}}

/* k12400 in walk in ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12402(C_word t0,C_word t1){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12402,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[9],lf[209]);
if(C_truep(t2)){
t3=(C_word)C_i_car(((C_word*)t0)[8]);
if(C_truep((C_word)C_i_memq(t3,((C_word*)t0)[7]))){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12421,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 1136 lset-adjoin */
((C_proc5)C_retrieve_symbol_proc(lf[441]))(5,*((C_word*)lf[441]+1),t4,*((C_word*)lf[270]+1),((C_word*)((C_word*)t0)[6])[1],t3);}}
else{
t3=(C_word)C_eqp(((C_word*)t0)[9],lf[227]);
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[8]);
if(C_truep((C_word)C_i_memq(t4,((C_word*)t0)[7]))){
t5=(C_word)C_i_car(((C_word*)t0)[4]);
/* support.scm: 1142 walk */
t6=((C_word*)((C_word*)t0)[3])[1];
f_12368(t6,((C_word*)t0)[10],t5,((C_word*)t0)[7]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12457,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm: 1141 lset-adjoin */
((C_proc5)C_retrieve_symbol_proc(lf[441]))(5,*((C_word*)lf[441]+1),t5,*((C_word*)lf[270]+1),((C_word*)((C_word*)t0)[6])[1],t4);}}
else{
t4=(C_word)C_eqp(((C_word*)t0)[9],lf[92]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12466,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_car(((C_word*)t0)[4]);
/* support.scm: 1144 walk */
t7=((C_word*)((C_word*)t0)[3])[1];
f_12368(t7,t5,t6,((C_word*)t0)[7]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[9],lf[222]);
if(C_truep(t5)){
t6=(C_word)C_i_caddr(((C_word*)t0)[8]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12496,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1147 decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[108]))(4,*((C_word*)lf[108]+1),((C_word*)t0)[10],t6,t7);}
else{
/* support.scm: 1151 walkeach */
t6=((C_word*)((C_word*)t0)[2])[1];
f_12534(t6,((C_word*)t0)[10],((C_word*)t0)[4],((C_word*)t0)[7]);}}}}}}

/* a12495 in k12400 in walk in ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12496(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_12496,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12508,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1150 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[54]+1)))(4,*((C_word*)lf[54]+1),t6,t2,((C_word*)t0)[2]);}

/* k12506 in a12495 in k12400 in walk in ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1150 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_12368(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k12464 in k12400 in walk in ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12466,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12477,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1145 append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[54]+1)))(4,*((C_word*)lf[54]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k12475 in k12464 in k12400 in walk in ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 1145 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_12368(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k12455 in k12400 in walk in ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
/* support.scm: 1142 walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_12368(t4,((C_word*)t0)[3],t3,((C_word*)t0)[2]);}

/* k12419 in k12400 in walk in ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12421,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1137 variable-visible? */
((C_proc3)C_retrieve_symbol_proc(lf[291]))(3,*((C_word*)lf[291]+1),t3,((C_word*)t0)[2]);}

/* k12425 in k12419 in k12400 in walk in ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12427,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12431,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1138 lset-adjoin */
((C_proc5)C_retrieve_symbol_proc(lf[441]))(5,*((C_word*)lf[441]+1),t2,*((C_word*)lf[270]+1),((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}}

/* k12429 in k12425 in k12419 in k12400 in walk in ##compiler#scan-free-variables in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##compiler#scan-used-variables in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12226(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12226,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12230,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12232,a[2]=t3,a[3]=t5,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_12232(t10,t6,t2);}

/* walk in ##compiler#scan-used-variables in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12232(C_word t0,C_word t1,C_word t2){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12232,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(3));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(1));
t7=(C_word)C_eqp(t6,lf[209]);
t8=(C_truep(t7)?t7:(C_word)C_eqp(t6,lf[227]));
if(C_truep(t8)){
t9=t2;
t10=(C_word)C_slot(t9,C_fix(2));
t11=(C_word)C_i_car(t10);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12264,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12293,a[2]=t12,a[3]=((C_word*)t0)[3],a[4]=t11,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_memq(t11,((C_word*)t0)[2]))){
t14=(C_word)C_i_memq(t11,((C_word*)((C_word*)t0)[3])[1]);
t15=t13;
f_12293(t15,(C_word)C_i_not(t14));}
else{
t14=t13;
f_12293(t14,C_SCHEME_FALSE);}}
else{
t9=(C_word)C_eqp(t6,lf[82]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12325,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t9)){
t11=t10;
f_12325(t11,t9);}
else{
t11=(C_word)C_eqp(t6,lf[215]);
t12=t10;
f_12325(t12,(C_truep(t11)?t11:(C_word)C_eqp(t6,lf[223])));}}}

/* k12323 in walk in ##compiler#scan-used-variables in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12325(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12325,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12330,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_12330(t5,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* loop3442 in k12323 in walk in ##compiler#scan-used-variables in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12330(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12330,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12340,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g34493450 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_12232(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12338 in loop3442 in k12323 in walk in ##compiler#scan-used-variables in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12330(t3,((C_word*)t0)[2],t2);}

/* k12291 in walk in ##compiler#scan-used-variables in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12293(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12293,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_12264(t4,t3);}
else{
t2=((C_word*)t0)[2];
f_12264(t2,C_SCHEME_UNDEFINED);}}

/* k12262 in walk in ##compiler#scan-used-variables in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12264(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12264,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12269,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_12269(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop3418 in k12262 in walk in ##compiler#scan-used-variables in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12269(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12269,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12279,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g34253426 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_12232(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12277 in loop3418 in k12262 in walk in ##compiler#scan-used-variables in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12269(t3,((C_word*)t0)[2],t2);}

/* k12228 in ##compiler#scan-used-variables in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* ##compiler#finish-foreign-result in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[21],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11857,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_eqp(t4,lf[356]);
t6=(C_truep(t5)?t5:(C_word)C_eqp(t4,lf[375]));
if(C_truep(t6)){
t7=(C_word)C_a_i_cons(&a,2,C_fix(0),C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,lf[82],t7);
t9=(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,t3,t9);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_cons(&a,2,lf[427],t10));}
else{
t7=(C_word)C_eqp(t4,lf[359]);
if(C_truep(t7)){
t8=(C_word)C_a_i_cons(&a,2,C_fix(0),C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,lf[82],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,t3,t10);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)C_a_i_cons(&a,2,lf[428],t11));}
else{
t8=(C_word)C_eqp(t4,lf[374]);
t9=(C_truep(t8)?t8:(C_word)C_eqp(t4,lf[376]));
if(C_truep(t9)){
t10=(C_word)C_a_i_cons(&a,2,C_fix(0),C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,lf[82],t10);
t12=(C_word)C_a_i_cons(&a,2,t11,C_SCHEME_END_OF_LIST);
t13=(C_word)C_a_i_cons(&a,2,t3,t12);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,(C_word)C_a_i_cons(&a,2,lf[429],t13));}
else{
t10=(C_word)C_eqp(t4,lf[372]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(t4,lf[373]));
if(C_truep(t11)){
t12=(C_word)C_a_i_cons(&a,2,C_fix(0),C_SCHEME_END_OF_LIST);
t13=(C_word)C_a_i_cons(&a,2,lf[82],t12);
t14=(C_word)C_a_i_cons(&a,2,t13,C_SCHEME_END_OF_LIST);
t15=(C_word)C_a_i_cons(&a,2,t3,t14);
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,(C_word)C_a_i_cons(&a,2,lf[430],t15));}
else{
t12=(C_word)C_eqp(t4,lf[360]);
if(C_truep(t12)){
t13=(C_word)C_a_i_cons(&a,2,C_fix(0),C_SCHEME_END_OF_LIST);
t14=(C_word)C_a_i_cons(&a,2,lf[82],t13);
t15=(C_word)C_a_i_cons(&a,2,t14,C_SCHEME_END_OF_LIST);
t16=(C_word)C_a_i_cons(&a,2,t3,t15);
t17=(C_word)C_a_i_cons(&a,2,lf[427],t16);
t18=(C_word)C_a_i_cons(&a,2,t17,C_SCHEME_END_OF_LIST);
t19=t1;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,(C_word)C_a_i_cons(&a,2,lf[431],t18));}
else{
t13=(C_word)C_eqp(t4,lf[377]);
if(C_truep(t13)){
t14=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t15=(C_word)C_a_i_cons(&a,2,lf[82],t14);
t16=(C_word)C_a_i_cons(&a,2,t15,C_SCHEME_END_OF_LIST);
t17=(C_word)C_a_i_cons(&a,2,t3,t16);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,(C_word)C_a_i_cons(&a,2,lf[432],t17));}
else{
t14=(C_word)C_eqp(t4,lf[378]);
if(C_truep(t14)){
t15=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t16=(C_word)C_a_i_cons(&a,2,lf[82],t15);
t17=(C_word)C_a_i_cons(&a,2,t16,C_SCHEME_END_OF_LIST);
t18=(C_word)C_a_i_cons(&a,2,t3,t17);
t19=t1;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,(C_word)C_a_i_cons(&a,2,lf[433],t18));}
else{
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12056,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_listp(t2))){
t16=(C_word)C_i_length(t2);
t17=(C_word)C_eqp(C_fix(3),t16);
if(C_truep(t17)){
t18=(C_word)C_i_car(t2);
t19=t15;
f_12056(t19,(C_word)C_i_memq(t18,lf[438]));}
else{
t18=t15;
f_12056(t18,C_SCHEME_FALSE);}}
else{
t16=t15;
f_12056(t16,C_SCHEME_FALSE);}}}}}}}}}

/* k12054 in ##compiler#finish-foreign-result in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12056(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12056,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 1095 gensym */
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12148,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_listp(((C_word*)t0)[3]))){
t3=(C_word)C_i_length(((C_word*)t0)[3]);
t4=(C_word)C_eqp(C_fix(3),t3);
if(C_truep(t4)){
t5=(C_word)C_i_car(((C_word*)t0)[3]);
t6=t2;
f_12148(t6,(C_word)C_eqp(lf[367],t5));}
else{
t5=t2;
f_12148(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_12148(t3,C_SCHEME_FALSE);}}}

/* k12146 in k12054 in ##compiler#finish-foreign-result in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_12148(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12148,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_caddr(((C_word*)t0)[4]);
t3=(C_word)C_a_i_cons(&a,2,lf[365],C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,lf[82],t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(C_word)C_a_i_cons(&a,2,t2,t6);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_cons(&a,2,lf[436],t7));}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k12057 in k12054 in ##compiler#finish-foreign-result in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_12059(C_word c,C_word t0,C_word t1){
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
C_word ab[60],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12059,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,lf[434],t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,lf[435],t7);
t9=(C_word)C_i_caddr(((C_word*)t0)[3]);
t10=(C_word)C_a_i_cons(&a,2,lf[365],C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,lf[82],t10);
t12=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t13=(C_word)C_a_i_cons(&a,2,t11,t12);
t14=(C_word)C_a_i_cons(&a,2,t9,t13);
t15=(C_word)C_a_i_cons(&a,2,lf[436],t14);
t16=(C_word)C_a_i_cons(&a,2,t15,C_SCHEME_END_OF_LIST);
t17=(C_word)C_a_i_cons(&a,2,t8,t16);
t18=(C_word)C_a_i_cons(&a,2,t1,t17);
t19=(C_word)C_a_i_cons(&a,2,lf[437],t18);
t20=(C_word)C_a_i_cons(&a,2,t19,C_SCHEME_END_OF_LIST);
t21=(C_word)C_a_i_cons(&a,2,t4,t20);
t22=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,(C_word)C_a_i_cons(&a,2,lf[92],t21));}

/* ##compiler#estimate-foreign-result-location-size in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11536(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11536,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11548,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11851,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1056 follow-without-loop */
((C_proc5)C_retrieve_proc(*((C_word*)lf[77]+1)))(5,*((C_word*)lf[77]+1),t1,t2,t3,t4);}

/* a11850 in ##compiler#estimate-foreign-result-location-size in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11851,2,t0,t1);}
/* support.scm: 1077 quit */
((C_proc4)C_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),t1,lf[425],((C_word*)t0)[2]);}

/* a11547 in ##compiler#estimate-foreign-result-location-size in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11548(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11548,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_eqp(t4,lf[334]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11558,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_11558(t7,t5);}
else{
t7=(C_word)C_eqp(t4,lf[338]);
if(C_truep(t7)){
t8=t6;
f_11558(t8,t7);}
else{
t8=(C_word)C_eqp(t4,lf[406]);
if(C_truep(t8)){
t9=t6;
f_11558(t9,t8);}
else{
t9=(C_word)C_eqp(t4,lf[419]);
if(C_truep(t9)){
t10=t6;
f_11558(t10,t9);}
else{
t10=(C_word)C_eqp(t4,lf[407]);
if(C_truep(t10)){
t11=t6;
f_11558(t11,t10);}
else{
t11=(C_word)C_eqp(t4,lf[335]);
if(C_truep(t11)){
t12=t6;
f_11558(t12,t11);}
else{
t12=(C_word)C_eqp(t4,lf[405]);
if(C_truep(t12)){
t13=t6;
f_11558(t13,t12);}
else{
t13=(C_word)C_eqp(t4,lf[381]);
if(C_truep(t13)){
t14=t6;
f_11558(t14,t13);}
else{
t14=(C_word)C_eqp(t4,lf[380]);
if(C_truep(t14)){
t15=t6;
f_11558(t15,t14);}
else{
t15=(C_word)C_eqp(t4,lf[408]);
if(C_truep(t15)){
t16=t6;
f_11558(t16,t15);}
else{
t16=(C_word)C_eqp(t4,lf[409]);
if(C_truep(t16)){
t17=t6;
f_11558(t17,t16);}
else{
t17=(C_word)C_eqp(t4,lf[353]);
if(C_truep(t17)){
t18=t6;
f_11558(t18,t17);}
else{
t18=(C_word)C_eqp(t4,lf[342]);
if(C_truep(t18)){
t19=t6;
f_11558(t19,t18);}
else{
t19=(C_word)C_eqp(t4,lf[355]);
if(C_truep(t19)){
t20=t6;
f_11558(t20,t19);}
else{
t20=(C_word)C_eqp(t4,lf[351]);
if(C_truep(t20)){
t21=t6;
f_11558(t21,t20);}
else{
t21=(C_word)C_eqp(t4,lf[349]);
if(C_truep(t21)){
t22=t6;
f_11558(t22,t21);}
else{
t22=(C_word)C_eqp(t4,lf[340]);
if(C_truep(t22)){
t23=t6;
f_11558(t23,t22);}
else{
t23=(C_word)C_eqp(t4,lf[356]);
if(C_truep(t23)){
t24=t6;
f_11558(t24,t23);}
else{
t24=(C_word)C_eqp(t4,lf[360]);
if(C_truep(t24)){
t25=t6;
f_11558(t25,t24);}
else{
t25=(C_word)C_eqp(t4,lf[402]);
if(C_truep(t25)){
t26=t6;
f_11558(t26,t25);}
else{
t26=(C_word)C_eqp(t4,lf[397]);
if(C_truep(t26)){
t27=t6;
f_11558(t27,t26);}
else{
t27=(C_word)C_eqp(t4,lf[410]);
if(C_truep(t27)){
t28=t6;
f_11558(t28,t27);}
else{
t28=(C_word)C_eqp(t4,lf[411]);
if(C_truep(t28)){
t29=t6;
f_11558(t29,t28);}
else{
t29=(C_word)C_eqp(t4,lf[382]);
if(C_truep(t29)){
t30=t6;
f_11558(t30,t29);}
else{
t30=(C_word)C_eqp(t4,lf[379]);
if(C_truep(t30)){
t31=t6;
f_11558(t31,t30);}
else{
t31=(C_word)C_eqp(t4,lf[375]);
if(C_truep(t31)){
t32=t6;
f_11558(t32,t31);}
else{
t32=(C_word)C_eqp(t4,lf[376]);
if(C_truep(t32)){
t33=t6;
f_11558(t33,t32);}
else{
t33=(C_word)C_eqp(t4,lf[373]);
if(C_truep(t33)){
t34=t6;
f_11558(t34,t33);}
else{
t34=(C_word)C_eqp(t4,lf[359]);
if(C_truep(t34)){
t35=t6;
f_11558(t35,t34);}
else{
t35=(C_word)C_eqp(t4,lf[374]);
if(C_truep(t35)){
t36=t6;
f_11558(t36,t35);}
else{
t36=(C_word)C_eqp(t4,lf[372]);
if(C_truep(t36)){
t37=t6;
f_11558(t37,t36);}
else{
t37=(C_word)C_eqp(t4,lf[377]);
t38=t6;
f_11558(t38,(C_truep(t37)?t37:(C_word)C_eqp(t4,lf[378])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k11556 in a11547 in ##compiler#estimate-foreign-result-location-size in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_11558(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_11558,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
t3=(C_word)C_i_foreign_fixnum_argumentp(C_fix(1));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub273(C_SCHEME_UNDEFINED,t3));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[403]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[4],lf[404]));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
t5=(C_word)C_i_foreign_fixnum_argumentp(C_fix(2));
t6=t4;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub273(C_SCHEME_UNDEFINED,t5));}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[2]))){
/* support.scm: 1069 ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t4,C_retrieve(lf[371]),((C_word*)t0)[2]);}
else{
t5=t4;
f_11576(2,t5,C_SCHEME_FALSE);}}}}

/* k11574 in k11556 in a11547 in ##compiler#estimate-foreign-result-location-size in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11576(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11576,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11580,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* g32773278 */
t3=t2;
f_11580(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t2=(C_word)C_i_car(((C_word*)t0)[2]);
t3=(C_word)C_eqp(t2,lf[362]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11615,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_11615(t5,t3);}
else{
t5=(C_word)C_eqp(t2,lf[344]);
if(C_truep(t5)){
t6=t4;
f_11615(t6,t5);}
else{
t6=(C_word)C_eqp(t2,lf[342]);
if(C_truep(t6)){
t7=t4;
f_11615(t7,t6);}
else{
t7=(C_word)C_eqp(t2,lf[353]);
if(C_truep(t7)){
t8=t4;
f_11615(t8,t7);}
else{
t8=(C_word)C_eqp(t2,lf[355]);
t9=t4;
f_11615(t9,(C_truep(t8)?t8:(C_word)C_eqp(t2,lf[370])));}}}}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
/* support.scm: 1055 quit */
((C_proc4)C_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),t2,lf[424],t3);}}}

/* k11613 in k11574 in k11556 in a11547 in ##compiler#estimate-foreign-result-location-size in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_11615(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
t3=(C_word)C_i_foreign_fixnum_argumentp(C_fix(1));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub273(C_SCHEME_UNDEFINED,t3));}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
/* support.scm: 1055 quit */
((C_proc4)C_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),t2,lf[424],t3);}}

/* g3277 in k11574 in k11556 in a11547 in ##compiler#estimate-foreign-result-location-size in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_11580(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11580,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_vectorp(t2))){
t3=(C_word)C_i_vector_ref(t2,C_fix(0));
/* support.scm: 1071 next */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm: 1071 next */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}}

/* ##compiler#estimate-foreign-result-size in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11206(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11206,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11212,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11530,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1026 follow-without-loop */
((C_proc5)C_retrieve_proc(*((C_word*)lf[77]+1)))(5,*((C_word*)lf[77]+1),t1,t2,t3,t4);}

/* a11529 in ##compiler#estimate-foreign-result-size in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11530,2,t0,t1);}
/* support.scm: 1051 quit */
((C_proc4)C_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),t1,lf[422],((C_word*)t0)[2]);}

/* a11211 in ##compiler#estimate-foreign-result-size in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11212(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11212,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_eqp(t4,lf[334]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11222,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_11222(t7,t5);}
else{
t7=(C_word)C_eqp(t4,lf[338]);
if(C_truep(t7)){
t8=t6;
f_11222(t8,t7);}
else{
t8=(C_word)C_eqp(t4,lf[406]);
if(C_truep(t8)){
t9=t6;
f_11222(t9,t8);}
else{
t9=(C_word)C_eqp(t4,lf[419]);
if(C_truep(t9)){
t10=t6;
f_11222(t10,t9);}
else{
t10=(C_word)C_eqp(t4,lf[420]);
if(C_truep(t10)){
t11=t6;
f_11222(t11,t10);}
else{
t11=(C_word)C_eqp(t4,lf[407]);
if(C_truep(t11)){
t12=t6;
f_11222(t12,t11);}
else{
t12=(C_word)C_eqp(t4,lf[421]);
if(C_truep(t12)){
t13=t6;
f_11222(t13,t12);}
else{
t13=(C_word)C_eqp(t4,lf[335]);
if(C_truep(t13)){
t14=t6;
f_11222(t14,t13);}
else{
t14=(C_word)C_eqp(t4,lf[405]);
if(C_truep(t14)){
t15=t6;
f_11222(t15,t14);}
else{
t15=(C_word)C_eqp(t4,lf[408]);
if(C_truep(t15)){
t16=t6;
f_11222(t16,t15);}
else{
t16=(C_word)C_eqp(t4,lf[409]);
if(C_truep(t16)){
t17=t6;
f_11222(t17,t16);}
else{
t17=(C_word)C_eqp(t4,lf[410]);
t18=t6;
f_11222(t18,(C_truep(t17)?t17:(C_word)C_eqp(t4,lf[411])));}}}}}}}}}}}}

/* k11220 in a11211 in ##compiler#estimate-foreign-result-size in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_11222(C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11222,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[356]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11231,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_11231(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[359]);
if(C_truep(t4)){
t5=t3;
f_11231(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[353]);
if(C_truep(t5)){
t6=t3;
f_11231(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[355]);
if(C_truep(t6)){
t7=t3;
f_11231(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[4],lf[360]);
if(C_truep(t7)){
t8=t3;
f_11231(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[4],lf[374]);
if(C_truep(t8)){
t9=t3;
f_11231(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[4],lf[372]);
if(C_truep(t9)){
t10=t3;
f_11231(t10,t9);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[4],lf[375]);
if(C_truep(t10)){
t11=t3;
f_11231(t11,t10);}
else{
t11=(C_word)C_eqp(((C_word*)t0)[4],lf[376]);
if(C_truep(t11)){
t12=t3;
f_11231(t12,t11);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[4],lf[373]);
if(C_truep(t12)){
t13=t3;
f_11231(t13,t12);}
else{
t13=(C_word)C_eqp(((C_word*)t0)[4],lf[377]);
t14=t3;
f_11231(t14,(C_truep(t13)?t13:(C_word)C_eqp(((C_word*)t0)[4],lf[378])));}}}}}}}}}}}}

/* k11229 in k11220 in a11211 in ##compiler#estimate-foreign-result-size in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_11231(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11231,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
t3=(C_word)C_i_foreign_fixnum_argumentp(C_fix(3));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub273(C_SCHEME_UNDEFINED,t3));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[351]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11243,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_11243(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[381]);
if(C_truep(t4)){
t5=t3;
f_11243(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[349]);
if(C_truep(t5)){
t6=t3;
f_11243(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[380]);
if(C_truep(t6)){
t7=t3;
f_11243(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[4],lf[382]);
t8=t3;
f_11243(t8,(C_truep(t7)?t7:(C_word)C_eqp(((C_word*)t0)[4],lf[379])));}}}}}}

/* k11241 in k11229 in k11220 in a11211 in ##compiler#estimate-foreign-result-size in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_11243(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11243,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
t3=(C_word)C_i_foreign_fixnum_argumentp(C_fix(4));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub273(C_SCHEME_UNDEFINED,t3));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[340]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11255,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_11255(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[403]);
if(C_truep(t4)){
t5=t3;
f_11255(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[404]);
t6=t3;
f_11255(t6,(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[4],lf[418])));}}}}

/* k11253 in k11241 in k11229 in k11220 in a11211 in ##compiler#estimate-foreign-result-size in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_11255(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11255,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=(C_word)C_i_foreign_fixnum_argumentp(C_fix(4));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub273(C_SCHEME_UNDEFINED,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[2]))){
/* support.scm: 1042 ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t2,C_retrieve(lf[371]),((C_word*)t0)[2]);}
else{
t3=t2;
f_11261(2,t3,C_SCHEME_FALSE);}}}

/* k11259 in k11253 in k11241 in k11229 in k11220 in a11211 in ##compiler#estimate-foreign-result-size in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11261(C_word c,C_word t0,C_word t1){
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11261,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11265,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* g30433044 */
t3=t2;
f_11265(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t2=(C_word)C_i_car(((C_word*)t0)[2]);
t3=(C_word)C_eqp(t2,lf[362]);
if(C_truep(t3)){
if(C_truep(t3)){
t4=((C_word*)t0)[3];
t5=(C_word)C_i_foreign_fixnum_argumentp(C_fix(3));
t6=t4;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub273(C_SCHEME_UNDEFINED,t5));}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(0));}}
else{
t4=(C_word)C_eqp(t2,lf[344]);
if(C_truep(t4)){
if(C_truep(t4)){
t5=((C_word*)t0)[3];
t6=(C_word)C_i_foreign_fixnum_argumentp(C_fix(3));
t7=t5;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)stub273(C_SCHEME_UNDEFINED,t6));}
else{
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_fix(0));}}
else{
t5=(C_word)C_eqp(t2,lf[342]);
if(C_truep(t5)){
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=(C_word)C_i_foreign_fixnum_argumentp(C_fix(3));
t8=t6;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)stub273(C_SCHEME_UNDEFINED,t7));}
else{
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_fix(0));}}
else{
t6=(C_word)C_eqp(t2,lf[353]);
if(C_truep(t6)){
if(C_truep(t6)){
t7=((C_word*)t0)[3];
t8=(C_word)C_i_foreign_fixnum_argumentp(C_fix(3));
t9=t7;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)stub273(C_SCHEME_UNDEFINED,t8));}
else{
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_fix(0));}}
else{
t7=(C_word)C_eqp(t2,lf[355]);
if(C_truep(t7)){
if(C_truep(t7)){
t8=((C_word*)t0)[3];
t9=(C_word)C_i_foreign_fixnum_argumentp(C_fix(3));
t10=t8;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)stub273(C_SCHEME_UNDEFINED,t9));}
else{
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_fix(0));}}
else{
t8=(C_word)C_eqp(t2,lf[370]);
if(C_truep(t8)){
if(C_truep(t8)){
t9=((C_word*)t0)[3];
t10=(C_word)C_i_foreign_fixnum_argumentp(C_fix(3));
t11=t9;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)stub273(C_SCHEME_UNDEFINED,t10));}
else{
t9=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_fix(0));}}
else{
t9=(C_word)C_eqp(t2,lf[363]);
if(C_truep(t9)){
if(C_truep(t9)){
t10=((C_word*)t0)[3];
t11=(C_word)C_i_foreign_fixnum_argumentp(C_fix(3));
t12=t10;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)stub273(C_SCHEME_UNDEFINED,t11));}
else{
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_fix(0));}}
else{
t10=(C_word)C_eqp(t2,lf[364]);
if(C_truep(t10)){
if(C_truep(t10)){
t11=((C_word*)t0)[3];
t12=(C_word)C_i_foreign_fixnum_argumentp(C_fix(3));
t13=t11;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,(C_word)stub273(C_SCHEME_UNDEFINED,t12));}
else{
t11=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_fix(0));}}
else{
t11=(C_word)C_eqp(t2,lf[367]);
if(C_truep(t11)){
t12=((C_word*)t0)[3];
t13=(C_word)C_i_foreign_fixnum_argumentp(C_fix(3));
t14=t12;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,(C_word)stub273(C_SCHEME_UNDEFINED,t13));}
else{
t12=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_fix(0));}}}}}}}}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}}}

/* g3043 in k11259 in k11253 in k11241 in k11229 in k11220 in a11211 in ##compiler#estimate-foreign-result-size in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_11265(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11265,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_vectorp(t2))){
t3=(C_word)C_i_vector_ref(t2,C_fix(0));
/* support.scm: 1044 next */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm: 1044 next */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}}

/* ##compiler#final-foreign-type in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11161(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11161,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11167,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11200,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 1013 follow-without-loop */
((C_proc5)C_retrieve_proc(*((C_word*)lf[77]+1)))(5,*((C_word*)lf[77]+1),t1,t2,t3,t4);}

/* a11199 in ##compiler#final-foreign-type in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11200,2,t0,t1);}
/* support.scm: 1020 quit */
((C_proc4)C_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),t1,lf[416],((C_word*)t0)[2]);}

/* a11166 in ##compiler#final-foreign-type in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11167,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11171,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_symbolp(t2))){
/* support.scm: 1016 ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t4,C_retrieve(lf[371]),t2);}
else{
t5=t4;
f_11171(2,t5,C_SCHEME_FALSE);}}

/* k11169 in a11166 in ##compiler#final-foreign-type in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11171,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11175,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* g28662867 */
t3=t2;
f_11175(t3,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* g2866 in k11169 in a11166 in ##compiler#final-foreign-type in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_11175(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11175,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_vectorp(t2))){
t3=(C_word)C_i_vector_ref(t2,C_fix(0));
/* support.scm: 1018 next */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm: 1018 next */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}}

/* ##compiler#foreign-type-convert-argument in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11130(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11130,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11143,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1007 ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t4,C_retrieve(lf[371]),t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k11141 in ##compiler#foreign-type-convert-argument in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11143,2,t0,t1);}
if(C_truep(t1)){
if(C_truep((C_word)C_i_vectorp(t1))){
t2=(C_word)C_i_vector_ref(t1,C_fix(1));
t3=(C_word)C_a_i_list(&a,2,t2,((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##compiler#foreign-type-convert-result in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11099(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11099,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11112,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 1000 ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t4,C_retrieve(lf[371]),t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k11110 in ##compiler#foreign-type-convert-result in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11112,2,t0,t1);}
if(C_truep(t1)){
if(C_truep((C_word)C_i_vectorp(t1))){
t2=(C_word)C_i_vector_ref(t1,C_fix(2));
t3=(C_word)C_a_i_list(&a,2,t2,((C_word*)t0)[3]);
if(C_truep(t3)){
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=((C_word*)t0)[3];
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_10041(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10041,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10047,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11093,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 901  follow-without-loop */
((C_proc5)C_retrieve_proc(*((C_word*)lf[77]+1)))(5,*((C_word*)lf[77]+1),t1,t3,t4,t5);}

/* a11092 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_11093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11093,2,t0,t1);}
/* support.scm: 993  quit */
((C_proc4)C_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),t1,lf[412],((C_word*)t0)[2]);}

/* a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_10047(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_10047,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10053,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_10053(t7,t1,t2);}

/* repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10053(C_word t0,C_word t1,C_word t2){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10053,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_eqp(t3,lf[334]);
t5=(C_truep(t4)?t4:(C_word)C_eqp(t3,lf[335]));
if(C_truep(t5)){
if(C_truep(C_retrieve(lf[336]))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,((C_word*)t0)[4]);}
else{
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_cons(&a,2,lf[337],t6));}}
else{
t6=(C_word)C_eqp(t3,lf[338]);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_10082(t8,t6);}
else{
t8=(C_word)C_eqp(t3,lf[405]);
if(C_truep(t8)){
t9=t7;
f_10082(t9,t8);}
else{
t9=(C_word)C_eqp(t3,lf[406]);
if(C_truep(t9)){
t10=t7;
f_10082(t10,t9);}
else{
t10=(C_word)C_eqp(t3,lf[407]);
if(C_truep(t10)){
t11=t7;
f_10082(t11,t10);}
else{
t11=(C_word)C_eqp(t3,lf[408]);
if(C_truep(t11)){
t12=t7;
f_10082(t12,t11);}
else{
t12=(C_word)C_eqp(t3,lf[409]);
if(C_truep(t12)){
t13=t7;
f_10082(t13,t12);}
else{
t13=(C_word)C_eqp(t3,lf[410]);
t14=t7;
f_10082(t14,(C_truep(t13)?t13:(C_word)C_eqp(t3,lf[411])));}}}}}}}}

/* k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10082(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10082,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_retrieve(lf[336]))){
t2=((C_word*)t0)[7];
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[339],t2));}}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[340]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10101(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[403]);
t5=t3;
f_10101(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[404])));}}}

/* k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10101(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10101,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_retrieve(lf[336]))){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[6]);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[341],t2));}}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[342]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10120,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10120(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[400]);
if(C_truep(t4)){
t5=t3;
f_10120(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[401]);
t6=t3;
f_10120(t6,(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[5],lf[402])));}}}}

/* k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10120(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10120,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10123,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 911  gensym */
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[344]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10190(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[397]);
if(C_truep(t4)){
t5=t3;
f_10190(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[398]);
t6=t3;
f_10190(t6,(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[5],lf[399])));}}}}

/* k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10190(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10190,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_retrieve(lf[336]))){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[6]);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[343],t2));}}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[345]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10209(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[390]);
if(C_truep(t4)){
t5=t3;
f_10209(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[391]);
if(C_truep(t5)){
t6=t3;
f_10209(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[392]);
if(C_truep(t6)){
t7=t3;
f_10209(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[5],lf[393]);
if(C_truep(t7)){
t8=t3;
f_10209(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[5],lf[394]);
if(C_truep(t8)){
t9=t3;
f_10209(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[5],lf[395]);
t10=t3;
f_10209(t10,(C_truep(t9)?t9:(C_word)C_eqp(((C_word*)t0)[5],lf[396])));}}}}}}}}

/* k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10209(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10209,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10212,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 923  gensym */
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[347]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10291,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10291(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[383]);
if(C_truep(t4)){
t5=t3;
f_10291(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[384]);
if(C_truep(t5)){
t6=t3;
f_10291(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[385]);
if(C_truep(t6)){
t7=t3;
f_10291(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[4],lf[386]);
if(C_truep(t7)){
t8=t3;
f_10291(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[4],lf[387]);
if(C_truep(t8)){
t9=t3;
f_10291(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[4],lf[388]);
t10=t3;
f_10291(t10,(C_truep(t9)?t9:(C_word)C_eqp(((C_word*)t0)[4],lf[389])));}}}}}}}}

/* k10289 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10291(C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10291,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_retrieve(lf[336]))){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[6]);}
else{
t2=(C_word)C_i_assq(((C_word*)t0)[5],lf[348]);
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[82],t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,t5,t6);
t8=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_cons(&a,2,lf[346],t7));}}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[349]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10330(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[381]);
t5=t3;
f_10330(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[4],lf[382])));}}}

/* k10328 in k10289 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10330(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10330,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_retrieve(lf[336]))){
t2=((C_word*)t0)[7];
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[350],t2));}}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[351]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10349,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10349(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[379]);
t5=t3;
f_10349(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[380])));}}}

/* k10347 in k10328 in k10289 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10349(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10349,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_retrieve(lf[336]))){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[6]);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[352],t2));}}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[353]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10368,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10368(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[377]);
t5=t3;
f_10368(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[378])));}}}

/* k10366 in k10347 in k10328 in k10289 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10368(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10368,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10371,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 943  gensym */
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[355]);
if(C_truep(t2)){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[354],t3));}
else{
t3=(C_word)C_eqp(((C_word*)t0)[5],lf[356]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_10448(t5,t3);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[374]);
if(C_truep(t5)){
t6=t4;
f_10448(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[375]);
t7=t4;
f_10448(t7,(C_truep(t6)?t6:(C_word)C_eqp(((C_word*)t0)[5],lf[376])));}}}}}

/* k10446 in k10366 in k10347 in k10328 in k10289 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10448(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10448,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10451,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 951  gensym */
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[359]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10533,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10533(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[372]);
t5=t3;
f_10533(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[373])));}}}

/* k10531 in k10446 in k10366 in k10347 in k10328 in k10289 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10533(C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10533,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(C_retrieve(lf[336]))){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[357],t2));}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[358],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,lf[357],t4));}}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[360]);
if(C_truep(t2)){
if(C_truep(C_retrieve(lf[336]))){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,lf[361],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_cons(&a,2,lf[357],t5));}
else{
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,lf[361],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,lf[358],t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_cons(&a,2,lf[357],t7));}}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10608,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[3]))){
/* support.scm: 967  ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t3,C_retrieve(lf[371]),((C_word*)t0)[3]);}
else{
t4=t3;
f_10608(2,t4,C_SCHEME_FALSE);}}}}

/* k10606 in k10531 in k10446 in k10366 in k10347 in k10328 in k10289 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_10608(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10608,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10612,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* g27722773 */
t3=t2;
f_10612(t3,((C_word*)t0)[5],t1);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_eqp(t2,lf[362]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10647,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t3)){
t5=t4;
f_10647(t5,t3);}
else{
t5=(C_word)C_eqp(t2,lf[342]);
if(C_truep(t5)){
t6=t4;
f_10647(t6,t5);}
else{
t6=(C_word)C_eqp(t2,lf[370]);
t7=t4;
f_10647(t7,(C_truep(t6)?t6:(C_word)C_eqp(t2,lf[353])));}}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}}

/* k10645 in k10606 in k10531 in k10446 in k10366 in k10347 in k10328 in k10289 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10647(C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10647,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10650,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 973  gensym */
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[363]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[4],lf[364]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10717,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 979  gensym */
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t4);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[367]);
if(C_truep(t4)){
t5=(C_word)C_a_i_cons(&a,2,lf[365],C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,lf[82],t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t7);
t9=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_cons(&a,2,lf[366],t8));}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[368]);
if(C_truep(t5)){
t6=(C_word)C_i_cadr(((C_word*)t0)[3]);
/* support.scm: 986  repeat */
t7=((C_word*)((C_word*)t0)[2])[1];
f_10053(t7,((C_word*)t0)[5],t6);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[369]);
if(C_truep(t6)){
if(C_truep(C_retrieve(lf[336]))){
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,((C_word*)t0)[6]);}
else{
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t8=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_cons(&a,2,lf[350],t7));}}
else{
t7=(C_word)C_eqp(((C_word*)t0)[4],lf[344]);
t8=(C_truep(t7)?t7:(C_word)C_eqp(((C_word*)t0)[4],lf[355]));
if(C_truep(t8)){
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t10=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_cons(&a,2,lf[354],t9));}
else{
t9=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,((C_word*)t0)[6]);}}}}}}}

/* k10715 in k10645 in k10606 in k10531 in k10446 in k10366 in k10347 in k10328 in k10289 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_10717(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10717,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[365],C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,lf[82],t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t7);
t9=(C_word)C_a_i_cons(&a,2,lf[366],t8);
t10=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,lf[82],t10);
t12=(C_word)C_a_i_cons(&a,2,t11,C_SCHEME_END_OF_LIST);
t13=(C_word)C_a_i_cons(&a,2,t9,t12);
t14=(C_word)C_a_i_cons(&a,2,t1,t13);
t15=(C_word)C_a_i_cons(&a,2,lf[214],t14);
t16=(C_word)C_a_i_cons(&a,2,t15,C_SCHEME_END_OF_LIST);
t17=(C_word)C_a_i_cons(&a,2,t4,t16);
t18=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,(C_word)C_a_i_cons(&a,2,lf[92],t17));}

/* k10648 in k10645 in k10606 in k10531 in k10446 in k10366 in k10347 in k10328 in k10289 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_10650(C_word c,C_word t0,C_word t1){
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
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10650,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,lf[354],t5);
t7=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,lf[82],t7);
t9=(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,t6,t9);
t11=(C_word)C_a_i_cons(&a,2,t1,t10);
t12=(C_word)C_a_i_cons(&a,2,lf[214],t11);
t13=(C_word)C_a_i_cons(&a,2,t12,C_SCHEME_END_OF_LIST);
t14=(C_word)C_a_i_cons(&a,2,t4,t13);
t15=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,(C_word)C_a_i_cons(&a,2,lf[92],t14));}

/* g2772 in k10606 in k10531 in k10446 in k10366 in k10347 in k10328 in k10289 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10612(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10612,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_vectorp(t2))){
t3=(C_word)C_i_vector_ref(t2,C_fix(0));
/* support.scm: 969  next */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t3=t2;
/* support.scm: 969  next */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}}

/* k10449 in k10446 in k10366 in k10347 in k10328 in k10289 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_10451(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10451,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10482,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[336]))){
t6=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t7=t5;
f_10482(t7,(C_word)C_a_i_cons(&a,2,lf[357],t6));}
else{
t6=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[358],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=t5;
f_10482(t9,(C_word)C_a_i_cons(&a,2,lf[357],t8));}}

/* k10480 in k10449 in k10446 in k10366 in k10347 in k10328 in k10289 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10482(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10482,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[82],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t1,t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=(C_word)C_a_i_cons(&a,2,lf[214],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t8);
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_cons(&a,2,lf[92],t9));}

/* k10369 in k10366 in k10347 in k10328 in k10289 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_10371(C_word c,C_word t0,C_word t1){
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
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10371,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,lf[354],t5);
t7=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,lf[82],t7);
t9=(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,t6,t9);
t11=(C_word)C_a_i_cons(&a,2,t1,t10);
t12=(C_word)C_a_i_cons(&a,2,lf[214],t11);
t13=(C_word)C_a_i_cons(&a,2,t12,C_SCHEME_END_OF_LIST);
t14=(C_word)C_a_i_cons(&a,2,t4,t13);
t15=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,(C_word)C_a_i_cons(&a,2,lf[92],t14));}

/* k10210 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_10212(C_word c,C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10212,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10243,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[336]))){
t6=t5;
f_10243(t6,t1);}
else{
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[82],t6);
t8=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t7,t8);
t10=t5;
f_10243(t10,(C_word)C_a_i_cons(&a,2,lf[346],t9));}}

/* k10241 in k10210 in k10207 in k10188 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10243(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10243,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[82],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t1,t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=(C_word)C_a_i_cons(&a,2,lf[214],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t8);
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_cons(&a,2,lf[92],t9));}

/* k10121 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_10123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10123,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10154,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[336]))){
t6=t5;
f_10154(t6,t1);}
else{
t6=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t7=t5;
f_10154(t7,(C_word)C_a_i_cons(&a,2,lf[343],t6));}}

/* k10152 in k10121 in k10118 in k10099 in k10080 in repeat in a10046 in ##compiler#foreign-type-check in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10154(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10154,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[82],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t1,t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=(C_word)C_a_i_cons(&a,2,lf[214],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t8);
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_cons(&a,2,lf[92],t9));}

/* ##compiler#pprint-expressions-to-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9983(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9983,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9987,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* support.scm: 882  open-output-file */
((C_proc3)C_retrieve_proc(*((C_word*)lf[331]+1)))(3,*((C_word*)lf[331]+1),t4,t3);}
else{
/* support.scm: 882  current-output-port */
((C_proc2)C_retrieve_proc(*((C_word*)lf[332]+1)))(2,*((C_word*)lf[332]+1),t4);}}

/* k9985 in ##compiler#pprint-expressions-to-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9990,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9998,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 883  with-output-to-port */
((C_proc4)C_retrieve_symbol_proc(lf[330]))(4,*((C_word*)lf[330]+1),t2,t1,t3);}

/* a9997 in k9985 in ##compiler#pprint-expressions-to-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9998,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10004,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_10004(t5,t1,((C_word*)t0)[2]);}

/* loop2445 in a9997 in k9985 in ##compiler#pprint-expressions-to-file in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_10004(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10004,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10022,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10016,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 887  pretty-print */
((C_proc3)C_retrieve_symbol_proc(lf[329]))(3,*((C_word*)lf[329]+1),t5,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k10014 in loop2445 in a9997 in k9985 in ##compiler#pprint-expressions-to-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_10016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 888  newline */
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[2]);}

/* k10020 in loop2445 in a9997 in k9985 in ##compiler#pprint-expressions-to-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_10022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_10004(t3,((C_word*)t0)[2],t2);}

/* k9988 in k9985 in ##compiler#pprint-expressions-to-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* support.scm: 890  close-output-port */
((C_proc3)C_retrieve_proc(*((C_word*)lf[328]+1)))(3,*((C_word*)lf[328]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9902(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9902,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9908,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9914,tmp=(C_word)a,a+=2,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9914(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_9914,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9921,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=t8,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* support.scm: 870  debugging */
((C_proc4)C_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t9,lf[325],lf[326]);}

/* k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9921,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9924,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[324],t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9924,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9927,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9927,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,lf[323],((C_word*)t0)[3]);}

/* k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9930,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9933,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9936,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* write-char/port */
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k9934 in k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9936,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9939,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[322],t2);}

/* k9937 in k9934 in k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9942,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9940 in k9937 in k9934 in k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9945,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* write-char/port */
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k9943 in k9940 in k9937 in k9934 in k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9945,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9948,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[321],t2);}

/* k9946 in k9943 in k9940 in k9937 in k9934 in k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9951,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9949 in k9946 in k9943 in k9940 in k9937 in k9934 in k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9954,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k9952 in k9949 in k9946 in k9943 in k9940 in k9937 in k9934 in k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9954,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9957,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[320],t2);}

/* k9955 in k9952 in k9949 in k9946 in k9943 in k9940 in k9937 in k9934 in k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9960,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9958 in k9955 in k9952 in k9949 in k9946 in k9943 in k9940 in k9937 in k9934 in k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9963,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k9961 in k9958 in k9955 in k9952 in k9949 in k9946 in k9943 in k9940 in k9937 in k9934 in k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9963,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9966,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[319],t2);}

/* k9964 in k9961 in k9958 in k9955 in k9952 in k9949 in k9946 in k9943 in k9940 in k9937 in k9934 in k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9969,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9967 in k9964 in k9961 in k9958 in k9955 in k9952 in k9949 in k9946 in k9943 in k9940 in k9937 in k9934 in k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9972,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k9970 in k9967 in k9964 in k9961 in k9958 in k9955 in k9952 in k9949 in k9946 in k9943 in k9940 in k9937 in k9934 in k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9972,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9975,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[318],t2);}

/* k9973 in k9970 in k9967 in k9964 in k9961 in k9958 in k9955 in k9952 in k9949 in k9946 in k9943 in k9940 in k9937 in k9934 in k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9978,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9976 in k9973 in k9970 in k9967 in k9964 in k9961 in k9958 in k9955 in k9952 in k9949 in k9946 in k9943 in k9940 in k9937 in k9934 in k9931 in k9928 in k9925 in k9922 in k9919 in a9913 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* a9907 in ##compiler#print-program-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9908,2,t0,t1);}
/* support.scm: 869  compute-database-statistics */
((C_proc3)C_retrieve_symbol_proc(lf[314]))(3,*((C_word*)lf[314]+1),t1,((C_word*)t0)[2]);}

/* ##compiler#compute-database-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9794(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[25],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9794,3,t0,t1,t2);}
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_fix(0);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_fix(0);
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_fix(0);
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9798,a[2]=t10,a[3]=t12,a[4]=t8,a[5]=t4,a[6]=t6,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9803,a[2]=t12,a[3]=t4,a[4]=t6,a[5]=t8,a[6]=t10,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 845  ##sys#hash-table-for-each */
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),t13,t14,t2);}

/* a9802 in ##compiler#compute-database-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9803,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9809,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_9809(t7,t1,t3);}

/* loop2366 in a9802 in ##compiler#compute-database-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_9809(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9809,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9817,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_9817(t3,t4);
t6=(C_word)C_slot(t2,C_fix(1));
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* g2373 in loop2366 in a9802 in ##compiler#compute-database-statistics in k5070 in k5067 in k4005 in k4002 */
static C_word C_fcall f_9817(C_word t0,C_word t1){
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
C_stack_check;
t2=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[6])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=(C_word)C_i_car(t1);
t5=(C_word)C_eqp(t4,lf[178]);
if(C_truep(t5)){
t6=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[5])[1],C_fix(1));
t7=C_mutate(((C_word *)((C_word*)t0)[5])+1,t6);
return(t7);}
else{
t6=(C_word)C_eqp(t4,lf[161]);
if(C_truep(t6)){
t7=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[4])[1],C_fix(1));
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t7);
t9=(C_word)C_i_cdr(t1);
t10=(C_word)C_slot(t9,C_fix(1));
t11=(C_word)C_eqp(lf[222],t10);
if(C_truep(t11)){
t12=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t13=C_mutate(((C_word *)((C_word*)t0)[3])+1,t12);
return(t13);}
else{
t12=C_SCHEME_UNDEFINED;
return(t12);}}
else{
t7=(C_word)C_eqp(t4,lf[167]);
if(C_truep(t7)){
t8=(C_word)C_i_cdr(t1);
t9=(C_word)C_i_length(t8);
t10=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t9);
t11=C_mutate(((C_word *)((C_word*)t0)[2])+1,t10);
return(t11);}
else{
t8=C_SCHEME_UNDEFINED;
return(t8);}}}}

/* k9796 in ##compiler#compute-database-statistics in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 859  values */
C_values(9,0,((C_word*)t0)[7],C_retrieve(lf[315]),C_retrieve(lf[316]),((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* ##sys#toplevel-definition-hook in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9773(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_9773,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(t5)?C_SCHEME_FALSE:(C_word)C_i_not(t4));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9783,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 822  debugging */
((C_proc5)C_retrieve_proc(*((C_word*)lf[10]+1)))(5,*((C_word*)lf[10]+1),t7,lf[245],lf[313],t2);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k9781 in ##sys#toplevel-definition-hook in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 823  hide-variable */
((C_proc3)C_retrieve_symbol_proc(lf[312]))(3,*((C_word*)lf[312]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##compiler#dump-global-refs in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9724(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9724,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9730,tmp=(C_word)a,a+=2,tmp);
/* support.scm: 808  ##sys#hash-table-for-each */
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),t1,t3,t2);}

/* a9729 in ##compiler#dump-global-refs in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9730(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9730,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9771,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 810  keyword? */
((C_proc3)C_retrieve_symbol_proc(lf[308]))(3,*((C_word*)lf[308]+1),t4,t2);}

/* k9769 in a9729 in ##compiler#dump-global-refs in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9771(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9771,2,t0,t1);}
t2=(C_truep(t1)?C_SCHEME_FALSE:(C_word)C_i_assq(lf[178],((C_word*)t0)[4]));
if(C_truep(t2)){
t3=(C_word)C_i_assq(lf[166],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9743,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=(C_word)C_i_cdr(t3);
t6=(C_word)C_i_length(t5);
t7=(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t6);
/* support.scm: 812  write */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t4,t7);}
else{
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],C_fix(0));
/* support.scm: 812  write */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t4,t5);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9741 in k9769 in a9729 in ##compiler#dump-global-refs in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 813  newline */
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[2]);}

/* ##compiler#dump-defined-globals in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9687(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9687,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9693,tmp=(C_word)a,a+=2,tmp);
/* support.scm: 798  ##sys#hash-table-for-each */
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),t1,t3,t2);}

/* a9692 in ##compiler#dump-defined-globals in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9693(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9693,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9700,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9722,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 800  keyword? */
((C_proc3)C_retrieve_symbol_proc(lf[308]))(3,*((C_word*)lf[308]+1),t5,t2);}

/* k9720 in a9692 in ##compiler#dump-defined-globals in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_9700(t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_i_assq(lf[178],((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_9700(t3,(C_truep(t2)?(C_word)C_i_assq(lf[176],((C_word*)t0)[2]):C_SCHEME_FALSE));}}

/* k9698 in a9692 in ##compiler#dump-defined-globals in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_9700(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9700,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9703,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 803  write */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k9701 in k9698 in a9692 in ##compiler#dump-defined-globals in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 804  newline */
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[2]);}

/* ##compiler#dump-undefined-globals in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9646(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9646,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9652,tmp=(C_word)a,a+=2,tmp);
/* support.scm: 788  ##sys#hash-table-for-each */
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),t1,t3,t2);}

/* a9651 in ##compiler#dump-undefined-globals in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9652(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9652,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9659,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9685,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 790  keyword? */
((C_proc3)C_retrieve_symbol_proc(lf[308]))(3,*((C_word*)lf[308]+1),t5,t2);}

/* k9683 in a9651 in ##compiler#dump-undefined-globals in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_9659(t2,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_assq(lf[178],((C_word*)t0)[2]))){
t2=(C_word)C_i_assq(lf[176],((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_9659(t3,(C_word)C_i_not(t2));}
else{
t2=((C_word*)t0)[3];
f_9659(t2,C_SCHEME_FALSE);}}}

/* k9657 in a9651 in ##compiler#dump-undefined-globals in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_9659(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9659,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9662,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 793  write */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k9660 in k9657 in a9651 in ##compiler#dump-undefined-globals in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 794  newline */
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[2]);}

/* ##compiler#simple-lambda-node? in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9524(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9524,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(2));
t5=(C_word)C_i_caddr(t4);
t6=(C_word)C_i_pairp(t5);
t7=(C_truep(t6)?(C_word)C_i_car(t5):C_SCHEME_FALSE);
if(C_truep(t7)){
if(C_truep((C_word)C_i_cadr(t4))){
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9553,a[2]=t9,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_9553(3,t11,t1,t2);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* rec in ##compiler#simple-lambda-node? in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9553(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9553,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_eqp(t4,lf[234]);
if(C_truep(t5)){
t6=t2;
t7=(C_word)C_slot(t6,C_fix(3));
t8=(C_word)C_i_car(t7);
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(lf[209],t9);
if(C_truep(t10)){
t11=(C_word)C_slot(t8,C_fix(2));
t12=(C_word)C_i_car(t11);
t13=(C_word)C_eqp(((C_word*)t0)[3],t12);
if(C_truep(t13)){
t14=(C_word)C_i_cdr(t7);
/* support.scm: 780  every */
((C_proc4)C_retrieve_symbol_proc(lf[87]))(4,*((C_word*)lf[87]+1),t1,((C_word*)((C_word*)t0)[2])[1],t14);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t6=(C_word)C_eqp(t4,lf[225]);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}
else{
t7=t2;
t8=(C_word)C_slot(t7,C_fix(3));
/* support.scm: 782  every */
((C_proc4)C_retrieve_symbol_proc(lf[87]))(4,*((C_word*)lf[87]+1),t1,((C_word*)((C_word*)t0)[2])[1],t8);}}}

/* ##compiler#expression-has-side-effects? in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9423(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9423,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9429,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_9429(3,t7,t1,t2);}

/* walk in ##compiler#expression-has-side-effects? in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9429(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9429,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(3));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(1));
t7=(C_word)C_eqp(t6,lf[209]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9455,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t6,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t7)){
t9=t8;
f_9455(t9,t7);}
else{
t9=(C_word)C_eqp(t6,lf[82]);
if(C_truep(t9)){
t10=t8;
f_9455(t10,t9);}
else{
t10=(C_word)C_eqp(t6,lf[215]);
if(C_truep(t10)){
t11=t8;
f_9455(t11,t10);}
else{
t11=(C_word)C_eqp(t6,lf[226]);
t12=t8;
f_9455(t12,(C_truep(t11)?t11:(C_word)C_eqp(t6,lf[213])));}}}}

/* k9453 in walk in ##compiler#expression-has-side-effects? in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_9455(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_9455,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[222]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
t4=(C_word)C_slot(t3,C_fix(2));
t5=(C_word)C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9469,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 763  find */
((C_proc4)C_retrieve_symbol_proc(lf[304]))(4,*((C_word*)lf[304]+1),((C_word*)t0)[6],t6,C_retrieve(lf[305]));}
else{
t3=(C_word)C_eqp(((C_word*)t0)[5],lf[214]);
if(C_truep(t3)){
if(C_truep(t3)){
/* support.scm: 764  any */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),((C_word*)t0)[6],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[92]);
if(C_truep(t4)){
/* support.scm: 764  any */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),((C_word*)t0)[6],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}
else{
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}}}}}

/* a9468 in k9453 in walk in ##compiler#expression-has-side-effects? in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9469(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9469,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9477,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 763  foreign-callback-stub-id */
((C_proc3)C_retrieve_symbol_proc(lf[303]))(3,*((C_word*)lf[303]+1),t3,t2);}

/* k9475 in a9468 in k9453 in walk in ##compiler#expression-has-side-effects? in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(((C_word*)t0)[2],t1));}

/* ##compiler#match-node in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9198(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[27],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_9198,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9201,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9235,a[2]=t10,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9278,a[2]=t10,a[3]=t12,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9397,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* support.scm: 747  matchn */
t17=((C_word*)t12)[1];
f_9278(t17,t16,t2,t3);}

/* k9395 in ##compiler#match-node in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9397,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9403,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=(C_word)C_slot(t3,C_fix(1));
t5=((C_word*)t0)[3];
t6=(C_word)C_slot(t5,C_fix(2));
/* support.scm: 750  debugging */
((C_proc7)C_retrieve_proc(*((C_word*)lf[10]+1)))(7,*((C_word*)lf[10]+1),t2,lf[300],lf[301],t4,t6,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9401 in k9395 in ##compiler#match-node in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* matchn in ##compiler#match-node in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_9278(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9278,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_not_pair_p(t3))){
/* support.scm: 736  resolve */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9201(t4,t1,t3,t2);}
else{
t4=t2;
t5=(C_word)C_slot(t4,C_fix(1));
t6=(C_word)C_i_car(t3);
t7=(C_word)C_eqp(t5,t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9300,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t9=t2;
t10=(C_word)C_slot(t9,C_fix(2));
t11=(C_word)C_i_cadr(t3);
/* support.scm: 738  match1 */
t12=((C_word*)((C_word*)t0)[2])[1];
f_9235(t12,t8,t10,t11);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}}

/* k9298 in matchn in ##compiler#match-node in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9300(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9300,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
t3=(C_word)C_slot(t2,C_fix(3));
t4=(C_word)C_i_cddr(((C_word*)t0)[5]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9318,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_9318(t8,((C_word*)t0)[2],t3,t4);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop in k9298 in matchn in ##compiler#match-node in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_9318(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9318,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_nullp(t2));}
else{
if(C_truep((C_word)C_i_not_pair_p(t3))){
/* support.scm: 742  resolve */
t4=((C_word*)((C_word*)t0)[4])[1];
f_9201(t4,t1,t3,t2);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9349,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_car(t3);
/* support.scm: 744  matchn */
t7=((C_word*)((C_word*)t0)[2])[1];
f_9278(t7,t4,t5,t6);}}}}

/* k9347 in loop in k9298 in matchn in ##compiler#match-node in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 745  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_9318(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* match1 in ##compiler#match-node in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_9235(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_9235,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_not_pair_p(t3))){
/* support.scm: 729  resolve */
t4=((C_word*)((C_word*)t0)[3])[1];
f_9201(t4,t1,t3,t2);}
else{
if(C_truep((C_word)C_i_not_pair_p(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9257,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_car(t3);
/* support.scm: 731  match1 */
t8=t4;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}

/* k9255 in match1 in ##compiler#match-node in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 731  match1 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_9235(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* resolve in ##compiler#match-node in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_9201(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9201,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9209,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* g21692170 */
t6=t1;
((C_proc2)C_retrieve_proc(t6))(2,t6,f_9209(t5,t4));}
else{
if(C_truep((C_word)C_i_memq(t2,((C_word*)t0)[2]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9230,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 724  alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[121]))(5,*((C_word*)lf[121]+1),t5,t2,t3,((C_word*)((C_word*)t0)[3])[1]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_eqp(t2,t3));}}}

/* k9228 in resolve in ##compiler#match-node in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* g2169 in resolve in ##compiler#match-node in k5070 in k5067 in k4005 in k4002 */
static C_word C_fcall f_9209(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_cdr(t1);
return((C_word)C_i_equalp(((C_word*)t0)[2],t2));}

/* ##compiler#load-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9129(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9129,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9135,tmp=(C_word)a,a+=2,tmp);
/* support.scm: 704  with-input-from-file */
((C_proc4)C_retrieve_symbol_proc(lf[298]))(4,*((C_word*)lf[298]+1),t1,t2,t3);}

/* a9134 in ##compiler#load-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9135,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9141,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_9141(t5,t1);}

/* loop in a9134 in ##compiler#load-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_9141(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9141,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9145,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 707  read */
((C_proc2)C_retrieve_proc(*((C_word*)lf[101]+1)))(2,*((C_word*)lf[101]+1),t2);}

/* k9143 in loop in a9134 in ##compiler#load-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9145,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9181,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9192,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_cadr(t1);
/* support.scm: 712  sexpr->node */
((C_proc3)C_retrieve_symbol_proc(lf[278]))(3,*((C_word*)lf[278]+1),t4,t5);}}

/* k9190 in k9143 in loop in a9134 in ##compiler#load-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9192,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[290],C_SCHEME_TRUE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[290],t5);}
else{
/* ##sys#error */
t5=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k9154 in k9190 in k9143 in loop in a9134 in ##compiler#load-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[290],t1);}

/* k9179 in k9143 in loop in a9134 in ##compiler#load-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 713  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_9141(t2,((C_word*)t0)[2]);}

/* ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8937(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8937,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8941,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8968,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 673  with-output-to-file */
((C_proc4)C_retrieve_symbol_proc(lf[296]))(4,*((C_word*)lf[296]+1),t6,t2,t7);}

/* a8967 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9127,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 675  chicken-version */
((C_proc2)C_retrieve_symbol_proc(lf[295]))(2,*((C_word*)lf[295]+1),t3);}

/* k9125 in a8967 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 675  print */
((C_proc7)C_retrieve_proc(*((C_word*)lf[280]+1)))(7,*((C_word*)lf[280]+1),((C_word*)t0)[2],lf[292],t1,lf[293],C_retrieve(lf[236]),lf[294]);}

/* k8970 in a8967 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8972,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8975,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8980,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 677  ##sys#hash-table-for-each */
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),t2,t3,((C_word*)t0)[2]);}

/* a8979 in k8970 in a8967 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8980(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8980,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 679  variable-visible? */
((C_proc3)C_retrieve_symbol_proc(lf[291]))(3,*((C_word*)lf[291]+1),t4,t2);}

/* k8985 in a8979 in k8970 in a8967 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8987,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_assq(lf[163],((C_word*)t0)[6]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9123,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[4];
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[238]))(4,*((C_word*)lf[238]+1),t3,t4,lf[290]);}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k9121 in k8985 in a8979 in k8970 in a8967 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9123,2,t0,t1);}
if(C_truep((C_word)C_i_structurep(t1,lf[199]))){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_i_assq(lf[161],((C_word*)t0)[6]);
t3=(C_word)C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_9011(t5,t3);}
else{
t5=(C_word)C_i_cdr(t2);
t6=(C_word)C_eqp(lf[157],t5);
t7=t4;
f_9011(t7,(C_word)C_i_not(t6));}}}

/* k9009 in k9121 in k8985 in a8979 in k8970 in a8967 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_9011(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9011,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep((C_word)C_i_assq(lf[188],((C_word*)t0)[7]))){
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(C_word)C_slot(t2,C_fix(2));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9090,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* support.scm: 688  get */
((C_proc5)C_retrieve_symbol_proc(lf[134]))(5,*((C_word*)lf[134]+1),t4,((C_word*)t0)[2],((C_word*)t0)[4],lf[195]);}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9088 in k9009 in k9121 in k8985 in a8979 in k8970 in a8967 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9090,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[5];
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[238]))(4,*((C_word*)lf[238]+1),t2,t3,lf[289]);}}

/* k9043 in k9088 in k9009 in k9121 in k8985 in a8979 in k8970 in a8967 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9045,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9048,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_eqp(t1,lf[286]);
if(C_truep(t3)){
t4=t2;
f_9048(t4,C_SCHEME_TRUE);}
else{
t4=(C_word)C_eqp(t1,lf[287]);
if(C_truep(t4)){
t5=t2;
f_9048(t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cadddr(((C_word*)t0)[2]);
t6=C_retrieve(lf[288]);
t7=t2;
f_9048(t7,(C_word)C_fixnum_lessp(t5,t6));}}}

/* k9046 in k9043 in k9088 in k9009 in k9121 in k8985 in a8979 in k8970 in a8967 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_9048(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9048,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9055,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9066,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* support.scm: 695  node->sexpr */
((C_proc3)C_retrieve_symbol_proc(lf[277]))(3,*((C_word*)lf[277]+1),t5,t6);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9064 in k9046 in k9043 in k9088 in k9009 in k9121 in k8985 in a8979 in k8970 in a8967 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9066,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
/* support.scm: 695  pp */
((C_proc3)C_retrieve_symbol_proc(lf[285]))(3,*((C_word*)lf[285]+1),((C_word*)t0)[2],t2);}

/* k9053 in k9046 in k9043 in k9088 in k9009 in k9121 in k8985 in a8979 in k8970 in a8967 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_9055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 696  newline */
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[2]);}

/* k8973 in k8970 in a8967 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 698  print */
((C_proc3)C_retrieve_proc(*((C_word*)lf[280]+1)))(3,*((C_word*)lf[280]+1),((C_word*)t0)[2],lf[284]);}

/* k8939 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8941,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8947,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
/* support.scm: 700  debugging */
((C_proc4)C_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t2,lf[282],lf[283]);}
else{
t3=t2;
f_8947(2,t3,C_SCHEME_FALSE);}}

/* k8945 in k8939 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8947,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8952,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8960,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 701  sort-symbols */
((C_proc3)C_retrieve_proc(*((C_word*)lf[78]+1)))(3,*((C_word*)lf[78]+1),t3,((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k8958 in k8945 in k8939 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a8951 in k8945 in k8939 in ##compiler#emit-global-inline-file in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8952(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8952,3,t0,t1,t2);}
t3=*((C_word*)lf[280]+1);
/* g21242125 */
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,lf[281],t2);}

/* ##compiler#sexpr->node in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8869(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8869,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8875,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_8875(t6,t1,t2);}

/* walk in ##compiler#sexpr->node in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8875(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8875,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cadr(t2);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8896,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=(C_word)C_i_cddr(t2);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8902,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t12,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_8902(t14,t9,t10);}

/* loop2043 in walk in ##compiler#sexpr->node in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8902(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8902,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8931,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g20592060 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_8875(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8929 in loop2043 in walk in ##compiler#sexpr->node in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8931(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8931,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop20432056 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8902(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop20432056 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8902(t6,((C_word*)t0)[3],t5);}}

/* k8894 in walk in ##compiler#sexpr->node in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8896,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[199],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* ##compiler#node->sexpr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8783(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8783,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8789,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_8789(t6,t1,t2);}

/* walk in ##compiler#node->sexpr in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8789(C_word t0,C_word t1,C_word t2){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8789,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8819,a[2]=t4,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8823,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t13=t2;
t14=(C_word)C_slot(t13,C_fix(3));
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8834,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t16,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_8834(t18,t12,t14);}

/* loop2007 in walk in ##compiler#node->sexpr in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8834(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8834,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8863,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g20232024 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_8789(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8861 in loop2007 in walk in ##compiler#node->sexpr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8863(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8863,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop20072020 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8834(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop20072020 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8834(t6,((C_word*)t0)[3],t5);}}

/* k8821 in walk in ##compiler#node->sexpr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k8817 in walk in ##compiler#node->sexpr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8819,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* ##compiler#copy-node! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8744(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8744,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8748,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=(C_word)C_slot(t5,C_fix(1));
t7=t3;
t8=(C_word)C_i_check_structure(t7,lf[199]);
/* ##sys#block-set! */
t9=*((C_word*)lf[202]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t4,t7,C_fix(1),t6);}

/* k8746 in ##compiler#copy-node! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8748,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8751,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
t4=(C_word)C_slot(t3,C_fix(2));
t5=((C_word*)t0)[3];
t6=(C_word)C_i_check_structure(t5,lf[199]);
/* ##sys#block-set! */
t7=*((C_word*)lf[202]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t2,t5,C_fix(2),t4);}

/* k8749 in k8746 in ##compiler#copy-node! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8751,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8754,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=(C_word)C_slot(t3,C_fix(3));
t5=((C_word*)t0)[3];
t6=(C_word)C_i_check_structure(t5,lf[199]);
/* ##sys#block-set! */
t7=*((C_word*)lf[202]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t2,t5,C_fix(3),t4);}

/* k8752 in k8749 in k8746 in ##compiler#copy-node! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* ##compiler#tree-copy in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8710(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8710,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8716,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_8716(t6,t1,t2);}

/* rec in ##compiler#tree-copy in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8716(C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8716,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8730,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* support.scm: 652  rec */
t7=t3;
t8=t4;
t1=t7;
t2=t8;
goto loop;}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8728 in rec in ##compiler#tree-copy in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8730,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8734,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* support.scm: 652  rec */
t4=((C_word*)((C_word*)t0)[2])[1];
f_8716(t4,t2,t3);}

/* k8732 in k8728 in rec in ##compiler#tree-copy in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8734,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8325(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[16],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_8325,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8329,a[2]=t2,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8661,a[2]=t7,a[3]=t12,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_8661(t14,t10,t3,t4);}

/* loop1789 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8661(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8661,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[273]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8694,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
/* g18091810 */
t10=t6;
((C_proc4)C_retrieve_proc(t10))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8692 in loop1789 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8694,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8674,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_8674(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_8674(t5,t4);}}

/* k8672 in k8692 in loop1789 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8674(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop17891803 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8661(t5,((C_word*)t0)[2],t3,t4);}

/* k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8329,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8337,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp));
/* support.scm: 647  walk */
t5=((C_word*)t3)[1];
f_8337(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8337(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8337,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(3));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(t9,lf[209]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t7);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8374,a[2]=t11,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8384,a[2]=t11,a[3]=((C_word*)t0)[3],a[4]=t12,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 615  get */
((C_proc5)C_retrieve_symbol_proc(lf[134]))(5,*((C_word*)lf[134]+1),t13,((C_word*)t0)[3],t11,lf[179]);}
else{
t11=(C_word)C_eqp(t9,lf[227]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8421,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t13=(C_word)C_i_car(t7);
t14=t3;
/* support.scm: 607  alist-ref */
((C_proc6)C_retrieve_symbol_proc(lf[269]))(6,*((C_word*)lf[269]+1),t12,t13,t14,*((C_word*)lf[270]+1),t13);}
else{
t12=(C_word)C_eqp(t9,lf[92]);
if(C_truep(t12)){
t13=(C_word)C_i_car(t7);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8437,a[2]=t3,a[3]=t13,a[4]=((C_word*)t0)[2],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t15=(C_word)C_i_car(t5);
/* support.scm: 624  walk */
t27=t14;
t28=t15;
t29=t3;
t1=t27;
t2=t28;
t3=t29;
goto loop;}
else{
t13=(C_word)C_eqp(t9,lf[222]);
if(C_truep(t13)){
t14=(C_word)C_i_caddr(t7);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8486,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 631  decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[108]))(4,*((C_word*)lf[108]+1),t1,t14,t15);}
else{
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8646,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t9,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 646  tree-copy */
((C_proc3)C_retrieve_symbol_proc(lf[275]))(3,*((C_word*)lf[275]+1),t14,t7);}}}}}

/* k8644 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8650,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8652,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* map */
t4=*((C_word*)lf[271]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a8651 in k8644 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8652(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8652,3,t0,t1,t2);}
/* g19671968 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8337(t3,t1,t2,((C_word*)t0)[2]);}

/* k8648 in k8644 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8650,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[199],((C_word*)t0)[2],t3,t1));}

/* a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8486(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[22],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8486,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8490,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8593,a[2]=t6,a[3]=t11,a[4]=t8,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_8593(t13,t9,t2);}

/* loop1863 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8593(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8593,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8620,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8630,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g18791880 */
t6=t3;
f_8620(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8628 in loop1863 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8630(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8630,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop18631876 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8593(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop18631876 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8593(t6,((C_word*)t0)[3],t5);}}

/* g1879 in loop1863 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8620(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8620,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8624,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 635  gensym */
((C_proc3)C_retrieve_symbol_proc(lf[93]))(3,*((C_word*)lf[93]+1),t3,t2);}

/* k8622 in g1879 in loop1863 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8627,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 636  put! */
((C_proc6)C_retrieve_symbol_proc(lf[138]))(6,*((C_word*)lf[138]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[274],C_SCHEME_TRUE);}

/* k8625 in k8622 in g1879 in loop1863 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k8488 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8490(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8490,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8493,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8542,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8544,a[2]=t4,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_8544(t11,t7,((C_word*)t0)[2],t1);}

/* loop1890 in k8488 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8544(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8544,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[273]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8577,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
/* g19101911 */
t10=t6;
((C_proc4)C_retrieve_proc(t10))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8575 in loop1890 in k8488 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8577,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8557,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_8557(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_8557(t5,t4);}}

/* k8555 in k8575 in loop1890 in k8488 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8557(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop18901904 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8544(t5,((C_word*)t0)[2],t3,t4);}

/* k8540 in k8488 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 639  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[54]+1)))(4,*((C_word*)lf[54]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k8491 in k8488 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8493,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8519,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* support.scm: 642  gensym */
((C_proc3)C_retrieve_symbol_proc(lf[93]))(3,*((C_word*)lf[93]+1),t2,lf[272]);}

/* k8517 in k8491 in k8488 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8519,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8527,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8535,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t5=((C_word*)t0)[2];
t6=((C_word*)t0)[6];
/* support.scm: 607  alist-ref */
((C_proc6)C_retrieve_symbol_proc(lf[269]))(6,*((C_word*)lf[269]+1),t4,t5,t6,*((C_word*)lf[270]+1),t5);}
else{
/* support.scm: 643  build-lambda-list */
((C_proc5)C_retrieve_proc(*((C_word*)lf[48]+1)))(5,*((C_word*)lf[48]+1),t3,((C_word*)t0)[4],((C_word*)t0)[3],C_SCHEME_FALSE);}}

/* k8533 in k8517 in k8491 in k8488 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 643  build-lambda-list */
((C_proc5)C_retrieve_proc(*((C_word*)lf[48]+1)))(5,*((C_word*)lf[48]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8525 in k8517 in k8491 in k8488 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8527,2,t0,t1);}
t2=(C_word)C_i_cadddr(((C_word*)t0)[8]);
t3=(C_word)C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[6],t1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8509,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8511,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* map */
t6=*((C_word*)lf[271]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[2]);}

/* a8510 in k8525 in k8517 in k8491 in k8488 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8511(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8511,3,t0,t1,t2);}
/* g19411942 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8337(t3,t1,t2,((C_word*)t0)[2]);}

/* k8507 in k8525 in k8517 in k8491 in k8488 in a8485 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8509,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[199],lf[222],((C_word*)t0)[2],t1));}

/* k8435 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* support.scm: 625  gensym */
((C_proc3)C_retrieve_symbol_proc(lf[93]))(3,*((C_word*)lf[93]+1),t2,((C_word*)t0)[3]);}

/* k8438 in k8435 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8443,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 626  alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[121]))(5,*((C_word*)lf[121]+1),t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k8441 in k8438 in k8435 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8443,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8463,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[3]);
/* support.scm: 629  walk */
t5=((C_word*)((C_word*)t0)[2])[1];
f_8337(t5,t3,t4,t1);}

/* k8461 in k8441 in k8438 in k8435 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8463,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[199],lf[92],((C_word*)t0)[2],t2));}

/* k8419 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8421,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8413,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[4]);
/* support.scm: 621  walk */
t5=((C_word*)((C_word*)t0)[3])[1];
f_8337(t5,t3,t4,((C_word*)t0)[2]);}

/* k8411 in k8419 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8413,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[199],lf[227],((C_word*)t0)[2],t2));}

/* k8382 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm: 616  put! */
((C_proc6)C_retrieve_symbol_proc(lf[138]))(6,*((C_word*)lf[138]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[179],C_SCHEME_FALSE);}
else{
t2=((C_word*)t0)[4];
f_8374(2,t2,C_SCHEME_UNDEFINED);}}

/* k8372 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8381,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
/* support.scm: 607  alist-ref */
((C_proc6)C_retrieve_symbol_proc(lf[269]))(6,*((C_word*)lf[269]+1),t2,((C_word*)t0)[2],t3,*((C_word*)lf[270]+1),((C_word*)t0)[2]);}

/* k8379 in k8372 in walk in k8327 in ##compiler#copy-node-tree-and-rename in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8381,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(C_word)C_a_i_list(&a,1,t1);
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[199],lf[209],t3,C_SCHEME_END_OF_LIST));}

/* ##compiler#inline-lambda-bindings in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_8177,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8183,a[2]=t6,a[3]=t4,a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* support.scm: 584  decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[108]))(4,*((C_word*)lf[108]+1),t1,t2,t7);}

/* a8182 in ##compiler#inline-lambda-bindings in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8183(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8183,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8189,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8195,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a8194 in a8182 in ##compiler#inline-lambda-bindings in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[22],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8195,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8199,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t2,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[5])){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8290,a[2]=t6,a[3]=t10,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_8290(t12,t4,((C_word*)t0)[3]);}
else{
t5=t4;
f_8199(2,t5,((C_word*)t0)[3]);}}

/* loop1741 in a8194 in a8182 in ##compiler#inline-lambda-bindings in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8290(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8290,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[93]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8319,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g17571758 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8317 in loop1741 in a8194 in a8182 in ##compiler#inline-lambda-bindings in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8319(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8319,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop17411754 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8290(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop17411754 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8290(t6,((C_word*)t0)[3],t5);}}

/* k8197 in a8194 in a8182 in ##compiler#inline-lambda-bindings in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8202,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* support.scm: 590  copy-node-tree-and-rename */
((C_proc6)C_retrieve_symbol_proc(lf[268]))(6,*((C_word*)lf[268]+1),t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}
else{
t3=t2;
f_8202(2,t3,((C_word*)t0)[4]);}}

/* k8200 in k8197 in a8194 in a8182 in ##compiler#inline-lambda-bindings in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8207,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8228,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8282,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 596  last */
((C_proc3)C_retrieve_symbol_proc(lf[249]))(3,*((C_word*)lf[249]+1),t4,((C_word*)t0)[5]);}
else{
t4=t3;
f_8228(t4,t1);}}

/* k8280 in k8200 in k8197 in a8194 in a8182 in ##compiler#inline-lambda-bindings in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8282(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8282,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[4]))){
t3=(C_word)C_a_i_list(&a,1,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_record(&a,4,lf[199],lf[82],t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_list(&a,2,t4,((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
f_8228(t6,(C_word)C_a_i_record(&a,4,lf[199],lf[92],t2,t5));}
else{
t3=(C_word)C_i_length(((C_word*)t0)[4]);
t4=(C_word)C_fixnum_times(C_fix(3),t3);
t5=(C_word)C_a_i_list(&a,2,lf[267],t4);
t6=((C_word*)t0)[4];
t7=(C_word)C_a_i_record(&a,4,lf[199],lf[232],t5,t6);
t8=(C_word)C_a_i_list(&a,2,t7,((C_word*)t0)[3]);
t9=((C_word*)t0)[2];
f_8228(t9,(C_word)C_a_i_record(&a,4,lf[199],lf[92],t2,t8));}}

/* k8226 in k8200 in k8197 in a8194 in a8182 in ##compiler#inline-lambda-bindings in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8228(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8228,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8232,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 602  take */
((C_proc4)C_retrieve_symbol_proc(lf[266]))(4,*((C_word*)lf[266]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8230 in k8226 in k8200 in k8197 in a8194 in a8182 in ##compiler#inline-lambda-bindings in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 592  fold-right */
((C_proc6)C_retrieve_symbol_proc(lf[265]))(6,*((C_word*)lf[265]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a8206 in k8200 in k8197 in a8194 in a8182 in ##compiler#inline-lambda-bindings in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8207(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8207,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_list(&a,1,t2);
t6=(C_word)C_a_i_list(&a,2,t3,t4);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[199],lf[92],t5,t6));}

/* a8188 in a8182 in ##compiler#inline-lambda-bindings in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8189,2,t0,t1);}
/* support.scm: 587  split-at */
((C_proc4)C_retrieve_symbol_proc(lf[264]))(4,*((C_word*)lf[264]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##compiler#fold-boolean in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8123(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8123,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8129,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_8129(t7,t1,t3);}

/* fold in ##compiler#fold-boolean in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8129(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8129,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_nullp(t3))){
C_apply(4,0,t1,((C_word*)t0)[3],t2);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8155,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_cadr(t2);
/* support.scm: 580  proc */
t7=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t7))(4,t7,t4,t5,t6);}}

/* k8153 in fold in ##compiler#fold-boolean in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8155,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8159,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* support.scm: 581  fold */
t4=((C_word*)((C_word*)t0)[2])[1];
f_8129(t4,t2,t3);}

/* k8157 in k8153 in fold in ##compiler#fold-boolean in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8159,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[199],lf[224],lf[262],t2));}

/* ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7442(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7442,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7448,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_7448(t6,t1,t2);}

/* walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7448(C_word t0,C_word t1,C_word t2){
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
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7448,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(3));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(1));
t9=(C_word)C_eqp(t8,lf[214]);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7482,a[2]=t6,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t8,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t9)){
t11=t10;
f_7482(t11,t9);}
else{
t11=(C_word)C_eqp(t8,lf[259]);
t12=t10;
f_7482(t12,(C_truep(t11)?t11:(C_word)C_eqp(t8,lf[260])));}}

/* k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7482(C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7482,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7489,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7491,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t8,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_7491(t10,t6,((C_word*)t0)[3]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[248]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7541,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7545,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7547,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=t10,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7547(t12,t8,((C_word*)t0)[3]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[5],lf[209]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(((C_word*)t0)[5],lf[213]));
if(C_truep(t4)){
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_car(((C_word*)t0)[2]));}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[82]);
if(C_truep(t5)){
t6=(C_word)C_i_car(((C_word*)t0)[2]);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_cons(&a,2,lf[82],t7));}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[92]);
if(C_truep(t6)){
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7626,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_FALSE;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7642,a[2]=((C_word*)t0)[2],a[3]=t11,a[4]=t8,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7695,a[2]=t16,a[3]=((C_word*)t0)[4],a[4]=t13,a[5]=t15,tmp=(C_word)a,a+=6,tmp);
/* support.scm: 552  butlast */
((C_proc3)C_retrieve_symbol_proc(lf[251]))(3,*((C_word*)lf[251]+1),t17,((C_word*)t0)[3]);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[5],lf[222]);
if(C_truep(t7)){
t8=(C_word)C_i_cadr(((C_word*)t0)[2]);
t9=(C_truep(t8)?lf[117]:lf[222]);
t10=(C_word)C_i_caddr(((C_word*)t0)[2]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7751,a[2]=t10,a[3]=t9,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=(C_word)C_i_car(((C_word*)t0)[3]);
/* support.scm: 559  walk */
t13=((C_word*)((C_word*)t0)[4])[1];
f_7448(t13,t11,t12);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[5],lf[234]);
if(C_truep(t8)){
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7769,a[2]=((C_word*)t0)[4],a[3]=t10,a[4]=t14,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_7769(t16,((C_word*)t0)[6],((C_word*)t0)[3]);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[5],lf[225]);
if(C_truep(t9)){
t10=(C_word)C_i_car(((C_word*)t0)[2]);
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7819,a[2]=t10,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7821,a[2]=((C_word*)t0)[4],a[3]=t12,a[4]=t17,a[5]=t14,tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_7821(t19,t15,((C_word*)t0)[3]);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[5],lf[215]);
if(C_truep(t10)){
t11=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]));}
else{
t11=(C_word)C_eqp(((C_word*)t0)[5],lf[253]);
if(C_truep(t11)){
t12=(C_word)C_i_car(((C_word*)t0)[2]);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7878,a[2]=t14,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp));
t16=((C_word*)t14)[1];
f_7878(t16,((C_word*)t0)[6],t12,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[5],lf[254]);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7940,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t12)){
t14=t13;
f_7940(t14,t12);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[5],lf[256]);
if(C_truep(t14)){
t15=t13;
f_7940(t15,t14);}
else{
t15=(C_word)C_eqp(((C_word*)t0)[5],lf[257]);
t16=t13;
f_7940(t16,(C_truep(t15)?t15:(C_word)C_eqp(((C_word*)t0)[5],lf[258])));}}}}}}}}}}}}}

/* k7938 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7940(C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7940,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7947,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* support.scm: 569  walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7448(t4,t2,t3);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[232]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[5],lf[255]));
if(C_truep(t3)){
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8010,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8012,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t10,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_8012(t12,t8,((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8052,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8056,a[2]=((C_word*)t0)[4],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8058,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t11,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_8058(t13,t9,((C_word*)t0)[3]);}}}

/* loop1691 in k7938 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8058(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8058,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8087,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g17071708 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7448(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8085 in loop1691 in k7938 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8087(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8087,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop16911704 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8058(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop16911704 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8058(t6,((C_word*)t0)[3],t5);}}

/* k8054 in k7938 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 572  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[54]+1)))(4,*((C_word*)lf[54]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8050 in k7938 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8052,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* loop1668 in k7938 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_8012(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8012,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8041,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g16841685 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7448(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8039 in loop1668 in k7938 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8041(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8041,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop16681681 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8012(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop16681681 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_8012(t6,((C_word*)t0)[3],t5);}}

/* k8008 in k7938 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_8010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 571  cons* */
((C_proc5)C_retrieve_symbol_proc(lf[252]))(5,*((C_word*)lf[252]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7945 in k7938 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7947(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7947,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7951,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_cdr(((C_word*)t0)[3]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7957,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t9,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7957(t11,t6,t7);}

/* loop1640 in k7945 in k7938 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7957(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7957,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7986,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g16561657 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7448(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7984 in loop1640 in k7945 in k7938 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7986(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7986,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop16401653 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7957(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop16401653 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7957(t6,((C_word*)t0)[3],t5);}}

/* k7949 in k7945 in k7938 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 569  cons* */
((C_proc6)C_retrieve_symbol_proc(lf[252]))(6,*((C_word*)lf[252]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7878(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7878,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7896,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 566  reverse */
((C_proc3)C_retrieve_proc(*((C_word*)lf[76]+1)))(3,*((C_word*)lf[76]+1),t6,t4);}
else{
t6=(C_word)C_fixnum_difference(t2,C_fix(1));
t7=(C_word)C_i_cdr(t3);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7927,a[2]=t7,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t9=(C_word)C_i_car(t3);
/* support.scm: 567  walk */
t10=((C_word*)((C_word*)t0)[3])[1];
f_7448(t10,t8,t9);}}

/* k7925 in loop in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7927,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* support.scm: 567  loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_7878(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k7894 in loop in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7896,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7904,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* support.scm: 566  walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7448(t4,t2,t3);}

/* k7902 in k7894 in loop in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7904,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[253],t3));}

/* loop1593 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7821(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7821,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7850,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g16091610 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7448(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7848 in loop1593 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7850(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7850,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop15931606 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7821(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop15931606 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7821(t6,((C_word*)t0)[3],t5);}}

/* k7817 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 561  cons* */
((C_proc5)C_retrieve_symbol_proc(lf[252]))(5,*((C_word*)lf[252]+1),((C_word*)t0)[3],lf[225],((C_word*)t0)[2],t1);}

/* loop1570 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7769(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7769,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7798,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g15861587 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7448(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7796 in loop1570 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7798(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7798,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop15701583 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7769(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop15701583 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7769(t6,((C_word*)t0)[3],t5);}}

/* k7749 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7751,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k7693 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7695,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7697,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_7697(t5,((C_word*)t0)[2],t1);}

/* loop1547 in k7693 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7697(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7697,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7726,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g15631564 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7448(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7724 in loop1547 in k7693 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7726(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7726,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop15471560 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7697(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop15471560 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7697(t6,((C_word*)t0)[3],t5);}}

/* k7640 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7642,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7644,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7644(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop1520 in k7640 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7644(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_7644,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[250]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7677,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
/* g15401541 */
t10=t6;
((C_proc4)C_retrieve_proc(t10))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7675 in loop1520 in k7640 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7677,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7657,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_7657(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_7657(t5,t4);}}

/* k7655 in k7675 in loop1520 in k7640 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7657(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop15201534 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_7644(t5,((C_word*)t0)[2],t3,t4);}

/* k7624 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7626,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7634,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7638,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 553  last */
((C_proc3)C_retrieve_symbol_proc(lf[249]))(3,*((C_word*)lf[249]+1),t3,((C_word*)t0)[2]);}

/* k7636 in k7624 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 553  walk */
t2=((C_word*)((C_word*)t0)[3])[1];
f_7448(t2,((C_word*)t0)[2],t1);}

/* k7632 in k7624 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7634,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[92],t3));}

/* loop1484 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7547(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7547,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7576,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g15001501 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7448(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7574 in loop1484 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7576(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7576,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14841497 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7547(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14841497 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7547(t6,((C_word*)t0)[3],t5);}}

/* k7543 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k7539 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7541,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[248],t2));}

/* loop1457 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7491(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7491,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7520,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g14731474 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7448(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7518 in loop1457 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7520(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7520,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14571470 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7491(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14571470 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7491(t6,((C_word*)t0)[3],t5);}}

/* k7487 in k7480 in walk in ##compiler#build-expression-tree in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7489,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6519(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6519,3,t0,t1,t2);}
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6522,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7437,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 536  walk */
t9=((C_word*)t6)[1];
f_6522(t9,t8,t2);}

/* k7435 in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7440,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 537  debugging */
((C_proc5)C_retrieve_proc(*((C_word*)lf[10]+1)))(5,*((C_word*)lf[10]+1),t2,lf[245],lf[246],((C_word*)((C_word*)t0)[2])[1]);}

/* k7438 in k7435 in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_6522(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(20);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6522,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_symbolp(t2))){
t3=t1;
t4=t2;
t5=(C_word)C_a_i_list(&a,1,t4);
t6=t3;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[199],lf[209],t5,C_SCHEME_END_OF_LIST));}
else{
if(C_truep((C_word)C_i_not_pair_p(t2))){
/* support.scm: 471  bomb */
((C_proc4)C_retrieve_proc(*((C_word*)lf[5]+1)))(4,*((C_word*)lf[5]+1),t1,lf[212],t2);}
else{
t3=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_symbolp(t3))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_eqp(t4,lf[213]);
if(C_truep(t5)){
t6=(C_word)C_i_cadr(t2);
t7=(C_word)C_a_i_list(&a,1,t6);
t8=t1;
t9=t8;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_record(&a,4,lf[199],lf[213],t7,C_SCHEME_END_OF_LIST));}
else{
t6=(C_word)C_eqp(t4,lf[214]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(t4,lf[215]));
if(C_truep(t7)){
t8=(C_word)C_i_car(t2);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6597,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t14=(C_word)C_i_cdr(t2);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6603,a[2]=((C_word*)t0)[3],a[3]=t10,a[4]=t16,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_6603(t18,t13,t14);}
else{
t8=(C_word)C_eqp(t4,lf[82]);
if(C_truep(t8)){
t9=(C_word)C_i_cadr(t2);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6655,a[2]=t9,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_numberp(t9))){
t11=(C_word)C_eqp(lf[219],C_retrieve(lf[220]));
if(C_truep(t11)){
t12=(C_word)C_i_integerp(t9);
t13=t10;
f_6655(t13,(C_word)C_i_not(t12));}
else{
t12=t10;
f_6655(t12,C_SCHEME_FALSE);}}
else{
t11=t10;
f_6655(t11,C_SCHEME_FALSE);}}
else{
t9=(C_word)C_eqp(t4,lf[92]);
if(C_truep(t9)){
t10=(C_word)C_i_cadr(t2);
t11=(C_word)C_i_caddr(t2);
if(C_truep((C_word)C_i_nullp(t10))){
/* support.scm: 491  walk */
t99=t1;
t100=t11;
t1=t99;
t2=t100;
goto loop;}
else{
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6714,a[2]=t2,a[3]=t11,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* support.scm: 492  unzip1 */
((C_proc3)C_retrieve_symbol_proc(lf[221]))(3,*((C_word*)lf[221]+1),t12,t10);}}
else{
t10=(C_word)C_eqp(t4,lf[117]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(t4,lf[222]));
if(C_truep(t11)){
t12=(C_word)C_i_cadr(t2);
t13=(C_word)C_a_i_list(&a,1,t12);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6807,a[2]=t13,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t15=(C_word)C_i_caddr(t2);
/* support.scm: 496  walk */
t99=t14;
t100=t15;
t1=t99;
t2=t100;
goto loop;}
else{
t12=(C_word)C_eqp(t4,lf[223]);
if(C_truep(t12)){
t13=(C_word)C_i_cadr(t2);
t14=(C_word)C_i_car(t2);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6840,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t14,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t13))){
t16=(C_word)C_i_car(t13);
t17=(C_word)C_eqp(lf[82],t16);
if(C_truep(t17)){
t18=(C_word)C_i_cadr(t13);
t19=t15;
f_6840(t19,(C_word)C_a_i_list(&a,1,t18));}
else{
t18=t15;
f_6840(t18,(C_word)C_a_i_list(&a,1,t13));}}
else{
t16=t15;
f_6840(t16,(C_word)C_a_i_list(&a,1,t13));}}
else{
t13=(C_word)C_eqp(t4,lf[224]);
t14=(C_truep(t13)?t13:(C_word)C_eqp(t4,lf[225]));
if(C_truep(t14)){
t15=(C_word)C_i_car(t2);
t16=(C_word)C_i_cadr(t2);
t17=(C_word)C_a_i_list(&a,1,t16);
t18=C_SCHEME_END_OF_LIST;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_FALSE;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6932,a[2]=t17,a[3]=t15,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t23=(C_word)C_i_cddr(t2);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6938,a[2]=((C_word*)t0)[3],a[3]=t19,a[4]=t25,a[5]=t21,tmp=(C_word)a,a+=6,tmp));
t27=((C_word*)t25)[1];
f_6938(t27,t22,t23);}
else{
t15=(C_word)C_eqp(t4,lf[226]);
if(C_truep(t15)){
t16=(C_word)C_i_cadr(t2);
t17=(C_word)C_a_i_list(&a,2,t16,C_SCHEME_TRUE);
t18=t1;
t19=t18;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,(C_word)C_a_i_record(&a,4,lf[199],lf[226],t17,C_SCHEME_END_OF_LIST));}
else{
t16=(C_word)C_eqp(t4,lf[227]);
t17=(C_truep(t16)?t16:(C_word)C_eqp(t4,lf[228]));
if(C_truep(t17)){
t18=(C_word)C_i_cadr(t2);
t19=(C_word)C_a_i_list(&a,1,t18);
t20=C_SCHEME_END_OF_LIST;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_FALSE;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7022,a[2]=t19,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t25=(C_word)C_i_cddr(t2);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7028,a[2]=((C_word*)t0)[3],a[3]=t21,a[4]=t27,a[5]=t23,tmp=(C_word)a,a+=6,tmp));
t29=((C_word*)t27)[1];
f_7028(t29,t24,t25);}
else{
t18=(C_word)C_eqp(t4,lf[229]);
if(C_truep(t18)){
t19=(C_word)C_i_cadr(t2);
t20=(C_word)C_i_cadr(t19);
t21=(C_word)C_i_caddr(t2);
t22=(C_word)C_i_cadr(t21);
t23=(C_word)C_i_cadddr(t2);
t24=(C_word)C_i_cadr(t23);
t25=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7114,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t24,a[6]=t22,a[7]=t20,tmp=(C_word)a,a+=8,tmp);
/* support.scm: 515  fifth */
((C_proc3)C_retrieve_symbol_proc(lf[231]))(3,*((C_word*)lf[231]+1),t25,t2);}
else{
t19=(C_word)C_eqp(t4,lf[232]);
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7135,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t19)){
t21=t20;
f_7135(t21,t19);}
else{
t21=(C_word)C_eqp(t4,lf[240]);
if(C_truep(t21)){
t22=t20;
f_7135(t22,t21);}
else{
t22=(C_word)C_eqp(t4,lf[241]);
if(C_truep(t22)){
t23=t20;
f_7135(t23,t22);}
else{
t23=(C_word)C_eqp(t4,lf[242]);
t24=t20;
f_7135(t24,(C_truep(t23)?t23:(C_word)C_eqp(t4,lf[243])));}}}}}}}}}}}}}}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7395,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7397,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t10,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7397(t12,t8,t2);}}}}

/* loop1400 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7397(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7397,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7426,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g14161417 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6522(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7424 in loop1400 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7426(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7426,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14001413 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7397(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop14001413 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7397(t6,((C_word*)t0)[3],t5);}}

/* k7393 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7395,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[199],lf[234],lf[244],t1));}

/* k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7135(C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7135,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_i_cadr(((C_word*)t0)[6]);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7155,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_i_cddr(((C_word*)t0)[6]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7161,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=t11,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_7161(t13,t8,t9);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[3],lf[233]);
if(C_truep(t2)){
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7212,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_i_cdr(((C_word*)t0)[6]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7218,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t10,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7218(t12,t7,t8);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7256,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7262,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[5],t3,t4);}}}

/* a7261 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7262(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7262,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7318,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7346,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=t2;
/* ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[238]))(4,*((C_word*)lf[238]+1),t5,t6,lf[239]);}

/* k7344 in a7261 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_increase(((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_7318(t4,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[2];
f_7318(t2,C_SCHEME_FALSE);}}

/* k7316 in a7261 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7318(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7318,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7322,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7325,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 531  real-name */
((C_proc3)C_retrieve_symbol_proc(lf[40]))(3,*((C_word*)lf[40]+1),t3,((C_word*)t0)[2]);}
else{
/* support.scm: 533  ##sys#symbol->qualified-string */
((C_proc3)C_retrieve_symbol_proc(lf[237]))(3,*((C_word*)lf[237]+1),t2,((C_word*)t0)[2]);}}

/* k7323 in k7316 in a7261 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7325,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7332,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
t4=((C_word*)t0)[4];
f_7322(2,t4,(C_word)C_a_i_list(&a,3,C_retrieve(lf[236]),((C_word*)t0)[3],t3));}
else{
/* support.scm: 532  ##sys#symbol->qualified-string */
((C_proc3)C_retrieve_symbol_proc(lf[237]))(3,*((C_word*)lf[237]+1),t2,((C_word*)t0)[2]);}}

/* k7330 in k7323 in k7316 in a7261 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7332,2,t0,t1);}
t2=((C_word*)t0)[3];
f_7322(2,t2,(C_word)C_a_i_list(&a,3,C_retrieve(lf[236]),((C_word*)t0)[2],t1));}

/* k7320 in k7316 in a7261 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7322(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7322,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7279,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7281,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t9,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7281(t11,t7,((C_word*)t0)[2]);}

/* loop1372 in k7320 in k7316 in a7261 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7281(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7281,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7310,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g13881389 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6522(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7308 in loop1372 in k7320 in k7316 in a7261 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7310(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7310,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop13721385 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7281(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop13721385 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7281(t6,((C_word*)t0)[3],t5);}}

/* k7277 in k7320 in k7316 in a7261 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7279,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[199],lf[234],((C_word*)t0)[2],t1));}

/* a7255 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7256,2,t0,t1);}
/* support.scm: 523  get-line-2 */
((C_proc3)C_retrieve_symbol_proc(lf[145]))(3,*((C_word*)lf[145]+1),t1,((C_word*)t0)[2]);}

/* loop1323 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7218(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7218,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7247,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g13391340 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6522(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7245 in loop1323 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7247(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7247,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop13231336 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7218(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop13231336 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7218(t6,((C_word*)t0)[3],t5);}}

/* k7210 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7212(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7212,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[199],lf[234],lf[235],t1));}

/* loop1295 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7161(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7161,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7190,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g13111312 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6522(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7188 in loop1295 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7190(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7190,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop12951308 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7161(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop12951308 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7161(t6,((C_word*)t0)[3],t5);}}

/* k7153 in k7133 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7155,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[199],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k7112 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7114,2,t0,t1);}
t2=(C_word)C_i_cadr(t1);
t3=(C_word)C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7094,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7098,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 516  sixth */
((C_proc3)C_retrieve_symbol_proc(lf[230]))(3,*((C_word*)lf[230]+1),t5,((C_word*)t0)[2]);}

/* k7096 in k7112 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 516  walk */
t2=((C_word*)((C_word*)t0)[3])[1];
f_6522(t2,((C_word*)t0)[2],t1);}

/* k7092 in k7112 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7094,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[199],lf[229],((C_word*)t0)[2],t2));}

/* loop1241 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_7028(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7028,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7057,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g12571258 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6522(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7055 in loop1241 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7057(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7057,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop12411254 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7028(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop12411254 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_7028(t6,((C_word*)t0)[3],t5);}}

/* k7020 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_7022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7022,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[199],lf[227],((C_word*)t0)[2],t1));}

/* loop1203 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_6938(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6938,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6967,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g12191220 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6522(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6965 in loop1203 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6967(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6967,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop12031216 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6938(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop12031216 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6938(t6,((C_word*)t0)[3],t5);}}

/* k6930 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6932,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[199],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k6838 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_6840(C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6840,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6844,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_i_cddr(((C_word*)t0)[3]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6850,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t9,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6850(t11,t6,t7);}

/* loop1170 in k6838 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_6850(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6850,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6879,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g11861187 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6522(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6877 in loop1170 in k6838 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6879(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6879,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop11701183 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6850(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop11701183 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6850(t6,((C_word*)t0)[3],t5);}}

/* k6842 in k6838 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6844,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[199],((C_word*)t0)[2],t3,t1));}

/* k6805 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6807,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[199],lf[117],((C_word*)t0)[2],t2));}

/* k6712 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6714(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6714,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6718,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6722,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_i_cadr(((C_word*)t0)[2]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6736,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6736(t12,t7,t8);}

/* loop1128 in k6712 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_6736(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6736,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6763,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6774,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g11441145 */
t6=t3;
f_6763(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6772 in loop1128 in k6712 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6774(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6774,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop11281141 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6736(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop11281141 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6736(t6,((C_word*)t0)[3],t5);}}

/* g1144 in loop1128 in k6712 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_6763(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6763,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
/* support.scm: 493  walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6522(t4,t1,t3);}

/* k6720 in k6712 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6730,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 494  walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6522(t3,t2,((C_word*)t0)[2]);}

/* k6728 in k6720 in k6712 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6730,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* support.scm: 493  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[54]+1)))(4,*((C_word*)lf[54]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k6716 in k6712 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6718,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[199],lf[92],t3,t1));}

/* k6653 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_6655(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6655,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6658,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 482  compiler-warning */
((C_proc5)C_retrieve_proc(*((C_word*)lf[19]+1)))(5,*((C_word*)lf[19]+1),t2,lf[217],lf[218],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[199],lf[82],t3,C_SCHEME_END_OF_LIST));}}

/* k6656 in k6653 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6658,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6665,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 485  truncate */
((C_proc3)C_retrieve_proc(*((C_word*)lf[216]+1)))(3,*((C_word*)lf[216]+1),t2,((C_word*)t0)[2]);}

/* k6663 in k6656 in k6653 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6665,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
t4=(C_word)C_a_i_list(&a,1,t2);
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[199],lf[82],t4,C_SCHEME_END_OF_LIST));}

/* loop1092 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_6603(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6603,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6632,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g11081109 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_6522(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6630 in loop1092 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6632(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6632,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop10921105 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6603(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop10921105 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6603(t6,((C_word*)t0)[3],t5);}}

/* k6595 in walk in ##compiler#build-node-graph in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6597,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[199],((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t1));}

/* ##compiler#qnode in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6504(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6504,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,1,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[199],lf[82],t3,C_SCHEME_END_OF_LIST));}

/* ##compiler#varnode in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6489(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6489,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,1,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[199],lf[209],t3,C_SCHEME_END_OF_LIST));}

/* make-node in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6483(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6483,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[199],t2,t3,t4));}

/* node-subexpressions in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6474(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6474,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[199]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(3)));}

/* node-subexpressions-set! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6465(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6465,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[199]);
/* ##sys#block-set! */
t5=*((C_word*)lf[202]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(3),t3);}

/* node-parameters in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6456(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6456,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[199]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(2)));}

/* node-parameters-set! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6447,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[199]);
/* ##sys#block-set! */
t5=*((C_word*)lf[202]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(2),t3);}

/* node-class in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6438(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6438,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[199]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(1)));}

/* node-class-set! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6429(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6429,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[199]);
/* ##sys#block-set! */
t5=*((C_word*)lf[202]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(1),t3);}

/* node? in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6423(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6423,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[199]));}

/* f_6417 in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6417,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[199],t2,t3,t4));}

/* ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5918(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5918,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5922,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_5922(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6415,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 401  append */
((C_proc5)C_retrieve_proc(*((C_word*)lf[54]+1)))(5,*((C_word*)lf[54]+1),t4,C_retrieve(lf[196]),C_retrieve(lf[197]),C_retrieve(lf[127]));}}

/* k6413 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_5922(t3,t2);}

/* k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_5922(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5922,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5927,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 404  ##sys#hash-table-for-each */
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5927(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5927,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
if(C_truep((C_word)C_i_memq(t2,((C_word*)((C_word*)t0)[2])[1]))){
t14=C_SCHEME_UNDEFINED;
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}
else{
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5937,a[2]=t3,a[3]=t9,a[4]=t7,a[5]=t5,a[6]=t13,a[7]=t11,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* support.scm: 412  write */
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t14,t2);}}

/* k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5937,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5940,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6100,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t4,tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_6100(t6,t2,((C_word*)t0)[2]);}

/* loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_6100(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6100,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
/* support.scm: 416  caar */
((C_proc3)C_retrieve_proc(*((C_word*)lf[160]+1)))(3,*((C_word*)lf[160]+1),t3,t2);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6110(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6110,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6113,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_eqp(t1,lf[158]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
if(C_truep(t3)){
t5=t4;
f_6126(t5,t3);}
else{
t5=(C_word)C_eqp(t1,lf[176]);
if(C_truep(t5)){
t6=t4;
f_6126(t6,t5);}
else{
t6=(C_word)C_eqp(t1,lf[177]);
if(C_truep(t6)){
t7=t4;
f_6126(t7,t6);}
else{
t7=(C_word)C_eqp(t1,lf[178]);
if(C_truep(t7)){
t8=t4;
f_6126(t8,t7);}
else{
t8=(C_word)C_eqp(t1,lf[179]);
if(C_truep(t8)){
t9=t4;
f_6126(t9,t8);}
else{
t9=(C_word)C_eqp(t1,lf[180]);
if(C_truep(t9)){
t10=t4;
f_6126(t10,t9);}
else{
t10=(C_word)C_eqp(t1,lf[181]);
if(C_truep(t10)){
t11=t4;
f_6126(t11,t10);}
else{
t11=(C_word)C_eqp(t1,lf[182]);
if(C_truep(t11)){
t12=t4;
f_6126(t12,t11);}
else{
t12=(C_word)C_eqp(t1,lf[183]);
if(C_truep(t12)){
t13=t4;
f_6126(t13,t12);}
else{
t13=(C_word)C_eqp(t1,lf[184]);
if(C_truep(t13)){
t14=t4;
f_6126(t14,t13);}
else{
t14=(C_word)C_eqp(t1,lf[185]);
if(C_truep(t14)){
t15=t4;
f_6126(t15,t14);}
else{
t15=(C_word)C_eqp(t1,lf[186]);
if(C_truep(t15)){
t16=t4;
f_6126(t16,t15);}
else{
t16=(C_word)C_eqp(t1,lf[187]);
if(C_truep(t16)){
t17=t4;
f_6126(t17,t16);}
else{
t17=(C_word)C_eqp(t1,lf[188]);
if(C_truep(t17)){
t18=t4;
f_6126(t18,t17);}
else{
t18=(C_word)C_eqp(t1,lf[189]);
if(C_truep(t18)){
t19=t4;
f_6126(t19,t18);}
else{
t19=(C_word)C_eqp(t1,lf[190]);
if(C_truep(t19)){
t20=t4;
f_6126(t20,t19);}
else{
t20=(C_word)C_eqp(t1,lf[191]);
if(C_truep(t20)){
t21=t4;
f_6126(t21,t20);}
else{
t21=(C_word)C_eqp(t1,lf[192]);
if(C_truep(t21)){
t22=t4;
f_6126(t22,t21);}
else{
t22=(C_word)C_eqp(t1,lf[193]);
if(C_truep(t22)){
t23=t4;
f_6126(t23,t22);}
else{
t23=(C_word)C_eqp(t1,lf[194]);
t24=t4;
f_6126(t24,(C_truep(t23)?t23:(C_word)C_eqp(t1,lf[195])));}}}}}}}}}}}}}}}}}}}}

/* k6124 in k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_6126(C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6126,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6129,a[2]=((C_word*)t0)[10],a[3]=t2,a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t4=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(9),t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[9],lf[157]);
if(C_truep(t2)){
t3=C_mutate(((C_word *)((C_word*)t0)[8])+1,lf[157]);
t4=(C_word)C_i_cdr(((C_word*)t0)[10]);
/* support.scm: 437  loop */
t5=((C_word*)((C_word*)t0)[7])[1];
f_6100(t5,((C_word*)t0)[6],t4);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[9],lf[161]);
if(C_truep(t3)){
t4=(C_word)C_eqp(((C_word*)((C_word*)t0)[8])[1],lf[157]);
if(C_truep(t4)){
t5=(C_word)C_i_cdr(((C_word*)t0)[10]);
/* support.scm: 437  loop */
t6=((C_word*)((C_word*)t0)[7])[1];
f_6100(t6,((C_word*)t0)[6],t5);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6167,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 424  cdar */
((C_proc3)C_retrieve_proc(*((C_word*)lf[162]+1)))(3,*((C_word*)lf[162]+1),t5,((C_word*)t0)[10]);}}
else{
t4=(C_word)C_eqp(((C_word*)t0)[9],lf[163]);
if(C_truep(t4)){
t5=(C_word)C_eqp(((C_word*)((C_word*)t0)[8])[1],lf[157]);
if(C_truep(t5)){
t6=(C_word)C_i_cdr(((C_word*)t0)[10]);
/* support.scm: 437  loop */
t7=((C_word*)((C_word*)t0)[7])[1];
f_6100(t7,((C_word*)t0)[6],t6);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6183,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 426  cdar */
((C_proc3)C_retrieve_proc(*((C_word*)lf[162]+1)))(3,*((C_word*)lf[162]+1),t6,((C_word*)t0)[10]);}}
else{
t5=(C_word)C_eqp(((C_word*)t0)[9],lf[164]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6193,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 428  cdar */
((C_proc3)C_retrieve_proc(*((C_word*)lf[162]+1)))(3,*((C_word*)lf[162]+1),t6,((C_word*)t0)[10]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[9],lf[165]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6202,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
t8=t7;
f_6202(t8,t6);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[9],lf[169]);
if(C_truep(t8)){
t9=t7;
f_6202(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[9],lf[170]);
if(C_truep(t9)){
t10=t7;
f_6202(t10,t9);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[9],lf[147]);
if(C_truep(t10)){
t11=t7;
f_6202(t11,t10);}
else{
t11=(C_word)C_eqp(((C_word*)t0)[9],lf[171]);
if(C_truep(t11)){
t12=t7;
f_6202(t12,t11);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[9],lf[172]);
if(C_truep(t12)){
t13=t7;
f_6202(t13,t12);}
else{
t13=(C_word)C_eqp(((C_word*)t0)[9],lf[173]);
if(C_truep(t13)){
t14=t7;
f_6202(t14,t13);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[9],lf[174]);
t15=t7;
f_6202(t15,(C_truep(t14)?t14:(C_word)C_eqp(((C_word*)t0)[9],lf[175])));}}}}}}}}}}}}}

/* k6200 in k6124 in k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_6202(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6202,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6205,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t4=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(9),t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[6],lf[166]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6232,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 433  cdar */
((C_proc3)C_retrieve_proc(*((C_word*)lf[162]+1)))(3,*((C_word*)lf[162]+1),t3,((C_word*)t0)[7]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[6],lf[167]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6242,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* support.scm: 435  cdar */
((C_proc3)C_retrieve_proc(*((C_word*)lf[162]+1)))(3,*((C_word*)lf[162]+1),t4,((C_word*)t0)[7]);}
else{
t4=(C_word)C_i_car(((C_word*)t0)[7]);
/* support.scm: 436  bomb */
((C_proc4)C_retrieve_proc(*((C_word*)lf[5]+1)))(4,*((C_word*)lf[5]+1),((C_word*)t0)[8],lf[168],t4);}}}}

/* k6240 in k6200 in k6124 in k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 437  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6100(t4,((C_word*)t0)[2],t3);}

/* k6230 in k6200 in k6124 in k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 437  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6100(t4,((C_word*)t0)[2],t3);}

/* k6203 in k6200 in k6124 in k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6205,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6208,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6222,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 431  caar */
((C_proc3)C_retrieve_proc(*((C_word*)lf[160]+1)))(3,*((C_word*)lf[160]+1),t3,((C_word*)t0)[2]);}

/* k6220 in k6203 in k6200 in k6124 in k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6206 in k6203 in k6200 in k6124 in k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6208,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6211,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(61),((C_word*)t0)[3]);}

/* k6209 in k6206 in k6203 in k6200 in k6124 in k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6211,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6218,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 431  cdar */
((C_proc3)C_retrieve_proc(*((C_word*)lf[162]+1)))(3,*((C_word*)lf[162]+1),t2,((C_word*)t0)[2]);}

/* k6216 in k6209 in k6206 in k6203 in k6200 in k6124 in k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6191 in k6124 in k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 437  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6100(t4,((C_word*)t0)[2],t3);}

/* k6181 in k6124 in k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 437  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6100(t4,((C_word*)t0)[2],t3);}

/* k6165 in k6124 in k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 437  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6100(t4,((C_word*)t0)[2],t3);}

/* k6127 in k6124 in k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6144,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 420  caar */
((C_proc3)C_retrieve_proc(*((C_word*)lf[160]+1)))(3,*((C_word*)lf[160]+1),t2,((C_word*)t0)[2]);}

/* k6142 in k6127 in k6124 in k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_assq(t1,lf[159]);
t3=(C_word)C_i_cdr(t2);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),((C_word*)t0)[3],t3,((C_word*)t0)[2]);}

/* k6111 in k6108 in loop in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 437  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6100(t3,((C_word*)t0)[2],t2);}

/* k5938 in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5940,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5943,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5981,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t4=(C_word)C_eqp(((C_word*)((C_word*)t0)[4])[1],lf[157]);
t5=t3;
f_5981(t5,(C_word)C_i_not(t4));}
else{
t4=t3;
f_5981(t4,C_SCHEME_FALSE);}}

/* k5979 in k5938 in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_5981(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5981,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5984,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[154],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6015,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t3=(C_word)C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[157]);
t4=t2;
f_6015(t4,(C_word)C_i_not(t3));}
else{
t3=t2;
f_6015(t3,C_SCHEME_FALSE);}}}

/* k6013 in k5979 in k5938 in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_6015(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6015,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6018,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[155],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6049,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t3=(C_word)C_eqp(((C_word*)((C_word*)t0)[2])[1],lf[157]);
t4=t2;
f_6049(t4,(C_word)C_i_not(t3));}
else{
t3=t2;
f_6049(t3,C_SCHEME_FALSE);}}}

/* k6047 in k6013 in k5979 in k5938 in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_6049(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6049,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6052,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[156],t2);}
else{
t2=((C_word*)t0)[2];
f_5943(2,t2,C_SCHEME_UNDEFINED);}}

/* k6050 in k6047 in k6013 in k5979 in k5938 in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6052,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[4])[1];
t3=(C_word)C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
t5=(C_word)C_slot(t4,C_fix(2));
t6=(C_word)C_a_i_cons(&a,2,t3,t5);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t6,((C_word*)t0)[2]);}

/* k6016 in k6013 in k5979 in k5938 in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_6018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6018,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[4])[1];
t3=(C_word)C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
t5=(C_word)C_slot(t4,C_fix(2));
t6=(C_word)C_a_i_cons(&a,2,t3,t5);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t6,((C_word*)t0)[2]);}

/* k5982 in k5979 in k5938 in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5984,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[4])[1];
t3=(C_word)C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
t5=(C_word)C_slot(t4,C_fix(2));
t6=(C_word)C_a_i_cons(&a,2,t3,t5);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t6,((C_word*)t0)[2]);}

/* k5941 in k5938 in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5943,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5946,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5971,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t4,lf[153],t3);}
else{
t3=t2;
f_5946(2,t3,C_SCHEME_UNDEFINED);}}

/* k5969 in k5941 in k5938 in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_length(((C_word*)((C_word*)t0)[4])[1]);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5944 in k5941 in k5938 in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5949,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5958,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t4,lf[152],t3);}
else{
/* support.scm: 446  newline */
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[3]);}}

/* k5956 in k5944 in k5941 in k5938 in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5958(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_length(((C_word*)((C_word*)t0)[4])[1]);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5947 in k5944 in k5941 in k5938 in k5935 in a5926 in k5920 in ##compiler#display-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 446  newline */
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[2]);}

/* ##compiler#display-line-number-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5855,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5861,tmp=(C_word)a,a+=2,tmp);
/* support.scm: 382  ##sys#hash-table-for-each */
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),t1,t2,C_retrieve(lf[144]));}

/* a5860 in ##compiler#display-line-number-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5861(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5861,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=*((C_word*)lf[11]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5868,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t5,t2,t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5866 in a5860 in ##compiler#display-line-number-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5868,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5871,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[3]);}

/* k5869 in k5866 in a5860 in ##compiler#display-line-number-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5871(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5871,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5874,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5881,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5883,a[2]=t4,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_5883(t11,t7,((C_word*)t0)[2]);}

/* loop742 in k5869 in k5866 in a5860 in ##compiler#display-line-number-database in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_5883(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5883,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[149]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5912,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g758759 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5910 in loop742 in k5869 in k5866 in a5860 in ##compiler#display-line-number-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5912(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5912,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop742755 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5883(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop742755 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_5883(t6,((C_word*)t0)[3],t5);}}

/* k5879 in k5869 in k5866 in a5860 in ##compiler#display-line-number-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5872 in k5869 in k5866 in a5860 in ##compiler#display-line-number-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* ##compiler#find-lambda-container in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5831,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5837,a[2]=t4,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5837(t8,t1,t2);}

/* loop in ##compiler#find-lambda-container in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_5837(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5837,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,((C_word*)t0)[4]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5847,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 378  get */
((C_proc5)C_retrieve_symbol_proc(lf[134]))(5,*((C_word*)lf[134]+1),t4,((C_word*)t0)[2],t2,lf[147]);}}

/* k5845 in loop in ##compiler#find-lambda-container in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm: 379  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5837(t2,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#get-line-2 in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5790(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5790,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5797,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 370  ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t4,C_retrieve(lf[144]),t3);}

/* k5795 in ##compiler#get-line-2 in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5797,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5800,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(C_word)C_i_cdr(t1);
t4=t2;
f_5800(t4,(C_word)C_i_assq(((C_word*)t0)[2],t3));}
else{
t3=t2;
f_5800(t3,C_SCHEME_FALSE);}}

/* k5798 in k5795 in ##compiler#get-line-2 in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_5800(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5800,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5804,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* g714715 */
t3=t2;
f_5804(t3,((C_word*)t0)[3],t1);}
else{
/* support.scm: 373  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}}

/* g714 in k5798 in k5795 in ##compiler#get-line-2 in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_5804(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5804,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(((C_word*)t0)[2]);
t4=(C_word)C_i_cdr(t2);
/* support.scm: 372  values */
C_values(4,0,t1,t3,t4);}

/* ##compiler#get-line in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5780(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5780,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
/* support.scm: 366  get */
((C_proc5)C_retrieve_symbol_proc(lf[134]))(5,*((C_word*)lf[134]+1),t1,C_retrieve(lf[144]),t3,t2);}

/* ##compiler#get-list in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5771(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5771,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5775,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 359  get */
((C_proc5)C_retrieve_symbol_proc(lf[134]))(5,*((C_word*)lf[134]+1),t5,t2,t3,t4);}

/* k5773 in ##compiler#get-list in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5775(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* ##compiler#count! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5714(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr5r,(void*)f_5714r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_5714r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_5714r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5718,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 350  ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t6,t2,t3);}

/* k5716 in ##compiler#count! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5718(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5718,2,t0,t1);}
t2=(C_word)C_i_pairp(((C_word*)t0)[6]);
t3=(C_truep(t2)?(C_word)C_i_car(((C_word*)t0)[6]):C_fix(1));
if(C_truep(t1)){
t4=(C_word)C_i_assq(((C_word*)t0)[5],t1);
if(C_truep(t4)){
t5=(C_word)C_slot(t4,C_fix(1));
t6=(C_word)C_fixnum_plus(t5,t3);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_setslot(t4,C_fix(1),t6));}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5748,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_slot(t1,C_fix(1));
/* support.scm: 355  alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[121]))(5,*((C_word*)lf[121]+1),t5,((C_word*)t0)[5],t3,t6);}}
else{
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
t5=(C_word)C_a_i_list(&a,1,t4);
/* support.scm: 356  ##sys#hash-table-set! */
((C_proc5)C_retrieve_symbol_proc(lf[139]))(5,*((C_word*)lf[139]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t5);}}

/* k5746 in k5716 in ##compiler#count! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t1));}

/* ##compiler#collect! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5662(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5662,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5666,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 342  ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t6,t2,t3);}

/* k5664 in ##compiler#collect! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5666(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5666,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_assq(((C_word*)t0)[6],t1);
if(C_truep(t2)){
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_setslot(t2,C_fix(1),t4));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5693,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
t5=(C_word)C_slot(t1,C_fix(1));
/* support.scm: 346  alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[121]))(5,*((C_word*)lf[121]+1),t3,((C_word*)t0)[6],t4,t5);}}
else{
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,1,t2);
/* support.scm: 347  ##sys#hash-table-set! */
((C_proc5)C_retrieve_symbol_proc(lf[139]))(5,*((C_word*)lf[139]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t3);}}

/* k5691 in k5664 in ##compiler#collect! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t1));}

/* ##compiler#put! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5616(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5616,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5620,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 334  ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t6,t2,t3);}

/* k5618 in ##compiler#put! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5620(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5620,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_assq(((C_word*)t0)[6],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_setslot(t2,C_fix(1),((C_word*)t0)[4]));}
else{
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5642,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(t1,C_fix(1));
/* support.scm: 338  alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[121]))(5,*((C_word*)lf[121]+1),t3,((C_word*)t0)[6],((C_word*)t0)[4],t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,t2);
/* support.scm: 339  ##sys#hash-table-set! */
((C_proc5)C_retrieve_symbol_proc(lf[139]))(5,*((C_word*)lf[139]+1),((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2],t3);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}}

/* k5640 in k5618 in ##compiler#put! in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t1));}

/* ##compiler#get-all in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5598(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_5598r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5598r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5598r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5602,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 328  ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t5,t2,t3);}

/* k5600 in ##compiler#get-all in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5602,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5610,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 330  filter-map */
((C_proc4)C_retrieve_symbol_proc(lf[137]))(4,*((C_word*)lf[137]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* a5609 in k5600 in ##compiler#get-all in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5610(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5610,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_assq(t2,((C_word*)t0)[2]));}

/* ##compiler#get in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5580(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5580,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5584,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 322  ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t5,t2,t3);}

/* k5582 in ##compiler#get in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_assq(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?(C_word)C_slot(t2,C_fix(1)):C_SCHEME_FALSE));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5331,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5335,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5489,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_5489(t7,t3,C_retrieve(lf[133]));}
else{
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* loop499 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_5489(C_word t0,C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5489,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5567,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5528,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_a_i_list(&a,1,lf[132]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5503,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t6))){
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t5,t4,lf[125],C_SCHEME_TRUE);}
else{
t8=(C_word)C_i_cdr(t6);
if(C_truep((C_word)C_i_nullp(t8))){
t9=(C_word)C_i_car(t6);
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t5,t4,lf[125],t9);}
else{
/* ##sys#error */
t9=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,lf[0],t6);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5501 in loop499 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[125],t1);}

/* k5526 in loop499 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5528,2,t0,t1);}
if(C_truep((C_word)C_i_memq(((C_word*)t0)[6],C_retrieve(lf[128])))){
t2=(C_word)C_a_i_list(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5539,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[5],((C_word*)t0)[6],lf[129],C_SCHEME_TRUE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[5],((C_word*)t0)[6],lf[129],t5);}
else{
/* ##sys#error */
t5=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}
else{
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5489(t3,((C_word*)t0)[2],t2);}}

/* k5537 in k5526 in loop499 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[129],t1);}

/* k5565 in loop499 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5489(t3,((C_word*)t0)[2],t2);}

/* k5333 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5338,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5398,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_5398(t6,t2,C_retrieve(lf[131]));}

/* loop549 in k5333 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_5398(C_word t0,C_word t1,C_word t2){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5398,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5476,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5437,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_a_i_list(&a,1,lf[130]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5412,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t6))){
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t5,t4,lf[125],C_SCHEME_TRUE);}
else{
t8=(C_word)C_i_cdr(t6);
if(C_truep((C_word)C_i_nullp(t8))){
t9=(C_word)C_i_car(t6);
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t5,t4,lf[125],t9);}
else{
/* ##sys#error */
t9=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,lf[0],t6);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5410 in loop549 in k5333 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[125],t1);}

/* k5435 in loop549 in k5333 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5437,2,t0,t1);}
if(C_truep((C_word)C_i_memq(((C_word*)t0)[6],C_retrieve(lf[128])))){
t2=(C_word)C_a_i_list(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5448,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[5],((C_word*)t0)[6],lf[129],C_SCHEME_TRUE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[5],((C_word*)t0)[6],lf[129],t5);}
else{
/* ##sys#error */
t5=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}
else{
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5398(t3,((C_word*)t0)[2],t2);}}

/* k5446 in k5435 in loop549 in k5333 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[129],t1);}

/* k5474 in loop549 in k5333 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5398(t3,((C_word*)t0)[2],t2);}

/* k5336 in k5333 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5338,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5343,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_5343(t5,((C_word*)t0)[2],C_retrieve(lf[127]));}

/* loop598 in k5336 in k5333 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_fcall f_5343(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5343,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5385,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_a_i_list(&a,1,lf[123]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5357,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t3,t4,lf[125],C_SCHEME_TRUE);}
else{
t7=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t7))){
t8=(C_word)C_i_car(t5);
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t3,t4,lf[125],t8);}
else{
/* ##sys#error */
t8=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,lf[0],t5);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5355 in loop598 in k5336 in k5333 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[125],t1);}

/* k5383 in loop598 in k5336 in k5333 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5343(t3,((C_word*)t0)[2],t2);}

/* k5329 in ##compiler#initialize-analysis-database in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##compiler#expand-profile-lambda in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5186(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5186,5,t0,t1,t2,t3,t4);}
t5=C_retrieve(lf[113]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5190,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* support.scm: 282  gensym */
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t6);}

/* k5188 in ##compiler#expand-profile-lambda in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5190,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5194,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* support.scm: 283  alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[121]))(5,*((C_word*)lf[121]+1),t2,((C_word*)t0)[6],((C_word*)t0)[2],C_retrieve(lf[114]));}

/* k5192 in k5188 in ##compiler#expand-profile-lambda in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5194(C_word c,C_word t0,C_word t1){
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
C_word ab[96],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5194,2,t0,t1);}
t2=C_mutate((C_word*)lf[114]+1 /* (set! profile-lambda-list ...) */,t1);
t3=(C_word)C_fixnum_increase(((C_word*)t0)[6]);
t4=C_mutate((C_word*)lf[113]+1 /* (set! profile-lambda-index ...) */,t3);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,lf[82],t5);
t7=(C_word)C_a_i_cons(&a,2,C_retrieve(lf[115]),C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,t6,t7);
t9=(C_word)C_a_i_cons(&a,2,lf[116],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t10);
t12=(C_word)C_a_i_cons(&a,2,lf[117],t11);
t13=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],C_SCHEME_END_OF_LIST);
t14=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t13);
t15=(C_word)C_a_i_cons(&a,2,lf[117],t14);
t16=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t17=(C_word)C_a_i_cons(&a,2,t15,t16);
t18=(C_word)C_a_i_cons(&a,2,lf[118],t17);
t19=(C_word)C_a_i_cons(&a,2,t18,C_SCHEME_END_OF_LIST);
t20=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t19);
t21=(C_word)C_a_i_cons(&a,2,lf[117],t20);
t22=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],C_SCHEME_END_OF_LIST);
t23=(C_word)C_a_i_cons(&a,2,lf[82],t22);
t24=(C_word)C_a_i_cons(&a,2,C_retrieve(lf[115]),C_SCHEME_END_OF_LIST);
t25=(C_word)C_a_i_cons(&a,2,t23,t24);
t26=(C_word)C_a_i_cons(&a,2,lf[119],t25);
t27=(C_word)C_a_i_cons(&a,2,t26,C_SCHEME_END_OF_LIST);
t28=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t27);
t29=(C_word)C_a_i_cons(&a,2,lf[117],t28);
t30=(C_word)C_a_i_cons(&a,2,t29,C_SCHEME_END_OF_LIST);
t31=(C_word)C_a_i_cons(&a,2,t21,t30);
t32=(C_word)C_a_i_cons(&a,2,t12,t31);
t33=(C_word)C_a_i_cons(&a,2,lf[120],t32);
t34=(C_word)C_a_i_cons(&a,2,t33,C_SCHEME_END_OF_LIST);
t35=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t34);
t36=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t36+1)))(2,t36,(C_word)C_a_i_cons(&a,2,lf[117],t35));}

/* ##compiler#llist-length in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5183(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5183,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_u_i_length(t2));}

/* ##compiler#process-lambda-documentation in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5180(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5180,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5073(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5073,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5077,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* call-with-current-continuation */
((C_proc3)C_retrieve_proc(*((C_word*)lf[107]+1)))(3,*((C_word*)lf[107]+1),t3,t4);}

/* a5081 in ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5082(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5082,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5088,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5113,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* with-exception-handler */
((C_proc4)C_retrieve_symbol_proc(lf[106]))(4,*((C_word*)lf[106]+1),t1,t3,t4);}

/* a5112 in a5081 in ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5119,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5167,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a5166 in a5112 in a5081 in ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5167(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_5167r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5167r(t0,t1,t2);}}

static void C_ccall f_5167r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5173,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* k456461 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a5172 in a5166 in a5112 in a5081 in ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5173,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a5118 in a5112 in a5081 in ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5119,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5123,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5151,tmp=(C_word)a,a+=2,tmp);
/* support.scm: 264  with-input-from-string */
((C_proc4)C_retrieve_symbol_proc(lf[105]))(4,*((C_word*)lf[105]+1),t2,((C_word*)t0)[2],t3);}

/* a5150 in a5118 in a5112 in a5081 in ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5151,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5157,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5165,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 264  read */
((C_proc2)C_retrieve_proc(*((C_word*)lf[101]+1)))(2,*((C_word*)lf[101]+1),t3);}

/* k5163 in a5150 in a5118 in a5112 in a5081 in ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 264  unfold */
((C_proc6)C_retrieve_symbol_proc(lf[102]))(6,*((C_word*)lf[102]+1),((C_word*)t0)[3],*((C_word*)lf[103]+1),*((C_word*)lf[104]+1),((C_word*)t0)[2],t1);}

/* a5156 in a5150 in a5118 in a5112 in a5081 in ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5157(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5157,3,t0,t1,t2);}
/* support.scm: 264  read */
((C_proc2)C_retrieve_proc(*((C_word*)lf[101]+1)))(2,*((C_word*)lf[101]+1),t1);}

/* k5121 in a5118 in a5112 in a5081 in ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5123,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[98]);}
else{
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_car(t1));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5145,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#append */
t4=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,C_SCHEME_END_OF_LIST);}}}

/* k5143 in k5121 in a5118 in a5112 in a5081 in ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5145,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[99],t1));}

/* a5087 in a5081 in ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5088(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5088,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5094,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* k456461 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a5093 in a5087 in a5081 in ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5094,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5102,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5105,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 261  exn? */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[3]);}

/* k5103 in a5093 in a5087 in a5081 in ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* support.scm: 262  exn-msg */
t2=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* support.scm: 263  ->string */
((C_proc3)C_retrieve_symbol_proc(lf[62]))(3,*((C_word*)lf[62]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k5100 in a5093 in a5087 in a5081 in ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 259  quit */
((C_proc5)C_retrieve_proc(*((C_word*)lf[24]+1)))(5,*((C_word*)lf[24]+1),((C_word*)t0)[3],lf[97],((C_word*)t0)[2],t1);}

/* k5075 in ##compiler#string->expr in k5070 in k5067 in k4005 in k4002 */
static void C_ccall f_5077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* g459460 */
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* ##compiler#canonicalize-begin-body in k4005 in k4002 */
static void C_ccall f_4972(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4972,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4978,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4978(t6,t1,t2);}

/* loop in ##compiler#canonicalize-begin-body in k4005 in k4002 */
static void C_fcall f_4978(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4978,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[90]);}
else{
t3=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_car(t2));}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_equalp(t4,lf[91]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5006,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=t6;
f_5006(t7,t5);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5055,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 248  constant? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[81]+1)))(3,*((C_word*)lf[81]+1),t7,t4);}}}}

/* k5053 in loop in ##compiler#canonicalize-begin-body in k4005 in k4002 */
static void C_ccall f_5055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
f_5006(t3,t2);}
else{
t2=((C_word*)t0)[3];
f_5006(t2,(C_word)C_i_equalp(((C_word*)t0)[2],lf[95]));}}

/* k5004 in loop in ##compiler#canonicalize-begin-body in k4005 in k4002 */
static void C_fcall f_5006(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5006,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 250  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4978(t3,((C_word*)t0)[2],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5044,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 251  gensym */
((C_proc3)C_retrieve_symbol_proc(lf[93]))(3,*((C_word*)lf[93]+1),t2,lf[94]);}}

/* k5042 in k5004 in loop in ##compiler#canonicalize-begin-body in k4005 in k4002 */
static void C_ccall f_5044(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5044,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,t1,t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5032,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* support.scm: 252  loop */
t8=((C_word*)((C_word*)t0)[2])[1];
f_4978(t8,t6,t7);}

/* k5030 in k5042 in k5004 in loop in ##compiler#canonicalize-begin-body in k4005 in k4002 */
static void C_ccall f_5032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5032,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[92],t3));}

/* ##compiler#basic-literal? in k4005 in k4002 */
static void C_ccall f_4912(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4912,3,t0,t1,t2);}
t3=(C_word)C_i_nullp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_i_symbolp(t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4928,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 233  constant? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[81]+1)))(3,*((C_word*)lf[81]+1),t5,t2);}}}

/* k4926 in ##compiler#basic-literal? in k4005 in k4002 */
static void C_ccall f_4928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4928,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_vectorp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4970,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 234  vector->list */
((C_proc3)C_retrieve_proc(*((C_word*)lf[88]+1)))(3,*((C_word*)lf[88]+1),t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_4934(2,t3,C_SCHEME_FALSE);}}}

/* k4968 in k4926 in ##compiler#basic-literal? in k4005 in k4002 */
static void C_ccall f_4970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 234  every */
((C_proc4)C_retrieve_symbol_proc(lf[87]))(4,*((C_word*)lf[87]+1),((C_word*)t0)[2],*((C_word*)lf[86]+1),t1);}

/* k4932 in k4926 in ##compiler#basic-literal? in k4005 in k4002 */
static void C_ccall f_4934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4934,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4949,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
/* support.scm: 236  basic-literal? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[86]+1)))(3,*((C_word*)lf[86]+1),t2,t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* k4947 in k4932 in k4926 in ##compiler#basic-literal? in k4005 in k4002 */
static void C_ccall f_4949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* support.scm: 237  basic-literal? */
((C_proc3)C_retrieve_proc(*((C_word*)lf[86]+1)))(3,*((C_word*)lf[86]+1),((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#immediate? in k4005 in k4002 */
static void C_ccall f_4866(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4866,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4870,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4910,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 223  big-fixnum? */
((C_proc3)C_retrieve_symbol_proc(lf[85]))(3,*((C_word*)lf[85]+1),t4,t2);}
else{
t4=t3;
f_4870(t4,C_SCHEME_FALSE);}}

/* k4908 in ##compiler#immediate? in k4005 in k4002 */
static void C_ccall f_4910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4870(t2,(C_word)C_i_not(t1));}

/* k4868 in ##compiler#immediate? in k4005 in k4002 */
static void C_fcall f_4870(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(C_word)C_eqp(C_SCHEME_UNDEFINED,((C_word*)t0)[2]);
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_i_nullp(((C_word*)t0)[2]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_eofp(((C_word*)t0)[2]);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(C_word)C_charp(((C_word*)t0)[2]);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_truep(t5)?t5:(C_word)C_booleanp(((C_word*)t0)[2])));}}}}}

/* ##compiler#collapsable-literal? in k4005 in k4002 */
static void C_ccall f_4836(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4836,3,t0,t1,t2);}
t3=(C_word)C_booleanp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_charp(t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(C_word)C_eofp(t2);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_i_numberp(t2);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?t6:(C_word)C_i_symbolp(t2)));}}}}

/* ##compiler#constant? in k4005 in k4002 */
static void C_ccall f_4790(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_4790,3,t0,t1,t2);}
t3=(C_word)C_i_numberp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_charp(t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(C_word)C_i_stringp(t2);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_booleanp(t2);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=(C_word)C_eofp(t2);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t8=(C_word)C_i_car(t2);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_eqp(lf[82],t8));}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}}}}}}

/* ##compiler#sort-symbols in k4005 in k4002 */
static void C_ccall f_4770(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4770,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4776,tmp=(C_word)a,a+=2,tmp);
/* support.scm: 202  sort */
((C_proc4)C_retrieve_symbol_proc(lf[80]))(4,*((C_word*)lf[80]+1),t1,t2,t3);}

/* a4775 in ##compiler#sort-symbols in k4005 in k4002 */
static void C_ccall f_4776(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4776,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4784,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 202  symbol->string */
((C_proc3)C_retrieve_proc(*((C_word*)lf[43]+1)))(3,*((C_word*)lf[43]+1),t4,t2);}

/* k4782 in a4775 in ##compiler#sort-symbols in k4005 in k4002 */
static void C_ccall f_4784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4784,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4788,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* support.scm: 202  symbol->string */
((C_proc3)C_retrieve_proc(*((C_word*)lf[43]+1)))(3,*((C_word*)lf[43]+1),t2,((C_word*)t0)[2]);}

/* k4786 in k4782 in a4775 in ##compiler#sort-symbols in k4005 in k4002 */
static void C_ccall f_4788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 202  string<? */
((C_proc4)C_retrieve_proc(*((C_word*)lf[79]+1)))(4,*((C_word*)lf[79]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##compiler#follow-without-loop in k4005 in k4002 */
static void C_ccall f_4739(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4739,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4745,a[2]=t3,a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4745(t8,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop in ##compiler#follow-without-loop in k4005 in k4002 */
static void C_fcall f_4745(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4745,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_member(t2,t3))){
/* support.scm: 198  abort */
t4=((C_word*)t0)[4];
((C_proc2)C_retrieve_proc(t4))(2,t4,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4760,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 199  proc */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t4);}}

/* a4759 in loop in ##compiler#follow-without-loop in k4005 in k4002 */
static void C_ccall f_4760(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4760,3,t0,t1,t2);}
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
/* support.scm: 199  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4745(t4,t1,t2,t3);}

/* ##compiler#fold-inner in k4005 in k4002 */
static void C_ccall f_4676(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4676,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4690,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 188  reverse */
((C_proc3)C_retrieve_proc(*((C_word*)lf[76]+1)))(3,*((C_word*)lf[76]+1),t5,t3);}}

/* k4688 in ##compiler#fold-inner in k4005 in k4002 */
static void C_ccall f_4690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4690,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4692,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4692(t5,((C_word*)t0)[2],t1);}

/* fold in k4688 in ##compiler#fold-inner in k4005 in k4002 */
static void C_fcall f_4692(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4692,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_i_cadr(t2);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_a_i_list(&a,2,t4,t5);
C_apply(4,0,t1,((C_word*)t0)[3],t6);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4721,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cdr(t2);
/* support.scm: 193  fold */
t10=t4;
t11=t5;
t1=t10;
t2=t11;
goto loop;}}

/* k4719 in fold in k4688 in ##compiler#fold-inner in k4005 in k4002 */
static void C_ccall f_4721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4721,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* ##compiler#close-checked-input-file in k4005 in k4002 */
static void C_ccall f_4664(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4664,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_string_equal_p(t3,lf[73]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
/* support.scm: 183  close-input-port */
((C_proc3)C_retrieve_proc(*((C_word*)lf[74]+1)))(3,*((C_word*)lf[74]+1),t1,t2);}}

/* ##compiler#check-and-open-input-file in k4005 in k4002 */
static void C_ccall f_4617(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_4617r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_4617r(t0,t1,t2,t3);}}

static void C_ccall f_4617r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
if(C_truep((C_word)C_i_string_equal_p(t2,lf[66]))){
/* support.scm: 177  current-input-port */
((C_proc2)C_retrieve_proc(*((C_word*)lf[67]+1)))(2,*((C_word*)lf[67]+1),t1);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4633,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 178  file-exists? */
((C_proc3)C_retrieve_symbol_proc(lf[71]))(3,*((C_word*)lf[71]+1),t4,t2);}}

/* k4631 in ##compiler#check-and-open-input-file in k4005 in k4002 */
static void C_ccall f_4633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4633,2,t0,t1);}
if(C_truep(t1)){
/* support.scm: 178  open-input-file */
((C_proc3)C_retrieve_proc(*((C_word*)lf[68]+1)))(3,*((C_word*)lf[68]+1),((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=(C_word)C_vemptyp(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4645,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_4645(t4,t2);}
else{
t4=(C_word)C_i_vector_ref(((C_word*)t0)[2],C_fix(0));
t5=t3;
f_4645(t5,(C_word)C_i_not(t4));}}}

/* k4643 in k4631 in ##compiler#check-and-open-input-file in k4005 in k4002 */
static void C_fcall f_4645(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* support.scm: 179  quit */
((C_proc4)C_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),((C_word*)t0)[4],lf[69],((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_vector_ref(((C_word*)t0)[2],C_fix(0));
/* support.scm: 180  quit */
((C_proc5)C_retrieve_proc(*((C_word*)lf[24]+1)))(5,*((C_word*)lf[24]+1),((C_word*)t0)[4],lf[70],((C_word*)t0)[3],t2);}}

/* ##compiler#words->bytes in k4005 in k4002 */
static void C_ccall f_4610(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4610,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub273(C_SCHEME_UNDEFINED,t3));}

/* ##compiler#words in k4005 in k4002 */
static void C_ccall f_4603(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4603,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub269(C_SCHEME_UNDEFINED,t3));}

/* ##compiler#valid-c-identifier? in k4005 in k4002 */
static void C_ccall f_4547(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4547,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4551,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4601,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 158  ->string */
((C_proc3)C_retrieve_symbol_proc(lf[62]))(3,*((C_word*)lf[62]+1),t4,t2);}

/* k4599 in ##compiler#valid-c-identifier? in k4005 in k4002 */
static void C_ccall f_4601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=C_retrieve(lf[56]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4549 in ##compiler#valid-c-identifier? in k4005 in k4002 */
static void C_ccall f_4551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4551,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(C_word)C_i_car(t1);
t3=(C_word)C_u_i_char_alphabeticp(t2);
t4=(C_truep(t3)?t3:(C_word)C_eqp(C_make_character(95),t2));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4574,tmp=(C_word)a,a+=2,tmp);
t6=(C_word)C_i_cdr(t1);
/* support.scm: 162  any */
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),((C_word*)t0)[2],t5,t6);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a4573 in k4549 in ##compiler#valid-c-identifier? in k4005 in k4002 */
static void C_ccall f_4574(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4574,3,t0,t1,t2);}
t3=(C_word)C_u_i_char_alphabeticp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_u_i_char_numericp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:(C_word)C_eqp(C_make_character(95),t2)));}}

/* ##compiler#c-ify-string in k4005 in k4002 */
static void C_ccall f_4453(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4453,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4465,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4469,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* string->list */
t5=C_retrieve(lf[56]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4467 in ##compiler#c-ify-string in k4005 in k4002 */
static void C_ccall f_4469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4469,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4471,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4471(t5,((C_word*)t0)[2],t1);}

/* loop in k4467 in ##compiler#c-ify-string in k4005 in k4002 */
static void C_fcall f_4471(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4471,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[53]);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_fix((C_word)C_character_code(t3));
t5=(C_word)C_fixnum_lessp(t4,C_fix(32));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4493,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_4493(t7,t5);}
else{
t7=(C_word)C_fixnum_greater_or_equal_p(t4,C_fix(127));
t8=t6;
f_4493(t8,(C_truep(t7)?t7:(C_word)C_i_memq(t3,lf[59])));}}}

/* k4491 in loop in k4467 in ##compiler#c-ify-string in k4005 in k4002 */
static void C_fcall f_4493(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4493,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4500,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_lessp(((C_word*)t0)[3],C_fix(8)))){
t3=t2;
f_4500(t3,lf[57]);}
else{
t3=(C_word)C_fixnum_lessp(((C_word*)t0)[3],C_fix(64));
t4=t2;
f_4500(t4,(C_truep(t3)?lf[58]:C_SCHEME_END_OF_LIST));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* support.scm: 155  loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4471(t4,t2,t3);}}

/* k4530 in k4491 in loop in k4467 in ##compiler#c-ify-string in k4005 in k4002 */
static void C_ccall f_4532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4532,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k4498 in k4491 in loop in k4467 in ##compiler#c-ify-string in k4005 in k4002 */
static void C_fcall f_4500(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4500,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4504,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4516,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* support.scm: 153  number->string */
C_number_to_string(4,0,t3,((C_word*)t0)[2],C_fix(8));}

/* k4514 in k4498 in k4491 in loop in k4467 in ##compiler#c-ify-string in k4005 in k4002 */
static void C_ccall f_4516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* string->list */
t2=C_retrieve(lf[56]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4502 in k4498 in k4491 in loop in k4467 in ##compiler#c-ify-string in k4005 in k4002 */
static void C_ccall f_4504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4508,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* support.scm: 154  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4471(t4,t2,t3);}

/* k4506 in k4502 in k4498 in k4491 in loop in k4467 in ##compiler#c-ify-string in k4005 in k4002 */
static void C_ccall f_4508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 149  append */
((C_proc6)C_retrieve_proc(*((C_word*)lf[54]+1)))(6,*((C_word*)lf[54]+1),((C_word*)t0)[4],lf[55],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4463 in ##compiler#c-ify-string in k4005 in k4002 */
static void C_ccall f_4465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4465,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_make_character(34),t1);
/* list->string */
t3=C_retrieve(lf[52]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* ##compiler#build-lambda-list in k4005 in k4002 */
static void C_ccall f_4409(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4409,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4415,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4415(t8,t1,t2,t3);}

/* loop in ##compiler#build-lambda-list in k4005 in k4002 */
static void C_fcall f_4415(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4415,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
t5=(C_truep(t4)?t4:(C_word)C_i_nullp(t2));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?t6:C_SCHEME_END_OF_LIST));}
else{
t6=(C_word)C_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4439,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_i_cdr(t2);
t9=(C_word)C_fixnum_decrease(t3);
/* support.scm: 135  loop */
t12=t7;
t13=t8;
t14=t9;
t1=t12;
t2=t13;
t3=t14;
goto loop;}}

/* k4437 in loop in ##compiler#build-lambda-list in k4005 in k4002 */
static void C_ccall f_4439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4439,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* ##compiler#symbolify in k4005 in k4002 */
static void C_ccall f_4378(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4378,3,t0,t1,t2);}
if(C_truep((C_word)C_i_symbolp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_i_stringp(t2))){
/* support.scm: 129  string->symbol */
((C_proc3)C_retrieve_proc(*((C_word*)lf[47]+1)))(3,*((C_word*)lf[47]+1),t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4401,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[45]))(2,*((C_word*)lf[45]+1),t3);}}}

/* k4399 in ##compiler#symbolify in k4005 in k4002 */
static void C_ccall f_4401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4404,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2],t1);}

/* k4402 in k4399 in ##compiler#symbolify in k4005 in k4002 */
static void C_ccall f_4404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4407,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[44]))(3,*((C_word*)lf[44]+1),t2,((C_word*)t0)[2]);}

/* k4405 in k4402 in k4399 in ##compiler#symbolify in k4005 in k4002 */
static void C_ccall f_4407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 130  string->symbol */
((C_proc3)C_retrieve_proc(*((C_word*)lf[47]+1)))(3,*((C_word*)lf[47]+1),((C_word*)t0)[2],t1);}

/* ##compiler#stringify in k4005 in k4002 */
static void C_ccall f_4351(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4351,3,t0,t1,t2);}
if(C_truep((C_word)C_i_stringp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
/* support.scm: 124  symbol->string */
((C_proc3)C_retrieve_proc(*((C_word*)lf[43]+1)))(3,*((C_word*)lf[43]+1),t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4370,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[45]))(2,*((C_word*)lf[45]+1),t3);}}}

/* k4368 in ##compiler#stringify in k4005 in k4002 */
static void C_ccall f_4370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4373,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2],t1);}

/* k4371 in k4368 in ##compiler#stringify in k4005 in k4002 */
static void C_ccall f_4373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[44]))(3,*((C_word*)lf[44]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##compiler#posq in k4005 in k4002 */
static void C_ccall f_4315(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4315,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4321,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_4321(t4,t3,C_fix(0)));}

/* loop in ##compiler#posq in k4005 in k4002 */
static C_word C_fcall f_4321(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
loop:
C_stack_check;
if(C_truep((C_word)C_i_nullp(t1))){
return(C_SCHEME_FALSE);}
else{
t3=(C_word)C_i_car(t1);
t4=(C_word)C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t2);}
else{
t5=(C_word)C_i_cdr(t1);
t6=(C_word)C_fixnum_increase(t2);
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* ##compiler#check-signature in k4005 in k4002 */
static void C_ccall f_4247(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4247,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4250,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4271,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4271(t9,t1,t3,t4);}

/* loop in ##compiler#check-signature in k4005 in k4002 */
static void C_fcall f_4271(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4271,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
/* support.scm: 108  err */
t4=((C_word*)t0)[3];
f_4250(t4,t1);}}
else{
t4=(C_word)C_i_symbolp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
/* support.scm: 110  err */
t5=((C_word*)t0)[3];
f_4250(t5,t1);}
else{
t5=(C_word)C_i_cdr(t2);
t6=(C_word)C_i_cdr(t3);
/* support.scm: 111  loop */
t8=t1;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}}

/* err in ##compiler#check-signature in k4005 in k4002 */
static void C_fcall f_4250(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4250,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4258,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 105  real-name */
((C_proc3)C_retrieve_symbol_proc(lf[40]))(3,*((C_word*)lf[40]+1),t2,((C_word*)t0)[2]);}

/* k4256 in err in ##compiler#check-signature in k4005 in k4002 */
static void C_ccall f_4258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4258,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4262,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* support.scm: 106  map-llist */
((C_proc4)C_retrieve_proc(*((C_word*)lf[37]+1)))(4,*((C_word*)lf[37]+1),t2,C_retrieve(lf[40]),t3);}

/* k4260 in k4256 in err in ##compiler#check-signature in k4005 in k4002 */
static void C_ccall f_4262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 104  quit */
((C_proc5)C_retrieve_proc(*((C_word*)lf[24]+1)))(5,*((C_word*)lf[24]+1),((C_word*)t0)[3],lf[39],((C_word*)t0)[2],t1);}

/* map-llist in k4005 in k4002 */
static void C_ccall f_4204(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4204,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4210,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4210(t7,t1,t3);}

/* loop in map-llist in k4005 in k4002 */
static void C_fcall f_4210(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4210,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
/* support.scm: 99   proc */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4233,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
/* support.scm: 100  proc */
t5=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}}}

/* k4231 in loop in map-llist in k4005 in k4002 */
static void C_ccall f_4233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4233,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4237,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* support.scm: 100  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4210(t4,t2,t3);}

/* k4235 in k4231 in loop in map-llist in k4005 in k4002 */
static void C_ccall f_4237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4237,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* ##compiler#emit-syntax-trace-info in k4005 in k4002 */
static void C_ccall f_4201(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4201,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_emit_syntax_trace_info(t2,t3,C_retrieve(lf[29])));}

/* ##sys#syntax-error-hook in k4005 in k4002 */
static void C_ccall f_4156(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_4156r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4156r(t0,t1,t2,t3);}}

static void C_ccall f_4156r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(9);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4160,a[2]=t4,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 78   current-error-port */
((C_proc2)C_retrieve_symbol_proc(lf[22]))(2,*((C_word*)lf[22]+1),t6);}

/* k4158 in ##sys#syntax-error-hook in k4005 in k4002 */
static void C_ccall f_4160(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4160,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4163,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)((C_word*)t0)[2])[1]))){
t3=((C_word*)((C_word*)t0)[2])[1];
t4=(C_word)C_i_car(((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=t2;
f_4163(t8,t3);}
else{
t3=t2;
f_4163(t3,C_SCHEME_FALSE);}}

/* k4161 in k4158 in ##sys#syntax-error-hook in k4005 in k4002 */
static void C_fcall f_4163(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4163,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4166,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
/* support.scm: 85   fprintf */
((C_proc6)C_retrieve_symbol_proc(lf[20]))(6,*((C_word*)lf[20]+1),t2,((C_word*)t0)[4],lf[33],t1,((C_word*)((C_word*)t0)[2])[1]);}
else{
/* support.scm: 86   fprintf */
((C_proc5)C_retrieve_symbol_proc(lf[20]))(5,*((C_word*)lf[20]+1),t2,((C_word*)t0)[4],lf[34],((C_word*)((C_word*)t0)[2])[1]);}}

/* k4164 in k4161 in k4158 in ##sys#syntax-error-hook in k4005 in k4002 */
static void C_ccall f_4166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4166,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4169,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4177,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* a4176 in k4164 in k4161 in k4158 in ##sys#syntax-error-hook in k4005 in k4002 */
static void C_ccall f_4177(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4177,3,t0,t1,t2);}
t3=C_retrieve(lf[20]);
/* g108109 */
t4=t3;
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,((C_word*)t0)[2],lf[31],t2);}

/* k4167 in k4164 in k4161 in k4158 in ##sys#syntax-error-hook in k4005 in k4002 */
static void C_ccall f_4169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4172,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 88   print-call-chain */
((C_proc6)C_retrieve_symbol_proc(lf[28]))(6,*((C_word*)lf[28]+1),t2,((C_word*)t0)[2],C_fix(0),C_retrieve(lf[29]),lf[30]);}

/* k4170 in k4167 in k4164 in k4161 in k4158 in ##sys#syntax-error-hook in k4005 in k4002 */
static void C_ccall f_4172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 89   exit */
((C_proc3)C_retrieve_symbol_proc(lf[25]))(3,*((C_word*)lf[25]+1),((C_word*)t0)[2],C_fix(70));}

/* quit in k4005 in k4002 */
static void C_ccall f_4137(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4137r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4137r(t0,t1,t2,t3);}}

static void C_ccall f_4137r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4141,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 71   current-error-port */
((C_proc2)C_retrieve_symbol_proc(lf[22]))(2,*((C_word*)lf[22]+1),t4);}

/* k4139 in quit in k4005 in k4002 */
static void C_ccall f_4141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4141,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4144,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4154,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 72   string-append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[7]+1)))(4,*((C_word*)lf[7]+1),t3,lf[26],((C_word*)t0)[2]);}

/* k4152 in k4139 in quit in k4005 in k4002 */
static void C_ccall f_4154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(6,0,((C_word*)t0)[4],C_retrieve(lf[20]),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4142 in k4139 in quit in k4005 in k4002 */
static void C_ccall f_4144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4144,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4147,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 73   newline */
((C_proc3)C_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[2]);}

/* k4145 in k4142 in k4139 in quit in k4005 in k4002 */
static void C_ccall f_4147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 74   exit */
((C_proc3)C_retrieve_symbol_proc(lf[25]))(3,*((C_word*)lf[25]+1),((C_word*)t0)[2],C_fix(1));}

/* ##compiler#compiler-warning in k4005 in k4002 */
static void C_ccall f_4108(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4108r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4108r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4108r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4115,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[23]))){
t6=(C_word)C_i_memq(t2,*((C_word*)lf[4]+1));
t7=t5;
f_4115(t7,(C_word)C_i_not(t6));}
else{
t6=t5;
f_4115(t6,C_SCHEME_FALSE);}}

/* k4113 in ##compiler#compiler-warning in k4005 in k4002 */
static void C_fcall f_4115(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4115,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* support.scm: 66   current-error-port */
((C_proc2)C_retrieve_symbol_proc(lf[22]))(2,*((C_word*)lf[22]+1),t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4116 in k4113 in ##compiler#compiler-warning in k4005 in k4002 */
static void C_ccall f_4118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4118,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4121,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4128,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* support.scm: 67   string-append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[7]+1)))(4,*((C_word*)lf[7]+1),t3,lf[21],((C_word*)t0)[2]);}

/* k4126 in k4116 in k4113 in ##compiler#compiler-warning in k4005 in k4002 */
static void C_ccall f_4128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(6,0,((C_word*)t0)[4],C_retrieve(lf[20]),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4119 in k4116 in k4113 in ##compiler#compiler-warning in k4005 in k4002 */
static void C_ccall f_4121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* support.scm: 68   newline */
((C_proc3)C_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##compiler#debugging in k4005 in k4002 */
static void C_ccall f_4043(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_4043r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4043r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4043r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
if(C_truep((C_word)C_i_memq(t2,*((C_word*)lf[3]+1)))){
t5=*((C_word*)lf[11]+1);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4053,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t6,t3,t5);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k4051 in ##compiler#debugging in k4005 in k4002 */
static void C_ccall f_4053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4053,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4056,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4068,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 58   display */
((C_proc3)C_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t3,lf[18]);}
else{
t3=t2;
f_4056(2,t3,C_SCHEME_UNDEFINED);}}

/* k4066 in k4051 in ##compiler#debugging in k4005 in k4002 */
static void C_ccall f_4068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4068,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4073,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4073(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop49 in k4066 in k4051 in ##compiler#debugging in k4005 in k4002 */
static void C_fcall f_4073(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4073,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4095,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=*((C_word*)lf[11]+1);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4085,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4092,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* support.scm: 59   force */
((C_proc3)C_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t7,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4090 in loop49 in k4066 in k4051 in ##compiler#debugging in k4005 in k4002 */
static void C_ccall f_4092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4083 in loop49 in k4066 in k4051 in ##compiler#debugging in k4005 in k4002 */
static void C_ccall f_4085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(32),((C_word*)t0)[2]);}

/* k4093 in loop49 in k4066 in k4051 in ##compiler#debugging in k4005 in k4002 */
static void C_ccall f_4095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4073(t3,((C_word*)t0)[2],t2);}

/* k4054 in k4051 in ##compiler#debugging in k4005 in k4002 */
static void C_ccall f_4056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4056,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4059,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 60   newline */
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t2);}

/* k4057 in k4054 in k4051 in ##compiler#debugging in k4005 in k4002 */
static void C_ccall f_4059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4062,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* support.scm: 61   flush-output */
((C_proc2)C_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t2);}

/* k4060 in k4057 in k4054 in k4051 in ##compiler#debugging in k4005 in k4002 */
static void C_ccall f_4062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* ##compiler#bomb in k4005 in k4002 */
static void C_ccall f_4016(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_4016r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4016r(t0,t1,t2);}}

static void C_ccall f_4016r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4030,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_car(t2);
/* support.scm: 49   string-append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[7]+1)))(4,*((C_word*)lf[7]+1),t3,lf[8],t4);}
else{
/* support.scm: 50   error */
((C_proc3)C_retrieve_proc(*((C_word*)lf[6]+1)))(3,*((C_word*)lf[6]+1),t1,lf[9]);}}

/* k4028 in ##compiler#bomb in k4005 in k4002 */
static void C_ccall f_4030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_apply(5,0,((C_word*)t0)[2],*((C_word*)lf[6]+1),t1,t2);}

/* ##compiler#compiler-cleanup-hook in k4005 in k4002 */
static void C_ccall f_4011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4011,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[670] = {
{"toplevel:support_scm",(void*)C_support_toplevel},
{"f_4004:support_scm",(void*)f_4004},
{"f_4007:support_scm",(void*)f_4007},
{"f_5069:support_scm",(void*)f_5069},
{"f_5072:support_scm",(void*)f_5072},
{"f_13364:support_scm",(void*)f_13364},
{"f_13368:support_scm",(void*)f_13368},
{"f_13458:support_scm",(void*)f_13458},
{"f_13374:support_scm",(void*)f_13374},
{"f_13445:support_scm",(void*)f_13445},
{"f_13448:support_scm",(void*)f_13448},
{"f_13451:support_scm",(void*)f_13451},
{"f_13380:support_scm",(void*)f_13380},
{"f_13387:support_scm",(void*)f_13387},
{"f_13389:support_scm",(void*)f_13389},
{"f_13413:support_scm",(void*)f_13413},
{"f_13409:support_scm",(void*)f_13409},
{"f_13431:support_scm",(void*)f_13431},
{"f_13353:support_scm",(void*)f_13353},
{"f_13342:support_scm",(void*)f_13342},
{"f_13336:support_scm",(void*)f_13336},
{"f_13308:support_scm",(void*)f_13308},
{"f_13312:support_scm",(void*)f_13312},
{"f_13287:support_scm",(void*)f_13287},
{"f_13291:support_scm",(void*)f_13291},
{"f_13254:support_scm",(void*)f_13254},
{"f_13260:support_scm",(void*)f_13260},
{"f_13221:support_scm",(void*)f_13221},
{"f_13227:support_scm",(void*)f_13227},
{"f_13197:support_scm",(void*)f_13197},
{"f_13128:support_scm",(void*)f_13128},
{"f_13132:support_scm",(void*)f_13132},
{"f_13137:support_scm",(void*)f_13137},
{"f_13141:support_scm",(void*)f_13141},
{"f_13192:support_scm",(void*)f_13192},
{"f_13171:support_scm",(void*)f_13171},
{"f_13183:support_scm",(void*)f_13183},
{"f_13186:support_scm",(void*)f_13186},
{"f_13159:support_scm",(void*)f_13159},
{"f_13095:support_scm",(void*)f_13095},
{"f_13105:support_scm",(void*)f_13105},
{"f_13108:support_scm",(void*)f_13108},
{"f_12972:support_scm",(void*)f_12972},
{"f_12981:support_scm",(void*)f_12981},
{"f_13009:support_scm",(void*)f_13009},
{"f_13015:support_scm",(void*)f_13015},
{"f_13018:support_scm",(void*)f_13018},
{"f_13021:support_scm",(void*)f_13021},
{"f_13024:support_scm",(void*)f_13024},
{"f_13027:support_scm",(void*)f_13027},
{"f_13030:support_scm",(void*)f_13030},
{"f_13089:support_scm",(void*)f_13089},
{"f_13033:support_scm",(void*)f_13033},
{"f_13048:support_scm",(void*)f_13048},
{"f_13051:support_scm",(void*)f_13051},
{"f_13059:support_scm",(void*)f_13059},
{"f_13069:support_scm",(void*)f_13069},
{"f_13072:support_scm",(void*)f_13072},
{"f_13054:support_scm",(void*)f_13054},
{"f_13039:support_scm",(void*)f_13039},
{"f_12976:support_scm",(void*)f_12976},
{"f_12969:support_scm",(void*)f_12969},
{"f_12951:support_scm",(void*)f_12951},
{"f_12905:support_scm",(void*)f_12905},
{"f_12924:support_scm",(void*)f_12924},
{"f_12935:support_scm",(void*)f_12935},
{"f_12931:support_scm",(void*)f_12931},
{"f_12884:support_scm",(void*)f_12884},
{"f_12890:support_scm",(void*)f_12890},
{"f_12894:support_scm",(void*)f_12894},
{"f_12897:support_scm",(void*)f_12897},
{"f_12900:support_scm",(void*)f_12900},
{"f_12872:support_scm",(void*)f_12872},
{"f_12876:support_scm",(void*)f_12876},
{"f_12781:support_scm",(void*)f_12781},
{"f_12800:support_scm",(void*)f_12800},
{"f_12825:support_scm",(void*)f_12825},
{"f_12829:support_scm",(void*)f_12829},
{"f_12831:support_scm",(void*)f_12831},
{"f_12838:support_scm",(void*)f_12838},
{"f_12851:support_scm",(void*)f_12851},
{"f_12854:support_scm",(void*)f_12854},
{"f_12857:support_scm",(void*)f_12857},
{"f_12860:support_scm",(void*)f_12860},
{"f_12863:support_scm",(void*)f_12863},
{"f_12867:support_scm",(void*)f_12867},
{"f_12784:support_scm",(void*)f_12784},
{"f_12788:support_scm",(void*)f_12788},
{"f_12794:support_scm",(void*)f_12794},
{"f_12775:support_scm",(void*)f_12775},
{"f_12716:support_scm",(void*)f_12716},
{"f_12724:support_scm",(void*)f_12724},
{"f_12751:support_scm",(void*)f_12751},
{"f_12727:support_scm",(void*)f_12727},
{"f_12730:support_scm",(void*)f_12730},
{"f_12747:support_scm",(void*)f_12747},
{"f_12733:support_scm",(void*)f_12733},
{"f_12743:support_scm",(void*)f_12743},
{"f_12736:support_scm",(void*)f_12736},
{"f_12739:support_scm",(void*)f_12739},
{"f_12707:support_scm",(void*)f_12707},
{"f_12701:support_scm",(void*)f_12701},
{"f_12695:support_scm",(void*)f_12695},
{"f_12683:support_scm",(void*)f_12683},
{"f_12687:support_scm",(void*)f_12687},
{"f_12690:support_scm",(void*)f_12690},
{"f_12645:support_scm",(void*)f_12645},
{"f_12649:support_scm",(void*)f_12649},
{"f14588:support_scm",(void*)f14588},
{"f_12652:support_scm",(void*)f_12652},
{"f_12659:support_scm",(void*)f_12659},
{"f_12603:support_scm",(void*)f_12603},
{"f_12612:support_scm",(void*)f_12612},
{"f_12574:support_scm",(void*)f_12574},
{"f_12584:support_scm",(void*)f_12584},
{"f_12365:support_scm",(void*)f_12365},
{"f_12569:support_scm",(void*)f_12569},
{"f_12534:support_scm",(void*)f_12534},
{"f_12540:support_scm",(void*)f_12540},
{"f_12555:support_scm",(void*)f_12555},
{"f_12548:support_scm",(void*)f_12548},
{"f_12368:support_scm",(void*)f_12368},
{"f_12402:support_scm",(void*)f_12402},
{"f_12496:support_scm",(void*)f_12496},
{"f_12508:support_scm",(void*)f_12508},
{"f_12466:support_scm",(void*)f_12466},
{"f_12477:support_scm",(void*)f_12477},
{"f_12457:support_scm",(void*)f_12457},
{"f_12421:support_scm",(void*)f_12421},
{"f_12427:support_scm",(void*)f_12427},
{"f_12431:support_scm",(void*)f_12431},
{"f_12226:support_scm",(void*)f_12226},
{"f_12232:support_scm",(void*)f_12232},
{"f_12325:support_scm",(void*)f_12325},
{"f_12330:support_scm",(void*)f_12330},
{"f_12340:support_scm",(void*)f_12340},
{"f_12293:support_scm",(void*)f_12293},
{"f_12264:support_scm",(void*)f_12264},
{"f_12269:support_scm",(void*)f_12269},
{"f_12279:support_scm",(void*)f_12279},
{"f_12230:support_scm",(void*)f_12230},
{"f_11857:support_scm",(void*)f_11857},
{"f_12056:support_scm",(void*)f_12056},
{"f_12148:support_scm",(void*)f_12148},
{"f_12059:support_scm",(void*)f_12059},
{"f_11536:support_scm",(void*)f_11536},
{"f_11851:support_scm",(void*)f_11851},
{"f_11548:support_scm",(void*)f_11548},
{"f_11558:support_scm",(void*)f_11558},
{"f_11576:support_scm",(void*)f_11576},
{"f_11615:support_scm",(void*)f_11615},
{"f_11580:support_scm",(void*)f_11580},
{"f_11206:support_scm",(void*)f_11206},
{"f_11530:support_scm",(void*)f_11530},
{"f_11212:support_scm",(void*)f_11212},
{"f_11222:support_scm",(void*)f_11222},
{"f_11231:support_scm",(void*)f_11231},
{"f_11243:support_scm",(void*)f_11243},
{"f_11255:support_scm",(void*)f_11255},
{"f_11261:support_scm",(void*)f_11261},
{"f_11265:support_scm",(void*)f_11265},
{"f_11161:support_scm",(void*)f_11161},
{"f_11200:support_scm",(void*)f_11200},
{"f_11167:support_scm",(void*)f_11167},
{"f_11171:support_scm",(void*)f_11171},
{"f_11175:support_scm",(void*)f_11175},
{"f_11130:support_scm",(void*)f_11130},
{"f_11143:support_scm",(void*)f_11143},
{"f_11099:support_scm",(void*)f_11099},
{"f_11112:support_scm",(void*)f_11112},
{"f_10041:support_scm",(void*)f_10041},
{"f_11093:support_scm",(void*)f_11093},
{"f_10047:support_scm",(void*)f_10047},
{"f_10053:support_scm",(void*)f_10053},
{"f_10082:support_scm",(void*)f_10082},
{"f_10101:support_scm",(void*)f_10101},
{"f_10120:support_scm",(void*)f_10120},
{"f_10190:support_scm",(void*)f_10190},
{"f_10209:support_scm",(void*)f_10209},
{"f_10291:support_scm",(void*)f_10291},
{"f_10330:support_scm",(void*)f_10330},
{"f_10349:support_scm",(void*)f_10349},
{"f_10368:support_scm",(void*)f_10368},
{"f_10448:support_scm",(void*)f_10448},
{"f_10533:support_scm",(void*)f_10533},
{"f_10608:support_scm",(void*)f_10608},
{"f_10647:support_scm",(void*)f_10647},
{"f_10717:support_scm",(void*)f_10717},
{"f_10650:support_scm",(void*)f_10650},
{"f_10612:support_scm",(void*)f_10612},
{"f_10451:support_scm",(void*)f_10451},
{"f_10482:support_scm",(void*)f_10482},
{"f_10371:support_scm",(void*)f_10371},
{"f_10212:support_scm",(void*)f_10212},
{"f_10243:support_scm",(void*)f_10243},
{"f_10123:support_scm",(void*)f_10123},
{"f_10154:support_scm",(void*)f_10154},
{"f_9983:support_scm",(void*)f_9983},
{"f_9987:support_scm",(void*)f_9987},
{"f_9998:support_scm",(void*)f_9998},
{"f_10004:support_scm",(void*)f_10004},
{"f_10016:support_scm",(void*)f_10016},
{"f_10022:support_scm",(void*)f_10022},
{"f_9990:support_scm",(void*)f_9990},
{"f_9902:support_scm",(void*)f_9902},
{"f_9914:support_scm",(void*)f_9914},
{"f_9921:support_scm",(void*)f_9921},
{"f_9924:support_scm",(void*)f_9924},
{"f_9927:support_scm",(void*)f_9927},
{"f_9930:support_scm",(void*)f_9930},
{"f_9933:support_scm",(void*)f_9933},
{"f_9936:support_scm",(void*)f_9936},
{"f_9939:support_scm",(void*)f_9939},
{"f_9942:support_scm",(void*)f_9942},
{"f_9945:support_scm",(void*)f_9945},
{"f_9948:support_scm",(void*)f_9948},
{"f_9951:support_scm",(void*)f_9951},
{"f_9954:support_scm",(void*)f_9954},
{"f_9957:support_scm",(void*)f_9957},
{"f_9960:support_scm",(void*)f_9960},
{"f_9963:support_scm",(void*)f_9963},
{"f_9966:support_scm",(void*)f_9966},
{"f_9969:support_scm",(void*)f_9969},
{"f_9972:support_scm",(void*)f_9972},
{"f_9975:support_scm",(void*)f_9975},
{"f_9978:support_scm",(void*)f_9978},
{"f_9908:support_scm",(void*)f_9908},
{"f_9794:support_scm",(void*)f_9794},
{"f_9803:support_scm",(void*)f_9803},
{"f_9809:support_scm",(void*)f_9809},
{"f_9817:support_scm",(void*)f_9817},
{"f_9798:support_scm",(void*)f_9798},
{"f_9773:support_scm",(void*)f_9773},
{"f_9783:support_scm",(void*)f_9783},
{"f_9724:support_scm",(void*)f_9724},
{"f_9730:support_scm",(void*)f_9730},
{"f_9771:support_scm",(void*)f_9771},
{"f_9743:support_scm",(void*)f_9743},
{"f_9687:support_scm",(void*)f_9687},
{"f_9693:support_scm",(void*)f_9693},
{"f_9722:support_scm",(void*)f_9722},
{"f_9700:support_scm",(void*)f_9700},
{"f_9703:support_scm",(void*)f_9703},
{"f_9646:support_scm",(void*)f_9646},
{"f_9652:support_scm",(void*)f_9652},
{"f_9685:support_scm",(void*)f_9685},
{"f_9659:support_scm",(void*)f_9659},
{"f_9662:support_scm",(void*)f_9662},
{"f_9524:support_scm",(void*)f_9524},
{"f_9553:support_scm",(void*)f_9553},
{"f_9423:support_scm",(void*)f_9423},
{"f_9429:support_scm",(void*)f_9429},
{"f_9455:support_scm",(void*)f_9455},
{"f_9469:support_scm",(void*)f_9469},
{"f_9477:support_scm",(void*)f_9477},
{"f_9198:support_scm",(void*)f_9198},
{"f_9397:support_scm",(void*)f_9397},
{"f_9403:support_scm",(void*)f_9403},
{"f_9278:support_scm",(void*)f_9278},
{"f_9300:support_scm",(void*)f_9300},
{"f_9318:support_scm",(void*)f_9318},
{"f_9349:support_scm",(void*)f_9349},
{"f_9235:support_scm",(void*)f_9235},
{"f_9257:support_scm",(void*)f_9257},
{"f_9201:support_scm",(void*)f_9201},
{"f_9230:support_scm",(void*)f_9230},
{"f_9209:support_scm",(void*)f_9209},
{"f_9129:support_scm",(void*)f_9129},
{"f_9135:support_scm",(void*)f_9135},
{"f_9141:support_scm",(void*)f_9141},
{"f_9145:support_scm",(void*)f_9145},
{"f_9192:support_scm",(void*)f_9192},
{"f_9156:support_scm",(void*)f_9156},
{"f_9181:support_scm",(void*)f_9181},
{"f_8937:support_scm",(void*)f_8937},
{"f_8968:support_scm",(void*)f_8968},
{"f_9127:support_scm",(void*)f_9127},
{"f_8972:support_scm",(void*)f_8972},
{"f_8980:support_scm",(void*)f_8980},
{"f_8987:support_scm",(void*)f_8987},
{"f_9123:support_scm",(void*)f_9123},
{"f_9011:support_scm",(void*)f_9011},
{"f_9090:support_scm",(void*)f_9090},
{"f_9045:support_scm",(void*)f_9045},
{"f_9048:support_scm",(void*)f_9048},
{"f_9066:support_scm",(void*)f_9066},
{"f_9055:support_scm",(void*)f_9055},
{"f_8975:support_scm",(void*)f_8975},
{"f_8941:support_scm",(void*)f_8941},
{"f_8947:support_scm",(void*)f_8947},
{"f_8960:support_scm",(void*)f_8960},
{"f_8952:support_scm",(void*)f_8952},
{"f_8869:support_scm",(void*)f_8869},
{"f_8875:support_scm",(void*)f_8875},
{"f_8902:support_scm",(void*)f_8902},
{"f_8931:support_scm",(void*)f_8931},
{"f_8896:support_scm",(void*)f_8896},
{"f_8783:support_scm",(void*)f_8783},
{"f_8789:support_scm",(void*)f_8789},
{"f_8834:support_scm",(void*)f_8834},
{"f_8863:support_scm",(void*)f_8863},
{"f_8823:support_scm",(void*)f_8823},
{"f_8819:support_scm",(void*)f_8819},
{"f_8744:support_scm",(void*)f_8744},
{"f_8748:support_scm",(void*)f_8748},
{"f_8751:support_scm",(void*)f_8751},
{"f_8754:support_scm",(void*)f_8754},
{"f_8710:support_scm",(void*)f_8710},
{"f_8716:support_scm",(void*)f_8716},
{"f_8730:support_scm",(void*)f_8730},
{"f_8734:support_scm",(void*)f_8734},
{"f_8325:support_scm",(void*)f_8325},
{"f_8661:support_scm",(void*)f_8661},
{"f_8694:support_scm",(void*)f_8694},
{"f_8674:support_scm",(void*)f_8674},
{"f_8329:support_scm",(void*)f_8329},
{"f_8337:support_scm",(void*)f_8337},
{"f_8646:support_scm",(void*)f_8646},
{"f_8652:support_scm",(void*)f_8652},
{"f_8650:support_scm",(void*)f_8650},
{"f_8486:support_scm",(void*)f_8486},
{"f_8593:support_scm",(void*)f_8593},
{"f_8630:support_scm",(void*)f_8630},
{"f_8620:support_scm",(void*)f_8620},
{"f_8624:support_scm",(void*)f_8624},
{"f_8627:support_scm",(void*)f_8627},
{"f_8490:support_scm",(void*)f_8490},
{"f_8544:support_scm",(void*)f_8544},
{"f_8577:support_scm",(void*)f_8577},
{"f_8557:support_scm",(void*)f_8557},
{"f_8542:support_scm",(void*)f_8542},
{"f_8493:support_scm",(void*)f_8493},
{"f_8519:support_scm",(void*)f_8519},
{"f_8535:support_scm",(void*)f_8535},
{"f_8527:support_scm",(void*)f_8527},
{"f_8511:support_scm",(void*)f_8511},
{"f_8509:support_scm",(void*)f_8509},
{"f_8437:support_scm",(void*)f_8437},
{"f_8440:support_scm",(void*)f_8440},
{"f_8443:support_scm",(void*)f_8443},
{"f_8463:support_scm",(void*)f_8463},
{"f_8421:support_scm",(void*)f_8421},
{"f_8413:support_scm",(void*)f_8413},
{"f_8384:support_scm",(void*)f_8384},
{"f_8374:support_scm",(void*)f_8374},
{"f_8381:support_scm",(void*)f_8381},
{"f_8177:support_scm",(void*)f_8177},
{"f_8183:support_scm",(void*)f_8183},
{"f_8195:support_scm",(void*)f_8195},
{"f_8290:support_scm",(void*)f_8290},
{"f_8319:support_scm",(void*)f_8319},
{"f_8199:support_scm",(void*)f_8199},
{"f_8202:support_scm",(void*)f_8202},
{"f_8282:support_scm",(void*)f_8282},
{"f_8228:support_scm",(void*)f_8228},
{"f_8232:support_scm",(void*)f_8232},
{"f_8207:support_scm",(void*)f_8207},
{"f_8189:support_scm",(void*)f_8189},
{"f_8123:support_scm",(void*)f_8123},
{"f_8129:support_scm",(void*)f_8129},
{"f_8155:support_scm",(void*)f_8155},
{"f_8159:support_scm",(void*)f_8159},
{"f_7442:support_scm",(void*)f_7442},
{"f_7448:support_scm",(void*)f_7448},
{"f_7482:support_scm",(void*)f_7482},
{"f_7940:support_scm",(void*)f_7940},
{"f_8058:support_scm",(void*)f_8058},
{"f_8087:support_scm",(void*)f_8087},
{"f_8056:support_scm",(void*)f_8056},
{"f_8052:support_scm",(void*)f_8052},
{"f_8012:support_scm",(void*)f_8012},
{"f_8041:support_scm",(void*)f_8041},
{"f_8010:support_scm",(void*)f_8010},
{"f_7947:support_scm",(void*)f_7947},
{"f_7957:support_scm",(void*)f_7957},
{"f_7986:support_scm",(void*)f_7986},
{"f_7951:support_scm",(void*)f_7951},
{"f_7878:support_scm",(void*)f_7878},
{"f_7927:support_scm",(void*)f_7927},
{"f_7896:support_scm",(void*)f_7896},
{"f_7904:support_scm",(void*)f_7904},
{"f_7821:support_scm",(void*)f_7821},
{"f_7850:support_scm",(void*)f_7850},
{"f_7819:support_scm",(void*)f_7819},
{"f_7769:support_scm",(void*)f_7769},
{"f_7798:support_scm",(void*)f_7798},
{"f_7751:support_scm",(void*)f_7751},
{"f_7695:support_scm",(void*)f_7695},
{"f_7697:support_scm",(void*)f_7697},
{"f_7726:support_scm",(void*)f_7726},
{"f_7642:support_scm",(void*)f_7642},
{"f_7644:support_scm",(void*)f_7644},
{"f_7677:support_scm",(void*)f_7677},
{"f_7657:support_scm",(void*)f_7657},
{"f_7626:support_scm",(void*)f_7626},
{"f_7638:support_scm",(void*)f_7638},
{"f_7634:support_scm",(void*)f_7634},
{"f_7547:support_scm",(void*)f_7547},
{"f_7576:support_scm",(void*)f_7576},
{"f_7545:support_scm",(void*)f_7545},
{"f_7541:support_scm",(void*)f_7541},
{"f_7491:support_scm",(void*)f_7491},
{"f_7520:support_scm",(void*)f_7520},
{"f_7489:support_scm",(void*)f_7489},
{"f_6519:support_scm",(void*)f_6519},
{"f_7437:support_scm",(void*)f_7437},
{"f_7440:support_scm",(void*)f_7440},
{"f_6522:support_scm",(void*)f_6522},
{"f_7397:support_scm",(void*)f_7397},
{"f_7426:support_scm",(void*)f_7426},
{"f_7395:support_scm",(void*)f_7395},
{"f_7135:support_scm",(void*)f_7135},
{"f_7262:support_scm",(void*)f_7262},
{"f_7346:support_scm",(void*)f_7346},
{"f_7318:support_scm",(void*)f_7318},
{"f_7325:support_scm",(void*)f_7325},
{"f_7332:support_scm",(void*)f_7332},
{"f_7322:support_scm",(void*)f_7322},
{"f_7281:support_scm",(void*)f_7281},
{"f_7310:support_scm",(void*)f_7310},
{"f_7279:support_scm",(void*)f_7279},
{"f_7256:support_scm",(void*)f_7256},
{"f_7218:support_scm",(void*)f_7218},
{"f_7247:support_scm",(void*)f_7247},
{"f_7212:support_scm",(void*)f_7212},
{"f_7161:support_scm",(void*)f_7161},
{"f_7190:support_scm",(void*)f_7190},
{"f_7155:support_scm",(void*)f_7155},
{"f_7114:support_scm",(void*)f_7114},
{"f_7098:support_scm",(void*)f_7098},
{"f_7094:support_scm",(void*)f_7094},
{"f_7028:support_scm",(void*)f_7028},
{"f_7057:support_scm",(void*)f_7057},
{"f_7022:support_scm",(void*)f_7022},
{"f_6938:support_scm",(void*)f_6938},
{"f_6967:support_scm",(void*)f_6967},
{"f_6932:support_scm",(void*)f_6932},
{"f_6840:support_scm",(void*)f_6840},
{"f_6850:support_scm",(void*)f_6850},
{"f_6879:support_scm",(void*)f_6879},
{"f_6844:support_scm",(void*)f_6844},
{"f_6807:support_scm",(void*)f_6807},
{"f_6714:support_scm",(void*)f_6714},
{"f_6736:support_scm",(void*)f_6736},
{"f_6774:support_scm",(void*)f_6774},
{"f_6763:support_scm",(void*)f_6763},
{"f_6722:support_scm",(void*)f_6722},
{"f_6730:support_scm",(void*)f_6730},
{"f_6718:support_scm",(void*)f_6718},
{"f_6655:support_scm",(void*)f_6655},
{"f_6658:support_scm",(void*)f_6658},
{"f_6665:support_scm",(void*)f_6665},
{"f_6603:support_scm",(void*)f_6603},
{"f_6632:support_scm",(void*)f_6632},
{"f_6597:support_scm",(void*)f_6597},
{"f_6504:support_scm",(void*)f_6504},
{"f_6489:support_scm",(void*)f_6489},
{"f_6483:support_scm",(void*)f_6483},
{"f_6474:support_scm",(void*)f_6474},
{"f_6465:support_scm",(void*)f_6465},
{"f_6456:support_scm",(void*)f_6456},
{"f_6447:support_scm",(void*)f_6447},
{"f_6438:support_scm",(void*)f_6438},
{"f_6429:support_scm",(void*)f_6429},
{"f_6423:support_scm",(void*)f_6423},
{"f_6417:support_scm",(void*)f_6417},
{"f_5918:support_scm",(void*)f_5918},
{"f_6415:support_scm",(void*)f_6415},
{"f_5922:support_scm",(void*)f_5922},
{"f_5927:support_scm",(void*)f_5927},
{"f_5937:support_scm",(void*)f_5937},
{"f_6100:support_scm",(void*)f_6100},
{"f_6110:support_scm",(void*)f_6110},
{"f_6126:support_scm",(void*)f_6126},
{"f_6202:support_scm",(void*)f_6202},
{"f_6242:support_scm",(void*)f_6242},
{"f_6232:support_scm",(void*)f_6232},
{"f_6205:support_scm",(void*)f_6205},
{"f_6222:support_scm",(void*)f_6222},
{"f_6208:support_scm",(void*)f_6208},
{"f_6211:support_scm",(void*)f_6211},
{"f_6218:support_scm",(void*)f_6218},
{"f_6193:support_scm",(void*)f_6193},
{"f_6183:support_scm",(void*)f_6183},
{"f_6167:support_scm",(void*)f_6167},
{"f_6129:support_scm",(void*)f_6129},
{"f_6144:support_scm",(void*)f_6144},
{"f_6113:support_scm",(void*)f_6113},
{"f_5940:support_scm",(void*)f_5940},
{"f_5981:support_scm",(void*)f_5981},
{"f_6015:support_scm",(void*)f_6015},
{"f_6049:support_scm",(void*)f_6049},
{"f_6052:support_scm",(void*)f_6052},
{"f_6018:support_scm",(void*)f_6018},
{"f_5984:support_scm",(void*)f_5984},
{"f_5943:support_scm",(void*)f_5943},
{"f_5971:support_scm",(void*)f_5971},
{"f_5946:support_scm",(void*)f_5946},
{"f_5958:support_scm",(void*)f_5958},
{"f_5949:support_scm",(void*)f_5949},
{"f_5855:support_scm",(void*)f_5855},
{"f_5861:support_scm",(void*)f_5861},
{"f_5868:support_scm",(void*)f_5868},
{"f_5871:support_scm",(void*)f_5871},
{"f_5883:support_scm",(void*)f_5883},
{"f_5912:support_scm",(void*)f_5912},
{"f_5881:support_scm",(void*)f_5881},
{"f_5874:support_scm",(void*)f_5874},
{"f_5831:support_scm",(void*)f_5831},
{"f_5837:support_scm",(void*)f_5837},
{"f_5847:support_scm",(void*)f_5847},
{"f_5790:support_scm",(void*)f_5790},
{"f_5797:support_scm",(void*)f_5797},
{"f_5800:support_scm",(void*)f_5800},
{"f_5804:support_scm",(void*)f_5804},
{"f_5780:support_scm",(void*)f_5780},
{"f_5771:support_scm",(void*)f_5771},
{"f_5775:support_scm",(void*)f_5775},
{"f_5714:support_scm",(void*)f_5714},
{"f_5718:support_scm",(void*)f_5718},
{"f_5748:support_scm",(void*)f_5748},
{"f_5662:support_scm",(void*)f_5662},
{"f_5666:support_scm",(void*)f_5666},
{"f_5693:support_scm",(void*)f_5693},
{"f_5616:support_scm",(void*)f_5616},
{"f_5620:support_scm",(void*)f_5620},
{"f_5642:support_scm",(void*)f_5642},
{"f_5598:support_scm",(void*)f_5598},
{"f_5602:support_scm",(void*)f_5602},
{"f_5610:support_scm",(void*)f_5610},
{"f_5580:support_scm",(void*)f_5580},
{"f_5584:support_scm",(void*)f_5584},
{"f_5327:support_scm",(void*)f_5327},
{"f_5489:support_scm",(void*)f_5489},
{"f_5503:support_scm",(void*)f_5503},
{"f_5528:support_scm",(void*)f_5528},
{"f_5539:support_scm",(void*)f_5539},
{"f_5567:support_scm",(void*)f_5567},
{"f_5335:support_scm",(void*)f_5335},
{"f_5398:support_scm",(void*)f_5398},
{"f_5412:support_scm",(void*)f_5412},
{"f_5437:support_scm",(void*)f_5437},
{"f_5448:support_scm",(void*)f_5448},
{"f_5476:support_scm",(void*)f_5476},
{"f_5338:support_scm",(void*)f_5338},
{"f_5343:support_scm",(void*)f_5343},
{"f_5357:support_scm",(void*)f_5357},
{"f_5385:support_scm",(void*)f_5385},
{"f_5331:support_scm",(void*)f_5331},
{"f_5186:support_scm",(void*)f_5186},
{"f_5190:support_scm",(void*)f_5190},
{"f_5194:support_scm",(void*)f_5194},
{"f_5183:support_scm",(void*)f_5183},
{"f_5180:support_scm",(void*)f_5180},
{"f_5073:support_scm",(void*)f_5073},
{"f_5082:support_scm",(void*)f_5082},
{"f_5113:support_scm",(void*)f_5113},
{"f_5167:support_scm",(void*)f_5167},
{"f_5173:support_scm",(void*)f_5173},
{"f_5119:support_scm",(void*)f_5119},
{"f_5151:support_scm",(void*)f_5151},
{"f_5165:support_scm",(void*)f_5165},
{"f_5157:support_scm",(void*)f_5157},
{"f_5123:support_scm",(void*)f_5123},
{"f_5145:support_scm",(void*)f_5145},
{"f_5088:support_scm",(void*)f_5088},
{"f_5094:support_scm",(void*)f_5094},
{"f_5105:support_scm",(void*)f_5105},
{"f_5102:support_scm",(void*)f_5102},
{"f_5077:support_scm",(void*)f_5077},
{"f_4972:support_scm",(void*)f_4972},
{"f_4978:support_scm",(void*)f_4978},
{"f_5055:support_scm",(void*)f_5055},
{"f_5006:support_scm",(void*)f_5006},
{"f_5044:support_scm",(void*)f_5044},
{"f_5032:support_scm",(void*)f_5032},
{"f_4912:support_scm",(void*)f_4912},
{"f_4928:support_scm",(void*)f_4928},
{"f_4970:support_scm",(void*)f_4970},
{"f_4934:support_scm",(void*)f_4934},
{"f_4949:support_scm",(void*)f_4949},
{"f_4866:support_scm",(void*)f_4866},
{"f_4910:support_scm",(void*)f_4910},
{"f_4870:support_scm",(void*)f_4870},
{"f_4836:support_scm",(void*)f_4836},
{"f_4790:support_scm",(void*)f_4790},
{"f_4770:support_scm",(void*)f_4770},
{"f_4776:support_scm",(void*)f_4776},
{"f_4784:support_scm",(void*)f_4784},
{"f_4788:support_scm",(void*)f_4788},
{"f_4739:support_scm",(void*)f_4739},
{"f_4745:support_scm",(void*)f_4745},
{"f_4760:support_scm",(void*)f_4760},
{"f_4676:support_scm",(void*)f_4676},
{"f_4690:support_scm",(void*)f_4690},
{"f_4692:support_scm",(void*)f_4692},
{"f_4721:support_scm",(void*)f_4721},
{"f_4664:support_scm",(void*)f_4664},
{"f_4617:support_scm",(void*)f_4617},
{"f_4633:support_scm",(void*)f_4633},
{"f_4645:support_scm",(void*)f_4645},
{"f_4610:support_scm",(void*)f_4610},
{"f_4603:support_scm",(void*)f_4603},
{"f_4547:support_scm",(void*)f_4547},
{"f_4601:support_scm",(void*)f_4601},
{"f_4551:support_scm",(void*)f_4551},
{"f_4574:support_scm",(void*)f_4574},
{"f_4453:support_scm",(void*)f_4453},
{"f_4469:support_scm",(void*)f_4469},
{"f_4471:support_scm",(void*)f_4471},
{"f_4493:support_scm",(void*)f_4493},
{"f_4532:support_scm",(void*)f_4532},
{"f_4500:support_scm",(void*)f_4500},
{"f_4516:support_scm",(void*)f_4516},
{"f_4504:support_scm",(void*)f_4504},
{"f_4508:support_scm",(void*)f_4508},
{"f_4465:support_scm",(void*)f_4465},
{"f_4409:support_scm",(void*)f_4409},
{"f_4415:support_scm",(void*)f_4415},
{"f_4439:support_scm",(void*)f_4439},
{"f_4378:support_scm",(void*)f_4378},
{"f_4401:support_scm",(void*)f_4401},
{"f_4404:support_scm",(void*)f_4404},
{"f_4407:support_scm",(void*)f_4407},
{"f_4351:support_scm",(void*)f_4351},
{"f_4370:support_scm",(void*)f_4370},
{"f_4373:support_scm",(void*)f_4373},
{"f_4315:support_scm",(void*)f_4315},
{"f_4321:support_scm",(void*)f_4321},
{"f_4247:support_scm",(void*)f_4247},
{"f_4271:support_scm",(void*)f_4271},
{"f_4250:support_scm",(void*)f_4250},
{"f_4258:support_scm",(void*)f_4258},
{"f_4262:support_scm",(void*)f_4262},
{"f_4204:support_scm",(void*)f_4204},
{"f_4210:support_scm",(void*)f_4210},
{"f_4233:support_scm",(void*)f_4233},
{"f_4237:support_scm",(void*)f_4237},
{"f_4201:support_scm",(void*)f_4201},
{"f_4156:support_scm",(void*)f_4156},
{"f_4160:support_scm",(void*)f_4160},
{"f_4163:support_scm",(void*)f_4163},
{"f_4166:support_scm",(void*)f_4166},
{"f_4177:support_scm",(void*)f_4177},
{"f_4169:support_scm",(void*)f_4169},
{"f_4172:support_scm",(void*)f_4172},
{"f_4137:support_scm",(void*)f_4137},
{"f_4141:support_scm",(void*)f_4141},
{"f_4154:support_scm",(void*)f_4154},
{"f_4144:support_scm",(void*)f_4144},
{"f_4147:support_scm",(void*)f_4147},
{"f_4108:support_scm",(void*)f_4108},
{"f_4115:support_scm",(void*)f_4115},
{"f_4118:support_scm",(void*)f_4118},
{"f_4128:support_scm",(void*)f_4128},
{"f_4121:support_scm",(void*)f_4121},
{"f_4043:support_scm",(void*)f_4043},
{"f_4053:support_scm",(void*)f_4053},
{"f_4068:support_scm",(void*)f_4068},
{"f_4073:support_scm",(void*)f_4073},
{"f_4092:support_scm",(void*)f_4092},
{"f_4085:support_scm",(void*)f_4085},
{"f_4095:support_scm",(void*)f_4095},
{"f_4056:support_scm",(void*)f_4056},
{"f_4059:support_scm",(void*)f_4059},
{"f_4062:support_scm",(void*)f_4062},
{"f_4016:support_scm",(void*)f_4016},
{"f_4030:support_scm",(void*)f_4030},
{"f_4011:support_scm",(void*)f_4011},
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
