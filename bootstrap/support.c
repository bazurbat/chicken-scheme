/* Generated from support.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:30
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: support.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -no-lambda-info -local -extend private-namespace.scm -output-file support.c
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


/* from k4590 */
static C_word C_fcall stub273(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub273(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_wordstobytes(t0));
return C_r;}

/* from k4583 */
static C_word C_fcall stub269(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub269(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_bytestowords(t0));
return C_r;}

C_noret_decl(C_support_toplevel)
C_externexport void C_ccall C_support_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3981)
static void C_ccall f_3981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3984)
static void C_ccall f_3984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5046)
static void C_ccall f_5046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5049)
static void C_ccall f_5049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13293)
static void C_ccall f_13293(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13297)
static void C_ccall f_13297(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13387)
static void C_ccall f_13387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13303)
static void C_ccall f_13303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13374)
static void C_ccall f_13374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13377)
static void C_ccall f_13377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13380)
static void C_ccall f_13380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13309)
static void C_ccall f_13309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13316)
static void C_ccall f_13316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13318)
static void C_fcall f_13318(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13342)
static void C_ccall f_13342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13338)
static void C_ccall f_13338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13360)
static void C_ccall f_13360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13282)
static void C_ccall f_13282(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13271)
static void C_ccall f_13271(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13265)
static void C_ccall f_13265(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13237)
static void C_ccall f_13237(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_13237)
static void C_ccall f_13237r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_13241)
static void C_ccall f_13241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13216)
static void C_ccall f_13216(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13220)
static void C_ccall f_13220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13183)
static void C_ccall f_13183(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13189)
static void C_ccall f_13189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13150)
static void C_ccall f_13150(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13156)
static void C_ccall f_13156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13126)
static void C_ccall f_13126(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13057)
static void C_ccall f_13057(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_13061)
static void C_ccall f_13061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13066)
static void C_fcall f_13066(C_word t0,C_word t1) C_noret;
C_noret_decl(f_13070)
static void C_ccall f_13070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13121)
static void C_ccall f_13121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13100)
static void C_ccall f_13100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13112)
static void C_ccall f_13112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13115)
static void C_ccall f_13115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13088)
static void C_ccall f_13088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13024)
static void C_ccall f_13024(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_13034)
static void C_ccall f_13034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13037)
static void C_ccall f_13037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12901)
static void C_ccall f_12901(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12910)
static void C_fcall f_12910(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12938)
static void C_ccall f_12938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12944)
static void C_ccall f_12944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12947)
static void C_ccall f_12947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12950)
static void C_ccall f_12950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12953)
static void C_ccall f_12953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12956)
static void C_ccall f_12956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12959)
static void C_ccall f_12959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13018)
static void C_ccall f_13018(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12962)
static void C_ccall f_12962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12977)
static void C_ccall f_12977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12980)
static void C_ccall f_12980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12988)
static void C_fcall f_12988(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12998)
static void C_ccall f_12998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_13001)
static void C_ccall f_13001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12983)
static void C_ccall f_12983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12968)
static void C_ccall f_12968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12905)
static void C_ccall f_12905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12898)
static void C_ccall f_12898(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12880)
static void C_ccall f_12880(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12834)
static void C_ccall f_12834(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12853)
static void C_ccall f_12853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12864)
static void C_ccall f_12864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12860)
static void C_ccall f_12860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12813)
static void C_ccall f_12813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12819)
static void C_ccall f_12819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12823)
static void C_ccall f_12823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12826)
static void C_ccall f_12826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12829)
static void C_ccall f_12829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12801)
static void C_ccall f_12801(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12805)
static void C_ccall f_12805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12710)
static void C_ccall f_12710(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_12710)
static void C_ccall f_12710r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_12729)
static void C_ccall f_12729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12754)
static void C_ccall f_12754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12758)
static void C_ccall f_12758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12760)
static void C_fcall f_12760(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12767)
static void C_ccall f_12767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12780)
static void C_ccall f_12780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12783)
static void C_ccall f_12783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12786)
static void C_ccall f_12786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12789)
static void C_ccall f_12789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12792)
static void C_ccall f_12792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12796)
static void C_ccall f_12796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12713)
static void C_fcall f_12713(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12717)
static void C_ccall f_12717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12723)
static void C_ccall f_12723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12704)
static void C_ccall f_12704(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12645)
static void C_ccall f_12645(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_12645)
static void C_ccall f_12645r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_12653)
static void C_ccall f_12653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12680)
static void C_ccall f_12680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12656)
static void C_ccall f_12656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12659)
static void C_ccall f_12659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12676)
static void C_ccall f_12676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12662)
static void C_ccall f_12662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12672)
static void C_ccall f_12672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12665)
static void C_ccall f_12665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12668)
static void C_ccall f_12668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12636)
static void C_ccall f_12636(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12630)
static void C_ccall f_12630(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12624)
static void C_ccall f_12624(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12612)
static void C_ccall f_12612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12616)
static void C_ccall f_12616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12619)
static void C_ccall f_12619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12574)
static void C_ccall f_12574(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_12574)
static void C_ccall f_12574r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_12578)
static void C_ccall f_12578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f14511)
static void C_ccall f14511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12581)
static void C_ccall f_12581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12588)
static void C_ccall f_12588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12532)
static void C_ccall f_12532(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12541)
static void C_fcall f_12541(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12503)
static void C_ccall f_12503(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12513)
static void C_fcall f_12513(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12294)
static void C_ccall f_12294(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12498)
static void C_ccall f_12498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12463)
static void C_fcall f_12463(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12469)
static void C_fcall f_12469(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12484)
static void C_ccall f_12484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12477)
static void C_fcall f_12477(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12297)
static void C_fcall f_12297(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12331)
static void C_fcall f_12331(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12425)
static void C_ccall f_12425(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_12437)
static void C_ccall f_12437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12395)
static void C_ccall f_12395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12406)
static void C_ccall f_12406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12386)
static void C_ccall f_12386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12350)
static void C_ccall f_12350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12356)
static void C_ccall f_12356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12360)
static void C_ccall f_12360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12155)
static void C_ccall f_12155(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_12161)
static void C_fcall f_12161(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12254)
static void C_fcall f_12254(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12259)
static void C_fcall f_12259(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12269)
static void C_ccall f_12269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12222)
static void C_fcall f_12222(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12193)
static void C_fcall f_12193(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12198)
static void C_fcall f_12198(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_12208)
static void C_ccall f_12208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12159)
static void C_ccall f_12159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11786)
static void C_ccall f_11786(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11985)
static void C_fcall f_11985(C_word t0,C_word t1) C_noret;
C_noret_decl(f_12077)
static void C_fcall f_12077(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11988)
static void C_ccall f_11988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11465)
static void C_ccall f_11465(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11780)
static void C_ccall f_11780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11477)
static void C_ccall f_11477(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11487)
static void C_fcall f_11487(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11505)
static void C_ccall f_11505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11544)
static void C_fcall f_11544(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11509)
static void C_fcall f_11509(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11135)
static void C_ccall f_11135(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11459)
static void C_ccall f_11459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11141)
static void C_ccall f_11141(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11151)
static void C_fcall f_11151(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11160)
static void C_fcall f_11160(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11172)
static void C_fcall f_11172(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11184)
static void C_fcall f_11184(C_word t0,C_word t1) C_noret;
C_noret_decl(f_11190)
static void C_ccall f_11190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11194)
static void C_fcall f_11194(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11090)
static void C_ccall f_11090(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11129)
static void C_ccall f_11129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11096)
static void C_ccall f_11096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11100)
static void C_ccall f_11100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11104)
static void C_fcall f_11104(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_11059)
static void C_ccall f_11059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11072)
static void C_ccall f_11072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_11028)
static void C_ccall f_11028(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11041)
static void C_ccall f_11041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9970)
static void C_ccall f_9970(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_11022)
static void C_ccall f_11022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9976)
static void C_ccall f_9976(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9982)
static void C_fcall f_9982(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10011)
static void C_fcall f_10011(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10030)
static void C_fcall f_10030(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10049)
static void C_fcall f_10049(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10119)
static void C_fcall f_10119(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10138)
static void C_fcall f_10138(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10220)
static void C_fcall f_10220(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10259)
static void C_fcall f_10259(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10278)
static void C_fcall f_10278(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10297)
static void C_fcall f_10297(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10377)
static void C_fcall f_10377(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10462)
static void C_fcall f_10462(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10537)
static void C_ccall f_10537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10576)
static void C_fcall f_10576(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10646)
static void C_ccall f_10646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10579)
static void C_ccall f_10579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10541)
static void C_fcall f_10541(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_10380)
static void C_ccall f_10380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10411)
static void C_fcall f_10411(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10300)
static void C_ccall f_10300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10141)
static void C_ccall f_10141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10172)
static void C_fcall f_10172(C_word t0,C_word t1) C_noret;
C_noret_decl(f_10052)
static void C_ccall f_10052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_10083)
static void C_fcall f_10083(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9912)
static void C_ccall f_9912(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9916)
static void C_ccall f_9916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9927)
static void C_ccall f_9927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9933)
static void C_fcall f_9933(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9945)
static void C_ccall f_9945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9951)
static void C_ccall f_9951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9919)
static void C_ccall f_9919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9831)
static void C_ccall f_9831(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9843)
static void C_ccall f_9843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_9850)
static void C_ccall f_9850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9853)
static void C_ccall f_9853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9856)
static void C_ccall f_9856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9859)
static void C_ccall f_9859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9862)
static void C_ccall f_9862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9865)
static void C_ccall f_9865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9868)
static void C_ccall f_9868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9871)
static void C_ccall f_9871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9874)
static void C_ccall f_9874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9877)
static void C_ccall f_9877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9880)
static void C_ccall f_9880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9883)
static void C_ccall f_9883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9886)
static void C_ccall f_9886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9889)
static void C_ccall f_9889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9892)
static void C_ccall f_9892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9895)
static void C_ccall f_9895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9898)
static void C_ccall f_9898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9901)
static void C_ccall f_9901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9904)
static void C_ccall f_9904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9907)
static void C_ccall f_9907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9837)
static void C_ccall f_9837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9723)
static void C_ccall f_9723(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9732)
static void C_ccall f_9732(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9738)
static void C_fcall f_9738(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9746)
static C_word C_fcall f_9746(C_word t0,C_word t1);
C_noret_decl(f_9727)
static void C_ccall f_9727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9702)
static void C_ccall f_9702(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_9712)
static void C_ccall f_9712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9653)
static void C_ccall f_9653(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9659)
static void C_ccall f_9659(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9700)
static void C_ccall f_9700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9672)
static void C_ccall f_9672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9616)
static void C_ccall f_9616(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9622)
static void C_ccall f_9622(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9651)
static void C_ccall f_9651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9629)
static void C_fcall f_9629(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9632)
static void C_ccall f_9632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9575)
static void C_ccall f_9575(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9581)
static void C_ccall f_9581(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9614)
static void C_ccall f_9614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9588)
static void C_fcall f_9588(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9591)
static void C_ccall f_9591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9453)
static void C_ccall f_9453(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9482)
static void C_ccall f_9482(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9352)
static void C_ccall f_9352(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9358)
static void C_ccall f_9358(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9384)
static void C_fcall f_9384(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9398)
static void C_ccall f_9398(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9406)
static void C_ccall f_9406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9127)
static void C_ccall f_9127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9326)
static void C_ccall f_9326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9332)
static void C_ccall f_9332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9207)
static void C_fcall f_9207(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9229)
static void C_ccall f_9229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9247)
static void C_fcall f_9247(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9278)
static void C_ccall f_9278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9164)
static void C_fcall f_9164(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9186)
static void C_ccall f_9186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9130)
static void C_fcall f_9130(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_9159)
static void C_ccall f_9159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9138)
static C_word C_fcall f_9138(C_word t0,C_word t1);
C_noret_decl(f_9058)
static void C_ccall f_9058(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9064)
static void C_ccall f_9064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9070)
static void C_fcall f_9070(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9074)
static void C_ccall f_9074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9121)
static void C_ccall f_9121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9085)
static void C_ccall f_9085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9110)
static void C_ccall f_9110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8866)
static void C_ccall f_8866(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8897)
static void C_ccall f_8897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9056)
static void C_ccall f_9056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8901)
static void C_ccall f_8901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8909)
static void C_ccall f_8909(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8916)
static void C_ccall f_8916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9052)
static void C_ccall f_9052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8940)
static void C_fcall f_8940(C_word t0,C_word t1) C_noret;
C_noret_decl(f_9019)
static void C_ccall f_9019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8974)
static void C_ccall f_8974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8977)
static void C_fcall f_8977(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8995)
static void C_ccall f_8995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8984)
static void C_ccall f_8984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8904)
static void C_ccall f_8904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8870)
static void C_ccall f_8870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8876)
static void C_ccall f_8876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8889)
static void C_ccall f_8889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8881)
static void C_ccall f_8881(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8798)
static void C_ccall f_8798(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8804)
static void C_fcall f_8804(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8831)
static void C_fcall f_8831(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8860)
static void C_ccall f_8860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8825)
static void C_ccall f_8825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8712)
static void C_ccall f_8712(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8718)
static void C_fcall f_8718(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8763)
static void C_fcall f_8763(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8792)
static void C_ccall f_8792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8752)
static void C_ccall f_8752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8748)
static void C_ccall f_8748(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8673)
static void C_ccall f_8673(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8677)
static void C_ccall f_8677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8680)
static void C_ccall f_8680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8683)
static void C_ccall f_8683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8639)
static void C_ccall f_8639(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8645)
static void C_fcall f_8645(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8659)
static void C_ccall f_8659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8663)
static void C_ccall f_8663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8254)
static void C_ccall f_8254(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_8590)
static void C_fcall f_8590(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8623)
static void C_ccall f_8623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8603)
static void C_fcall f_8603(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8258)
static void C_ccall f_8258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8266)
static void C_fcall f_8266(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8575)
static void C_ccall f_8575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8581)
static void C_ccall f_8581(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8579)
static void C_ccall f_8579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8415)
static void C_ccall f_8415(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8522)
static void C_fcall f_8522(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8559)
static void C_ccall f_8559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8549)
static void C_fcall f_8549(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8553)
static void C_ccall f_8553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8556)
static void C_ccall f_8556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8419)
static void C_ccall f_8419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8473)
static void C_fcall f_8473(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8506)
static void C_ccall f_8506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8486)
static void C_fcall f_8486(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8471)
static void C_ccall f_8471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8422)
static void C_ccall f_8422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8448)
static void C_ccall f_8448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8464)
static void C_ccall f_8464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8456)
static void C_ccall f_8456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8440)
static void C_ccall f_8440(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8438)
static void C_ccall f_8438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8366)
static void C_ccall f_8366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8369)
static void C_ccall f_8369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8372)
static void C_ccall f_8372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8392)
static void C_ccall f_8392(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8350)
static void C_ccall f_8350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8342)
static void C_ccall f_8342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8313)
static void C_ccall f_8313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8303)
static void C_ccall f_8303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8310)
static void C_ccall f_8310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8106)
static void C_ccall f_8106(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_8112)
static void C_ccall f_8112(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8124)
static void C_ccall f_8124(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8219)
static void C_fcall f_8219(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8248)
static void C_ccall f_8248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8128)
static void C_ccall f_8128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8131)
static void C_ccall f_8131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8211)
static void C_ccall f_8211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8157)
static void C_fcall f_8157(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8161)
static void C_ccall f_8161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8136)
static void C_ccall f_8136(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8118)
static void C_ccall f_8118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8052)
static void C_ccall f_8052(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8058)
static void C_fcall f_8058(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8084)
static void C_ccall f_8084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8088)
static void C_ccall f_8088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7425)
static void C_ccall f_7425(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7431)
static void C_fcall f_7431(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7465)
static void C_fcall f_7465(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7923)
static void C_fcall f_7923(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7990)
static void C_fcall f_7990(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8019)
static void C_ccall f_8019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7988)
static void C_ccall f_7988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7984)
static void C_ccall f_7984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7930)
static void C_ccall f_7930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7940)
static void C_fcall f_7940(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7969)
static void C_ccall f_7969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7934)
static void C_ccall f_7934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7861)
static void C_fcall f_7861(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7910)
static void C_ccall f_7910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7879)
static void C_ccall f_7879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7887)
static void C_ccall f_7887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7804)
static void C_fcall f_7804(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7833)
static void C_ccall f_7833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7802)
static void C_ccall f_7802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7752)
static void C_fcall f_7752(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7781)
static void C_ccall f_7781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7734)
static void C_ccall f_7734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7678)
static void C_ccall f_7678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7680)
static void C_fcall f_7680(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7709)
static void C_ccall f_7709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7625)
static void C_ccall f_7625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7627)
static void C_fcall f_7627(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7660)
static void C_ccall f_7660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7640)
static void C_fcall f_7640(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7609)
static void C_ccall f_7609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7621)
static void C_ccall f_7621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7617)
static void C_ccall f_7617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7530)
static void C_fcall f_7530(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7559)
static void C_ccall f_7559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7528)
static void C_ccall f_7528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7524)
static void C_ccall f_7524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7474)
static void C_fcall f_7474(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7503)
static void C_ccall f_7503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7472)
static void C_ccall f_7472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6502)
static void C_ccall f_6502(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7420)
static void C_ccall f_7420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7423)
static void C_ccall f_7423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6505)
static void C_fcall f_6505(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7380)
static void C_fcall f_7380(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7409)
static void C_ccall f_7409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7378)
static void C_ccall f_7378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7118)
static void C_fcall f_7118(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7245)
static void C_ccall f_7245(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7329)
static void C_ccall f_7329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7301)
static void C_fcall f_7301(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7308)
static void C_ccall f_7308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7315)
static void C_ccall f_7315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7305)
static void C_ccall f_7305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7264)
static void C_fcall f_7264(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7293)
static void C_ccall f_7293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7262)
static void C_ccall f_7262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7239)
static void C_ccall f_7239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7201)
static void C_fcall f_7201(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7230)
static void C_ccall f_7230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7195)
static void C_ccall f_7195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7144)
static void C_fcall f_7144(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7173)
static void C_ccall f_7173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7138)
static void C_ccall f_7138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7097)
static void C_ccall f_7097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7081)
static void C_ccall f_7081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7077)
static void C_ccall f_7077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7011)
static void C_fcall f_7011(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7040)
static void C_ccall f_7040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7005)
static void C_ccall f_7005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6921)
static void C_fcall f_6921(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6950)
static void C_ccall f_6950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6915)
static void C_ccall f_6915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6823)
static void C_fcall f_6823(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6833)
static void C_fcall f_6833(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6862)
static void C_ccall f_6862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6827)
static void C_ccall f_6827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6790)
static void C_ccall f_6790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6697)
static void C_ccall f_6697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6719)
static void C_fcall f_6719(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6757)
static void C_ccall f_6757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6746)
static void C_fcall f_6746(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6705)
static void C_ccall f_6705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6713)
static void C_ccall f_6713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6701)
static void C_ccall f_6701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6638)
static void C_fcall f_6638(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6641)
static void C_ccall f_6641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6648)
static void C_ccall f_6648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6586)
static void C_fcall f_6586(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6615)
static void C_ccall f_6615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6580)
static void C_ccall f_6580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6487)
static void C_ccall f_6487(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6472)
static void C_ccall f_6472(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6466)
static void C_ccall f_6466(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6457)
static void C_ccall f_6457(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6448)
static void C_ccall f_6448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6439)
static void C_ccall f_6439(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6430)
static void C_ccall f_6430(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6421)
static void C_ccall f_6421(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6412)
static void C_ccall f_6412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6406)
static void C_ccall f_6406(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6400)
static void C_ccall f_6400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5895)
static void C_ccall f_5895(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6398)
static void C_ccall f_6398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5899)
static void C_fcall f_5899(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5904)
static void C_ccall f_5904(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5914)
static void C_ccall f_5914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6077)
static void C_fcall f_6077(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6087)
static void C_ccall f_6087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6103)
static void C_fcall f_6103(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6179)
static void C_fcall f_6179(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6219)
static void C_ccall f_6219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6209)
static void C_ccall f_6209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6182)
static void C_ccall f_6182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6199)
static void C_ccall f_6199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6185)
static void C_ccall f_6185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6188)
static void C_ccall f_6188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6195)
static void C_ccall f_6195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6170)
static void C_ccall f_6170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6160)
static void C_ccall f_6160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6144)
static void C_ccall f_6144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6106)
static void C_ccall f_6106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6121)
static void C_ccall f_6121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6090)
static void C_ccall f_6090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5917)
static void C_ccall f_5917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5958)
static void C_fcall f_5958(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5992)
static void C_fcall f_5992(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6026)
static void C_fcall f_6026(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6029)
static void C_ccall f_6029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5995)
static void C_ccall f_5995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5961)
static void C_ccall f_5961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5920)
static void C_ccall f_5920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5948)
static void C_ccall f_5948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5923)
static void C_ccall f_5923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5935)
static void C_ccall f_5935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5926)
static void C_ccall f_5926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5832)
static void C_ccall f_5832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5838)
static void C_ccall f_5838(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5845)
static void C_ccall f_5845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5848)
static void C_ccall f_5848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5860)
static void C_fcall f_5860(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5889)
static void C_ccall f_5889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5858)
static void C_ccall f_5858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5851)
static void C_ccall f_5851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5808)
static void C_ccall f_5808(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5814)
static void C_fcall f_5814(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5824)
static void C_ccall f_5824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5767)
static void C_ccall f_5767(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5774)
static void C_ccall f_5774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5777)
static void C_fcall f_5777(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5781)
static void C_fcall f_5781(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5757)
static void C_ccall f_5757(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5748)
static void C_ccall f_5748(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5752)
static void C_ccall f_5752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5691)
static void C_ccall f_5691(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_5691)
static void C_ccall f_5691r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_5695)
static void C_ccall f_5695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5725)
static void C_ccall f_5725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5639)
static void C_ccall f_5639(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5643)
static void C_ccall f_5643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5670)
static void C_ccall f_5670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5593)
static void C_ccall f_5593(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5597)
static void C_ccall f_5597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5619)
static void C_ccall f_5619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5575)
static void C_ccall f_5575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5575)
static void C_ccall f_5575r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5579)
static void C_ccall f_5579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5587)
static void C_ccall f_5587(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5557)
static void C_ccall f_5557(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5561)
static void C_ccall f_5561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5304)
static void C_ccall f_5304(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5466)
static void C_fcall f_5466(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5480)
static void C_ccall f_5480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5505)
static void C_ccall f_5505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5516)
static void C_ccall f_5516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5544)
static void C_ccall f_5544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5312)
static void C_ccall f_5312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5375)
static void C_fcall f_5375(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5389)
static void C_ccall f_5389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5414)
static void C_ccall f_5414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5425)
static void C_ccall f_5425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5453)
static void C_ccall f_5453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5315)
static void C_ccall f_5315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5320)
static void C_fcall f_5320(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5334)
static void C_ccall f_5334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5362)
static void C_ccall f_5362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5308)
static void C_ccall f_5308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5163)
static void C_ccall f_5163(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5167)
static void C_ccall f_5167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5171)
static void C_ccall f_5171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5160)
static void C_ccall f_5160(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5157)
static void C_ccall f_5157(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5050)
static void C_ccall f_5050(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5059)
static void C_ccall f_5059(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5090)
static void C_ccall f_5090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5144)
static void C_ccall f_5144(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5144)
static void C_ccall f_5144r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5150)
static void C_ccall f_5150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5096)
static void C_ccall f_5096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5128)
static void C_ccall f_5128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5142)
static void C_ccall f_5142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5134)
static void C_ccall f_5134(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5100)
static void C_ccall f_5100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5122)
static void C_ccall f_5122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5065)
static void C_ccall f_5065(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5071)
static void C_ccall f_5071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5082)
static void C_ccall f_5082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5079)
static void C_ccall f_5079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5054)
static void C_ccall f_5054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4949)
static void C_ccall f_4949(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4955)
static void C_fcall f_4955(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5032)
static void C_ccall f_5032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4983)
static void C_fcall f_4983(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5021)
static void C_ccall f_5021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5009)
static void C_ccall f_5009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4889)
static void C_ccall f_4889(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4905)
static void C_ccall f_4905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4947)
static void C_ccall f_4947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4911)
static void C_ccall f_4911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4926)
static void C_ccall f_4926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4843)
static void C_ccall f_4843(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4887)
static void C_ccall f_4887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4847)
static void C_fcall f_4847(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4813)
static void C_ccall f_4813(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4767)
static void C_ccall f_4767(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4747)
static void C_ccall f_4747(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4753)
static void C_ccall f_4753(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4761)
static void C_ccall f_4761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4765)
static void C_ccall f_4765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4716)
static void C_ccall f_4716(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4722)
static void C_fcall f_4722(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4737)
static void C_ccall f_4737(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4653)
static void C_ccall f_4653(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4669)
static void C_fcall f_4669(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4698)
static void C_ccall f_4698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4641)
static void C_ccall f_4641(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4622)
static void C_fcall f_4622(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4587)
static void C_ccall f_4587(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4580)
static void C_ccall f_4580(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4524)
static void C_ccall f_4524(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4578)
static void C_ccall f_4578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4528)
static void C_ccall f_4528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4551)
static void C_ccall f_4551(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4430)
static void C_ccall f_4430(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4448)
static void C_fcall f_4448(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4470)
static void C_fcall f_4470(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4509)
static void C_ccall f_4509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4477)
static void C_fcall f_4477(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4493)
static void C_ccall f_4493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4481)
static void C_ccall f_4481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4485)
static void C_ccall f_4485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4442)
static void C_ccall f_4442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4386)
static void C_ccall f_4386(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4392)
static void C_fcall f_4392(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4416)
static void C_ccall f_4416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4355)
static void C_ccall f_4355(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4381)
static void C_ccall f_4381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4328)
static void C_ccall f_4328(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4347)
static void C_ccall f_4347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4292)
static void C_ccall f_4292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4298)
static C_word C_fcall f_4298(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4248)
static void C_fcall f_4248(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4227)
static void C_fcall f_4227(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4235)
static void C_ccall f_4235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4239)
static void C_ccall f_4239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4181)
static void C_ccall f_4181(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4187)
static void C_fcall f_4187(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4210)
static void C_ccall f_4210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4214)
static void C_ccall f_4214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4178)
static void C_ccall f_4178(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4133)
static void C_ccall f_4133(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4133)
static void C_ccall f_4133r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4137)
static void C_ccall f_4137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4140)
static void C_fcall f_4140(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4143)
static void C_ccall f_4143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4154)
static void C_ccall f_4154(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4146)
static void C_ccall f_4146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4149)
static void C_ccall f_4149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4118)
static void C_ccall f_4118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4121)
static void C_ccall f_4121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4124)
static void C_ccall f_4124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4085)
static void C_ccall f_4085(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4085)
static void C_ccall f_4085r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4092)
static void C_fcall f_4092(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4095)
static void C_ccall f_4095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4105)
static void C_ccall f_4105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4098)
static void C_ccall f_4098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4020)
static void C_ccall f_4020(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4020)
static void C_ccall f_4020r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4030)
static void C_ccall f_4030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4050)
static void C_fcall f_4050(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4069)
static void C_ccall f_4069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4062)
static void C_ccall f_4062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4072)
static void C_ccall f_4072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4033)
static void C_ccall f_4033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3993)
static void C_ccall f_3993(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3993)
static void C_ccall f_3993r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4007)
static void C_ccall f_4007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3988)
static void C_ccall f_3988(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_13318)
static void C_fcall trf_13318(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13318(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_13318(t0,t1,t2);}

C_noret_decl(trf_13066)
static void C_fcall trf_13066(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_13066(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_13066(t0,t1);}

C_noret_decl(trf_12910)
static void C_fcall trf_12910(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12910(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12910(t0,t1,t2,t3);}

C_noret_decl(trf_12988)
static void C_fcall trf_12988(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12988(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12988(t0,t1,t2);}

C_noret_decl(trf_12760)
static void C_fcall trf_12760(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12760(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12760(t0,t1,t2,t3);}

C_noret_decl(trf_12713)
static void C_fcall trf_12713(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12713(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12713(t0,t1);}

C_noret_decl(trf_12541)
static void C_fcall trf_12541(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12541(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12541(t0,t1,t2);}

C_noret_decl(trf_12513)
static void C_fcall trf_12513(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12513(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12513(t0,t1);}

C_noret_decl(trf_12463)
static void C_fcall trf_12463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12463(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12463(t0,t1,t2,t3);}

C_noret_decl(trf_12469)
static void C_fcall trf_12469(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12469(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12469(t0,t1,t2);}

C_noret_decl(trf_12477)
static void C_fcall trf_12477(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12477(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12477(t0,t1,t2);}

C_noret_decl(trf_12297)
static void C_fcall trf_12297(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12297(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_12297(t0,t1,t2,t3);}

C_noret_decl(trf_12331)
static void C_fcall trf_12331(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12331(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12331(t0,t1);}

C_noret_decl(trf_12161)
static void C_fcall trf_12161(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12161(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12161(t0,t1,t2);}

C_noret_decl(trf_12254)
static void C_fcall trf_12254(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12254(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12254(t0,t1);}

C_noret_decl(trf_12259)
static void C_fcall trf_12259(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12259(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12259(t0,t1,t2);}

C_noret_decl(trf_12222)
static void C_fcall trf_12222(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12222(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12222(t0,t1);}

C_noret_decl(trf_12193)
static void C_fcall trf_12193(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12193(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12193(t0,t1);}

C_noret_decl(trf_12198)
static void C_fcall trf_12198(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12198(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_12198(t0,t1,t2);}

C_noret_decl(trf_11985)
static void C_fcall trf_11985(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11985(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11985(t0,t1);}

C_noret_decl(trf_12077)
static void C_fcall trf_12077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_12077(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_12077(t0,t1);}

C_noret_decl(trf_11487)
static void C_fcall trf_11487(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11487(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11487(t0,t1);}

C_noret_decl(trf_11544)
static void C_fcall trf_11544(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11544(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11544(t0,t1);}

C_noret_decl(trf_11509)
static void C_fcall trf_11509(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11509(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11509(t0,t1,t2);}

C_noret_decl(trf_11151)
static void C_fcall trf_11151(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11151(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11151(t0,t1);}

C_noret_decl(trf_11160)
static void C_fcall trf_11160(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11160(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11160(t0,t1);}

C_noret_decl(trf_11172)
static void C_fcall trf_11172(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11172(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11172(t0,t1);}

C_noret_decl(trf_11184)
static void C_fcall trf_11184(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11184(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_11184(t0,t1);}

C_noret_decl(trf_11194)
static void C_fcall trf_11194(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11194(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11194(t0,t1,t2);}

C_noret_decl(trf_11104)
static void C_fcall trf_11104(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_11104(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_11104(t0,t1,t2);}

C_noret_decl(trf_9982)
static void C_fcall trf_9982(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9982(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9982(t0,t1,t2);}

C_noret_decl(trf_10011)
static void C_fcall trf_10011(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10011(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10011(t0,t1);}

C_noret_decl(trf_10030)
static void C_fcall trf_10030(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10030(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10030(t0,t1);}

C_noret_decl(trf_10049)
static void C_fcall trf_10049(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10049(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10049(t0,t1);}

C_noret_decl(trf_10119)
static void C_fcall trf_10119(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10119(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10119(t0,t1);}

C_noret_decl(trf_10138)
static void C_fcall trf_10138(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10138(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10138(t0,t1);}

C_noret_decl(trf_10220)
static void C_fcall trf_10220(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10220(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10220(t0,t1);}

C_noret_decl(trf_10259)
static void C_fcall trf_10259(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10259(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10259(t0,t1);}

C_noret_decl(trf_10278)
static void C_fcall trf_10278(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10278(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10278(t0,t1);}

C_noret_decl(trf_10297)
static void C_fcall trf_10297(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10297(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10297(t0,t1);}

C_noret_decl(trf_10377)
static void C_fcall trf_10377(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10377(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10377(t0,t1);}

C_noret_decl(trf_10462)
static void C_fcall trf_10462(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10462(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10462(t0,t1);}

C_noret_decl(trf_10576)
static void C_fcall trf_10576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10576(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10576(t0,t1);}

C_noret_decl(trf_10541)
static void C_fcall trf_10541(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10541(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_10541(t0,t1,t2);}

C_noret_decl(trf_10411)
static void C_fcall trf_10411(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10411(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10411(t0,t1);}

C_noret_decl(trf_10172)
static void C_fcall trf_10172(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10172(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10172(t0,t1);}

C_noret_decl(trf_10083)
static void C_fcall trf_10083(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_10083(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_10083(t0,t1);}

C_noret_decl(trf_9933)
static void C_fcall trf_9933(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9933(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9933(t0,t1,t2);}

C_noret_decl(trf_9738)
static void C_fcall trf_9738(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9738(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9738(t0,t1,t2);}

C_noret_decl(trf_9629)
static void C_fcall trf_9629(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9629(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9629(t0,t1);}

C_noret_decl(trf_9588)
static void C_fcall trf_9588(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9588(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9588(t0,t1);}

C_noret_decl(trf_9384)
static void C_fcall trf_9384(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9384(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9384(t0,t1);}

C_noret_decl(trf_9207)
static void C_fcall trf_9207(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9207(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9207(t0,t1,t2,t3);}

C_noret_decl(trf_9247)
static void C_fcall trf_9247(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9247(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9247(t0,t1,t2,t3);}

C_noret_decl(trf_9164)
static void C_fcall trf_9164(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9164(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9164(t0,t1,t2,t3);}

C_noret_decl(trf_9130)
static void C_fcall trf_9130(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9130(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_9130(t0,t1,t2,t3);}

C_noret_decl(trf_9070)
static void C_fcall trf_9070(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9070(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9070(t0,t1);}

C_noret_decl(trf_8940)
static void C_fcall trf_8940(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8940(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8940(t0,t1);}

C_noret_decl(trf_8977)
static void C_fcall trf_8977(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8977(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8977(t0,t1);}

C_noret_decl(trf_8804)
static void C_fcall trf_8804(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8804(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8804(t0,t1,t2);}

C_noret_decl(trf_8831)
static void C_fcall trf_8831(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8831(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8831(t0,t1,t2);}

C_noret_decl(trf_8718)
static void C_fcall trf_8718(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8718(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8718(t0,t1,t2);}

C_noret_decl(trf_8763)
static void C_fcall trf_8763(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8763(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8763(t0,t1,t2);}

C_noret_decl(trf_8645)
static void C_fcall trf_8645(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8645(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8645(t0,t1,t2);}

C_noret_decl(trf_8590)
static void C_fcall trf_8590(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8590(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8590(t0,t1,t2,t3);}

C_noret_decl(trf_8603)
static void C_fcall trf_8603(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8603(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8603(t0,t1);}

C_noret_decl(trf_8266)
static void C_fcall trf_8266(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8266(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8266(t0,t1,t2,t3);}

C_noret_decl(trf_8522)
static void C_fcall trf_8522(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8522(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8522(t0,t1,t2);}

C_noret_decl(trf_8549)
static void C_fcall trf_8549(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8549(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8549(t0,t1,t2);}

C_noret_decl(trf_8473)
static void C_fcall trf_8473(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8473(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8473(t0,t1,t2,t3);}

C_noret_decl(trf_8486)
static void C_fcall trf_8486(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8486(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8486(t0,t1);}

C_noret_decl(trf_8219)
static void C_fcall trf_8219(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8219(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8219(t0,t1,t2);}

C_noret_decl(trf_8157)
static void C_fcall trf_8157(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8157(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8157(t0,t1);}

C_noret_decl(trf_8058)
static void C_fcall trf_8058(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8058(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8058(t0,t1,t2);}

C_noret_decl(trf_7431)
static void C_fcall trf_7431(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7431(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7431(t0,t1,t2);}

C_noret_decl(trf_7465)
static void C_fcall trf_7465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7465(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7465(t0,t1);}

C_noret_decl(trf_7923)
static void C_fcall trf_7923(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7923(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7923(t0,t1);}

C_noret_decl(trf_7990)
static void C_fcall trf_7990(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7990(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7990(t0,t1,t2);}

C_noret_decl(trf_7940)
static void C_fcall trf_7940(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7940(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7940(t0,t1,t2);}

C_noret_decl(trf_7861)
static void C_fcall trf_7861(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7861(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7861(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7804)
static void C_fcall trf_7804(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7804(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7804(t0,t1,t2);}

C_noret_decl(trf_7752)
static void C_fcall trf_7752(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7752(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7752(t0,t1,t2);}

C_noret_decl(trf_7680)
static void C_fcall trf_7680(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7680(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7680(t0,t1,t2);}

C_noret_decl(trf_7627)
static void C_fcall trf_7627(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7627(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7627(t0,t1,t2,t3);}

C_noret_decl(trf_7640)
static void C_fcall trf_7640(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7640(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7640(t0,t1);}

C_noret_decl(trf_7530)
static void C_fcall trf_7530(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7530(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7530(t0,t1,t2);}

C_noret_decl(trf_7474)
static void C_fcall trf_7474(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7474(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7474(t0,t1,t2);}

C_noret_decl(trf_6505)
static void C_fcall trf_6505(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6505(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6505(t0,t1,t2);}

C_noret_decl(trf_7380)
static void C_fcall trf_7380(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7380(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7380(t0,t1,t2);}

C_noret_decl(trf_7118)
static void C_fcall trf_7118(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7118(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7118(t0,t1);}

C_noret_decl(trf_7301)
static void C_fcall trf_7301(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7301(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7301(t0,t1);}

C_noret_decl(trf_7264)
static void C_fcall trf_7264(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7264(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7264(t0,t1,t2);}

C_noret_decl(trf_7201)
static void C_fcall trf_7201(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7201(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7201(t0,t1,t2);}

C_noret_decl(trf_7144)
static void C_fcall trf_7144(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7144(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7144(t0,t1,t2);}

C_noret_decl(trf_7011)
static void C_fcall trf_7011(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7011(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7011(t0,t1,t2);}

C_noret_decl(trf_6921)
static void C_fcall trf_6921(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6921(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6921(t0,t1,t2);}

C_noret_decl(trf_6823)
static void C_fcall trf_6823(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6823(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6823(t0,t1);}

C_noret_decl(trf_6833)
static void C_fcall trf_6833(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6833(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6833(t0,t1,t2);}

C_noret_decl(trf_6719)
static void C_fcall trf_6719(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6719(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6719(t0,t1,t2);}

C_noret_decl(trf_6746)
static void C_fcall trf_6746(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6746(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6746(t0,t1,t2);}

C_noret_decl(trf_6638)
static void C_fcall trf_6638(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6638(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6638(t0,t1);}

C_noret_decl(trf_6586)
static void C_fcall trf_6586(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6586(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6586(t0,t1,t2);}

C_noret_decl(trf_5899)
static void C_fcall trf_5899(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5899(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5899(t0,t1);}

C_noret_decl(trf_6077)
static void C_fcall trf_6077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6077(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6077(t0,t1,t2);}

C_noret_decl(trf_6103)
static void C_fcall trf_6103(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6103(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6103(t0,t1);}

C_noret_decl(trf_6179)
static void C_fcall trf_6179(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6179(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6179(t0,t1);}

C_noret_decl(trf_5958)
static void C_fcall trf_5958(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5958(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5958(t0,t1);}

C_noret_decl(trf_5992)
static void C_fcall trf_5992(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5992(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5992(t0,t1);}

C_noret_decl(trf_6026)
static void C_fcall trf_6026(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6026(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6026(t0,t1);}

C_noret_decl(trf_5860)
static void C_fcall trf_5860(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5860(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5860(t0,t1,t2);}

C_noret_decl(trf_5814)
static void C_fcall trf_5814(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5814(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5814(t0,t1,t2);}

C_noret_decl(trf_5777)
static void C_fcall trf_5777(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5777(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5777(t0,t1);}

C_noret_decl(trf_5781)
static void C_fcall trf_5781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5781(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5781(t0,t1,t2);}

C_noret_decl(trf_5466)
static void C_fcall trf_5466(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5466(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5466(t0,t1,t2);}

C_noret_decl(trf_5375)
static void C_fcall trf_5375(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5375(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5375(t0,t1,t2);}

C_noret_decl(trf_5320)
static void C_fcall trf_5320(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5320(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5320(t0,t1,t2);}

C_noret_decl(trf_4955)
static void C_fcall trf_4955(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4955(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4955(t0,t1,t2);}

C_noret_decl(trf_4983)
static void C_fcall trf_4983(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4983(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4983(t0,t1);}

C_noret_decl(trf_4847)
static void C_fcall trf_4847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4847(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4847(t0,t1);}

C_noret_decl(trf_4722)
static void C_fcall trf_4722(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4722(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4722(t0,t1,t2,t3);}

C_noret_decl(trf_4669)
static void C_fcall trf_4669(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4669(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4669(t0,t1,t2);}

C_noret_decl(trf_4622)
static void C_fcall trf_4622(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4622(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4622(t0,t1);}

C_noret_decl(trf_4448)
static void C_fcall trf_4448(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4448(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4448(t0,t1,t2);}

C_noret_decl(trf_4470)
static void C_fcall trf_4470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4470(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4470(t0,t1);}

C_noret_decl(trf_4477)
static void C_fcall trf_4477(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4477(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4477(t0,t1);}

C_noret_decl(trf_4392)
static void C_fcall trf_4392(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4392(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4392(t0,t1,t2,t3);}

C_noret_decl(trf_4248)
static void C_fcall trf_4248(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4248(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4248(t0,t1,t2,t3);}

C_noret_decl(trf_4227)
static void C_fcall trf_4227(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4227(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4227(t0,t1);}

C_noret_decl(trf_4187)
static void C_fcall trf_4187(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4187(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4187(t0,t1,t2);}

C_noret_decl(trf_4140)
static void C_fcall trf_4140(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4140(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4140(t0,t1);}

C_noret_decl(trf_4092)
static void C_fcall trf_4092(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4092(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4092(t0,t1);}

C_noret_decl(trf_4050)
static void C_fcall trf_4050(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4050(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4050(t0,t1,t2);}

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
lf[174]=C_h_intern(&lf[174],16,"o-r/access-count");
lf[175]=C_h_intern(&lf[175],18,"captured-variables");
lf[176]=C_h_intern(&lf[176],13,"explicit-rest");
lf[177]=C_h_intern(&lf[177],8,"assigned");
lf[178]=C_h_intern(&lf[178],5,"boxed");
lf[179]=C_h_intern(&lf[179],6,"global");
lf[180]=C_h_intern(&lf[180],12,"contractable");
lf[181]=C_h_intern(&lf[181],16,"standard-binding");
lf[182]=C_h_intern(&lf[182],16,"assigned-locally");
lf[183]=C_h_intern(&lf[183],11,"collapsable");
lf[184]=C_h_intern(&lf[184],9,"removable");
lf[185]=C_h_intern(&lf[185],9,"undefined");
lf[186]=C_h_intern(&lf[186],9,"replacing");
lf[187]=C_h_intern(&lf[187],6,"unused");
lf[188]=C_h_intern(&lf[188],6,"simple");
lf[189]=C_h_intern(&lf[189],9,"inlinable");
lf[190]=C_h_intern(&lf[190],13,"inline-export");
lf[191]=C_h_intern(&lf[191],21,"has-unused-parameters");
lf[192]=C_h_intern(&lf[192],16,"extended-binding");
lf[193]=C_h_intern(&lf[193],12,"customizable");
lf[194]=C_h_intern(&lf[194],8,"constant");
lf[195]=C_h_intern(&lf[195],10,"boxed-rest");
lf[196]=C_h_intern(&lf[196],11,"hidden-refs");
lf[197]=C_h_intern(&lf[197],34,"\010compilerdefault-standard-bindings");
lf[198]=C_h_intern(&lf[198],34,"\010compilerdefault-extended-bindings");
lf[199]=C_h_intern(&lf[199],9,"make-node");
lf[200]=C_h_intern(&lf[200],4,"node");
lf[201]=C_h_intern(&lf[201],5,"node\077");
lf[202]=C_h_intern(&lf[202],15,"node-class-set!");
lf[203]=C_h_intern(&lf[203],14,"\003sysblock-set!");
lf[204]=C_h_intern(&lf[204],10,"node-class");
lf[205]=C_h_intern(&lf[205],20,"node-parameters-set!");
lf[206]=C_h_intern(&lf[206],15,"node-parameters");
lf[207]=C_h_intern(&lf[207],24,"node-subexpressions-set!");
lf[208]=C_h_intern(&lf[208],19,"node-subexpressions");
lf[209]=C_h_intern(&lf[209],16,"\010compilervarnode");
lf[210]=C_h_intern(&lf[210],13,"\004corevariable");
lf[211]=C_h_intern(&lf[211],14,"\010compilerqnode");
lf[212]=C_h_intern(&lf[212],25,"\010compilerbuild-node-graph");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000\016bad expression");
lf[214]=C_h_intern(&lf[214],15,"\004coreglobal-ref");
lf[215]=C_h_intern(&lf[215],2,"if");
lf[216]=C_h_intern(&lf[216],14,"\004coreundefined");
lf[217]=C_h_intern(&lf[217],8,"truncate");
lf[218]=C_h_intern(&lf[218],4,"type");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000;literal \047~s\047 is out of range - will be truncated to integer");
lf[220]=C_h_intern(&lf[220],6,"fixnum");
lf[221]=C_h_intern(&lf[221],11,"number-type");
lf[222]=C_h_intern(&lf[222],6,"unzip1");
lf[223]=C_h_intern(&lf[223],11,"\004corelambda");
lf[224]=C_h_intern(&lf[224],14,"\004coreprimitive");
lf[225]=C_h_intern(&lf[225],11,"\004coreinline");
lf[226]=C_h_intern(&lf[226],13,"\004corecallunit");
lf[227]=C_h_intern(&lf[227],9,"\004coreproc");
lf[228]=C_h_intern(&lf[228],4,"set!");
lf[229]=C_h_intern(&lf[229],9,"\004coreset!");
lf[230]=C_h_intern(&lf[230],29,"\004coreforeign-callback-wrapper");
lf[231]=C_h_intern(&lf[231],5,"sixth");
lf[232]=C_h_intern(&lf[232],5,"fifth");
lf[233]=C_h_intern(&lf[233],20,"\004coreinline_allocate");
lf[234]=C_h_intern(&lf[234],8,"\004coreapp");
lf[235]=C_h_intern(&lf[235],9,"\004corecall");
lf[236]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\001\376\377\016");
lf[237]=C_h_intern(&lf[237],24,"\010compilersource-filename");
lf[238]=C_h_intern(&lf[238],28,"\003syssymbol->qualified-string");
lf[239]=C_h_intern(&lf[239],7,"\003sysget");
lf[240]=C_h_intern(&lf[240],34,"\010compileralways-bound-to-procedure");
lf[241]=C_h_intern(&lf[241],15,"\004coreinline_ref");
lf[242]=C_h_intern(&lf[242],18,"\004coreinline_update");
lf[243]=C_h_intern(&lf[243],19,"\004coreinline_loc_ref");
lf[244]=C_h_intern(&lf[244],22,"\004coreinline_loc_update");
lf[245]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\006\000\376\377\016");
lf[246]=C_h_intern(&lf[246],1,"o");
lf[247]=C_decode_literal(C_heaptop,"\376B\000\000\033eliminated procedure checks");
lf[248]=C_h_intern(&lf[248],30,"\010compilerbuild-expression-tree");
lf[249]=C_h_intern(&lf[249],12,"\004coreclosure");
lf[250]=C_h_intern(&lf[250],4,"last");
lf[251]=C_h_intern(&lf[251],4,"list");
lf[252]=C_h_intern(&lf[252],7,"butlast");
lf[253]=C_h_intern(&lf[253],5,"cons*");
lf[254]=C_h_intern(&lf[254],9,"\004corebind");
lf[255]=C_h_intern(&lf[255],10,"\004coreunbox");
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
lf[448]=C_decode_literal(C_heaptop,"\376B\000\000\077(c)2008-2009 The Chicken Team\012(c)2000-2007 Felix L. Winkelmann\012");
lf[449]=C_h_intern(&lf[449],20,"\010compilerprint-usage");
lf[450]=C_decode_literal(C_heaptop,"\376B\000\030LUsage: chicken FILENAME OPTION ...\012\012  `chicken\047 is the CHICKEN compiler.\012  "
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
"   -inline-global               enable cross-module inlining\012    -emit-inline-fi"
"le FILENAME   generate file with globally inlinable\012                            "
"      procedures (implies -inline -local)\012    -consult-inline-file FILENAME  exp"
"licitly load inline file\012    -no-argc-checks              disable argument count"
" checks\012    -no-bound-checks             disable bound variable checks\012    -no-p"
"rocedure-checks         disable procedure call checks\012    -no-procedure-checks-f"
"or-usual-bindings\012                                 disable procedure call checks"
" only for usual\012                                  bindings\012\012  Configuration opti"
"ons:\012\012    -unit NAME                   compile file as a library unit\012    -uses "
"NAME                   declare library unit as used.\012    -heap-size NUMBER      "
"      specifies heap-size of compiled executable\012    -heap-initial-size NUMBER  "
"  specifies heap-size at startup time\012    -heap-growth PERCENTAGE      specifies"
" growth-rate of expanding heap\012    -heap-shrinkage PERCENTAGE   specifies shrink"
"-rate of contracting heap\012    -nursery NUMBER  -stack-size NUMBER\012              "
"                   specifies nursery size of compiled executable\012    -extend FIL"
"ENAME             load file before compilation commences\012    -prelude EXPRESSION"
"          add expression to front of source file\012    -postlude EXPRESSION       "
"  add expression to end of source file\012    -prologue FILENAME           include "
"file before main source file\012    -epilogue FILENAME           include file after"
" main source file\012    -dynamic                     compile as dynamically loadab"
"le code\012    -require-extension NAME      require and import extension NAME\012    -"
"static-extension NAME       import extension NAME but link statically\012          "
"                        (if available)\012\012  Obscure options:\012\012    -debug MODES    "
"             display debugging output for the given modes\012    -unsafe-libraries "
"           marks the generated file as being linked with\012                       "
"           the unsafe runtime system\012    -raw                         do not gen"
"erate implicit init- and exit code                           \012    -emit-external"
"-prototypes-first\012                                 emit prototypes for callbacks"
" before foreign\012                                  declarations\012    -ignore-repos"
"itory           do not refer to repository for extensions\012    -setup-mode       "
"           prefer the current directory when locating extensions\012");
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
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3981,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k3979 */
static void C_ccall f_3981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3984,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k3982 in k3979 */
static void C_ccall f_3984(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3984,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! compiler-cleanup-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3988,tmp=(C_word)a,a+=2,tmp));
t3=C_set_block_item(lf[3] /* debugging-chicken */,0,C_SCHEME_END_OF_LIST);
t4=C_set_block_item(lf[4] /* disabled-warnings */,0,C_SCHEME_END_OF_LIST);
t5=C_mutate((C_word*)lf[5]+1 /* (set! bomb ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3993,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[10]+1 /* (set! debugging ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4020,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[19]+1 /* (set! compiler-warning ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4085,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[24]+1 /* (set! quit ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4114,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[27]+1 /* (set! syntax-error-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4133,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[35]+1 /* (set! syntax-error ...) */,*((C_word*)lf[27]+1));
t11=C_mutate((C_word*)lf[36]+1 /* (set! emit-syntax-trace-info ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4178,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[37]+1 /* (set! map-llist ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4181,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[38]+1 /* (set! check-signature ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4224,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[41]+1 /* (set! posq ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4292,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[42]+1 /* (set! stringify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4328,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[46]+1 /* (set! symbolify ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4355,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[48]+1 /* (set! build-lambda-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4386,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[49]+1 /* (set! string->c-identifier ...) */,C_retrieve(lf[50]));
t19=C_mutate((C_word*)lf[51]+1 /* (set! c-ify-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4430,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate((C_word*)lf[60]+1 /* (set! valid-c-identifier? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4524,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate((C_word*)lf[63]+1 /* (set! words ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4580,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate((C_word*)lf[64]+1 /* (set! words->bytes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4587,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate((C_word*)lf[65]+1 /* (set! check-and-open-input-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4594,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[72]+1 /* (set! close-checked-input-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4641,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[75]+1 /* (set! fold-inner ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4653,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[77]+1 /* (set! follow-without-loop ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4716,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[78]+1 /* (set! sort-symbols ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4747,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[81]+1 /* (set! constant? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4767,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[83]+1 /* (set! collapsable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4813,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[84]+1 /* (set! immediate? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4843,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate((C_word*)lf[86]+1 /* (set! basic-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4889,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate((C_word*)lf[89]+1 /* (set! canonicalize-begin-body ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4949,tmp=(C_word)a,a+=2,tmp));
t33=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5046,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 255  condition-predicate");
((C_proc3)C_retrieve_symbol_proc(lf[498]))(3,*((C_word*)lf[498]+1),t33,lf[496]);}

/* k5044 in k3982 in k3979 */
static void C_ccall f_5046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5046,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5049,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 256  condition-property-accessor");
((C_proc4)C_retrieve_symbol_proc(lf[495]))(4,*((C_word*)lf[495]+1),t2,lf[496],lf[497]);}

/* k5047 in k5044 in k3982 in k3979 */
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
C_save_and_reclaim((void*)tr2,(void*)f_5049,2,t0,t1);}
t2=C_mutate((C_word*)lf[96]+1 /* (set! string->expr ...) */,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5050,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[108]+1 /* (set! decompose-lambda-list ...) */,C_retrieve(lf[109]));
t4=C_mutate((C_word*)lf[110]+1 /* (set! process-lambda-documentation ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5157,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[111]+1 /* (set! llist-length ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5160,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[112]+1 /* (set! expand-profile-lambda ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5163,tmp=(C_word)a,a+=2,tmp));
t7=C_SCHEME_TRUE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_mutate((C_word*)lf[122]+1 /* (set! initialize-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5304,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[134]+1 /* (set! get ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5557,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[136]+1 /* (set! get-all ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5575,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[138]+1 /* (set! put! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5593,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[140]+1 /* (set! collect! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5639,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[141]+1 /* (set! count! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5691,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[142]+1 /* (set! get-list ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5748,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[143]+1 /* (set! get-line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5757,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[145]+1 /* (set! get-line-2 ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5767,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[146]+1 /* (set! find-lambda-container ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5808,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[148]+1 /* (set! display-line-number-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5832,tmp=(C_word)a,a+=2,tmp));
t20=C_SCHEME_FALSE;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_mutate((C_word*)lf[151]+1 /* (set! display-analysis-database ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5895,a[2]=t21,tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[199]+1 /* (set! make-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6400,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[201]+1 /* (set! node? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6406,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[202]+1 /* (set! node-class-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6412,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[204]+1 /* (set! node-class ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6421,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[205]+1 /* (set! node-parameters-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6430,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[206]+1 /* (set! node-parameters ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6439,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[207]+1 /* (set! node-subexpressions-set! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6448,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[208]+1 /* (set! node-subexpressions ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6457,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate((C_word*)lf[199]+1 /* (set! make-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6466,tmp=(C_word)a,a+=2,tmp));
t32=C_mutate((C_word*)lf[209]+1 /* (set! varnode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6472,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate((C_word*)lf[211]+1 /* (set! qnode ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6487,tmp=(C_word)a,a+=2,tmp));
t34=C_mutate((C_word*)lf[212]+1 /* (set! build-node-graph ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_6502,tmp=(C_word)a,a+=2,tmp));
t35=C_mutate((C_word*)lf[248]+1 /* (set! build-expression-tree ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_7425,tmp=(C_word)a,a+=2,tmp));
t36=C_mutate((C_word*)lf[261]+1 /* (set! fold-boolean ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8052,tmp=(C_word)a,a+=2,tmp));
t37=C_mutate((C_word*)lf[263]+1 /* (set! inline-lambda-bindings ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8106,tmp=(C_word)a,a+=2,tmp));
t38=C_mutate((C_word*)lf[268]+1 /* (set! copy-node-tree-and-rename ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8254,tmp=(C_word)a,a+=2,tmp));
t39=C_mutate((C_word*)lf[275]+1 /* (set! tree-copy ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8639,tmp=(C_word)a,a+=2,tmp));
t40=C_mutate((C_word*)lf[276]+1 /* (set! copy-node! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8673,tmp=(C_word)a,a+=2,tmp));
t41=C_mutate((C_word*)lf[277]+1 /* (set! node->sexpr ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8712,tmp=(C_word)a,a+=2,tmp));
t42=C_mutate((C_word*)lf[278]+1 /* (set! sexpr->node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8798,tmp=(C_word)a,a+=2,tmp));
t43=C_mutate((C_word*)lf[279]+1 /* (set! emit-global-inline-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8866,tmp=(C_word)a,a+=2,tmp));
t44=C_mutate((C_word*)lf[297]+1 /* (set! load-inline-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9058,tmp=(C_word)a,a+=2,tmp));
t45=C_mutate((C_word*)lf[299]+1 /* (set! match-node ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9127,tmp=(C_word)a,a+=2,tmp));
t46=C_mutate((C_word*)lf[302]+1 /* (set! expression-has-side-effects? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9352,tmp=(C_word)a,a+=2,tmp));
t47=C_mutate((C_word*)lf[306]+1 /* (set! simple-lambda-node? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9453,tmp=(C_word)a,a+=2,tmp));
t48=C_mutate((C_word*)lf[307]+1 /* (set! dump-undefined-globals ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9575,tmp=(C_word)a,a+=2,tmp));
t49=C_mutate((C_word*)lf[309]+1 /* (set! dump-defined-globals ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9616,tmp=(C_word)a,a+=2,tmp));
t50=C_mutate((C_word*)lf[310]+1 /* (set! dump-global-refs ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9653,tmp=(C_word)a,a+=2,tmp));
t51=C_mutate((C_word*)lf[311]+1 /* (set! toplevel-definition-hook ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9702,tmp=(C_word)a,a+=2,tmp));
t52=C_mutate((C_word*)lf[314]+1 /* (set! compute-database-statistics ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9723,tmp=(C_word)a,a+=2,tmp));
t53=C_mutate((C_word*)lf[317]+1 /* (set! print-program-statistics ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9831,tmp=(C_word)a,a+=2,tmp));
t54=C_mutate((C_word*)lf[327]+1 /* (set! pprint-expressions-to-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9912,tmp=(C_word)a,a+=2,tmp));
t55=C_mutate((C_word*)lf[333]+1 /* (set! foreign-type-check ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9970,tmp=(C_word)a,a+=2,tmp));
t56=C_mutate((C_word*)lf[413]+1 /* (set! foreign-type-convert-result ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11028,tmp=(C_word)a,a+=2,tmp));
t57=C_mutate((C_word*)lf[414]+1 /* (set! foreign-type-convert-argument ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11059,tmp=(C_word)a,a+=2,tmp));
t58=C_mutate((C_word*)lf[415]+1 /* (set! final-foreign-type ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11090,tmp=(C_word)a,a+=2,tmp));
t59=C_mutate((C_word*)lf[417]+1 /* (set! estimate-foreign-result-size ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11135,tmp=(C_word)a,a+=2,tmp));
t60=C_mutate((C_word*)lf[423]+1 /* (set! estimate-foreign-result-location-size ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11465,tmp=(C_word)a,a+=2,tmp));
t61=C_mutate((C_word*)lf[426]+1 /* (set! finish-foreign-result ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11786,tmp=(C_word)a,a+=2,tmp));
t62=C_mutate((C_word*)lf[439]+1 /* (set! scan-used-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12155,tmp=(C_word)a,a+=2,tmp));
t63=C_mutate((C_word*)lf[440]+1 /* (set! scan-free-variables ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12294,tmp=(C_word)a,a+=2,tmp));
t64=C_mutate((C_word*)lf[442]+1 /* (set! chop-separator ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12503,tmp=(C_word)a,a+=2,tmp));
t65=C_mutate((C_word*)lf[445]+1 /* (set! chop-extension ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12532,tmp=(C_word)a,a+=2,tmp));
t66=C_mutate((C_word*)lf[446]+1 /* (set! print-version ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12574,tmp=(C_word)a,a+=2,tmp));
t67=C_mutate((C_word*)lf[449]+1 /* (set! print-usage ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12612,tmp=(C_word)a,a+=2,tmp));
t68=C_mutate((C_word*)lf[451]+1 /* (set! make-block-variable-literal ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12624,tmp=(C_word)a,a+=2,tmp));
t69=C_mutate((C_word*)lf[453]+1 /* (set! block-variable-literal? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12630,tmp=(C_word)a,a+=2,tmp));
t70=C_mutate((C_word*)lf[454]+1 /* (set! block-variable-literal-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12636,tmp=(C_word)a,a+=2,tmp));
t71=C_mutate((C_word*)lf[455]+1 /* (set! make-random-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12645,tmp=(C_word)a,a+=2,tmp));
t72=C_mutate((C_word*)lf[458]+1 /* (set! set-real-name! ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12704,tmp=(C_word)a,a+=2,tmp));
t73=C_mutate((C_word*)lf[40]+1 /* (set! real-name ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12710,tmp=(C_word)a,a+=2,tmp));
t74=C_mutate((C_word*)lf[461]+1 /* (set! real-name2 ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12801,tmp=(C_word)a,a+=2,tmp));
t75=C_mutate((C_word*)lf[462]+1 /* (set! display-real-name-table ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12813,tmp=(C_word)a,a+=2,tmp));
t76=C_mutate((C_word*)lf[463]+1 /* (set! source-info->string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12834,tmp=(C_word)a,a+=2,tmp));
t77=C_mutate((C_word*)lf[469]+1 /* (set! source-info->line ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12880,tmp=(C_word)a,a+=2,tmp));
t78=C_mutate((C_word*)lf[470]+1 /* (set! string-null? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12898,tmp=(C_word)a,a+=2,tmp));
t79=C_mutate((C_word*)lf[471]+1 /* (set! dump-nodes ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12901,tmp=(C_word)a,a+=2,tmp));
t80=C_retrieve(lf[472]);
t81=C_mutate((C_word*)lf[472]+1 /* (set! user-read-hook ...) */,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13024,a[2]=t80,tmp=(C_word)a,a+=3,tmp));
t82=C_mutate((C_word*)lf[475]+1 /* (set! scan-sharp-greater-string ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13057,tmp=(C_word)a,a+=2,tmp));
t83=C_mutate((C_word*)lf[85]+1 /* (set! big-fixnum? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13126,tmp=(C_word)a,a+=2,tmp));
t84=C_mutate((C_word*)lf[312]+1 /* (set! hide-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13150,tmp=(C_word)a,a+=2,tmp));
t85=C_mutate((C_word*)lf[480]+1 /* (set! export-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13183,tmp=(C_word)a,a+=2,tmp));
t86=C_mutate((C_word*)lf[291]+1 /* (set! variable-visible? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13216,tmp=(C_word)a,a+=2,tmp));
t87=C_mutate((C_word*)lf[483]+1 /* (set! mark-variable ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13237,tmp=(C_word)a,a+=2,tmp));
t88=C_mutate((C_word*)lf[484]+1 /* (set! variable-mark ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13265,tmp=(C_word)a,a+=2,tmp));
t89=C_mutate((C_word*)lf[485]+1 /* (set! intrinsic? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13271,tmp=(C_word)a,a+=2,tmp));
t90=C_mutate((C_word*)lf[486]+1 /* (set! foldable? ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13282,tmp=(C_word)a,a+=2,tmp));
t91=C_mutate((C_word*)lf[487]+1 /* (set! load-identifier-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_13293,tmp=(C_word)a,a+=2,tmp));
t92=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t92+1)))(2,t92,C_SCHEME_UNDEFINED);}

/* ##compiler#load-identifier-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13293(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13293,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13297,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 1482 repository-path");
((C_proc2)C_retrieve_symbol_proc(lf[494]))(2,*((C_word*)lf[494]+1),t3);}

/* k13295 in ##compiler#load-identifier-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13297,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13303,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13387,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 1483 make-pathname");
((C_proc4)C_retrieve_symbol_proc(lf[493]))(4,*((C_word*)lf[493]+1),t3,t1,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k13385 in k13295 in ##compiler#load-identifier-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1483 file-exists?");
((C_proc3)C_retrieve_symbol_proc(lf[71]))(3,*((C_word*)lf[71]+1),((C_word*)t0)[2],t1);}

/* k13301 in k13295 in ##compiler#load-identifier-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13303,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13309,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[490]))){
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13374,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t4,lf[492],t3);}
else{
t3=t2;
f_13309(2,t3,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k13372 in k13301 in k13295 in ##compiler#load-identifier-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13377,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k13375 in k13372 in k13301 in k13295 in ##compiler#load-identifier-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13380,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,lf[491],((C_word*)t0)[2]);}

/* k13378 in k13375 in k13372 in k13301 in k13295 in ##compiler#load-identifier-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k13307 in k13301 in k13295 in ##compiler#load-identifier-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13316,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 1491 read-file");
((C_proc3)C_retrieve_symbol_proc(lf[489]))(3,*((C_word*)lf[489]+1),t2,((C_word*)t0)[2]);}

/* k13314 in k13307 in k13301 in k13295 in ##compiler#load-identifier-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13316,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13318,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_13318(t5,((C_word*)t0)[2],t1);}

/* loop3847 in k13314 in k13307 in k13301 in k13295 in ##compiler#load-identifier-database in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_13318(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_13318,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13360,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13338,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13342,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_i_car(t4);
C_trace("support.scm: 1490 ##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[239]))(4,*((C_word*)lf[239]+1),t7,t8,lf[488]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k13340 in loop3847 in k13314 in k13307 in k13301 in k13295 in ##compiler#load-identifier-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13342,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
t4=(C_word)C_a_i_list(&a,1,t3);
C_trace("support.scm: 1490 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[54]+1)))(4,*((C_word*)lf[54]+1),((C_word*)t0)[2],t2,t4);}

/* k13336 in loop3847 in k13314 in k13307 in k13301 in k13295 in ##compiler#load-identifier-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1488 ##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[488],t1);}

/* k13358 in loop3847 in k13314 in k13307 in k13301 in k13295 in ##compiler#load-identifier-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_13318(t3,((C_word*)t0)[2],t2);}

/* foldable? in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13282(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13282,3,t0,t1,t2);}
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[239]))(4,*((C_word*)lf[239]+1),t1,t2,lf[129]);}

/* ##compiler#intrinsic? in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13271(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13271,3,t0,t1,t2);}
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[239]))(4,*((C_word*)lf[239]+1),t1,t2,lf[125]);}

/* ##compiler#variable-mark in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13265(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13265,4,t0,t1,t2,t3);}
C_trace("support.scm: 1473 ##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[239]))(4,*((C_word*)lf[239]+1),t1,t2,t3);}

/* ##compiler#mark-variable in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13237(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_13237r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_13237r(t0,t1,t2,t3,t4);}}

static void C_ccall f_13237r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13241,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
C_trace("support.scm: 1470 ##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t1,t2,t3,C_SCHEME_TRUE);}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=(C_word)C_i_car(t4);
C_trace("support.scm: 1470 ##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t1,t2,t3,t7);}
else{
C_trace("##sys#error");
t7=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k13239 in ##compiler#mark-variable in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1470 ##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##compiler#variable-visible? in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13216(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13216,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13220,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 1463 ##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[239]))(4,*((C_word*)lf[239]+1),t3,t2,lf[479]);}

/* k13218 in ##compiler#variable-visible? in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13220(C_word c,C_word t0,C_word t1){
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

/* ##compiler#export-variable in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13183(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13183,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,1,lf[481]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13189,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t1,t2,lf[479],C_SCHEME_TRUE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=(C_word)C_i_car(t3);
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t1,t2,lf[479],t6);}
else{
C_trace("##sys#error");
t6=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k13187 in ##compiler#export-variable in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[479],t1);}

/* ##compiler#hide-variable in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13150(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13150,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,1,lf[478]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13156,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t1,t2,lf[479],C_SCHEME_TRUE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=(C_word)C_i_car(t3);
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t1,t2,lf[479],t6);}
else{
C_trace("##sys#error");
t6=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k13154 in ##compiler#hide-variable in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[479],t1);}

/* ##compiler#big-fixnum? in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13126(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13126,3,t0,t1,t2);}
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

/* ##compiler#scan-sharp-greater-string in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13057(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13057,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13061,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 1425 open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[45]))(2,*((C_word*)lf[45]+1),t3);}

/* k13059 in ##compiler#scan-sharp-greater-string in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13061,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13066,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_13066(t5,((C_word*)t0)[2]);}

/* loop in k13059 in ##compiler#scan-sharp-greater-string in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_13066(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_13066,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("read-char/port");
t3=C_retrieve(lf[476]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k13068 in loop in k13059 in ##compiler#scan-sharp-greater-string in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13070,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
C_trace("support.scm: 1428 quit");
((C_proc3)C_retrieve_proc(*((C_word*)lf[24]+1)))(3,*((C_word*)lf[24]+1),((C_word*)t0)[5],lf[477]);}
else{
switch(t1){
case C_make_character(10):
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13088,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 1430 newline");
((C_proc3)C_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[3]);
case C_make_character(60):
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13100,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("read-char/port");
t3=C_retrieve(lf[476]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);
default:
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13121,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,((C_word*)t0)[3]);}}}

/* k13119 in k13068 in loop in k13059 in ##compiler#scan-sharp-greater-string in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1442 loop");
t2=((C_word*)((C_word*)t0)[3])[1];
f_13066(t2,((C_word*)t0)[2]);}

/* k13098 in k13068 in loop in k13059 in ##compiler#scan-sharp-greater-string in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13100,2,t0,t1);}
t2=(C_word)C_eqp(C_make_character(35),t1);
if(C_truep(t2)){
C_trace("support.scm: 1435 get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[44]))(3,*((C_word*)lf[44]+1),((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_13112,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t4=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(60),((C_word*)t0)[3]);}}

/* k13110 in k13098 in k13068 in loop in k13059 in ##compiler#scan-sharp-greater-string in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13112,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13115,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k13113 in k13110 in k13098 in k13068 in loop in k13059 in ##compiler#scan-sharp-greater-string in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1439 loop");
t2=((C_word*)((C_word*)t0)[3])[1];
f_13066(t2,((C_word*)t0)[2]);}

/* k13086 in k13068 in loop in k13059 in ##compiler#scan-sharp-greater-string in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1431 loop");
t2=((C_word*)((C_word*)t0)[3])[1];
f_13066(t2,((C_word*)t0)[2]);}

/* ##sys#user-read-hook in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13024(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_13024,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(C_make_character(62),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13034,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("read-char/port");
t6=C_retrieve(lf[476]);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}
else{
C_trace("support.scm: 1422 old-hook");
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k13032 in ##sys#user-read-hook in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13034,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_13037,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 1420 scan-sharp-greater-string");
((C_proc3)C_retrieve_symbol_proc(lf[475]))(3,*((C_word*)lf[475]+1),t2,((C_word*)t0)[2]);}

/* k13035 in k13032 in ##sys#user-read-hook in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_13037,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[473],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,lf[474],t4));}

/* ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12901(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12901,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12905,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12910,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_12910(t7,t3,C_fix(0),t2);}

/* loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12910(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_12910,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=(C_word)C_slot(t4,C_fix(1));
t6=t3;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t3;
t9=(C_word)C_slot(t8,C_fix(3));
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12938,a[2]=t5,a[3]=t7,a[4]=t9,a[5]=((C_word*)t0)[2],a[6]=t1,a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
C_trace("support.scm: 1398 make-string");
((C_proc4)C_retrieve_proc(*((C_word*)lf[467]+1)))(4,*((C_word*)lf[467]+1),t10,t2,C_make_character(32));}

/* k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12938,2,t0,t1);}
t2=(C_word)C_fixnum_plus(((C_word*)t0)[8],C_fix(2));
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12944,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t2,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
C_trace("write-char/port");
t5=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(10),t3);}

/* k12942 in k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12947,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k12945 in k12942 in k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12947,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_12950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(60),((C_word*)t0)[3]);}

/* k12948 in k12945 in k12942 in k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12953,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k12951 in k12948 in k12945 in k12942 in k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12953,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_12956,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[2]);}

/* k12954 in k12951 in k12948 in k12945 in k12942 in k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12956,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12959,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k12957 in k12954 in k12951 in k12948 in k12945 in k12942 in k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12959,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12962,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_13018,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("for-each");
t4=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a13017 in k12957 in k12954 in k12951 in k12948 in k12945 in k12942 in k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13018(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_13018,3,t0,t1,t2);}
C_trace("g36813682");
t3=((C_word*)((C_word*)t0)[3])[1];
f_12910(t3,t1,((C_word*)t0)[2],t2);}

/* k12960 in k12957 in k12954 in k12951 in k12948 in k12945 in k12942 in k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12962,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12968,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(4)))){
t4=*((C_word*)lf[11]+1);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12977,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t6=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_make_character(91),t4);}
else{
C_trace("write-char/port");
t4=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],C_make_character(62),*((C_word*)lf[11]+1));}}

/* k12975 in k12960 in k12957 in k12954 in k12951 in k12948 in k12945 in k12942 in k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12977,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12980,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(4));
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,t3,((C_word*)t0)[2]);}

/* k12978 in k12975 in k12960 in k12957 in k12954 in k12951 in k12948 in k12945 in k12942 in k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12983,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12988,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_12988(t6,t2,C_fix(5));}

/* doloop3690 in k12978 in k12975 in k12960 in k12957 in k12954 in k12951 in k12948 in k12945 in k12942 in k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12988(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12988,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12998,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
C_trace("write-char/port");
t5=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(32),t3);}}

/* k12996 in doloop3690 in k12978 in k12975 in k12960 in k12957 in k12954 in k12951 in k12948 in k12945 in k12942 in k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12998,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_13001,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],((C_word*)t0)[6]);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,t3,((C_word*)t0)[2]);}

/* k12999 in k12996 in doloop3690 in k12978 in k12975 in k12960 in k12957 in k12954 in k12951 in k12948 in k12945 in k12942 in k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_13001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12988(t3,((C_word*)t0)[2],t2);}

/* k12981 in k12978 in k12975 in k12960 in k12957 in k12954 in k12951 in k12948 in k12945 in k12942 in k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(93),*((C_word*)lf[11]+1));}

/* k12966 in k12960 in k12957 in k12954 in k12951 in k12948 in k12945 in k12942 in k12936 in loop in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_make_character(62),*((C_word*)lf[11]+1));}

/* k12903 in ##compiler#dump-nodes in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1410 newline");
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[2]);}

/* string-null? in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12898(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12898,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_string_null_p(C_retrieve(lf[325])));}

/* ##compiler#source-info->line in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12880(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12880,3,t0,t1,t2);}
if(C_truep((C_word)C_i_listp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_cadr(t2));}
else{
if(C_truep(t2)){
C_trace("support.scm: 1382 ->string");
((C_proc3)C_retrieve_symbol_proc(lf[62]))(3,*((C_word*)lf[62]+1),t1,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}}

/* ##compiler#source-info->string in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12834(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12834,3,t0,t1,t2);}
if(C_truep((C_word)C_i_listp(t2))){
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cadr(t2);
t5=(C_word)C_i_caddr(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12853,a[2]=t5,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 1375 ->string");
((C_proc3)C_retrieve_symbol_proc(lf[62]))(3,*((C_word*)lf[62]+1),t6,t4);}
else{
if(C_truep(t2)){
C_trace("support.scm: 1377 ->string");
((C_proc3)C_retrieve_symbol_proc(lf[62]))(3,*((C_word*)lf[62]+1),t1,t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}}

/* k12851 in ##compiler#source-info->string in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12853,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12860,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12864,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_string_length(t1);
t5=(C_word)C_fixnum_difference(C_fix(4),t4);
C_trace("support.scm: 1376 max");
((C_proc4)C_retrieve_proc(*((C_word*)lf[468]+1)))(4,*((C_word*)lf[468]+1),t3,C_fix(0),t5);}

/* k12862 in k12851 in ##compiler#source-info->string in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1376 make-string");
((C_proc4)C_retrieve_proc(*((C_word*)lf[467]+1)))(4,*((C_word*)lf[467]+1),((C_word*)t0)[2],t1,C_make_character(32));}

/* k12858 in k12851 in ##compiler#source-info->string in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1376 conc");
((C_proc8)C_retrieve_symbol_proc(lf[464]))(8,*((C_word*)lf[464]+1),((C_word*)t0)[5],((C_word*)t0)[4],lf[465],((C_word*)t0)[3],t1,lf[466],((C_word*)t0)[2]);}

/* ##compiler#display-real-name-table in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12813,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12819,tmp=(C_word)a,a+=2,tmp);
C_trace("support.scm: 1365 ##sys#hash-table-for-each");
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),t1,t2,C_retrieve(lf[459]));}

/* a12818 in ##compiler#display-real-name-table in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12819,4,t0,t1,t2,t3);}
t4=*((C_word*)lf[11]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12823,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t5,t2,t4);}

/* k12821 in a12818 in ##compiler#display-real-name-table in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12826,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(9),((C_word*)t0)[3]);}

/* k12824 in k12821 in a12818 in ##compiler#display-real-name-table in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12826,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12829,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k12827 in k12824 in k12821 in a12818 in ##compiler#display-real-name-table in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* ##compiler#real-name2 in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12801(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12801,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12805,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 1361 ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t4,C_retrieve(lf[459]),t2);}

/* k12803 in ##compiler#real-name2 in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("support.scm: 1362 real-name");
((C_proc4)C_retrieve_symbol_proc(lf[40]))(4,*((C_word*)lf[40]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#real-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12710(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3rv,(void*)f_12710r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_12710r(t0,t1,t2,t3);}}

static void C_ccall f_12710r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_12713,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12729,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("support.scm: 1345 resolve");
f_12713(t5,t2);}

/* k12727 in ##compiler#real-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12729,2,t0,t1);}
t2=t1;
if(C_truep(t2)){
if(C_truep((C_word)C_notvemptyp(((C_word*)t0)[5]))){
t3=(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(0));
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12754,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("support.scm: 1349 ##sys#symbol->qualified-string");
((C_proc3)C_retrieve_symbol_proc(lf[238]))(3,*((C_word*)lf[238]+1),t4,t1);}
else{
C_trace("support.scm: 1358 ##sys#symbol->qualified-string");
((C_proc3)C_retrieve_symbol_proc(lf[238]))(3,*((C_word*)lf[238]+1),((C_word*)t0)[3],t1);}}
else{
C_trace("support.scm: 1346 ##sys#symbol->qualified-string");
((C_proc3)C_retrieve_symbol_proc(lf[238]))(3,*((C_word*)lf[238]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k12752 in k12727 in ##compiler#real-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12754,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12758,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("support.scm: 1350 get");
((C_proc5)C_retrieve_symbol_proc(lf[134]))(5,*((C_word*)lf[134]+1),t2,((C_word*)t0)[5],((C_word*)t0)[2],lf[147]);}

/* k12756 in k12752 in k12727 in ##compiler#real-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12758,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12760,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_12760(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k12756 in k12752 in k12727 in ##compiler#real-name in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12760(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12760,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12767,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
C_trace("support.scm: 1352 resolve");
f_12713(t4,t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k12765 in loop in k12756 in k12752 in k12727 in ##compiler#real-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12767,2,t0,t1);}
t2=(C_word)C_eqp(t1,((C_word*)t0)[6]);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12780,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[45]))(2,*((C_word*)lf[45]+1),t3);}}

/* k12778 in k12765 in loop in k12756 in k12752 in k12727 in ##compiler#real-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12780,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12783,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2],t1);}

/* k12781 in k12778 in k12765 in loop in k12756 in k12752 in k12727 in ##compiler#real-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_12786,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,lf[460],((C_word*)t0)[3]);}

/* k12784 in k12781 in k12778 in k12765 in loop in k12756 in k12752 in k12727 in ##compiler#real-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12789,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k12787 in k12784 in k12781 in k12778 in k12765 in loop in k12756 in k12752 in k12727 in ##compiler#real-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12792,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[44]))(3,*((C_word*)lf[44]+1),t2,((C_word*)t0)[2]);}

/* k12790 in k12787 in k12784 in k12781 in k12778 in k12765 in loop in k12756 in k12752 in k12727 in ##compiler#real-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12792,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12796,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 1356 get");
((C_proc5)C_retrieve_symbol_proc(lf[134]))(5,*((C_word*)lf[134]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[147]);}

/* k12794 in k12790 in k12787 in k12784 in k12781 in k12778 in k12765 in loop in k12756 in k12752 in k12727 in ##compiler#real-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1355 loop");
t2=((C_word*)((C_word*)t0)[4])[1];
f_12760(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* resolve in ##compiler#real-name in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12713(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12713,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12717,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 1340 ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t3,C_retrieve(lf[459]),t2);}

/* k12715 in resolve in ##compiler#real-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12717,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12723,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 1342 ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t2,C_retrieve(lf[459]),t1);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k12721 in k12715 in resolve in ##compiler#real-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[2]));}

/* ##compiler#set-real-name! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12704(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_12704,4,t0,t1,t2,t3);}
C_trace("support.scm: 1336 ##sys#hash-table-set!");
((C_proc5)C_retrieve_symbol_proc(lf[139]))(5,*((C_word*)lf[139]+1),t1,C_retrieve(lf[459]),t2,t3);}

/* ##compiler#make-random-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12645(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_12645r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_12645r(t0,t1,t2);}}

static void C_ccall f_12645r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12653,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[45]))(2,*((C_word*)lf[45]+1),t3);}

/* k12651 in ##compiler#make-random-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12656,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12680,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
C_trace("support.scm: 1323 gensym");
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t4);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=(C_word)C_i_car(t3);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,t6,t1);}
else{
C_trace("##sys#error");
t6=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k12678 in k12651 in ##compiler#make-random-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k12654 in k12651 in ##compiler#make-random-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12656,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(45),((C_word*)t0)[2]);}

/* k12657 in k12654 in k12651 in ##compiler#make-random-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12676,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 1324 current-seconds");
((C_proc2)C_retrieve_symbol_proc(lf[457]))(2,*((C_word*)lf[457]+1),t3);}

/* k12674 in k12657 in k12654 in k12651 in ##compiler#make-random-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k12660 in k12657 in k12654 in k12651 in ##compiler#make-random-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12662,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12665,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12672,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 1325 random");
((C_proc3)C_retrieve_symbol_proc(lf[456]))(3,*((C_word*)lf[456]+1),t3,C_fix(1000));}

/* k12670 in k12660 in k12657 in k12654 in k12651 in ##compiler#make-random-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k12663 in k12660 in k12657 in k12654 in k12651 in ##compiler#make-random-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12665,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12668,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[44]))(3,*((C_word*)lf[44]+1),t2,((C_word*)t0)[2]);}

/* k12666 in k12663 in k12660 in k12657 in k12654 in k12651 in ##compiler#make-random-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1321 string->symbol");
((C_proc3)C_retrieve_proc(*((C_word*)lf[47]+1)))(3,*((C_word*)lf[47]+1),((C_word*)t0)[2],t1);}

/* ##compiler#block-variable-literal-name in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12636(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12636,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[452]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(1)));}

/* ##compiler#block-variable-literal? in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12630(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12630,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[452]));}

/* ##compiler#make-block-variable-literal in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12624(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12624,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,2,lf[452],t2));}

/* ##compiler#print-usage in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12612,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12616,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 1182 print-version");
((C_proc2)C_retrieve_symbol_proc(lf[446]))(2,*((C_word*)lf[446]+1),t2);}

/* k12614 in ##compiler#print-usage in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12616,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12619,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 1183 newline");
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t2);}

/* k12617 in k12614 in ##compiler#print-usage in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1184 display");
((C_proc3)C_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),((C_word*)t0)[2],lf[450]);}

/* ##compiler#print-version in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12574(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_12574r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_12574r(t0,t1,t2);}}

static void C_ccall f_12574r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12578,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_12578(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_12578(2,t5,(C_word)C_i_car(t2));}
else{
C_trace("##sys#error");
t5=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k12576 in ##compiler#print-version in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12578,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12581,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
C_trace("support.scm: 1178 print*");
((C_proc3)C_retrieve_proc(*((C_word*)lf[447]+1)))(3,*((C_word*)lf[447]+1),t2,lf[448]);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f14511,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 1179 chicken-version");
((C_proc3)C_retrieve_symbol_proc(lf[295]))(3,*((C_word*)lf[295]+1),t3,C_SCHEME_TRUE);}}

/* f14511 in k12576 in ##compiler#print-version in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f14511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1179 print");
((C_proc3)C_retrieve_proc(*((C_word*)lf[280]+1)))(3,*((C_word*)lf[280]+1),((C_word*)t0)[2],t1);}

/* k12579 in k12576 in ##compiler#print-version in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12581,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12588,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 1179 chicken-version");
((C_proc3)C_retrieve_symbol_proc(lf[295]))(3,*((C_word*)lf[295]+1),t2,C_SCHEME_TRUE);}

/* k12586 in k12579 in k12576 in ##compiler#print-version in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1179 print");
((C_proc3)C_retrieve_proc(*((C_word*)lf[280]+1)))(3,*((C_word*)lf[280]+1),((C_word*)t0)[2],t1);}

/* ##compiler#chop-extension in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12532(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_12532,3,t0,t1,t2);}
t3=(C_word)C_i_string_length(t2);
t4=(C_word)C_fixnum_decrease(t3);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12541,a[2]=t6,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_12541(t8,t1,t4);}

/* loop in ##compiler#chop-extension in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12541(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_12541,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=((C_word*)t0)[3];
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
t5=(C_word)C_eqp(C_make_character(46),t4);
if(C_truep(t5)){
C_trace("support.scm: 1171 substring");
((C_proc5)C_retrieve_proc(*((C_word*)lf[443]+1)))(5,*((C_word*)lf[443]+1),t1,((C_word*)t0)[3],C_fix(0),t2);}
else{
t6=(C_word)C_fixnum_decrease(t2);
C_trace("support.scm: 1172 loop");
t9=t1;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}}

/* ##compiler#chop-separator in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12503(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_12503,3,t0,t1,t2);}
t3=(C_word)C_i_string_length(t2);
t4=(C_word)C_fixnum_decrease(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12513,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t4,C_fix(0)))){
t6=(C_word)C_i_string_ref(t2,t4);
t7=t5;
f_12513(t7,(C_word)C_i_memq(t6,lf[444]));}
else{
t6=t5;
f_12513(t6,C_SCHEME_FALSE);}}

/* k12511 in ##compiler#chop-separator in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12513(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
C_trace("support.scm: 1164 substring");
((C_proc5)C_retrieve_proc(*((C_word*)lf[443]+1)))(5,*((C_word*)lf[443]+1),((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12294(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_12294,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12297,a[2]=t10,a[3]=t8,a[4]=t6,a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t12=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12463,a[2]=t8,tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12498,a[2]=t6,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 1154 walk");
t14=((C_word*)t8)[1];
f_12297(t14,t13,t2,C_SCHEME_END_OF_LIST);}

/* k12496 in ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1155 values");
C_values(4,0,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* walkeach in ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12463(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12463,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12469,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_12469(t7,t1,t2);}

/* loop3494 in walkeach in ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12469(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12469,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12477,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12484,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g35013502");
t6=t3;
f_12477(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12482 in loop3494 in walkeach in ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12469(t3,((C_word*)t0)[2],t2);}

/* g3501 in loop3494 in walkeach in ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12477(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12477,NULL,3,t0,t1,t2);}
C_trace("support.scm: 1152 walk");
t3=((C_word*)((C_word*)t0)[3])[1];
f_12297(t3,t1,t2,((C_word*)t0)[2]);}

/* walk in ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12297(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_12297,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(3));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(t9,lf[82]);
t11=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_12331,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=t7,a[9]=t9,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
if(C_truep(t10)){
t12=t11;
f_12331(t12,t10);}
else{
t12=(C_word)C_eqp(t9,lf[216]);
if(C_truep(t12)){
t13=t11;
f_12331(t13,t12);}
else{
t13=(C_word)C_eqp(t9,lf[224]);
if(C_truep(t13)){
t14=t11;
f_12331(t14,t13);}
else{
t14=(C_word)C_eqp(t9,lf[227]);
t15=t11;
f_12331(t15,(C_truep(t14)?t14:(C_word)C_eqp(t9,lf[241])));}}}}

/* k12329 in walk in ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12331(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_12331,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[9],lf[210]);
if(C_truep(t2)){
t3=(C_word)C_i_car(((C_word*)t0)[8]);
if(C_truep((C_word)C_i_memq(t3,((C_word*)t0)[7]))){
t4=C_SCHEME_UNDEFINED;
t5=((C_word*)t0)[10];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_12350,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("support.scm: 1134 lset-adjoin");
((C_proc5)C_retrieve_symbol_proc(lf[441]))(5,*((C_word*)lf[441]+1),t4,*((C_word*)lf[270]+1),((C_word*)((C_word*)t0)[6])[1],t3);}}
else{
t3=(C_word)C_eqp(((C_word*)t0)[9],lf[228]);
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[8]);
if(C_truep((C_word)C_i_memq(t4,((C_word*)t0)[7]))){
t5=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("support.scm: 1140 walk");
t6=((C_word*)((C_word*)t0)[3])[1];
f_12297(t6,((C_word*)t0)[10],t5,((C_word*)t0)[7]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12386,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("support.scm: 1139 lset-adjoin");
((C_proc5)C_retrieve_symbol_proc(lf[441]))(5,*((C_word*)lf[441]+1),t5,*((C_word*)lf[270]+1),((C_word*)((C_word*)t0)[6])[1],t4);}}
else{
t4=(C_word)C_eqp(((C_word*)t0)[9],lf[92]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_12395,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("support.scm: 1142 walk");
t7=((C_word*)((C_word*)t0)[3])[1];
f_12297(t7,t5,t6,((C_word*)t0)[7]);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[9],lf[223]);
if(C_truep(t5)){
t6=(C_word)C_i_caddr(((C_word*)t0)[8]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12425,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 1145 decompose-lambda-list");
((C_proc4)C_retrieve_symbol_proc(lf[108]))(4,*((C_word*)lf[108]+1),((C_word*)t0)[10],t6,t7);}
else{
C_trace("support.scm: 1149 walkeach");
t6=((C_word*)((C_word*)t0)[2])[1];
f_12463(t6,((C_word*)t0)[10],((C_word*)t0)[4],((C_word*)t0)[7]);}}}}}}

/* a12424 in k12329 in walk in ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12425(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_12425,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12437,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 1148 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[54]+1)))(4,*((C_word*)lf[54]+1),t6,t2,((C_word*)t0)[2]);}

/* k12435 in a12424 in k12329 in walk in ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1148 walk");
t2=((C_word*)((C_word*)t0)[4])[1];
f_12297(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k12393 in k12329 in walk in ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12395,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12406,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 1143 append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[54]+1)))(4,*((C_word*)lf[54]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k12404 in k12393 in k12329 in walk in ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 1143 walk");
t2=((C_word*)((C_word*)t0)[4])[1];
f_12297(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k12384 in k12329 in walk in ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
C_trace("support.scm: 1140 walk");
t4=((C_word*)((C_word*)t0)[4])[1];
f_12297(t4,((C_word*)t0)[3],t3,((C_word*)t0)[2]);}

/* k12348 in k12329 in walk in ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12350,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12356,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 1135 variable-visible?");
((C_proc3)C_retrieve_symbol_proc(lf[291]))(3,*((C_word*)lf[291]+1),t3,((C_word*)t0)[2]);}

/* k12354 in k12348 in k12329 in walk in ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12356,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12360,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 1136 lset-adjoin");
((C_proc5)C_retrieve_symbol_proc(lf[441]))(5,*((C_word*)lf[441]+1),t2,*((C_word*)lf[270]+1),((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}}

/* k12358 in k12354 in k12348 in k12329 in walk in ##compiler#scan-free-variables in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##compiler#scan-used-variables in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12155(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_12155,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12159,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12161,a[2]=t3,a[3]=t5,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_12161(t10,t6,t2);}

/* walk in ##compiler#scan-used-variables in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12161(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_12161,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(3));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(1));
t7=(C_word)C_eqp(t6,lf[210]);
t8=(C_truep(t7)?t7:(C_word)C_eqp(t6,lf[228]));
if(C_truep(t8)){
t9=t2;
t10=(C_word)C_slot(t9,C_fix(2));
t11=(C_word)C_i_car(t10);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12193,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12222,a[2]=t12,a[3]=((C_word*)t0)[3],a[4]=t11,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_memq(t11,((C_word*)t0)[2]))){
t14=(C_word)C_i_memq(t11,((C_word*)((C_word*)t0)[3])[1]);
t15=t13;
f_12222(t15,(C_word)C_i_not(t14));}
else{
t14=t13;
f_12222(t14,C_SCHEME_FALSE);}}
else{
t9=(C_word)C_eqp(t6,lf[82]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12254,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t9)){
t11=t10;
f_12254(t11,t9);}
else{
t11=(C_word)C_eqp(t6,lf[216]);
t12=t10;
f_12254(t12,(C_truep(t11)?t11:(C_word)C_eqp(t6,lf[224])));}}}

/* k12252 in walk in ##compiler#scan-used-variables in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12254(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12254,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12259,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_12259(t5,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* loop3419 in k12252 in walk in ##compiler#scan-used-variables in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12259(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12259,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12269,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g34263427");
t5=((C_word*)((C_word*)t0)[2])[1];
f_12161(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12267 in loop3419 in k12252 in walk in ##compiler#scan-used-variables in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12259(t3,((C_word*)t0)[2],t2);}

/* k12220 in walk in ##compiler#scan-used-variables in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12222(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12222,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_12193(t4,t3);}
else{
t2=((C_word*)t0)[2];
f_12193(t2,C_SCHEME_UNDEFINED);}}

/* k12191 in walk in ##compiler#scan-used-variables in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12193(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12193,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_12198,a[2]=((C_word*)t0)[4],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_12198(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop3395 in k12191 in walk in ##compiler#scan-used-variables in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12198(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_12198,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12208,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g34023403");
t5=((C_word*)((C_word*)t0)[2])[1];
f_12161(t5,t3,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k12206 in loop3395 in k12191 in walk in ##compiler#scan-used-variables in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_12198(t3,((C_word*)t0)[2],t2);}

/* k12157 in ##compiler#scan-used-variables in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_12159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* ##compiler#finish-foreign-result in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11786(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_11786,4,t0,t1,t2,t3);}
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
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11985,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_listp(t2))){
t16=(C_word)C_i_length(t2);
t17=(C_word)C_eqp(C_fix(3),t16);
if(C_truep(t17)){
t18=(C_word)C_i_car(t2);
t19=t15;
f_11985(t19,(C_word)C_i_memq(t18,lf[438]));}
else{
t18=t15;
f_11985(t18,C_SCHEME_FALSE);}}
else{
t16=t15;
f_11985(t16,C_SCHEME_FALSE);}}}}}}}}}

/* k11983 in ##compiler#finish-foreign-result in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_11985(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11985,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11988,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 1093 gensym");
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_12077,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_listp(((C_word*)t0)[3]))){
t3=(C_word)C_i_length(((C_word*)t0)[3]);
t4=(C_word)C_eqp(C_fix(3),t3);
if(C_truep(t4)){
t5=(C_word)C_i_car(((C_word*)t0)[3]);
t6=t2;
f_12077(t6,(C_word)C_eqp(lf[367],t5));}
else{
t5=t2;
f_12077(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_12077(t3,C_SCHEME_FALSE);}}}

/* k12075 in k11983 in ##compiler#finish-foreign-result in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_12077(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_12077,NULL,2,t0,t1);}
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

/* k11986 in k11983 in ##compiler#finish-foreign-result in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11988(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11988,2,t0,t1);}
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

/* ##compiler#estimate-foreign-result-location-size in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11465(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11465,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11477,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11780,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 1054 follow-without-loop");
((C_proc5)C_retrieve_proc(*((C_word*)lf[77]+1)))(5,*((C_word*)lf[77]+1),t1,t2,t3,t4);}

/* a11779 in ##compiler#estimate-foreign-result-location-size in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11780,2,t0,t1);}
C_trace("support.scm: 1075 quit");
((C_proc4)C_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),t1,lf[425],((C_word*)t0)[2]);}

/* a11476 in ##compiler#estimate-foreign-result-location-size in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11477(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_11477,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_eqp(t4,lf[334]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11487,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_11487(t7,t5);}
else{
t7=(C_word)C_eqp(t4,lf[338]);
if(C_truep(t7)){
t8=t6;
f_11487(t8,t7);}
else{
t8=(C_word)C_eqp(t4,lf[406]);
if(C_truep(t8)){
t9=t6;
f_11487(t9,t8);}
else{
t9=(C_word)C_eqp(t4,lf[419]);
if(C_truep(t9)){
t10=t6;
f_11487(t10,t9);}
else{
t10=(C_word)C_eqp(t4,lf[407]);
if(C_truep(t10)){
t11=t6;
f_11487(t11,t10);}
else{
t11=(C_word)C_eqp(t4,lf[335]);
if(C_truep(t11)){
t12=t6;
f_11487(t12,t11);}
else{
t12=(C_word)C_eqp(t4,lf[405]);
if(C_truep(t12)){
t13=t6;
f_11487(t13,t12);}
else{
t13=(C_word)C_eqp(t4,lf[381]);
if(C_truep(t13)){
t14=t6;
f_11487(t14,t13);}
else{
t14=(C_word)C_eqp(t4,lf[380]);
if(C_truep(t14)){
t15=t6;
f_11487(t15,t14);}
else{
t15=(C_word)C_eqp(t4,lf[408]);
if(C_truep(t15)){
t16=t6;
f_11487(t16,t15);}
else{
t16=(C_word)C_eqp(t4,lf[409]);
if(C_truep(t16)){
t17=t6;
f_11487(t17,t16);}
else{
t17=(C_word)C_eqp(t4,lf[353]);
if(C_truep(t17)){
t18=t6;
f_11487(t18,t17);}
else{
t18=(C_word)C_eqp(t4,lf[342]);
if(C_truep(t18)){
t19=t6;
f_11487(t19,t18);}
else{
t19=(C_word)C_eqp(t4,lf[355]);
if(C_truep(t19)){
t20=t6;
f_11487(t20,t19);}
else{
t20=(C_word)C_eqp(t4,lf[351]);
if(C_truep(t20)){
t21=t6;
f_11487(t21,t20);}
else{
t21=(C_word)C_eqp(t4,lf[349]);
if(C_truep(t21)){
t22=t6;
f_11487(t22,t21);}
else{
t22=(C_word)C_eqp(t4,lf[340]);
if(C_truep(t22)){
t23=t6;
f_11487(t23,t22);}
else{
t23=(C_word)C_eqp(t4,lf[356]);
if(C_truep(t23)){
t24=t6;
f_11487(t24,t23);}
else{
t24=(C_word)C_eqp(t4,lf[360]);
if(C_truep(t24)){
t25=t6;
f_11487(t25,t24);}
else{
t25=(C_word)C_eqp(t4,lf[402]);
if(C_truep(t25)){
t26=t6;
f_11487(t26,t25);}
else{
t26=(C_word)C_eqp(t4,lf[397]);
if(C_truep(t26)){
t27=t6;
f_11487(t27,t26);}
else{
t27=(C_word)C_eqp(t4,lf[410]);
if(C_truep(t27)){
t28=t6;
f_11487(t28,t27);}
else{
t28=(C_word)C_eqp(t4,lf[411]);
if(C_truep(t28)){
t29=t6;
f_11487(t29,t28);}
else{
t29=(C_word)C_eqp(t4,lf[382]);
if(C_truep(t29)){
t30=t6;
f_11487(t30,t29);}
else{
t30=(C_word)C_eqp(t4,lf[379]);
if(C_truep(t30)){
t31=t6;
f_11487(t31,t30);}
else{
t31=(C_word)C_eqp(t4,lf[375]);
if(C_truep(t31)){
t32=t6;
f_11487(t32,t31);}
else{
t32=(C_word)C_eqp(t4,lf[376]);
if(C_truep(t32)){
t33=t6;
f_11487(t33,t32);}
else{
t33=(C_word)C_eqp(t4,lf[373]);
if(C_truep(t33)){
t34=t6;
f_11487(t34,t33);}
else{
t34=(C_word)C_eqp(t4,lf[359]);
if(C_truep(t34)){
t35=t6;
f_11487(t35,t34);}
else{
t35=(C_word)C_eqp(t4,lf[374]);
if(C_truep(t35)){
t36=t6;
f_11487(t36,t35);}
else{
t36=(C_word)C_eqp(t4,lf[372]);
if(C_truep(t36)){
t37=t6;
f_11487(t37,t36);}
else{
t37=(C_word)C_eqp(t4,lf[377]);
t38=t6;
f_11487(t38,(C_truep(t37)?t37:(C_word)C_eqp(t4,lf[378])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k11485 in a11476 in ##compiler#estimate-foreign-result-location-size in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_11487(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_11487,NULL,2,t0,t1);}
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11505,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[2]))){
C_trace("support.scm: 1067 ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t4,C_retrieve(lf[371]),((C_word*)t0)[2]);}
else{
t5=t4;
f_11505(2,t5,C_SCHEME_FALSE);}}}}

/* k11503 in k11485 in a11476 in ##compiler#estimate-foreign-result-location-size in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11505(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11505,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11509,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("g32543255");
t3=t2;
f_11509(t3,((C_word*)t0)[3],t1);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t2=(C_word)C_i_car(((C_word*)t0)[2]);
t3=(C_word)C_eqp(t2,lf[362]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11544,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_11544(t5,t3);}
else{
t5=(C_word)C_eqp(t2,lf[344]);
if(C_truep(t5)){
t6=t4;
f_11544(t6,t5);}
else{
t6=(C_word)C_eqp(t2,lf[342]);
if(C_truep(t6)){
t7=t4;
f_11544(t7,t6);}
else{
t7=(C_word)C_eqp(t2,lf[353]);
if(C_truep(t7)){
t8=t4;
f_11544(t8,t7);}
else{
t8=(C_word)C_eqp(t2,lf[355]);
t9=t4;
f_11544(t9,(C_truep(t8)?t8:(C_word)C_eqp(t2,lf[370])));}}}}}
else{
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
C_trace("support.scm: 1053 quit");
((C_proc4)C_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),t2,lf[424],t3);}}}

/* k11542 in k11503 in k11485 in a11476 in ##compiler#estimate-foreign-result-location-size in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_11544(C_word t0,C_word t1){
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
C_trace("support.scm: 1053 quit");
((C_proc4)C_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),t2,lf[424],t3);}}

/* g3254 in k11503 in k11485 in a11476 in ##compiler#estimate-foreign-result-location-size in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_11509(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11509,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_vectorp(t2))){
t3=(C_word)C_i_vector_ref(t2,C_fix(0));
C_trace("support.scm: 1069 next");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t3=t2;
C_trace("support.scm: 1069 next");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}}

/* ##compiler#estimate-foreign-result-size in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11135(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11135,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11141,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11459,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 1024 follow-without-loop");
((C_proc5)C_retrieve_proc(*((C_word*)lf[77]+1)))(5,*((C_word*)lf[77]+1),t1,t2,t3,t4);}

/* a11458 in ##compiler#estimate-foreign-result-size in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11459,2,t0,t1);}
C_trace("support.scm: 1049 quit");
((C_proc4)C_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),t1,lf[422],((C_word*)t0)[2]);}

/* a11140 in ##compiler#estimate-foreign-result-size in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11141(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_11141,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_eqp(t4,lf[334]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11151,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=t6;
f_11151(t7,t5);}
else{
t7=(C_word)C_eqp(t4,lf[338]);
if(C_truep(t7)){
t8=t6;
f_11151(t8,t7);}
else{
t8=(C_word)C_eqp(t4,lf[406]);
if(C_truep(t8)){
t9=t6;
f_11151(t9,t8);}
else{
t9=(C_word)C_eqp(t4,lf[419]);
if(C_truep(t9)){
t10=t6;
f_11151(t10,t9);}
else{
t10=(C_word)C_eqp(t4,lf[420]);
if(C_truep(t10)){
t11=t6;
f_11151(t11,t10);}
else{
t11=(C_word)C_eqp(t4,lf[407]);
if(C_truep(t11)){
t12=t6;
f_11151(t12,t11);}
else{
t12=(C_word)C_eqp(t4,lf[421]);
if(C_truep(t12)){
t13=t6;
f_11151(t13,t12);}
else{
t13=(C_word)C_eqp(t4,lf[335]);
if(C_truep(t13)){
t14=t6;
f_11151(t14,t13);}
else{
t14=(C_word)C_eqp(t4,lf[405]);
if(C_truep(t14)){
t15=t6;
f_11151(t15,t14);}
else{
t15=(C_word)C_eqp(t4,lf[408]);
if(C_truep(t15)){
t16=t6;
f_11151(t16,t15);}
else{
t16=(C_word)C_eqp(t4,lf[409]);
if(C_truep(t16)){
t17=t6;
f_11151(t17,t16);}
else{
t17=(C_word)C_eqp(t4,lf[410]);
t18=t6;
f_11151(t18,(C_truep(t17)?t17:(C_word)C_eqp(t4,lf[411])));}}}}}}}}}}}}

/* k11149 in a11140 in ##compiler#estimate-foreign-result-size in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_11151(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_11151,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(0));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[356]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11160,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_11160(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[359]);
if(C_truep(t4)){
t5=t3;
f_11160(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[353]);
if(C_truep(t5)){
t6=t3;
f_11160(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[355]);
if(C_truep(t6)){
t7=t3;
f_11160(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[4],lf[360]);
if(C_truep(t7)){
t8=t3;
f_11160(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[4],lf[374]);
if(C_truep(t8)){
t9=t3;
f_11160(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[4],lf[372]);
if(C_truep(t9)){
t10=t3;
f_11160(t10,t9);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[4],lf[375]);
if(C_truep(t10)){
t11=t3;
f_11160(t11,t10);}
else{
t11=(C_word)C_eqp(((C_word*)t0)[4],lf[376]);
if(C_truep(t11)){
t12=t3;
f_11160(t12,t11);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[4],lf[373]);
if(C_truep(t12)){
t13=t3;
f_11160(t13,t12);}
else{
t13=(C_word)C_eqp(((C_word*)t0)[4],lf[377]);
t14=t3;
f_11160(t14,(C_truep(t13)?t13:(C_word)C_eqp(((C_word*)t0)[4],lf[378])));}}}}}}}}}}}}

/* k11158 in k11149 in a11140 in ##compiler#estimate-foreign-result-size in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_11160(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_11160,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
t3=(C_word)C_i_foreign_fixnum_argumentp(C_fix(3));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub273(C_SCHEME_UNDEFINED,t3));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[351]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_11172,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_11172(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[381]);
if(C_truep(t4)){
t5=t3;
f_11172(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[349]);
if(C_truep(t5)){
t6=t3;
f_11172(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[380]);
if(C_truep(t6)){
t7=t3;
f_11172(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[4],lf[382]);
t8=t3;
f_11172(t8,(C_truep(t7)?t7:(C_word)C_eqp(((C_word*)t0)[4],lf[379])));}}}}}}

/* k11170 in k11158 in k11149 in a11140 in ##compiler#estimate-foreign-result-size in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_11172(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_11172,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
t3=(C_word)C_i_foreign_fixnum_argumentp(C_fix(4));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub273(C_SCHEME_UNDEFINED,t3));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[340]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_11184(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[403]);
if(C_truep(t4)){
t5=t3;
f_11184(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[404]);
t6=t3;
f_11184(t6,(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[4],lf[418])));}}}}

/* k11182 in k11170 in k11158 in k11149 in a11140 in ##compiler#estimate-foreign-result-size in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_11184(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11184,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
t3=(C_word)C_i_foreign_fixnum_argumentp(C_fix(4));
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub273(C_SCHEME_UNDEFINED,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11190,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[2]))){
C_trace("support.scm: 1040 ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t2,C_retrieve(lf[371]),((C_word*)t0)[2]);}
else{
t3=t2;
f_11190(2,t3,C_SCHEME_FALSE);}}}

/* k11188 in k11182 in k11170 in k11158 in k11149 in a11140 in ##compiler#estimate-foreign-result-size in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11190(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_11190,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11194,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("g30203021");
t3=t2;
f_11194(t3,((C_word*)t0)[3],t1);}
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

/* g3020 in k11188 in k11182 in k11170 in k11158 in k11149 in a11140 in ##compiler#estimate-foreign-result-size in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_11194(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11194,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_vectorp(t2))){
t3=(C_word)C_i_vector_ref(t2,C_fix(0));
C_trace("support.scm: 1042 next");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t3=t2;
C_trace("support.scm: 1042 next");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}}

/* ##compiler#final-foreign-type in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11090(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_11090,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_11096,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11129,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 1011 follow-without-loop");
((C_proc5)C_retrieve_proc(*((C_word*)lf[77]+1)))(5,*((C_word*)lf[77]+1),t1,t2,t3,t4);}

/* a11128 in ##compiler#final-foreign-type in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11129,2,t0,t1);}
C_trace("support.scm: 1018 quit");
((C_proc4)C_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),t1,lf[416],((C_word*)t0)[2]);}

/* a11095 in ##compiler#final-foreign-type in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11096,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_11100,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_symbolp(t2))){
C_trace("support.scm: 1014 ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t4,C_retrieve(lf[371]),t2);}
else{
t5=t4;
f_11100(2,t5,C_SCHEME_FALSE);}}

/* k11098 in a11095 in ##compiler#final-foreign-type in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11100,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11104,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("g28432844");
t3=t2;
f_11104(t3,((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* g2843 in k11098 in a11095 in ##compiler#final-foreign-type in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_11104(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_11104,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_vectorp(t2))){
t3=(C_word)C_i_vector_ref(t2,C_fix(0));
C_trace("support.scm: 1016 next");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t3=t2;
C_trace("support.scm: 1016 next");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}}

/* ##compiler#foreign-type-convert-argument in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11059,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11072,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 1005 ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t4,C_retrieve(lf[371]),t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k11070 in ##compiler#foreign-type-convert-argument in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11072,2,t0,t1);}
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

/* ##compiler#foreign-type-convert-result in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11028(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_11028,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_symbolp(t3))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_11041,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 998  ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t4,C_retrieve(lf[371]),t3);}
else{
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k11039 in ##compiler#foreign-type-convert-result in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11041,2,t0,t1);}
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

/* ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9970(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9970,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9976,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_11022,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 899  follow-without-loop");
((C_proc5)C_retrieve_proc(*((C_word*)lf[77]+1)))(5,*((C_word*)lf[77]+1),t1,t3,t4,t5);}

/* a11021 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_11022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_11022,2,t0,t1);}
C_trace("support.scm: 991  quit");
((C_proc4)C_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),t1,lf[412],((C_word*)t0)[2]);}

/* a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9976(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9976,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9982,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_9982(t7,t1,t2);}

/* repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_9982(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_9982,NULL,3,t0,t1,t2);}
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
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t6)){
t8=t7;
f_10011(t8,t6);}
else{
t8=(C_word)C_eqp(t3,lf[405]);
if(C_truep(t8)){
t9=t7;
f_10011(t9,t8);}
else{
t9=(C_word)C_eqp(t3,lf[406]);
if(C_truep(t9)){
t10=t7;
f_10011(t10,t9);}
else{
t10=(C_word)C_eqp(t3,lf[407]);
if(C_truep(t10)){
t11=t7;
f_10011(t11,t10);}
else{
t11=(C_word)C_eqp(t3,lf[408]);
if(C_truep(t11)){
t12=t7;
f_10011(t12,t11);}
else{
t12=(C_word)C_eqp(t3,lf[409]);
if(C_truep(t12)){
t13=t7;
f_10011(t13,t12);}
else{
t13=(C_word)C_eqp(t3,lf[410]);
t14=t7;
f_10011(t14,(C_truep(t13)?t13:(C_word)C_eqp(t3,lf[411])));}}}}}}}}

/* k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10011(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10011,NULL,2,t0,t1);}
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
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10030(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[403]);
t5=t3;
f_10030(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[404])));}}}

/* k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10030(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10030,NULL,2,t0,t1);}
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
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10049(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[400]);
if(C_truep(t4)){
t5=t3;
f_10049(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[401]);
t6=t3;
f_10049(t6,(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[5],lf[402])));}}}}

/* k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10049(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10049,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10052,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 909  gensym");
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[344]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10119(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[397]);
if(C_truep(t4)){
t5=t3;
f_10119(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[398]);
t6=t3;
f_10119(t6,(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[5],lf[399])));}}}}

/* k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10119(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10119,NULL,2,t0,t1);}
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
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10138,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10138(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[390]);
if(C_truep(t4)){
t5=t3;
f_10138(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[391]);
if(C_truep(t5)){
t6=t3;
f_10138(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[392]);
if(C_truep(t6)){
t7=t3;
f_10138(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[5],lf[393]);
if(C_truep(t7)){
t8=t3;
f_10138(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[5],lf[394]);
if(C_truep(t8)){
t9=t3;
f_10138(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[5],lf[395]);
t10=t3;
f_10138(t10,(C_truep(t9)?t9:(C_word)C_eqp(((C_word*)t0)[5],lf[396])));}}}}}}}}

/* k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10138(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10138,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10141,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 921  gensym");
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[347]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10220,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10220(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[383]);
if(C_truep(t4)){
t5=t3;
f_10220(t5,t4);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[4],lf[384]);
if(C_truep(t5)){
t6=t3;
f_10220(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[4],lf[385]);
if(C_truep(t6)){
t7=t3;
f_10220(t7,t6);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[4],lf[386]);
if(C_truep(t7)){
t8=t3;
f_10220(t8,t7);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[4],lf[387]);
if(C_truep(t8)){
t9=t3;
f_10220(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[4],lf[388]);
t10=t3;
f_10220(t10,(C_truep(t9)?t9:(C_word)C_eqp(((C_word*)t0)[4],lf[389])));}}}}}}}}

/* k10218 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10220(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10220,NULL,2,t0,t1);}
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
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10259,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10259(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[4],lf[381]);
t5=t3;
f_10259(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[4],lf[382])));}}}

/* k10257 in k10218 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10259(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10259,NULL,2,t0,t1);}
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
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10278,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10278(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[379]);
t5=t3;
f_10278(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[380])));}}}

/* k10276 in k10257 in k10218 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10278(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10278,NULL,2,t0,t1);}
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
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10297,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10297(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[377]);
t5=t3;
f_10297(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[378])));}}}

/* k10295 in k10276 in k10257 in k10218 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10297(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10297,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10300,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 941  gensym");
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[355]);
if(C_truep(t2)){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[354],t3));}
else{
t3=(C_word)C_eqp(((C_word*)t0)[5],lf[356]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10377,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_10377(t5,t3);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[374]);
if(C_truep(t5)){
t6=t4;
f_10377(t6,t5);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[375]);
t7=t4;
f_10377(t7,(C_truep(t6)?t6:(C_word)C_eqp(((C_word*)t0)[5],lf[376])));}}}}}

/* k10375 in k10295 in k10276 in k10257 in k10218 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10377(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10377,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10380,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 949  gensym");
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[359]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_10462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_10462(t4,t2);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[372]);
t5=t3;
f_10462(t5,(C_truep(t4)?t4:(C_word)C_eqp(((C_word*)t0)[5],lf[373])));}}}

/* k10460 in k10375 in k10295 in k10276 in k10257 in k10218 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10462(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10462,NULL,2,t0,t1);}
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
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10537,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[3]))){
C_trace("support.scm: 965  ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t3,C_retrieve(lf[371]),((C_word*)t0)[3]);}
else{
t4=t3;
f_10537(2,t4,C_SCHEME_FALSE);}}}}

/* k10535 in k10460 in k10375 in k10295 in k10276 in k10257 in k10218 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_10537(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10537,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_10541,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
C_trace("g27492750");
t3=t2;
f_10541(t3,((C_word*)t0)[5],t1);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_eqp(t2,lf[362]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_10576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t3)){
t5=t4;
f_10576(t5,t3);}
else{
t5=(C_word)C_eqp(t2,lf[342]);
if(C_truep(t5)){
t6=t4;
f_10576(t6,t5);}
else{
t6=(C_word)C_eqp(t2,lf[370]);
t7=t4;
f_10576(t7,(C_truep(t6)?t6:(C_word)C_eqp(t2,lf[353])));}}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}}

/* k10574 in k10535 in k10460 in k10375 in k10295 in k10276 in k10257 in k10218 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10576(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10576,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10579,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 971  gensym");
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[4],lf[363]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[4],lf[364]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_10646,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 977  gensym");
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
C_trace("support.scm: 984  repeat");
t7=((C_word*)((C_word*)t0)[2])[1];
f_9982(t7,((C_word*)t0)[5],t6);}
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

/* k10644 in k10574 in k10535 in k10460 in k10375 in k10295 in k10276 in k10257 in k10218 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_10646(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10646,2,t0,t1);}
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
t15=(C_word)C_a_i_cons(&a,2,lf[215],t14);
t16=(C_word)C_a_i_cons(&a,2,t15,C_SCHEME_END_OF_LIST);
t17=(C_word)C_a_i_cons(&a,2,t4,t16);
t18=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,(C_word)C_a_i_cons(&a,2,lf[92],t17));}

/* k10577 in k10574 in k10535 in k10460 in k10375 in k10295 in k10276 in k10257 in k10218 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_10579(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10579,2,t0,t1);}
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
t12=(C_word)C_a_i_cons(&a,2,lf[215],t11);
t13=(C_word)C_a_i_cons(&a,2,t12,C_SCHEME_END_OF_LIST);
t14=(C_word)C_a_i_cons(&a,2,t4,t13);
t15=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,(C_word)C_a_i_cons(&a,2,lf[92],t14));}

/* g2749 in k10535 in k10460 in k10375 in k10295 in k10276 in k10257 in k10218 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10541(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_10541,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_vectorp(t2))){
t3=(C_word)C_i_vector_ref(t2,C_fix(0));
C_trace("support.scm: 967  next");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t3=t2;
C_trace("support.scm: 967  next");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}}

/* k10378 in k10375 in k10295 in k10276 in k10257 in k10218 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_10380(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10380,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10411,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[336]))){
t6=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t7=t5;
f_10411(t7,(C_word)C_a_i_cons(&a,2,lf[357],t6));}
else{
t6=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[358],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=t5;
f_10411(t9,(C_word)C_a_i_cons(&a,2,lf[357],t8));}}

/* k10409 in k10378 in k10375 in k10295 in k10276 in k10257 in k10218 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10411(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10411,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[82],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t1,t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=(C_word)C_a_i_cons(&a,2,lf[215],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t8);
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_cons(&a,2,lf[92],t9));}

/* k10298 in k10295 in k10276 in k10257 in k10218 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_10300(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10300,2,t0,t1);}
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
t12=(C_word)C_a_i_cons(&a,2,lf[215],t11);
t13=(C_word)C_a_i_cons(&a,2,t12,C_SCHEME_END_OF_LIST);
t14=(C_word)C_a_i_cons(&a,2,t4,t13);
t15=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,(C_word)C_a_i_cons(&a,2,lf[92],t14));}

/* k10139 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_10141(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_10141,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10172,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[336]))){
t6=t5;
f_10172(t6,t1);}
else{
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[82],t6);
t8=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t7,t8);
t10=t5;
f_10172(t10,(C_word)C_a_i_cons(&a,2,lf[346],t9));}}

/* k10170 in k10139 in k10136 in k10117 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10172(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10172,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[82],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t1,t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=(C_word)C_a_i_cons(&a,2,lf[215],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t8);
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_cons(&a,2,lf[92],t9));}

/* k10050 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_10052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_10052,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_10083,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[336]))){
t6=t5;
f_10083(t6,t1);}
else{
t6=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t7=t5;
f_10083(t7,(C_word)C_a_i_cons(&a,2,lf[343],t6));}}

/* k10081 in k10050 in k10047 in k10028 in k10009 in repeat in a9975 in ##compiler#foreign-type-check in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_10083(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_10083,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,lf[82],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t1,t4);
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t5);
t7=(C_word)C_a_i_cons(&a,2,lf[215],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t8);
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_cons(&a,2,lf[92],t9));}

/* ##compiler#pprint-expressions-to-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9912(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9912,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9916,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
C_trace("support.scm: 880  open-output-file");
((C_proc3)C_retrieve_proc(*((C_word*)lf[331]+1)))(3,*((C_word*)lf[331]+1),t4,t3);}
else{
C_trace("support.scm: 880  current-output-port");
((C_proc2)C_retrieve_proc(*((C_word*)lf[332]+1)))(2,*((C_word*)lf[332]+1),t4);}}

/* k9914 in ##compiler#pprint-expressions-to-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9919,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9927,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 881  with-output-to-port");
((C_proc4)C_retrieve_symbol_proc(lf[330]))(4,*((C_word*)lf[330]+1),t2,t1,t3);}

/* a9926 in k9914 in ##compiler#pprint-expressions-to-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9927,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9933,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_9933(t5,t1,((C_word*)t0)[2]);}

/* loop2422 in a9926 in k9914 in ##compiler#pprint-expressions-to-file in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_9933(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9933,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9951,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9945,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 885  pretty-print");
((C_proc3)C_retrieve_symbol_proc(lf[329]))(3,*((C_word*)lf[329]+1),t5,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9943 in loop2422 in a9926 in k9914 in ##compiler#pprint-expressions-to-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 886  newline");
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[2]);}

/* k9949 in loop2422 in a9926 in k9914 in ##compiler#pprint-expressions-to-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_9933(t3,((C_word*)t0)[2],t2);}

/* k9917 in k9914 in ##compiler#pprint-expressions-to-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
C_trace("support.scm: 888  close-output-port");
((C_proc3)C_retrieve_proc(*((C_word*)lf[328]+1)))(3,*((C_word*)lf[328]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9831(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9831,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9837,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9843,tmp=(C_word)a,a+=2,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,t1,t3,t4);}

/* a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_9843,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9850,a[2]=t2,a[3]=t3,a[4]=t4,a[5]=t5,a[6]=t6,a[7]=t7,a[8]=t8,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
C_trace("support.scm: 868  debugging");
((C_proc4)C_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t9,lf[325],lf[326]);}

/* k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9850,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9853,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[324],t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9853,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9856,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9856,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9859,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,lf[323],((C_word*)t0)[3]);}

/* k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9862,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9862,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9865,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9865,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9868,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[322],t2);}

/* k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9868,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9871,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9869 in k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9871,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9874,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k9872 in k9869 in k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9874,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9877,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[321],t2);}

/* k9875 in k9872 in k9869 in k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9877,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9880,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9878 in k9875 in k9872 in k9869 in k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9880,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9883,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k9881 in k9878 in k9875 in k9872 in k9869 in k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9883,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9886,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[320],t2);}

/* k9884 in k9881 in k9878 in k9875 in k9872 in k9869 in k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9886,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9889,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9887 in k9884 in k9881 in k9878 in k9875 in k9872 in k9869 in k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9889,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9892,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k9890 in k9887 in k9884 in k9881 in k9878 in k9875 in k9872 in k9869 in k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9892,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9895,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[319],t2);}

/* k9893 in k9890 in k9887 in k9884 in k9881 in k9878 in k9875 in k9872 in k9869 in k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9895,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9898,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9896 in k9893 in k9890 in k9887 in k9884 in k9881 in k9878 in k9875 in k9872 in k9869 in k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9898,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9901,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k9899 in k9896 in k9893 in k9890 in k9887 in k9884 in k9881 in k9878 in k9875 in k9872 in k9869 in k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9901,2,t0,t1);}
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9904,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[318],t2);}

/* k9902 in k9899 in k9896 in k9893 in k9890 in k9887 in k9884 in k9881 in k9878 in k9875 in k9872 in k9869 in k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9904,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9907,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k9905 in k9902 in k9899 in k9896 in k9893 in k9890 in k9887 in k9884 in k9881 in k9878 in k9875 in k9872 in k9869 in k9866 in k9863 in k9860 in k9857 in k9854 in k9851 in k9848 in a9842 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* a9836 in ##compiler#print-program-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9837,2,t0,t1);}
C_trace("support.scm: 867  compute-database-statistics");
((C_proc3)C_retrieve_symbol_proc(lf[314]))(3,*((C_word*)lf[314]+1),t1,((C_word*)t0)[2]);}

/* ##compiler#compute-database-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9723(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_9723,3,t0,t1,t2);}
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
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9727,a[2]=t10,a[3]=t12,a[4]=t8,a[5]=t4,a[6]=t6,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9732,a[2]=t12,a[3]=t4,a[4]=t6,a[5]=t8,a[6]=t10,tmp=(C_word)a,a+=7,tmp);
C_trace("support.scm: 843  ##sys#hash-table-for-each");
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),t13,t14,t2);}

/* a9731 in ##compiler#compute-database-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9732(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9732,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9738,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_9738(t7,t1,t3);}

/* loop2343 in a9731 in ##compiler#compute-database-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_9738(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_9738,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9746,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=f_9746(t3,t4);
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

/* g2350 in loop2343 in a9731 in ##compiler#compute-database-statistics in k5047 in k5044 in k3982 in k3979 */
static C_word C_fcall f_9746(C_word t0,C_word t1){
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
t5=(C_word)C_eqp(t4,lf[179]);
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
t11=(C_word)C_eqp(lf[223],t10);
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

/* k9725 in ##compiler#compute-database-statistics in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 857  values");
C_values(9,0,((C_word*)t0)[7],C_retrieve(lf[315]),C_retrieve(lf[316]),((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* ##sys#toplevel-definition-hook in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9702(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[4],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_9702,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep(t5)?C_SCHEME_FALSE:(C_word)C_i_not(t4));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9712,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 820  debugging");
((C_proc5)C_retrieve_proc(*((C_word*)lf[10]+1)))(5,*((C_word*)lf[10]+1),t7,lf[246],lf[313],t2);}
else{
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k9710 in ##sys#toplevel-definition-hook in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 821  hide-variable");
((C_proc3)C_retrieve_symbol_proc(lf[312]))(3,*((C_word*)lf[312]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##compiler#dump-global-refs in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9653(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9653,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9659,tmp=(C_word)a,a+=2,tmp);
C_trace("support.scm: 806  ##sys#hash-table-for-each");
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),t1,t3,t2);}

/* a9658 in ##compiler#dump-global-refs in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9659(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9659,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9700,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 808  keyword?");
((C_proc3)C_retrieve_symbol_proc(lf[308]))(3,*((C_word*)lf[308]+1),t4,t2);}

/* k9698 in a9658 in ##compiler#dump-global-refs in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9700(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9700,2,t0,t1);}
t2=(C_truep(t1)?C_SCHEME_FALSE:(C_word)C_i_assq(lf[179],((C_word*)t0)[4]));
if(C_truep(t2)){
t3=(C_word)C_i_assq(lf[166],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9672,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t3)){
t5=(C_word)C_i_cdr(t3);
t6=(C_word)C_i_length(t5);
t7=(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t6);
C_trace("support.scm: 810  write");
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t4,t7);}
else{
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],C_fix(0));
C_trace("support.scm: 810  write");
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t4,t5);}}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k9670 in k9698 in a9658 in ##compiler#dump-global-refs in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 811  newline");
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[2]);}

/* ##compiler#dump-defined-globals in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9616(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9616,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9622,tmp=(C_word)a,a+=2,tmp);
C_trace("support.scm: 796  ##sys#hash-table-for-each");
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),t1,t3,t2);}

/* a9621 in ##compiler#dump-defined-globals in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9622(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9622,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9629,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9651,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 798  keyword?");
((C_proc3)C_retrieve_symbol_proc(lf[308]))(3,*((C_word*)lf[308]+1),t5,t2);}

/* k9649 in a9621 in ##compiler#dump-defined-globals in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_9629(t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_i_assq(lf[179],((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_9629(t3,(C_truep(t2)?(C_word)C_i_assq(lf[177],((C_word*)t0)[2]):C_SCHEME_FALSE));}}

/* k9627 in a9621 in ##compiler#dump-defined-globals in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_9629(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9629,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9632,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 801  write");
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k9630 in k9627 in a9621 in ##compiler#dump-defined-globals in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 802  newline");
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[2]);}

/* ##compiler#dump-undefined-globals in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9575(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9575,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9581,tmp=(C_word)a,a+=2,tmp);
C_trace("support.scm: 786  ##sys#hash-table-for-each");
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),t1,t3,t2);}

/* a9580 in ##compiler#dump-undefined-globals in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9581(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9581,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9588,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9614,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 788  keyword?");
((C_proc3)C_retrieve_symbol_proc(lf[308]))(3,*((C_word*)lf[308]+1),t5,t2);}

/* k9612 in a9580 in ##compiler#dump-undefined-globals in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_9588(t2,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_assq(lf[179],((C_word*)t0)[2]))){
t2=(C_word)C_i_assq(lf[177],((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_9588(t3,(C_word)C_i_not(t2));}
else{
t2=((C_word*)t0)[3];
f_9588(t2,C_SCHEME_FALSE);}}}

/* k9586 in a9580 in ##compiler#dump-undefined-globals in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_9588(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9588,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9591,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 791  write");
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t2,((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k9589 in k9586 in a9580 in ##compiler#dump-undefined-globals in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 792  newline");
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[2]);}

/* ##compiler#simple-lambda-node? in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9453(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_9453,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(2));
t5=(C_word)C_i_caddr(t4);
t6=(C_word)C_i_pairp(t5);
t7=(C_truep(t6)?(C_word)C_i_car(t5):C_SCHEME_FALSE);
if(C_truep(t7)){
if(C_truep((C_word)C_i_cadr(t4))){
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9482,a[2]=t9,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t11=((C_word*)t9)[1];
f_9482(3,t11,t1,t2);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}

/* rec in ##compiler#simple-lambda-node? in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9482(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_9482,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_eqp(t4,lf[235]);
if(C_truep(t5)){
t6=t2;
t7=(C_word)C_slot(t6,C_fix(3));
t8=(C_word)C_i_car(t7);
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(lf[210],t9);
if(C_truep(t10)){
t11=(C_word)C_slot(t8,C_fix(2));
t12=(C_word)C_i_car(t11);
t13=(C_word)C_eqp(((C_word*)t0)[3],t12);
if(C_truep(t13)){
t14=(C_word)C_i_cdr(t7);
C_trace("support.scm: 778  every");
((C_proc4)C_retrieve_symbol_proc(lf[87]))(4,*((C_word*)lf[87]+1),t1,((C_word*)((C_word*)t0)[2])[1],t14);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}
else{
t6=(C_word)C_eqp(t4,lf[226]);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}
else{
t7=t2;
t8=(C_word)C_slot(t7,C_fix(3));
C_trace("support.scm: 780  every");
((C_proc4)C_retrieve_symbol_proc(lf[87]))(4,*((C_word*)lf[87]+1),t1,((C_word*)((C_word*)t0)[2])[1],t8);}}}

/* ##compiler#expression-has-side-effects? in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9352(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_9352,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9358,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_9358(3,t7,t1,t2);}

/* walk in ##compiler#expression-has-side-effects? in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9358(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_9358,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(3));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(1));
t7=(C_word)C_eqp(t6,lf[210]);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9384,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t6,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t7)){
t9=t8;
f_9384(t9,t7);}
else{
t9=(C_word)C_eqp(t6,lf[82]);
if(C_truep(t9)){
t10=t8;
f_9384(t10,t9);}
else{
t10=(C_word)C_eqp(t6,lf[216]);
if(C_truep(t10)){
t11=t8;
f_9384(t11,t10);}
else{
t11=(C_word)C_eqp(t6,lf[227]);
t12=t8;
f_9384(t12,(C_truep(t11)?t11:(C_word)C_eqp(t6,lf[214])));}}}}

/* k9382 in walk in ##compiler#expression-has-side-effects? in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_9384(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_9384,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[223]);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
t4=(C_word)C_slot(t3,C_fix(2));
t5=(C_word)C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9398,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 761  find");
((C_proc4)C_retrieve_symbol_proc(lf[304]))(4,*((C_word*)lf[304]+1),((C_word*)t0)[6],t6,C_retrieve(lf[305]));}
else{
t3=(C_word)C_eqp(((C_word*)t0)[5],lf[215]);
if(C_truep(t3)){
if(C_truep(t3)){
C_trace("support.scm: 762  any");
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),((C_word*)t0)[6],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_TRUE);}}
else{
t4=(C_word)C_eqp(((C_word*)t0)[5],lf[92]);
if(C_truep(t4)){
C_trace("support.scm: 762  any");
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),((C_word*)t0)[6],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}
else{
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}}}}}

/* a9397 in k9382 in walk in ##compiler#expression-has-side-effects? in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9398(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9398,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9406,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 761  foreign-callback-stub-id");
((C_proc3)C_retrieve_symbol_proc(lf[303]))(3,*((C_word*)lf[303]+1),t3,t2);}

/* k9404 in a9397 in k9382 in walk in ##compiler#expression-has-side-effects? in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(((C_word*)t0)[2],t1));}

/* ##compiler#match-node in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)tr5,(void*)f_9127,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9130,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t14=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9164,a[2]=t10,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t15=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9207,a[2]=t10,a[3]=t12,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9326,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
C_trace("support.scm: 745  matchn");
t17=((C_word*)t12)[1];
f_9207(t17,t16,t2,t3);}

/* k9324 in ##compiler#match-node in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9326,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9332,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=(C_word)C_slot(t3,C_fix(1));
t5=((C_word*)t0)[3];
t6=(C_word)C_slot(t5,C_fix(2));
C_trace("support.scm: 748  debugging");
((C_proc7)C_retrieve_proc(*((C_word*)lf[10]+1)))(7,*((C_word*)lf[10]+1),t2,lf[300],lf[301],t4,t6,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9330 in k9324 in ##compiler#match-node in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* matchn in ##compiler#match-node in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_9207(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_9207,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_not_pair_p(t3))){
C_trace("support.scm: 734  resolve");
t4=((C_word*)((C_word*)t0)[4])[1];
f_9130(t4,t1,t3,t2);}
else{
t4=t2;
t5=(C_word)C_slot(t4,C_fix(1));
t6=(C_word)C_i_car(t3);
t7=(C_word)C_eqp(t5,t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9229,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t9=t2;
t10=(C_word)C_slot(t9,C_fix(2));
t11=(C_word)C_i_cadr(t3);
C_trace("support.scm: 736  match1");
t12=((C_word*)((C_word*)t0)[2])[1];
f_9164(t12,t8,t10,t11);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}}

/* k9227 in matchn in ##compiler#match-node in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9229(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9229,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
t3=(C_word)C_slot(t2,C_fix(3));
t4=(C_word)C_i_cddr(((C_word*)t0)[5]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9247,a[2]=((C_word*)t0)[3],a[3]=t6,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_9247(t8,((C_word*)t0)[2],t3,t4);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop in k9227 in matchn in ##compiler#match-node in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_9247(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9247,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_nullp(t2));}
else{
if(C_truep((C_word)C_i_not_pair_p(t3))){
C_trace("support.scm: 740  resolve");
t4=((C_word*)((C_word*)t0)[4])[1];
f_9130(t4,t1,t3,t2);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9278,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_car(t3);
C_trace("support.scm: 742  matchn");
t7=((C_word*)((C_word*)t0)[2])[1];
f_9207(t7,t4,t5,t6);}}}}

/* k9276 in loop in k9227 in matchn in ##compiler#match-node in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("support.scm: 743  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_9247(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* match1 in ##compiler#match-node in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_9164(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_9164,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_not_pair_p(t3))){
C_trace("support.scm: 727  resolve");
t4=((C_word*)((C_word*)t0)[3])[1];
f_9130(t4,t1,t3,t2);}
else{
if(C_truep((C_word)C_i_not_pair_p(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9186,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_car(t3);
C_trace("support.scm: 729  match1");
t8=t4;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}

/* k9184 in match1 in ##compiler#match-node in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("support.scm: 729  match1");
t4=((C_word*)((C_word*)t0)[3])[1];
f_9164(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* resolve in ##compiler#match-node in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_9130(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9130,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9138,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("g21462147");
t6=t1;
((C_proc2)C_retrieve_proc(t6))(2,t6,f_9138(t5,t4));}
else{
if(C_truep((C_word)C_i_memq(t2,((C_word*)t0)[2]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9159,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 722  alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[121]))(5,*((C_word*)lf[121]+1),t5,t2,t3,((C_word*)((C_word*)t0)[3])[1]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_eqp(t2,t3));}}}

/* k9157 in resolve in ##compiler#match-node in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* g2146 in resolve in ##compiler#match-node in k5047 in k5044 in k3982 in k3979 */
static C_word C_fcall f_9138(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_cdr(t1);
return((C_word)C_i_equalp(((C_word*)t0)[2],t2));}

/* ##compiler#load-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9058(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_9058,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_9064,tmp=(C_word)a,a+=2,tmp);
C_trace("support.scm: 702  with-input-from-file");
((C_proc4)C_retrieve_symbol_proc(lf[298]))(4,*((C_word*)lf[298]+1),t1,t2,t3);}

/* a9063 in ##compiler#load-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9064,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9070,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_9070(t5,t1);}

/* loop in a9063 in ##compiler#load-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_9070(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9070,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9074,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 705  read");
((C_proc2)C_retrieve_proc(*((C_word*)lf[101]+1)))(2,*((C_word*)lf[101]+1),t2);}

/* k9072 in loop in a9063 in ##compiler#load-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9074,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9110,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(t1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9121,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_cadr(t1);
C_trace("support.scm: 710  sexpr->node");
((C_proc3)C_retrieve_symbol_proc(lf[278]))(3,*((C_word*)lf[278]+1),t4,t5);}}

/* k9119 in k9072 in loop in a9063 in ##compiler#load-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9121,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[290],C_SCHEME_TRUE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[290],t5);}
else{
C_trace("##sys#error");
t5=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k9083 in k9119 in k9072 in loop in a9063 in ##compiler#load-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[290],t1);}

/* k9108 in k9072 in loop in a9063 in ##compiler#load-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 711  loop");
t2=((C_word*)((C_word*)t0)[3])[1];
f_9070(t2,((C_word*)t0)[2]);}

/* ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8866(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8866,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8870,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8897,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 671  with-output-to-file");
((C_proc4)C_retrieve_symbol_proc(lf[296]))(4,*((C_word*)lf[296]+1),t6,t2,t7);}

/* a8896 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9056,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 673  chicken-version");
((C_proc2)C_retrieve_symbol_proc(lf[295]))(2,*((C_word*)lf[295]+1),t3);}

/* k9054 in a8896 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 673  print");
((C_proc7)C_retrieve_proc(*((C_word*)lf[280]+1)))(7,*((C_word*)lf[280]+1),((C_word*)t0)[2],lf[292],t1,lf[293],C_retrieve(lf[237]),lf[294]);}

/* k8899 in a8896 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8904,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8909,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 675  ##sys#hash-table-for-each");
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),t2,t3,((C_word*)t0)[2]);}

/* a8908 in k8899 in a8896 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8909(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8909,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
C_trace("support.scm: 677  variable-visible?");
((C_proc3)C_retrieve_symbol_proc(lf[291]))(3,*((C_word*)lf[291]+1),t4,t2);}

/* k8914 in a8908 in k8899 in a8896 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8916,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_assq(lf[163],((C_word*)t0)[6]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=((C_word*)t0)[4];
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[239]))(4,*((C_word*)lf[239]+1),t3,t4,lf[290]);}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k9050 in k8914 in a8908 in k8899 in a8896 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9052,2,t0,t1);}
if(C_truep((C_word)C_i_structurep(t1,lf[200]))){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_i_assq(lf[161],((C_word*)t0)[6]);
t3=(C_word)C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t3)){
t5=t4;
f_8940(t5,t3);}
else{
t5=(C_word)C_i_cdr(t2);
t6=(C_word)C_eqp(lf[157],t5);
t7=t4;
f_8940(t7,(C_word)C_i_not(t6));}}}

/* k8938 in k9050 in k8914 in a8908 in k8899 in a8896 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8940(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8940,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep((C_word)C_i_assq(lf[189],((C_word*)t0)[7]))){
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(C_word)C_slot(t2,C_fix(2));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_9019,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("support.scm: 686  get");
((C_proc5)C_retrieve_symbol_proc(lf[134]))(5,*((C_word*)lf[134]+1),t4,((C_word*)t0)[2],((C_word*)t0)[4],lf[196]);}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9017 in k8938 in k9050 in k8914 in a8908 in k8899 in a8896 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_9019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9019,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)t0)[5];
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[239]))(4,*((C_word*)lf[239]+1),t2,t3,lf[289]);}}

/* k8972 in k9017 in k8938 in k9050 in k8914 in a8908 in k8899 in a8896 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8974,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8977,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_eqp(t1,lf[286]);
if(C_truep(t3)){
t4=t2;
f_8977(t4,C_SCHEME_TRUE);}
else{
t4=(C_word)C_eqp(t1,lf[287]);
if(C_truep(t4)){
t5=t2;
f_8977(t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cadddr(((C_word*)t0)[2]);
t6=C_retrieve(lf[288]);
t7=t2;
f_8977(t7,(C_word)C_fixnum_lessp(t5,t6));}}}

/* k8975 in k8972 in k9017 in k8938 in k9050 in k8914 in a8908 in k8899 in a8896 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8977(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8977,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8984,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8995,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[2]);
C_trace("support.scm: 693  node->sexpr");
((C_proc3)C_retrieve_symbol_proc(lf[277]))(3,*((C_word*)lf[277]+1),t5,t6);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k8993 in k8975 in k8972 in k9017 in k8938 in k9050 in k8914 in a8908 in k8899 in a8896 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8995,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
C_trace("support.scm: 693  pp");
((C_proc3)C_retrieve_symbol_proc(lf[285]))(3,*((C_word*)lf[285]+1),((C_word*)t0)[2],t2);}

/* k8982 in k8975 in k8972 in k9017 in k8938 in k9050 in k8914 in a8908 in k8899 in a8896 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 694  newline");
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[2]);}

/* k8902 in k8899 in a8896 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 696  print");
((C_proc3)C_retrieve_proc(*((C_word*)lf[280]+1)))(3,*((C_word*)lf[280]+1),((C_word*)t0)[2],lf[284]);}

/* k8868 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8876,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
C_trace("support.scm: 698  debugging");
((C_proc4)C_retrieve_proc(*((C_word*)lf[10]+1)))(4,*((C_word*)lf[10]+1),t2,lf[282],lf[283]);}
else{
t3=t2;
f_8876(2,t3,C_SCHEME_FALSE);}}

/* k8874 in k8868 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8876,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8881,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8889,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 699  sort-symbols");
((C_proc3)C_retrieve_proc(*((C_word*)lf[78]+1)))(3,*((C_word*)lf[78]+1),t3,((C_word*)((C_word*)t0)[2])[1]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k8887 in k8874 in k8868 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("for-each");
t2=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a8880 in k8874 in k8868 in ##compiler#emit-global-inline-file in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8881(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8881,3,t0,t1,t2);}
t3=*((C_word*)lf[280]+1);
C_trace("g21012102");
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,lf[281],t2);}

/* ##compiler#sexpr->node in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8798(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8798,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8804,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_8804(t6,t1,t2);}

/* walk in ##compiler#sexpr->node in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8804(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_8804,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cadr(t2);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8825,a[2]=t4,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t10=(C_word)C_i_cddr(t2);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8831,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t12,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_8831(t14,t9,t10);}

/* loop2020 in walk in ##compiler#sexpr->node in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8831(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8831,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8860,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g20362037");
t5=((C_word*)((C_word*)t0)[2])[1];
f_8804(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8858 in loop2020 in walk in ##compiler#sexpr->node in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8860(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8860,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop20202033");
t6=((C_word*)((C_word*)t0)[4])[1];
f_8831(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop20202033");
t6=((C_word*)((C_word*)t0)[4])[1];
f_8831(t6,((C_word*)t0)[3],t5);}}

/* k8823 in walk in ##compiler#sexpr->node in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8825,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[200],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* ##compiler#node->sexpr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8712(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8712,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8718,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_8718(t6,t1,t2);}

/* walk in ##compiler#node->sexpr in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8718(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_8718,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8748,a[2]=t4,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_FALSE;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8752,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t13=t2;
t14=(C_word)C_slot(t13,C_fix(3));
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8763,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t16,a[5]=t11,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_8763(t18,t12,t14);}

/* loop1984 in walk in ##compiler#node->sexpr in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8763(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8763,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8792,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g20002001");
t5=((C_word*)((C_word*)t0)[2])[1];
f_8718(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8790 in loop1984 in walk in ##compiler#node->sexpr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8792(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8792,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop19841997");
t6=((C_word*)((C_word*)t0)[4])[1];
f_8763(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop19841997");
t6=((C_word*)((C_word*)t0)[4])[1];
f_8763(t6,((C_word*)t0)[3],t5);}}

/* k8750 in walk in ##compiler#node->sexpr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#append");
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k8746 in walk in ##compiler#node->sexpr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8748(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8748,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* ##compiler#copy-node! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8673(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_8673,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8677,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=t2;
t6=(C_word)C_slot(t5,C_fix(1));
t7=t3;
t8=(C_word)C_i_check_structure(t7,lf[200]);
C_trace("##sys#block-set!");
t9=*((C_word*)lf[203]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t4,t7,C_fix(1),t6);}

/* k8675 in ##compiler#copy-node! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8677,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8680,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
t4=(C_word)C_slot(t3,C_fix(2));
t5=((C_word*)t0)[3];
t6=(C_word)C_i_check_structure(t5,lf[200]);
C_trace("##sys#block-set!");
t7=*((C_word*)lf[203]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t2,t5,C_fix(2),t4);}

/* k8678 in k8675 in ##compiler#copy-node! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8680,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8683,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=(C_word)C_slot(t3,C_fix(3));
t5=((C_word*)t0)[3];
t6=(C_word)C_i_check_structure(t5,lf[200]);
C_trace("##sys#block-set!");
t7=*((C_word*)lf[203]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t2,t5,C_fix(3),t4);}

/* k8681 in k8678 in k8675 in ##compiler#copy-node! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* ##compiler#tree-copy in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8639(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8639,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8645,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_8645(t6,t1,t2);}

/* rec in ##compiler#tree-copy in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8645(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_8645,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8659,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
C_trace("support.scm: 650  rec");
t7=t3;
t8=t4;
t1=t7;
t2=t8;
goto loop;}
else{
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8657 in rec in ##compiler#tree-copy in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8663,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("support.scm: 650  rec");
t4=((C_word*)((C_word*)t0)[2])[1];
f_8645(t4,t2,t3);}

/* k8661 in k8657 in rec in ##compiler#tree-copy in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8663,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8254(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_save_and_reclaim((void*)tr6,(void*)f_8254,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8258,a[2]=t2,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8590,a[2]=t7,a[3]=t12,a[4]=t9,tmp=(C_word)a,a+=5,tmp));
t14=((C_word*)t12)[1];
f_8590(t14,t10,t3,t4);}

/* loop1766 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8590(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8590,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[273]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8623,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
C_trace("g17861787");
t10=t6;
((C_proc4)C_retrieve_proc(t10))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8621 in loop1766 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8623(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8623,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8603,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_8603(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_8603(t5,t4);}}

/* k8601 in k8621 in loop1766 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8603(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
C_trace("loop17661780");
t5=((C_word*)((C_word*)t0)[3])[1];
f_8590(t5,((C_word*)t0)[2],t3,t4);}

/* k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8258,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8266,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp));
C_trace("support.scm: 645  walk");
t5=((C_word*)t3)[1];
f_8266(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8266(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8266,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(3));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(t9,lf[210]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t7);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8303,a[2]=t11,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8313,a[2]=t11,a[3]=((C_word*)t0)[3],a[4]=t12,tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 613  get");
((C_proc5)C_retrieve_symbol_proc(lf[134]))(5,*((C_word*)lf[134]+1),t13,((C_word*)t0)[3],t11,lf[180]);}
else{
t11=(C_word)C_eqp(t9,lf[228]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8350,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t13=(C_word)C_i_car(t7);
t14=t3;
C_trace("support.scm: 605  alist-ref");
((C_proc6)C_retrieve_symbol_proc(lf[269]))(6,*((C_word*)lf[269]+1),t12,t13,t14,*((C_word*)lf[270]+1),t13);}
else{
t12=(C_word)C_eqp(t9,lf[92]);
if(C_truep(t12)){
t13=(C_word)C_i_car(t7);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8366,a[2]=t3,a[3]=t13,a[4]=((C_word*)t0)[2],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t15=(C_word)C_i_car(t5);
C_trace("support.scm: 622  walk");
t27=t14;
t28=t15;
t29=t3;
t1=t27;
t2=t28;
t3=t29;
goto loop;}
else{
t13=(C_word)C_eqp(t9,lf[223]);
if(C_truep(t13)){
t14=(C_word)C_i_caddr(t7);
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8415,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=t7,tmp=(C_word)a,a+=7,tmp);
C_trace("support.scm: 629  decompose-lambda-list");
((C_proc4)C_retrieve_symbol_proc(lf[108]))(4,*((C_word*)lf[108]+1),t1,t14,t15);}
else{
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8575,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t9,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("support.scm: 644  tree-copy");
((C_proc3)C_retrieve_symbol_proc(lf[275]))(3,*((C_word*)lf[275]+1),t14,t7);}}}}}

/* k8573 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8579,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8581,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("map");
t4=*((C_word*)lf[271]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a8580 in k8573 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8581(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8581,3,t0,t1,t2);}
C_trace("g19441945");
t3=((C_word*)((C_word*)t0)[3])[1];
f_8266(t3,t1,t2,((C_word*)t0)[2]);}

/* k8577 in k8573 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8579,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[200],((C_word*)t0)[2],t3,t1));}

/* a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8415(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)tr5,(void*)f_8415,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8419,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8522,a[2]=t6,a[3]=t11,a[4]=t8,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_8522(t13,t9,t2);}

/* loop1840 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8522(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8522,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8549,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8559,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g18561857");
t6=t3;
f_8549(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8557 in loop1840 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8559(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8559,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop18401853");
t6=((C_word*)((C_word*)t0)[4])[1];
f_8522(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop18401853");
t6=((C_word*)((C_word*)t0)[4])[1];
f_8522(t6,((C_word*)t0)[3],t5);}}

/* g1856 in loop1840 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8549(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8549,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8553,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 633  gensym");
((C_proc3)C_retrieve_symbol_proc(lf[93]))(3,*((C_word*)lf[93]+1),t3,t2);}

/* k8551 in g1856 in loop1840 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8553,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8556,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 634  put!");
((C_proc6)C_retrieve_symbol_proc(lf[138]))(6,*((C_word*)lf[138]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[274],C_SCHEME_TRUE);}

/* k8554 in k8551 in g1856 in loop1840 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k8417 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8419(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8419,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8422,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8471,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8473,a[2]=t4,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_8473(t11,t7,((C_word*)t0)[2],t1);}

/* loop1867 in k8417 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8473(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_8473,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[273]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8506,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
C_trace("g18871888");
t10=t6;
((C_proc4)C_retrieve_proc(t10))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k8504 in loop1867 in k8417 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8506,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8486,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_8486(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_8486(t5,t4);}}

/* k8484 in k8504 in loop1867 in k8417 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8486(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
C_trace("loop18671881");
t5=((C_word*)((C_word*)t0)[3])[1];
f_8473(t5,((C_word*)t0)[2],t3,t4);}

/* k8469 in k8417 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 637  append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[54]+1)))(4,*((C_word*)lf[54]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k8420 in k8417 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8422,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
C_trace("support.scm: 640  gensym");
((C_proc3)C_retrieve_symbol_proc(lf[93]))(3,*((C_word*)lf[93]+1),t2,lf[272]);}

/* k8446 in k8420 in k8417 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8448,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8456,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8464,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t5=((C_word*)t0)[2];
t6=((C_word*)t0)[6];
C_trace("support.scm: 605  alist-ref");
((C_proc6)C_retrieve_symbol_proc(lf[269]))(6,*((C_word*)lf[269]+1),t4,t5,t6,*((C_word*)lf[270]+1),t5);}
else{
C_trace("support.scm: 641  build-lambda-list");
((C_proc5)C_retrieve_proc(*((C_word*)lf[48]+1)))(5,*((C_word*)lf[48]+1),t3,((C_word*)t0)[4],((C_word*)t0)[3],C_SCHEME_FALSE);}}

/* k8462 in k8446 in k8420 in k8417 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 641  build-lambda-list");
((C_proc5)C_retrieve_proc(*((C_word*)lf[48]+1)))(5,*((C_word*)lf[48]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8454 in k8446 in k8420 in k8417 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8456,2,t0,t1);}
t2=(C_word)C_i_cadddr(((C_word*)t0)[8]);
t3=(C_word)C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[6],t1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8438,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8440,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("map");
t6=*((C_word*)lf[271]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[2]);}

/* a8439 in k8454 in k8446 in k8420 in k8417 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8440(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8440,3,t0,t1,t2);}
C_trace("g19181919");
t3=((C_word*)((C_word*)t0)[3])[1];
f_8266(t3,t1,t2,((C_word*)t0)[2]);}

/* k8436 in k8454 in k8446 in k8420 in k8417 in a8414 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8438,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[200],lf[223],((C_word*)t0)[2],t1));}

/* k8364 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace("support.scm: 623  gensym");
((C_proc3)C_retrieve_symbol_proc(lf[93]))(3,*((C_word*)lf[93]+1),t2,((C_word*)t0)[3]);}

/* k8367 in k8364 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8369,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8372,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
C_trace("support.scm: 624  alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[121]))(5,*((C_word*)lf[121]+1),t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k8370 in k8367 in k8364 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8372,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8392,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[3]);
C_trace("support.scm: 627  walk");
t5=((C_word*)((C_word*)t0)[2])[1];
f_8266(t5,t3,t4,t1);}

/* k8390 in k8370 in k8367 in k8364 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8392(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8392,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[200],lf[92],((C_word*)t0)[2],t2));}

/* k8348 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8350,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8342,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[4]);
C_trace("support.scm: 619  walk");
t5=((C_word*)((C_word*)t0)[3])[1];
f_8266(t5,t3,t4,((C_word*)t0)[2]);}

/* k8340 in k8348 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8342,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[200],lf[228],((C_word*)t0)[2],t2));}

/* k8311 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("support.scm: 614  put!");
((C_proc6)C_retrieve_symbol_proc(lf[138]))(6,*((C_word*)lf[138]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],lf[180],C_SCHEME_FALSE);}
else{
t2=((C_word*)t0)[4];
f_8303(2,t2,C_SCHEME_UNDEFINED);}}

/* k8301 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8303,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8310,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=((C_word*)t0)[3];
C_trace("support.scm: 605  alist-ref");
((C_proc6)C_retrieve_symbol_proc(lf[269]))(6,*((C_word*)lf[269]+1),t2,((C_word*)t0)[2],t3,*((C_word*)lf[270]+1),((C_word*)t0)[2]);}

/* k8308 in k8301 in walk in k8256 in ##compiler#copy-node-tree-and-rename in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8310,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(C_word)C_a_i_list(&a,1,t1);
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[200],lf[210],t3,C_SCHEME_END_OF_LIST));}

/* ##compiler#inline-lambda-bindings in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8106(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_8106,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8112,a[2]=t6,a[3]=t4,a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("support.scm: 582  decompose-lambda-list");
((C_proc4)C_retrieve_symbol_proc(lf[108]))(4,*((C_word*)lf[108]+1),t1,t2,t7);}

/* a8111 in ##compiler#inline-lambda-bindings in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8112(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8112,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8118,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8124,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,t1,t5,t6);}

/* a8123 in a8111 in ##compiler#inline-lambda-bindings in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8124(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_8124,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8128,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t2,a[10]=t1,tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[5])){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8219,a[2]=t6,a[3]=t10,a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_8219(t12,t4,((C_word*)t0)[3]);}
else{
t5=t4;
f_8128(2,t5,((C_word*)t0)[3]);}}

/* loop1718 in a8123 in a8111 in ##compiler#inline-lambda-bindings in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8219(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8219,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[93]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8248,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g17341735");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8246 in loop1718 in a8123 in a8111 in ##compiler#inline-lambda-bindings in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8248(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8248,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop17181731");
t6=((C_word*)((C_word*)t0)[4])[1];
f_8219(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop17181731");
t6=((C_word*)((C_word*)t0)[4])[1];
f_8219(t6,((C_word*)t0)[3],t5);}}

/* k8126 in a8123 in a8111 in ##compiler#inline-lambda-bindings in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8128,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8131,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t1,a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
C_trace("support.scm: 588  copy-node-tree-and-rename");
((C_proc6)C_retrieve_symbol_proc(lf[268]))(6,*((C_word*)lf[268]+1),t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}
else{
t3=t2;
f_8131(2,t3,((C_word*)t0)[4]);}}

/* k8129 in k8126 in a8123 in a8111 in ##compiler#inline-lambda-bindings in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8131,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_8136,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8157,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8211,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 594  last");
((C_proc3)C_retrieve_symbol_proc(lf[250]))(3,*((C_word*)lf[250]+1),t4,((C_word*)t0)[5]);}
else{
t4=t3;
f_8157(t4,t1);}}

/* k8209 in k8129 in k8126 in a8123 in a8111 in ##compiler#inline-lambda-bindings in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8211(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8211,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[4]))){
t3=(C_word)C_a_i_list(&a,1,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_record(&a,4,lf[200],lf[82],t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_list(&a,2,t4,((C_word*)t0)[3]);
t6=((C_word*)t0)[2];
f_8157(t6,(C_word)C_a_i_record(&a,4,lf[200],lf[92],t2,t5));}
else{
t3=(C_word)C_i_length(((C_word*)t0)[4]);
t4=(C_word)C_fixnum_times(C_fix(3),t3);
t5=(C_word)C_a_i_list(&a,2,lf[267],t4);
t6=((C_word*)t0)[4];
t7=(C_word)C_a_i_record(&a,4,lf[200],lf[233],t5,t6);
t8=(C_word)C_a_i_list(&a,2,t7,((C_word*)t0)[3]);
t9=((C_word*)t0)[2];
f_8157(t9,(C_word)C_a_i_record(&a,4,lf[200],lf[92],t2,t8));}}

/* k8155 in k8129 in k8126 in a8123 in a8111 in ##compiler#inline-lambda-bindings in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8157(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8157,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8161,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("support.scm: 600  take");
((C_proc4)C_retrieve_symbol_proc(lf[266]))(4,*((C_word*)lf[266]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8159 in k8155 in k8129 in k8126 in a8123 in a8111 in ##compiler#inline-lambda-bindings in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 590  fold-right");
((C_proc6)C_retrieve_symbol_proc(lf[265]))(6,*((C_word*)lf[265]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a8135 in k8129 in k8126 in a8123 in a8111 in ##compiler#inline-lambda-bindings in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8136(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8136,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_list(&a,1,t2);
t6=(C_word)C_a_i_list(&a,2,t3,t4);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[200],lf[92],t5,t6));}

/* a8117 in a8111 in ##compiler#inline-lambda-bindings in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8118,2,t0,t1);}
C_trace("support.scm: 585  split-at");
((C_proc4)C_retrieve_symbol_proc(lf[264]))(4,*((C_word*)lf[264]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##compiler#fold-boolean in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8052(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8052,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8058,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_8058(t7,t1,t3);}

/* fold in ##compiler#fold-boolean in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_8058(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8058,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_nullp(t3))){
C_apply(4,0,t1,((C_word*)t0)[3],t2);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8084,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_cadr(t2);
C_trace("support.scm: 578  proc");
t7=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t7))(4,t7,t4,t5,t6);}}

/* k8082 in fold in ##compiler#fold-boolean in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8084,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8088,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("support.scm: 579  fold");
t4=((C_word*)((C_word*)t0)[2])[1];
f_8058(t4,t2,t3);}

/* k8086 in k8082 in fold in ##compiler#fold-boolean in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_8088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8088,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[200],lf[225],lf[262],t2));}

/* ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7425(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7425,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7431,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_7431(t6,t1,t2);}

/* walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7431(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_7431,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(3));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(1));
t9=(C_word)C_eqp(t8,lf[215]);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7465,a[2]=t6,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t8,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t9)){
t11=t10;
f_7465(t11,t9);}
else{
t11=(C_word)C_eqp(t8,lf[259]);
t12=t10;
f_7465(t12,(C_truep(t11)?t11:(C_word)C_eqp(t8,lf[260])));}}

/* k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7465(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7465,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7472,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7474,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t8,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_7474(t10,t6,((C_word*)t0)[3]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[249]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7524,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7528,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7530,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=t10,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7530(t12,t8,((C_word*)t0)[3]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[5],lf[210]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(((C_word*)t0)[5],lf[214]));
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
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7609,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_FALSE;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7625,a[2]=((C_word*)t0)[2],a[3]=t11,a[4]=t8,a[5]=t10,tmp=(C_word)a,a+=6,tmp);
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7678,a[2]=t16,a[3]=((C_word*)t0)[4],a[4]=t13,a[5]=t15,tmp=(C_word)a,a+=6,tmp);
C_trace("support.scm: 552  butlast");
((C_proc3)C_retrieve_symbol_proc(lf[252]))(3,*((C_word*)lf[252]+1),t17,((C_word*)t0)[3]);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[5],lf[223]);
if(C_truep(t7)){
t8=(C_word)C_i_cadr(((C_word*)t0)[2]);
t9=(C_truep(t8)?lf[117]:lf[223]);
t10=(C_word)C_i_caddr(((C_word*)t0)[2]);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7734,a[2]=t10,a[3]=t9,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=(C_word)C_i_car(((C_word*)t0)[3]);
C_trace("support.scm: 559  walk");
t13=((C_word*)((C_word*)t0)[4])[1];
f_7431(t13,t11,t12);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[5],lf[235]);
if(C_truep(t8)){
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7752,a[2]=((C_word*)t0)[4],a[3]=t10,a[4]=t14,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_7752(t16,((C_word*)t0)[6],((C_word*)t0)[3]);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[5],lf[226]);
if(C_truep(t9)){
t10=(C_word)C_i_car(((C_word*)t0)[2]);
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7802,a[2]=t10,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7804,a[2]=((C_word*)t0)[4],a[3]=t12,a[4]=t17,a[5]=t14,tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_7804(t19,t15,((C_word*)t0)[3]);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[5],lf[216]);
if(C_truep(t10)){
t11=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]));}
else{
t11=(C_word)C_eqp(((C_word*)t0)[5],lf[254]);
if(C_truep(t11)){
t12=(C_word)C_i_car(((C_word*)t0)[2]);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7861,a[2]=t14,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp));
t16=((C_word*)t14)[1];
f_7861(t16,((C_word*)t0)[6],t12,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[5],lf[255]);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7923,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t12)){
t14=t13;
f_7923(t14,t12);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[5],lf[256]);
if(C_truep(t14)){
t15=t13;
f_7923(t15,t14);}
else{
t15=(C_word)C_eqp(((C_word*)t0)[5],lf[257]);
t16=t13;
f_7923(t16,(C_truep(t15)?t15:(C_word)C_eqp(((C_word*)t0)[5],lf[258])));}}}}}}}}}}}}}

/* k7921 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7923(C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7923,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7930,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
C_trace("support.scm: 569  walk");
t4=((C_word*)((C_word*)t0)[2])[1];
f_7431(t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7984,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7988,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7990,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t9,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7990(t11,t7,((C_word*)t0)[3]);}}

/* loop1668 in k7921 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7990(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7990,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8019,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g16841685");
t5=((C_word*)((C_word*)t0)[2])[1];
f_7431(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k8017 in loop1668 in k7921 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8019,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop16681681");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7990(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop16681681");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7990(t6,((C_word*)t0)[3],t5);}}

/* k7986 in k7921 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 570  append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[54]+1)))(4,*((C_word*)lf[54]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7982 in k7921 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7984,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7928 in k7921 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7930(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7930,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7934,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_cdr(((C_word*)t0)[3]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7940,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t9,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7940(t11,t6,t7);}

/* loop1645 in k7928 in k7921 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7940(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7940,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7969,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g16611662");
t5=((C_word*)((C_word*)t0)[2])[1];
f_7431(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7967 in loop1645 in k7928 in k7921 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7969(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7969,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop16451658");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7940(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop16451658");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7940(t6,((C_word*)t0)[3],t5);}}

/* k7932 in k7928 in k7921 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 569  cons*");
((C_proc6)C_retrieve_symbol_proc(lf[253]))(6,*((C_word*)lf[253]+1),((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7861(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_7861,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7879,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 566  reverse");
((C_proc3)C_retrieve_proc(*((C_word*)lf[76]+1)))(3,*((C_word*)lf[76]+1),t6,t4);}
else{
t6=(C_word)C_fixnum_difference(t2,C_fix(1));
t7=(C_word)C_i_cdr(t3);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7910,a[2]=t7,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t9=(C_word)C_i_car(t3);
C_trace("support.scm: 567  walk");
t10=((C_word*)((C_word*)t0)[3])[1];
f_7431(t10,t8,t9);}}

/* k7908 in loop in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7910,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
C_trace("support.scm: 567  loop");
t3=((C_word*)((C_word*)t0)[5])[1];
f_7861(t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k7877 in loop in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7879,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7887,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
C_trace("support.scm: 566  walk");
t4=((C_word*)((C_word*)t0)[2])[1];
f_7431(t4,t2,t3);}

/* k7885 in k7877 in loop in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7887,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[254],t3));}

/* loop1598 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7804(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7804,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7833,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g16141615");
t5=((C_word*)((C_word*)t0)[2])[1];
f_7431(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7831 in loop1598 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7833(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7833,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop15981611");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7804(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop15981611");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7804(t6,((C_word*)t0)[3],t5);}}

/* k7800 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 561  cons*");
((C_proc5)C_retrieve_symbol_proc(lf[253]))(5,*((C_word*)lf[253]+1),((C_word*)t0)[3],lf[226],((C_word*)t0)[2],t1);}

/* loop1575 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7752(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7752,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7781,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g15911592");
t5=((C_word*)((C_word*)t0)[2])[1];
f_7431(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7779 in loop1575 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7781(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7781,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop15751588");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7752(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop15751588");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7752(t6,((C_word*)t0)[3],t5);}}

/* k7732 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7734,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k7676 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7678,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7680,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_7680(t5,((C_word*)t0)[2],t1);}

/* loop1552 in k7676 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7680(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7680,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7709,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g15681569");
t5=((C_word*)((C_word*)t0)[2])[1];
f_7431(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7707 in loop1552 in k7676 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7709(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7709,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop15521565");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7680(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop15521565");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7680(t6,((C_word*)t0)[3],t5);}}

/* k7623 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7625,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7627,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_7627(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop1525 in k7623 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7627(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_7627,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=*((C_word*)lf[251]+1);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7660,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
C_trace("g15451546");
t10=t6;
((C_proc4)C_retrieve_proc(t10))(4,t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k7658 in loop1525 in k7623 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7660,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7640,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_7640(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_7640(t5,t4);}}

/* k7638 in k7658 in loop1525 in k7623 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7640(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
C_trace("loop15251539");
t5=((C_word*)((C_word*)t0)[3])[1];
f_7627(t5,((C_word*)t0)[2],t3,t4);}

/* k7607 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7609,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7617,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7621,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 553  last");
((C_proc3)C_retrieve_symbol_proc(lf[250]))(3,*((C_word*)lf[250]+1),t3,((C_word*)t0)[2]);}

/* k7619 in k7607 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 553  walk");
t2=((C_word*)((C_word*)t0)[3])[1];
f_7431(t2,((C_word*)t0)[2],t1);}

/* k7615 in k7607 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7617,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[92],t3));}

/* loop1489 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7530(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7530,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7559,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g15051506");
t5=((C_word*)((C_word*)t0)[2])[1];
f_7431(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7557 in loop1489 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7559(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7559,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop14891502");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7530(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop14891502");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7530(t6,((C_word*)t0)[3],t5);}}

/* k7526 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#append");
t2=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k7522 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7524,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[249],t2));}

/* loop1462 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7474(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7474,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7503,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g14781479");
t5=((C_word*)((C_word*)t0)[2])[1];
f_7431(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7501 in loop1462 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7503(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7503,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop14621475");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7474(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop14621475");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7474(t6,((C_word*)t0)[3],t5);}}

/* k7470 in k7463 in walk in ##compiler#build-expression-tree in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7472,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6502(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_6502,3,t0,t1,t2);}
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6505,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7420,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 536  walk");
t9=((C_word*)t6)[1];
f_6505(t9,t8,t2);}

/* k7418 in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7423,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 537  debugging");
((C_proc5)C_retrieve_proc(*((C_word*)lf[10]+1)))(5,*((C_word*)lf[10]+1),t2,lf[246],lf[247],((C_word*)((C_word*)t0)[2])[1]);}

/* k7421 in k7418 in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_6505(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6505,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_symbolp(t2))){
t3=t1;
t4=t2;
t5=(C_word)C_a_i_list(&a,1,t4);
t6=t3;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[200],lf[210],t5,C_SCHEME_END_OF_LIST));}
else{
if(C_truep((C_word)C_i_not_pair_p(t2))){
C_trace("support.scm: 471  bomb");
((C_proc4)C_retrieve_proc(*((C_word*)lf[5]+1)))(4,*((C_word*)lf[5]+1),t1,lf[213],t2);}
else{
t3=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_symbolp(t3))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_eqp(t4,lf[214]);
if(C_truep(t5)){
t6=(C_word)C_i_cadr(t2);
t7=(C_word)C_a_i_list(&a,1,t6);
t8=t1;
t9=t8;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_record(&a,4,lf[200],lf[214],t7,C_SCHEME_END_OF_LIST));}
else{
t6=(C_word)C_eqp(t4,lf[215]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(t4,lf[216]));
if(C_truep(t7)){
t8=(C_word)C_i_car(t2);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6580,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t14=(C_word)C_i_cdr(t2);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6586,a[2]=((C_word*)t0)[3],a[3]=t10,a[4]=t16,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_6586(t18,t13,t14);}
else{
t8=(C_word)C_eqp(t4,lf[82]);
if(C_truep(t8)){
t9=(C_word)C_i_cadr(t2);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6638,a[2]=t9,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_numberp(t9))){
t11=(C_word)C_eqp(lf[220],C_retrieve(lf[221]));
if(C_truep(t11)){
t12=(C_word)C_i_integerp(t9);
t13=t10;
f_6638(t13,(C_word)C_i_not(t12));}
else{
t12=t10;
f_6638(t12,C_SCHEME_FALSE);}}
else{
t11=t10;
f_6638(t11,C_SCHEME_FALSE);}}
else{
t9=(C_word)C_eqp(t4,lf[92]);
if(C_truep(t9)){
t10=(C_word)C_i_cadr(t2);
t11=(C_word)C_i_caddr(t2);
if(C_truep((C_word)C_i_nullp(t10))){
C_trace("support.scm: 491  walk");
t99=t1;
t100=t11;
t1=t99;
t2=t100;
goto loop;}
else{
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6697,a[2]=t2,a[3]=t11,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("support.scm: 492  unzip1");
((C_proc3)C_retrieve_symbol_proc(lf[222]))(3,*((C_word*)lf[222]+1),t12,t10);}}
else{
t10=(C_word)C_eqp(t4,lf[117]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(t4,lf[223]));
if(C_truep(t11)){
t12=(C_word)C_i_cadr(t2);
t13=(C_word)C_a_i_list(&a,1,t12);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6790,a[2]=t13,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t15=(C_word)C_i_caddr(t2);
C_trace("support.scm: 496  walk");
t99=t14;
t100=t15;
t1=t99;
t2=t100;
goto loop;}
else{
t12=(C_word)C_eqp(t4,lf[224]);
if(C_truep(t12)){
t13=(C_word)C_i_cadr(t2);
t14=(C_word)C_i_car(t2);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6823,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t14,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(t13))){
t16=(C_word)C_i_car(t13);
t17=(C_word)C_eqp(lf[82],t16);
if(C_truep(t17)){
t18=(C_word)C_i_cadr(t13);
t19=t15;
f_6823(t19,(C_word)C_a_i_list(&a,1,t18));}
else{
t18=t15;
f_6823(t18,(C_word)C_a_i_list(&a,1,t13));}}
else{
t16=t15;
f_6823(t16,(C_word)C_a_i_list(&a,1,t13));}}
else{
t13=(C_word)C_eqp(t4,lf[225]);
t14=(C_truep(t13)?t13:(C_word)C_eqp(t4,lf[226]));
if(C_truep(t14)){
t15=(C_word)C_i_car(t2);
t16=(C_word)C_i_cadr(t2);
t17=(C_word)C_a_i_list(&a,1,t16);
t18=C_SCHEME_END_OF_LIST;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_FALSE;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6915,a[2]=t17,a[3]=t15,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t23=(C_word)C_i_cddr(t2);
t24=C_SCHEME_UNDEFINED;
t25=(*a=C_VECTOR_TYPE|1,a[1]=t24,tmp=(C_word)a,a+=2,tmp);
t26=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6921,a[2]=((C_word*)t0)[3],a[3]=t19,a[4]=t25,a[5]=t21,tmp=(C_word)a,a+=6,tmp));
t27=((C_word*)t25)[1];
f_6921(t27,t22,t23);}
else{
t15=(C_word)C_eqp(t4,lf[227]);
if(C_truep(t15)){
t16=(C_word)C_i_cadr(t2);
t17=(C_word)C_a_i_list(&a,2,t16,C_SCHEME_TRUE);
t18=t1;
t19=t18;
((C_proc2)(void*)(*((C_word*)t19+1)))(2,t19,(C_word)C_a_i_record(&a,4,lf[200],lf[227],t17,C_SCHEME_END_OF_LIST));}
else{
t16=(C_word)C_eqp(t4,lf[228]);
t17=(C_truep(t16)?t16:(C_word)C_eqp(t4,lf[229]));
if(C_truep(t17)){
t18=(C_word)C_i_cadr(t2);
t19=(C_word)C_a_i_list(&a,1,t18);
t20=C_SCHEME_END_OF_LIST;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_SCHEME_FALSE;
t23=(*a=C_VECTOR_TYPE|1,a[1]=t22,tmp=(C_word)a,a+=2,tmp);
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7005,a[2]=t19,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t25=(C_word)C_i_cddr(t2);
t26=C_SCHEME_UNDEFINED;
t27=(*a=C_VECTOR_TYPE|1,a[1]=t26,tmp=(C_word)a,a+=2,tmp);
t28=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7011,a[2]=((C_word*)t0)[3],a[3]=t21,a[4]=t27,a[5]=t23,tmp=(C_word)a,a+=6,tmp));
t29=((C_word*)t27)[1];
f_7011(t29,t24,t25);}
else{
t18=(C_word)C_eqp(t4,lf[230]);
if(C_truep(t18)){
t19=(C_word)C_i_cadr(t2);
t20=(C_word)C_i_cadr(t19);
t21=(C_word)C_i_caddr(t2);
t22=(C_word)C_i_cadr(t21);
t23=(C_word)C_i_cadddr(t2);
t24=(C_word)C_i_cadr(t23);
t25=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7097,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t24,a[6]=t22,a[7]=t20,tmp=(C_word)a,a+=8,tmp);
C_trace("support.scm: 515  fifth");
((C_proc3)C_retrieve_symbol_proc(lf[232]))(3,*((C_word*)lf[232]+1),t25,t2);}
else{
t19=(C_word)C_eqp(t4,lf[233]);
t20=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7118,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t19)){
t21=t20;
f_7118(t21,t19);}
else{
t21=(C_word)C_eqp(t4,lf[241]);
if(C_truep(t21)){
t22=t20;
f_7118(t22,t21);}
else{
t22=(C_word)C_eqp(t4,lf[242]);
if(C_truep(t22)){
t23=t20;
f_7118(t23,t22);}
else{
t23=(C_word)C_eqp(t4,lf[243]);
t24=t20;
f_7118(t24,(C_truep(t23)?t23:(C_word)C_eqp(t4,lf[244])));}}}}}}}}}}}}}}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7378,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7380,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t10,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7380(t12,t8,t2);}}}}

/* loop1405 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7380(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7380,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7409,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g14211422");
t5=((C_word*)((C_word*)t0)[2])[1];
f_6505(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7407 in loop1405 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7409(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7409,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop14051418");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7380(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop14051418");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7380(t6,((C_word*)t0)[3],t5);}}

/* k7376 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7378,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[200],lf[235],lf[245],t1));}

/* k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7118(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_7118,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_i_cadr(((C_word*)t0)[6]);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7138,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_i_cddr(((C_word*)t0)[6]);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7144,a[2]=((C_word*)t0)[4],a[3]=t5,a[4]=t11,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t13=((C_word*)t11)[1];
f_7144(t13,t8,t9);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[3],lf[234]);
if(C_truep(t2)){
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7195,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_i_cdr(((C_word*)t0)[6]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7201,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=t10,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_7201(t12,t7,t8);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7239,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[5],t3,t4);}}}

/* a7244 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7245(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7245,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7301,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7329,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=t2;
C_trace("##sys#get");
((C_proc4)C_retrieve_symbol_proc(lf[239]))(4,*((C_word*)lf[239]+1),t5,t6,lf[240]);}

/* k7327 in a7244 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_increase(((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_7301(t4,C_SCHEME_TRUE);}
else{
t2=((C_word*)t0)[2];
f_7301(t2,C_SCHEME_FALSE);}}

/* k7299 in a7244 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7301(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7301,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7305,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7308,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 531  real-name");
((C_proc3)C_retrieve_symbol_proc(lf[40]))(3,*((C_word*)lf[40]+1),t3,((C_word*)t0)[2]);}
else{
C_trace("support.scm: 533  ##sys#symbol->qualified-string");
((C_proc3)C_retrieve_symbol_proc(lf[238]))(3,*((C_word*)lf[238]+1),t2,((C_word*)t0)[2]);}}

/* k7306 in k7299 in a7244 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7308,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7315,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t1;
t4=((C_word*)t0)[4];
f_7305(2,t4,(C_word)C_a_i_list(&a,3,C_retrieve(lf[237]),((C_word*)t0)[3],t3));}
else{
C_trace("support.scm: 532  ##sys#symbol->qualified-string");
((C_proc3)C_retrieve_symbol_proc(lf[238]))(3,*((C_word*)lf[238]+1),t2,((C_word*)t0)[2]);}}

/* k7313 in k7306 in k7299 in a7244 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7315,2,t0,t1);}
t2=((C_word*)t0)[3];
f_7305(2,t2,(C_word)C_a_i_list(&a,3,C_retrieve(lf[237]),((C_word*)t0)[2],t1));}

/* k7303 in k7299 in a7244 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7305(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7305,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7262,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7264,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t9,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_7264(t11,t7,((C_word*)t0)[2]);}

/* loop1377 in k7303 in k7299 in a7244 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7264(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7264,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7293,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g13931394");
t5=((C_word*)((C_word*)t0)[2])[1];
f_6505(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7291 in loop1377 in k7303 in k7299 in a7244 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7293(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7293,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop13771390");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7264(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop13771390");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7264(t6,((C_word*)t0)[3],t5);}}

/* k7260 in k7303 in k7299 in a7244 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7262,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[200],lf[235],((C_word*)t0)[2],t1));}

/* a7238 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7239,2,t0,t1);}
C_trace("support.scm: 523  get-line-2");
((C_proc3)C_retrieve_symbol_proc(lf[145]))(3,*((C_word*)lf[145]+1),t1,((C_word*)t0)[2]);}

/* loop1328 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7201(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7201,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7230,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g13441345");
t5=((C_word*)((C_word*)t0)[2])[1];
f_6505(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7228 in loop1328 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7230(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7230,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop13281341");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7201(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop13281341");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7201(t6,((C_word*)t0)[3],t5);}}

/* k7193 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7195,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[200],lf[235],lf[236],t1));}

/* loop1300 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7144(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7144,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7173,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g13161317");
t5=((C_word*)((C_word*)t0)[2])[1];
f_6505(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7171 in loop1300 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7173(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7173,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop13001313");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7144(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop13001313");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7144(t6,((C_word*)t0)[3],t5);}}

/* k7136 in k7116 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7138,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[200],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k7095 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7097,2,t0,t1);}
t2=(C_word)C_i_cadr(t1);
t3=(C_word)C_a_i_list(&a,4,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7077,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7081,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 516  sixth");
((C_proc3)C_retrieve_symbol_proc(lf[231]))(3,*((C_word*)lf[231]+1),t5,((C_word*)t0)[2]);}

/* k7079 in k7095 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 516  walk");
t2=((C_word*)((C_word*)t0)[3])[1];
f_6505(t2,((C_word*)t0)[2],t1);}

/* k7075 in k7095 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7077,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[200],lf[230],((C_word*)t0)[2],t2));}

/* loop1246 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_7011(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7011,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7040,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g12621263");
t5=((C_word*)((C_word*)t0)[2])[1];
f_6505(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k7038 in loop1246 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7040(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7040,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop12461259");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7011(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop12461259");
t6=((C_word*)((C_word*)t0)[4])[1];
f_7011(t6,((C_word*)t0)[3],t5);}}

/* k7003 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_7005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7005,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[200],lf[228],((C_word*)t0)[2],t1));}

/* loop1208 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_6921(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6921,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6950,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g12241225");
t5=((C_word*)((C_word*)t0)[2])[1];
f_6505(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6948 in loop1208 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6950(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6950,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop12081221");
t6=((C_word*)((C_word*)t0)[4])[1];
f_6921(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop12081221");
t6=((C_word*)((C_word*)t0)[4])[1];
f_6921(t6,((C_word*)t0)[3],t5);}}

/* k6913 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6915,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[200],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k6821 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_6823(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6823,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6827,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_i_cddr(((C_word*)t0)[3]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6833,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t9,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6833(t11,t6,t7);}

/* loop1175 in k6821 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_6833(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6833,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6862,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g11911192");
t5=((C_word*)((C_word*)t0)[2])[1];
f_6505(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6860 in loop1175 in k6821 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6862(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6862,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop11751188");
t6=((C_word*)((C_word*)t0)[4])[1];
f_6833(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop11751188");
t6=((C_word*)((C_word*)t0)[4])[1];
f_6833(t6,((C_word*)t0)[3],t5);}}

/* k6825 in k6821 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6827,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[200],((C_word*)t0)[2],t3,t1));}

/* k6788 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6790,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
t4=t3;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[200],lf[117],((C_word*)t0)[2],t2));}

/* k6695 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6697(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6697,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6701,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6705,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_i_cadr(((C_word*)t0)[2]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6719,a[2]=t4,a[3]=t10,a[4]=t6,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_6719(t12,t7,t8);}

/* loop1133 in k6695 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_6719(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6719,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6746,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6757,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g11491150");
t6=t3;
f_6746(t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6755 in loop1133 in k6695 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6757(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6757,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop11331146");
t6=((C_word*)((C_word*)t0)[4])[1];
f_6719(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop11331146");
t6=((C_word*)((C_word*)t0)[4])[1];
f_6719(t6,((C_word*)t0)[3],t5);}}

/* g1149 in loop1133 in k6695 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_6746(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6746,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
C_trace("support.scm: 493  walk");
t4=((C_word*)((C_word*)t0)[2])[1];
f_6505(t4,t1,t3);}

/* k6703 in k6695 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6713,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 494  walk");
t3=((C_word*)((C_word*)t0)[3])[1];
f_6505(t3,t2,((C_word*)t0)[2]);}

/* k6711 in k6703 in k6695 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6713,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
C_trace("support.scm: 493  append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[54]+1)))(4,*((C_word*)lf[54]+1),((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k6699 in k6695 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6701,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[200],lf[92],t3,t1));}

/* k6636 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_6638(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6638,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6641,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 482  compiler-warning");
((C_proc5)C_retrieve_proc(*((C_word*)lf[19]+1)))(5,*((C_word*)lf[19]+1),t2,lf[218],lf[219],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
t4=t2;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[200],lf[82],t3,C_SCHEME_END_OF_LIST));}}

/* k6639 in k6636 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6648,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 485  truncate");
((C_proc3)C_retrieve_proc(*((C_word*)lf[217]+1)))(3,*((C_word*)lf[217]+1),t2,((C_word*)t0)[2]);}

/* k6646 in k6639 in k6636 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6648,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[2];
t4=(C_word)C_a_i_list(&a,1,t2);
t5=t3;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[200],lf[82],t4,C_SCHEME_END_OF_LIST));}

/* loop1097 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_6586(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6586,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6615,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g11131114");
t5=((C_word*)((C_word*)t0)[2])[1];
f_6505(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6613 in loop1097 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6615(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6615,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop10971110");
t6=((C_word*)((C_word*)t0)[4])[1];
f_6586(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop10971110");
t6=((C_word*)((C_word*)t0)[4])[1];
f_6586(t6,((C_word*)t0)[3],t5);}}

/* k6578 in walk in ##compiler#build-node-graph in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6580,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[200],((C_word*)t0)[2],C_SCHEME_END_OF_LIST,t1));}

/* ##compiler#qnode in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6487(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6487,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,1,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[200],lf[82],t3,C_SCHEME_END_OF_LIST));}

/* ##compiler#varnode in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6472(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6472,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,1,t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[200],lf[210],t3,C_SCHEME_END_OF_LIST));}

/* make-node in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6466(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6466,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[200],t2,t3,t4));}

/* node-subexpressions in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6457(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6457,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[200]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(3)));}

/* node-subexpressions-set! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6448(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6448,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[200]);
C_trace("##sys#block-set!");
t5=*((C_word*)lf[203]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(3),t3);}

/* node-parameters in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6439(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6439,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[200]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(2)));}

/* node-parameters-set! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6430(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6430,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[200]);
C_trace("##sys#block-set!");
t5=*((C_word*)lf[203]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(2),t3);}

/* node-class in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6421(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6421,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[200]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_block_ref(t2,C_fix(1)));}

/* node-class-set! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6412,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure(t2,lf[200]);
C_trace("##sys#block-set!");
t5=*((C_word*)lf[203]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,C_fix(1),t3);}

/* node? in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6406(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6406,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[200]));}

/* f_6400 in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6400,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[200],t2,t3,t4));}

/* ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5895(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5895,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5899,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=t3;
f_5899(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6398,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 401  append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[54]+1)))(5,*((C_word*)lf[54]+1),t4,C_retrieve(lf[197]),C_retrieve(lf[198]),C_retrieve(lf[127]));}}

/* k6396 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_5899(t3,t2);}

/* k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_5899(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5899,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5904,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 404  ##sys#hash-table-for-each");
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5904(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_5904,4,t0,t1,t2,t3);}
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
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5914,a[2]=t3,a[3]=t9,a[4]=t7,a[5]=t5,a[6]=t13,a[7]=t11,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
C_trace("support.scm: 412  write");
((C_proc3)C_retrieve_proc(*((C_word*)lf[15]+1)))(3,*((C_word*)lf[15]+1),t14,t2);}}

/* k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5914,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5917,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6077,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t4,tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_6077(t6,t2,((C_word*)t0)[2]);}

/* loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_6077(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6077,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6087,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=t2,tmp=(C_word)a,a+=10,tmp);
C_trace("support.scm: 416  caar");
((C_proc3)C_retrieve_proc(*((C_word*)lf[160]+1)))(3,*((C_word*)lf[160]+1),t3,t2);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6087(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6087,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6090,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_eqp(t1,lf[158]);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6103,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
if(C_truep(t3)){
t5=t4;
f_6103(t5,t3);}
else{
t5=(C_word)C_eqp(t1,lf[177]);
if(C_truep(t5)){
t6=t4;
f_6103(t6,t5);}
else{
t6=(C_word)C_eqp(t1,lf[178]);
if(C_truep(t6)){
t7=t4;
f_6103(t7,t6);}
else{
t7=(C_word)C_eqp(t1,lf[179]);
if(C_truep(t7)){
t8=t4;
f_6103(t8,t7);}
else{
t8=(C_word)C_eqp(t1,lf[180]);
if(C_truep(t8)){
t9=t4;
f_6103(t9,t8);}
else{
t9=(C_word)C_eqp(t1,lf[181]);
if(C_truep(t9)){
t10=t4;
f_6103(t10,t9);}
else{
t10=(C_word)C_eqp(t1,lf[182]);
if(C_truep(t10)){
t11=t4;
f_6103(t11,t10);}
else{
t11=(C_word)C_eqp(t1,lf[183]);
if(C_truep(t11)){
t12=t4;
f_6103(t12,t11);}
else{
t12=(C_word)C_eqp(t1,lf[184]);
if(C_truep(t12)){
t13=t4;
f_6103(t13,t12);}
else{
t13=(C_word)C_eqp(t1,lf[185]);
if(C_truep(t13)){
t14=t4;
f_6103(t14,t13);}
else{
t14=(C_word)C_eqp(t1,lf[186]);
if(C_truep(t14)){
t15=t4;
f_6103(t15,t14);}
else{
t15=(C_word)C_eqp(t1,lf[187]);
if(C_truep(t15)){
t16=t4;
f_6103(t16,t15);}
else{
t16=(C_word)C_eqp(t1,lf[188]);
if(C_truep(t16)){
t17=t4;
f_6103(t17,t16);}
else{
t17=(C_word)C_eqp(t1,lf[189]);
if(C_truep(t17)){
t18=t4;
f_6103(t18,t17);}
else{
t18=(C_word)C_eqp(t1,lf[190]);
if(C_truep(t18)){
t19=t4;
f_6103(t19,t18);}
else{
t19=(C_word)C_eqp(t1,lf[191]);
if(C_truep(t19)){
t20=t4;
f_6103(t20,t19);}
else{
t20=(C_word)C_eqp(t1,lf[192]);
if(C_truep(t20)){
t21=t4;
f_6103(t21,t20);}
else{
t21=(C_word)C_eqp(t1,lf[193]);
if(C_truep(t21)){
t22=t4;
f_6103(t22,t21);}
else{
t22=(C_word)C_eqp(t1,lf[194]);
if(C_truep(t22)){
t23=t4;
f_6103(t23,t22);}
else{
t23=(C_word)C_eqp(t1,lf[195]);
t24=t4;
f_6103(t24,(C_truep(t23)?t23:(C_word)C_eqp(t1,lf[196])));}}}}}}}}}}}}}}}}}}}}

/* k6101 in k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_6103(C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6103,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6106,a[2]=((C_word*)t0)[10],a[3]=t2,a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t4=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(9),t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[9],lf[157]);
if(C_truep(t2)){
t3=C_mutate(((C_word *)((C_word*)t0)[8])+1,lf[157]);
t4=(C_word)C_i_cdr(((C_word*)t0)[10]);
C_trace("support.scm: 437  loop");
t5=((C_word*)((C_word*)t0)[7])[1];
f_6077(t5,((C_word*)t0)[6],t4);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[9],lf[161]);
if(C_truep(t3)){
t4=(C_word)C_eqp(((C_word*)((C_word*)t0)[8])[1],lf[157]);
if(C_truep(t4)){
t5=(C_word)C_i_cdr(((C_word*)t0)[10]);
C_trace("support.scm: 437  loop");
t6=((C_word*)((C_word*)t0)[7])[1];
f_6077(t6,((C_word*)t0)[6],t5);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6144,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
C_trace("support.scm: 424  cdar");
((C_proc3)C_retrieve_proc(*((C_word*)lf[162]+1)))(3,*((C_word*)lf[162]+1),t5,((C_word*)t0)[10]);}}
else{
t4=(C_word)C_eqp(((C_word*)t0)[9],lf[163]);
if(C_truep(t4)){
t5=(C_word)C_eqp(((C_word*)((C_word*)t0)[8])[1],lf[157]);
if(C_truep(t5)){
t6=(C_word)C_i_cdr(((C_word*)t0)[10]);
C_trace("support.scm: 437  loop");
t7=((C_word*)((C_word*)t0)[7])[1];
f_6077(t7,((C_word*)t0)[6],t6);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6160,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("support.scm: 426  cdar");
((C_proc3)C_retrieve_proc(*((C_word*)lf[162]+1)))(3,*((C_word*)lf[162]+1),t6,((C_word*)t0)[10]);}}
else{
t5=(C_word)C_eqp(((C_word*)t0)[9],lf[164]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6170,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("support.scm: 428  cdar");
((C_proc3)C_retrieve_proc(*((C_word*)lf[162]+1)))(3,*((C_word*)lf[162]+1),t6,((C_word*)t0)[10]);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[9],lf[165]);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t6)){
t8=t7;
f_6179(t8,t6);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[9],lf[169]);
if(C_truep(t8)){
t9=t7;
f_6179(t9,t8);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[9],lf[170]);
if(C_truep(t9)){
t10=t7;
f_6179(t10,t9);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[9],lf[147]);
if(C_truep(t10)){
t11=t7;
f_6179(t11,t10);}
else{
t11=(C_word)C_eqp(((C_word*)t0)[9],lf[171]);
if(C_truep(t11)){
t12=t7;
f_6179(t12,t11);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[9],lf[172]);
if(C_truep(t12)){
t13=t7;
f_6179(t13,t12);}
else{
t13=(C_word)C_eqp(((C_word*)t0)[9],lf[173]);
if(C_truep(t13)){
t14=t7;
f_6179(t14,t13);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[9],lf[174]);
if(C_truep(t14)){
t15=t7;
f_6179(t15,t14);}
else{
t15=(C_word)C_eqp(((C_word*)t0)[9],lf[175]);
t16=t7;
f_6179(t16,(C_truep(t15)?t15:(C_word)C_eqp(((C_word*)t0)[9],lf[176])));}}}}}}}}}}}}}}

/* k6177 in k6101 in k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_6179(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6179,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6182,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t4=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(9),t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[6],lf[166]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6209,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("support.scm: 433  cdar");
((C_proc3)C_retrieve_proc(*((C_word*)lf[162]+1)))(3,*((C_word*)lf[162]+1),t3,((C_word*)t0)[7]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[6],lf[167]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6219,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("support.scm: 435  cdar");
((C_proc3)C_retrieve_proc(*((C_word*)lf[162]+1)))(3,*((C_word*)lf[162]+1),t4,((C_word*)t0)[7]);}
else{
t4=(C_word)C_i_car(((C_word*)t0)[7]);
C_trace("support.scm: 436  bomb");
((C_proc4)C_retrieve_proc(*((C_word*)lf[5]+1)))(4,*((C_word*)lf[5]+1),((C_word*)t0)[8],lf[168],t4);}}}}

/* k6217 in k6177 in k6101 in k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("support.scm: 437  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_6077(t4,((C_word*)t0)[2],t3);}

/* k6207 in k6177 in k6101 in k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("support.scm: 437  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_6077(t4,((C_word*)t0)[2],t3);}

/* k6180 in k6177 in k6101 in k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6182,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6199,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 431  caar");
((C_proc3)C_retrieve_proc(*((C_word*)lf[160]+1)))(3,*((C_word*)lf[160]+1),t3,((C_word*)t0)[2]);}

/* k6197 in k6180 in k6177 in k6101 in k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6183 in k6180 in k6177 in k6101 in k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(61),((C_word*)t0)[3]);}

/* k6186 in k6183 in k6180 in k6177 in k6101 in k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6188,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6195,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 431  cdar");
((C_proc3)C_retrieve_proc(*((C_word*)lf[162]+1)))(3,*((C_word*)lf[162]+1),t2,((C_word*)t0)[2]);}

/* k6193 in k6186 in k6183 in k6180 in k6177 in k6101 in k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6168 in k6101 in k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("support.scm: 437  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_6077(t4,((C_word*)t0)[2],t3);}

/* k6158 in k6101 in k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("support.scm: 437  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_6077(t4,((C_word*)t0)[2],t3);}

/* k6142 in k6101 in k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("support.scm: 437  loop");
t4=((C_word*)((C_word*)t0)[3])[1];
f_6077(t4,((C_word*)t0)[2],t3);}

/* k6104 in k6101 in k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6106,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6121,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 420  caar");
((C_proc3)C_retrieve_proc(*((C_word*)lf[160]+1)))(3,*((C_word*)lf[160]+1),t2,((C_word*)t0)[2]);}

/* k6119 in k6104 in k6101 in k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_assq(t1,lf[159]);
t3=(C_word)C_i_cdr(t2);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),((C_word*)t0)[3],t3,((C_word*)t0)[2]);}

/* k6088 in k6085 in loop in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("support.scm: 437  loop");
t3=((C_word*)((C_word*)t0)[3])[1];
f_6077(t3,((C_word*)t0)[2],t2);}

/* k5915 in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5917,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5920,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5958,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t4=(C_word)C_eqp(((C_word*)((C_word*)t0)[4])[1],lf[157]);
t5=t3;
f_5958(t5,(C_word)C_i_not(t4));}
else{
t4=t3;
f_5958(t4,C_SCHEME_FALSE);}}

/* k5956 in k5915 in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_5958(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5958,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5961,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[154],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5992,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t3=(C_word)C_eqp(((C_word*)((C_word*)t0)[5])[1],lf[157]);
t4=t2;
f_5992(t4,(C_word)C_i_not(t3));}
else{
t3=t2;
f_5992(t3,C_SCHEME_FALSE);}}}

/* k5990 in k5956 in k5915 in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_5992(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5992,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5995,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[155],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6026,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t3=(C_word)C_eqp(((C_word*)((C_word*)t0)[2])[1],lf[157]);
t4=t2;
f_6026(t4,(C_word)C_i_not(t3));}
else{
t3=t2;
f_6026(t3,C_SCHEME_FALSE);}}}

/* k6024 in k5990 in k5956 in k5915 in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_6026(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6026,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[11]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6029,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t3,lf[156],t2);}
else{
t2=((C_word*)t0)[2];
f_5920(2,t2,C_SCHEME_UNDEFINED);}}

/* k6027 in k6024 in k5990 in k5956 in k5915 in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_6029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6029,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[4])[1];
t3=(C_word)C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
t5=(C_word)C_slot(t4,C_fix(2));
t6=(C_word)C_a_i_cons(&a,2,t3,t5);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t6,((C_word*)t0)[2]);}

/* k5993 in k5990 in k5956 in k5915 in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5995,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[4])[1];
t3=(C_word)C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
t5=(C_word)C_slot(t4,C_fix(2));
t6=(C_word)C_a_i_cons(&a,2,t3,t5);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t6,((C_word*)t0)[2]);}

/* k5959 in k5956 in k5915 in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5961,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[4])[1];
t3=(C_word)C_slot(t2,C_fix(1));
t4=((C_word*)((C_word*)t0)[4])[1];
t5=(C_word)C_slot(t4,C_fix(2));
t6=(C_word)C_a_i_cons(&a,2,t3,t5);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t6,((C_word*)t0)[2]);}

/* k5918 in k5915 in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5920,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5923,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5948,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t4,lf[153],t3);}
else{
t3=t2;
f_5923(2,t3,C_SCHEME_UNDEFINED);}}

/* k5946 in k5918 in k5915 in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_length(((C_word*)((C_word*)t0)[4])[1]);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5921 in k5918 in k5915 in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5923,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5926,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
t3=*((C_word*)lf[11]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5935,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t4,lf[152],t3);}
else{
C_trace("support.scm: 446  newline");
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[3]);}}

/* k5933 in k5921 in k5918 in k5915 in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_length(((C_word*)((C_word*)t0)[4])[1]);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5924 in k5921 in k5918 in k5915 in k5912 in a5903 in k5897 in ##compiler#display-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 446  newline");
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),((C_word*)t0)[2]);}

/* ##compiler#display-line-number-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5832,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5838,tmp=(C_word)a,a+=2,tmp);
C_trace("support.scm: 382  ##sys#hash-table-for-each");
((C_proc4)C_retrieve_symbol_proc(lf[150]))(4,*((C_word*)lf[150]+1),t1,t2,C_retrieve(lf[144]));}

/* a5837 in ##compiler#display-line-number-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5838(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5838,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=*((C_word*)lf[11]+1);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5845,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),t5,t2,t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k5843 in a5837 in ##compiler#display-line-number-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5845,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[3]);}

/* k5846 in k5843 in a5837 in ##compiler#display-line-number-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5848(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5848,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5851,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5858,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5860,a[2]=t4,a[3]=t9,a[4]=t6,tmp=(C_word)a,a+=5,tmp));
t11=((C_word*)t9)[1];
f_5860(t11,t7,((C_word*)t0)[2]);}

/* loop742 in k5846 in k5843 in a5837 in ##compiler#display-line-number-database in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_5860(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5860,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[149]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5889,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g758759");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5887 in loop742 in k5846 in k5843 in a5837 in ##compiler#display-line-number-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5889(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5889,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop742755");
t6=((C_word*)((C_word*)t0)[4])[1];
f_5860(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop742755");
t6=((C_word*)((C_word*)t0)[4])[1];
f_5860(t6,((C_word*)t0)[3],t5);}}

/* k5856 in k5846 in k5843 in a5837 in ##compiler#display-line-number-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5849 in k5846 in k5843 in a5837 in ##compiler#display-line-number-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* ##compiler#find-lambda-container in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5808(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5808,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5814,a[2]=t4,a[3]=t6,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5814(t8,t1,t2);}

/* loop in ##compiler#find-lambda-container in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_5814(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5814,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,((C_word*)t0)[4]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5824,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 378  get");
((C_proc5)C_retrieve_symbol_proc(lf[134]))(5,*((C_word*)lf[134]+1),t4,((C_word*)t0)[2],t2,lf[147]);}}

/* k5822 in loop in ##compiler#find-lambda-container in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("support.scm: 379  loop");
t2=((C_word*)((C_word*)t0)[3])[1];
f_5814(t2,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#get-line-2 in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5767(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5767,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5774,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 370  ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t4,C_retrieve(lf[144]),t3);}

/* k5772 in ##compiler#get-line-2 in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5774,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5777,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=(C_word)C_i_cdr(t1);
t4=t2;
f_5777(t4,(C_word)C_i_assq(((C_word*)t0)[2],t3));}
else{
t3=t2;
f_5777(t3,C_SCHEME_FALSE);}}

/* k5775 in k5772 in ##compiler#get-line-2 in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_5777(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5777,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5781,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("g714715");
t3=t2;
f_5781(t3,((C_word*)t0)[3],t1);}
else{
C_trace("support.scm: 373  values");
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}}

/* g714 in k5775 in k5772 in ##compiler#get-line-2 in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_5781(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5781,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_car(((C_word*)t0)[2]);
t4=(C_word)C_i_cdr(t2);
C_trace("support.scm: 372  values");
C_values(4,0,t1,t3,t4);}

/* ##compiler#get-line in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5757(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5757,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
C_trace("support.scm: 366  get");
((C_proc5)C_retrieve_symbol_proc(lf[134]))(5,*((C_word*)lf[134]+1),t1,C_retrieve(lf[144]),t3,t2);}

/* ##compiler#get-list in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5748(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5748,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5752,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 359  get");
((C_proc5)C_retrieve_symbol_proc(lf[134]))(5,*((C_word*)lf[134]+1),t5,t2,t3,t4);}

/* k5750 in ##compiler#get-list in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5752(C_word c,C_word t0,C_word t1){
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

/* ##compiler#count! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5691(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr5r,(void*)f_5691r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_5691r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_5691r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5695,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
C_trace("support.scm: 350  ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t6,t2,t3);}

/* k5693 in ##compiler#count! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5695(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5695,2,t0,t1);}
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
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5725,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_slot(t1,C_fix(1));
C_trace("support.scm: 355  alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[121]))(5,*((C_word*)lf[121]+1),t5,((C_word*)t0)[5],t3,t6);}}
else{
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
t5=(C_word)C_a_i_list(&a,1,t4);
C_trace("support.scm: 356  ##sys#hash-table-set!");
((C_proc5)C_retrieve_symbol_proc(lf[139]))(5,*((C_word*)lf[139]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t5);}}

/* k5723 in k5693 in ##compiler#count! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t1));}

/* ##compiler#collect! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5639(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5639,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5643,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t5,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
C_trace("support.scm: 342  ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t6,t2,t3);}

/* k5641 in ##compiler#collect! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5643(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5643,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_assq(((C_word*)t0)[6],t1);
if(C_truep(t2)){
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t3);
t5=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_setslot(t2,C_fix(1),t4));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5670,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
t5=(C_word)C_slot(t1,C_fix(1));
C_trace("support.scm: 346  alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[121]))(5,*((C_word*)lf[121]+1),t3,((C_word*)t0)[6],t4,t5);}}
else{
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,1,t2);
C_trace("support.scm: 347  ##sys#hash-table-set!");
((C_proc5)C_retrieve_symbol_proc(lf[139]))(5,*((C_word*)lf[139]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t3);}}

/* k5668 in k5641 in ##compiler#collect! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t1));}

/* ##compiler#put! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5593(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5593,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5597,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
C_trace("support.scm: 334  ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t6,t2,t3);}

/* k5595 in ##compiler#put! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5597(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5597,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_assq(((C_word*)t0)[6],t1);
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_setslot(t2,C_fix(1),((C_word*)t0)[4]));}
else{
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5619,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(t1,C_fix(1));
C_trace("support.scm: 338  alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[121]))(5,*((C_word*)lf[121]+1),t3,((C_word*)t0)[6],((C_word*)t0)[4],t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}}
else{
if(C_truep(((C_word*)t0)[4])){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,t2);
C_trace("support.scm: 339  ##sys#hash-table-set!");
((C_proc5)C_retrieve_symbol_proc(lf[139]))(5,*((C_word*)lf[139]+1),((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2],t3);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}}

/* k5617 in k5595 in ##compiler#put! in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t1));}

/* ##compiler#get-all in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_5575r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5575r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5575r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5579,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 328  ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t5,t2,t3);}

/* k5577 in ##compiler#get-all in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5579,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5587,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 330  filter-map");
((C_proc4)C_retrieve_symbol_proc(lf[137]))(4,*((C_word*)lf[137]+1),((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* a5586 in k5577 in ##compiler#get-all in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5587(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5587,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_assq(t2,((C_word*)t0)[2]));}

/* ##compiler#get in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5557(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5557,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5561,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 322  ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[135]))(4,*((C_word*)lf[135]+1),t5,t2,t3);}

/* k5559 in ##compiler#get in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5561(C_word c,C_word t0,C_word t1){
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

/* ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5304(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5304,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5308,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5312,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5466,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_5466(t7,t3,C_retrieve(lf[133]));}
else{
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* loop499 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_5466(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5466,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5544,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5505,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_a_i_list(&a,1,lf[132]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5480,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t6))){
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t5,t4,lf[125],C_SCHEME_TRUE);}
else{
t8=(C_word)C_i_cdr(t6);
if(C_truep((C_word)C_i_nullp(t8))){
t9=(C_word)C_i_car(t6);
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t5,t4,lf[125],t9);}
else{
C_trace("##sys#error");
t9=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,lf[0],t6);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5478 in loop499 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[125],t1);}

/* k5503 in loop499 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5505,2,t0,t1);}
if(C_truep((C_word)C_i_memq(((C_word*)t0)[6],C_retrieve(lf[128])))){
t2=(C_word)C_a_i_list(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5516,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[5],((C_word*)t0)[6],lf[129],C_SCHEME_TRUE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[5],((C_word*)t0)[6],lf[129],t5);}
else{
C_trace("##sys#error");
t5=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}
else{
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5466(t3,((C_word*)t0)[2],t2);}}

/* k5514 in k5503 in loop499 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[129],t1);}

/* k5542 in loop499 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5466(t3,((C_word*)t0)[2],t2);}

/* k5310 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5315,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5375,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_5375(t6,t2,C_retrieve(lf[131]));}

/* loop549 in k5310 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_5375(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5375,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5453,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5414,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t3,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_a_i_list(&a,1,lf[130]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5389,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t6))){
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t5,t4,lf[125],C_SCHEME_TRUE);}
else{
t8=(C_word)C_i_cdr(t6);
if(C_truep((C_word)C_i_nullp(t8))){
t9=(C_word)C_i_car(t6);
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t5,t4,lf[125],t9);}
else{
C_trace("##sys#error");
t9=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,lf[0],t6);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5387 in loop549 in k5310 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[125],t1);}

/* k5412 in loop549 in k5310 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5414,2,t0,t1);}
if(C_truep((C_word)C_i_memq(((C_word*)t0)[6],C_retrieve(lf[128])))){
t2=(C_word)C_a_i_list(&a,1,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5425,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[5],((C_word*)t0)[6],lf[129],C_SCHEME_TRUE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[5],((C_word*)t0)[6],lf[129],t5);}
else{
C_trace("##sys#error");
t5=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}
else{
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5375(t3,((C_word*)t0)[2],t2);}}

/* k5423 in k5412 in loop549 in k5310 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[129],t1);}

/* k5451 in loop549 in k5310 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5375(t3,((C_word*)t0)[2],t2);}

/* k5313 in k5310 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5315,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5320,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_5320(t5,((C_word*)t0)[2],C_retrieve(lf[127]));}

/* loop598 in k5313 in k5310 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_fcall f_5320(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5320,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5362,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_a_i_list(&a,1,lf[123]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5334,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t3,t4,lf[125],C_SCHEME_TRUE);}
else{
t7=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t7))){
t8=(C_word)C_i_car(t5);
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),t3,t4,lf[125],t8);}
else{
C_trace("##sys#error");
t8=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,lf[0],t5);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5332 in loop598 in k5313 in k5310 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[124]))(5,*((C_word*)lf[124]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[125],t1);}

/* k5360 in loop598 in k5313 in k5310 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5320(t3,((C_word*)t0)[2],t2);}

/* k5306 in ##compiler#initialize-analysis-database in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##compiler#expand-profile-lambda in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5163(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5163,5,t0,t1,t2,t3,t4);}
t5=C_retrieve(lf[113]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5167,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=t4,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
C_trace("support.scm: 282  gensym");
((C_proc2)C_retrieve_symbol_proc(lf[93]))(2,*((C_word*)lf[93]+1),t6);}

/* k5165 in ##compiler#expand-profile-lambda in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5167,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5171,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("support.scm: 283  alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[121]))(5,*((C_word*)lf[121]+1),t2,((C_word*)t0)[6],((C_word*)t0)[2],C_retrieve(lf[114]));}

/* k5169 in k5165 in ##compiler#expand-profile-lambda in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5171(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5171,2,t0,t1);}
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

/* ##compiler#llist-length in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5160(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5160,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_u_i_length(t2));}

/* ##compiler#process-lambda-documentation in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5157(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5157,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5050(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5050,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5054,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5059,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("call-with-current-continuation");
((C_proc3)C_retrieve_proc(*((C_word*)lf[107]+1)))(3,*((C_word*)lf[107]+1),t3,t4);}

/* a5058 in ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5059(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5059,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5065,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5090,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("with-exception-handler");
((C_proc4)C_retrieve_symbol_proc(lf[106]))(4,*((C_word*)lf[106]+1),t1,t3,t4);}

/* a5089 in a5058 in ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5090,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5096,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5144,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,t1,t2,t3);}

/* a5143 in a5089 in a5058 in ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5144(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_5144r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5144r(t0,t1,t2);}}

static void C_ccall f_5144r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5150,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("k456461");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a5149 in a5143 in a5089 in a5058 in ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5150,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a5095 in a5089 in a5058 in ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5096,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5100,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5128,tmp=(C_word)a,a+=2,tmp);
C_trace("support.scm: 264  with-input-from-string");
((C_proc4)C_retrieve_symbol_proc(lf[105]))(4,*((C_word*)lf[105]+1),t2,((C_word*)t0)[2],t3);}

/* a5127 in a5095 in a5089 in a5058 in ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5128,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5134,tmp=(C_word)a,a+=2,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5142,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 264  read");
((C_proc2)C_retrieve_proc(*((C_word*)lf[101]+1)))(2,*((C_word*)lf[101]+1),t3);}

/* k5140 in a5127 in a5095 in a5089 in a5058 in ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 264  unfold");
((C_proc6)C_retrieve_symbol_proc(lf[102]))(6,*((C_word*)lf[102]+1),((C_word*)t0)[3],*((C_word*)lf[103]+1),*((C_word*)lf[104]+1),((C_word*)t0)[2],t1);}

/* a5133 in a5127 in a5095 in a5089 in a5058 in ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5134(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5134,3,t0,t1,t2);}
C_trace("support.scm: 264  read");
((C_proc2)C_retrieve_proc(*((C_word*)lf[101]+1)))(2,*((C_word*)lf[101]+1),t1);}

/* k5098 in a5095 in a5089 in a5058 in ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5100,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[98]);}
else{
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_car(t1));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5122,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#append");
t4=*((C_word*)lf[100]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t1,C_SCHEME_END_OF_LIST);}}}

/* k5120 in k5098 in a5095 in a5089 in a5058 in ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5122,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[99],t1));}

/* a5064 in a5058 in ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5065(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5065,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5071,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("k456461");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a5070 in a5064 in a5058 in ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5071,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5079,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5082,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 261  exn?");
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[3]);}

/* k5080 in a5070 in a5064 in a5058 in ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("support.scm: 262  exn-msg");
t2=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
C_trace("support.scm: 263  ->string");
((C_proc3)C_retrieve_symbol_proc(lf[62]))(3,*((C_word*)lf[62]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k5077 in a5070 in a5064 in a5058 in ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 259  quit");
((C_proc5)C_retrieve_proc(*((C_word*)lf[24]+1)))(5,*((C_word*)lf[24]+1),((C_word*)t0)[3],lf[97],((C_word*)t0)[2],t1);}

/* k5052 in ##compiler#string->expr in k5047 in k5044 in k3982 in k3979 */
static void C_ccall f_5054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("g459460");
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* ##compiler#canonicalize-begin-body in k3982 in k3979 */
static void C_ccall f_4949(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4949,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4955,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_4955(t6,t1,t2);}

/* loop in ##compiler#canonicalize-begin-body in k3982 in k3979 */
static void C_fcall f_4955(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4955,NULL,3,t0,t1,t2);}
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
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4983,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=t6;
f_4983(t7,t5);}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5032,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 248  constant?");
((C_proc3)C_retrieve_proc(*((C_word*)lf[81]+1)))(3,*((C_word*)lf[81]+1),t7,t4);}}}}

/* k5030 in loop in ##compiler#canonicalize-begin-body in k3982 in k3979 */
static void C_ccall f_5032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
f_4983(t3,t2);}
else{
t2=((C_word*)t0)[3];
f_4983(t2,(C_word)C_i_equalp(((C_word*)t0)[2],lf[95]));}}

/* k4981 in loop in ##compiler#canonicalize-begin-body in k3982 in k3979 */
static void C_fcall f_4983(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4983,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("support.scm: 250  loop");
t3=((C_word*)((C_word*)t0)[3])[1];
f_4955(t3,((C_word*)t0)[2],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5021,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 251  gensym");
((C_proc3)C_retrieve_symbol_proc(lf[93]))(3,*((C_word*)lf[93]+1),t2,lf[94]);}}

/* k5019 in k4981 in loop in ##compiler#canonicalize-begin-body in k3982 in k3979 */
static void C_ccall f_5021(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5021,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,t1,t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5009,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_i_cdr(((C_word*)t0)[4]);
C_trace("support.scm: 252  loop");
t8=((C_word*)((C_word*)t0)[2])[1];
f_4955(t8,t6,t7);}

/* k5007 in k5019 in k4981 in loop in ##compiler#canonicalize-begin-body in k3982 in k3979 */
static void C_ccall f_5009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5009,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[92],t3));}

/* ##compiler#basic-literal? in k3982 in k3979 */
static void C_ccall f_4889(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4889,3,t0,t1,t2);}
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
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4905,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 233  constant?");
((C_proc3)C_retrieve_proc(*((C_word*)lf[81]+1)))(3,*((C_word*)lf[81]+1),t5,t2);}}}

/* k4903 in ##compiler#basic-literal? in k3982 in k3979 */
static void C_ccall f_4905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4905,2,t0,t1);}
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_vectorp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4947,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 234  vector->list");
((C_proc3)C_retrieve_proc(*((C_word*)lf[88]+1)))(3,*((C_word*)lf[88]+1),t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_4911(2,t3,C_SCHEME_FALSE);}}}

/* k4945 in k4903 in ##compiler#basic-literal? in k3982 in k3979 */
static void C_ccall f_4947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 234  every");
((C_proc4)C_retrieve_symbol_proc(lf[87]))(4,*((C_word*)lf[87]+1),((C_word*)t0)[2],*((C_word*)lf[86]+1),t1);}

/* k4909 in k4903 in ##compiler#basic-literal? in k3982 in k3979 */
static void C_ccall f_4911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4911,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4926,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
C_trace("support.scm: 236  basic-literal?");
((C_proc3)C_retrieve_proc(*((C_word*)lf[86]+1)))(3,*((C_word*)lf[86]+1),t2,t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* k4924 in k4909 in k4903 in ##compiler#basic-literal? in k3982 in k3979 */
static void C_ccall f_4926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("support.scm: 237  basic-literal?");
((C_proc3)C_retrieve_proc(*((C_word*)lf[86]+1)))(3,*((C_word*)lf[86]+1),((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* ##compiler#immediate? in k3982 in k3979 */
static void C_ccall f_4843(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4843,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4847,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4887,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 223  big-fixnum?");
((C_proc3)C_retrieve_symbol_proc(lf[85]))(3,*((C_word*)lf[85]+1),t4,t2);}
else{
t4=t3;
f_4847(t4,C_SCHEME_FALSE);}}

/* k4885 in ##compiler#immediate? in k3982 in k3979 */
static void C_ccall f_4887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4847(t2,(C_word)C_i_not(t1));}

/* k4845 in ##compiler#immediate? in k3982 in k3979 */
static void C_fcall f_4847(C_word t0,C_word t1){
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

/* ##compiler#collapsable-literal? in k3982 in k3979 */
static void C_ccall f_4813(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4813,3,t0,t1,t2);}
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

/* ##compiler#constant? in k3982 in k3979 */
static void C_ccall f_4767(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_4767,3,t0,t1,t2);}
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

/* ##compiler#sort-symbols in k3982 in k3979 */
static void C_ccall f_4747(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4747,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4753,tmp=(C_word)a,a+=2,tmp);
C_trace("support.scm: 202  sort");
((C_proc4)C_retrieve_symbol_proc(lf[80]))(4,*((C_word*)lf[80]+1),t1,t2,t3);}

/* a4752 in ##compiler#sort-symbols in k3982 in k3979 */
static void C_ccall f_4753(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4753,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4761,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 202  symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[43]+1)))(3,*((C_word*)lf[43]+1),t4,t2);}

/* k4759 in a4752 in ##compiler#sort-symbols in k3982 in k3979 */
static void C_ccall f_4761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4761,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4765,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 202  symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[43]+1)))(3,*((C_word*)lf[43]+1),t2,((C_word*)t0)[2]);}

/* k4763 in k4759 in a4752 in ##compiler#sort-symbols in k3982 in k3979 */
static void C_ccall f_4765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 202  string<?");
((C_proc4)C_retrieve_proc(*((C_word*)lf[79]+1)))(4,*((C_word*)lf[79]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##compiler#follow-without-loop in k3982 in k3979 */
static void C_ccall f_4716(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4716,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4722,a[2]=t3,a[3]=t6,a[4]=t4,tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4722(t8,t1,t2,C_SCHEME_END_OF_LIST);}

/* loop in ##compiler#follow-without-loop in k3982 in k3979 */
static void C_fcall f_4722(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4722,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_member(t2,t3))){
C_trace("support.scm: 198  abort");
t4=((C_word*)t0)[4];
((C_proc2)C_retrieve_proc(t4))(2,t4,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4737,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 199  proc");
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t4);}}

/* a4736 in loop in ##compiler#follow-without-loop in k3982 in k3979 */
static void C_ccall f_4737(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4737,3,t0,t1,t2);}
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
C_trace("support.scm: 199  loop");
t4=((C_word*)((C_word*)t0)[2])[1];
f_4722(t4,t1,t2,t3);}

/* ##compiler#fold-inner in k3982 in k3979 */
static void C_ccall f_4653(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4653,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4667,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 188  reverse");
((C_proc3)C_retrieve_proc(*((C_word*)lf[76]+1)))(3,*((C_word*)lf[76]+1),t5,t3);}}

/* k4665 in ##compiler#fold-inner in k3982 in k3979 */
static void C_ccall f_4667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4667,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4669,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4669(t5,((C_word*)t0)[2],t1);}

/* fold in k4665 in ##compiler#fold-inner in k3982 in k3979 */
static void C_fcall f_4669(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4669,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_i_cadr(t2);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_a_i_list(&a,2,t4,t5);
C_apply(4,0,t1,((C_word*)t0)[3],t6);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4698,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cdr(t2);
C_trace("support.scm: 193  fold");
t10=t4;
t11=t5;
t1=t10;
t2=t11;
goto loop;}}

/* k4696 in fold in k4665 in ##compiler#fold-inner in k3982 in k3979 */
static void C_ccall f_4698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4698,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* ##compiler#close-checked-input-file in k3982 in k3979 */
static void C_ccall f_4641(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4641,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_string_equal_p(t3,lf[73]))){
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
C_trace("support.scm: 183  close-input-port");
((C_proc3)C_retrieve_proc(*((C_word*)lf[74]+1)))(3,*((C_word*)lf[74]+1),t1,t2);}}

/* ##compiler#check-and-open-input-file in k3982 in k3979 */
static void C_ccall f_4594(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_4594r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_4594r(t0,t1,t2,t3);}}

static void C_ccall f_4594r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
if(C_truep((C_word)C_i_string_equal_p(t2,lf[66]))){
C_trace("support.scm: 177  current-input-port");
((C_proc2)C_retrieve_proc(*((C_word*)lf[67]+1)))(2,*((C_word*)lf[67]+1),t1);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4610,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 178  file-exists?");
((C_proc3)C_retrieve_symbol_proc(lf[71]))(3,*((C_word*)lf[71]+1),t4,t2);}}

/* k4608 in ##compiler#check-and-open-input-file in k3982 in k3979 */
static void C_ccall f_4610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4610,2,t0,t1);}
if(C_truep(t1)){
C_trace("support.scm: 178  open-input-file");
((C_proc3)C_retrieve_proc(*((C_word*)lf[68]+1)))(3,*((C_word*)lf[68]+1),((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=(C_word)C_vemptyp(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_4622(t4,t2);}
else{
t4=(C_word)C_i_vector_ref(((C_word*)t0)[2],C_fix(0));
t5=t3;
f_4622(t5,(C_word)C_i_not(t4));}}}

/* k4620 in k4608 in ##compiler#check-and-open-input-file in k3982 in k3979 */
static void C_fcall f_4622(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
C_trace("support.scm: 179  quit");
((C_proc4)C_retrieve_proc(*((C_word*)lf[24]+1)))(4,*((C_word*)lf[24]+1),((C_word*)t0)[4],lf[69],((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_vector_ref(((C_word*)t0)[2],C_fix(0));
C_trace("support.scm: 180  quit");
((C_proc5)C_retrieve_proc(*((C_word*)lf[24]+1)))(5,*((C_word*)lf[24]+1),((C_word*)t0)[4],lf[70],((C_word*)t0)[3],t2);}}

/* ##compiler#words->bytes in k3982 in k3979 */
static void C_ccall f_4587(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4587,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub273(C_SCHEME_UNDEFINED,t3));}

/* ##compiler#words in k3982 in k3979 */
static void C_ccall f_4580(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4580,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub269(C_SCHEME_UNDEFINED,t3));}

/* ##compiler#valid-c-identifier? in k3982 in k3979 */
static void C_ccall f_4524(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4524,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4528,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4578,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 158  ->string");
((C_proc3)C_retrieve_symbol_proc(lf[62]))(3,*((C_word*)lf[62]+1),t4,t2);}

/* k4576 in ##compiler#valid-c-identifier? in k3982 in k3979 */
static void C_ccall f_4578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string->list");
t2=C_retrieve(lf[56]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4526 in ##compiler#valid-c-identifier? in k3982 in k3979 */
static void C_ccall f_4528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4528,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(C_word)C_i_car(t1);
t3=(C_word)C_u_i_char_alphabeticp(t2);
t4=(C_truep(t3)?t3:(C_word)C_eqp(C_make_character(95),t2));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4551,tmp=(C_word)a,a+=2,tmp);
t6=(C_word)C_i_cdr(t1);
C_trace("support.scm: 162  any");
((C_proc4)C_retrieve_symbol_proc(lf[61]))(4,*((C_word*)lf[61]+1),((C_word*)t0)[2],t5,t6);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a4550 in k4526 in ##compiler#valid-c-identifier? in k3982 in k3979 */
static void C_ccall f_4551(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4551,3,t0,t1,t2);}
t3=(C_word)C_u_i_char_alphabeticp(t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_u_i_char_numericp(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:(C_word)C_eqp(C_make_character(95),t2)));}}

/* ##compiler#c-ify-string in k3982 in k3979 */
static void C_ccall f_4430(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4430,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4442,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4446,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("string->list");
t5=C_retrieve(lf[56]);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4444 in ##compiler#c-ify-string in k3982 in k3979 */
static void C_ccall f_4446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4446,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4448,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4448(t5,((C_word*)t0)[2],t1);}

/* loop in k4444 in ##compiler#c-ify-string in k3982 in k3979 */
static void C_fcall f_4448(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4448,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[53]);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_fix((C_word)C_character_code(t3));
t5=(C_word)C_fixnum_lessp(t4,C_fix(32));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4470,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_4470(t7,t5);}
else{
t7=(C_word)C_fixnum_greater_or_equal_p(t4,C_fix(127));
t8=t6;
f_4470(t8,(C_truep(t7)?t7:(C_word)C_i_memq(t3,lf[59])));}}}

/* k4468 in loop in k4444 in ##compiler#c-ify-string in k3982 in k3979 */
static void C_fcall f_4470(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4470,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4477,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_lessp(((C_word*)t0)[3],C_fix(8)))){
t3=t2;
f_4477(t3,lf[57]);}
else{
t3=(C_word)C_fixnum_lessp(((C_word*)t0)[3],C_fix(64));
t4=t2;
f_4477(t4,(C_truep(t3)?lf[58]:C_SCHEME_END_OF_LIST));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
C_trace("support.scm: 155  loop");
t4=((C_word*)((C_word*)t0)[4])[1];
f_4448(t4,t2,t3);}}

/* k4507 in k4468 in loop in k4444 in ##compiler#c-ify-string in k3982 in k3979 */
static void C_ccall f_4509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4509,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k4475 in k4468 in loop in k4444 in ##compiler#c-ify-string in k3982 in k3979 */
static void C_fcall f_4477(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4477,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4481,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4493,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 153  number->string");
C_number_to_string(4,0,t3,((C_word*)t0)[2],C_fix(8));}

/* k4491 in k4475 in k4468 in loop in k4444 in ##compiler#c-ify-string in k3982 in k3979 */
static void C_ccall f_4493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("string->list");
t2=C_retrieve(lf[56]);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4479 in k4475 in k4468 in loop in k4444 in ##compiler#c-ify-string in k3982 in k3979 */
static void C_ccall f_4481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4481,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4485,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("support.scm: 154  loop");
t4=((C_word*)((C_word*)t0)[2])[1];
f_4448(t4,t2,t3);}

/* k4483 in k4479 in k4475 in k4468 in loop in k4444 in ##compiler#c-ify-string in k3982 in k3979 */
static void C_ccall f_4485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 149  append");
((C_proc6)C_retrieve_proc(*((C_word*)lf[54]+1)))(6,*((C_word*)lf[54]+1),((C_word*)t0)[4],lf[55],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4440 in ##compiler#c-ify-string in k3982 in k3979 */
static void C_ccall f_4442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4442,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_make_character(34),t1);
C_trace("list->string");
t3=C_retrieve(lf[52]);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* ##compiler#build-lambda-list in k3982 in k3979 */
static void C_ccall f_4386(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4386,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4392,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_4392(t8,t1,t2,t3);}

/* loop in ##compiler#build-lambda-list in k3982 in k3979 */
static void C_fcall f_4392(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4392,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
t5=(C_truep(t4)?t4:(C_word)C_i_nullp(t2));
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?t6:C_SCHEME_END_OF_LIST));}
else{
t6=(C_word)C_i_car(t2);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4416,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_i_cdr(t2);
t9=(C_word)C_fixnum_decrease(t3);
C_trace("support.scm: 135  loop");
t12=t7;
t13=t8;
t14=t9;
t1=t12;
t2=t13;
t3=t14;
goto loop;}}

/* k4414 in loop in ##compiler#build-lambda-list in k3982 in k3979 */
static void C_ccall f_4416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4416,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* ##compiler#symbolify in k3982 in k3979 */
static void C_ccall f_4355(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4355,3,t0,t1,t2);}
if(C_truep((C_word)C_i_symbolp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_i_stringp(t2))){
C_trace("support.scm: 129  string->symbol");
((C_proc3)C_retrieve_proc(*((C_word*)lf[47]+1)))(3,*((C_word*)lf[47]+1),t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4378,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[45]))(2,*((C_word*)lf[45]+1),t3);}}}

/* k4376 in ##compiler#symbolify in k3982 in k3979 */
static void C_ccall f_4378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4378,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4381,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2],t1);}

/* k4379 in k4376 in ##compiler#symbolify in k3982 in k3979 */
static void C_ccall f_4381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4384,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[44]))(3,*((C_word*)lf[44]+1),t2,((C_word*)t0)[2]);}

/* k4382 in k4379 in k4376 in ##compiler#symbolify in k3982 in k3979 */
static void C_ccall f_4384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 130  string->symbol");
((C_proc3)C_retrieve_proc(*((C_word*)lf[47]+1)))(3,*((C_word*)lf[47]+1),((C_word*)t0)[2],t1);}

/* ##compiler#stringify in k3982 in k3979 */
static void C_ccall f_4328(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4328,3,t0,t1,t2);}
if(C_truep((C_word)C_i_stringp(t2))){
t3=t2;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
C_trace("support.scm: 124  symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[43]+1)))(3,*((C_word*)lf[43]+1),t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4347,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("open-output-string");
((C_proc2)C_retrieve_symbol_proc(lf[45]))(2,*((C_word*)lf[45]+1),t3);}}}

/* k4345 in ##compiler#stringify in k3982 in k3979 */
static void C_ccall f_4347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4350,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t2,((C_word*)t0)[2],t1);}

/* k4348 in k4345 in ##compiler#stringify in k3982 in k3979 */
static void C_ccall f_4350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("get-output-string");
((C_proc3)C_retrieve_symbol_proc(lf[44]))(3,*((C_word*)lf[44]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##compiler#posq in k3982 in k3979 */
static void C_ccall f_4292(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4292,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4298,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_4298(t4,t3,C_fix(0)));}

/* loop in ##compiler#posq in k3982 in k3979 */
static C_word C_fcall f_4298(C_word t0,C_word t1,C_word t2){
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

/* ##compiler#check-signature in k3982 in k3979 */
static void C_ccall f_4224(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4224,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4227,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4248,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_4248(t9,t1,t3,t4);}

/* loop in ##compiler#check-signature in k3982 in k3979 */
static void C_fcall f_4248(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4248,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
C_trace("support.scm: 108  err");
t4=((C_word*)t0)[3];
f_4227(t4,t1);}}
else{
t4=(C_word)C_i_symbolp(t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep((C_word)C_i_nullp(t2))){
C_trace("support.scm: 110  err");
t5=((C_word*)t0)[3];
f_4227(t5,t1);}
else{
t5=(C_word)C_i_cdr(t2);
t6=(C_word)C_i_cdr(t3);
C_trace("support.scm: 111  loop");
t8=t1;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}}}

/* err in ##compiler#check-signature in k3982 in k3979 */
static void C_fcall f_4227(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4227,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4235,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 105  real-name");
((C_proc3)C_retrieve_symbol_proc(lf[40]))(3,*((C_word*)lf[40]+1),t2,((C_word*)t0)[2]);}

/* k4233 in err in ##compiler#check-signature in k3982 in k3979 */
static void C_ccall f_4235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4235,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4239,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
C_trace("support.scm: 106  map-llist");
((C_proc4)C_retrieve_proc(*((C_word*)lf[37]+1)))(4,*((C_word*)lf[37]+1),t2,C_retrieve(lf[40]),t3);}

/* k4237 in k4233 in err in ##compiler#check-signature in k3982 in k3979 */
static void C_ccall f_4239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 104  quit");
((C_proc5)C_retrieve_proc(*((C_word*)lf[24]+1)))(5,*((C_word*)lf[24]+1),((C_word*)t0)[3],lf[39],((C_word*)t0)[2],t1);}

/* map-llist in k3982 in k3979 */
static void C_ccall f_4181(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4181,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4187,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_4187(t7,t1,t3);}

/* loop in map-llist in k3982 in k3979 */
static void C_fcall f_4187(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4187,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
C_trace("support.scm: 99   proc");
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4210,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(t2);
C_trace("support.scm: 100  proc");
t5=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}}}

/* k4208 in loop in map-llist in k3982 in k3979 */
static void C_ccall f_4210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4210,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4214,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_trace("support.scm: 100  loop");
t4=((C_word*)((C_word*)t0)[2])[1];
f_4187(t4,t2,t3);}

/* k4212 in k4208 in loop in map-llist in k3982 in k3979 */
static void C_ccall f_4214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4214,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* ##compiler#emit-syntax-trace-info in k3982 in k3979 */
static void C_ccall f_4178(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4178,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_emit_syntax_trace_info(t2,t3,C_retrieve(lf[29])));}

/* ##sys#syntax-error-hook in k3982 in k3979 */
static void C_ccall f_4133(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_4133r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4133r(t0,t1,t2,t3);}}

static void C_ccall f_4133r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(9);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4137,a[2]=t4,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 78   current-error-port");
((C_proc2)C_retrieve_symbol_proc(lf[22]))(2,*((C_word*)lf[22]+1),t6);}

/* k4135 in ##sys#syntax-error-hook in k3982 in k3979 */
static void C_ccall f_4137(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4137,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)((C_word*)t0)[2])[1]))){
t3=((C_word*)((C_word*)t0)[2])[1];
t4=(C_word)C_i_car(((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t6);
t8=t2;
f_4140(t8,t3);}
else{
t3=t2;
f_4140(t3,C_SCHEME_FALSE);}}

/* k4138 in k4135 in ##sys#syntax-error-hook in k3982 in k3979 */
static void C_fcall f_4140(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4140,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4143,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
C_trace("support.scm: 85   fprintf");
((C_proc6)C_retrieve_symbol_proc(lf[20]))(6,*((C_word*)lf[20]+1),t2,((C_word*)t0)[4],lf[33],t1,((C_word*)((C_word*)t0)[2])[1]);}
else{
C_trace("support.scm: 86   fprintf");
((C_proc5)C_retrieve_symbol_proc(lf[20]))(5,*((C_word*)lf[20]+1),t2,((C_word*)t0)[4],lf[34],((C_word*)((C_word*)t0)[2])[1]);}}

/* k4141 in k4138 in k4135 in ##sys#syntax-error-hook in k3982 in k3979 */
static void C_ccall f_4143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4143,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4146,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4154,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("for-each");
t4=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* a4153 in k4141 in k4138 in k4135 in ##sys#syntax-error-hook in k3982 in k3979 */
static void C_ccall f_4154(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4154,3,t0,t1,t2);}
t3=C_retrieve(lf[20]);
C_trace("g108109");
t4=t3;
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,((C_word*)t0)[2],lf[31],t2);}

/* k4144 in k4141 in k4138 in k4135 in ##sys#syntax-error-hook in k3982 in k3979 */
static void C_ccall f_4146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4146,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4149,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 88   print-call-chain");
((C_proc6)C_retrieve_symbol_proc(lf[28]))(6,*((C_word*)lf[28]+1),t2,((C_word*)t0)[2],C_fix(0),C_retrieve(lf[29]),lf[30]);}

/* k4147 in k4144 in k4141 in k4138 in k4135 in ##sys#syntax-error-hook in k3982 in k3979 */
static void C_ccall f_4149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 89   exit");
((C_proc3)C_retrieve_symbol_proc(lf[25]))(3,*((C_word*)lf[25]+1),((C_word*)t0)[2],C_fix(70));}

/* quit in k3982 in k3979 */
static void C_ccall f_4114(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4114r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4114r(t0,t1,t2,t3);}}

static void C_ccall f_4114r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4118,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 71   current-error-port");
((C_proc2)C_retrieve_symbol_proc(lf[22]))(2,*((C_word*)lf[22]+1),t4);}

/* k4116 in quit in k3982 in k3979 */
static void C_ccall f_4118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4118,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4121,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4131,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 72   string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[7]+1)))(4,*((C_word*)lf[7]+1),t3,lf[26],((C_word*)t0)[2]);}

/* k4129 in k4116 in quit in k3982 in k3979 */
static void C_ccall f_4131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(6,0,((C_word*)t0)[4],C_retrieve(lf[20]),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4119 in k4116 in quit in k3982 in k3979 */
static void C_ccall f_4121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4121,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4124,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 73   newline");
((C_proc3)C_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),t2,((C_word*)t0)[2]);}

/* k4122 in k4119 in k4116 in quit in k3982 in k3979 */
static void C_ccall f_4124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 74   exit");
((C_proc3)C_retrieve_symbol_proc(lf[25]))(3,*((C_word*)lf[25]+1),((C_word*)t0)[2],C_fix(1));}

/* ##compiler#compiler-warning in k3982 in k3979 */
static void C_ccall f_4085(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_4085r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4085r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4085r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4092,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_retrieve(lf[23]))){
t6=(C_word)C_i_memq(t2,*((C_word*)lf[4]+1));
t7=t5;
f_4092(t7,(C_word)C_i_not(t6));}
else{
t6=t5;
f_4092(t6,C_SCHEME_FALSE);}}

/* k4090 in ##compiler#compiler-warning in k3982 in k3979 */
static void C_fcall f_4092(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4092,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 66   current-error-port");
((C_proc2)C_retrieve_symbol_proc(lf[22]))(2,*((C_word*)lf[22]+1),t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k4093 in k4090 in ##compiler#compiler-warning in k3982 in k3979 */
static void C_ccall f_4095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4098,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4105,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("support.scm: 67   string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[7]+1)))(4,*((C_word*)lf[7]+1),t3,lf[21],((C_word*)t0)[2]);}

/* k4103 in k4093 in k4090 in ##compiler#compiler-warning in k3982 in k3979 */
static void C_ccall f_4105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(6,0,((C_word*)t0)[4],C_retrieve(lf[20]),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4096 in k4093 in k4090 in ##compiler#compiler-warning in k3982 in k3979 */
static void C_ccall f_4098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("support.scm: 68   newline");
((C_proc3)C_retrieve_proc(*((C_word*)lf[13]+1)))(3,*((C_word*)lf[13]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##compiler#debugging in k3982 in k3979 */
static void C_ccall f_4020(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_4020r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4020r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4020r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
if(C_truep((C_word)C_i_memq(t2,*((C_word*)lf[3]+1)))){
t5=*((C_word*)lf[11]+1);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4030,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[17]+1)))(4,*((C_word*)lf[17]+1),t6,t3,t5);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k4028 in ##compiler#debugging in k3982 in k3979 */
static void C_ccall f_4030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4033,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4045,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 58   display");
((C_proc3)C_retrieve_proc(*((C_word*)lf[17]+1)))(3,*((C_word*)lf[17]+1),t3,lf[18]);}
else{
t3=t2;
f_4033(2,t3,C_SCHEME_UNDEFINED);}}

/* k4043 in k4028 in ##compiler#debugging in k3982 in k3979 */
static void C_ccall f_4045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4045,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4050,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4050(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop49 in k4043 in k4028 in ##compiler#debugging in k3982 in k3979 */
static void C_fcall f_4050(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4050,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4072,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=*((C_word*)lf[11]+1);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4062,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4069,a[2]=t5,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
C_trace("support.scm: 59   force");
((C_proc3)C_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t7,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4067 in loop49 in k4043 in k4028 in ##compiler#debugging in k3982 in k3979 */
static void C_ccall f_4069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[15]+1)))(4,*((C_word*)lf[15]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4060 in loop49 in k4043 in k4028 in ##compiler#debugging in k3982 in k3979 */
static void C_ccall f_4062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_retrieve(lf[14]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(32),((C_word*)t0)[2]);}

/* k4070 in loop49 in k4043 in k4028 in ##compiler#debugging in k3982 in k3979 */
static void C_ccall f_4072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4050(t3,((C_word*)t0)[2],t2);}

/* k4031 in k4028 in ##compiler#debugging in k3982 in k3979 */
static void C_ccall f_4033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4036,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 60   newline");
((C_proc2)C_retrieve_proc(*((C_word*)lf[13]+1)))(2,*((C_word*)lf[13]+1),t2);}

/* k4034 in k4031 in k4028 in ##compiler#debugging in k3982 in k3979 */
static void C_ccall f_4036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4039,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("support.scm: 61   flush-output");
((C_proc2)C_retrieve_proc(*((C_word*)lf[12]+1)))(2,*((C_word*)lf[12]+1),t2);}

/* k4037 in k4034 in k4031 in k4028 in ##compiler#debugging in k3982 in k3979 */
static void C_ccall f_4039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* ##compiler#bomb in k3982 in k3979 */
static void C_ccall f_3993(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_3993r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_3993r(t0,t1,t2);}}

static void C_ccall f_3993r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4007,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_car(t2);
C_trace("support.scm: 49   string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[7]+1)))(4,*((C_word*)lf[7]+1),t3,lf[8],t4);}
else{
C_trace("support.scm: 50   error");
((C_proc3)C_retrieve_proc(*((C_word*)lf[6]+1)))(3,*((C_word*)lf[6]+1),t1,lf[9]);}}

/* k4005 in ##compiler#bomb in k3982 in k3979 */
static void C_ccall f_4007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
C_apply(5,0,((C_word*)t0)[2],*((C_word*)lf[6]+1),t1,t2);}

/* ##compiler#compiler-cleanup-hook in k3982 in k3979 */
static void C_ccall f_3988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3988,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[667] = {
{"toplevel:support_scm",(void*)C_support_toplevel},
{"f_3981:support_scm",(void*)f_3981},
{"f_3984:support_scm",(void*)f_3984},
{"f_5046:support_scm",(void*)f_5046},
{"f_5049:support_scm",(void*)f_5049},
{"f_13293:support_scm",(void*)f_13293},
{"f_13297:support_scm",(void*)f_13297},
{"f_13387:support_scm",(void*)f_13387},
{"f_13303:support_scm",(void*)f_13303},
{"f_13374:support_scm",(void*)f_13374},
{"f_13377:support_scm",(void*)f_13377},
{"f_13380:support_scm",(void*)f_13380},
{"f_13309:support_scm",(void*)f_13309},
{"f_13316:support_scm",(void*)f_13316},
{"f_13318:support_scm",(void*)f_13318},
{"f_13342:support_scm",(void*)f_13342},
{"f_13338:support_scm",(void*)f_13338},
{"f_13360:support_scm",(void*)f_13360},
{"f_13282:support_scm",(void*)f_13282},
{"f_13271:support_scm",(void*)f_13271},
{"f_13265:support_scm",(void*)f_13265},
{"f_13237:support_scm",(void*)f_13237},
{"f_13241:support_scm",(void*)f_13241},
{"f_13216:support_scm",(void*)f_13216},
{"f_13220:support_scm",(void*)f_13220},
{"f_13183:support_scm",(void*)f_13183},
{"f_13189:support_scm",(void*)f_13189},
{"f_13150:support_scm",(void*)f_13150},
{"f_13156:support_scm",(void*)f_13156},
{"f_13126:support_scm",(void*)f_13126},
{"f_13057:support_scm",(void*)f_13057},
{"f_13061:support_scm",(void*)f_13061},
{"f_13066:support_scm",(void*)f_13066},
{"f_13070:support_scm",(void*)f_13070},
{"f_13121:support_scm",(void*)f_13121},
{"f_13100:support_scm",(void*)f_13100},
{"f_13112:support_scm",(void*)f_13112},
{"f_13115:support_scm",(void*)f_13115},
{"f_13088:support_scm",(void*)f_13088},
{"f_13024:support_scm",(void*)f_13024},
{"f_13034:support_scm",(void*)f_13034},
{"f_13037:support_scm",(void*)f_13037},
{"f_12901:support_scm",(void*)f_12901},
{"f_12910:support_scm",(void*)f_12910},
{"f_12938:support_scm",(void*)f_12938},
{"f_12944:support_scm",(void*)f_12944},
{"f_12947:support_scm",(void*)f_12947},
{"f_12950:support_scm",(void*)f_12950},
{"f_12953:support_scm",(void*)f_12953},
{"f_12956:support_scm",(void*)f_12956},
{"f_12959:support_scm",(void*)f_12959},
{"f_13018:support_scm",(void*)f_13018},
{"f_12962:support_scm",(void*)f_12962},
{"f_12977:support_scm",(void*)f_12977},
{"f_12980:support_scm",(void*)f_12980},
{"f_12988:support_scm",(void*)f_12988},
{"f_12998:support_scm",(void*)f_12998},
{"f_13001:support_scm",(void*)f_13001},
{"f_12983:support_scm",(void*)f_12983},
{"f_12968:support_scm",(void*)f_12968},
{"f_12905:support_scm",(void*)f_12905},
{"f_12898:support_scm",(void*)f_12898},
{"f_12880:support_scm",(void*)f_12880},
{"f_12834:support_scm",(void*)f_12834},
{"f_12853:support_scm",(void*)f_12853},
{"f_12864:support_scm",(void*)f_12864},
{"f_12860:support_scm",(void*)f_12860},
{"f_12813:support_scm",(void*)f_12813},
{"f_12819:support_scm",(void*)f_12819},
{"f_12823:support_scm",(void*)f_12823},
{"f_12826:support_scm",(void*)f_12826},
{"f_12829:support_scm",(void*)f_12829},
{"f_12801:support_scm",(void*)f_12801},
{"f_12805:support_scm",(void*)f_12805},
{"f_12710:support_scm",(void*)f_12710},
{"f_12729:support_scm",(void*)f_12729},
{"f_12754:support_scm",(void*)f_12754},
{"f_12758:support_scm",(void*)f_12758},
{"f_12760:support_scm",(void*)f_12760},
{"f_12767:support_scm",(void*)f_12767},
{"f_12780:support_scm",(void*)f_12780},
{"f_12783:support_scm",(void*)f_12783},
{"f_12786:support_scm",(void*)f_12786},
{"f_12789:support_scm",(void*)f_12789},
{"f_12792:support_scm",(void*)f_12792},
{"f_12796:support_scm",(void*)f_12796},
{"f_12713:support_scm",(void*)f_12713},
{"f_12717:support_scm",(void*)f_12717},
{"f_12723:support_scm",(void*)f_12723},
{"f_12704:support_scm",(void*)f_12704},
{"f_12645:support_scm",(void*)f_12645},
{"f_12653:support_scm",(void*)f_12653},
{"f_12680:support_scm",(void*)f_12680},
{"f_12656:support_scm",(void*)f_12656},
{"f_12659:support_scm",(void*)f_12659},
{"f_12676:support_scm",(void*)f_12676},
{"f_12662:support_scm",(void*)f_12662},
{"f_12672:support_scm",(void*)f_12672},
{"f_12665:support_scm",(void*)f_12665},
{"f_12668:support_scm",(void*)f_12668},
{"f_12636:support_scm",(void*)f_12636},
{"f_12630:support_scm",(void*)f_12630},
{"f_12624:support_scm",(void*)f_12624},
{"f_12612:support_scm",(void*)f_12612},
{"f_12616:support_scm",(void*)f_12616},
{"f_12619:support_scm",(void*)f_12619},
{"f_12574:support_scm",(void*)f_12574},
{"f_12578:support_scm",(void*)f_12578},
{"f14511:support_scm",(void*)f14511},
{"f_12581:support_scm",(void*)f_12581},
{"f_12588:support_scm",(void*)f_12588},
{"f_12532:support_scm",(void*)f_12532},
{"f_12541:support_scm",(void*)f_12541},
{"f_12503:support_scm",(void*)f_12503},
{"f_12513:support_scm",(void*)f_12513},
{"f_12294:support_scm",(void*)f_12294},
{"f_12498:support_scm",(void*)f_12498},
{"f_12463:support_scm",(void*)f_12463},
{"f_12469:support_scm",(void*)f_12469},
{"f_12484:support_scm",(void*)f_12484},
{"f_12477:support_scm",(void*)f_12477},
{"f_12297:support_scm",(void*)f_12297},
{"f_12331:support_scm",(void*)f_12331},
{"f_12425:support_scm",(void*)f_12425},
{"f_12437:support_scm",(void*)f_12437},
{"f_12395:support_scm",(void*)f_12395},
{"f_12406:support_scm",(void*)f_12406},
{"f_12386:support_scm",(void*)f_12386},
{"f_12350:support_scm",(void*)f_12350},
{"f_12356:support_scm",(void*)f_12356},
{"f_12360:support_scm",(void*)f_12360},
{"f_12155:support_scm",(void*)f_12155},
{"f_12161:support_scm",(void*)f_12161},
{"f_12254:support_scm",(void*)f_12254},
{"f_12259:support_scm",(void*)f_12259},
{"f_12269:support_scm",(void*)f_12269},
{"f_12222:support_scm",(void*)f_12222},
{"f_12193:support_scm",(void*)f_12193},
{"f_12198:support_scm",(void*)f_12198},
{"f_12208:support_scm",(void*)f_12208},
{"f_12159:support_scm",(void*)f_12159},
{"f_11786:support_scm",(void*)f_11786},
{"f_11985:support_scm",(void*)f_11985},
{"f_12077:support_scm",(void*)f_12077},
{"f_11988:support_scm",(void*)f_11988},
{"f_11465:support_scm",(void*)f_11465},
{"f_11780:support_scm",(void*)f_11780},
{"f_11477:support_scm",(void*)f_11477},
{"f_11487:support_scm",(void*)f_11487},
{"f_11505:support_scm",(void*)f_11505},
{"f_11544:support_scm",(void*)f_11544},
{"f_11509:support_scm",(void*)f_11509},
{"f_11135:support_scm",(void*)f_11135},
{"f_11459:support_scm",(void*)f_11459},
{"f_11141:support_scm",(void*)f_11141},
{"f_11151:support_scm",(void*)f_11151},
{"f_11160:support_scm",(void*)f_11160},
{"f_11172:support_scm",(void*)f_11172},
{"f_11184:support_scm",(void*)f_11184},
{"f_11190:support_scm",(void*)f_11190},
{"f_11194:support_scm",(void*)f_11194},
{"f_11090:support_scm",(void*)f_11090},
{"f_11129:support_scm",(void*)f_11129},
{"f_11096:support_scm",(void*)f_11096},
{"f_11100:support_scm",(void*)f_11100},
{"f_11104:support_scm",(void*)f_11104},
{"f_11059:support_scm",(void*)f_11059},
{"f_11072:support_scm",(void*)f_11072},
{"f_11028:support_scm",(void*)f_11028},
{"f_11041:support_scm",(void*)f_11041},
{"f_9970:support_scm",(void*)f_9970},
{"f_11022:support_scm",(void*)f_11022},
{"f_9976:support_scm",(void*)f_9976},
{"f_9982:support_scm",(void*)f_9982},
{"f_10011:support_scm",(void*)f_10011},
{"f_10030:support_scm",(void*)f_10030},
{"f_10049:support_scm",(void*)f_10049},
{"f_10119:support_scm",(void*)f_10119},
{"f_10138:support_scm",(void*)f_10138},
{"f_10220:support_scm",(void*)f_10220},
{"f_10259:support_scm",(void*)f_10259},
{"f_10278:support_scm",(void*)f_10278},
{"f_10297:support_scm",(void*)f_10297},
{"f_10377:support_scm",(void*)f_10377},
{"f_10462:support_scm",(void*)f_10462},
{"f_10537:support_scm",(void*)f_10537},
{"f_10576:support_scm",(void*)f_10576},
{"f_10646:support_scm",(void*)f_10646},
{"f_10579:support_scm",(void*)f_10579},
{"f_10541:support_scm",(void*)f_10541},
{"f_10380:support_scm",(void*)f_10380},
{"f_10411:support_scm",(void*)f_10411},
{"f_10300:support_scm",(void*)f_10300},
{"f_10141:support_scm",(void*)f_10141},
{"f_10172:support_scm",(void*)f_10172},
{"f_10052:support_scm",(void*)f_10052},
{"f_10083:support_scm",(void*)f_10083},
{"f_9912:support_scm",(void*)f_9912},
{"f_9916:support_scm",(void*)f_9916},
{"f_9927:support_scm",(void*)f_9927},
{"f_9933:support_scm",(void*)f_9933},
{"f_9945:support_scm",(void*)f_9945},
{"f_9951:support_scm",(void*)f_9951},
{"f_9919:support_scm",(void*)f_9919},
{"f_9831:support_scm",(void*)f_9831},
{"f_9843:support_scm",(void*)f_9843},
{"f_9850:support_scm",(void*)f_9850},
{"f_9853:support_scm",(void*)f_9853},
{"f_9856:support_scm",(void*)f_9856},
{"f_9859:support_scm",(void*)f_9859},
{"f_9862:support_scm",(void*)f_9862},
{"f_9865:support_scm",(void*)f_9865},
{"f_9868:support_scm",(void*)f_9868},
{"f_9871:support_scm",(void*)f_9871},
{"f_9874:support_scm",(void*)f_9874},
{"f_9877:support_scm",(void*)f_9877},
{"f_9880:support_scm",(void*)f_9880},
{"f_9883:support_scm",(void*)f_9883},
{"f_9886:support_scm",(void*)f_9886},
{"f_9889:support_scm",(void*)f_9889},
{"f_9892:support_scm",(void*)f_9892},
{"f_9895:support_scm",(void*)f_9895},
{"f_9898:support_scm",(void*)f_9898},
{"f_9901:support_scm",(void*)f_9901},
{"f_9904:support_scm",(void*)f_9904},
{"f_9907:support_scm",(void*)f_9907},
{"f_9837:support_scm",(void*)f_9837},
{"f_9723:support_scm",(void*)f_9723},
{"f_9732:support_scm",(void*)f_9732},
{"f_9738:support_scm",(void*)f_9738},
{"f_9746:support_scm",(void*)f_9746},
{"f_9727:support_scm",(void*)f_9727},
{"f_9702:support_scm",(void*)f_9702},
{"f_9712:support_scm",(void*)f_9712},
{"f_9653:support_scm",(void*)f_9653},
{"f_9659:support_scm",(void*)f_9659},
{"f_9700:support_scm",(void*)f_9700},
{"f_9672:support_scm",(void*)f_9672},
{"f_9616:support_scm",(void*)f_9616},
{"f_9622:support_scm",(void*)f_9622},
{"f_9651:support_scm",(void*)f_9651},
{"f_9629:support_scm",(void*)f_9629},
{"f_9632:support_scm",(void*)f_9632},
{"f_9575:support_scm",(void*)f_9575},
{"f_9581:support_scm",(void*)f_9581},
{"f_9614:support_scm",(void*)f_9614},
{"f_9588:support_scm",(void*)f_9588},
{"f_9591:support_scm",(void*)f_9591},
{"f_9453:support_scm",(void*)f_9453},
{"f_9482:support_scm",(void*)f_9482},
{"f_9352:support_scm",(void*)f_9352},
{"f_9358:support_scm",(void*)f_9358},
{"f_9384:support_scm",(void*)f_9384},
{"f_9398:support_scm",(void*)f_9398},
{"f_9406:support_scm",(void*)f_9406},
{"f_9127:support_scm",(void*)f_9127},
{"f_9326:support_scm",(void*)f_9326},
{"f_9332:support_scm",(void*)f_9332},
{"f_9207:support_scm",(void*)f_9207},
{"f_9229:support_scm",(void*)f_9229},
{"f_9247:support_scm",(void*)f_9247},
{"f_9278:support_scm",(void*)f_9278},
{"f_9164:support_scm",(void*)f_9164},
{"f_9186:support_scm",(void*)f_9186},
{"f_9130:support_scm",(void*)f_9130},
{"f_9159:support_scm",(void*)f_9159},
{"f_9138:support_scm",(void*)f_9138},
{"f_9058:support_scm",(void*)f_9058},
{"f_9064:support_scm",(void*)f_9064},
{"f_9070:support_scm",(void*)f_9070},
{"f_9074:support_scm",(void*)f_9074},
{"f_9121:support_scm",(void*)f_9121},
{"f_9085:support_scm",(void*)f_9085},
{"f_9110:support_scm",(void*)f_9110},
{"f_8866:support_scm",(void*)f_8866},
{"f_8897:support_scm",(void*)f_8897},
{"f_9056:support_scm",(void*)f_9056},
{"f_8901:support_scm",(void*)f_8901},
{"f_8909:support_scm",(void*)f_8909},
{"f_8916:support_scm",(void*)f_8916},
{"f_9052:support_scm",(void*)f_9052},
{"f_8940:support_scm",(void*)f_8940},
{"f_9019:support_scm",(void*)f_9019},
{"f_8974:support_scm",(void*)f_8974},
{"f_8977:support_scm",(void*)f_8977},
{"f_8995:support_scm",(void*)f_8995},
{"f_8984:support_scm",(void*)f_8984},
{"f_8904:support_scm",(void*)f_8904},
{"f_8870:support_scm",(void*)f_8870},
{"f_8876:support_scm",(void*)f_8876},
{"f_8889:support_scm",(void*)f_8889},
{"f_8881:support_scm",(void*)f_8881},
{"f_8798:support_scm",(void*)f_8798},
{"f_8804:support_scm",(void*)f_8804},
{"f_8831:support_scm",(void*)f_8831},
{"f_8860:support_scm",(void*)f_8860},
{"f_8825:support_scm",(void*)f_8825},
{"f_8712:support_scm",(void*)f_8712},
{"f_8718:support_scm",(void*)f_8718},
{"f_8763:support_scm",(void*)f_8763},
{"f_8792:support_scm",(void*)f_8792},
{"f_8752:support_scm",(void*)f_8752},
{"f_8748:support_scm",(void*)f_8748},
{"f_8673:support_scm",(void*)f_8673},
{"f_8677:support_scm",(void*)f_8677},
{"f_8680:support_scm",(void*)f_8680},
{"f_8683:support_scm",(void*)f_8683},
{"f_8639:support_scm",(void*)f_8639},
{"f_8645:support_scm",(void*)f_8645},
{"f_8659:support_scm",(void*)f_8659},
{"f_8663:support_scm",(void*)f_8663},
{"f_8254:support_scm",(void*)f_8254},
{"f_8590:support_scm",(void*)f_8590},
{"f_8623:support_scm",(void*)f_8623},
{"f_8603:support_scm",(void*)f_8603},
{"f_8258:support_scm",(void*)f_8258},
{"f_8266:support_scm",(void*)f_8266},
{"f_8575:support_scm",(void*)f_8575},
{"f_8581:support_scm",(void*)f_8581},
{"f_8579:support_scm",(void*)f_8579},
{"f_8415:support_scm",(void*)f_8415},
{"f_8522:support_scm",(void*)f_8522},
{"f_8559:support_scm",(void*)f_8559},
{"f_8549:support_scm",(void*)f_8549},
{"f_8553:support_scm",(void*)f_8553},
{"f_8556:support_scm",(void*)f_8556},
{"f_8419:support_scm",(void*)f_8419},
{"f_8473:support_scm",(void*)f_8473},
{"f_8506:support_scm",(void*)f_8506},
{"f_8486:support_scm",(void*)f_8486},
{"f_8471:support_scm",(void*)f_8471},
{"f_8422:support_scm",(void*)f_8422},
{"f_8448:support_scm",(void*)f_8448},
{"f_8464:support_scm",(void*)f_8464},
{"f_8456:support_scm",(void*)f_8456},
{"f_8440:support_scm",(void*)f_8440},
{"f_8438:support_scm",(void*)f_8438},
{"f_8366:support_scm",(void*)f_8366},
{"f_8369:support_scm",(void*)f_8369},
{"f_8372:support_scm",(void*)f_8372},
{"f_8392:support_scm",(void*)f_8392},
{"f_8350:support_scm",(void*)f_8350},
{"f_8342:support_scm",(void*)f_8342},
{"f_8313:support_scm",(void*)f_8313},
{"f_8303:support_scm",(void*)f_8303},
{"f_8310:support_scm",(void*)f_8310},
{"f_8106:support_scm",(void*)f_8106},
{"f_8112:support_scm",(void*)f_8112},
{"f_8124:support_scm",(void*)f_8124},
{"f_8219:support_scm",(void*)f_8219},
{"f_8248:support_scm",(void*)f_8248},
{"f_8128:support_scm",(void*)f_8128},
{"f_8131:support_scm",(void*)f_8131},
{"f_8211:support_scm",(void*)f_8211},
{"f_8157:support_scm",(void*)f_8157},
{"f_8161:support_scm",(void*)f_8161},
{"f_8136:support_scm",(void*)f_8136},
{"f_8118:support_scm",(void*)f_8118},
{"f_8052:support_scm",(void*)f_8052},
{"f_8058:support_scm",(void*)f_8058},
{"f_8084:support_scm",(void*)f_8084},
{"f_8088:support_scm",(void*)f_8088},
{"f_7425:support_scm",(void*)f_7425},
{"f_7431:support_scm",(void*)f_7431},
{"f_7465:support_scm",(void*)f_7465},
{"f_7923:support_scm",(void*)f_7923},
{"f_7990:support_scm",(void*)f_7990},
{"f_8019:support_scm",(void*)f_8019},
{"f_7988:support_scm",(void*)f_7988},
{"f_7984:support_scm",(void*)f_7984},
{"f_7930:support_scm",(void*)f_7930},
{"f_7940:support_scm",(void*)f_7940},
{"f_7969:support_scm",(void*)f_7969},
{"f_7934:support_scm",(void*)f_7934},
{"f_7861:support_scm",(void*)f_7861},
{"f_7910:support_scm",(void*)f_7910},
{"f_7879:support_scm",(void*)f_7879},
{"f_7887:support_scm",(void*)f_7887},
{"f_7804:support_scm",(void*)f_7804},
{"f_7833:support_scm",(void*)f_7833},
{"f_7802:support_scm",(void*)f_7802},
{"f_7752:support_scm",(void*)f_7752},
{"f_7781:support_scm",(void*)f_7781},
{"f_7734:support_scm",(void*)f_7734},
{"f_7678:support_scm",(void*)f_7678},
{"f_7680:support_scm",(void*)f_7680},
{"f_7709:support_scm",(void*)f_7709},
{"f_7625:support_scm",(void*)f_7625},
{"f_7627:support_scm",(void*)f_7627},
{"f_7660:support_scm",(void*)f_7660},
{"f_7640:support_scm",(void*)f_7640},
{"f_7609:support_scm",(void*)f_7609},
{"f_7621:support_scm",(void*)f_7621},
{"f_7617:support_scm",(void*)f_7617},
{"f_7530:support_scm",(void*)f_7530},
{"f_7559:support_scm",(void*)f_7559},
{"f_7528:support_scm",(void*)f_7528},
{"f_7524:support_scm",(void*)f_7524},
{"f_7474:support_scm",(void*)f_7474},
{"f_7503:support_scm",(void*)f_7503},
{"f_7472:support_scm",(void*)f_7472},
{"f_6502:support_scm",(void*)f_6502},
{"f_7420:support_scm",(void*)f_7420},
{"f_7423:support_scm",(void*)f_7423},
{"f_6505:support_scm",(void*)f_6505},
{"f_7380:support_scm",(void*)f_7380},
{"f_7409:support_scm",(void*)f_7409},
{"f_7378:support_scm",(void*)f_7378},
{"f_7118:support_scm",(void*)f_7118},
{"f_7245:support_scm",(void*)f_7245},
{"f_7329:support_scm",(void*)f_7329},
{"f_7301:support_scm",(void*)f_7301},
{"f_7308:support_scm",(void*)f_7308},
{"f_7315:support_scm",(void*)f_7315},
{"f_7305:support_scm",(void*)f_7305},
{"f_7264:support_scm",(void*)f_7264},
{"f_7293:support_scm",(void*)f_7293},
{"f_7262:support_scm",(void*)f_7262},
{"f_7239:support_scm",(void*)f_7239},
{"f_7201:support_scm",(void*)f_7201},
{"f_7230:support_scm",(void*)f_7230},
{"f_7195:support_scm",(void*)f_7195},
{"f_7144:support_scm",(void*)f_7144},
{"f_7173:support_scm",(void*)f_7173},
{"f_7138:support_scm",(void*)f_7138},
{"f_7097:support_scm",(void*)f_7097},
{"f_7081:support_scm",(void*)f_7081},
{"f_7077:support_scm",(void*)f_7077},
{"f_7011:support_scm",(void*)f_7011},
{"f_7040:support_scm",(void*)f_7040},
{"f_7005:support_scm",(void*)f_7005},
{"f_6921:support_scm",(void*)f_6921},
{"f_6950:support_scm",(void*)f_6950},
{"f_6915:support_scm",(void*)f_6915},
{"f_6823:support_scm",(void*)f_6823},
{"f_6833:support_scm",(void*)f_6833},
{"f_6862:support_scm",(void*)f_6862},
{"f_6827:support_scm",(void*)f_6827},
{"f_6790:support_scm",(void*)f_6790},
{"f_6697:support_scm",(void*)f_6697},
{"f_6719:support_scm",(void*)f_6719},
{"f_6757:support_scm",(void*)f_6757},
{"f_6746:support_scm",(void*)f_6746},
{"f_6705:support_scm",(void*)f_6705},
{"f_6713:support_scm",(void*)f_6713},
{"f_6701:support_scm",(void*)f_6701},
{"f_6638:support_scm",(void*)f_6638},
{"f_6641:support_scm",(void*)f_6641},
{"f_6648:support_scm",(void*)f_6648},
{"f_6586:support_scm",(void*)f_6586},
{"f_6615:support_scm",(void*)f_6615},
{"f_6580:support_scm",(void*)f_6580},
{"f_6487:support_scm",(void*)f_6487},
{"f_6472:support_scm",(void*)f_6472},
{"f_6466:support_scm",(void*)f_6466},
{"f_6457:support_scm",(void*)f_6457},
{"f_6448:support_scm",(void*)f_6448},
{"f_6439:support_scm",(void*)f_6439},
{"f_6430:support_scm",(void*)f_6430},
{"f_6421:support_scm",(void*)f_6421},
{"f_6412:support_scm",(void*)f_6412},
{"f_6406:support_scm",(void*)f_6406},
{"f_6400:support_scm",(void*)f_6400},
{"f_5895:support_scm",(void*)f_5895},
{"f_6398:support_scm",(void*)f_6398},
{"f_5899:support_scm",(void*)f_5899},
{"f_5904:support_scm",(void*)f_5904},
{"f_5914:support_scm",(void*)f_5914},
{"f_6077:support_scm",(void*)f_6077},
{"f_6087:support_scm",(void*)f_6087},
{"f_6103:support_scm",(void*)f_6103},
{"f_6179:support_scm",(void*)f_6179},
{"f_6219:support_scm",(void*)f_6219},
{"f_6209:support_scm",(void*)f_6209},
{"f_6182:support_scm",(void*)f_6182},
{"f_6199:support_scm",(void*)f_6199},
{"f_6185:support_scm",(void*)f_6185},
{"f_6188:support_scm",(void*)f_6188},
{"f_6195:support_scm",(void*)f_6195},
{"f_6170:support_scm",(void*)f_6170},
{"f_6160:support_scm",(void*)f_6160},
{"f_6144:support_scm",(void*)f_6144},
{"f_6106:support_scm",(void*)f_6106},
{"f_6121:support_scm",(void*)f_6121},
{"f_6090:support_scm",(void*)f_6090},
{"f_5917:support_scm",(void*)f_5917},
{"f_5958:support_scm",(void*)f_5958},
{"f_5992:support_scm",(void*)f_5992},
{"f_6026:support_scm",(void*)f_6026},
{"f_6029:support_scm",(void*)f_6029},
{"f_5995:support_scm",(void*)f_5995},
{"f_5961:support_scm",(void*)f_5961},
{"f_5920:support_scm",(void*)f_5920},
{"f_5948:support_scm",(void*)f_5948},
{"f_5923:support_scm",(void*)f_5923},
{"f_5935:support_scm",(void*)f_5935},
{"f_5926:support_scm",(void*)f_5926},
{"f_5832:support_scm",(void*)f_5832},
{"f_5838:support_scm",(void*)f_5838},
{"f_5845:support_scm",(void*)f_5845},
{"f_5848:support_scm",(void*)f_5848},
{"f_5860:support_scm",(void*)f_5860},
{"f_5889:support_scm",(void*)f_5889},
{"f_5858:support_scm",(void*)f_5858},
{"f_5851:support_scm",(void*)f_5851},
{"f_5808:support_scm",(void*)f_5808},
{"f_5814:support_scm",(void*)f_5814},
{"f_5824:support_scm",(void*)f_5824},
{"f_5767:support_scm",(void*)f_5767},
{"f_5774:support_scm",(void*)f_5774},
{"f_5777:support_scm",(void*)f_5777},
{"f_5781:support_scm",(void*)f_5781},
{"f_5757:support_scm",(void*)f_5757},
{"f_5748:support_scm",(void*)f_5748},
{"f_5752:support_scm",(void*)f_5752},
{"f_5691:support_scm",(void*)f_5691},
{"f_5695:support_scm",(void*)f_5695},
{"f_5725:support_scm",(void*)f_5725},
{"f_5639:support_scm",(void*)f_5639},
{"f_5643:support_scm",(void*)f_5643},
{"f_5670:support_scm",(void*)f_5670},
{"f_5593:support_scm",(void*)f_5593},
{"f_5597:support_scm",(void*)f_5597},
{"f_5619:support_scm",(void*)f_5619},
{"f_5575:support_scm",(void*)f_5575},
{"f_5579:support_scm",(void*)f_5579},
{"f_5587:support_scm",(void*)f_5587},
{"f_5557:support_scm",(void*)f_5557},
{"f_5561:support_scm",(void*)f_5561},
{"f_5304:support_scm",(void*)f_5304},
{"f_5466:support_scm",(void*)f_5466},
{"f_5480:support_scm",(void*)f_5480},
{"f_5505:support_scm",(void*)f_5505},
{"f_5516:support_scm",(void*)f_5516},
{"f_5544:support_scm",(void*)f_5544},
{"f_5312:support_scm",(void*)f_5312},
{"f_5375:support_scm",(void*)f_5375},
{"f_5389:support_scm",(void*)f_5389},
{"f_5414:support_scm",(void*)f_5414},
{"f_5425:support_scm",(void*)f_5425},
{"f_5453:support_scm",(void*)f_5453},
{"f_5315:support_scm",(void*)f_5315},
{"f_5320:support_scm",(void*)f_5320},
{"f_5334:support_scm",(void*)f_5334},
{"f_5362:support_scm",(void*)f_5362},
{"f_5308:support_scm",(void*)f_5308},
{"f_5163:support_scm",(void*)f_5163},
{"f_5167:support_scm",(void*)f_5167},
{"f_5171:support_scm",(void*)f_5171},
{"f_5160:support_scm",(void*)f_5160},
{"f_5157:support_scm",(void*)f_5157},
{"f_5050:support_scm",(void*)f_5050},
{"f_5059:support_scm",(void*)f_5059},
{"f_5090:support_scm",(void*)f_5090},
{"f_5144:support_scm",(void*)f_5144},
{"f_5150:support_scm",(void*)f_5150},
{"f_5096:support_scm",(void*)f_5096},
{"f_5128:support_scm",(void*)f_5128},
{"f_5142:support_scm",(void*)f_5142},
{"f_5134:support_scm",(void*)f_5134},
{"f_5100:support_scm",(void*)f_5100},
{"f_5122:support_scm",(void*)f_5122},
{"f_5065:support_scm",(void*)f_5065},
{"f_5071:support_scm",(void*)f_5071},
{"f_5082:support_scm",(void*)f_5082},
{"f_5079:support_scm",(void*)f_5079},
{"f_5054:support_scm",(void*)f_5054},
{"f_4949:support_scm",(void*)f_4949},
{"f_4955:support_scm",(void*)f_4955},
{"f_5032:support_scm",(void*)f_5032},
{"f_4983:support_scm",(void*)f_4983},
{"f_5021:support_scm",(void*)f_5021},
{"f_5009:support_scm",(void*)f_5009},
{"f_4889:support_scm",(void*)f_4889},
{"f_4905:support_scm",(void*)f_4905},
{"f_4947:support_scm",(void*)f_4947},
{"f_4911:support_scm",(void*)f_4911},
{"f_4926:support_scm",(void*)f_4926},
{"f_4843:support_scm",(void*)f_4843},
{"f_4887:support_scm",(void*)f_4887},
{"f_4847:support_scm",(void*)f_4847},
{"f_4813:support_scm",(void*)f_4813},
{"f_4767:support_scm",(void*)f_4767},
{"f_4747:support_scm",(void*)f_4747},
{"f_4753:support_scm",(void*)f_4753},
{"f_4761:support_scm",(void*)f_4761},
{"f_4765:support_scm",(void*)f_4765},
{"f_4716:support_scm",(void*)f_4716},
{"f_4722:support_scm",(void*)f_4722},
{"f_4737:support_scm",(void*)f_4737},
{"f_4653:support_scm",(void*)f_4653},
{"f_4667:support_scm",(void*)f_4667},
{"f_4669:support_scm",(void*)f_4669},
{"f_4698:support_scm",(void*)f_4698},
{"f_4641:support_scm",(void*)f_4641},
{"f_4594:support_scm",(void*)f_4594},
{"f_4610:support_scm",(void*)f_4610},
{"f_4622:support_scm",(void*)f_4622},
{"f_4587:support_scm",(void*)f_4587},
{"f_4580:support_scm",(void*)f_4580},
{"f_4524:support_scm",(void*)f_4524},
{"f_4578:support_scm",(void*)f_4578},
{"f_4528:support_scm",(void*)f_4528},
{"f_4551:support_scm",(void*)f_4551},
{"f_4430:support_scm",(void*)f_4430},
{"f_4446:support_scm",(void*)f_4446},
{"f_4448:support_scm",(void*)f_4448},
{"f_4470:support_scm",(void*)f_4470},
{"f_4509:support_scm",(void*)f_4509},
{"f_4477:support_scm",(void*)f_4477},
{"f_4493:support_scm",(void*)f_4493},
{"f_4481:support_scm",(void*)f_4481},
{"f_4485:support_scm",(void*)f_4485},
{"f_4442:support_scm",(void*)f_4442},
{"f_4386:support_scm",(void*)f_4386},
{"f_4392:support_scm",(void*)f_4392},
{"f_4416:support_scm",(void*)f_4416},
{"f_4355:support_scm",(void*)f_4355},
{"f_4378:support_scm",(void*)f_4378},
{"f_4381:support_scm",(void*)f_4381},
{"f_4384:support_scm",(void*)f_4384},
{"f_4328:support_scm",(void*)f_4328},
{"f_4347:support_scm",(void*)f_4347},
{"f_4350:support_scm",(void*)f_4350},
{"f_4292:support_scm",(void*)f_4292},
{"f_4298:support_scm",(void*)f_4298},
{"f_4224:support_scm",(void*)f_4224},
{"f_4248:support_scm",(void*)f_4248},
{"f_4227:support_scm",(void*)f_4227},
{"f_4235:support_scm",(void*)f_4235},
{"f_4239:support_scm",(void*)f_4239},
{"f_4181:support_scm",(void*)f_4181},
{"f_4187:support_scm",(void*)f_4187},
{"f_4210:support_scm",(void*)f_4210},
{"f_4214:support_scm",(void*)f_4214},
{"f_4178:support_scm",(void*)f_4178},
{"f_4133:support_scm",(void*)f_4133},
{"f_4137:support_scm",(void*)f_4137},
{"f_4140:support_scm",(void*)f_4140},
{"f_4143:support_scm",(void*)f_4143},
{"f_4154:support_scm",(void*)f_4154},
{"f_4146:support_scm",(void*)f_4146},
{"f_4149:support_scm",(void*)f_4149},
{"f_4114:support_scm",(void*)f_4114},
{"f_4118:support_scm",(void*)f_4118},
{"f_4131:support_scm",(void*)f_4131},
{"f_4121:support_scm",(void*)f_4121},
{"f_4124:support_scm",(void*)f_4124},
{"f_4085:support_scm",(void*)f_4085},
{"f_4092:support_scm",(void*)f_4092},
{"f_4095:support_scm",(void*)f_4095},
{"f_4105:support_scm",(void*)f_4105},
{"f_4098:support_scm",(void*)f_4098},
{"f_4020:support_scm",(void*)f_4020},
{"f_4030:support_scm",(void*)f_4030},
{"f_4045:support_scm",(void*)f_4045},
{"f_4050:support_scm",(void*)f_4050},
{"f_4069:support_scm",(void*)f_4069},
{"f_4062:support_scm",(void*)f_4062},
{"f_4072:support_scm",(void*)f_4072},
{"f_4033:support_scm",(void*)f_4033},
{"f_4036:support_scm",(void*)f_4036},
{"f_4039:support_scm",(void*)f_4039},
{"f_3993:support_scm",(void*)f_3993},
{"f_4007:support_scm",(void*)f_4007},
{"f_3988:support_scm",(void*)f_3988},
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
