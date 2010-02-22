/* Generated from scrutinizer.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-09 21:38
   Version 4.2.12
   windows-mingw32-x86 [ manyargs ptables ]
   compiled 2010-01-08 on lenovo-1 (MINGW32_NT-6.0)
   command line: scrutinizer.scm -optimize-level 2 -include-path . -include-path ./ -inline -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file scrutinizer.c
   unit: scrutinizer
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[190];
static double C_possibly_force_alignment;


C_noret_decl(C_scrutinizer_toplevel)
C_externexport void C_ccall C_scrutinizer_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1509)
static void C_ccall f_1509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5649)
static void C_ccall f_5649(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5649)
static void C_ccall f_5649r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5653)
static void C_ccall f_5653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5738)
static void C_ccall f_5738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5656)
static void C_ccall f_5656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5725)
static void C_ccall f_5725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5728)
static void C_ccall f_5728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5731)
static void C_ccall f_5731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5662)
static void C_ccall f_5662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5669)
static void C_ccall f_5669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5671)
static void C_fcall f_5671(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5686)
static void C_ccall f_5686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5698)
static void C_fcall f_5698(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5692)
static void C_ccall f_5692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5711)
static void C_ccall f_5711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1532)
static void C_ccall f_1532(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4841)
static void C_fcall f_4841(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5593)
static void C_fcall f_5593(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5608)
static void C_ccall f_5608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5601)
static void C_fcall f_5601(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5591)
static void C_ccall f_5591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5459)
static void C_ccall f_5459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5473)
static void C_ccall f_5473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5475)
static void C_fcall f_5475(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5558)
static void C_ccall f_5558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5488)
static void C_fcall f_5488(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5506)
static void C_fcall f_5506(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5514)
static void C_ccall f_5514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5517)
static void C_ccall f_5517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5546)
static void C_ccall f_5546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5549)
static void C_ccall f_5549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5552)
static void C_ccall f_5552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5540)
static void C_ccall f_5540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5520)
static void C_ccall f_5520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5523)
static void C_ccall f_5523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5526)
static void C_ccall f_5526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5532)
static void C_ccall f_5532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5536)
static void C_ccall f_5536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5462)
static void C_ccall f_5462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5335)
static void C_ccall f_5335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5421)
static void C_ccall f_5421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5424)
static void C_ccall f_5424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5427)
static void C_ccall f_5427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5430)
static void C_ccall f_5430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5433)
static void C_ccall f_5433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5437)
static void C_ccall f_5437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5338)
static void C_ccall f_5338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5413)
static void C_ccall f_5413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5363)
static void C_fcall f_5363(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5370)
static void C_ccall f_5370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5373)
static void C_ccall f_5373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5376)
static void C_ccall f_5376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5379)
static void C_ccall f_5379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5382)
static void C_ccall f_5382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5385)
static void C_ccall f_5385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5388)
static void C_ccall f_5388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5391)
static void C_ccall f_5391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5394)
static void C_ccall f_5394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5344)
static void C_ccall f_5344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5219)
static void C_ccall f_5219(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5313)
static void C_ccall f_5313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5226)
static void C_ccall f_5226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5266)
static void C_ccall f_5266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5268)
static void C_fcall f_5268(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5262)
static void C_ccall f_5262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5229)
static void C_ccall f_5229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5251)
static void C_ccall f_5251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5255)
static void C_ccall f_5255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5232)
static void C_ccall f_5232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5239)
static void C_ccall f_5239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5125)
static void C_fcall f_5125(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5169)
static void C_ccall f_5169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5172)
static void C_ccall f_5172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5197)
static void C_ccall f_5197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5175)
static void C_ccall f_5175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5178)
static void C_ccall f_5178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5181)
static void C_ccall f_5181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5185)
static void C_ccall f_5185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5146)
static void C_ccall f_5146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5161)
static void C_ccall f_5161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5143)
static void C_ccall f_5143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5110)
static void C_ccall f_5110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4936)
static void C_ccall f_4936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4939)
static void C_ccall f_4939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4942)
static void C_ccall f_4942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4945)
static void C_ccall f_4945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4951)
static void C_fcall f_4951(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5084)
static void C_ccall f_5084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5080)
static void C_ccall f_5080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5026)
static void C_fcall f_5026(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5036)
static void C_ccall f_5036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5039)
static void C_ccall f_5039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5042)
static void C_ccall f_5042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5052)
static void C_ccall f_5052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5045)
static void C_ccall f_5045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5048)
static void C_ccall f_5048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4954)
static void C_ccall f_4954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4959)
static void C_fcall f_4959(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5009)
static void C_ccall f_5009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4972)
static void C_fcall f_4972(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4990)
static void C_fcall f_4990(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4872)
static void C_ccall f_4872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4809)
static void C_ccall f_4809(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4548)
static void C_fcall f_4548(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4581)
static void C_fcall f_4581(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4583)
static void C_fcall f_4583(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4644)
static void C_fcall f_4644(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4655)
static void C_ccall f_4655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4613)
static void C_fcall f_4613(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4574)
static void C_ccall f_4574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4565)
static void C_ccall f_4565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4506)
static void C_ccall f_4506(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4152)
static void C_fcall f_4152(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4496)
static void C_ccall f_4496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4488)
static void C_ccall f_4488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4439)
static void C_fcall f_4439(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4446)
static void C_ccall f_4446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4474)
static void C_ccall f_4474(C_word c,C_word t0,C_word t1) C_noret;
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
C_noret_decl(f_4467)
static void C_ccall f_4467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4470)
static void C_ccall f_4470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4238)
static void C_ccall f_4238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4257)
static void C_ccall f_4257(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4387)
static void C_ccall f_4387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4390)
static void C_ccall f_4390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4432)
static void C_ccall f_4432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4393)
static void C_ccall f_4393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4396)
static void C_ccall f_4396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4402)
static void C_ccall f_4402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4405)
static void C_ccall f_4405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4417)
static void C_ccall f_4417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4420)
static void C_ccall f_4420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4283)
static void C_fcall f_4283(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4321)
static void C_ccall f_4321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4324)
static void C_ccall f_4324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4327)
static void C_ccall f_4327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4330)
static void C_ccall f_4330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4333)
static void C_ccall f_4333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4336)
static void C_ccall f_4336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4359)
static void C_ccall f_4359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4342)
static void C_ccall f_4342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4345)
static void C_ccall f_4345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4348)
static void C_ccall f_4348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4351)
static void C_ccall f_4351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4296)
static void C_ccall f_4296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4267)
static void C_ccall f_4267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4733)
static void C_ccall f_4733(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4741)
static void C_fcall f_4741(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4743)
static void C_fcall f_4743(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4770)
static void C_ccall f_4770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4270)
static void C_ccall f_4270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4243)
static void C_ccall f_4243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4155)
static void C_fcall f_4155(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4159)
static void C_ccall f_4159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4162)
static void C_ccall f_4162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4223)
static void C_ccall f_4223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4165)
static void C_ccall f_4165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4168)
static void C_ccall f_4168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4181)
static void C_fcall f_4181(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4184)
static void C_ccall f_4184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4193)
static void C_ccall f_4193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4196)
static void C_ccall f_4196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4199)
static void C_ccall f_4199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4202)
static void C_ccall f_4202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4178)
static void C_ccall f_4178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4171)
static void C_ccall f_4171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4132)
static void C_fcall f_4132(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4142)
static void C_ccall f_4142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4150)
static void C_ccall f_4150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4140)
static void C_ccall f_4140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4078)
static void C_fcall f_4078(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4082)
static void C_ccall f_4082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4087)
static void C_fcall f_4087(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4126)
static void C_ccall f_4126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4122)
static void C_ccall f_4122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4114)
static void C_ccall f_4114(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3957)
static void C_fcall f_3957(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4023)
static void C_fcall f_4023(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4039)
static void C_ccall f_4039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4063)
static void C_ccall f_4063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4042)
static void C_ccall f_4042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4045)
static void C_ccall f_4045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4055)
static void C_ccall f_4055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3998)
static void C_ccall f_3998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4001)
static void C_ccall f_4001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4014)
static void C_ccall f_4014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4007)
static void C_ccall f_4007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3960)
static void C_fcall f_3960(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3967)
static void C_ccall f_3967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3973)
static void C_ccall f_3973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3976)
static void C_ccall f_3976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3947)
static void C_fcall f_3947(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3955)
static void C_ccall f_3955(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3866)
static void C_fcall f_3866(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3920)
static void C_ccall f_3920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3923)
static void C_ccall f_3923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3926)
static void C_ccall f_3926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3929)
static void C_ccall f_3929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3932)
static void C_ccall f_3932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3935)
static void C_ccall f_3935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3938)
static void C_ccall f_3938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3901)
static void C_ccall f_3901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3904)
static void C_ccall f_3904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3894)
static void C_ccall f_3894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3526)
static void C_fcall f_3526(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3633)
static void C_fcall f_3633(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3768)
static void C_ccall f_3768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3649)
static void C_fcall f_3649(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3654)
static void C_fcall f_3654(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3682)
static void C_ccall f_3682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3602)
static void C_ccall f_3602(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3471)
static void C_fcall f_3471(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3505)
static void C_ccall f_3505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3261)
static void C_fcall f_3261(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3326)
static void C_fcall f_3326(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3434)
static void C_ccall f_3434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3267)
static void C_fcall f_3267(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3285)
static void C_ccall f_3285(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3279)
static void C_ccall f_3279(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2989)
static void C_fcall f_2989(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3076)
static void C_fcall f_3076(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3095)
static void C_fcall f_3095(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3132)
static void C_fcall f_3132(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3159)
static void C_ccall f_3159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3100)
static void C_ccall f_3100(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2980)
static void C_fcall f_2980(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2914)
static void C_fcall f_2914(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2943)
static void C_ccall f_2943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2947)
static void C_ccall f_2947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2712)
static void C_fcall f_2712(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2808)
static void C_fcall f_2808(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2747)
static void C_fcall f_2747(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2758)
static void C_ccall f_2758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2690)
static C_word C_fcall f_2690(C_word t0);
C_noret_decl(f_2650)
static C_word C_fcall f_2650(C_word t0);
C_noret_decl(f_2182)
static void C_fcall f_2182(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2594)
static void C_fcall f_2594(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2623)
static void C_ccall f_2623(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2588)
static void C_ccall f_2588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2551)
static void C_fcall f_2551(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2580)
static void C_ccall f_2580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2223)
static void C_ccall f_2223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2469)
static void C_ccall f_2469(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2473)
static void C_ccall f_2473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2479)
static void C_fcall f_2479(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2337)
static void C_ccall f_2337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2379)
static void C_fcall f_2379(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2404)
static void C_ccall f_2404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2441)
static void C_ccall f_2441(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2369)
static void C_ccall f_2369(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2360)
static void C_ccall f_2360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2326)
static void C_ccall f_2326(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2229)
static void C_ccall f_2229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2234)
static void C_ccall f_2234(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2260)
static void C_fcall f_2260(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2173)
static void C_fcall f_2173(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2177)
static void C_ccall f_2177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2086)
static void C_fcall f_2086(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2108)
static void C_ccall f_2108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2120)
static void C_ccall f_2120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2123)
static void C_ccall f_2123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2126)
static void C_ccall f_2126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2138)
static void C_fcall f_2138(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2005)
static void C_fcall f_2005(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2021)
static void C_ccall f_2021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2027)
static void C_ccall f_2027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2039)
static void C_ccall f_2039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2051)
static void C_fcall f_2051(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2080)
static void C_ccall f_2080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2049)
static void C_ccall f_2049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1825)
static void C_fcall f_1825(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1984)
static void C_ccall f_1984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1987)
static void C_ccall f_1987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1990)
static void C_ccall f_1990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1942)
static void C_fcall f_1942(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1971)
static void C_ccall f_1971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1936)
static void C_ccall f_1936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1871)
static void C_fcall f_1871(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1884)
static void C_ccall f_1884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1893)
static void C_ccall f_1893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1784)
static void C_fcall f_1784(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1788)
static void C_ccall f_1788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1801)
static void C_ccall f_1801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1804)
static void C_ccall f_1804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1807)
static void C_ccall f_1807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1810)
static void C_ccall f_1810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1813)
static void C_ccall f_1813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1823)
static void C_ccall f_1823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1816)
static void C_ccall f_1816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1819)
static void C_ccall f_1819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1791)
static void C_ccall f_1791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1752)
static void C_ccall f_1752(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1759)
static void C_fcall f_1759(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1679)
static void C_fcall f_1679(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1743)
static void C_ccall f_1743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1750)
static void C_ccall f_1750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1686)
static void C_fcall f_1686(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1693)
static void C_fcall f_1693(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1710)
static void C_ccall f_1710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1723)
static void C_ccall f_1723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1716)
static void C_ccall f_1716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1719)
static void C_ccall f_1719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1703)
static void C_ccall f_1703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1637)
static void C_fcall f_1637(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1645)
static void C_fcall f_1645(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1659)
static void C_ccall f_1659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1665)
static void C_ccall f_1665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1668)
static void C_ccall f_1668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1671)
static void C_ccall f_1671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1514)
static void C_ccall f_1514(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1514)
static void C_ccall f_1514r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1524)
static void C_ccall f_1524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1527)
static void C_ccall f_1527(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_5671)
static void C_fcall trf_5671(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5671(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5671(t0,t1,t2);}

C_noret_decl(trf_5698)
static void C_fcall trf_5698(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5698(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5698(t0,t1);}

C_noret_decl(trf_4841)
static void C_fcall trf_4841(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4841(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4841(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5593)
static void C_fcall trf_5593(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5593(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5593(t0,t1,t2);}

C_noret_decl(trf_5601)
static void C_fcall trf_5601(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5601(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5601(t0,t1,t2);}

C_noret_decl(trf_5475)
static void C_fcall trf_5475(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5475(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5475(t0,t1,t2,t3);}

C_noret_decl(trf_5488)
static void C_fcall trf_5488(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5488(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5488(t0,t1);}

C_noret_decl(trf_5506)
static void C_fcall trf_5506(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5506(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5506(t0,t1,t2,t3);}

C_noret_decl(trf_5363)
static void C_fcall trf_5363(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5363(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5363(t0,t1);}

C_noret_decl(trf_5268)
static void C_fcall trf_5268(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5268(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5268(t0,t1,t2);}

C_noret_decl(trf_5125)
static void C_fcall trf_5125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5125(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5125(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4951)
static void C_fcall trf_4951(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4951(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4951(t0,t1);}

C_noret_decl(trf_5026)
static void C_fcall trf_5026(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5026(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5026(t0,t1);}

C_noret_decl(trf_4959)
static void C_fcall trf_4959(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4959(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4959(t0,t1,t2,t3);}

C_noret_decl(trf_4972)
static void C_fcall trf_4972(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4972(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4972(t0,t1);}

C_noret_decl(trf_4990)
static void C_fcall trf_4990(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4990(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4990(t0,t1,t2,t3);}

C_noret_decl(trf_4548)
static void C_fcall trf_4548(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4548(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4548(t0,t1,t2,t3);}

C_noret_decl(trf_4581)
static void C_fcall trf_4581(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4581(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4581(t0,t1);}

C_noret_decl(trf_4583)
static void C_fcall trf_4583(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4583(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4583(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4644)
static void C_fcall trf_4644(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4644(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4644(t0,t1);}

C_noret_decl(trf_4613)
static void C_fcall trf_4613(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4613(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4613(t0,t1);}

C_noret_decl(trf_4152)
static void C_fcall trf_4152(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4152(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4152(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4439)
static void C_fcall trf_4439(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4439(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4439(t0,t1);}

C_noret_decl(trf_4283)
static void C_fcall trf_4283(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4283(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4283(t0,t1,t2,t3,t4);}

C_noret_decl(trf_4741)
static void C_fcall trf_4741(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4741(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4741(t0,t1);}

C_noret_decl(trf_4743)
static void C_fcall trf_4743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4743(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4743(t0,t1,t2);}

C_noret_decl(trf_4155)
static void C_fcall trf_4155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4155(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4155(t0,t1);}

C_noret_decl(trf_4181)
static void C_fcall trf_4181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4181(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4181(t0,t1);}

C_noret_decl(trf_4132)
static void C_fcall trf_4132(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4132(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4132(t0,t1,t2);}

C_noret_decl(trf_4078)
static void C_fcall trf_4078(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4078(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4078(t0,t1);}

C_noret_decl(trf_4087)
static void C_fcall trf_4087(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4087(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4087(t0,t1,t2,t3);}

C_noret_decl(trf_3957)
static void C_fcall trf_3957(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3957(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3957(t0,t1,t2);}

C_noret_decl(trf_4023)
static void C_fcall trf_4023(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4023(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4023(t0,t1,t2);}

C_noret_decl(trf_3960)
static void C_fcall trf_3960(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3960(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3960(t0,t1);}

C_noret_decl(trf_3947)
static void C_fcall trf_3947(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3947(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3947(t0,t1,t2,t3);}

C_noret_decl(trf_3866)
static void C_fcall trf_3866(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3866(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3866(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3526)
static void C_fcall trf_3526(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3526(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3526(t0,t1,t2,t3);}

C_noret_decl(trf_3633)
static void C_fcall trf_3633(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3633(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3633(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3649)
static void C_fcall trf_3649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3649(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3649(t0,t1);}

C_noret_decl(trf_3654)
static void C_fcall trf_3654(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3654(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3654(t0,t1,t2,t3);}

C_noret_decl(trf_3471)
static void C_fcall trf_3471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3471(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3471(t0,t1,t2,t3);}

C_noret_decl(trf_3261)
static void C_fcall trf_3261(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3261(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3261(t0,t1,t2,t3);}

C_noret_decl(trf_3326)
static void C_fcall trf_3326(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3326(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3326(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3267)
static void C_fcall trf_3267(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3267(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3267(t0,t1,t2,t3);}

C_noret_decl(trf_2989)
static void C_fcall trf_2989(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2989(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2989(t0,t1,t2,t3);}

C_noret_decl(trf_3076)
static void C_fcall trf_3076(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3076(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3076(t0,t1);}

C_noret_decl(trf_3095)
static void C_fcall trf_3095(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3095(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3095(t0,t1);}

C_noret_decl(trf_3132)
static void C_fcall trf_3132(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3132(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3132(t0,t1);}

C_noret_decl(trf_2980)
static void C_fcall trf_2980(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2980(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2980(t0,t1,t2,t3);}

C_noret_decl(trf_2914)
static void C_fcall trf_2914(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2914(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2914(t0,t1,t2,t3);}

C_noret_decl(trf_2712)
static void C_fcall trf_2712(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2712(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2712(t0,t1,t2,t3);}

C_noret_decl(trf_2808)
static void C_fcall trf_2808(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2808(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2808(t0,t1);}

C_noret_decl(trf_2747)
static void C_fcall trf_2747(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2747(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2747(t0,t1);}

C_noret_decl(trf_2182)
static void C_fcall trf_2182(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2182(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2182(t0,t1,t2);}

C_noret_decl(trf_2594)
static void C_fcall trf_2594(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2594(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2594(t0,t1,t2);}

C_noret_decl(trf_2551)
static void C_fcall trf_2551(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2551(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2551(t0,t1,t2);}

C_noret_decl(trf_2479)
static void C_fcall trf_2479(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2479(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2479(t0,t1);}

C_noret_decl(trf_2379)
static void C_fcall trf_2379(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2379(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2379(t0,t1,t2,t3);}

C_noret_decl(trf_2260)
static void C_fcall trf_2260(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2260(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2260(t0,t1);}

C_noret_decl(trf_2173)
static void C_fcall trf_2173(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2173(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2173(t0,t1,t2);}

C_noret_decl(trf_2086)
static void C_fcall trf_2086(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2086(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2086(t0,t1,t2);}

C_noret_decl(trf_2138)
static void C_fcall trf_2138(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2138(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2138(t0,t1,t2);}

C_noret_decl(trf_2005)
static void C_fcall trf_2005(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2005(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2005(t0,t1,t2);}

C_noret_decl(trf_2051)
static void C_fcall trf_2051(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2051(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2051(t0,t1,t2);}

C_noret_decl(trf_1825)
static void C_fcall trf_1825(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1825(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1825(t0,t1,t2);}

C_noret_decl(trf_1942)
static void C_fcall trf_1942(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1942(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1942(t0,t1,t2);}

C_noret_decl(trf_1871)
static void C_fcall trf_1871(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1871(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1871(t0,t1);}

C_noret_decl(trf_1784)
static void C_fcall trf_1784(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1784(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1784(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1759)
static void C_fcall trf_1759(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1759(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1759(t0,t1);}

C_noret_decl(trf_1679)
static void C_fcall trf_1679(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1679(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1679(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1686)
static void C_fcall trf_1686(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1686(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1686(t0,t1);}

C_noret_decl(trf_1693)
static void C_fcall trf_1693(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1693(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1693(t0,t1,t2);}

C_noret_decl(trf_1637)
static void C_fcall trf_1637(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1637(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1637(t0,t1,t2,t3);}

C_noret_decl(trf_1645)
static void C_fcall trf_1645(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1645(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1645(t0,t1,t2);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

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
C_scrutinizer_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_scrutinizer_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("scrutinizer_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1496)){
C_save(t1);
C_rereclaim2(1496*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,190);
lf[0]=C_h_intern(&lf[0],1,"d");
lf[1]=C_h_intern(&lf[1],19,"\003sysstandard-output");
lf[2]=C_h_intern(&lf[2],19,"\003syswrite-char/port");
lf[3]=C_h_intern(&lf[3],7,"fprintf");
lf[4]=C_h_intern(&lf[4],7,"display");
lf[5]=C_decode_literal(C_heaptop,"\376B\000\000\010[debug] ");
lf[6]=C_h_intern(&lf[6],19,"\010compilerscrutinize");
lf[7]=C_h_intern(&lf[7],10,"deprecated");
lf[8]=C_h_intern(&lf[8],1,"*");
lf[9]=C_h_intern(&lf[9],17,"get-output-string");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\047use of deprecated toplevel identifier `");
lf[11]=C_h_intern(&lf[11],18,"open-output-string");
lf[12]=C_h_intern(&lf[12],7,"\003sysget");
lf[13]=C_h_intern(&lf[13],9,"\004coretype");
lf[14]=C_h_intern(&lf[14],9,"undefined");
lf[15]=C_decode_literal(C_heaptop,"\376B\000\000\036\047 which has an undefined value");
lf[16]=C_h_intern(&lf[16],18,"\010compilerreal-name");
lf[17]=C_decode_literal(C_heaptop,"\376B\000\000\024access to variable `");
lf[18]=C_h_intern(&lf[18],18,"\004coredeclared-type");
lf[19]=C_h_intern(&lf[19],12,"\010compilerget");
lf[20]=C_h_intern(&lf[20],8,"assigned");
lf[21]=C_h_intern(&lf[21],5,"every");
lf[22]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\007boolean\376\003\000\000\002\376\001\000\000\011undefined\376\003\000\000\002\376\001\000\000\010noreturn\376\377\016");
lf[23]=C_h_intern(&lf[23],2,"or");
lf[24]=C_decode_literal(C_heaptop,"\376B\000\000\027\047 which is always true:");
lf[25]=C_decode_literal(C_heaptop,"\376B\000\000Nexpected value of type boolean in conditional but were given a value of\012typ"
"e `");
lf[26]=C_decode_literal(C_heaptop,"\376B\000\000\010anything");
lf[27]=C_h_intern(&lf[27],4,"char");
lf[28]=C_decode_literal(C_heaptop,"\376B\000\000\011character");
lf[29]=C_h_intern(&lf[29],14,"symbol->string");
lf[30]=C_h_intern(&lf[30],9,"procedure");
lf[31]=C_h_intern(&lf[31],8,"->string");
lf[32]=C_decode_literal(C_heaptop,"\376B\000\000\013 returning ");
lf[33]=C_decode_literal(C_heaptop,"\376B\000\000\021a procedure with ");
lf[34]=C_h_intern(&lf[34],18,"string-intersperse");
lf[35]=C_decode_literal(C_heaptop,"\376B\000\000\004 OR ");
lf[36]=C_h_intern(&lf[36],6,"struct");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\024a structure of type ");
lf[38]=C_h_intern(&lf[38],13,"\010compilerbomb");
lf[39]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid type: ~a");
lf[40]=C_decode_literal(C_heaptop,"\376B\000\000\020invalid type: ~a");
lf[41]=C_h_intern(&lf[41],3,"len");
lf[42]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\001s");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\016zero arguments");
lf[45]=C_decode_literal(C_heaptop,"\376B\000\000\010 of type");
lf[46]=C_decode_literal(C_heaptop,"\376B\000\000\011 argument");
lf[47]=C_decode_literal(C_heaptop,"\376B\000\000\033an unknown number of values");
lf[48]=C_decode_literal(C_heaptop,"\376B\000\000\013zero values");
lf[49]=C_decode_literal(C_heaptop,"\376B\000\000\010 of type");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\006 value");
lf[51]=C_h_intern(&lf[51],19,"\003sysundefined-value");
lf[52]=C_h_intern(&lf[52],6,"append");
lf[53]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\011procedure\376\377\016");
lf[54]=C_h_intern(&lf[54],6,"reduce");
lf[55]=C_h_intern(&lf[55],3,"eq\077");
lf[56]=C_h_intern(&lf[56],3,"any");
lf[57]=C_h_intern(&lf[57],10,"\003sysappend");
lf[58]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\377\016");
lf[59]=C_h_intern(&lf[59],7,"reverse");
lf[60]=C_h_intern(&lf[60],10,"append-map");
lf[61]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\011procedure\376\377\016");
lf[62]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\011procedure\376\377\016");
lf[63]=C_h_intern(&lf[63],7,"call/cc");
lf[64]=C_h_intern(&lf[64],6,"values");
lf[65]=C_h_intern(&lf[65],6,"#!rest");
lf[66]=C_h_intern(&lf[66],10,"#!optional");
lf[67]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006#!rest\376\377\016");
lf[68]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006#!rest\376\377\016");
lf[69]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006#!rest\376\377\016");
lf[70]=C_h_intern(&lf[70],8,"noreturn");
lf[71]=C_h_intern(&lf[71],6,"number");
lf[72]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006number\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\005float\376\377\016");
lf[73]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006number\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\005float\376\377\016");
lf[74]=C_h_intern(&lf[74],4,"pair");
lf[75]=C_h_intern(&lf[75],4,"list");
lf[76]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\004pair\376\003\000\000\002\376\001\000\000\004list\376\377\016");
lf[77]=C_h_intern(&lf[77],4,"null");
lf[78]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\004null\376\003\000\000\002\376\001\000\000\004list\376\377\016");
lf[79]=C_h_intern(&lf[79],5,"break");
lf[80]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006#!rest\376\003\000\000\002\376\001\000\000\012#!optional\376\377\016");
lf[81]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006#!rest\376\003\000\000\002\376\001\000\000\012#!optional\376\377\016");
lf[82]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\011undefined\376\377\016");
lf[83]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\004null\376\003\000\000\002\376\001\000\000\004pair\376\377\016");
lf[84]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006fixnum\376\003\000\000\002\376\001\000\000\005float\376\377\016");
lf[85]=C_decode_literal(C_heaptop,"\376B\000\000- a single result, but were given zero results");
lf[86]=C_decode_literal(C_heaptop,"\376B\000\000\011expected ");
lf[87]=C_decode_literal(C_heaptop,"\376B\000\000\007 result");
lf[88]=C_decode_literal(C_heaptop,"\376B\000\000! a single result, but were given ");
lf[89]=C_decode_literal(C_heaptop,"\376B\000\000\011expected ");
lf[90]=C_h_intern(&lf[90],25,"\010compilercompiler-warning");
lf[91]=C_h_intern(&lf[91],8,"scrutiny");
lf[92]=C_decode_literal(C_heaptop,"\376B\000\000\004~a~a");
lf[93]=C_decode_literal(C_heaptop,"\376B\000\000\013procedure `");
lf[94]=C_decode_literal(C_heaptop,"\376B\000\000\021unknown procedure");
lf[95]=C_decode_literal(C_heaptop,"\376B\000\000\017at toplevel:\012  ");
lf[96]=C_decode_literal(C_heaptop,"\376B\000\000\004:\012  ");
lf[97]=C_decode_literal(C_heaptop,"\376B\000\000\014in toplevel ");
lf[98]=C_decode_literal(C_heaptop,"\376B\000\000\004,\012  ");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\011in local ");
lf[100]=C_h_intern(&lf[100],4,"cons");
lf[101]=C_h_intern(&lf[101],3,"...");
lf[102]=C_h_intern(&lf[102],7,"\003sysmap");
lf[103]=C_h_intern(&lf[103],4,"take");
lf[104]=C_h_intern(&lf[104],3,"min");
lf[105]=C_h_intern(&lf[105],30,"\010compilerbuild-expression-tree");
lf[106]=C_h_intern(&lf[106],12,"string-chomp");
lf[107]=C_h_intern(&lf[107],2,"pp");
lf[108]=C_h_intern(&lf[108],21,"with-output-to-string");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\007 (line ");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[111]=C_h_intern(&lf[111],26,"\010compilersource-info->line");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[113]=C_h_intern(&lf[113],5,"write");
lf[114]=C_decode_literal(C_heaptop,"\376B\000\000\026in procedure call to `");
lf[115]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\011procedure\376\377\016");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\030not a procedure type: ~a");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\047, but where given an argument of type `");
lf[118]=C_decode_literal(C_heaptop,"\376B\000\000\002\047 ");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\012 of type `");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\023expected argument #");
lf[121]=C_decode_literal(C_heaptop,"\376B\000\000\011 argument");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\022, but where given ");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\011 argument");
lf[124]=C_decode_literal(C_heaptop,"\376B\000\000\011expected ");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000#\047, but were given a value of type `");
lf[126]=C_decode_literal(C_heaptop,"\376B\000\000\022 a value of type `");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\011expected ");
lf[128]=C_h_intern(&lf[128],9,"make-list");
lf[129]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\003\000\000\002\376\001\000\000\011procedure\376\377\016");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\024not a procedure type");
lf[131]=C_h_intern(&lf[131],5,"quote");
lf[132]=C_h_intern(&lf[132],6,"string");
lf[133]=C_h_intern(&lf[133],6,"symbol");
lf[134]=C_h_intern(&lf[134],6,"fixnum");
lf[135]=C_h_intern(&lf[135],5,"float");
lf[136]=C_h_intern(&lf[136],7,"boolean");
lf[137]=C_h_intern(&lf[137],3,"eof");
lf[138]=C_h_intern(&lf[138],6,"vector");
lf[139]=C_h_intern(&lf[139],22,"\003sysgeneric-structure\077");
lf[140]=C_h_intern(&lf[140],14,"\004coreundefined");
lf[141]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\001*\376\377\016");
lf[142]=C_h_intern(&lf[142],9,"\004coreproc");
lf[143]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\011procedure\376\377\016");
lf[144]=C_h_intern(&lf[144],15,"\004coreglobal-ref");
lf[145]=C_h_intern(&lf[145],13,"\004corevariable");
lf[146]=C_h_intern(&lf[146],2,"if");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000Cbranches in conditional expression differ in the number of results:");
lf[148]=C_decode_literal(C_heaptop,"\376B\000\000\016in conditional");
lf[149]=C_h_intern(&lf[149],3,"let");
lf[150]=C_h_intern(&lf[150],10,"alist-cons");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\025in `let\047 binding of `");
lf[152]=C_h_intern(&lf[152],11,"\004corelambda");
lf[153]=C_h_intern(&lf[153],6,"lambda");
lf[154]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\011procedure\376\377\016");
lf[155]=C_h_intern(&lf[155],7,"butlast");
lf[156]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\006#!rest\376\377\016");
lf[157]=C_h_intern(&lf[157],30,"\010compilerdecompose-lambda-list");
lf[158]=C_h_intern(&lf[158],4,"set!");
lf[159]=C_h_intern(&lf[159],9,"\004coreset!");
lf[160]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\011undefined\376\377\016");
lf[161]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\011undefined\376\377\016");
lf[162]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\001\000\000\011undefined\376\377\016");
lf[163]=C_decode_literal(C_heaptop,"\376B\000\000 \047 does not match declared type `");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\030\047 to toplevel variable `");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\035assignment of value of type `");
lf[166]=C_decode_literal(C_heaptop,"\376B\000\000\022in assignment to `");
lf[167]=C_h_intern(&lf[167],14,"\004coreprimitive");
lf[168]=C_h_intern(&lf[168],15,"\004coreinline_ref");
lf[169]=C_h_intern(&lf[169],9,"\004corecall");
lf[170]=C_decode_literal(C_heaptop,"\376B\000\000\024 of procedure call `");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\021operator position");
lf[172]=C_decode_literal(C_heaptop,"\376B\000\000\012argument #");
lf[173]=C_decode_literal(C_heaptop,"\376B\000\000\003in ");
lf[174]=C_h_intern(&lf[174],4,"iota");
lf[175]=C_h_intern(&lf[175],11,"\004coreswitch");
lf[176]=C_h_intern(&lf[176],9,"\004corecond");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\031unexpected node class: ~a");
lf[178]=C_h_intern(&lf[178],27,"\010compilerload-type-database");
lf[179]=C_h_intern(&lf[179],8,"\003sysput!");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000Ytype-definition `~a\047 for toplevel binding `~a\047 conflicts with previously lo"
"aded type `~a\047");
lf[181]=C_h_intern(&lf[181],9,"read-file");
lf[182]=C_h_intern(&lf[182],21,"\010compilerverbose-mode");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\004 ...");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\026loading type database ");
lf[185]=C_h_intern(&lf[185],12,"file-exists\077");
lf[186]=C_h_intern(&lf[186],13,"make-pathname");
lf[187]=C_h_intern(&lf[187],15,"repository-path");
lf[188]=C_h_intern(&lf[188],9,"\003syserror");
lf[189]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
C_register_lf2(lf,190,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1509,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1507 */
static void C_ccall f_1509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1509,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1512,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1510 in k1507 */
static void C_ccall f_1512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1512,2,t0,t1);}
t2=C_mutate((C_word*)lf[0]+1 /* (set! d ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1514,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate((C_word*)lf[6]+1 /* (set! scrutinize ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1532,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[178]+1 /* (set! load-type-database ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5649,tmp=(C_word)a,a+=2,tmp));
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}

/* ##compiler#load-type-database in k1510 in k1507 */
static void C_ccall f_5649(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_5649r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5649r(t0,t1,t2,t3);}}

static void C_ccall f_5649r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5653,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* scrutinizer.scm: 613  repository-path */
((C_proc2)C_retrieve_symbol_proc(lf[187]))(2,*((C_word*)lf[187]+1),t4);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_5653(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[188]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[189],t3);}}}

/* k5651 in ##compiler#load-type-database in k1510 in k1507 */
static void C_ccall f_5653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5653,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5656,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5738,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm: 614  make-pathname */
((C_proc4)C_retrieve_symbol_proc(lf[186]))(4,*((C_word*)lf[186]+1),t3,t1,((C_word*)t0)[2]);}

/* k5736 in k5651 in ##compiler#load-type-database in k1510 in k1507 */
static void C_ccall f_5738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 614  file-exists? */
((C_proc3)C_retrieve_symbol_proc(lf[185]))(3,*((C_word*)lf[185]+1),((C_word*)t0)[2],t1);}

/* k5654 in k5651 in ##compiler#load-type-database in k1510 in k1507 */
static void C_ccall f_5656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5656,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5662,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve(lf[182]))){
t3=*((C_word*)lf[1]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5725,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t4,lf[184],t3);}
else{
t3=t2;
f_5662(2,t3,C_SCHEME_UNDEFINED);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5723 in k5654 in k5651 in ##compiler#load-type-database in k1510 in k1507 */
static void C_ccall f_5725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5728,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5726 in k5723 in k5654 in k5651 in ##compiler#load-type-database in k1510 in k1507 */
static void C_ccall f_5728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5731,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[183],((C_word*)t0)[2]);}

/* k5729 in k5726 in k5723 in k5654 in k5651 in ##compiler#load-type-database in k1510 in k1507 */
static void C_ccall f_5731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k5660 in k5654 in k5651 in ##compiler#load-type-database in k1510 in k1507 */
static void C_ccall f_5662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5662,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5669,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm: 628  read-file */
((C_proc3)C_retrieve_symbol_proc(lf[181]))(3,*((C_word*)lf[181]+1),t2,((C_word*)t0)[2]);}

/* k5667 in k5660 in k5654 in k5651 in ##compiler#load-type-database in k1510 in k1507 */
static void C_ccall f_5669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5669,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5671,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_5671(t5,((C_word*)t0)[2],t1);}

/* loop1475 in k5667 in k5660 in k5654 in k5651 in ##compiler#load-type-database in k1510 in k1507 */
static void C_fcall f_5671(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5671,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5711,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5686,a[2]=t5,a[3]=t3,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* scrutinizer.scm: 620  ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t6,t5,lf[13]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5684 in loop1475 in k5667 in k5660 in k5654 in k5651 in ##compiler#load-type-database in k1510 in k1507 */
static void C_ccall f_5686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5686,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5692,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5698,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t5=(C_word)C_i_equalp(t1,t2);
t6=t4;
f_5698(t6,(C_word)C_i_not(t5));}
else{
t5=t4;
f_5698(t5,C_SCHEME_FALSE);}}

/* k5696 in k5684 in loop1475 in k5667 in k5660 in k5654 in k5651 in ##compiler#load-type-database in k1510 in k1507 */
static void C_fcall f_5698(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* scrutinizer.scm: 623  compiler-warning */
((C_proc7)C_retrieve_symbol_proc(lf[90]))(7,*((C_word*)lf[90]+1),((C_word*)t0)[6],lf[91],lf[180],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
/* scrutinizer.scm: 627  ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[179]))(5,*((C_word*)lf[179]+1),((C_word*)t0)[2],((C_word*)t0)[5],lf[13],((C_word*)t0)[4]);}}

/* k5690 in k5684 in loop1475 in k5667 in k5660 in k5654 in k5651 in ##compiler#load-type-database in k1510 in k1507 */
static void C_ccall f_5692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 627  ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[179]))(5,*((C_word*)lf[179]+1),((C_word*)t0)[4],((C_word*)t0)[3],lf[13],((C_word*)t0)[2]);}

/* k5709 in loop1475 in k5667 in k5660 in k5654 in k5651 in ##compiler#load-type-database in k1510 in k1507 */
static void C_ccall f_5711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5671(t3,((C_word*)t0)[2],t2);}

/* ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1532(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[174],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1532,4,t0,t1,t2,t3);}
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
t40=C_SCHEME_UNDEFINED;
t41=(*a=C_VECTOR_TYPE|1,a[1]=t40,tmp=(C_word)a,a+=2,tmp);
t42=C_SCHEME_UNDEFINED;
t43=(*a=C_VECTOR_TYPE|1,a[1]=t42,tmp=(C_word)a,a+=2,tmp);
t44=C_SCHEME_UNDEFINED;
t45=(*a=C_VECTOR_TYPE|1,a[1]=t44,tmp=(C_word)a,a+=2,tmp);
t46=C_SCHEME_UNDEFINED;
t47=(*a=C_VECTOR_TYPE|1,a[1]=t46,tmp=(C_word)a,a+=2,tmp);
t48=C_SCHEME_UNDEFINED;
t49=(*a=C_VECTOR_TYPE|1,a[1]=t48,tmp=(C_word)a,a+=2,tmp);
t50=C_SCHEME_UNDEFINED;
t51=(*a=C_VECTOR_TYPE|1,a[1]=t50,tmp=(C_word)a,a+=2,tmp);
t52=C_SCHEME_UNDEFINED;
t53=(*a=C_VECTOR_TYPE|1,a[1]=t52,tmp=(C_word)a,a+=2,tmp);
t54=C_SCHEME_UNDEFINED;
t55=(*a=C_VECTOR_TYPE|1,a[1]=t54,tmp=(C_word)a,a+=2,tmp);
t56=C_SCHEME_UNDEFINED;
t57=(*a=C_VECTOR_TYPE|1,a[1]=t56,tmp=(C_word)a,a+=2,tmp);
t58=C_SCHEME_UNDEFINED;
t59=(*a=C_VECTOR_TYPE|1,a[1]=t58,tmp=(C_word)a,a+=2,tmp);
t60=C_SCHEME_UNDEFINED;
t61=(*a=C_VECTOR_TYPE|1,a[1]=t60,tmp=(C_word)a,a+=2,tmp);
t62=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1637,a[2]=t43,tmp=(C_word)a,a+=3,tmp));
t63=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1679,a[2]=t5,a[3]=t3,a[4]=t43,tmp=(C_word)a,a+=5,tmp));
t64=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1752,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t65=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1784,a[2]=t9,a[3]=t51,a[4]=t43,tmp=(C_word)a,a+=5,tmp));
t66=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1825,a[2]=t13,a[3]=t15,a[4]=t17,tmp=(C_word)a,a+=5,tmp));
t67=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2005,a[2]=t13,tmp=(C_word)a,a+=3,tmp));
t68=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2086,a[2]=t13,tmp=(C_word)a,a+=3,tmp));
t69=C_set_block_item(t19,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2173,a[2]=t21,tmp=(C_word)a,a+=3,tmp));
t70=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2182,a[2]=t55,a[3]=t39,a[4]=t27,a[5]=t29,a[6]=t23,a[7]=t19,tmp=(C_word)a,a+=8,tmp));
t71=C_set_block_item(t23,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2650,tmp=(C_word)a,a+=2,tmp));
t72=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2690,tmp=(C_word)a,a+=2,tmp));
t73=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2712,a[2]=t27,a[3]=t19,a[4]=t25,tmp=(C_word)a,a+=5,tmp));
t74=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2914,a[2]=t19,a[3]=t29,tmp=(C_word)a,a+=4,tmp));
t75=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2980,a[2]=t33,tmp=(C_word)a,a+=3,tmp));
t76=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2989,a[2]=t35,a[3]=t37,a[4]=t23,a[5]=t31,tmp=(C_word)a,a+=6,tmp));
t77=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3261,a[2]=t31,a[3]=t25,tmp=(C_word)a,a+=4,tmp));
t78=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3471,a[2]=t31,a[3]=t37,tmp=(C_word)a,a+=4,tmp));
t79=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3526,a[2]=t39,tmp=(C_word)a,a+=3,tmp));
t80=C_set_block_item(t41,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3866,a[2]=t43,tmp=(C_word)a,a+=3,tmp));
t81=C_set_block_item(t43,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3947,a[2]=t45,tmp=(C_word)a,a+=3,tmp));
t82=C_set_block_item(t45,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3957,a[2]=t45,tmp=(C_word)a,a+=3,tmp));
t83=C_set_block_item(t47,0,*((C_word*)lf[100]+1));
t84=C_set_block_item(t49,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4078,tmp=(C_word)a,a+=2,tmp));
t85=C_set_block_item(t51,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4132,a[2]=t49,tmp=(C_word)a,a+=3,tmp));
t86=C_set_block_item(t53,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4152,a[2]=t55,a[3]=t31,a[4]=t43,a[5]=t57,a[6]=t49,tmp=(C_word)a,a+=7,tmp));
t87=C_set_block_item(t55,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4506,a[2]=t55,tmp=(C_word)a,a+=3,tmp));
t88=C_set_block_item(t57,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4548,a[2]=t25,tmp=(C_word)a,a+=3,tmp));
t89=C_set_block_item(t59,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4809,a[2]=t59,tmp=(C_word)a,a+=3,tmp));
t90=C_set_block_item(t61,0,(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4841,a[2]=t49,a[3]=t53,a[4]=t31,a[5]=t47,a[6]=t41,a[7]=t11,a[8]=t61,a[9]=t59,a[10]=t51,a[11]=t43,a[12]=t19,a[13]=t7,a[14]=t5,tmp=(C_word)a,a+=15,tmp));
t91=(C_word)C_slot(t2,C_fix(3));
t92=(C_word)C_i_car(t91);
/* scrutinizer.scm: 611  walk */
t93=((C_word*)t61)[1];
f_4841(t93,t1,t92,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4841(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
a=C_alloc(23);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4841,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=t2;
t7=(C_word)C_slot(t6,C_fix(3));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(2));
t10=t2;
t11=(C_word)C_slot(t10,C_fix(1));
t12=C_retrieve(lf[51]);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4872,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t14=(C_word)C_eqp(t11,lf[131]);
if(C_truep(t14)){
t15=(C_word)C_i_car(t9);
if(C_truep((C_word)C_i_stringp(t15))){
t16=(C_word)C_a_i_list(&a,1,lf[132]);
t17=C_retrieve(lf[51]);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t16);}
else{
if(C_truep((C_word)C_i_symbolp(t15))){
t16=(C_word)C_a_i_list(&a,1,lf[133]);
t17=C_retrieve(lf[51]);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t16);}
else{
if(C_truep((C_word)C_fixnump(t15))){
t16=(C_word)C_a_i_list(&a,1,lf[134]);
t17=C_retrieve(lf[51]);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t16);}
else{
if(C_truep((C_word)C_i_flonump(t15))){
t16=(C_word)C_a_i_list(&a,1,lf[135]);
t17=C_retrieve(lf[51]);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t16);}
else{
if(C_truep((C_word)C_i_numberp(t15))){
t16=(C_word)C_a_i_list(&a,1,lf[71]);
t17=C_retrieve(lf[51]);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t16);}
else{
if(C_truep((C_word)C_booleanp(t15))){
t16=(C_word)C_a_i_list(&a,1,lf[136]);
t17=C_retrieve(lf[51]);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t16);}
else{
if(C_truep((C_word)C_i_listp(t15))){
t16=(C_word)C_a_i_list(&a,1,lf[75]);
t17=C_retrieve(lf[51]);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t16);}
else{
if(C_truep((C_word)C_i_pairp(t15))){
t16=(C_word)C_a_i_list(&a,1,lf[74]);
t17=C_retrieve(lf[51]);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t16);}
else{
if(C_truep((C_word)C_eofp(t15))){
t16=(C_word)C_a_i_list(&a,1,lf[137]);
t17=C_retrieve(lf[51]);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t16);}
else{
if(C_truep((C_word)C_i_vectorp(t15))){
t16=(C_word)C_a_i_list(&a,1,lf[138]);
t17=C_retrieve(lf[51]);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t16);}
else{
t16=(C_word)C_immp(t15);
t17=(C_truep(t16)?C_SCHEME_FALSE:(C_truep(*((C_word*)lf[139]+1))?t15:C_SCHEME_FALSE));
if(C_truep(t17)){
t18=(C_word)C_slot(t15,C_fix(0));
t19=(C_word)C_a_i_cons(&a,2,t18,C_SCHEME_END_OF_LIST);
t20=(C_word)C_a_i_cons(&a,2,lf[36],t19);
t21=(C_word)C_a_i_list(&a,1,t20);
t22=C_retrieve(lf[51]);
t23=t1;
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,t21);}
else{
if(C_truep((C_word)C_i_nullp(t15))){
t18=(C_word)C_a_i_list(&a,1,lf[77]);
t19=C_retrieve(lf[51]);
t20=t1;
((C_proc2)(void*)(*((C_word*)t20+1)))(2,t20,t18);}
else{
t18=(C_word)C_charp(t15);
t19=(C_truep(t18)?(C_word)C_a_i_list(&a,1,lf[27]):(C_word)C_a_i_list(&a,1,lf[8]));
t20=C_retrieve(lf[51]);
t21=t1;
((C_proc2)(void*)(*((C_word*)t21+1)))(2,t21,t19);}}}}}}}}}}}}}
else{
t15=(C_word)C_eqp(t11,lf[140]);
if(C_truep(t15)){
t16=C_retrieve(lf[51]);
t17=t1;
((C_proc2)(void*)(*((C_word*)t17+1)))(2,t17,lf[141]);}
else{
t16=(C_word)C_eqp(t11,lf[142]);
if(C_truep(t16)){
t17=C_retrieve(lf[51]);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,lf[143]);}
else{
t17=(C_word)C_eqp(t11,lf[144]);
if(C_truep(t17)){
t18=(C_word)C_i_car(t9);
/* scrutinizer.scm: 525  global-result */
t19=((C_word*)((C_word*)t0)[14])[1];
f_1637(t19,t13,t18,t4);}
else{
t18=(C_word)C_eqp(t11,lf[145]);
if(C_truep(t18)){
t19=(C_word)C_i_car(t9);
/* scrutinizer.scm: 526  variable-result */
t20=((C_word*)((C_word*)t0)[13])[1];
f_1679(t20,t13,t19,t3,t4);}
else{
t19=(C_word)C_eqp(t11,lf[146]);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_4936,a[2]=((C_word*)t0)[7],a[3]=t5,a[4]=t3,a[5]=((C_word*)t0)[8],a[6]=t7,a[7]=t1,a[8]=((C_word*)t0)[9],a[9]=t2,a[10]=((C_word*)t0)[10],a[11]=t4,a[12]=((C_word*)t0)[11],a[13]=t13,a[14]=((C_word*)t0)[12],tmp=(C_word)a,a+=15,tmp);
t21=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5110,a[2]=t4,a[3]=t20,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t22=(C_word)C_i_car(t7);
/* scrutinizer.scm: 527  walk */
t84=t21;
t85=t22;
t86=t3;
t87=t4;
t88=t5;
t1=t84;
t2=t85;
t3=t86;
t4=t87;
t5=t88;
goto loop;}
else{
t20=(C_word)C_eqp(t11,lf[149]);
if(C_truep(t20)){
t21=C_SCHEME_UNDEFINED;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_set_block_item(t22,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5125,a[2]=((C_word*)t0)[6],a[3]=t22,a[4]=t3,a[5]=t5,a[6]=t4,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp));
t24=((C_word*)t22)[1];
f_5125(t24,t13,t9,t7,C_SCHEME_END_OF_LIST);}
else{
t21=(C_word)C_eqp(t11,lf[152]);
t22=(C_truep(t21)?t21:(C_word)C_eqp(t11,lf[153]));
if(C_truep(t22)){
t23=(C_word)C_i_car(t9);
t24=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5219,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=t7,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* scrutinizer.scm: 553  decompose-lambda-list */
((C_proc4)C_retrieve_symbol_proc(lf[157]))(4,*((C_word*)lf[157]+1),t13,t23,t24);}
else{
t23=(C_word)C_eqp(t11,lf[158]);
t24=(C_truep(t23)?t23:(C_word)C_eqp(t11,lf[159]));
if(C_truep(t24)){
t25=(C_word)C_i_car(t9);
t26=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5335,a[2]=((C_word*)t0)[8],a[3]=t7,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=((C_word*)t0)[11],a[8]=t1,a[9]=t3,a[10]=t25,tmp=(C_word)a,a+=11,tmp);
/* scrutinizer.scm: 573  ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t26,t25,lf[13]);}
else{
t25=(C_word)C_eqp(t11,lf[167]);
t26=(C_truep(t25)?t25:(C_word)C_eqp(t11,lf[168]));
if(C_truep(t26)){
t27=C_retrieve(lf[51]);
t28=t1;
((C_proc2)(void*)(*((C_word*)t28+1)))(2,t28,lf[8]);}
else{
t27=(C_word)C_eqp(t11,lf[169]);
if(C_truep(t27)){
t28=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5459,a[2]=t3,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[6],a[5]=t9,a[6]=t4,a[7]=t13,a[8]=((C_word*)t0)[3],a[9]=t7,tmp=(C_word)a,a+=10,tmp);
/* scrutinizer.scm: 592  fragment */
f_4078(t28,t2);}
else{
t28=(C_word)C_eqp(t11,lf[175]);
t29=(C_truep(t28)?t28:(C_word)C_eqp(t11,lf[176]));
if(C_truep(t29)){
/* scrutinizer.scm: 605  bomb */
((C_proc4)C_retrieve_symbol_proc(lf[38]))(4,*((C_word*)lf[38]+1),t13,lf[177],t11);}
else{
t30=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5591,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t31=C_SCHEME_UNDEFINED;
t32=(*a=C_VECTOR_TYPE|1,a[1]=t31,tmp=(C_word)a,a+=2,tmp);
t33=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5593,a[2]=t32,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp));
t34=((C_word*)t32)[1];
f_5593(t34,t30,t7);}}}}}}}}}}}}}

/* loop1395 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_5593(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5593,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5601,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5608,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g14021403 */
t6=t3;
f_5601(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5606 in loop1395 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_5593(t3,((C_word*)t0)[2],t2);}

/* g1402 in loop1395 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_5601(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5601,NULL,3,t0,t1,t2);}
/* scrutinizer.scm: 607  walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4841(t3,t1,t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k5589 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_retrieve(lf[51]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[8]);}

/* k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5459(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5459,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5462,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5473,a[2]=((C_word*)t0)[9],a[3]=t6,a[4]=t3,a[5]=t5,a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[4],tmp=(C_word)a,a+=11,tmp);
t8=(C_word)C_i_length(((C_word*)t0)[9]);
/* scrutinizer.scm: 602  iota */
((C_proc3)C_retrieve_symbol_proc(lf[174]))(3,*((C_word*)lf[174]+1),t7,t8);}

/* k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5473,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5475,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_5475(t5,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_5475(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_5475,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5506,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5558,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
/* g13641365 */
t10=t6;
f_5506(t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5556 in loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5558,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5488,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_5488(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_5488(t5,t4);}}

/* k5486 in k5556 in loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_5488(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop13441358 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5475(t5,((C_word*)t0)[2],t3,t4);}

/* g1364 in loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_5506(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5506,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5514,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t1,a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t4);}

/* k5512 in g1364 in loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5517,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[173],t1);}

/* k5515 in k5512 in g1364 in loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5517,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5520,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5540,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t4)){
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[171],((C_word*)t0)[4]);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5546,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t5);}}

/* k5544 in k5515 in k5512 in g1364 in loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5546,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5549,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[172],t1);}

/* k5547 in k5544 in k5515 in k5512 in g1364 in loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5552,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5550 in k5547 in k5544 in k5515 in k5512 in g1364 in loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5538 in k5515 in k5512 in g1364 in loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5518 in k5515 in k5512 in g1364 in loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5520,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5523,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[170],((C_word*)t0)[3]);}

/* k5521 in k5518 in k5515 in k5512 in g1364 in loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5523,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5526,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5524 in k5521 in k5518 in k5515 in k5512 in g1364 in loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5526,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5529,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k5527 in k5524 in k5521 in k5518 in k5515 in k5512 in g1364 in loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5529,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5532,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),t2,((C_word*)t0)[2]);}

/* k5530 in k5527 in k5524 in k5521 in k5518 in k5515 in k5512 in g1364 in loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5532,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5536,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* scrutinizer.scm: 601  walk */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4841(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[5],C_SCHEME_FALSE);}

/* k5534 in k5530 in k5527 in k5524 in k5521 in k5518 in k5515 in k5512 in g1364 in loop1344 in k5471 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 594  single */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3866(t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5460 in k5457 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_car(((C_word*)t0)[6]);
/* scrutinizer.scm: 603  call-result */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4152(t3,((C_word*)t0)[4],t1,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5338,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5421,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t3);}

/* k5419 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5421,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5424,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[166],t1);}

/* k5422 in k5419 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5424,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5427,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5425 in k5422 in k5419 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5427,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k5428 in k5425 in k5422 in k5419 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5430,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5433,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),t2,((C_word*)t0)[2]);}

/* k5431 in k5428 in k5425 in k5422 in k5419 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5437,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
/* scrutinizer.scm: 576  walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4841(t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[2]);}

/* k5435 in k5431 in k5428 in k5425 in k5422 in k5419 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 574  single */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3866(t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5336 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5338,2,t0,t1);}
t2=(C_word)C_i_assq(((C_word*)t0)[8],((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5344,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5363,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep(t2)){
t5=t4;
f_5363(t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[3],lf[7]);
if(C_truep(t5)){
t6=t4;
f_5363(t6,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5413,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm: 581  match */
t7=((C_word*)((C_word*)t0)[2])[1];
f_2980(t7,t6,((C_word*)t0)[3],t1);}}}
else{
t5=t4;
f_5363(t5,C_SCHEME_FALSE);}}

/* k5411 in k5336 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_5363(t2,(C_word)C_i_not(t1));}

/* k5361 in k5336 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_5363(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5363,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t2);}
else{
t2=((C_word*)t0)[6];
f_5344(2,t2,C_SCHEME_UNDEFINED);}}

/* k5368 in k5361 in k5336 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5373,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[165],t1);}

/* k5371 in k5368 in k5361 in k5336 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5376,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k5374 in k5371 in k5368 in k5361 in k5336 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5379,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[164],((C_word*)t0)[4]);}

/* k5377 in k5374 in k5371 in k5368 in k5361 in k5336 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5382,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k5380 in k5377 in k5374 in k5371 in k5368 in k5361 in k5336 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5382,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5385,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[163],((C_word*)t0)[3]);}

/* k5383 in k5380 in k5377 in k5374 in k5371 in k5368 in k5361 in k5336 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5385,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5388,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k5386 in k5383 in k5380 in k5377 in k5374 in k5371 in k5368 in k5361 in k5336 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5388,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k5389 in k5386 in k5383 in k5380 in k5377 in k5374 in k5371 in k5368 in k5361 in k5336 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5391,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5394,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),t2,((C_word*)t0)[2]);}

/* k5392 in k5389 in k5386 in k5383 in k5380 in k5377 in k5374 in k5371 in k5368 in k5361 in k5336 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 582  report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5342 in k5336 in k5333 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=(C_word)C_eqp(lf[14],t2);
if(C_truep(t3)){
t4=(C_word)C_i_set_cdr(((C_word*)t0)[4],((C_word*)t0)[3]);
t5=C_retrieve(lf[51]);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[160]);}
else{
t4=C_retrieve(lf[51]);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[161]);}}
else{
t2=C_retrieve(lf[51]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[162]);}}

/* a5218 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5219(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[19],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5219,5,t0,t1,t2,t3,t4);}
t5=(C_truep(((C_word*)t0)[7])?(C_word)C_a_i_list(&a,1,((C_word*)t0)[7]):C_SCHEME_END_OF_LIST);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5226,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=t5,a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5313,a[2]=t6,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm: 557  make-list */
((C_proc4)C_retrieve_symbol_proc(lf[128]))(4,*((C_word*)lf[128]+1),t7,t3,lf[8]);}

/* k5311 in a5218 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[3])){
/* scrutinizer.scm: 557  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[52]+1)))(4,*((C_word*)lf[52]+1),((C_word*)t0)[2],t1,lf[156]);}
else{
/* scrutinizer.scm: 557  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[52]+1)))(4,*((C_word*)lf[52]+1),((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}}

/* k5224 in a5218 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5226,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5229,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5262,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5266,a[2]=t7,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
/* scrutinizer.scm: 559  butlast */
((C_proc3)C_retrieve_symbol_proc(lf[155]))(3,*((C_word*)lf[155]+1),t8,((C_word*)t0)[2]);}
else{
t9=t8;
f_5266(2,t9,((C_word*)t0)[2]);}}

/* k5264 in k5224 in a5218 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5266,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5268,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_5268(t5,((C_word*)t0)[2],t1);}

/* loop1267 in k5264 in k5224 in a5218 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_5268(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5268,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_a_i_cons(&a,2,t3,lf[8]);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t6=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop12671280 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}
else{
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=C_mutate(((C_word *)((C_word*)t0)[4])+1,t5);
t8=(C_word)C_slot(t2,C_fix(1));
/* loop12671280 */
t14=t1;
t15=t8;
t1=t14;
t2=t15;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k5260 in k5224 in a5218 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 558  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[52]+1)))(4,*((C_word*)lf[52]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5227 in k5224 in a5218 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5229,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5232,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5251,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
/* scrutinizer.scm: 562  alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[150]))(5,*((C_word*)lf[150]+1),t4,((C_word*)t0)[2],lf[75],t1);}
else{
t5=t4;
f_5251(2,t5,t1);}}

/* k5249 in k5227 in k5224 in a5218 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5251,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5255,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* scrutinizer.scm: 563  add-loc */
t3=((C_word*)((C_word*)t0)[4])[1];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5253 in k5249 in k5227 in k5224 in a5218 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 561  walk */
t2=((C_word*)((C_word*)t0)[5])[1];
f_4841(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* k5230 in k5227 in k5224 in a5218 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5232,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5239,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[3]);
/* scrutinizer.scm: 566  append */
((C_proc6)C_retrieve_proc(*((C_word*)lf[52]+1)))(6,*((C_word*)lf[52]+1),t2,lf[154],((C_word*)t0)[2],t3,t1);}

/* k5237 in k5230 in k5227 in k5224 in a5218 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5239,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,1,t1));}

/* loop in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_5125(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5125,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(C_word)C_i_car(t3);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5143,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t1,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* scrutinizer.scm: 547  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[52]+1)))(4,*((C_word*)lf[52]+1),t6,t4,((C_word*)t0)[4]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5146,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5169,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=t5,a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t6);}}

/* k5167 in loop in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5172,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[151],t1);}

/* k5170 in k5167 in loop in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5197,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[5]);
/* scrutinizer.scm: 549  real-name */
((C_proc3)C_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t3,t4);}

/* k5195 in k5170 in k5167 in loop in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5173 in k5170 in k5167 in loop in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5175,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k5176 in k5173 in k5170 in k5167 in loop in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5178,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5181,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),t2,((C_word*)t0)[2]);}

/* k5179 in k5176 in k5173 in k5170 in k5167 in loop in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5181,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5185,a[2]=((C_word*)t0)[6],a[3]=t1,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
t4=(C_word)C_i_car(((C_word*)t0)[4]);
/* scrutinizer.scm: 550  walk */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4841(t5,t2,t3,((C_word*)t0)[2],((C_word*)t0)[6],t4);}

/* k5183 in k5179 in k5176 in k5173 in k5170 in k5167 in loop in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 548  single */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3866(t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5144 in loop in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5146,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5161,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[6]);
/* scrutinizer.scm: 551  alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[150]))(5,*((C_word*)lf[150]+1),t4,t5,t1,((C_word*)t0)[2]);}

/* k5159 in k5144 in loop in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 551  loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_5125(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5141 in loop in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 547  walk */
t2=((C_word*)((C_word*)t0)[6])[1];
f_4841(t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5108 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 527  single */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3866(t2,((C_word*)t0)[3],lf[148],t1,((C_word*)t0)[2]);}

/* k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4936,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4939,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
/* scrutinizer.scm: 528  always-true */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1784(t3,t2,t1,((C_word*)t0)[11],((C_word*)t0)[9]);}

/* k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_4942,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* scrutinizer.scm: 529  walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4841(t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[10],((C_word*)t0)[2]);}

/* k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4945,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=t1,a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
/* scrutinizer.scm: 530  walk */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4841(t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[10],((C_word*)t0)[2]);}

/* k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4951,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[8],lf[8]);
if(C_truep(t3)){
t4=t2;
f_4951(t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_eqp(lf[8],t1);
t5=t2;
f_4951(t5,(C_word)C_i_not(t4));}}

/* k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4951(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4951,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4954,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5026,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5084,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* scrutinizer.scm: 533  any */
((C_proc4)C_retrieve_symbol_proc(lf[56]))(4,*((C_word*)lf[56]+1),t4,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[9]);}
else{
t2=C_retrieve(lf[51]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[8]);}}

/* k5082 in k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5084,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_5026(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5080,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* scrutinizer.scm: 534  any */
((C_proc4)C_retrieve_symbol_proc(lf[56]))(4,*((C_word*)lf[56]+1),t2,((C_word*)((C_word*)t0)[2])[1],((C_word*)t0)[3]);}}

/* k5078 in k5082 in k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_5026(t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_i_length(((C_word*)t0)[3]);
t3=(C_word)C_i_length(((C_word*)t0)[2]);
t4=(C_word)C_eqp(t2,t3);
t5=((C_word*)t0)[4];
f_5026(t5,(C_word)C_i_not(t4));}}

/* k5024 in k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_5026(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5026,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t2);}
else{
t2=((C_word*)t0)[5];
f_4954(2,t2,C_SCHEME_UNDEFINED);}}

/* k5031 in k5024 in k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[147],t1);}

/* k5034 in k5031 in k5024 in k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k5037 in k5034 in k5031 in k5024 in k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5042,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k5040 in k5037 in k5034 in k5031 in k5024 in k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5042,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5045,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5052,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm: 540  pp-fragment */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4132(t4,t3,((C_word*)t0)[2]);}

/* k5050 in k5040 in k5037 in k5034 in k5031 in k5024 in k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5043 in k5040 in k5037 in k5034 in k5031 in k5024 in k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5045,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5048,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),t2,((C_word*)t0)[2]);}

/* k5046 in k5043 in k5040 in k5037 in k5034 in k5031 in k5024 in k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 536  report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4952 in k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4954,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4959,a[2]=t3,a[3]=t7,a[4]=t5,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_4959(t9,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop1206 in k4952 in k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4959(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
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
C_save_and_reclaim((void*)trf_4959,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4990,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5009,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=(C_word)C_slot(t3,C_fix(0));
/* g12261227 */
t10=t6;
f_4990(t10,t7,t8,t9);}
else{
t6=((C_word*)((C_word*)t0)[2])[1];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k5007 in loop1206 in k4952 in k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_5009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5009,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4972,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t4=t3;
f_4972(t4,(C_word)C_i_setslot(((C_word*)((C_word*)t0)[7])[1],C_fix(1),t2));}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t5=t3;
f_4972(t5,t4);}}

/* k4970 in k5007 in loop1206 in k4952 in k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4972(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,((C_word*)t0)[6]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* loop12061220 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_4959(t5,((C_word*)t0)[2],t3,t4);}

/* g1226 in loop1206 in k4952 in k4949 in k4943 in k4940 in k4937 in k4934 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4990(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4990,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,t2,t4);
t6=(C_word)C_a_i_cons(&a,2,lf[23],t5);
/* scrutinizer.scm: 541  simplify */
t7=((C_word*)((C_word*)t0)[2])[1];
f_2173(t7,t1,t6);}

/* k4870 in walk in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_retrieve(lf[51]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* noreturn-type? in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4809(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4809,3,t0,t1,t2);}
t3=(C_word)C_eqp(lf[70],t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_eqp(lf[23],t4);
if(C_truep(t5)){
t6=(C_word)C_i_cdr(t2);
/* scrutinizer.scm: 514  any */
((C_proc4)C_retrieve_symbol_proc(lf[56]))(4,*((C_word*)lf[56]+1),t1,((C_word*)((C_word*)t0)[2])[1],t6);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}}

/* procedure-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4548(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4548,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_memq(t2,lf[129]);
t5=(C_truep(t4)?t4:(C_word)C_i_not_pair_p(t2));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4565,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm: 476  make-list */
((C_proc4)C_retrieve_symbol_proc(lf[128]))(4,*((C_word*)lf[128]+1),t6,t3,lf[8]);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_eqp(lf[30],t6);
if(C_truep(t7)){
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4574,a[2]=t9,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4581,a[2]=t3,a[3]=t10,a[4]=((C_word*)t0)[2],a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t12=(C_word)C_i_cadr(t2);
t13=(C_word)C_i_stringp(t12);
if(C_truep(t13)){
t14=t11;
f_4581(t14,(C_truep(t13)?(C_word)C_i_caddr(t2):(C_word)C_i_cadr(t2)));}
else{
t14=(C_word)C_i_cadr(t2);
t15=(C_word)C_i_symbolp(t14);
t16=t11;
f_4581(t16,(C_truep(t15)?(C_word)C_i_caddr(t2):(C_word)C_i_cadr(t2)));}}
else{
/* scrutinizer.scm: 494  bomb */
((C_proc4)C_retrieve_symbol_proc(lf[38]))(4,*((C_word*)lf[38]+1),t1,lf[130],t2);}}}

/* k4579 in procedure-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4581(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4581,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4583,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4583(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* loop in k4579 in procedure-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4583(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4583,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}
else{
t5=(C_word)C_i_car(t2);
t6=(C_word)C_eqp(lf[66],t5);
if(C_truep(t6)){
t7=(C_word)C_i_cdr(t2);
/* scrutinizer.scm: 487  loop */
t16=t1;
t17=t7;
t18=t3;
t19=C_SCHEME_TRUE;
t1=t16;
t2=t17;
t3=t18;
t4=t19;
goto loop;}
else{
t7=(C_word)C_i_car(t2);
t8=(C_word)C_eqp(lf[65],t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4613,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t10=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t10))){
t11=(C_word)C_i_cadr(t2);
t12=t9;
f_4613(t12,(C_word)C_eqp(lf[64],t11));}
else{
t11=t9;
f_4613(t11,C_SCHEME_FALSE);}}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4644,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t10=t3;
t11=t9;
f_4644(t11,(C_word)C_fixnum_less_or_equal_p(t10,C_fix(0)));}
else{
t10=t9;
f_4644(t10,C_SCHEME_FALSE);}}}}}

/* k4642 in loop in k4579 in procedure-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4644(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4644,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4655,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
t5=(C_word)C_fixnum_decrease(((C_word*)t0)[4]);
/* scrutinizer.scm: 492  loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_4583(t6,t3,t4,t5,((C_word*)t0)[2]);}}

/* k4653 in k4642 in loop in k4579 in procedure-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4655,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k4611 in loop in k4579 in procedure-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4613(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
t4=f_2690(t3);
/* scrutinizer.scm: 490  make-list */
((C_proc4)C_retrieve_symbol_proc(lf[128]))(4,*((C_word*)lf[128]+1),((C_word*)t0)[3],((C_word*)t0)[2],t4);}

/* k4572 in procedure-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 493  values */
C_values(4,0,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k4563 in procedure-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 476  values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}

/* procedure-type? in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4506(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_4506,3,t0,t1,t2);}
t3=(C_word)C_eqp(lf[30],t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_eqp(lf[30],t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_eqp(lf[23],t6);
if(C_truep(t7)){
t8=(C_word)C_i_cdr(t2);
/* scrutinizer.scm: 472  every */
((C_proc4)C_retrieve_symbol_proc(lf[21]))(4,*((C_word*)lf[21]+1),t1,((C_word*)((C_word*)t0)[2])[1],t8);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}}

/* call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4152(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4152,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4155,a[2]=t4,a[3]=((C_word*)t0)[6],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=C_retrieve(lf[51]);
t8=(C_word)C_i_car(t2);
t9=(C_word)C_i_cdr(t2);
t10=(C_word)C_i_length(t9);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4496,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t10,a[5]=((C_word*)t0)[3],a[6]=t6,a[7]=t3,a[8]=((C_word*)t0)[4],a[9]=t8,a[10]=((C_word*)t0)[5],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
/* scrutinizer.scm: 434  make-list */
((C_proc4)C_retrieve_symbol_proc(lf[128]))(4,*((C_word*)lf[128]+1),t11,t10,lf[8]);}

/* k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4496,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[8],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,lf[30],t3);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4238,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4439,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=t5,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4488,a[2]=((C_word*)t0)[9],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* scrutinizer.scm: 435  procedure-type? */
t8=((C_word*)((C_word*)t0)[2])[1];
f_4506(3,t8,t7,((C_word*)t0)[9]);}

/* k4486 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4488,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_4439(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4484,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm: 436  match */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2980(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4482 in k4486 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4439(t2,(C_word)C_i_not(t1));}

/* k4437 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4439(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4439,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t2);}
else{
t2=((C_word*)t0)[6];
f_4238(2,t2,C_SCHEME_UNDEFINED);}}

/* k4444 in k4437 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4449,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[127],t1);}

/* k4447 in k4444 in k4437 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4449,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4452,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4474,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm: 441  pname */
t4=((C_word*)t0)[2];
f_4155(t4,t3);}

/* k4472 in k4447 in k4444 in k4437 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4450 in k4447 in k4444 in k4437 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4452,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4455,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[126],((C_word*)t0)[4]);}

/* k4453 in k4450 in k4447 in k4444 in k4437 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4458,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k4456 in k4453 in k4450 in k4447 in k4444 in k4437 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4458,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[125],((C_word*)t0)[3]);}

/* k4459 in k4456 in k4453 in k4450 in k4447 in k4444 in k4437 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4461,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4464,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4462 in k4459 in k4456 in k4453 in k4450 in k4447 in k4444 in k4437 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4464,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4467,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k4465 in k4462 in k4459 in k4456 in k4453 in k4450 in k4447 in k4444 in k4437 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4467,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4470,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),t2,((C_word*)t0)[2]);}

/* k4468 in k4465 in k4462 in k4459 in k4456 in k4453 in k4450 in k4447 in k4444 in k4437 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 437  report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4238,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4243,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4257,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4257(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[19],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4257,4,t0,t1,t2,t3);}
t4=C_retrieve(lf[51]);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4264,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t3,a[9]=((C_word*)t0)[8],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t6=(C_word)C_i_length(t2);
t7=(C_word)C_eqp(t6,((C_word*)t0)[2]);
if(C_truep(t7)){
t8=t5;
f_4264(2,t8,C_SCHEME_UNDEFINED);}
else{
t8=(C_word)C_i_length(t2);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4387,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=t5,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t9);}}

/* k4385 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[124],t1);}

/* k4388 in k4385 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4393,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4432,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm: 452  pname */
t4=((C_word*)t0)[2];
f_4155(t4,t3);}

/* k4430 in k4388 in k4385 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4391 in k4388 in k4385 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4393,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4396,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[4]);}

/* k4394 in k4391 in k4388 in k4385 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4396,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k4397 in k4394 in k4391 in k4388 in k4385 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[123],((C_word*)t0)[4]);}

/* k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4402,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4405,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[2],C_fix(1));
t4=(C_truep(t3)?lf[42]:lf[43]);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,t4,((C_word*)t0)[4]);}

/* k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4405,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[122],((C_word*)t0)[3]);}

/* k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4408,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4411,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4411,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[121],((C_word*)t0)[3]);}

/* k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4414,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4417,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[2],C_fix(1));
t4=(C_truep(t3)?lf[42]:lf[43]);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,t4,((C_word*)t0)[3]);}

/* k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4417,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4420,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),t2,((C_word*)t0)[2]);}

/* k4418 in k4415 in k4412 in k4409 in k4406 in k4403 in k4400 in k4397 in k4394 in k4391 in k4388 in k4385 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 448  report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4267,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[9]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4283,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t5,tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_4283(t7,t2,t3,((C_word*)t0)[2],C_fix(1));}

/* doloop1025 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4283(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4283,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_nullp(t2);
t6=(C_truep(t5)?t5:(C_word)C_i_nullp(t3));
if(C_truep(t6)){
t7=C_SCHEME_UNDEFINED;
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4296,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4314,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t7,tmp=(C_word)a,a+=9,tmp);
t9=(C_word)C_i_car(t3);
t10=(C_word)C_i_car(t2);
/* scrutinizer.scm: 458  match */
t11=((C_word*)((C_word*)t0)[2])[1];
f_2980(t11,t8,t9,t10);}}

/* k4312 in doloop1025 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4314,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
f_4296(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4321,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t2);}}

/* k4319 in k4312 in doloop1025 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4324,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[120],t1);}

/* k4322 in k4319 in k4312 in doloop1025 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4327,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[6]);}

/* k4325 in k4322 in k4319 in k4312 in doloop1025 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4327,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[119],((C_word*)t0)[5]);}

/* k4328 in k4325 in k4322 in k4319 in k4312 in doloop1025 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4330,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4333,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,t3,((C_word*)t0)[5]);}

/* k4331 in k4328 in k4325 in k4322 in k4319 in k4312 in doloop1025 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4336,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[118],((C_word*)t0)[4]);}

/* k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4312 in doloop1025 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4336,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4339,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4359,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm: 463  pname */
t4=((C_word*)t0)[2];
f_4155(t4,t3);}

/* k4357 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4312 in doloop1025 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4312 in doloop1025 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4339,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4342,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[117],((C_word*)t0)[3]);}

/* k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4312 in doloop1025 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4342,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4345,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,t3,((C_word*)t0)[3]);}

/* k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4312 in doloop1025 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4345,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4348,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4312 in doloop1025 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4351,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),t2,((C_word*)t0)[2]);}

/* k4349 in k4346 in k4343 in k4340 in k4337 in k4334 in k4331 in k4328 in k4325 in k4322 in k4319 in k4312 in doloop1025 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 459  report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4294 in doloop1025 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
t4=(C_word)C_fixnum_increase(((C_word*)t0)[4]);
t5=((C_word*)((C_word*)t0)[3])[1];
f_4283(t5,((C_word*)t0)[2],t2,t3,t4);}

/* k4265 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4267(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4267,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4270,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
if(C_truep(t4)){
t5=C_retrieve(lf[51]);
t6=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t5=(C_word)C_i_memq(((C_word*)t0)[2],lf[115]);
t6=(C_truep(t5)?t5:(C_word)C_i_not_pair_p(((C_word*)t0)[2]));
if(C_truep(t6)){
t7=C_retrieve(lf[51]);
t8=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[8]);}
else{
t7=(C_word)C_i_car(((C_word*)t0)[2]);
t8=(C_word)C_eqp(lf[30],t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4733,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm: 501  call/cc */
((C_proc3)C_retrieve_proc(*((C_word*)lf[63]+1)))(3,*((C_word*)lf[63]+1),t2,t9);}
else{
/* scrutinizer.scm: 509  bomb */
((C_proc4)C_retrieve_symbol_proc(lf[38]))(4,*((C_word*)lf[38]+1),t2,lf[116],((C_word*)t0)[2]);}}}}

/* a4732 in k4265 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4733(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_4733,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4741,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[2]);
t5=(C_word)C_i_stringp(t4);
if(C_truep(t5)){
t6=t3;
f_4741(t6,(C_truep(t5)?(C_word)C_i_cdddr(((C_word*)t0)[2]):(C_word)C_i_cddr(((C_word*)t0)[2])));}
else{
t6=(C_word)C_i_cadr(((C_word*)t0)[2]);
t7=(C_word)C_i_symbolp(t6);
t8=t3;
f_4741(t8,(C_truep(t7)?(C_word)C_i_cdddr(((C_word*)t0)[2]):(C_word)C_i_cddr(((C_word*)t0)[2])));}}

/* k4739 in a4732 in k4265 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4741(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4741,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4743,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4743(t5,((C_word*)t0)[2],t1);}

/* loop in k4739 in a4732 in k4265 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4743(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4743,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_eqp(lf[8],t2);
if(C_truep(t3)){
/* scrutinizer.scm: 507  return */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,lf[8]);}
else{
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4770,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
/* scrutinizer.scm: 508  loop */
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}}}

/* k4768 in loop in k4739 in a4732 in k4265 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4770,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k4268 in k4265 in k4262 in a4256 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_retrieve(lf[51]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* a4242 in k4236 in k4494 in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4243,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=(C_word)C_i_length(t2);
/* scrutinizer.scm: 444  procedure-argument-types */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4548(t4,t1,((C_word*)t0)[2],t3);}

/* pname in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4155(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4155,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t2);}

/* k4157 in pname in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4159,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[114],t1);}

/* k4160 in k4157 in pname in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4162,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4165,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4223,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm: 424  fragment */
f_4078(t3,((C_word*)t0)[2]);}

/* k4221 in k4160 in k4157 in pname in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[113]+1)))(4,*((C_word*)lf[113]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4163 in k4160 in k4157 in pname in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4165,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[3]);}

/* k4166 in k4163 in k4160 in k4157 in pname in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4168,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4171,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4178,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4181,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t5=(C_word)C_i_cdr(((C_word*)t0)[2]);
t6=t4;
f_4181(t6,(C_word)C_i_pairp(t5));}
else{
t5=t4;
f_4181(t5,C_SCHEME_FALSE);}}

/* k4179 in k4166 in k4163 in k4160 in k4157 in pname in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4181(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4181,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4184,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[2]);
/* scrutinizer.scm: 426  source-info->line */
((C_proc3)C_retrieve_symbol_proc(lf[111]))(3,*((C_word*)lf[111]+1),t2,t3);}
else{
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[4],lf[112],((C_word*)t0)[3]);}}

/* k4182 in k4179 in k4166 in k4163 in k4160 in k4157 in pname in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4184,2,t0,t1);}
if(C_truep((C_word)C_i_numberp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4193,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t2);}
else{
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],lf[110],((C_word*)t0)[2]);}}

/* k4191 in k4182 in k4179 in k4166 in k4163 in k4160 in k4157 in pname in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4196,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[109],t1);}

/* k4194 in k4191 in k4182 in k4179 in k4166 in k4163 in k4160 in k4157 in pname in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4196,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4199,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k4197 in k4194 in k4191 in k4182 in k4179 in k4166 in k4163 in k4160 in k4157 in pname in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4202,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),((C_word*)t0)[2]);}

/* k4200 in k4197 in k4194 in k4191 in k4182 in k4179 in k4166 in k4163 in k4160 in k4157 in pname in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4176 in k4166 in k4163 in k4160 in k4157 in pname in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4169 in k4166 in k4163 in k4160 in k4157 in pname in call-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* pp-fragment in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4132(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4132,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4140,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4142,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm: 417  with-output-to-string */
((C_proc3)C_retrieve_symbol_proc(lf[108]))(3,*((C_word*)lf[108]+1),t3,t4);}

/* a4141 in pp-fragment in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4142,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4150,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm: 419  fragment */
f_4078(t2,((C_word*)t0)[2]);}

/* k4148 in a4141 in pp-fragment in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 419  pp */
((C_proc3)C_retrieve_symbol_proc(lf[107]))(3,*((C_word*)lf[107]+1),((C_word*)t0)[2],t1);}

/* k4138 in pp-fragment in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 416  string-chomp */
((C_proc3)C_retrieve_symbol_proc(lf[106]))(3,*((C_word*)lf[106]+1),((C_word*)t0)[2],t1);}

/* fragment in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4078(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4078,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4082,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm: 408  build-expression-tree */
((C_proc3)C_retrieve_symbol_proc(lf[105]))(3,*((C_word*)lf[105]+1),t3,t2);}

/* k4080 in fragment in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4082,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4087,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4087(t5,((C_word*)t0)[2],t1,C_fix(0));}

/* walk in k4080 in fragment in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4087(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4087,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_not_pair_p(t2))){
t4=t2;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,C_fix(3)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[101]);}
else{
if(C_truep((C_word)C_i_listp(t2))){
t5=(C_word)C_fixnum_increase(t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4114,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4122,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4126,a[2]=t2,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(C_word)C_i_length(t2);
/* scrutinizer.scm: 413  min */
((C_proc4)C_retrieve_proc(*((C_word*)lf[104]+1)))(4,*((C_word*)lf[104]+1),t8,C_fix(5),t9);}
else{
t5=t2;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}}}

/* k4124 in walk in k4080 in fragment in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 413  take */
((C_proc4)C_retrieve_symbol_proc(lf[103]))(4,*((C_word*)lf[103]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4120 in walk in k4080 in fragment in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[102]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a4110 in walk in k4080 in fragment in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4114(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4114,3,t0,t1,t2);}
/* g934935941 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4087(t3,t1,t2,((C_word*)t0)[2]);}

/* location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_3957(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3957,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3960,tmp=(C_word)a,a+=2,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[95]);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3998,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t5);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4023,a[2]=t3,a[3]=t6,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4023(t8,t1,t2);}}}

/* rec in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_4023(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4023,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t3))){
/* scrutinizer.scm: 404  location-name */
t4=((C_word*)((C_word*)t0)[4])[1];
f_3957(t4,t1,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4036,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t4);}}

/* k4034 in rec in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[99],t1);}

/* k4037 in k4034 in rec in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4042,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4063,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[4]);
/* scrutinizer.scm: 405  lname */
f_3960(t3,t4);}

/* k4061 in k4037 in k4034 in rec in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4063(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4040 in k4037 in k4034 in rec in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4042,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[98],((C_word*)t0)[4]);}

/* k4043 in k4040 in k4037 in k4034 in rec in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4045,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4048,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4055,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* scrutinizer.scm: 405  rec */
t5=((C_word*)((C_word*)t0)[2])[1];
f_4023(t5,t3,t4);}

/* k4053 in k4043 in k4040 in k4037 in k4034 in rec in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4046 in k4043 in k4040 in k4037 in k4034 in rec in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3996 in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3998,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[97],t1);}

/* k3999 in k3996 in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4001,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4004,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4014,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[3]);
/* scrutinizer.scm: 400  lname */
f_3960(t3,t4);}

/* k4012 in k3999 in k3996 in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4002 in k3999 in k3996 in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4004,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4007,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[96],((C_word*)t0)[2]);}

/* k4005 in k4002 in k3999 in k3996 in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_4007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lname in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_3960(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3960,NULL,2,t1,t2);}
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3967,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[94]);}}

/* k3965 in lname in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3967,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3970,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[93],t1);}

/* k3968 in k3965 in lname in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3970,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3973,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3983,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm: 396  real-name */
((C_proc3)C_retrieve_symbol_proc(lf[16]))(3,*((C_word*)lf[16]+1),t3,((C_word*)t0)[2]);}

/* k3981 in k3968 in k3965 in lname in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3971 in k3968 in k3965 in lname in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3973,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3976,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k3974 in k3971 in k3968 in k3965 in lname in location-name in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* report in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_3947(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3947,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3955,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm: 392  location-name */
t5=((C_word*)((C_word*)t0)[2])[1];
f_3957(t5,t4,t2);}

/* k3953 in report in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3955(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 389  compiler-warning */
((C_proc6)C_retrieve_symbol_proc(lf[90]))(6,*((C_word*)lf[90]+1),((C_word*)t0)[3],lf[91],lf[92],t1,((C_word*)t0)[2]);}

/* single in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_3866(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3866,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(lf[8],t3);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[8]);}
else{
t6=(C_word)C_i_length(t3);
t7=(C_word)C_eqp(C_fix(1),t6);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_car(t3));}
else{
t8=(C_word)C_eqp(t6,C_fix(0));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3894,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3898,a[2]=t2,a[3]=t4,a[4]=t9,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t10);}
else{
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3913,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3920,a[2]=t2,a[3]=t6,a[4]=t4,a[5]=t9,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t10);}}}}

/* k3918 in single in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3920,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3923,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[89],t1);}

/* k3921 in k3918 in single in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3923,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3926,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k3924 in k3921 in k3918 in single in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3926,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3929,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[88],((C_word*)t0)[3]);}

/* k3927 in k3924 in k3921 in k3918 in single in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3929,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3930 in k3927 in k3924 in k3921 in k3918 in single in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3932,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3935,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[87],((C_word*)t0)[3]);}

/* k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in single in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3935,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3938,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[2],C_fix(1));
t4=(C_truep(t3)?lf[42]:lf[43]);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,t4,((C_word*)t0)[3]);}

/* k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in single in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3938,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3941,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),t2,((C_word*)t0)[2]);}

/* k3939 in k3936 in k3933 in k3930 in k3927 in k3924 in k3921 in k3918 in single in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 383  report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3911 in single in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_car(((C_word*)t0)[2]));}

/* k3896 in single in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3898,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3901,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[86],t1);}

/* k3899 in k3896 in single in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3904,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k3902 in k3899 in k3896 in single in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3904,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3907,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[85],((C_word*)t0)[2]);}

/* k3905 in k3902 in k3899 in k3896 in single in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3907,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3910,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),t2,((C_word*)t0)[2]);}

/* k3908 in k3905 in k3902 in k3899 in k3896 in single in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 378  report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3892 in single in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[14]);}

/* type<=? in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_3526(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3526,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(C_word)C_i_memq(t3,lf[82]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=t3;
t7=(C_word)C_eqp(t6,lf[75]);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_memq(t2,lf[83]));}
else{
t8=(C_word)C_eqp(t6,lf[30]);
if(C_truep(t8)){
if(C_truep((C_word)C_i_pairp(t2))){
t9=(C_word)C_i_car(t2);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_eqp(lf[30],t9));}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t9=(C_word)C_eqp(t6,lf[71]);
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_i_memq(t2,lf[84]));}
else{
if(C_truep((C_word)C_i_pairp(t2))){
if(C_truep((C_word)C_i_pairp(t3))){
t10=(C_word)C_i_car(t2);
t11=(C_word)C_eqp(t10,lf[23]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3602,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t13=(C_word)C_i_cdr(t2);
/* scrutinizer.scm: 339  every */
((C_proc4)C_retrieve_symbol_proc(lf[21]))(4,*((C_word*)lf[21]+1),t1,t12,t13);}
else{
t12=(C_word)C_eqp(t10,lf[30]);
if(C_truep(t12)){
t13=(C_word)C_i_cadr(t2);
t14=(C_word)C_i_pairp(t13);
t15=(C_truep(t14)?(C_word)C_i_cadr(t2):(C_word)C_i_caddr(t2));
t16=(C_word)C_i_cadr(t3);
t17=(C_word)C_i_pairp(t16);
t18=(C_truep(t17)?(C_word)C_i_cadr(t3):(C_word)C_i_caddr(t3));
t19=(C_word)C_i_cadr(t2);
t20=(C_word)C_i_pairp(t19);
t21=(C_truep(t20)?(C_word)C_i_cddr(t2):(C_word)C_i_cdddr(t2));
t22=(C_word)C_i_cadr(t3);
t23=(C_word)C_i_pairp(t22);
t24=(C_truep(t23)?(C_word)C_i_cddr(t3):(C_word)C_i_cdddr(t3));
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3633,a[2]=t26,a[3]=t24,a[4]=t21,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp));
t28=((C_word*)t26)[1];
f_3633(t28,t1,t15,t18,C_fix(0),C_fix(0));}
else{
t13=C_SCHEME_UNDEFINED;
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,t13);}}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}}}}}}

/* loop1 in type<=? in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_3633(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3633,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_i_nullp(t2))){
t6=(C_word)C_i_nullp(t3);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3649,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t8=t7;
f_3649(t8,t6);}
else{
t8=t5;
t9=t7;
f_3649(t9,(C_word)C_fixnum_greaterp(t8,C_fix(0)));}}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_eqp(t6,lf[66]);
if(C_truep(t7)){
t8=(C_word)C_i_cdr(t2);
/* scrutinizer.scm: 360  loop1 */
t25=t1;
t26=t8;
t27=t3;
t28=C_fix(1);
t29=t5;
t1=t25;
t2=t26;
t3=t27;
t4=t28;
t5=t29;
goto loop;}
else{
t8=(C_word)C_i_car(t3);
t9=(C_word)C_eqp(t8,lf[66]);
if(C_truep(t9)){
t10=(C_word)C_i_cdr(t3);
/* scrutinizer.scm: 362  loop1 */
t25=t1;
t26=t2;
t27=t10;
t28=t4;
t29=C_fix(1);
t1=t25;
t2=t26;
t3=t27;
t4=t28;
t5=t29;
goto loop;}
else{
t10=(C_word)C_i_car(t2);
t11=(C_word)C_eqp(t10,lf[65]);
if(C_truep(t11)){
t12=(C_word)C_i_cdr(t2);
/* scrutinizer.scm: 364  loop1 */
t25=t1;
t26=t12;
t27=t3;
t28=C_fix(2);
t29=t5;
t1=t25;
t2=t26;
t3=t27;
t4=t28;
t5=t29;
goto loop;}
else{
t12=(C_word)C_i_car(t3);
t13=(C_word)C_eqp(t12,lf[65]);
if(C_truep(t13)){
t14=(C_word)C_i_cdr(t3);
/* scrutinizer.scm: 366  loop1 */
t25=t1;
t26=t2;
t27=t14;
t28=t4;
t29=C_fix(2);
t1=t25;
t2=t26;
t3=t27;
t4=t28;
t5=t29;
goto loop;}
else{
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3768,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t15=(C_word)C_i_car(t2);
t16=(C_word)C_i_car(t3);
/* scrutinizer.scm: 367  type<=? */
t17=((C_word*)((C_word*)t0)[5])[1];
f_3526(t17,t14,t15,t16);}}}}}}}

/* k3766 in loop1 in type<=? in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* scrutinizer.scm: 368  loop1 */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3633(t4,((C_word*)t0)[4],t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3647 in loop1 in type<=? in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_3649(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3649,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3654,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_3654(t5,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop2 in k3647 in loop1 in type<=? in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_3654(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3654,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(lf[8],t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_TRUE);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_nullp(t2));}
else{
t5=(C_word)C_eqp(lf[8],t2);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3682,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_car(t2);
t8=(C_word)C_i_car(t3);
/* scrutinizer.scm: 355  type<=? */
t9=((C_word*)((C_word*)t0)[2])[1];
f_3526(t9,t6,t7,t8);}}}}

/* k3680 in loop2 in k3647 in loop1 in type<=? in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* scrutinizer.scm: 356  loop2 */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3654(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a3601 in type<=? in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3602(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3602,3,t0,t1,t2);}
/* g800801 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3526(t3,t1,t2,((C_word*)t0)[2]);}

/* match-results in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_3471(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3471,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_not_pair_p(t3));}
else{
t4=(C_word)C_eqp(lf[8],t2);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(C_word)C_eqp(lf[8],t3);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3505,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_car(t2);
t8=(C_word)C_i_car(t3);
/* scrutinizer.scm: 326  match */
t9=((C_word*)((C_word*)t0)[2])[1];
f_2980(t9,t6,t7,t8);}}}}}

/* k3503 in match-results in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* scrutinizer.scm: 327  match-results */
t4=((C_word*)((C_word*)t0)[3])[1];
f_3471(t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* match-args in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_3261(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3261,NULL,4,t0,t1,t2,t3);}
t4=C_retrieve(lf[51]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3326,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_3326(t9,t1,t2,t3,C_SCHEME_FALSE,C_SCHEME_FALSE);}

/* loop in match-args in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_3326(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3326,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=C_retrieve(lf[51]);
if(C_truep((C_word)C_i_nullp(t2))){
t7=t5;
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(C_word)C_i_nullp(t3);
if(C_truep(t8)){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t9=(C_word)C_i_car(t3);
t10=t1;
t11=t10;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_i_memq(t9,lf[80]));}}}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t7=t4;
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(C_word)C_i_car(t2);
t9=t1;
t10=t9;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_i_memq(t8,lf[81]));}}
else{
t7=(C_word)C_i_car(t2);
t8=(C_word)C_eqp(lf[66],t7);
if(C_truep(t8)){
t9=(C_word)C_i_cdr(t2);
/* scrutinizer.scm: 312  loop */
t32=t1;
t33=t9;
t34=t3;
t35=C_SCHEME_TRUE;
t36=t5;
t1=t32;
t2=t33;
t3=t34;
t4=t35;
t5=t36;
goto loop;}
else{
t9=(C_word)C_i_car(t3);
t10=(C_word)C_eqp(lf[66],t9);
if(C_truep(t10)){
t11=(C_word)C_i_cdr(t3);
/* scrutinizer.scm: 314  loop */
t32=t1;
t33=t2;
t34=t11;
t35=t4;
t36=C_SCHEME_TRUE;
t1=t32;
t2=t33;
t3=t34;
t4=t35;
t5=t36;
goto loop;}
else{
t11=(C_word)C_i_car(t2);
t12=(C_word)C_eqp(lf[65],t11);
if(C_truep(t12)){
t13=(C_word)C_i_cdr(t2);
t14=f_2690(t13);
/* scrutinizer.scm: 316  match-rest */
t15=((C_word*)t0)[3];
f_3267(t15,t1,t14,t3);}
else{
t13=(C_word)C_i_car(t3);
t14=(C_word)C_eqp(lf[65],t13);
if(C_truep(t14)){
t15=(C_word)C_i_cdr(t3);
t16=f_2690(t15);
/* scrutinizer.scm: 318  match-rest */
t17=((C_word*)t0)[3];
f_3267(t17,t1,t16,t2);}
else{
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3434,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t16=(C_word)C_i_car(t2);
t17=(C_word)C_i_car(t3);
/* scrutinizer.scm: 319  match */
t18=((C_word*)((C_word*)t0)[2])[1];
f_2980(t18,t15,t16,t17);}}}}}}}

/* k3432 in loop in match-args in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* scrutinizer.scm: 319  loop */
t4=((C_word*)((C_word*)t0)[5])[1];
f_3326(t4,((C_word*)t0)[4],t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* match-rest in match-args in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_3267(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3267,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3273,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3285,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a3284 in match-rest in match-args in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3285(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3285,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3292,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm: 298  every */
((C_proc4)C_retrieve_symbol_proc(lf[21]))(4,*((C_word*)lf[21]+1),t4,t5,t2);}

/* a3310 in a3284 in match-rest in match-args in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3311(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3311,3,t0,t1,t2);}
/* g712713 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2980(t3,t1,((C_word*)t0)[2],t2);}

/* k3290 in a3284 in match-rest in match-args in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[6]))){
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=f_2690(t2);
/* scrutinizer.scm: 299  match */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2980(t4,((C_word*)t0)[3],((C_word*)t0)[2],t3);}
else{
/* scrutinizer.scm: 299  match */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2980(t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[8]);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a3272 in match-rest in match-args in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3279,tmp=(C_word)a,a+=2,tmp);
/* scrutinizer.scm: 297  break */
((C_proc4)C_retrieve_symbol_proc(lf[79]))(4,*((C_word*)lf[79]+1),t1,t2,((C_word*)t0)[2]);}

/* a3278 in a3272 in match-rest in match-args in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3279(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3279,3,t0,t1,t2);}
t3=*((C_word*)lf[55]+1);
/* g697698 */
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,lf[65],t2);}

/* match1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2989(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2989,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,t3);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=(C_word)C_eqp(t2,lf[8]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_eqp(t3,lf[8]);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=(C_word)C_eqp(t2,lf[70]);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(C_word)C_eqp(t3,lf[70]);
if(C_truep(t8)){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t9=(C_word)C_eqp(t2,lf[71]);
t10=(C_truep(t9)?(C_word)C_i_memq(t3,lf[72]):C_SCHEME_FALSE);
if(C_truep(t10)){
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
t11=(C_word)C_eqp(t3,lf[71]);
t12=(C_truep(t11)?(C_word)C_i_memq(t2,lf[73]):C_SCHEME_FALSE);
if(C_truep(t12)){
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t13=(C_word)C_eqp(lf[30],t2);
if(C_truep(t13)){
if(C_truep((C_word)C_i_pairp(t3))){
t14=(C_word)C_i_car(t3);
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,(C_word)C_eqp(lf[30],t14));}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t14=(C_word)C_eqp(lf[30],t3);
if(C_truep(t14)){
if(C_truep((C_word)C_i_pairp(t2))){
t15=(C_word)C_i_car(t2);
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,(C_word)C_eqp(lf[30],t15));}
else{
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_SCHEME_FALSE);}}
else{
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=t2,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t16=(C_word)C_i_car(t2);
t17=t15;
f_3076(t17,(C_word)C_eqp(lf[23],t16));}
else{
t16=t15;
f_3076(t16,C_SCHEME_FALSE);}}}}}}}}}}}

/* k3074 in match1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_3076(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3076,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3081,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* scrutinizer.scm: 278  any */
((C_proc4)C_retrieve_symbol_proc(lf[56]))(4,*((C_word*)lf[56]+1),((C_word*)t0)[5],t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[7]))){
t3=(C_word)C_i_car(((C_word*)t0)[7]);
t4=t2;
f_3095(t4,(C_word)C_eqp(lf[23],t3));}
else{
t3=t2;
f_3095(t3,C_SCHEME_FALSE);}}}

/* k3093 in k3074 in match1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_3095(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3095,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3100,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* scrutinizer.scm: 279  any */
((C_proc4)C_retrieve_symbol_proc(lf[56]))(4,*((C_word*)lf[56]+1),((C_word*)t0)[5],t2,t3);}
else{
t2=((C_word*)t0)[7];
if(C_truep((C_truep((C_word)C_eqp(t2,lf[74]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t2,lf[75]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_memq(((C_word*)t0)[6],lf[76]));}
else{
t3=((C_word*)t0)[7];
if(C_truep((C_truep((C_word)C_eqp(t3,lf[77]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,lf[75]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_memq(((C_word*)t0)[6],lf[78]));}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3132,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[7]))){
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[6]))){
t5=(C_word)C_i_car(((C_word*)t0)[7]);
t6=(C_word)C_i_car(((C_word*)t0)[6]);
t7=t4;
f_3132(t7,(C_word)C_eqp(t5,t6));}
else{
t5=t4;
f_3132(t5,C_SCHEME_FALSE);}}
else{
t5=t4;
f_3132(t5,C_SCHEME_FALSE);}}}}}

/* k3130 in k3093 in k3074 in match1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_3132(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3132,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=(C_word)C_eqp(t2,lf[30]);
if(C_truep(t3)){
t4=f_2650(((C_word*)t0)[7]);
t5=(C_truep(t4)?(C_word)C_i_caddr(((C_word*)t0)[7]):(C_word)C_i_cadr(((C_word*)t0)[7]));
t6=f_2650(((C_word*)t0)[5]);
t7=(C_truep(t6)?(C_word)C_i_caddr(((C_word*)t0)[5]):(C_word)C_i_cadr(((C_word*)t0)[5]));
t8=f_2650(((C_word*)t0)[7]);
t9=(C_truep(t8)?(C_word)C_i_cdddr(((C_word*)t0)[7]):(C_word)C_i_cddr(((C_word*)t0)[7]));
t10=f_2650(((C_word*)t0)[5]);
t11=(C_truep(t10)?(C_word)C_i_cdddr(((C_word*)t0)[5]):(C_word)C_i_cddr(((C_word*)t0)[5]));
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3159,a[2]=t11,a[3]=t9,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* scrutinizer.scm: 289  match-args */
t13=((C_word*)((C_word*)t0)[2])[1];
f_3261(t13,t12,t5,t7);}
else{
t4=(C_word)C_eqp(t2,lf[36]);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?(C_word)C_i_equalp(((C_word*)t0)[7],((C_word*)t0)[5]):C_SCHEME_FALSE));}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3157 in k3130 in k3093 in k3074 in match1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* scrutinizer.scm: 290  match-results */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3471(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a3099 in k3093 in k3074 in match1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3100(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3100,3,t0,t1,t2);}
/* g659660 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2980(t3,t1,((C_word*)t0)[2],t2);}

/* a3080 in k3074 in match1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_3081(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3081,3,t0,t1,t2);}
/* g648649 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2980(t3,t1,t2,((C_word*)t0)[2]);}

/* match in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2980(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2980,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2984,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm: 265  match1 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2989(t5,t4,t2,t3);}

/* k2982 in match in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_retrieve(lf[51]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* merge-result-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2914(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2914,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(C_word)C_i_not_pair_p(t2);
t5=(C_truep(t4)?t4:(C_word)C_i_not_pair_p(t3));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[8]);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2943,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_car(t2);
t8=(C_word)C_i_car(t3);
t9=(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_cons(&a,2,t7,t9);
t11=(C_word)C_a_i_cons(&a,2,lf[23],t10);
/* scrutinizer.scm: 262  simplify */
t12=((C_word*)((C_word*)t0)[2])[1];
f_2173(t12,t6,t11);}}}}

/* k2941 in merge-result-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2943,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2947,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* scrutinizer.scm: 263  merge-result-types */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2914(t5,t2,t3,t4);}

/* k2945 in k2941 in merge-result-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2947,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* merge-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2712(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2712,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(C_word)C_i_car(t3);
if(C_truep((C_truep((C_word)C_eqp(t4,lf[65]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t4,lf[66]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t5=t3;
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[67]);}}}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_eqp(lf[65],t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2747,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t7=(C_word)C_i_car(t3);
t8=t6;
f_2747(t8,(C_word)C_eqp(lf[65],t7));}
else{
t7=t6;
f_2747(t7,C_SCHEME_FALSE);}}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_eqp(lf[66],t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2808,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t9=(C_word)C_i_car(t3);
t10=t8;
f_2808(t10,(C_word)C_eqp(lf[66],t9));}
else{
t9=t8;
f_2808(t9,C_SCHEME_FALSE);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2872,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_i_car(t2);
t10=(C_word)C_i_car(t3);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
t12=(C_word)C_a_i_cons(&a,2,t9,t11);
t13=(C_word)C_a_i_cons(&a,2,lf[23],t12);
/* scrutinizer.scm: 256  simplify */
t14=((C_word*)((C_word*)t0)[3])[1];
f_2173(t14,t8,t13);}}}}

/* k2870 in merge-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2876,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* scrutinizer.scm: 257  merge-argument-types */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2712(t5,t2,t3,t4);}

/* k2874 in k2870 in merge-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2876,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k2806 in merge-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2808(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2808,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2819,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[5]);
t4=(C_word)C_i_cadr(((C_word*)t0)[4]);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,t3,t5);
t7=(C_word)C_a_i_cons(&a,2,lf[23],t6);
/* scrutinizer.scm: 253  simplify */
t8=((C_word*)((C_word*)t0)[2])[1];
f_2173(t8,t2,t7);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[69]);}}

/* k2817 in k2806 in merge-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2819,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2823,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2827,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_cddr(((C_word*)t0)[4]);
t5=(C_word)C_i_cddr(((C_word*)t0)[3]);
/* scrutinizer.scm: 254  merge-argument-types */
t6=((C_word*)((C_word*)t0)[2])[1];
f_2712(t6,t3,t4,t5);}

/* k2825 in k2817 in k2806 in merge-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k2821 in k2817 in k2806 in merge-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2823,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[66],t2));}

/* k2745 in merge-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2747(C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2747,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2758,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
t4=f_2690(t3);
t5=(C_word)C_i_cdr(((C_word*)t0)[3]);
t6=f_2690(t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,t4,t7);
t9=(C_word)C_a_i_cons(&a,2,lf[23],t8);
/* scrutinizer.scm: 246  simplify */
t10=((C_word*)((C_word*)t0)[2])[1];
f_2173(t10,t2,t9);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[68]);}}

/* k2756 in k2745 in merge-argument-types in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2758,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[65],t2));}

/* rest-type in ##compiler#scrutinize in k1510 in k1507 */
static C_word C_fcall f_2690(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
if(C_truep((C_word)C_i_nullp(t1))){
return(lf[8]);}
else{
t2=(C_word)C_i_car(t1);
t3=(C_word)C_eqp(lf[64],t2);
return((C_truep(t3)?lf[8]:(C_word)C_i_car(t1)));}}

/* named? in ##compiler#scrutinize in k1510 in k1507 */
static C_word C_fcall f_2650(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_stack_check;
if(C_truep((C_word)C_i_pairp(t1))){
t2=(C_word)C_i_car(t1);
t3=(C_word)C_eqp(lf[30],t2);
if(C_truep(t3)){
t4=(C_word)C_i_cadr(t1);
t5=(C_word)C_i_nullp(t4);
if(C_truep(t5)){
return((C_word)C_i_not(t5));}
else{
t6=(C_word)C_i_cadr(t1);
t7=(C_word)C_i_pairp(t6);
return((C_word)C_i_not(t7));}}
else{
return(C_SCHEME_FALSE);}}
else{
return(C_SCHEME_FALSE);}}

/* simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2182(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2182,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2188,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* scrutinizer.scm: 172  call/cc */
((C_proc3)C_retrieve_proc(*((C_word*)lf[63]+1)))(3,*((C_word*)lf[63]+1),t1,t3);}

/* a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2188(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[21],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2188,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[8]))){
t3=(C_word)C_i_car(((C_word*)t0)[8]);
t4=(C_word)C_eqp(t3,lf[23]);
if(C_truep(t4)){
t5=(C_word)C_i_length(((C_word*)t0)[8]);
t6=(C_word)C_eqp(C_fix(2),t5);
if(C_truep(t6)){
t7=(C_word)C_i_cadr(((C_word*)t0)[8]);
/* scrutinizer.scm: 177  simplify */
t8=((C_word*)((C_word*)t0)[7])[1];
f_2173(t8,t1,t7);}
else{
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2223,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t8=(C_word)C_i_cdr(((C_word*)t0)[8]);
/* scrutinizer.scm: 178  every */
((C_proc4)C_retrieve_symbol_proc(lf[21]))(4,*((C_word*)lf[21]+1),t7,((C_word*)((C_word*)t0)[2])[1],t8);}}
else{
t5=(C_word)C_eqp(t3,lf[30]);
if(C_truep(t5)){
t6=f_2650(((C_word*)t0)[8]);
t7=(C_truep(t6)?(C_word)C_i_cadr(((C_word*)t0)[8]):C_SCHEME_FALSE);
t8=(C_truep(t7)?(C_word)C_i_cdddr(((C_word*)t0)[8]):(C_word)C_i_cddr(((C_word*)t0)[8]));
t9=(C_truep(t7)?(C_word)C_a_i_list(&a,1,t7):C_SCHEME_END_OF_LIST);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_FALSE;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2588,a[2]=((C_word*)t0)[7],a[3]=t8,a[4]=t9,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t15=(C_truep(t7)?(C_word)C_i_caddr(((C_word*)t0)[8]):(C_word)C_i_cadr(((C_word*)t0)[8]));
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2594,a[2]=((C_word*)t0)[7],a[3]=t11,a[4]=t17,a[5]=t13,tmp=(C_word)a,a+=6,tmp));
t19=((C_word*)t17)[1];
f_2594(t19,t14,t15);}
else{
t6=((C_word*)t0)[8];
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}}
else{
t3=((C_word*)t0)[8];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* loop455 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2594(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2594,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2623,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g471472 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2173(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2621 in loop455 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2623(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2623,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop455468 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2594(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop455468 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2594(t6,((C_word*)t0)[3],t5);}}

/* k2586 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2588(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2588,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2543,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_eqp(lf[8],((C_word*)t0)[3]);
if(C_truep(t4)){
/* scrutinizer.scm: 221  append */
((C_proc6)C_retrieve_proc(*((C_word*)lf[52]+1)))(6,*((C_word*)lf[52]+1),((C_word*)t0)[5],lf[62],((C_word*)t0)[4],t2,lf[8]);}
else{
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t10,a[5]=t8,tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_2551(t12,t3,((C_word*)t0)[3]);}}

/* loop478 in k2586 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2551(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2551,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2580,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g494495 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2173(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2578 in loop478 in k2586 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2580(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2580,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop478491 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2551(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop478491 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2551(t6,((C_word*)t0)[3],t5);}}

/* k2541 in k2586 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 221  append */
((C_proc6)C_retrieve_proc(*((C_word*)lf[52]+1)))(6,*((C_word*)lf[52]+1),((C_word*)t0)[4],lf[61],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2223,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2229,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2326,tmp=(C_word)a,a+=2,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* scrutinizer.scm: 179  any */
((C_proc4)C_retrieve_symbol_proc(lf[56]))(4,*((C_word*)lf[56]+1),t2,t3,t4);}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2469,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* scrutinizer.scm: 197  append-map */
((C_proc4)C_retrieve_symbol_proc(lf[60]))(4,*((C_word*)lf[60]+1),t2,t3,t4);}}

/* a2468 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2469(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2469,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2473,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm: 199  simplify */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2173(t4,t3,t2);}

/* k2471 in a2468 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2473,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2479,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t1))){
t3=(C_word)C_i_car(t1);
t4=t2;
f_2479(t4,(C_word)C_eqp(lf[23],t3));}
else{
t3=t2;
f_2479(t3,C_SCHEME_FALSE);}}

/* k2477 in k2471 in a2468 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2479(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2479,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_cdr(((C_word*)t0)[3]));}
else{
t2=(C_word)C_eqp(((C_word*)t0)[3],lf[14]);
if(C_truep(t2)){
/* scrutinizer.scm: 203  return */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[4],lf[14]);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,1,((C_word*)t0)[3]));}}}

/* k2335 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2337,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2340,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2379,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2379(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* loop in k2335 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2379(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2379,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* scrutinizer.scm: 207  reverse */
((C_proc3)C_retrieve_proc(*((C_word*)lf[59]+1)))(3,*((C_word*)lf[59]+1),t1,t3);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_eqp(lf[8],t4);
if(C_truep(t5)){
/* scrutinizer.scm: 208  return */
t6=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t6))(3,t6,t1,lf[8]);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2404,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2451,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_i_cdr(t2);
/* scrutinizer.scm: 209  any */
((C_proc4)C_retrieve_symbol_proc(lf[56]))(4,*((C_word*)lf[56]+1),t6,t7,t8);}}}

/* a2450 in loop in k2335 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2451,3,t0,t1,t2);}
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* g415416 */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3526(t4,t1,t3,t2);}

/* k2402 in loop in k2335 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2404,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
/* scrutinizer.scm: 210  loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2379(t3,((C_word*)t0)[4],t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2417,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm: 211  any */
((C_proc4)C_retrieve_symbol_proc(lf[56]))(4,*((C_word*)lf[56]+1),t2,t3,((C_word*)t0)[3]);}}

/* a2440 in k2402 in loop in k2335 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2441(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2441,3,t0,t1,t2);}
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* g424425 */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3526(t4,t1,t3,t2);}

/* k2415 in k2402 in loop in k2335 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2417,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* scrutinizer.scm: 212  loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2379(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_car(((C_word*)t0)[5]);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[2]);
/* scrutinizer.scm: 213  loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2379(t5,((C_word*)t0)[3],t2,t4);}}

/* k2338 in k2335 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2340,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_equalp(t1,t2))){
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_retrieve(lf[51]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2360,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2367,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2369,tmp=(C_word)a,a+=2,tmp);
/* scrutinizer.scm: 217  any */
((C_proc4)C_retrieve_symbol_proc(lf[56]))(4,*((C_word*)lf[56]+1),t5,t6,t1);}}

/* a2368 in k2338 in k2335 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2369(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2369,3,t0,t1,t2);}
t3=*((C_word*)lf[55]+1);
/* g445446 */
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,lf[8]);}

/* k2365 in k2338 in k2335 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* ##sys#append */
t2=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],lf[58],C_SCHEME_END_OF_LIST);}
else{
t2=((C_word*)t0)[2];
/* ##sys#append */
t3=*((C_word*)lf[57]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,C_SCHEME_END_OF_LIST);}}

/* k2358 in k2338 in k2335 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2360,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[23],t1);
/* scrutinizer.scm: 217  simplify */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2173(t3,((C_word*)t0)[2],t2);}

/* a2325 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2326(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2326,3,t0,t1,t2);}
t3=*((C_word*)lf[55]+1);
/* g367368 */
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,lf[30],t2);}

/* k2227 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2229,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[30]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2234,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* scrutinizer.scm: 181  reduce */
((C_proc5)C_retrieve_symbol_proc(lf[54]))(5,*((C_word*)lf[54]+1),((C_word*)t0)[6],t2,C_SCHEME_FALSE,t3);}}

/* a2233 in k2227 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2234(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[12],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2234,4,t0,t1,t2,t3);}
t4=f_2650(t2);
t5=(C_truep(t4)?(C_word)C_i_cadr(t2):C_SCHEME_FALSE);
t6=(C_truep(t5)?(C_word)C_i_caddr(t2):(C_word)C_i_cadr(t2));
t7=(C_truep(t5)?(C_word)C_i_cdddr(t2):(C_word)C_i_cddr(t2));
t8=f_2650(t3);
t9=(C_truep(t8)?(C_word)C_i_cadr(t3):C_SCHEME_FALSE);
t10=(C_truep(t9)?(C_word)C_i_caddr(t3):(C_word)C_i_cadr(t3));
t11=(C_truep(t9)?(C_word)C_i_cdddr(t3):(C_word)C_i_cddr(t3));
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2260,a[2]=t10,a[3]=t6,a[4]=((C_word*)t0)[2],a[5]=t11,a[6]=t7,a[7]=((C_word*)t0)[3],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t5)){
if(C_truep(t9)){
t13=(C_word)C_eqp(t5,t9);
t14=t12;
f_2260(t14,(C_truep(t13)?(C_word)C_a_i_list(&a,1,t5):C_SCHEME_END_OF_LIST));}
else{
t13=t12;
f_2260(t13,C_SCHEME_END_OF_LIST);}}
else{
t13=t12;
f_2260(t13,C_SCHEME_END_OF_LIST);}}

/* k2258 in a2233 in k2227 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2260(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2260,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2272,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
/* scrutinizer.scm: 192  merge-argument-types */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2712(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2270 in k2258 in a2233 in k2227 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2272,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2268,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* scrutinizer.scm: 193  merge-result-types */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2914(t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2266 in k2270 in k2258 in a2233 in k2227 in k2221 in a2187 in simplify1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 189  append */
((C_proc6)C_retrieve_proc(*((C_word*)lf[52]+1)))(6,*((C_word*)lf[52]+1),((C_word*)t0)[4],lf[53],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* simplify in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2173(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2173,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2177,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm: 168  simplify1 */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2182(t4,t3,t2);}

/* k2175 in simplify in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_retrieve(lf[51]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* result-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2086(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_save_and_reclaim((void*)trf_2086,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(lf[8],t2);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,lf[47]);}
else{
t4=(C_word)C_i_length(t2);
t5=C_retrieve(lf[41]);
t6=(C_word)C_eqp(t5,C_fix(1));
t7=(C_truep(t6)?lf[42]:lf[43]);
t8=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t8)){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,lf[48]);}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2108,a[2]=t4,a[3]=t7,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t9);}}}

/* k2106 in result-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2108,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2111,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],t1);}

/* k2109 in k2106 in result-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2114,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[50],((C_word*)t0)[5]);}

/* k2112 in k2109 in k2106 in result-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2114,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2117,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k2115 in k2112 in k2109 in k2106 in result-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2117,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2120,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[49],((C_word*)t0)[5]);}

/* k2118 in k2115 in k2112 in k2109 in k2106 in result-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2120,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2123,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k2121 in k2118 in k2115 in k2112 in k2109 in k2106 in result-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[4]);}

/* k2124 in k2121 in k2118 in k2115 in k2112 in k2109 in k2106 in result-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2126(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2126,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2129,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2136,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2138,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t9,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2138(t11,t7,((C_word*)t0)[2]);}

/* loop315 in k2124 in k2121 in k2118 in k2115 in k2112 in k2109 in k2106 in result-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2138(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2138,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2167,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g331332 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1825(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2165 in loop315 in k2124 in k2121 in k2118 in k2115 in k2112 in k2109 in k2106 in result-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2167(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2167,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop315328 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2138(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop315328 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2138(t6,((C_word*)t0)[3],t5);}}

/* k2134 in k2124 in k2121 in k2118 in k2115 in k2112 in k2109 in k2106 in result-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2127 in k2124 in k2121 in k2118 in k2115 in k2112 in k2109 in k2106 in result-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* argument-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2005(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2005,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_length(t2);
t4=C_retrieve(lf[41]);
t5=(C_word)C_eqp(t4,C_fix(1));
t6=(C_truep(t5)?lf[42]:lf[43]);
t7=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[44]);}
else{
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2021,a[2]=t3,a[3]=t6,a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t8);}}

/* k2019 in argument-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2021,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2024,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],t1);}

/* k2022 in k2019 in argument-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2024,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[46],((C_word*)t0)[5]);}

/* k2025 in k2022 in k2019 in argument-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2027,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2030,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k2028 in k2025 in k2022 in k2019 in argument-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[45],((C_word*)t0)[5]);}

/* k2031 in k2028 in k2025 in k2022 in k2019 in argument-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2033,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2036,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k2034 in k2031 in k2028 in k2025 in k2022 in k2019 in argument-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2036,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(32),((C_word*)t0)[4]);}

/* k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in k2019 in argument-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2039(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2039,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2042,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2049,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2051,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t9,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_2051(t11,t7,((C_word*)t0)[2]);}

/* loop277 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in k2019 in argument-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_2051(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2051,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2080,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g293294 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1825(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2078 in loop277 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in k2019 in argument-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2080(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2080,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop277290 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2051(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop277290 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2051(t6,((C_word*)t0)[3],t5);}}

/* k2047 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in k2019 in argument-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k2040 in k2037 in k2034 in k2031 in k2028 in k2025 in k2022 in k2019 in argument-string in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_2042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* typename in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_1825(C_word t0,C_word t1,C_word t2){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1825,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_eqp(t3,lf[8]);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,lf[26]);}
else{
t5=(C_word)C_eqp(t3,lf[27]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[28]);}
else{
if(C_truep((C_word)C_i_symbolp(t2))){
/* scrutinizer.scm: 130  symbol->string */
((C_proc3)C_retrieve_proc(*((C_word*)lf[29]+1)))(3,*((C_word*)lf[29]+1),t1,t2);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t6=(C_word)C_i_car(t2);
t7=(C_word)C_eqp(t6,lf[30]);
if(C_truep(t7)){
t8=(C_word)C_i_cadr(t2);
t9=(C_word)C_i_stringp(t8);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1871,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t9)){
t11=t10;
f_1871(t11,t9);}
else{
t11=(C_word)C_i_cadr(t2);
t12=t10;
f_1871(t12,(C_word)C_i_symbolp(t11));}}
else{
t8=(C_word)C_eqp(t6,lf[23]);
if(C_truep(t8)){
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1936,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t14=(C_word)C_i_cdr(t2);
t15=C_SCHEME_UNDEFINED;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_set_block_item(t16,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1942,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=t16,a[5]=t12,tmp=(C_word)a,a+=6,tmp));
t18=((C_word*)t16)[1];
f_1942(t18,t13,t14);}
else{
t9=(C_word)C_eqp(t6,lf[36]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1984,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t10);}
else{
/* scrutinizer.scm: 145  bomb */
((C_proc4)C_retrieve_symbol_proc(lf[38]))(4,*((C_word*)lf[38]+1),t1,lf[39],t2);}}}}
else{
/* scrutinizer.scm: 146  bomb */
((C_proc4)C_retrieve_symbol_proc(lf[38]))(4,*((C_word*)lf[38]+1),t1,lf[40],t2);}}}}}

/* k1982 in typename in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1984,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1987,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[37],t1);}

/* k1985 in k1982 in typename in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1990,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[2]);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,t3,((C_word*)t0)[3]);}

/* k1988 in k1985 in k1982 in typename in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop239 in typename in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_1942(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1942,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1971,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g255256 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1825(t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1969 in loop239 in typename in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1971(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1971,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop239252 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_1942(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop239252 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_1942(t6,((C_word*)t0)[3],t5);}}

/* k1934 in typename in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 140  string-intersperse */
((C_proc4)C_retrieve_symbol_proc(lf[34]))(4,*((C_word*)lf[34]+1),((C_word*)t0)[2],t1,lf[35]);}

/* k1869 in typename in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_1871(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1871,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* scrutinizer.scm: 135  ->string */
((C_proc3)C_retrieve_symbol_proc(lf[31]))(3,*((C_word*)lf[31]+1),((C_word*)t0)[4],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t2);}}

/* k1879 in k1869 in typename in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1884,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[33],t1);}

/* k1882 in k1879 in k1869 in typename in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1884,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1887,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1908,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* scrutinizer.scm: 137  argument-string */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2005(t5,t3,t4);}

/* k1906 in k1882 in k1879 in k1869 in typename in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1885 in k1882 in k1879 in k1869 in typename in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1887,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[32],((C_word*)t0)[4]);}

/* k1888 in k1885 in k1882 in k1879 in k1869 in typename in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1890,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1893,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1900,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cddr(((C_word*)t0)[3]);
/* scrutinizer.scm: 138  result-string */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2086(t5,t3,t4);}

/* k1898 in k1888 in k1885 in k1882 in k1879 in k1869 in typename in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1891 in k1888 in k1885 in k1882 in k1879 in k1869 in typename in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* always-true in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_1784(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1784,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1788,a[2]=t2,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* scrutinizer.scm: 116  always-true1 */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1752(3,t6,t5,t2);}

/* k1786 in always-true in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1788,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1791,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t3);}
else{
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k1796 in k1786 in always-true in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1798,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1801,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[25],t1);}

/* k1799 in k1796 in k1786 in always-true in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1801,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1804,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[5]);}

/* k1802 in k1799 in k1796 in k1786 in always-true in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1804,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1807,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[24],((C_word*)t0)[4]);}

/* k1805 in k1802 in k1799 in k1796 in k1786 in always-true in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1807,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1810,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k1808 in k1805 in k1802 in k1799 in k1796 in k1786 in always-true in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1810,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1813,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[4]);}

/* k1811 in k1808 in k1805 in k1802 in k1799 in k1796 in k1786 in always-true in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1813,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1816,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1823,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm: 123  pp-fragment */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4132(t4,t3,((C_word*)t0)[2]);}

/* k1821 in k1811 in k1808 in k1805 in k1802 in k1799 in k1796 in k1786 in always-true in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1814 in k1811 in k1808 in k1805 in k1802 in k1799 in k1796 in k1786 in always-true in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1816,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1819,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),t2,((C_word*)t0)[2]);}

/* k1817 in k1814 in k1811 in k1808 in k1805 in k1802 in k1799 in k1796 in k1786 in always-true in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 118  report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1789 in k1786 in always-true in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* always-true1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1752(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1752,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1759,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=t3;
f_1759(t5,(C_word)C_eqp(lf[23],t4));}
else{
t4=t3;
f_1759(t4,C_SCHEME_FALSE);}}

/* k1757 in always-true1 in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_1759(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* scrutinizer.scm: 112  every */
((C_proc4)C_retrieve_symbol_proc(lf[21]))(4,*((C_word*)lf[21]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t2);}
else{
t2=(C_word)C_i_memq(((C_word*)t0)[4],lf[22]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_SCHEME_FALSE:C_SCHEME_TRUE));}}

/* variable-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_1679(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1679,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1686,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=t2,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1743,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm: 97   get */
((C_proc5)C_retrieve_symbol_proc(lf[19]))(5,*((C_word*)lf[19]+1),t6,((C_word*)t0)[3],t2,lf[20]);}

/* k1741 in variable-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1743,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1750,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* scrutinizer.scm: 98   ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t2,((C_word*)t0)[2],lf[18]);}
else{
t2=((C_word*)t0)[3];
f_1686(t2,C_SCHEME_FALSE);}}

/* k1748 in k1741 in variable-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1686(t2,(C_word)C_i_not(t1));}

/* k1684 in variable-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_1686(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1686,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[8]);}
else{
t2=(C_word)C_i_assq(((C_word*)t0)[7],((C_word*)t0)[6]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1693,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* g161162 */
t4=t3;
f_1693(t4,((C_word*)t0)[8],t2);}
else{
/* scrutinizer.scm: 109  global-result */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1637(t3,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[4]);}}}

/* g161 in k1684 in variable-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_1693(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1693,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_eqp(lf[14],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1703,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1707,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t6);}
else{
t5=(C_word)C_i_cdr(t2);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,1,t5));}}

/* k1705 in g161 in k1684 in variable-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1707,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[17],t1);}

/* k1708 in k1705 in g161 in k1684 in variable-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1710,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1713,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1723,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scrutinizer.scm: 106  real-name */
((C_proc4)C_retrieve_symbol_proc(lf[16]))(4,*((C_word*)lf[16]+1),t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1721 in k1708 in k1705 in g161 in k1684 in variable-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1711 in k1708 in k1705 in g161 in k1684 in variable-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1716,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[15],((C_word*)t0)[2]);}

/* k1714 in k1711 in k1708 in k1705 in g161 in k1684 in variable-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1716,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1719,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),t2,((C_word*)t0)[2]);}

/* k1717 in k1714 in k1711 in k1708 in k1705 in g161 in k1684 in variable-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 103  report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1701 in g161 in k1684 in variable-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[8]);}

/* global-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_1637(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1637,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1641,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* scrutinizer.scm: 83   ##sys#get */
((C_proc4)C_retrieve_symbol_proc(lf[12]))(4,*((C_word*)lf[12]+1),t4,t2,lf[13]);}

/* k1639 in global-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1641,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1645,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* g130131 */
t3=t2;
f_1645(t3,((C_word*)t0)[2],t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[8]);}}

/* g130 in k1639 in global-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_fcall f_1645(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1645,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,lf[7]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1655,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1659,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* open-output-string */
((C_proc2)C_retrieve_symbol_proc(lf[11]))(2,*((C_word*)lf[11]+1),t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,1,t2));}}

/* k1657 in g130 in k1639 in global-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1659,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1662,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,lf[10],t1);}

/* k1660 in k1657 in g130 in k1639 in global-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1662,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1665,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1663 in k1660 in k1657 in g130 in k1639 in global-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1665,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* write-char/port */
t3=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(39),((C_word*)t0)[2]);}

/* k1666 in k1663 in k1660 in k1657 in g130 in k1639 in global-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1668,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1671,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* get-output-string */
((C_proc3)C_retrieve_symbol_proc(lf[9]))(3,*((C_word*)lf[9]+1),t2,((C_word*)t0)[2]);}

/* k1669 in k1666 in k1663 in k1660 in k1657 in g130 in k1639 in global-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scrutinizer.scm: 90   report */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3947(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1653 in g130 in k1639 in global-result in ##compiler#scrutinize in k1510 in k1507 */
static void C_ccall f_1655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[8]);}

/* d in k1510 in k1507 */
static void C_ccall f_1514(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1514r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1514r(t0,t1,t2,t3);}}

static void C_ccall f_1514r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
if(C_truep((C_word)C_fudge(C_fix(13)))){
t4=*((C_word*)lf[1]+1);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1524,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[4]+1)))(4,*((C_word*)lf[4]+1),t5,lf[5],t4);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1522 in d in k1510 in k1507 */
static void C_ccall f_1524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1524,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1527,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_apply(6,0,t2,C_retrieve(lf[3]),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1525 in k1522 in d in k1510 in k1507 */
static void C_ccall f_1527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=C_retrieve(lf[2]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[380] = {
{"toplevel:scrutinizer_scm",(void*)C_scrutinizer_toplevel},
{"f_1509:scrutinizer_scm",(void*)f_1509},
{"f_1512:scrutinizer_scm",(void*)f_1512},
{"f_5649:scrutinizer_scm",(void*)f_5649},
{"f_5653:scrutinizer_scm",(void*)f_5653},
{"f_5738:scrutinizer_scm",(void*)f_5738},
{"f_5656:scrutinizer_scm",(void*)f_5656},
{"f_5725:scrutinizer_scm",(void*)f_5725},
{"f_5728:scrutinizer_scm",(void*)f_5728},
{"f_5731:scrutinizer_scm",(void*)f_5731},
{"f_5662:scrutinizer_scm",(void*)f_5662},
{"f_5669:scrutinizer_scm",(void*)f_5669},
{"f_5671:scrutinizer_scm",(void*)f_5671},
{"f_5686:scrutinizer_scm",(void*)f_5686},
{"f_5698:scrutinizer_scm",(void*)f_5698},
{"f_5692:scrutinizer_scm",(void*)f_5692},
{"f_5711:scrutinizer_scm",(void*)f_5711},
{"f_1532:scrutinizer_scm",(void*)f_1532},
{"f_4841:scrutinizer_scm",(void*)f_4841},
{"f_5593:scrutinizer_scm",(void*)f_5593},
{"f_5608:scrutinizer_scm",(void*)f_5608},
{"f_5601:scrutinizer_scm",(void*)f_5601},
{"f_5591:scrutinizer_scm",(void*)f_5591},
{"f_5459:scrutinizer_scm",(void*)f_5459},
{"f_5473:scrutinizer_scm",(void*)f_5473},
{"f_5475:scrutinizer_scm",(void*)f_5475},
{"f_5558:scrutinizer_scm",(void*)f_5558},
{"f_5488:scrutinizer_scm",(void*)f_5488},
{"f_5506:scrutinizer_scm",(void*)f_5506},
{"f_5514:scrutinizer_scm",(void*)f_5514},
{"f_5517:scrutinizer_scm",(void*)f_5517},
{"f_5546:scrutinizer_scm",(void*)f_5546},
{"f_5549:scrutinizer_scm",(void*)f_5549},
{"f_5552:scrutinizer_scm",(void*)f_5552},
{"f_5540:scrutinizer_scm",(void*)f_5540},
{"f_5520:scrutinizer_scm",(void*)f_5520},
{"f_5523:scrutinizer_scm",(void*)f_5523},
{"f_5526:scrutinizer_scm",(void*)f_5526},
{"f_5529:scrutinizer_scm",(void*)f_5529},
{"f_5532:scrutinizer_scm",(void*)f_5532},
{"f_5536:scrutinizer_scm",(void*)f_5536},
{"f_5462:scrutinizer_scm",(void*)f_5462},
{"f_5335:scrutinizer_scm",(void*)f_5335},
{"f_5421:scrutinizer_scm",(void*)f_5421},
{"f_5424:scrutinizer_scm",(void*)f_5424},
{"f_5427:scrutinizer_scm",(void*)f_5427},
{"f_5430:scrutinizer_scm",(void*)f_5430},
{"f_5433:scrutinizer_scm",(void*)f_5433},
{"f_5437:scrutinizer_scm",(void*)f_5437},
{"f_5338:scrutinizer_scm",(void*)f_5338},
{"f_5413:scrutinizer_scm",(void*)f_5413},
{"f_5363:scrutinizer_scm",(void*)f_5363},
{"f_5370:scrutinizer_scm",(void*)f_5370},
{"f_5373:scrutinizer_scm",(void*)f_5373},
{"f_5376:scrutinizer_scm",(void*)f_5376},
{"f_5379:scrutinizer_scm",(void*)f_5379},
{"f_5382:scrutinizer_scm",(void*)f_5382},
{"f_5385:scrutinizer_scm",(void*)f_5385},
{"f_5388:scrutinizer_scm",(void*)f_5388},
{"f_5391:scrutinizer_scm",(void*)f_5391},
{"f_5394:scrutinizer_scm",(void*)f_5394},
{"f_5344:scrutinizer_scm",(void*)f_5344},
{"f_5219:scrutinizer_scm",(void*)f_5219},
{"f_5313:scrutinizer_scm",(void*)f_5313},
{"f_5226:scrutinizer_scm",(void*)f_5226},
{"f_5266:scrutinizer_scm",(void*)f_5266},
{"f_5268:scrutinizer_scm",(void*)f_5268},
{"f_5262:scrutinizer_scm",(void*)f_5262},
{"f_5229:scrutinizer_scm",(void*)f_5229},
{"f_5251:scrutinizer_scm",(void*)f_5251},
{"f_5255:scrutinizer_scm",(void*)f_5255},
{"f_5232:scrutinizer_scm",(void*)f_5232},
{"f_5239:scrutinizer_scm",(void*)f_5239},
{"f_5125:scrutinizer_scm",(void*)f_5125},
{"f_5169:scrutinizer_scm",(void*)f_5169},
{"f_5172:scrutinizer_scm",(void*)f_5172},
{"f_5197:scrutinizer_scm",(void*)f_5197},
{"f_5175:scrutinizer_scm",(void*)f_5175},
{"f_5178:scrutinizer_scm",(void*)f_5178},
{"f_5181:scrutinizer_scm",(void*)f_5181},
{"f_5185:scrutinizer_scm",(void*)f_5185},
{"f_5146:scrutinizer_scm",(void*)f_5146},
{"f_5161:scrutinizer_scm",(void*)f_5161},
{"f_5143:scrutinizer_scm",(void*)f_5143},
{"f_5110:scrutinizer_scm",(void*)f_5110},
{"f_4936:scrutinizer_scm",(void*)f_4936},
{"f_4939:scrutinizer_scm",(void*)f_4939},
{"f_4942:scrutinizer_scm",(void*)f_4942},
{"f_4945:scrutinizer_scm",(void*)f_4945},
{"f_4951:scrutinizer_scm",(void*)f_4951},
{"f_5084:scrutinizer_scm",(void*)f_5084},
{"f_5080:scrutinizer_scm",(void*)f_5080},
{"f_5026:scrutinizer_scm",(void*)f_5026},
{"f_5033:scrutinizer_scm",(void*)f_5033},
{"f_5036:scrutinizer_scm",(void*)f_5036},
{"f_5039:scrutinizer_scm",(void*)f_5039},
{"f_5042:scrutinizer_scm",(void*)f_5042},
{"f_5052:scrutinizer_scm",(void*)f_5052},
{"f_5045:scrutinizer_scm",(void*)f_5045},
{"f_5048:scrutinizer_scm",(void*)f_5048},
{"f_4954:scrutinizer_scm",(void*)f_4954},
{"f_4959:scrutinizer_scm",(void*)f_4959},
{"f_5009:scrutinizer_scm",(void*)f_5009},
{"f_4972:scrutinizer_scm",(void*)f_4972},
{"f_4990:scrutinizer_scm",(void*)f_4990},
{"f_4872:scrutinizer_scm",(void*)f_4872},
{"f_4809:scrutinizer_scm",(void*)f_4809},
{"f_4548:scrutinizer_scm",(void*)f_4548},
{"f_4581:scrutinizer_scm",(void*)f_4581},
{"f_4583:scrutinizer_scm",(void*)f_4583},
{"f_4644:scrutinizer_scm",(void*)f_4644},
{"f_4655:scrutinizer_scm",(void*)f_4655},
{"f_4613:scrutinizer_scm",(void*)f_4613},
{"f_4574:scrutinizer_scm",(void*)f_4574},
{"f_4565:scrutinizer_scm",(void*)f_4565},
{"f_4506:scrutinizer_scm",(void*)f_4506},
{"f_4152:scrutinizer_scm",(void*)f_4152},
{"f_4496:scrutinizer_scm",(void*)f_4496},
{"f_4488:scrutinizer_scm",(void*)f_4488},
{"f_4484:scrutinizer_scm",(void*)f_4484},
{"f_4439:scrutinizer_scm",(void*)f_4439},
{"f_4446:scrutinizer_scm",(void*)f_4446},
{"f_4449:scrutinizer_scm",(void*)f_4449},
{"f_4474:scrutinizer_scm",(void*)f_4474},
{"f_4452:scrutinizer_scm",(void*)f_4452},
{"f_4455:scrutinizer_scm",(void*)f_4455},
{"f_4458:scrutinizer_scm",(void*)f_4458},
{"f_4461:scrutinizer_scm",(void*)f_4461},
{"f_4464:scrutinizer_scm",(void*)f_4464},
{"f_4467:scrutinizer_scm",(void*)f_4467},
{"f_4470:scrutinizer_scm",(void*)f_4470},
{"f_4238:scrutinizer_scm",(void*)f_4238},
{"f_4257:scrutinizer_scm",(void*)f_4257},
{"f_4387:scrutinizer_scm",(void*)f_4387},
{"f_4390:scrutinizer_scm",(void*)f_4390},
{"f_4432:scrutinizer_scm",(void*)f_4432},
{"f_4393:scrutinizer_scm",(void*)f_4393},
{"f_4396:scrutinizer_scm",(void*)f_4396},
{"f_4399:scrutinizer_scm",(void*)f_4399},
{"f_4402:scrutinizer_scm",(void*)f_4402},
{"f_4405:scrutinizer_scm",(void*)f_4405},
{"f_4408:scrutinizer_scm",(void*)f_4408},
{"f_4411:scrutinizer_scm",(void*)f_4411},
{"f_4414:scrutinizer_scm",(void*)f_4414},
{"f_4417:scrutinizer_scm",(void*)f_4417},
{"f_4420:scrutinizer_scm",(void*)f_4420},
{"f_4264:scrutinizer_scm",(void*)f_4264},
{"f_4283:scrutinizer_scm",(void*)f_4283},
{"f_4314:scrutinizer_scm",(void*)f_4314},
{"f_4321:scrutinizer_scm",(void*)f_4321},
{"f_4324:scrutinizer_scm",(void*)f_4324},
{"f_4327:scrutinizer_scm",(void*)f_4327},
{"f_4330:scrutinizer_scm",(void*)f_4330},
{"f_4333:scrutinizer_scm",(void*)f_4333},
{"f_4336:scrutinizer_scm",(void*)f_4336},
{"f_4359:scrutinizer_scm",(void*)f_4359},
{"f_4339:scrutinizer_scm",(void*)f_4339},
{"f_4342:scrutinizer_scm",(void*)f_4342},
{"f_4345:scrutinizer_scm",(void*)f_4345},
{"f_4348:scrutinizer_scm",(void*)f_4348},
{"f_4351:scrutinizer_scm",(void*)f_4351},
{"f_4296:scrutinizer_scm",(void*)f_4296},
{"f_4267:scrutinizer_scm",(void*)f_4267},
{"f_4733:scrutinizer_scm",(void*)f_4733},
{"f_4741:scrutinizer_scm",(void*)f_4741},
{"f_4743:scrutinizer_scm",(void*)f_4743},
{"f_4770:scrutinizer_scm",(void*)f_4770},
{"f_4270:scrutinizer_scm",(void*)f_4270},
{"f_4243:scrutinizer_scm",(void*)f_4243},
{"f_4155:scrutinizer_scm",(void*)f_4155},
{"f_4159:scrutinizer_scm",(void*)f_4159},
{"f_4162:scrutinizer_scm",(void*)f_4162},
{"f_4223:scrutinizer_scm",(void*)f_4223},
{"f_4165:scrutinizer_scm",(void*)f_4165},
{"f_4168:scrutinizer_scm",(void*)f_4168},
{"f_4181:scrutinizer_scm",(void*)f_4181},
{"f_4184:scrutinizer_scm",(void*)f_4184},
{"f_4193:scrutinizer_scm",(void*)f_4193},
{"f_4196:scrutinizer_scm",(void*)f_4196},
{"f_4199:scrutinizer_scm",(void*)f_4199},
{"f_4202:scrutinizer_scm",(void*)f_4202},
{"f_4178:scrutinizer_scm",(void*)f_4178},
{"f_4171:scrutinizer_scm",(void*)f_4171},
{"f_4132:scrutinizer_scm",(void*)f_4132},
{"f_4142:scrutinizer_scm",(void*)f_4142},
{"f_4150:scrutinizer_scm",(void*)f_4150},
{"f_4140:scrutinizer_scm",(void*)f_4140},
{"f_4078:scrutinizer_scm",(void*)f_4078},
{"f_4082:scrutinizer_scm",(void*)f_4082},
{"f_4087:scrutinizer_scm",(void*)f_4087},
{"f_4126:scrutinizer_scm",(void*)f_4126},
{"f_4122:scrutinizer_scm",(void*)f_4122},
{"f_4114:scrutinizer_scm",(void*)f_4114},
{"f_3957:scrutinizer_scm",(void*)f_3957},
{"f_4023:scrutinizer_scm",(void*)f_4023},
{"f_4036:scrutinizer_scm",(void*)f_4036},
{"f_4039:scrutinizer_scm",(void*)f_4039},
{"f_4063:scrutinizer_scm",(void*)f_4063},
{"f_4042:scrutinizer_scm",(void*)f_4042},
{"f_4045:scrutinizer_scm",(void*)f_4045},
{"f_4055:scrutinizer_scm",(void*)f_4055},
{"f_4048:scrutinizer_scm",(void*)f_4048},
{"f_3998:scrutinizer_scm",(void*)f_3998},
{"f_4001:scrutinizer_scm",(void*)f_4001},
{"f_4014:scrutinizer_scm",(void*)f_4014},
{"f_4004:scrutinizer_scm",(void*)f_4004},
{"f_4007:scrutinizer_scm",(void*)f_4007},
{"f_3960:scrutinizer_scm",(void*)f_3960},
{"f_3967:scrutinizer_scm",(void*)f_3967},
{"f_3970:scrutinizer_scm",(void*)f_3970},
{"f_3983:scrutinizer_scm",(void*)f_3983},
{"f_3973:scrutinizer_scm",(void*)f_3973},
{"f_3976:scrutinizer_scm",(void*)f_3976},
{"f_3947:scrutinizer_scm",(void*)f_3947},
{"f_3955:scrutinizer_scm",(void*)f_3955},
{"f_3866:scrutinizer_scm",(void*)f_3866},
{"f_3920:scrutinizer_scm",(void*)f_3920},
{"f_3923:scrutinizer_scm",(void*)f_3923},
{"f_3926:scrutinizer_scm",(void*)f_3926},
{"f_3929:scrutinizer_scm",(void*)f_3929},
{"f_3932:scrutinizer_scm",(void*)f_3932},
{"f_3935:scrutinizer_scm",(void*)f_3935},
{"f_3938:scrutinizer_scm",(void*)f_3938},
{"f_3941:scrutinizer_scm",(void*)f_3941},
{"f_3913:scrutinizer_scm",(void*)f_3913},
{"f_3898:scrutinizer_scm",(void*)f_3898},
{"f_3901:scrutinizer_scm",(void*)f_3901},
{"f_3904:scrutinizer_scm",(void*)f_3904},
{"f_3907:scrutinizer_scm",(void*)f_3907},
{"f_3910:scrutinizer_scm",(void*)f_3910},
{"f_3894:scrutinizer_scm",(void*)f_3894},
{"f_3526:scrutinizer_scm",(void*)f_3526},
{"f_3633:scrutinizer_scm",(void*)f_3633},
{"f_3768:scrutinizer_scm",(void*)f_3768},
{"f_3649:scrutinizer_scm",(void*)f_3649},
{"f_3654:scrutinizer_scm",(void*)f_3654},
{"f_3682:scrutinizer_scm",(void*)f_3682},
{"f_3602:scrutinizer_scm",(void*)f_3602},
{"f_3471:scrutinizer_scm",(void*)f_3471},
{"f_3505:scrutinizer_scm",(void*)f_3505},
{"f_3261:scrutinizer_scm",(void*)f_3261},
{"f_3326:scrutinizer_scm",(void*)f_3326},
{"f_3434:scrutinizer_scm",(void*)f_3434},
{"f_3267:scrutinizer_scm",(void*)f_3267},
{"f_3285:scrutinizer_scm",(void*)f_3285},
{"f_3311:scrutinizer_scm",(void*)f_3311},
{"f_3292:scrutinizer_scm",(void*)f_3292},
{"f_3273:scrutinizer_scm",(void*)f_3273},
{"f_3279:scrutinizer_scm",(void*)f_3279},
{"f_2989:scrutinizer_scm",(void*)f_2989},
{"f_3076:scrutinizer_scm",(void*)f_3076},
{"f_3095:scrutinizer_scm",(void*)f_3095},
{"f_3132:scrutinizer_scm",(void*)f_3132},
{"f_3159:scrutinizer_scm",(void*)f_3159},
{"f_3100:scrutinizer_scm",(void*)f_3100},
{"f_3081:scrutinizer_scm",(void*)f_3081},
{"f_2980:scrutinizer_scm",(void*)f_2980},
{"f_2984:scrutinizer_scm",(void*)f_2984},
{"f_2914:scrutinizer_scm",(void*)f_2914},
{"f_2943:scrutinizer_scm",(void*)f_2943},
{"f_2947:scrutinizer_scm",(void*)f_2947},
{"f_2712:scrutinizer_scm",(void*)f_2712},
{"f_2872:scrutinizer_scm",(void*)f_2872},
{"f_2876:scrutinizer_scm",(void*)f_2876},
{"f_2808:scrutinizer_scm",(void*)f_2808},
{"f_2819:scrutinizer_scm",(void*)f_2819},
{"f_2827:scrutinizer_scm",(void*)f_2827},
{"f_2823:scrutinizer_scm",(void*)f_2823},
{"f_2747:scrutinizer_scm",(void*)f_2747},
{"f_2758:scrutinizer_scm",(void*)f_2758},
{"f_2690:scrutinizer_scm",(void*)f_2690},
{"f_2650:scrutinizer_scm",(void*)f_2650},
{"f_2182:scrutinizer_scm",(void*)f_2182},
{"f_2188:scrutinizer_scm",(void*)f_2188},
{"f_2594:scrutinizer_scm",(void*)f_2594},
{"f_2623:scrutinizer_scm",(void*)f_2623},
{"f_2588:scrutinizer_scm",(void*)f_2588},
{"f_2551:scrutinizer_scm",(void*)f_2551},
{"f_2580:scrutinizer_scm",(void*)f_2580},
{"f_2543:scrutinizer_scm",(void*)f_2543},
{"f_2223:scrutinizer_scm",(void*)f_2223},
{"f_2469:scrutinizer_scm",(void*)f_2469},
{"f_2473:scrutinizer_scm",(void*)f_2473},
{"f_2479:scrutinizer_scm",(void*)f_2479},
{"f_2337:scrutinizer_scm",(void*)f_2337},
{"f_2379:scrutinizer_scm",(void*)f_2379},
{"f_2451:scrutinizer_scm",(void*)f_2451},
{"f_2404:scrutinizer_scm",(void*)f_2404},
{"f_2441:scrutinizer_scm",(void*)f_2441},
{"f_2417:scrutinizer_scm",(void*)f_2417},
{"f_2340:scrutinizer_scm",(void*)f_2340},
{"f_2369:scrutinizer_scm",(void*)f_2369},
{"f_2367:scrutinizer_scm",(void*)f_2367},
{"f_2360:scrutinizer_scm",(void*)f_2360},
{"f_2326:scrutinizer_scm",(void*)f_2326},
{"f_2229:scrutinizer_scm",(void*)f_2229},
{"f_2234:scrutinizer_scm",(void*)f_2234},
{"f_2260:scrutinizer_scm",(void*)f_2260},
{"f_2272:scrutinizer_scm",(void*)f_2272},
{"f_2268:scrutinizer_scm",(void*)f_2268},
{"f_2173:scrutinizer_scm",(void*)f_2173},
{"f_2177:scrutinizer_scm",(void*)f_2177},
{"f_2086:scrutinizer_scm",(void*)f_2086},
{"f_2108:scrutinizer_scm",(void*)f_2108},
{"f_2111:scrutinizer_scm",(void*)f_2111},
{"f_2114:scrutinizer_scm",(void*)f_2114},
{"f_2117:scrutinizer_scm",(void*)f_2117},
{"f_2120:scrutinizer_scm",(void*)f_2120},
{"f_2123:scrutinizer_scm",(void*)f_2123},
{"f_2126:scrutinizer_scm",(void*)f_2126},
{"f_2138:scrutinizer_scm",(void*)f_2138},
{"f_2167:scrutinizer_scm",(void*)f_2167},
{"f_2136:scrutinizer_scm",(void*)f_2136},
{"f_2129:scrutinizer_scm",(void*)f_2129},
{"f_2005:scrutinizer_scm",(void*)f_2005},
{"f_2021:scrutinizer_scm",(void*)f_2021},
{"f_2024:scrutinizer_scm",(void*)f_2024},
{"f_2027:scrutinizer_scm",(void*)f_2027},
{"f_2030:scrutinizer_scm",(void*)f_2030},
{"f_2033:scrutinizer_scm",(void*)f_2033},
{"f_2036:scrutinizer_scm",(void*)f_2036},
{"f_2039:scrutinizer_scm",(void*)f_2039},
{"f_2051:scrutinizer_scm",(void*)f_2051},
{"f_2080:scrutinizer_scm",(void*)f_2080},
{"f_2049:scrutinizer_scm",(void*)f_2049},
{"f_2042:scrutinizer_scm",(void*)f_2042},
{"f_1825:scrutinizer_scm",(void*)f_1825},
{"f_1984:scrutinizer_scm",(void*)f_1984},
{"f_1987:scrutinizer_scm",(void*)f_1987},
{"f_1990:scrutinizer_scm",(void*)f_1990},
{"f_1942:scrutinizer_scm",(void*)f_1942},
{"f_1971:scrutinizer_scm",(void*)f_1971},
{"f_1936:scrutinizer_scm",(void*)f_1936},
{"f_1871:scrutinizer_scm",(void*)f_1871},
{"f_1881:scrutinizer_scm",(void*)f_1881},
{"f_1884:scrutinizer_scm",(void*)f_1884},
{"f_1908:scrutinizer_scm",(void*)f_1908},
{"f_1887:scrutinizer_scm",(void*)f_1887},
{"f_1890:scrutinizer_scm",(void*)f_1890},
{"f_1900:scrutinizer_scm",(void*)f_1900},
{"f_1893:scrutinizer_scm",(void*)f_1893},
{"f_1784:scrutinizer_scm",(void*)f_1784},
{"f_1788:scrutinizer_scm",(void*)f_1788},
{"f_1798:scrutinizer_scm",(void*)f_1798},
{"f_1801:scrutinizer_scm",(void*)f_1801},
{"f_1804:scrutinizer_scm",(void*)f_1804},
{"f_1807:scrutinizer_scm",(void*)f_1807},
{"f_1810:scrutinizer_scm",(void*)f_1810},
{"f_1813:scrutinizer_scm",(void*)f_1813},
{"f_1823:scrutinizer_scm",(void*)f_1823},
{"f_1816:scrutinizer_scm",(void*)f_1816},
{"f_1819:scrutinizer_scm",(void*)f_1819},
{"f_1791:scrutinizer_scm",(void*)f_1791},
{"f_1752:scrutinizer_scm",(void*)f_1752},
{"f_1759:scrutinizer_scm",(void*)f_1759},
{"f_1679:scrutinizer_scm",(void*)f_1679},
{"f_1743:scrutinizer_scm",(void*)f_1743},
{"f_1750:scrutinizer_scm",(void*)f_1750},
{"f_1686:scrutinizer_scm",(void*)f_1686},
{"f_1693:scrutinizer_scm",(void*)f_1693},
{"f_1707:scrutinizer_scm",(void*)f_1707},
{"f_1710:scrutinizer_scm",(void*)f_1710},
{"f_1723:scrutinizer_scm",(void*)f_1723},
{"f_1713:scrutinizer_scm",(void*)f_1713},
{"f_1716:scrutinizer_scm",(void*)f_1716},
{"f_1719:scrutinizer_scm",(void*)f_1719},
{"f_1703:scrutinizer_scm",(void*)f_1703},
{"f_1637:scrutinizer_scm",(void*)f_1637},
{"f_1641:scrutinizer_scm",(void*)f_1641},
{"f_1645:scrutinizer_scm",(void*)f_1645},
{"f_1659:scrutinizer_scm",(void*)f_1659},
{"f_1662:scrutinizer_scm",(void*)f_1662},
{"f_1665:scrutinizer_scm",(void*)f_1665},
{"f_1668:scrutinizer_scm",(void*)f_1668},
{"f_1671:scrutinizer_scm",(void*)f_1671},
{"f_1655:scrutinizer_scm",(void*)f_1655},
{"f_1514:scrutinizer_scm",(void*)f_1514},
{"f_1524:scrutinizer_scm",(void*)f_1524},
{"f_1527:scrutinizer_scm",(void*)f_1527},
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
