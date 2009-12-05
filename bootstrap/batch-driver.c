/* Generated from batch-driver.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2009-12-04 21:29
   Version 4.2.12
   linux-unix-gnu-x86 [ manyargs dload ptables ]
   compiled 2009-12-04 on x (Linux)
   command line: batch-driver.scm -optimize-level 2 -include-path . -include-path ./ -inline -feature debugbuild -scrutinize -types ./types.db -no-lambda-info -local -extend private-namespace.scm -output-file batch-driver.c
   unit: driver
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[403];
static double C_possibly_force_alignment;


C_noret_decl(C_driver_toplevel)
C_externexport void C_ccall C_driver_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1498)
static void C_ccall f_1498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1506)
static void C_ccall f_1506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1514)
static void C_ccall f_1514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1518)
static void C_ccall f_1518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1522)
static void C_ccall f_1522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1524)
static void C_ccall f_1524(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1524)
static void C_ccall f_1524r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1560)
static void C_ccall f_1560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4808)
static void C_ccall f_4808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4793)
static void C_ccall f_4793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4789)
static void C_ccall f_4789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4778)
static void C_ccall f_4778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4749)
static void C_fcall f_4749(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4753)
static void C_ccall f_4753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1576)
static void C_ccall f_1576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4745)
static void C_ccall f_4745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4706)
static void C_ccall f_4706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4708)
static void C_fcall f_4708(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4737)
static void C_ccall f_4737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1579)
static void C_ccall f_1579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1585)
static void C_fcall f_1585(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4687)
static void C_ccall f_4687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4683)
static void C_ccall f_4683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4679)
static void C_ccall f_4679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2040)
static void C_fcall f_2040(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2043)
static void C_fcall f_2043(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2046)
static void C_ccall f_2046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4664)
static void C_ccall f_4664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4608)
static void C_ccall f_4608(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4616)
static void C_ccall f_4616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4618)
static void C_fcall f_4618(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4656)
static void C_ccall f_4656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2050)
static void C_ccall f_2050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4558)
static void C_ccall f_4558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4560)
static void C_fcall f_4560(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4595)
static void C_ccall f_4595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4599)
static void C_ccall f_4599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2058)
static void C_ccall f_2058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2061)
static void C_fcall f_2061(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2064)
static void C_fcall f_2064(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2067)
static void C_fcall f_2067(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2070)
static void C_ccall f_2070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2073)
static void C_fcall f_2073(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2076)
static void C_ccall f_2076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2079)
static void C_fcall f_2079(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2082)
static void C_fcall f_2082(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2085)
static void C_fcall f_2085(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2088)
static void C_fcall f_2088(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2091)
static void C_fcall f_2091(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4461)
static void C_ccall f_4461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4463)
static void C_fcall f_4463(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4492)
static void C_ccall f_4492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4456)
static void C_ccall f_4456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2098)
static void C_fcall f_2098(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2101)
static void C_fcall f_2101(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2104)
static void C_fcall f_2104(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2107)
static void C_fcall f_2107(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2110)
static void C_fcall f_2110(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2113)
static void C_fcall f_2113(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2116)
static void C_fcall f_2116(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2119)
static void C_fcall f_2119(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2122)
static void C_fcall f_2122(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2125)
static void C_fcall f_2125(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2131)
static void C_fcall f_2131(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4396)
static void C_ccall f_4396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4399)
static void C_ccall f_4399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4402)
static void C_ccall f_4402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2137)
static void C_fcall f_2137(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4386)
static void C_ccall f_4386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4389)
static void C_ccall f_4389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2143)
static void C_ccall f_2143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4344)
static void C_ccall f_4344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_ccall f_2146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4338)
static void C_ccall f_4338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4329)
static void C_ccall f_4329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2152)
static void C_ccall f_2152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4311)
static void C_ccall f_4311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4317)
static void C_ccall f_4317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4320)
static void C_ccall f_4320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2155)
static void C_ccall f_2155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4270)
static void C_ccall f_4270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4272)
static void C_fcall f_4272(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4301)
static void C_ccall f_4301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4266)
static void C_ccall f_4266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2161)
static void C_ccall f_2161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2164)
static void C_ccall f_2164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4215)
static void C_ccall f_4215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4217)
static void C_fcall f_4217(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4246)
static void C_ccall f_4246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2168)
static void C_ccall f_2168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2171)
static void C_fcall f_2171(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2174)
static void C_fcall f_2174(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2177)
static void C_fcall f_2177(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2180)
static void C_fcall f_2180(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4112)
static void C_fcall f_4112(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4126)
static void C_ccall f_4126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4151)
static void C_ccall f_4151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4156)
static void C_ccall f_4156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4184)
static void C_ccall f_4184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4027)
static void C_fcall f_4027(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4041)
static void C_ccall f_4041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4066)
static void C_ccall f_4066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4071)
static void C_ccall f_4071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4099)
static void C_ccall f_4099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2183)
static void C_ccall f_2183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4016)
static void C_ccall f_4016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4008)
static void C_ccall f_4008(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3985)
static void C_fcall f_3985(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3995)
static void C_ccall f_3995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2186)
static void C_ccall f_2186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2193)
static void C_ccall f_2193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2199)
static void C_ccall f_2199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3946)
static void C_fcall f_3946(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3962)
static void C_ccall f_3962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3965)
static void C_ccall f_3965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2202)
static void C_ccall f_2202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2206)
static void C_ccall f_2206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2214)
static void C_ccall f_2214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2218)
static void C_ccall f_2218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3909)
static void C_ccall f_3909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3911)
static void C_fcall f_3911(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3940)
static void C_ccall f_3940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2221)
static void C_ccall f_2221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3870)
static void C_ccall f_3870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3872)
static void C_fcall f_3872(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3901)
static void C_ccall f_3901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3810)
static void C_ccall f_3810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3812)
static void C_fcall f_3812(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3806)
static void C_ccall f_3806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2225)
static void C_ccall f_2225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2229)
static void C_ccall f_2229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2232)
static void C_fcall f_2232(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3785)
static void C_ccall f_3785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2236)
static void C_ccall f_2236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2240)
static void C_ccall f_2240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3771)
static void C_ccall f_3771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2244)
static void C_ccall f_2244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3764)
static void C_ccall f_3764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2248)
static void C_ccall f_2248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3744)
static void C_ccall f_3744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2252)
static void C_ccall f_2252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2263)
static void C_ccall f_2263(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2266)
static void C_fcall f_2266(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2269)
static void C_ccall f_2269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3703)
static void C_ccall f_3703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2275)
static void C_ccall f_2275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2296)
static void C_fcall f_2296(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2324)
static void C_ccall f_2324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2334)
static void C_ccall f_2334(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2337)
static void C_ccall f_2337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2340)
static void C_ccall f_2340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2351)
static void C_ccall f_2351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3671)
static void C_ccall f_3671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3679)
static void C_ccall f_3679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2360)
static void C_ccall f_2360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2363)
static void C_ccall f_2363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3516)
static void C_fcall f_3516(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3615)
static void C_ccall f_3615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3664)
static void C_ccall f_3664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3636)
static void C_ccall f_3636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3641)
static void C_fcall f_3641(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3662)
static void C_ccall f_3662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3627)
static void C_ccall f_3627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3576)
static void C_fcall f_3576(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3605)
static void C_ccall f_3605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3531)
static void C_ccall f_3531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3535)
static void C_ccall f_3535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3541)
static void C_fcall f_3541(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3539)
static void C_ccall f_3539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3527)
static void C_ccall f_3527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3507)
static void C_ccall f_3507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3511)
static void C_ccall f_3511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2366)
static void C_ccall f_2366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2369)
static void C_ccall f_2369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3465)
static void C_ccall f_3465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3471)
static void C_fcall f_3471(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3469)
static void C_ccall f_3469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2372)
static void C_fcall f_2372(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3442)
static void C_ccall f_3442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2381)
static void C_fcall f_2381(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3400)
static void C_ccall f_3400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3402)
static void C_fcall f_3402(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3431)
static void C_ccall f_3431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2387)
static void C_ccall f_2387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3334)
static void C_fcall f_3334(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3140)
static void C_ccall f_3140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3290)
static void C_fcall f_3290(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3144)
static void C_ccall f_3144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3148)
static void C_fcall f_3148(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3167)
static void C_fcall f_3167(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2393)
static void C_ccall f_2393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3084)
static void C_fcall f_3084(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3105)
static void C_ccall f_3105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3119)
static void C_ccall f_3119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2396)
static void C_ccall f_2396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3073)
static void C_ccall f_3073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2399)
static void C_ccall f_2399(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3067)
static void C_ccall f_3067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2405)
static void C_ccall f_2405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3052)
static void C_ccall f_3052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2413)
static void C_ccall f_2413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2416)
static void C_ccall f_2416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2422)
static void C_ccall f_2422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3010)
static void C_fcall f_3010(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3039)
static void C_ccall f_3039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3005)
static void C_ccall f_3005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2425)
static void C_ccall f_2425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2991)
static void C_ccall f_2991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2436)
static void C_ccall f_2436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2439)
static void C_ccall f_2439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2977)
static void C_ccall f_2977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2940)
static void C_ccall f_2940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2948)
static void C_ccall f_2948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2960)
static void C_ccall f_2960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2963)
static void C_ccall f_2963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2966)
static void C_ccall f_2966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2442)
static void C_fcall f_2442(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2928)
static void C_ccall f_2928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2931)
static void C_ccall f_2931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2910)
static void C_ccall f_2910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_ccall f_2919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2922)
static void C_ccall f_2922(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2445)
static void C_fcall f_2445(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2448)
static void C_ccall f_2448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2861)
static void C_fcall f_2861(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2890)
static void C_ccall f_2890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2859)
static void C_ccall f_2859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2804)
static void C_ccall f_2804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2806)
static void C_fcall f_2806(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2814)
static void C_fcall f_2814(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2841)
static void C_ccall f_2841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2837)
static void C_ccall f_2837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2818)
static void C_ccall f_2818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2830)
static void C_ccall f_2830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2457)
static void C_ccall f_2457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2768)
static void C_fcall f_2768(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2786)
static void C_ccall f_2786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2776)
static void C_fcall f_2776(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2780)
static void C_ccall f_2780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2460)
static void C_ccall f_2460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2466)
static void C_ccall f_2466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2472)
static void C_ccall f_2472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2475)
static void C_ccall f_2475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2483)
static void C_fcall f_2483(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2718)
static void C_ccall f_2718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2721)
static void C_ccall f_2721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2497)
static void C_ccall f_2497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2500)
static void C_ccall f_2500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2503)
static void C_ccall f_2503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2595)
static void C_ccall f_2595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2706)
static void C_ccall f_2706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2598)
static void C_ccall f_2598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2604)
static void C_ccall f_2604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2607)
static void C_ccall f_2607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2613)
static void C_ccall f_2613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2616)
static void C_ccall f_2616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2619)
static void C_ccall f_2619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2633)
static void C_ccall f_2633(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2637)
static void C_ccall f_2637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2643)
static void C_ccall f_2643(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2646)
static void C_ccall f_2646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2655)
static void C_ccall f_2655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5114)
static void C_ccall f5114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2674)
static void C_ccall f_2674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2658)
static void C_ccall f_2658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2661)
static void C_ccall f_2661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2627)
static void C_ccall f_2627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2509)
static void C_ccall f_2509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2527)
static void C_ccall f_2527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2566)
static void C_ccall f_2566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2569)
static void C_ccall f_2569(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2575)
static void C_ccall f_2575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2578)
static void C_ccall f_2578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2517)
static void C_ccall f_2517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2315)
static void C_ccall f_2315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2284)
static void C_ccall f_2284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1961)
static void C_fcall f_1961(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1991)
static void C_fcall f_1991(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1986)
static void C_fcall f_1986(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1963)
static void C_fcall f_1963(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1967)
static void C_ccall f_1967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1981)
static void C_ccall f_1981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1975)
static void C_ccall f_1975(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1970)
static void C_ccall f_1970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1955)
static void C_fcall f_1955(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1926)
static void C_fcall f_1926(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1933)
static void C_ccall f_1933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1936)
static void C_ccall f_1936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1939)
static void C_ccall f_1939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1942)
static void C_ccall f_1942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1916)
static C_word C_fcall f_1916(C_word t0);
C_noret_decl(f_1881)
static void C_fcall f_1881(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1887)
static void C_fcall f_1887(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1895)
static void C_fcall f_1895(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1903)
static void C_ccall f_1903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1907)
static void C_ccall f_1907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1801)
static void C_fcall f_1801(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1866)
static void C_ccall f_1866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1842)
static void C_ccall f_1842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1752)
static void C_ccall f_1752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1759)
static void C_ccall f_1759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1765)
static void C_fcall f_1765(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1780)
static void C_ccall f_1780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1776)
static void C_ccall f_1776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1762)
static void C_ccall f_1762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1717)
static void C_fcall f_1717(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1724)
static void C_ccall f_1724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1729)
static void C_fcall f_1729(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1739)
static void C_ccall f_1739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1693)
static void C_fcall f_1693(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1703)
static void C_ccall f_1703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1706)
static void C_ccall f_1706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1709)
static void C_ccall f_1709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1712)
static void C_ccall f_1712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1671)
static void C_fcall f_1671(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1678)
static void C_ccall f_1678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1691)
static void C_ccall f_1691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1647)
static void C_fcall f_1647(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1651)
static void C_ccall f_1651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1660)
static void C_ccall f_1660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1663)
static void C_ccall f_1663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1666)
static void C_ccall f_1666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1669)
static void C_ccall f_1669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1632)
static void C_fcall f_1632(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1639)
static void C_ccall f_1639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1642)
static void C_ccall f_1642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1527)
static void C_fcall f_1527(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_4749)
static void C_fcall trf_4749(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4749(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4749(t0,t1,t2);}

C_noret_decl(trf_4708)
static void C_fcall trf_4708(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4708(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4708(t0,t1,t2);}

C_noret_decl(trf_1585)
static void C_fcall trf_1585(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1585(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1585(t0,t1);}

C_noret_decl(trf_2040)
static void C_fcall trf_2040(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2040(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2040(t0,t1);}

C_noret_decl(trf_2043)
static void C_fcall trf_2043(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2043(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2043(t0,t1);}

C_noret_decl(trf_4618)
static void C_fcall trf_4618(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4618(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4618(t0,t1,t2);}

C_noret_decl(trf_4560)
static void C_fcall trf_4560(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4560(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4560(t0,t1,t2);}

C_noret_decl(trf_2061)
static void C_fcall trf_2061(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2061(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2061(t0,t1);}

C_noret_decl(trf_2064)
static void C_fcall trf_2064(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2064(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2064(t0,t1);}

C_noret_decl(trf_2067)
static void C_fcall trf_2067(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2067(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2067(t0,t1);}

C_noret_decl(trf_2073)
static void C_fcall trf_2073(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2073(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2073(t0,t1);}

C_noret_decl(trf_2079)
static void C_fcall trf_2079(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2079(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2079(t0,t1);}

C_noret_decl(trf_2082)
static void C_fcall trf_2082(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2082(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2082(t0,t1);}

C_noret_decl(trf_2085)
static void C_fcall trf_2085(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2085(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2085(t0,t1);}

C_noret_decl(trf_2088)
static void C_fcall trf_2088(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2088(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2088(t0,t1);}

C_noret_decl(trf_2091)
static void C_fcall trf_2091(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2091(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2091(t0,t1);}

C_noret_decl(trf_4463)
static void C_fcall trf_4463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4463(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4463(t0,t1,t2);}

C_noret_decl(trf_2098)
static void C_fcall trf_2098(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2098(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2098(t0,t1);}

C_noret_decl(trf_2101)
static void C_fcall trf_2101(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2101(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2101(t0,t1);}

C_noret_decl(trf_2104)
static void C_fcall trf_2104(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2104(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2104(t0,t1);}

C_noret_decl(trf_2107)
static void C_fcall trf_2107(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2107(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2107(t0,t1);}

C_noret_decl(trf_2110)
static void C_fcall trf_2110(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2110(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2110(t0,t1);}

C_noret_decl(trf_2113)
static void C_fcall trf_2113(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2113(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2113(t0,t1);}

C_noret_decl(trf_2116)
static void C_fcall trf_2116(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2116(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2116(t0,t1);}

C_noret_decl(trf_2119)
static void C_fcall trf_2119(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2119(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2119(t0,t1);}

C_noret_decl(trf_2122)
static void C_fcall trf_2122(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2122(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2122(t0,t1);}

C_noret_decl(trf_2125)
static void C_fcall trf_2125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2125(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2125(t0,t1);}

C_noret_decl(trf_2131)
static void C_fcall trf_2131(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2131(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2131(t0,t1);}

C_noret_decl(trf_2137)
static void C_fcall trf_2137(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2137(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2137(t0,t1);}

C_noret_decl(trf_4272)
static void C_fcall trf_4272(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4272(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4272(t0,t1,t2);}

C_noret_decl(trf_4217)
static void C_fcall trf_4217(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4217(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4217(t0,t1,t2);}

C_noret_decl(trf_2171)
static void C_fcall trf_2171(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2171(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2171(t0,t1);}

C_noret_decl(trf_2174)
static void C_fcall trf_2174(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2174(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2174(t0,t1);}

C_noret_decl(trf_2177)
static void C_fcall trf_2177(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2177(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2177(t0,t1);}

C_noret_decl(trf_2180)
static void C_fcall trf_2180(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2180(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2180(t0,t1);}

C_noret_decl(trf_4112)
static void C_fcall trf_4112(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4112(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4112(t0,t1,t2);}

C_noret_decl(trf_4027)
static void C_fcall trf_4027(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4027(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4027(t0,t1,t2);}

C_noret_decl(trf_3985)
static void C_fcall trf_3985(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3985(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3985(t0,t1,t2);}

C_noret_decl(trf_3946)
static void C_fcall trf_3946(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3946(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3946(t0,t1,t2);}

C_noret_decl(trf_3911)
static void C_fcall trf_3911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3911(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3911(t0,t1,t2);}

C_noret_decl(trf_3872)
static void C_fcall trf_3872(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3872(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3872(t0,t1,t2);}

C_noret_decl(trf_3812)
static void C_fcall trf_3812(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3812(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3812(t0,t1,t2);}

C_noret_decl(trf_2232)
static void C_fcall trf_2232(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2232(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2232(t0,t1);}

C_noret_decl(trf_2266)
static void C_fcall trf_2266(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2266(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2266(t0,t1);}

C_noret_decl(trf_2296)
static void C_fcall trf_2296(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2296(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2296(t0,t1);}

C_noret_decl(trf_3516)
static void C_fcall trf_3516(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3516(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3516(t0,t1,t2);}

C_noret_decl(trf_3641)
static void C_fcall trf_3641(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3641(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3641(t0,t1,t2);}

C_noret_decl(trf_3576)
static void C_fcall trf_3576(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3576(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3576(t0,t1,t2);}

C_noret_decl(trf_3541)
static void C_fcall trf_3541(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3541(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3541(t0,t1,t2);}

C_noret_decl(trf_3471)
static void C_fcall trf_3471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3471(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3471(t0,t1,t2);}

C_noret_decl(trf_2372)
static void C_fcall trf_2372(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2372(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2372(t0,t1);}

C_noret_decl(trf_2381)
static void C_fcall trf_2381(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2381(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2381(t0,t1);}

C_noret_decl(trf_3402)
static void C_fcall trf_3402(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3402(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3402(t0,t1,t2);}

C_noret_decl(trf_3334)
static void C_fcall trf_3334(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3334(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3334(t0,t1,t2);}

C_noret_decl(trf_3290)
static void C_fcall trf_3290(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3290(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3290(t0,t1,t2);}

C_noret_decl(trf_3148)
static void C_fcall trf_3148(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3148(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3148(t0,t1);}

C_noret_decl(trf_3167)
static void C_fcall trf_3167(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3167(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3167(t0,t1,t2);}

C_noret_decl(trf_3084)
static void C_fcall trf_3084(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3084(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3084(t0,t1,t2);}

C_noret_decl(trf_3010)
static void C_fcall trf_3010(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3010(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3010(t0,t1,t2);}

C_noret_decl(trf_2442)
static void C_fcall trf_2442(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2442(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2442(t0,t1);}

C_noret_decl(trf_2445)
static void C_fcall trf_2445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2445(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2445(t0,t1);}

C_noret_decl(trf_2861)
static void C_fcall trf_2861(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2861(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2861(t0,t1,t2);}

C_noret_decl(trf_2806)
static void C_fcall trf_2806(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2806(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2806(t0,t1,t2);}

C_noret_decl(trf_2814)
static void C_fcall trf_2814(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2814(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2814(t0,t1,t2);}

C_noret_decl(trf_2768)
static void C_fcall trf_2768(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2768(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2768(t0,t1,t2);}

C_noret_decl(trf_2776)
static void C_fcall trf_2776(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2776(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2776(t0,t1,t2);}

C_noret_decl(trf_2483)
static void C_fcall trf_2483(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2483(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2483(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1961)
static void C_fcall trf_1961(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1961(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1961(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1991)
static void C_fcall trf_1991(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1991(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1991(t0,t1);}

C_noret_decl(trf_1986)
static void C_fcall trf_1986(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1986(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1986(t0,t1,t2);}

C_noret_decl(trf_1963)
static void C_fcall trf_1963(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1963(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1963(t0,t1,t2,t3);}

C_noret_decl(trf_1955)
static void C_fcall trf_1955(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1955(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1955(t0,t1,t2);}

C_noret_decl(trf_1926)
static void C_fcall trf_1926(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1926(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1926(t0,t1,t2);}

C_noret_decl(trf_1881)
static void C_fcall trf_1881(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1881(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1881(t0,t1,t2);}

C_noret_decl(trf_1887)
static void C_fcall trf_1887(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1887(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1887(t0,t1,t2);}

C_noret_decl(trf_1895)
static void C_fcall trf_1895(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1895(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1895(t0,t1,t2);}

C_noret_decl(trf_1801)
static void C_fcall trf_1801(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1801(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1801(t0,t1);}

C_noret_decl(trf_1765)
static void C_fcall trf_1765(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1765(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1765(t0,t1);}

C_noret_decl(trf_1717)
static void C_fcall trf_1717(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1717(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1717(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1729)
static void C_fcall trf_1729(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1729(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1729(t0,t1,t2);}

C_noret_decl(trf_1693)
static void C_fcall trf_1693(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1693(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1693(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1671)
static void C_fcall trf_1671(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1671(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1671(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1647)
static void C_fcall trf_1647(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1647(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1647(t0,t1,t2,t3);}

C_noret_decl(trf_1632)
static void C_fcall trf_1632(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1632(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1632(t0,t1,t2,t3);}

C_noret_decl(trf_1527)
static void C_fcall trf_1527(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1527(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1527(t0,t1);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_driver_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_driver_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("driver_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3145)){
C_save(t1);
C_rereclaim2(3145*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,403);
lf[1]=C_decode_literal(C_heaptop,"\376B\000\000\033too many optional arguments");
lf[2]=C_h_intern(&lf[2],17,"user-options-pass");
lf[3]=C_h_intern(&lf[3],14,"user-read-pass");
lf[4]=C_h_intern(&lf[4],22,"user-preprocessor-pass");
lf[5]=C_h_intern(&lf[5],9,"user-pass");
lf[6]=C_h_intern(&lf[6],23,"user-post-analysis-pass");
lf[7]=C_h_intern(&lf[7],19,"compile-source-file");
lf[8]=C_h_intern(&lf[8],4,"quit");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000 missing argument to `-~A\047 option");
lf[10]=C_decode_literal(C_heaptop,"\376B\000\000\037invalid argument to `~A\047 option");
lf[11]=C_h_intern(&lf[11],12,"explicit-use");
lf[12]=C_h_intern(&lf[12],26,"\010compilerexplicit-use-flag");
lf[13]=C_h_intern(&lf[13],12,"\004coredeclare");
lf[14]=C_h_intern(&lf[14],7,"verbose");
lf[15]=C_h_intern(&lf[15],11,"output-file");
lf[16]=C_h_intern(&lf[16],36,"\010compilerdefault-optimization-passes");
lf[17]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\003\000\000\002\376\001\000\000\031\003sysimplicit-exit-handler\376\377\016\376\377\016\376\377\016");
lf[18]=C_h_intern(&lf[18],7,"profile");
lf[19]=C_h_intern(&lf[19],12,"profile-name");
lf[20]=C_decode_literal(C_heaptop,"\376B\000\000\007PROFILE");
lf[21]=C_h_intern(&lf[21],9,"heap-size");
lf[22]=C_h_intern(&lf[22],17,"heap-initial-size");
lf[23]=C_h_intern(&lf[23],11,"heap-growth");
lf[24]=C_h_intern(&lf[24],14,"heap-shrinkage");
lf[25]=C_h_intern(&lf[25],13,"keyword-style");
lf[26]=C_h_intern(&lf[26],4,"unit");
lf[27]=C_h_intern(&lf[27],12,"analyze-only");
lf[28]=C_h_intern(&lf[28],7,"dynamic");
lf[29]=C_h_intern(&lf[29],7,"nursery");
lf[30]=C_h_intern(&lf[30],10,"stack-size");
lf[31]=C_h_intern(&lf[31],19,"\003sysstandard-output");
lf[32]=C_h_intern(&lf[32],16,"\003sysflush-output");
lf[33]=C_h_intern(&lf[33],19,"\003syswrite-char/port");
lf[34]=C_h_intern(&lf[34],7,"fprintf");
lf[35]=C_h_intern(&lf[35],26,"\010compilerdebugging-chicken");
lf[36]=C_h_intern(&lf[36],7,"display");
lf[37]=C_decode_literal(C_heaptop,"\376B\000\000\010pass: ~a");
lf[38]=C_h_intern(&lf[38],19,"\010compilerdump-nodes");
lf[39]=C_h_intern(&lf[39],12,"pretty-print");
lf[40]=C_h_intern(&lf[40],30,"\010compilerbuild-expression-tree");
lf[41]=C_h_intern(&lf[41],34,"\010compilerdisplay-analysis-database");
lf[42]=C_h_intern(&lf[42],5,"write");
lf[43]=C_decode_literal(C_heaptop,"\376B\000\000\013(iteration ");
lf[44]=C_h_intern(&lf[44],26,"\003sysdefault-read-info-hook");
lf[45]=C_h_intern(&lf[45],19,"\003syshash-table-set!");
lf[46]=C_h_intern(&lf[46],24,"\003sysline-number-database");
lf[47]=C_h_intern(&lf[47],10,"alist-cons");
lf[48]=C_h_intern(&lf[48],18,"\003syshash-table-ref");
lf[49]=C_h_intern(&lf[49],9,"list-info");
lf[50]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid numeric argument ~S");
lf[51]=C_h_intern(&lf[51],9,"substring");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\003: \011");
lf[53]=C_decode_literal(C_heaptop,"\376B\000\000\030milliseconds needed for ");
lf[54]=C_h_intern(&lf[54],8,"\003sysread");
lf[55]=C_h_intern(&lf[55],12,"\010compilerget");
lf[56]=C_h_intern(&lf[56],13,"\010compilerput!");
lf[57]=C_h_intern(&lf[57],27,"\010compileranalyze-expression");
lf[58]=C_h_intern(&lf[58],9,"\003syserror");
lf[59]=C_h_intern(&lf[59],1,"D");
lf[60]=C_h_intern(&lf[60],25,"\010compilerimport-libraries");
lf[61]=C_h_intern(&lf[61],26,"\010compilerdisabled-warnings");
lf[62]=C_h_intern(&lf[62],16,"emit-inline-file");
lf[63]=C_h_intern(&lf[63],12,"inline-limit");
lf[64]=C_h_intern(&lf[64],21,"\010compilerverbose-mode");
lf[65]=C_h_intern(&lf[65],31,"\003sysread-error-with-line-number");
lf[66]=C_h_intern(&lf[66],21,"\003sysinclude-pathnames");
lf[67]=C_h_intern(&lf[67],19,"\000compiler-extension");
lf[68]=C_h_intern(&lf[68],12,"\003sysfeatures");
lf[69]=C_h_intern(&lf[69],10,"\000compiling");
lf[70]=C_h_intern(&lf[70],28,"\003sysexplicit-library-modules");
lf[71]=C_h_intern(&lf[71],25,"\010compilertarget-heap-size");
lf[72]=C_h_intern(&lf[72],33,"\010compilertarget-initial-heap-size");
lf[73]=C_h_intern(&lf[73],27,"\010compilertarget-heap-growth");
lf[74]=C_h_intern(&lf[74],30,"\010compilertarget-heap-shrinkage");
lf[75]=C_h_intern(&lf[75],26,"\010compilertarget-stack-size");
lf[76]=C_h_intern(&lf[76],8,"no-trace");
lf[77]=C_h_intern(&lf[77],24,"\010compileremit-trace-info");
lf[78]=C_h_intern(&lf[78],29,"disable-stack-overflow-checks");
lf[79]=C_h_intern(&lf[79],40,"\010compilerdisable-stack-overflow-checking");
lf[80]=C_h_intern(&lf[80],7,"version");
lf[81]=C_h_intern(&lf[81],7,"newline");
lf[82]=C_h_intern(&lf[82],22,"\010compilerprint-version");
lf[83]=C_h_intern(&lf[83],4,"help");
lf[84]=C_h_intern(&lf[84],20,"\010compilerprint-usage");
lf[85]=C_h_intern(&lf[85],7,"release");
lf[86]=C_h_intern(&lf[86],15,"chicken-version");
lf[87]=C_h_intern(&lf[87],24,"\010compilersource-filename");
lf[88]=C_h_intern(&lf[88],28,"\010compilerprofile-lambda-list");
lf[89]=C_h_intern(&lf[89],31,"\010compilerline-number-database-2");
lf[90]=C_h_intern(&lf[90],4,"node");
lf[91]=C_h_intern(&lf[91],6,"lambda");
lf[92]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\016\376\377\016");
lf[93]=C_h_intern(&lf[93],23,"\010compilerconstant-table");
lf[94]=C_h_intern(&lf[94],21,"\010compilerinline-table");
lf[95]=C_h_intern(&lf[95],23,"\010compilerfirst-analysis");
lf[96]=C_h_intern(&lf[96],41,"\010compilerperform-high-level-optimizations");
lf[97]=C_h_intern(&lf[97],37,"\010compilerinline-substitutions-enabled");
lf[98]=C_h_intern(&lf[98],22,"optimize-leaf-routines");
lf[99]=C_decode_literal(C_heaptop,"\376B\000\000\031leaf routine optimization");
lf[100]=C_h_intern(&lf[100],34,"\010compilertransform-direct-lambdas!");
lf[101]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[102]=C_h_intern(&lf[102],4,"leaf");
lf[103]=C_h_intern(&lf[103],18,"\010compilerdebugging");
lf[104]=C_h_intern(&lf[104],1,"p");
lf[105]=C_decode_literal(C_heaptop,"\376B\000\000\025rewritings enabled...");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\023optimized-iteration");
lf[107]=C_h_intern(&lf[107],1,"5");
lf[108]=C_decode_literal(C_heaptop,"\376B\000\000\014optimization");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\021optimization pass");
lf[110]=C_h_intern(&lf[110],36,"\010compilerprepare-for-code-generation");
lf[111]=C_decode_literal(C_heaptop,"\376B\000\000\025compilation finished.");
lf[112]=C_h_intern(&lf[112],30,"\010compilercompiler-cleanup-hook");
lf[113]=C_h_intern(&lf[113],1,"t");
lf[114]=C_h_intern(&lf[114],17,"\003sysdisplay-times");
lf[115]=C_h_intern(&lf[115],14,"\003sysstop-timer");
lf[116]=C_decode_literal(C_heaptop,"\376B\000\000\017code generation");
lf[117]=C_h_intern(&lf[117],17,"close-output-port");
lf[118]=C_h_intern(&lf[118],22,"\010compilergenerate-code");
lf[119]=C_decode_literal(C_heaptop,"\376B\000\000\023generating `~A\047 ...");
lf[120]=C_h_intern(&lf[120],16,"open-output-file");
lf[121]=C_h_intern(&lf[121],19,"current-output-port");
lf[122]=C_decode_literal(C_heaptop,"\376B\000\000\013preparation");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\021closure-converted");
lf[124]=C_h_intern(&lf[124],1,"9");
lf[125]=C_h_intern(&lf[125],4,"exit");
lf[126]=C_h_intern(&lf[126],20,"\003syswarnings-enabled");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000#(don\047t worry - still compiling...)\012");
lf[128]=C_decode_literal(C_heaptop,"\376B\000\000\016final-analysis");
lf[129]=C_h_intern(&lf[129],1,"8");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\022closure conversion");
lf[131]=C_h_intern(&lf[131],35,"\010compilerperform-closure-conversion");
lf[132]=C_h_intern(&lf[132],27,"\010compilerinline-output-file");
lf[133]=C_h_intern(&lf[133],32,"\010compileremit-global-inline-file");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000&Generating global inline file `~a\047 ...");
lf[135]=C_decode_literal(C_heaptop,"\376B\000\000\011optimized");
lf[136]=C_h_intern(&lf[136],1,"7");
lf[137]=C_h_intern(&lf[137],1,"s");
lf[138]=C_h_intern(&lf[138],33,"\010compilerprint-program-statistics");
lf[139]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[140]=C_h_intern(&lf[140],1,"4");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[142]=C_h_intern(&lf[142],1,"v");
lf[143]=C_h_intern(&lf[143],25,"\010compilerdump-global-refs");
lf[144]=C_h_intern(&lf[144],1,"d");
lf[145]=C_h_intern(&lf[145],29,"\010compilerdump-defined-globals");
lf[146]=C_h_intern(&lf[146],1,"u");
lf[147]=C_h_intern(&lf[147],31,"\010compilerdump-undefined-globals");
lf[148]=C_h_intern(&lf[148],3,"opt");
lf[149]=C_decode_literal(C_heaptop,"\376B\000\000\003cps");
lf[150]=C_h_intern(&lf[150],1,"3");
lf[151]=C_decode_literal(C_heaptop,"\376B\000\000\016cps conversion");
lf[152]=C_h_intern(&lf[152],31,"\010compilerperform-cps-conversion");
lf[153]=C_h_intern(&lf[153],6,"unsafe");
lf[154]=C_h_intern(&lf[154],34,"\010compilerscan-toplevel-assignments");
lf[155]=C_h_intern(&lf[155],24,"\010compilerinline-globally");
lf[156]=C_h_intern(&lf[156],23,"\010compilerinline-locally");
lf[157]=C_h_intern(&lf[157],25,"\010compilerload-inline-file");
lf[158]=C_decode_literal(C_heaptop,"\376B\000\000\032Loading inline file ~a ...");
lf[159]=C_h_intern(&lf[159],19,"consult-inline-file");
lf[160]=C_h_intern(&lf[160],28,"\010compilerenable-inline-files");
lf[161]=C_decode_literal(C_heaptop,"\376B\000\000\032Loading inline file ~a ...");
lf[162]=C_h_intern(&lf[162],12,"file-exists\077");
lf[163]=C_h_intern(&lf[163],28,"\003sysresolve-include-filename");
lf[164]=C_h_intern(&lf[164],13,"make-pathname");
lf[165]=C_decode_literal(C_heaptop,"\376B\000\000\006inline");
lf[166]=C_h_intern(&lf[166],14,"symbol->string");
lf[167]=C_h_intern(&lf[167],11,"concatenate");
lf[168]=C_h_intern(&lf[168],3,"cdr");
lf[169]=C_h_intern(&lf[169],2,"pp");
lf[170]=C_h_intern(&lf[170],1,"M");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\017; requirements:");
lf[172]=C_h_intern(&lf[172],12,"vector->list");
lf[173]=C_h_intern(&lf[173],26,"\010compilerfile-requirements");
lf[174]=C_h_intern(&lf[174],26,"\010compilerdo-lambda-lifting");
lf[175]=C_decode_literal(C_heaptop,"\376B\000\000\015lambda lifted");
lf[176]=C_h_intern(&lf[176],1,"L");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\016lambda lifting");
lf[178]=C_h_intern(&lf[178],32,"\010compilerperform-lambda-lifting!");
lf[179]=C_h_intern(&lf[179],22,"\010compilerdo-scrutinize");
lf[180]=C_decode_literal(C_heaptop,"\376B\000\000\032pre-analysis (lambda-lift)");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[182]=C_h_intern(&lf[182],1,"0");
lf[183]=C_h_intern(&lf[183],4,"lift");
lf[184]=C_decode_literal(C_heaptop,"\376B\000\000\010scrutiny");
lf[185]=C_h_intern(&lf[185],19,"\010compilerscrutinize");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\023performing scrutiny");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\014pre-analysis");
lf[188]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[189]=C_h_intern(&lf[189],8,"scrutiny");
lf[190]=C_h_intern(&lf[190],27,"\010compilerload-type-database");
lf[191]=C_h_intern(&lf[191],12,"\003sysfor-each");
lf[192]=C_h_intern(&lf[192],5,"types");
lf[193]=C_h_intern(&lf[193],17,"ignore-repository");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\010types.db");
lf[195]=C_h_intern(&lf[195],37,"\010compilerinitialize-analysis-database");
lf[196]=C_decode_literal(C_heaptop,"\376B\000\000\021initial node tree");
lf[197]=C_h_intern(&lf[197],1,"T");
lf[198]=C_h_intern(&lf[198],25,"\010compilerbuild-node-graph");
lf[199]=C_h_intern(&lf[199],32,"\010compilercanonicalize-begin-body");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\011user pass");
lf[201]=C_decode_literal(C_heaptop,"\376B\000\000\014User pass...");
lf[202]=C_h_intern(&lf[202],12,"check-syntax");
lf[203]=C_decode_literal(C_heaptop,"\376B\000\000\015canonicalized");
lf[204]=C_h_intern(&lf[204],1,"2");
lf[205]=C_decode_literal(C_heaptop,"\376B\000\000\020canonicalization");
lf[206]=C_h_intern(&lf[206],25,"\010compilercompiler-warning");
lf[207]=C_h_intern(&lf[207],5,"style");
lf[208]=C_decode_literal(C_heaptop,"\376B\000\000Icompiling extensions in unsafe mode is bad practice and should be avoided");
lf[209]=C_h_intern(&lf[209],8,"feature\077");
lf[210]=C_h_intern(&lf[210],19,"compiling-extension");
lf[211]=C_h_intern(&lf[211],18,"\010compilerunit-name");
lf[212]=C_h_intern(&lf[212],5,"usage");
lf[213]=C_decode_literal(C_heaptop,"\376B\000\000*library unit `~a\047 compiled in dynamic mode");
lf[214]=C_h_intern(&lf[214],37,"\010compilerdisplay-line-number-database");
lf[215]=C_h_intern(&lf[215],1,"n");
lf[216]=C_decode_literal(C_heaptop,"\376B\000\000\025line number database:");
lf[217]=C_h_intern(&lf[217],32,"\010compilerdisplay-real-name-table");
lf[218]=C_h_intern(&lf[218],1,"N");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000\020real name table:");
lf[220]=C_decode_literal(C_heaptop,"\376B\000\000\002\011\011");
lf[221]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[222]=C_h_intern(&lf[222],35,"\010compilercompiler-syntax-statistics");
lf[223]=C_h_intern(&lf[223],1,"S");
lf[224]=C_decode_literal(C_heaptop,"\376B\000\000\030applied compiler syntax:");
lf[225]=C_h_intern(&lf[225],6,"append");
lf[226]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016\376\377\016");
lf[227]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016\376\377\016");
lf[228]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016\376\377\016");
lf[229]=C_h_intern(&lf[229],5,"quote");
lf[230]=C_h_intern(&lf[230],33,"\010compilerprofile-info-vector-name");
lf[231]=C_h_intern(&lf[231],28,"\003sysset-profile-info-vector!");
lf[232]=C_h_intern(&lf[232],21,"\010compileremit-profile");
lf[233]=C_h_intern(&lf[233],25,"\003sysregister-profile-info");
lf[234]=C_h_intern(&lf[234],4,"set!");
lf[235]=C_h_intern(&lf[235],13,"\004corecallunit");
lf[236]=C_h_intern(&lf[236],19,"\010compilerused-units");
lf[237]=C_h_intern(&lf[237],28,"\010compilerimmutable-constants");
lf[238]=C_h_intern(&lf[238],6,"gensym");
lf[239]=C_h_intern(&lf[239],32,"\010compilercanonicalize-expression");
lf[240]=C_h_intern(&lf[240],4,"uses");
lf[241]=C_h_intern(&lf[241],7,"declare");
lf[242]=C_h_intern(&lf[242],10,"\003sysappend");
lf[243]=C_decode_literal(C_heaptop,"\376B\000\000\006source");
lf[244]=C_h_intern(&lf[244],1,"1");
lf[245]=C_decode_literal(C_heaptop,"\376B\000\000\032User preprocessing pass...");
lf[246]=C_decode_literal(C_heaptop,"\376B\000\000\021User read pass...");
lf[247]=C_h_intern(&lf[247],21,"\010compilerstring->expr");
lf[248]=C_h_intern(&lf[248],7,"reverse");
lf[249]=C_h_intern(&lf[249],27,"\003syscurrent-source-filename");
lf[250]=C_h_intern(&lf[250],33,"\010compilerclose-checked-input-file");
lf[251]=C_h_intern(&lf[251],16,"\003sysdynamic-wind");
lf[252]=C_h_intern(&lf[252],34,"\010compilercheck-and-open-input-file");
lf[253]=C_h_intern(&lf[253],8,"epilogue");
lf[254]=C_h_intern(&lf[254],8,"prologue");
lf[255]=C_h_intern(&lf[255],8,"postlude");
lf[256]=C_h_intern(&lf[256],7,"prelude");
lf[257]=C_h_intern(&lf[257],11,"make-vector");
lf[258]=C_h_intern(&lf[258],34,"\010compilerline-number-database-size");
lf[259]=C_h_intern(&lf[259],1,"r");
lf[260]=C_decode_literal(C_heaptop,"\376B\000\000\021target stack size");
lf[261]=C_decode_literal(C_heaptop,"\376B\000\000\020target heap size");
lf[262]=C_decode_literal(C_heaptop,"\376B\000\000\021debugging options");
lf[263]=C_decode_literal(C_heaptop,"\376B\000\000\007options");
lf[264]=C_decode_literal(C_heaptop,"\376B\000\000\022compiling `~a\047 ...");
lf[265]=C_decode_literal(C_heaptop,"\376B\000\0009\012Enter \042chicken -help\042 for information on how to use it.\012");
lf[266]=C_h_intern(&lf[266],5,"-help");
lf[267]=C_h_intern(&lf[267],1,"h");
lf[268]=C_h_intern(&lf[268],2,"-h");
lf[269]=C_h_intern(&lf[269],33,"\010compilerload-identifier-database");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\012modules.db");
lf[271]=C_h_intern(&lf[271],18,"accumulate-profile");
lf[272]=C_h_intern(&lf[272],28,"\010compilerprofiled-procedures");
lf[273]=C_h_intern(&lf[273],3,"all");
lf[274]=C_decode_literal(C_heaptop,"\376B\000\000\024Generating ~aprofile");
lf[275]=C_decode_literal(C_heaptop,"\376B\000\000\014accumulated ");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[277]=C_h_intern(&lf[277],39,"\010compilerdefault-profiling-declarations");
lf[278]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004set!\376\003\000\000\002\376\001\000\000\027\003sysprofile-append-mode\376\003\000\000\002\376\377\006\001\376\377\016\376\377\016");
lf[279]=C_decode_literal(C_heaptop,"\376B\000\000\022debugging info: ~A");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\011calltrace");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[282]=C_h_intern(&lf[282],21,"no-usual-integrations");
lf[283]=C_h_intern(&lf[283],17,"standard-bindings");
lf[284]=C_h_intern(&lf[284],34,"\010compilerdefault-standard-bindings");
lf[285]=C_h_intern(&lf[285],17,"extended-bindings");
lf[286]=C_h_intern(&lf[286],34,"\010compilerdefault-extended-bindings");
lf[287]=C_h_intern(&lf[287],1,"m");
lf[288]=C_h_intern(&lf[288],14,"set-gc-report!");
lf[289]=C_h_intern(&lf[289],42,"\010compilerdefault-default-target-stack-size");
lf[290]=C_h_intern(&lf[290],41,"\010compilerdefault-default-target-heap-size");
lf[291]=C_h_intern(&lf[291],14,"compile-syntax");
lf[292]=C_h_intern(&lf[292],25,"\003sysenable-runtime-macros");
lf[293]=C_h_intern(&lf[293],22,"\004corerequire-extension");
lf[294]=C_h_intern(&lf[294],14,"string->symbol");
lf[295]=C_h_intern(&lf[295],17,"require-extension");
lf[296]=C_h_intern(&lf[296],16,"static-extension");
lf[297]=C_h_intern(&lf[297],28,"\010compilerpostponed-initforms");
lf[298]=C_h_intern(&lf[298],6,"delete");
lf[299]=C_h_intern(&lf[299],3,"eq\077");
lf[300]=C_h_intern(&lf[300],4,"load");
lf[301]=C_h_intern(&lf[301],12,"load-verbose");
lf[302]=C_decode_literal(C_heaptop,"\376B\000\000\036Loading compiler extensions...");
lf[303]=C_h_intern(&lf[303],6,"extend");
lf[304]=C_h_intern(&lf[304],17,"register-feature!");
lf[305]=C_h_intern(&lf[305],12,"string-split");
lf[306]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[307]=C_h_intern(&lf[307],10,"append-map");
lf[308]=C_h_intern(&lf[308],7,"feature");
lf[309]=C_h_intern(&lf[309],38,"no-procedure-checks-for-usual-bindings");
lf[310]=C_h_intern(&lf[310],8,"\003sysput!");
lf[311]=C_h_intern(&lf[311],21,"\010compileralways-bound");
lf[312]=C_h_intern(&lf[312],34,"\010compileralways-bound-to-procedure");
lf[313]=C_h_intern(&lf[313],19,"no-procedure-checks");
lf[314]=C_h_intern(&lf[314],28,"\010compilerno-procedure-checks");
lf[315]=C_h_intern(&lf[315],15,"no-bound-checks");
lf[316]=C_h_intern(&lf[316],24,"\010compilerno-bound-checks");
lf[317]=C_h_intern(&lf[317],14,"no-argc-checks");
lf[318]=C_h_intern(&lf[318],23,"\010compilerno-argc-checks");
lf[319]=C_h_intern(&lf[319],20,"keep-shadowed-macros");
lf[320]=C_h_intern(&lf[320],33,"\010compilerundefine-shadowed-macros");
lf[321]=C_decode_literal(C_heaptop,"\376B\000\000(source- and output-filename are the same");
lf[322]=C_h_intern(&lf[322],23,"\010compilerchop-separator");
lf[323]=C_h_intern(&lf[323],12,"include-path");
lf[324]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\377\016");
lf[325]=C_h_intern(&lf[325],13,"symbol-escape");
lf[326]=C_h_intern(&lf[326],20,"parentheses-synonyms");
lf[327]=C_h_intern(&lf[327],5,"\000none");
lf[328]=C_h_intern(&lf[328],14,"case-sensitive");
lf[329]=C_decode_literal(C_heaptop,"\376B\000\000.Disabled the Chicken extensions to R5RS syntax");
lf[330]=C_h_intern(&lf[330],16,"no-symbol-escape");
lf[331]=C_decode_literal(C_heaptop,"\376B\000\000$Disabled support for escaped symbols");
lf[332]=C_h_intern(&lf[332],23,"no-parenthesis-synonyms");
lf[333]=C_h_intern(&lf[333],20,"parenthesis-synonyms");
lf[334]=C_decode_literal(C_heaptop,"\376B\000\000)Disabled support for parenthesis synonyms");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000\006prefix");
lf[336]=C_h_intern(&lf[336],7,"\000prefix");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[338]=C_decode_literal(C_heaptop,"\376B\000\000\006suffix");
lf[339]=C_h_intern(&lf[339],7,"\000suffix");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000+invalid argument to `-keyword-style\047 option");
lf[341]=C_h_intern(&lf[341],17,"compress-literals");
lf[342]=C_decode_literal(C_heaptop,"\376B\000\000+`the -compress-literals\047 option is obsolete");
lf[343]=C_h_intern(&lf[343],16,"case-insensitive");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000,Identifiers and symbols are case insensitive");
lf[345]=C_h_intern(&lf[345],24,"\010compilerinline-max-size");
lf[346]=C_decode_literal(C_heaptop,"\376B\000\0000invalid argument to `-inline-limit\047 option: `~A\047");
lf[347]=C_h_intern(&lf[347],26,"\010compilerlocal-definitions");
lf[348]=C_h_intern(&lf[348],6,"inline");
lf[349]=C_h_intern(&lf[349],30,"emit-external-prototypes-first");
lf[350]=C_h_intern(&lf[350],30,"\010compilerexternal-protos-first");
lf[351]=C_h_intern(&lf[351],5,"block");
lf[352]=C_h_intern(&lf[352],26,"\010compilerblock-compilation");
lf[353]=C_h_intern(&lf[353],17,"fixnum-arithmetic");
lf[354]=C_h_intern(&lf[354],11,"number-type");
lf[355]=C_h_intern(&lf[355],6,"fixnum");
lf[356]=C_h_intern(&lf[356],18,"disable-interrupts");
lf[357]=C_h_intern(&lf[357],28,"\010compilerinsert-timer-checks");
lf[358]=C_h_intern(&lf[358],10,"setup-mode");
lf[359]=C_h_intern(&lf[359],14,"\003syssetup-mode");
lf[360]=C_h_intern(&lf[360],16,"unsafe-libraries");
lf[361]=C_h_intern(&lf[361],27,"\010compileremit-unsafe-marker");
lf[362]=C_h_intern(&lf[362],11,"no-warnings");
lf[363]=C_decode_literal(C_heaptop,"\376B\000\000\025Warnings are disabled");
lf[364]=C_h_intern(&lf[364],15,"disable-warning");
lf[365]=C_h_intern(&lf[365],13,"inline-global");
lf[366]=C_h_intern(&lf[366],5,"local");
lf[367]=C_h_intern(&lf[367],18,"no-compiler-syntax");
lf[368]=C_h_intern(&lf[368],32,"\010compilercompiler-syntax-enabled");
lf[369]=C_h_intern(&lf[369],14,"no-lambda-info");
lf[370]=C_h_intern(&lf[370],26,"\010compileremit-closure-info");
lf[371]=C_h_intern(&lf[371],3,"raw");
lf[372]=C_h_intern(&lf[372],12,"emit-exports");
lf[373]=C_h_intern(&lf[373],7,"warning");
lf[374]=C_decode_literal(C_heaptop,"\376B\000\000(deprecated compiler option: emit-exports");
lf[375]=C_h_intern(&lf[375],1,"b");
lf[376]=C_h_intern(&lf[376],15,"\003sysstart-timer");
lf[377]=C_h_intern(&lf[377],10,"scrutinize");
lf[378]=C_h_intern(&lf[378],11,"lambda-lift");
lf[379]=C_h_intern(&lf[379],25,"emit-all-import-libraries");
lf[380]=C_h_intern(&lf[380],29,"\010compilerall-import-libraries");
lf[381]=C_h_intern(&lf[381],13,"string-append");
lf[382]=C_decode_literal(C_heaptop,"\376B\000\000\013.import.scm");
lf[383]=C_h_intern(&lf[383],19,"emit-import-library");
lf[384]=C_h_intern(&lf[384],16,"\003sysstring->list");
lf[385]=C_h_intern(&lf[385],5,"debug");
lf[386]=C_h_intern(&lf[386],18,"\003sysdload-disabled");
lf[387]=C_h_intern(&lf[387],15,"repository-path");
lf[388]=C_h_intern(&lf[388],30,"\010compilerstandalone-executable");
lf[389]=C_h_intern(&lf[389],29,"\010compilerstring->c-identifier");
lf[390]=C_h_intern(&lf[390],18,"\010compilerstringify");
lf[391]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[392]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[393]=C_h_intern(&lf[393],24,"get-environment-variable");
lf[394]=C_decode_literal(C_heaptop,"\376B\000\000\024CHICKEN_INCLUDE_PATH");
lf[395]=C_h_intern(&lf[395],9,"to-stdout");
lf[396]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[397]=C_h_intern(&lf[397],13,"pathname-file");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\003out");
lf[399]=C_h_intern(&lf[399],29,"\010compilerdefault-declarations");
lf[400]=C_h_intern(&lf[400],30,"\010compilerunits-used-by-default");
lf[401]=C_h_intern(&lf[401],28,"\010compilerinitialize-compiler");
lf[402]=C_h_intern(&lf[402],14,"make-parameter");
C_register_lf2(lf,403,create_ptable());
t2=C_mutate(&lf[0] /* (set! c338 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1498,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k1496 */
static void C_ccall f_1498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1501,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1499 in k1496 */
static void C_ccall f_1501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1501,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1506,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 38   make-parameter");
((C_proc3)C_retrieve_symbol_proc(lf[402]))(3,*((C_word*)lf[402]+1),t2,C_SCHEME_FALSE);}

/* k1504 in k1499 in k1496 */
static void C_ccall f_1506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1506,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! user-options-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1510,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 39   make-parameter");
((C_proc3)C_retrieve_symbol_proc(lf[402]))(3,*((C_word*)lf[402]+1),t3,C_SCHEME_FALSE);}

/* k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1510,2,t0,t1);}
t2=C_mutate((C_word*)lf[3]+1 /* (set! user-read-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1514,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 40   make-parameter");
((C_proc3)C_retrieve_symbol_proc(lf[402]))(3,*((C_word*)lf[402]+1),t3,C_SCHEME_FALSE);}

/* k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1514,2,t0,t1);}
t2=C_mutate((C_word*)lf[4]+1 /* (set! user-preprocessor-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1518,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 41   make-parameter");
((C_proc3)C_retrieve_symbol_proc(lf[402]))(3,*((C_word*)lf[402]+1),t3,C_SCHEME_FALSE);}

/* k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1518,2,t0,t1);}
t2=C_mutate((C_word*)lf[5]+1 /* (set! user-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1522,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 42   make-parameter");
((C_proc3)C_retrieve_symbol_proc(lf[402]))(3,*((C_word*)lf[402]+1),t3,C_SCHEME_FALSE);}

/* k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1522,2,t0,t1);}
t2=C_mutate((C_word*)lf[6]+1 /* (set! user-post-analysis-pass ...) */,t1);
t3=C_mutate((C_word*)lf[7]+1 /* (set! compile-source-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1524,tmp=(C_word)a,a+=2,tmp));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1524(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_1524r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1524r(t0,t1,t2,t3);}}

static void C_ccall f_1524r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1527,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1560,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
C_trace("batch-driver.scm: 55   initialize-compiler");
((C_proc2)C_retrieve_symbol_proc(lf[401]))(2,*((C_word*)lf[401]+1),t5);}

/* k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1560,2,t0,t1);}
t2=(C_word)C_i_memq(lf[11],((C_word*)t0)[5]);
t3=C_mutate((C_word*)lf[12]+1 /* (set! explicit-use-flag ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4793,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[12]))){
C_trace("batch-driver.scm: 58   append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[225]+1)))(4,*((C_word*)lf[225]+1),t5,C_retrieve(lf[399]),C_SCHEME_END_OF_LIST);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4808,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#append");
t7=*((C_word*)lf[242]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_retrieve(lf[400]),C_SCHEME_END_OF_LIST);}}

/* k4806 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4808,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[240],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
C_trace("batch-driver.scm: 58   append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[225]+1)))(4,*((C_word*)lf[225]+1),((C_word*)t0)[2],C_retrieve(lf[399]),t3);}

/* k4791 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#append");
t2=*((C_word*)lf[242]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4789(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4789,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[13],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(C_word)C_i_memq(lf[14],((C_word*)t0)[5]);
t7=(C_word)C_i_memq(lf[15],((C_word*)t0)[5]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t6,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4749,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("g7778");
t10=t9;
f_4749(t10,t8,t7);}
else{
if(C_truep((C_word)C_i_memq(lf[395],((C_word*)t0)[5]))){
t9=t8;
f_1576(2,t9,C_SCHEME_FALSE);}
else{
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4778,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("batch-driver.scm: 71   pathname-file");
((C_proc3)C_retrieve_symbol_proc(lf[397]))(3,*((C_word*)lf[397]+1),t9,((C_word*)t0)[2]);}
else{
C_trace("batch-driver.scm: 71   make-pathname");
((C_proc5)C_retrieve_symbol_proc(lf[164]))(5,*((C_word*)lf[164]+1),t8,C_SCHEME_FALSE,lf[398],lf[396]);}}}}

/* k4776 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 71   make-pathname");
((C_proc5)C_retrieve_symbol_proc(lf[164]))(5,*((C_word*)lf[164]+1),((C_word*)t0)[2],C_SCHEME_FALSE,t1,lf[396]);}

/* g77 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_4749(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4749,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4753,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 66   option-arg");
f_1527(t3,t2);}

/* k4751 in g77 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_i_symbolp(t1))){
C_trace("batch-driver.scm: 68   symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[166]+1)))(3,*((C_word*)lf[166]+1),((C_word*)t0)[2],t1);}
else{
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1576(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1576,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1579,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4706,a[2]=t6,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4745,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 72   get-environment-variable");
((C_proc3)C_retrieve_symbol_proc(lf[393]))(3,*((C_word*)lf[393]+1),t8,lf[394]);}

/* k4743 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
C_trace("batch-driver.scm: 72   string-split");
((C_proc4)C_retrieve_symbol_proc(lf[305]))(4,*((C_word*)lf[305]+1),((C_word*)t0)[2],t2,lf[391]);}
else{
C_trace("batch-driver.scm: 72   string-split");
((C_proc4)C_retrieve_symbol_proc(lf[305]))(4,*((C_word*)lf[305]+1),((C_word*)t0)[2],lf[392],lf[391]);}}

/* k4704 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4706,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4708,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4708(t5,((C_word*)t0)[2],t1);}

/* loop83 in k4704 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_4708(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4708,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[322]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4737,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g99100");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4735 in loop83 in k4704 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4737(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4737,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop8396");
t6=((C_word*)((C_word*)t0)[4])[1];
f_4708(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop8396");
t6=((C_word*)((C_word*)t0)[4])[1];
f_4708(t6,((C_word*)t0)[3],t5);}}

/* k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1579(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1579,2,t0,t1);}
t2=C_retrieve(lf[16]);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=lf[17];
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(C_word)C_i_memq(lf[18],((C_word*)t0)[8]);
t12=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1585,a[2]=t1,a[3]=t8,a[4]=t10,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t4,a[10]=t6,a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t11)){
t13=t12;
f_1585(t13,t11);}
else{
t13=(C_word)C_i_memq(lf[271],((C_word*)t0)[8]);
t14=t12;
f_1585(t14,(C_truep(t13)?t13:(C_word)C_i_memq(lf[19],((C_word*)t0)[8])));}}

/* k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1585(C_word t0,C_word t1){
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
C_word ab[116],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1585,NULL,2,t0,t1);}
t2=(C_word)C_i_memq(lf[19],((C_word*)t0)[13]);
t3=(C_truep(t2)?(C_word)C_i_cadr(t2):C_SCHEME_FALSE);
t4=(C_truep(t3)?t3:lf[20]);
t5=(C_word)C_i_memq(lf[21],((C_word*)t0)[13]);
t6=(C_word)C_i_memq(lf[22],((C_word*)t0)[13]);
t7=(C_word)C_i_memq(lf[23],((C_word*)t0)[13]);
t8=(C_word)C_i_memq(lf[24],((C_word*)t0)[13]);
t9=(C_word)C_i_memq(lf[25],((C_word*)t0)[13]);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(C_word)C_i_memq(lf[26],((C_word*)t0)[13]);
t13=(C_word)C_i_memq(lf[27],((C_word*)t0)[13]);
t14=(C_word)C_i_memq(lf[28],((C_word*)t0)[13]);
t15=C_SCHEME_FALSE;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=C_SCHEME_FALSE;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_SCHEME_FALSE;
t20=(*a=C_VECTOR_TYPE|1,a[1]=t19,tmp=(C_word)a,a+=2,tmp);
t21=(C_word)C_i_memq(lf[29],((C_word*)t0)[13]);
t22=(C_truep(t21)?t21:(C_word)C_i_memq(lf[30],((C_word*)t0)[13]));
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
t33=C_SCHEME_UNDEFINED;
t34=(*a=C_VECTOR_TYPE|1,a[1]=t33,tmp=(C_word)a,a+=2,tmp);
t35=C_SCHEME_UNDEFINED;
t36=(*a=C_VECTOR_TYPE|1,a[1]=t35,tmp=(C_word)a,a+=2,tmp);
t37=C_SCHEME_UNDEFINED;
t38=(*a=C_VECTOR_TYPE|1,a[1]=t37,tmp=(C_word)a,a+=2,tmp);
t39=C_SCHEME_UNDEFINED;
t40=(*a=C_VECTOR_TYPE|1,a[1]=t39,tmp=(C_word)a,a+=2,tmp);
t41=C_SCHEME_UNDEFINED;
t42=(*a=C_VECTOR_TYPE|1,a[1]=t41,tmp=(C_word)a,a+=2,tmp);
t43=C_SCHEME_UNDEFINED;
t44=(*a=C_VECTOR_TYPE|1,a[1]=t43,tmp=(C_word)a,a+=2,tmp);
t45=C_SCHEME_UNDEFINED;
t46=(*a=C_VECTOR_TYPE|1,a[1]=t45,tmp=(C_word)a,a+=2,tmp);
t47=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1632,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp));
t48=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1647,a[2]=t24,tmp=(C_word)a,a+=3,tmp));
t49=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1671,a[2]=t26,a[3]=t16,tmp=(C_word)a,a+=4,tmp));
t50=C_set_block_item(t30,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1693,a[2]=t26,tmp=(C_word)a,a+=3,tmp));
t51=C_set_block_item(t32,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1717,a[2]=t26,tmp=(C_word)a,a+=3,tmp));
t52=C_set_block_item(t34,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1752,tmp=(C_word)a,a+=2,tmp));
t53=C_set_block_item(t36,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1801,tmp=(C_word)a,a+=2,tmp));
t54=C_set_block_item(t38,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1881,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp));
t55=C_set_block_item(t40,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1916,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp));
t56=C_set_block_item(t42,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1926,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp));
t57=C_set_block_item(t44,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1955,a[2]=t34,tmp=(C_word)a,a+=3,tmp));
t58=C_set_block_item(t46,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1961,a[2]=t20,tmp=(C_word)a,a+=3,tmp));
t59=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2040,a[2]=((C_word*)t0)[10],a[3]=t9,a[4]=((C_word*)t0)[2],a[5]=t5,a[6]=t6,a[7]=t7,a[8]=t8,a[9]=((C_word*)t0)[11],a[10]=t36,a[11]=t22,a[12]=t1,a[13]=t44,a[14]=((C_word*)t0)[3],a[15]=t4,a[16]=((C_word*)t0)[4],a[17]=t32,a[18]=t38,a[19]=t30,a[20]=t13,a[21]=t14,a[22]=((C_word*)t0)[5],a[23]=t24,a[24]=t28,a[25]=t46,a[26]=t42,a[27]=t40,a[28]=t18,a[29]=((C_word*)t0)[6],a[30]=((C_word*)t0)[7],a[31]=((C_word*)t0)[8],a[32]=t20,a[33]=t11,a[34]=((C_word*)t0)[12],a[35]=((C_word*)t0)[13],a[36]=t16,tmp=(C_word)a,a+=37,tmp);
if(C_truep(t12)){
t60=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4679,a[2]=t59,tmp=(C_word)a,a+=3,tmp);
t61=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4683,a[2]=t60,tmp=(C_word)a,a+=3,tmp);
t62=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4687,a[2]=t61,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 169  option-arg");
f_1527(t62,t12);}
else{
t60=t59;
f_2040(t60,C_SCHEME_UNDEFINED);}}

/* k4685 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 169  stringify");
((C_proc3)C_retrieve_symbol_proc(lf[390]))(3,*((C_word*)lf[390]+1),((C_word*)t0)[2],t1);}

/* k4681 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 169  string->c-identifier");
((C_proc3)C_retrieve_symbol_proc(lf[389]))(3,*((C_word*)lf[389]+1),((C_word*)t0)[2],t1);}

/* k4677 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[211]+1 /* (set! unit-name ...) */,t1);
t3=((C_word*)t0)[2];
f_2040(t3,t2);}

/* k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2040(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2040,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2043,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t3=C_retrieve(lf[211]);
if(C_truep(t3)){
if(C_truep(t3)){
t4=C_set_block_item(lf[388] /* standalone-executable */,0,C_SCHEME_FALSE);
t5=t2;
f_2043(t5,t4);}
else{
t4=t2;
f_2043(t4,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(((C_word*)t0)[21])){
t4=C_set_block_item(lf[388] /* standalone-executable */,0,C_SCHEME_FALSE);
t5=t2;
f_2043(t5,t4);}
else{
t4=t2;
f_2043(t4,C_SCHEME_UNDEFINED);}}}

/* k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2043(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2043,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2046,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep((C_word)C_i_memq(lf[193],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[386] /* dload-disabled */,0,C_SCHEME_TRUE);
C_trace("batch-driver.scm: 174  repository-path");
((C_proc3)C_retrieve_symbol_proc(lf[387]))(3,*((C_word*)lf[387]+1),t2,C_SCHEME_FALSE);}
else{
t3=t2;
f_2046(2,t3,C_SCHEME_UNDEFINED);}}

/* k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2046,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4608,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4664,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 180  collect-options");
t5=((C_word*)((C_word*)t0)[18])[1];
f_1881(t5,t4,lf[385]);}

/* k4662 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 176  append-map");
((C_proc4)C_retrieve_symbol_proc(lf[307]))(4,*((C_word*)lf[307]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a4607 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4608(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4608,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4616,a[2]=t1,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
C_trace("string->list");
t8=C_retrieve(lf[384]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k4614 in a4607 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4616,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4618,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4618(t5,((C_word*)t0)[2],t1);}

/* loop352 in k4614 in a4607 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_4618(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4618,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4656,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_a_i_string(&a,1,t4);
C_trace("batch-driver.scm: 178  string->symbol");
((C_proc3)C_retrieve_proc(*((C_word*)lf[294]+1)))(3,*((C_word*)lf[294]+1),t3,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4654 in loop352 in k4614 in a4607 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4656(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4656,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop352365");
t6=((C_word*)((C_word*)t0)[4])[1];
f_4618(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop352365");
t6=((C_word*)((C_word*)t0)[4])[1];
f_4618(t6,((C_word*)t0)[3],t5);}}

/* k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2050(C_word c,C_word t0,C_word t1){
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
C_word ab[45],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2050,2,t0,t1);}
t2=C_mutate((C_word*)lf[35]+1 /* (set! debugging-chicken ...) */,t1);
t3=(C_word)C_i_memq(lf[59],C_retrieve(lf[35]));
t4=C_mutate(((C_word *)((C_word*)t0)[36])+1,t3);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2058,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4558,a[2]=t9,a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 186  collect-options");
t11=((C_word*)((C_word*)t0)[18])[1];
f_1881(t11,t10,lf[383]);}

/* k4556 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4558,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4560,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4560(t5,((C_word*)t0)[2],t1);}

/* loop376 in k4556 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_4560(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4560,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4595,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
C_trace("batch-driver.scm: 184  string->symbol");
((C_proc3)C_retrieve_proc(*((C_word*)lf[294]+1)))(3,*((C_word*)lf[294]+1),t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4593 in loop376 in k4556 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4595,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4599,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace("batch-driver.scm: 185  string-append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[381]+1)))(4,*((C_word*)lf[381]+1),t2,((C_word*)t0)[2],lf[382]);}

/* k4597 in k4593 in loop376 in k4556 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4599(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4599,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t4=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop376389");
t7=((C_word*)((C_word*)t0)[4])[1];
f_4560(t7,((C_word*)t0)[3],t6);}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop376389");
t7=((C_word*)((C_word*)t0)[4])[1];
f_4560(t7,((C_word*)t0)[3],t6);}}

/* k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2058,2,t0,t1);}
t2=C_mutate((C_word*)lf[60]+1 /* (set! import-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2061,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[379],((C_word*)t0)[35]))){
if(C_truep(((C_word*)t0)[20])){
t4=t3;
f_2061(t4,C_SCHEME_UNDEFINED);}
else{
t4=C_set_block_item(lf[380] /* all-import-libraries */,0,C_SCHEME_TRUE);
t5=t3;
f_2061(t5,t4);}}
else{
t4=t3;
f_2061(t4,C_SCHEME_UNDEFINED);}}

/* k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2061(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2061,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2064,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[378],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[174] /* do-lambda-lifting */,0,C_SCHEME_TRUE);
t4=t2;
f_2064(t4,t3);}
else{
t3=t2;
f_2064(t3,C_SCHEME_UNDEFINED);}}

/* k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2064(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2064,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[377],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[179] /* do-scrutinize */,0,C_SCHEME_TRUE);
t4=t2;
f_2067(t4,t3);}
else{
t3=t2;
f_2067(t3,C_SCHEME_UNDEFINED);}}

/* k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2067(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2067,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[113],C_retrieve(lf[35])))){
C_trace("batch-driver.scm: 192  ##sys#start-timer");
t3=*((C_word*)lf[376]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=t2;
f_2070(2,t3,C_SCHEME_UNDEFINED);}}

/* k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2070,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2073,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[375],C_retrieve(lf[35])))){
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t4=t2;
f_2073(t4,t3);}
else{
t3=t2;
f_2073(t3,C_SCHEME_UNDEFINED);}}

/* k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2073(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2073,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[372],((C_word*)t0)[34]))){
C_trace("batch-driver.scm: 195  warning");
((C_proc3)C_retrieve_symbol_proc(lf[373]))(3,*((C_word*)lf[373]+1),t2,lf[374]);}
else{
t3=t2;
f_2076(2,t3,C_SCHEME_UNDEFINED);}}

/* k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2076,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[371],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[12] /* explicit-use-flag */,0,C_SCHEME_TRUE);
t4=C_set_block_item(((C_word*)t0)[15],0,C_SCHEME_END_OF_LIST);
t5=C_set_block_item(((C_word*)t0)[30],0,C_SCHEME_END_OF_LIST);
t6=t2;
f_2079(t6,t5);}
else{
t3=t2;
f_2079(t3,C_SCHEME_UNDEFINED);}}

/* k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2079(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2079,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[369],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[370] /* emit-closure-info */,0,C_SCHEME_FALSE);
t4=t2;
f_2082(t4,t3);}
else{
t3=t2;
f_2082(t3,C_SCHEME_UNDEFINED);}}

/* k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2082(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2082,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[367],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[368] /* compiler-syntax-enabled */,0,C_SCHEME_FALSE);
t4=t2;
f_2085(t4,t3);}
else{
t3=t2;
f_2085(t3,C_SCHEME_UNDEFINED);}}

/* k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2085(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2085,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[366],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[347] /* local-definitions */,0,C_SCHEME_TRUE);
t4=t2;
f_2088(t4,t3);}
else{
t3=t2;
f_2088(t3,C_SCHEME_UNDEFINED);}}

/* k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2088(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2088,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[365],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[160] /* enable-inline-files */,0,C_SCHEME_TRUE);
t4=C_set_block_item(lf[156] /* inline-locally */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[155] /* inline-globally */,0,C_SCHEME_TRUE);
t6=t2;
f_2091(t6,t5);}
else{
t3=t2;
f_2091(t3,C_SCHEME_UNDEFINED);}}

/* k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2091(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[44],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2091,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2095,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4461,a[2]=t6,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 210  collect-options");
t8=((C_word*)((C_word*)t0)[17])[1];
f_1881(t8,t7,lf[364]);}

/* k4459 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4461,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4463,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4463(t5,((C_word*)t0)[2],t1);}

/* loop428 in k4459 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_4463(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4463,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[294]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4492,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g444445");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4490 in loop428 in k4459 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4492(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4492,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop428441");
t6=((C_word*)((C_word*)t0)[4])[1];
f_4463(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop428441");
t6=((C_word*)((C_word*)t0)[4])[1];
f_4463(t6,((C_word*)t0)[3],t5);}}

/* k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2095,2,t0,t1);}
t2=C_mutate((C_word*)lf[61]+1 /* (set! disabled-warnings ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2098,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[362],((C_word*)t0)[34]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4456,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 212  dribble");
t5=((C_word*)((C_word*)t0)[22])[1];
f_1632(t5,t4,lf[363],C_SCHEME_END_OF_LIST);}
else{
t4=t3;
f_2098(t4,C_SCHEME_UNDEFINED);}}

/* k4454 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[126] /* warnings-enabled */,0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
f_2098(t3,t2);}

/* k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2098(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2098,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[98],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[98] /* optimize-leaf-routines */,0,C_SCHEME_TRUE);
t4=t2;
f_2101(t4,t3);}
else{
t3=t2;
f_2101(t3,C_SCHEME_UNDEFINED);}}

/* k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2101(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2101,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[153],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[153] /* unsafe */,0,C_SCHEME_TRUE);
t4=t2;
f_2104(t4,t3);}
else{
t3=t2;
f_2104(t3,C_SCHEME_UNDEFINED);}}

/* k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2104(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2104,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2107,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(((C_word*)t0)[20])){
if(C_truep((C_word)C_i_memq(lf[360],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[361] /* emit-unsafe-marker */,0,C_SCHEME_TRUE);
t4=t2;
f_2107(t4,t3);}
else{
t3=t2;
f_2107(t3,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_2107(t3,C_SCHEME_UNDEFINED);}}

/* k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2107(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2107,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2110,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[358],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[359] /* setup-mode */,0,C_SCHEME_TRUE);
t4=t2;
f_2110(t4,t3);}
else{
t3=t2;
f_2110(t3,C_SCHEME_UNDEFINED);}}

/* k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2110(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2110,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[356],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[357] /* insert-timer-checks */,0,C_SCHEME_FALSE);
t4=t2;
f_2113(t4,t3);}
else{
t3=t2;
f_2113(t3,C_SCHEME_UNDEFINED);}}

/* k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2113(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2113,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[353],((C_word*)t0)[34]))){
t3=C_mutate((C_word*)lf[354]+1 /* (set! number-type ...) */,lf[355]);
t4=t2;
f_2116(t4,t3);}
else{
t3=t2;
f_2116(t3,C_SCHEME_UNDEFINED);}}

/* k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2116(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2116,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[351],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[352] /* block-compilation */,0,C_SCHEME_TRUE);
t4=t2;
f_2119(t4,t3);}
else{
t3=t2;
f_2119(t3,C_SCHEME_UNDEFINED);}}

/* k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2119(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2119,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2122,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[349],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[350] /* external-protos-first */,0,C_SCHEME_TRUE);
t4=t2;
f_2122(t4,t3);}
else{
t3=t2;
f_2122(t3,C_SCHEME_UNDEFINED);}}

/* k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2122(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2122,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[348],((C_word*)t0)[34]))){
t3=C_set_block_item(lf[156] /* inline-locally */,0,C_SCHEME_TRUE);
t4=t2;
f_2125(t4,t3);}
else{
t3=t2;
f_2125(t3,C_SCHEME_UNDEFINED);}}

/* k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2125(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2125,NULL,2,t0,t1);}
t2=(C_word)C_i_memq(lf[62],((C_word*)t0)[34]);
t3=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep(t2)){
t4=C_set_block_item(lf[156] /* inline-locally */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[347] /* local-definitions */,0,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4411,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 230  option-arg");
f_1527(t6,t2);}
else{
t4=t3;
f_2131(t4,C_SCHEME_FALSE);}}

/* k4409 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[132]+1 /* (set! inline-output-file ...) */,t1);
t3=((C_word*)t0)[2];
f_2131(t3,t2);}

/* k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2131(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2131,NULL,2,t0,t1);}
t2=(C_word)C_i_memq(lf[63],((C_word*)t0)[34]);
t3=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[34],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],a[33]=((C_word*)t0)[32],a[34]=((C_word*)t0)[33],tmp=(C_word)a,a+=35,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4396,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 233  option-arg");
f_1527(t4,t2);}
else{
t4=t3;
f_2137(t4,C_SCHEME_FALSE);}}

/* k4394 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4396,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4399,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 234  string->number");
C_string_to_number(3,0,t2,t1);}

/* k4397 in k4394 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4402,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t1;
t4=C_mutate((C_word*)lf[345]+1 /* (set! inline-max-size ...) */,t3);
t5=((C_word*)t0)[3];
f_2137(t5,t4);}
else{
C_trace("batch-driver.scm: 235  quit");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t2,lf[346],((C_word*)t0)[2]);}}

/* k4400 in k4397 in k4394 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[345]+1 /* (set! inline-max-size ...) */,t1);
t3=((C_word*)t0)[2];
f_2137(t3,t2);}

/* k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2137(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2137,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[343],((C_word*)t0)[30]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4386,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 237  dribble");
t4=((C_word*)((C_word*)t0)[22])[1];
f_1632(t4,t3,lf[344],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2140(2,t3,C_SCHEME_UNDEFINED);}}

/* k4384 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4386,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4389,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 238  register-feature!");
((C_proc3)C_retrieve_symbol_proc(lf[304]))(3,*((C_word*)lf[304]+1),t2,lf[343]);}

/* k4387 in k4384 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 239  case-sensitive");
((C_proc3)C_retrieve_symbol_proc(lf[328]))(3,*((C_word*)lf[328]+1),((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[341],((C_word*)t0)[30]))){
C_trace("batch-driver.scm: 241  compiler-warning");
((C_proc4)C_retrieve_symbol_proc(lf[206]))(4,*((C_word*)lf[206]+1),t2,lf[212],lf[342]);}
else{
t3=t2;
f_2143(2,t3,C_SCHEME_UNDEFINED);}}

/* k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2143,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2146,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],tmp=(C_word)a,a+=34,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4344,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 243  option-arg");
f_1527(t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_2146(2,t3,C_SCHEME_UNDEFINED);}}

/* k4342 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_i_string_equal_p(lf[335],t1))){
C_trace("batch-driver.scm: 244  keyword-style");
((C_proc3)C_retrieve_symbol_proc(lf[25]))(3,*((C_word*)lf[25]+1),((C_word*)t0)[2],lf[336]);}
else{
if(C_truep((C_word)C_i_string_equal_p(lf[337],t1))){
C_trace("batch-driver.scm: 245  keyword-style");
((C_proc3)C_retrieve_symbol_proc(lf[25]))(3,*((C_word*)lf[25]+1),((C_word*)t0)[2],lf[327]);}
else{
if(C_truep((C_word)C_i_string_equal_p(lf[338],t1))){
C_trace("batch-driver.scm: 246  keyword-style");
((C_proc3)C_retrieve_symbol_proc(lf[25]))(3,*((C_word*)lf[25]+1),((C_word*)t0)[2],lf[339]);}
else{
C_trace("batch-driver.scm: 247  quit");
((C_proc3)C_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),((C_word*)t0)[2],lf[340]);}}}}

/* k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2146,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep((C_word)C_i_memq(lf[332],((C_word*)t0)[29]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4338,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 249  dribble");
t4=((C_word*)((C_word*)t0)[21])[1];
f_1632(t4,t3,lf[334],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2149(2,t3,C_SCHEME_UNDEFINED);}}

/* k4336 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 250  parenthesis-synonyms");
((C_proc3)C_retrieve_symbol_proc(lf[333]))(3,*((C_word*)lf[333]+1),((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2149,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep((C_word)C_i_memq(lf[330],((C_word*)t0)[29]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4329,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 252  dribble");
t4=((C_word*)((C_word*)t0)[21])[1];
f_1632(t4,t3,lf[331],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2152(2,t3,C_SCHEME_UNDEFINED);}}

/* k4327 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 253  symbol-escape");
((C_proc3)C_retrieve_symbol_proc(lf[325]))(3,*((C_word*)lf[325]+1),((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2152,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2155,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep((C_word)C_i_memq(lf[324],((C_word*)t0)[29]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4311,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 255  dribble");
t4=((C_word*)((C_word*)t0)[21])[1];
f_1632(t4,t3,lf[329],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2155(2,t3,C_SCHEME_UNDEFINED);}}

/* k4309 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4314,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 256  case-sensitive");
((C_proc3)C_retrieve_symbol_proc(lf[328]))(3,*((C_word*)lf[328]+1),t2,C_SCHEME_FALSE);}

/* k4312 in k4309 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4317,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 257  keyword-style");
((C_proc3)C_retrieve_symbol_proc(lf[25]))(3,*((C_word*)lf[25]+1),t2,lf[327]);}

/* k4315 in k4312 in k4309 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4320,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 258  parentheses-synonyms");
((C_proc3)C_retrieve_symbol_proc(lf[326]))(3,*((C_word*)lf[326]+1),t2,C_SCHEME_FALSE);}

/* k4318 in k4315 in k4312 in k4309 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 259  symbol-escape");
((C_proc3)C_retrieve_symbol_proc(lf[325]))(3,*((C_word*)lf[325]+1),((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2155(C_word c,C_word t0,C_word t1){
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
C_word ab[46],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2155,2,t0,t1);}
t2=C_mutate((C_word*)lf[64]+1 /* (set! verbose-mode ...) */,((C_word*)t0)[33]);
t3=C_set_block_item(lf[65] /* read-error-with-line-number */,0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2161,a[2]=((C_word*)t0)[33],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4266,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4270,a[2]=t9,a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 263  collect-options");
t11=((C_word*)((C_word*)t0)[16])[1];
f_1881(t11,t10,lf[323]);}

/* k4268 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4270,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4272,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4272(t5,((C_word*)t0)[2],t1);}

/* loop517 in k4268 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_4272(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4272,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[322]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4301,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g533534");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4299 in loop517 in k4268 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4301(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4301,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop517530");
t6=((C_word*)((C_word*)t0)[4])[1];
f_4272(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop517530");
t6=((C_word*)((C_word*)t0)[4])[1];
f_4272(t6,((C_word*)t0)[3],t5);}}

/* k4264 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 263  append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[225]+1)))(5,*((C_word*)lf[225]+1),((C_word*)t0)[3],t1,C_retrieve(lf[66]),((C_word*)t0)[2]);}

/* k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2161,2,t0,t1);}
t2=C_mutate((C_word*)lf[66]+1 /* (set! include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2164,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep(((C_word*)t0)[20])){
if(C_truep(((C_word*)t0)[27])){
if(C_truep((C_word)C_i_string_equal_p(((C_word*)t0)[20],((C_word*)t0)[27]))){
C_trace("batch-driver.scm: 267  quit");
((C_proc3)C_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),t3,lf[321]);}
else{
t4=t3;
f_2164(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2164(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2164(2,t4,C_SCHEME_UNDEFINED);}}

/* k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2164,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2168,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4215,a[2]=t6,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 268  collect-options");
t8=((C_word*)((C_word*)t0)[16])[1];
f_1881(t8,t7,lf[240]);}

/* k4213 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4215,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4217,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4217(t5,((C_word*)t0)[2],t1);}

/* loop546 in k4213 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_4217(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4217,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[294]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4246,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g562563");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4244 in loop546 in k4213 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4246(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4246,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop546559");
t6=((C_word*)((C_word*)t0)[4])[1];
f_4217(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop546559");
t6=((C_word*)((C_word*)t0)[4])[1];
f_4217(t6,((C_word*)t0)[3],t5);}}

/* k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2168,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[32])+1,t1);
t3=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2171,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[32],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],tmp=(C_word)a,a+=33,tmp);
if(C_truep((C_word)C_i_memq(lf[319],((C_word*)t0)[29]))){
t4=C_set_block_item(lf[320] /* undefine-shadowed-macros */,0,C_SCHEME_FALSE);
t5=t3;
f_2171(t5,t4);}
else{
t4=t3;
f_2171(t4,C_SCHEME_UNDEFINED);}}

/* k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2171(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2171,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2174,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep((C_word)C_i_memq(lf[317],((C_word*)t0)[30]))){
t3=C_set_block_item(lf[318] /* no-argc-checks */,0,C_SCHEME_TRUE);
t4=t2;
f_2174(t4,t3);}
else{
t3=t2;
f_2174(t3,C_SCHEME_UNDEFINED);}}

/* k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2174(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2174,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2177,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep((C_word)C_i_memq(lf[315],((C_word*)t0)[30]))){
t3=C_set_block_item(lf[316] /* no-bound-checks */,0,C_SCHEME_TRUE);
t4=t2;
f_2177(t4,t3);}
else{
t3=t2;
f_2177(t3,C_SCHEME_UNDEFINED);}}

/* k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2177(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2177,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2180,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep((C_word)C_i_memq(lf[313],((C_word*)t0)[30]))){
t3=C_set_block_item(lf[314] /* no-procedure-checks */,0,C_SCHEME_TRUE);
t4=t2;
f_2180(t4,t3);}
else{
t3=t2;
f_2180(t3,C_SCHEME_UNDEFINED);}}

/* k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2180(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2180,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
if(C_truep((C_word)C_i_memq(lf[309],((C_word*)t0)[30]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4022,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4112,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4112(t7,t3,C_retrieve(lf[284]));}
else{
t3=t2;
f_2183(2,t3,C_SCHEME_UNDEFINED);}}

/* loop579 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_4112(C_word t0,C_word t1,C_word t2){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4112,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4184,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4151,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4126,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t6))){
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[310]))(5,*((C_word*)lf[310]+1),t5,t4,lf[312],C_SCHEME_TRUE);}
else{
t8=(C_word)C_i_cdr(t6);
if(C_truep((C_word)C_i_nullp(t8))){
t9=(C_word)C_i_car(t6);
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[310]))(5,*((C_word*)lf[310]+1),t5,t4,lf[312],t9);}
else{
C_trace("##sys#error");
t9=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,lf[0],t6);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4124 in loop579 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[310]))(5,*((C_word*)lf[310]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[312],t1);}

/* k4149 in loop579 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4151,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4156,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[310]))(5,*((C_word*)lf[310]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[311],C_SCHEME_TRUE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[310]))(5,*((C_word*)lf[310]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[311],t5);}
else{
C_trace("##sys#error");
t5=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k4154 in k4149 in loop579 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[310]))(5,*((C_word*)lf[310]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[311],t1);}

/* k4182 in loop579 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4112(t3,((C_word*)t0)[2],t2);}

/* k4020 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4022,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4027,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4027(t5,((C_word*)t0)[2],C_retrieve(lf[286]));}

/* loop626 in k4020 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_4027(C_word t0,C_word t1,C_word t2){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4027,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4099,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4066,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4041,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t6))){
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[310]))(5,*((C_word*)lf[310]+1),t5,t4,lf[312],C_SCHEME_TRUE);}
else{
t8=(C_word)C_i_cdr(t6);
if(C_truep((C_word)C_i_nullp(t8))){
t9=(C_word)C_i_car(t6);
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[310]))(5,*((C_word*)lf[310]+1),t5,t4,lf[312],t9);}
else{
C_trace("##sys#error");
t9=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,lf[0],t6);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4039 in loop626 in k4020 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[310]))(5,*((C_word*)lf[310]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[312],t1);}

/* k4064 in loop626 in k4020 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4066,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[310]))(5,*((C_word*)lf[310]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[311],C_SCHEME_TRUE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[310]))(5,*((C_word*)lf[310]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[311],t5);}
else{
C_trace("##sys#error");
t5=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k4069 in k4064 in loop626 in k4020 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#put!");
((C_proc5)C_retrieve_symbol_proc(lf[310]))(5,*((C_word*)lf[310]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[311],t1);}

/* k4097 in loop626 in k4020 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4027(t3,((C_word*)t0)[2],t2);}

/* k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3983,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4008,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4016,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 292  collect-options");
t6=((C_word*)((C_word*)t0)[17])[1];
f_1881(t6,t5,lf[308]);}

/* k4014 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 292  append-map");
((C_proc4)C_retrieve_symbol_proc(lf[307]))(4,*((C_word*)lf[307]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a4007 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_4008(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4008,3,t0,t1,t2);}
t3=C_retrieve(lf[305]);
C_trace("g692693");
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,lf[306]);}

/* k3981 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3983,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3985,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3985(t5,((C_word*)t0)[2],t1);}

/* loop674 in k3981 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3985(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3985,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[304]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3995,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g681682");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3993 in loop674 in k3981 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3985(t3,((C_word*)t0)[2],t2);}

/* k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2186,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[67],C_retrieve(lf[68]));
t3=C_mutate((C_word*)lf[68]+1 /* (set! features ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2193,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
C_trace("batch-driver.scm: 296  collect-options");
t5=((C_word*)((C_word*)t0)[17])[1];
f_1881(t5,t4,lf[303]);}

/* k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2196,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],a[33]=((C_word*)t0)[32],tmp=(C_word)a,a+=34,tmp);
C_trace("batch-driver.scm: 297  dribble");
t3=((C_word*)((C_word*)t0)[22])[1];
f_1632(t3,t2,lf[302],C_SCHEME_END_OF_LIST);}

/* k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2196,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2199,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],tmp=(C_word)a,a+=33,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("batch-driver.scm: 298  load-verbose");
((C_proc3)C_retrieve_symbol_proc(lf[301]))(3,*((C_word*)lf[301]+1),t2,C_SCHEME_TRUE);}
else{
t3=t2;
f_2199(2,t3,C_SCHEME_UNDEFINED);}}

/* k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2199,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2202,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],tmp=(C_word)a,a+=32,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3946,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_3946(t6,t2,((C_word*)t0)[2]);}

/* loop699 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3946(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3946,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3965,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3962,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 300  ##sys#resolve-include-filename");
((C_proc5)C_retrieve_symbol_proc(lf[163]))(5,*((C_word*)lf[163]+1),t5,t4,C_SCHEME_FALSE,C_SCHEME_TRUE);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3960 in loop699 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 300  load");
((C_proc3)C_retrieve_symbol_proc(lf[300]))(3,*((C_word*)lf[300]+1),((C_word*)t0)[2],t1);}

/* k3963 in loop699 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3946(t3,((C_word*)t0)[2],t2);}

/* k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2206,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
C_trace("batch-driver.scm: 302  delete");
((C_proc5)C_retrieve_symbol_proc(lf[298]))(5,*((C_word*)lf[298]+1),t2,lf[67],C_retrieve(lf[68]),*((C_word*)lf[299]+1));}

/* k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2206,2,t0,t1);}
t2=C_mutate((C_word*)lf[68]+1 /* (set! features ...) */,t1);
t3=(C_word)C_a_i_cons(&a,2,lf[69],C_retrieve(lf[68]));
t4=C_mutate((C_word*)lf[68]+1 /* (set! features ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2214,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
C_trace("batch-driver.scm: 305  user-post-analysis-pass");
((C_proc2)C_retrieve_symbol_proc(lf[6]))(2,*((C_word*)lf[6]+1),t5);}

/* k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2214,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[31])+1,t1);
t3=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_2218,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],tmp=(C_word)a,a+=31,tmp);
C_trace("batch-driver.scm: 308  append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[225]+1)))(4,*((C_word*)lf[225]+1),t3,((C_word*)((C_word*)t0)[30])[1],C_retrieve(lf[297]));}

/* k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2218,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[30])+1,t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_2221,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],tmp=(C_word)a,a+=31,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3909,a[2]=t7,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 310  collect-options");
t9=((C_word*)((C_word*)t0)[16])[1];
f_1881(t9,t8,lf[296]);}

/* k3907 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3909,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3911,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3911(t5,((C_word*)t0)[2],t1);}

/* loop716 in k3907 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3911(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3911,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[294]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3940,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g732733");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3938 in loop716 in k3907 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3940(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3940,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop716729");
t6=((C_word*)((C_word*)t0)[4])[1];
f_3911(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop716729");
t6=((C_word*)((C_word*)t0)[4])[1];
f_3911(t6,((C_word*)t0)[3],t5);}}

/* k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2221(C_word c,C_word t0,C_word t1){
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
C_word ab[58],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2221,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2225,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],tmp=(C_word)a,a+=32,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3806,a[2]=((C_word*)t0)[30],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3810,a[2]=t7,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3866,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3870,a[2]=t13,a[3]=t10,a[4]=t12,tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 316  collect-options");
t15=((C_word*)((C_word*)t0)[16])[1];
f_1881(t15,t14,lf[295]);}

/* k3868 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3870,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3872,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3872(t5,((C_word*)t0)[2],t1);}

/* loop767 in k3868 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3872(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3872,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[294]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3901,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g783784");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3899 in loop767 in k3868 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3901(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3901,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop767780");
t6=((C_word*)((C_word*)t0)[4])[1];
f_3872(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop767780");
t6=((C_word*)((C_word*)t0)[4])[1];
f_3872(t6,((C_word*)t0)[3],t5);}}

/* k3864 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 316  append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[225]+1)))(4,*((C_word*)lf[225]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3808 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3810,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3812,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3812(t5,((C_word*)t0)[2],t1);}

/* loop739 in k3808 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3812(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(15);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3812,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,C_SCHEME_TRUE,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(C_word)C_a_i_cons(&a,2,lf[293],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t9=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t8);
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t8);
t11=(C_word)C_slot(t2,C_fix(1));
C_trace("loop739752");
t17=t1;
t18=t11;
t1=t17;
t2=t18;
goto loop;}
else{
t9=C_mutate(((C_word *)((C_word*)t0)[2])+1,t8);
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t8);
t11=(C_word)C_slot(t2,C_fix(1));
C_trace("loop739752");
t17=t1;
t18=t11;
t1=t17;
t2=t18;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3804 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 313  append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[225]+1)))(4,*((C_word*)lf[225]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2225,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[31])+1,t1);
t3=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_2229,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[31],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],tmp=(C_word)a,a+=31,tmp);
C_trace("batch-driver.scm: 320  append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[225]+1)))(4,*((C_word*)lf[225]+1),t3,C_retrieve(lf[70]),((C_word*)t0)[2]);}

/* k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2229,2,t0,t1);}
t2=C_mutate((C_word*)lf[70]+1 /* (set! explicit-library-modules ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_2232,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],tmp=(C_word)a,a+=31,tmp);
if(C_truep((C_word)C_i_memq(lf[291],((C_word*)t0)[30]))){
t4=C_set_block_item(lf[292] /* enable-runtime-macros */,0,C_SCHEME_TRUE);
t5=t3;
f_2232(t5,t4);}
else{
t4=t3;
f_2232(t4,C_SCHEME_UNDEFINED);}}

/* k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2232(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2232,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|29,a[1]=(C_word)f_2236,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],tmp=(C_word)a,a+=30,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3785,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 326  option-arg");
f_1527(t3,((C_word*)t0)[2]);}
else{
t3=C_retrieve(lf[290]);
if(C_truep(t3)){
t4=(C_word)C_eqp(t3,C_fix(0));
t5=t2;
f_2236(2,t5,(C_truep(t4)?C_SCHEME_FALSE:t3));}
else{
t4=t2;
f_2236(2,t4,C_SCHEME_FALSE);}}}

/* k3783 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 326  arg-val");
f_1801(((C_word*)t0)[2],t1);}

/* k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2236,2,t0,t1);}
t2=C_mutate((C_word*)lf[71]+1 /* (set! target-heap-size ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|28,a[1]=(C_word)f_2240,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],tmp=(C_word)a,a+=29,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3778,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 330  option-arg");
f_1527(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_2240(2,t4,C_SCHEME_FALSE);}}

/* k3776 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 330  arg-val");
f_1801(((C_word*)t0)[2],t1);}

/* k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2240,2,t0,t1);}
t2=C_mutate((C_word*)lf[72]+1 /* (set! target-initial-heap-size ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2244,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],tmp=(C_word)a,a+=28,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3771,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 331  option-arg");
f_1527(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_2244(2,t4,C_SCHEME_FALSE);}}

/* k3769 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 331  arg-val");
f_1801(((C_word*)t0)[2],t1);}

/* k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2244,2,t0,t1);}
t2=C_mutate((C_word*)lf[73]+1 /* (set! target-heap-growth ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2248,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],tmp=(C_word)a,a+=27,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3764,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 332  option-arg");
f_1527(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_2248(2,t4,C_SCHEME_FALSE);}}

/* k3762 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 332  arg-val");
f_1801(((C_word*)t0)[2],t1);}

/* k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2248,2,t0,t1);}
t2=C_mutate((C_word*)lf[74]+1 /* (set! target-heap-shrinkage ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2252,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3744,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 335  option-arg");
f_1527(t4,((C_word*)t0)[4]);}
else{
t4=C_retrieve(lf[289]);
if(C_truep(t4)){
t5=(C_word)C_eqp(t4,C_fix(0));
t6=t3;
f_2252(2,t6,(C_truep(t5)?C_SCHEME_FALSE:t4));}
else{
t5=t3;
f_2252(2,t5,C_SCHEME_FALSE);}}}

/* k3742 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 335  arg-val");
f_1801(((C_word*)t0)[2],t1);}

/* k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2252(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2252,2,t0,t1);}
t2=C_mutate((C_word*)lf[75]+1 /* (set! target-stack-size ...) */,t1);
t3=(C_word)C_i_memq(lf[76],((C_word*)t0)[23]);
t4=(C_word)C_i_not(t3);
t5=C_mutate((C_word*)lf[77]+1 /* (set! emit-trace-info ...) */,t4);
t6=(C_word)C_i_memq(lf[78],((C_word*)t0)[23]);
t7=C_mutate((C_word*)lf[79]+1 /* (set! disable-stack-overflow-checking ...) */,t6);
t8=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2263,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep((C_word)C_i_memq(lf[287],C_retrieve(lf[35])))){
C_trace("batch-driver.scm: 341  set-gc-report!");
((C_proc3)C_retrieve_symbol_proc(lf[288]))(3,*((C_word*)lf[288]+1),t8,C_SCHEME_TRUE);}
else{
t9=t8;
f_2263(2,t9,C_SCHEME_UNDEFINED);}}

/* k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2263(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2263,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2266,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep((C_word)C_i_memq(lf[282],((C_word*)t0)[23]))){
t3=t2;
f_2266(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_mutate((C_word*)lf[283]+1 /* (set! standard-bindings ...) */,C_retrieve(lf[284]));
t4=C_mutate((C_word*)lf[285]+1 /* (set! extended-bindings ...) */,C_retrieve(lf[286]));
t5=t2;
f_2266(t5,t4);}}

/* k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2266(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2266,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2269,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
if(C_truep(C_retrieve(lf[77]))){
C_trace("batch-driver.scm: 345  dribble");
t3=((C_word*)((C_word*)t0)[15])[1];
f_1632(t3,t2,lf[279],(C_word)C_a_i_list(&a,1,lf[280]));}
else{
C_trace("batch-driver.scm: 345  dribble");
t3=((C_word*)((C_word*)t0)[15])[1];
f_1632(t3,t2,lf[279],(C_word)C_a_i_list(&a,1,lf[281]));}}

/* k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2269,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2272,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],tmp=(C_word)a,a+=23,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(C_word)C_i_car(((C_word*)t0)[2]);
t4=(C_word)C_eqp(lf[271],t3);
t5=C_set_block_item(lf[232] /* emit-profile */,0,C_SCHEME_TRUE);
t6=C_mutate((C_word*)lf[272]+1 /* (set! profiled-procedures ...) */,lf[273]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3703,a[2]=t2,a[3]=((C_word*)t0)[15],a[4]=t4,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
C_trace("batch-driver.scm: 354  append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[225]+1)))(5,*((C_word*)lf[225]+1),t7,((C_word*)((C_word*)t0)[6])[1],C_retrieve(lf[277]),lf[278]);}
else{
C_trace("batch-driver.scm: 354  append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[225]+1)))(5,*((C_word*)lf[225]+1),t7,((C_word*)((C_word*)t0)[6])[1],C_retrieve(lf[277]),C_SCHEME_END_OF_LIST);}}
else{
t3=t2;
f_2272(2,t3,C_SCHEME_UNDEFINED);}}

/* k3701 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3703,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
if(C_truep(((C_word*)t0)[4])){
C_trace("batch-driver.scm: 360  dribble");
t3=((C_word*)((C_word*)t0)[3])[1];
f_1632(t3,((C_word*)t0)[2],lf[274],(C_word)C_a_i_list(&a,1,lf[275]));}
else{
C_trace("batch-driver.scm: 360  dribble");
t3=((C_word*)((C_word*)t0)[3])[1];
f_1632(t3,((C_word*)t0)[2],lf[274],(C_word)C_a_i_list(&a,1,lf[276]));}}

/* k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2275,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
C_trace("batch-driver.scm: 363  load-identifier-database");
((C_proc3)C_retrieve_symbol_proc(lf[269]))(3,*((C_word*)lf[269]+1),t2,lf[270]);}

/* k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2275,2,t0,t1);}
if(C_truep((C_word)C_i_memq(lf[80],((C_word*)t0)[22]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2284,a[2]=((C_word*)t0)[21],tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 366  print-version");
((C_proc3)C_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),t2,C_SCHEME_TRUE);}
else{
t2=(C_word)C_i_memq(lf[83],((C_word*)t0)[22]);
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
if(C_truep(t2)){
t4=t3;
f_2296(t4,t2);}
else{
t4=(C_word)C_i_memq(lf[266],((C_word*)t0)[22]);
if(C_truep(t4)){
t5=t3;
f_2296(t5,t4);}
else{
t5=(C_word)C_i_memq(lf[267],((C_word*)t0)[22]);
t6=t3;
f_2296(t6,(C_truep(t5)?t5:(C_word)C_i_memq(lf[268],((C_word*)t0)[22])));}}}}

/* k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2296(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2296,NULL,2,t0,t1);}
if(C_truep(t1)){
C_trace("batch-driver.scm: 369  print-usage");
((C_proc2)C_retrieve_symbol_proc(lf[84]))(2,*((C_word*)lf[84]+1),((C_word*)t0)[22]);}
else{
if(C_truep((C_word)C_i_memq(lf[85],((C_word*)t0)[21]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2308,a[2]=((C_word*)t0)[22],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2315,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 371  chicken-version");
((C_proc2)C_retrieve_symbol_proc(lf[86]))(2,*((C_word*)lf[86]+1),t3);}
else{
t2=((C_word*)t0)[20];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2330,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[21],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[22],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],a[18]=((C_word*)t0)[16],a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],a[22]=((C_word*)t0)[20],tmp=(C_word)a,a+=23,tmp);
C_trace("batch-driver.scm: 379  dribble");
t4=((C_word*)((C_word*)t0)[14])[1];
f_1632(t4,t3,lf[264],(C_word)C_a_i_list(&a,1,((C_word*)t0)[20]));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2324,a[2]=((C_word*)t0)[22],tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 374  print-version");
((C_proc3)C_retrieve_symbol_proc(lf[82]))(3,*((C_word*)lf[82]+1),t3,C_SCHEME_TRUE);}}}}

/* k2322 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 375  display");
((C_proc3)C_retrieve_proc(*((C_word*)lf[36]+1)))(3,*((C_word*)lf[36]+1),((C_word*)t0)[2],lf[265]);}

/* k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2330,2,t0,t1);}
t2=C_mutate((C_word*)lf[87]+1 /* (set! source-filename ...) */,((C_word*)t0)[22]);
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2334,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[22],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
C_trace("batch-driver.scm: 381  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[103]))(5,*((C_word*)lf[103]+1),t3,lf[259],lf[263],((C_word*)t0)[9]);}

/* k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2334(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2334,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
C_trace("batch-driver.scm: 382  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[103]))(5,*((C_word*)lf[103]+1),t2,lf[259],lf[262],C_retrieve(lf[35]));}

/* k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2337,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2340,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
C_trace("batch-driver.scm: 383  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[103]))(5,*((C_word*)lf[103]+1),t2,lf[259],lf[261],C_retrieve(lf[71]));}

/* k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2340,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
C_trace("batch-driver.scm: 384  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[103]))(5,*((C_word*)lf[103]+1),t2,lf[259],lf[260],C_retrieve(lf[75]));}

/* k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2343,2,t0,t1);}
t2=(C_word)C_fudge(C_fix(6));
t3=C_mutate(((C_word *)((C_word*)t0)[22])+1,t2);
t4=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[22],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],tmp=(C_word)a,a+=23,tmp);
C_trace("batch-driver.scm: 388  make-vector");
((C_proc4)C_retrieve_proc(*((C_word*)lf[257]+1)))(4,*((C_word*)lf[257]+1),t4,C_retrieve(lf[258]),C_SCHEME_END_OF_LIST);}

/* k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2351,2,t0,t1);}
t2=C_mutate((C_word*)lf[46]+1 /* (set! line-number-database ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2354,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
C_trace("batch-driver.scm: 389  collect-options");
t4=((C_word*)((C_word*)t0)[10])[1];
f_1881(t4,t3,lf[256]);}

/* k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2357,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
C_trace("batch-driver.scm: 390  collect-options");
t3=((C_word*)((C_word*)t0)[10])[1];
f_1881(t3,t2,lf[255]);}

/* k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2360,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],tmp=(C_word)a,a+=25,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3671,a[2]=((C_word*)t0)[11],a[3]=t2,a[4]=((C_word*)t0)[17],tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 392  collect-options");
t4=((C_word*)((C_word*)t0)[11])[1];
f_1881(t4,t3,lf[254]);}

/* k3669 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3671,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3679,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 394  collect-options");
t4=((C_word*)((C_word*)t0)[2])[1];
f_1881(t4,t3,lf[253]);}

/* k3677 in k3669 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 391  append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[225]+1)))(5,*((C_word*)lf[225]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2360,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2363,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],tmp=(C_word)a,a+=26,tmp);
C_trace("batch-driver.scm: 396  user-read-pass");
((C_proc2)C_retrieve_symbol_proc(lf[3]))(2,*((C_word*)lf[3]+1),t2);}

/* k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2363,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2366,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[16],a[13]=((C_word*)t0)[17],a[14]=((C_word*)t0)[18],a[15]=((C_word*)t0)[19],a[16]=((C_word*)t0)[20],a[17]=((C_word*)t0)[21],a[18]=((C_word*)t0)[22],a[19]=((C_word*)t0)[23],a[20]=((C_word*)t0)[24],a[21]=((C_word*)t0)[25],tmp=(C_word)a,a+=22,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3507,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("batch-driver.scm: 398  dribble");
t4=((C_word*)((C_word*)t0)[21])[1];
f_1632(t4,t3,lf[246],C_SCHEME_END_OF_LIST);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3516,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_3516(t6,t2,((C_word*)t0)[4]);}}

/* doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3516(C_word t0,C_word t1,C_word t2){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3516,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3527,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3531,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3576,a[2]=t5,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3576(t12,t8,((C_word*)t0)[4]);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3615,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
C_trace("batch-driver.scm: 408  check-and-open-input-file");
((C_proc3)C_retrieve_symbol_proc(lf[252]))(3,*((C_word*)lf[252]+1),t4,t3);}}

/* k3613 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3615(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3615,2,t0,t1);}
t2=((C_word*)t0)[7];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3618,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3627,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3632,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3664,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#dynamic-wind");
t10=*((C_word*)lf[251]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t6,t7,t8,t9);}

/* a3663 in k3613 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3664,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve(lf[249]));
t3=C_mutate((C_word*)lf[249]+1 /* (set! current-source-filename ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a3631 in k3613 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3636,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
C_trace("batch-driver.scm: 410  read-form");
t3=((C_word*)((C_word*)t0)[2])[1];
f_1955(t3,t2,((C_word*)t0)[5]);}

/* k3634 in a3631 in k3613 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3636,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3641,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_3641(t5,((C_word*)t0)[2],t1);}

/* doloop916 in k3634 in a3631 in k3613 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3641(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3641,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_eofp(t2))){
C_trace("batch-driver.scm: 413  close-checked-input-file");
((C_proc4)C_retrieve_symbol_proc(lf[250]))(4,*((C_word*)lf[250]+1),t1,((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3662,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 411  read-form");
t6=((C_word*)((C_word*)t0)[2])[1];
f_1955(t6,t5,((C_word*)t0)[6]);}}

/* k3660 in doloop916 in k3634 in a3631 in k3613 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
f_3641(t2,((C_word*)t0)[2],t1);}

/* a3626 in k3613 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3627,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve(lf[249]));
t3=C_mutate((C_word*)lf[249]+1 /* (set! current-source-filename ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k3616 in k3613 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_3516(t3,((C_word*)t0)[2],t2);}

/* loop858 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3576(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3576,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[247]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3605,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g874875");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3603 in loop858 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3605(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3605,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop858871");
t6=((C_word*)((C_word*)t0)[4])[1];
f_3576(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop858871");
t6=((C_word*)((C_word*)t0)[4])[1];
f_3576(t6,((C_word*)t0)[3],t5);}}

/* k3529 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3531,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3535,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 405  reverse");
((C_proc3)C_retrieve_proc(*((C_word*)lf[248]+1)))(3,*((C_word*)lf[248]+1),t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k3533 in k3529 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3535(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3535,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3539,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3541,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3541(t10,t6,((C_word*)t0)[2]);}

/* loop881 in k3533 in k3529 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3541(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3541,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[247]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3570,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g897898");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3568 in loop881 in k3533 in k3529 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3570(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3570,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop881894");
t6=((C_word*)((C_word*)t0)[4])[1];
f_3541(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop881894");
t6=((C_word*)((C_word*)t0)[4])[1];
f_3541(t6,((C_word*)t0)[3],t5);}}

/* k3537 in k3533 in k3529 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 404  append");
((C_proc5)C_retrieve_proc(*((C_word*)lf[225]+1)))(5,*((C_word*)lf[225]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3525 in doloop851 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3505 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3507,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3511,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 399  proc");
t3=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3509 in k3505 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2366(2,t3,t2);}

/* k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2369,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
C_trace("batch-driver.scm: 417  user-preprocessor-pass");
((C_proc2)C_retrieve_symbol_proc(lf[4]))(2,*((C_word*)lf[4]+1),t2);}

/* k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2369,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3465,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 419  dribble");
t4=((C_word*)((C_word*)t0)[17])[1];
f_1632(t4,t3,lf[245],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2372(t3,C_SCHEME_UNDEFINED);}}

/* k3463 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3465(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3465,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3469,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3471,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t8,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_3471(t10,t6,((C_word*)((C_word*)t0)[4])[1]);}

/* loop932 in k3463 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3471(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3471,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3500,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g948949");
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3498 in loop932 in k3463 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3500(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3500,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop932945");
t6=((C_word*)((C_word*)t0)[4])[1];
f_3471(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop932945");
t6=((C_word*)((C_word*)t0)[4])[1];
f_3471(t6,((C_word*)t0)[3],t5);}}

/* k3467 in k3463 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2372(t3,t2);}

/* k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2372(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2372,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],tmp=(C_word)a,a+=22,tmp);
C_trace("batch-driver.scm: 422  print-expr");
t3=((C_word*)((C_word*)t0)[7])[1];
f_1717(t3,t2,lf[243],lf[244],((C_word*)((C_word*)t0)[3])[1]);}

/* k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2375,2,t0,t1);}
t2=f_1916(((C_word*)((C_word*)t0)[21])[1]);
t3=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2381,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],tmp=(C_word)a,a+=21,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t4=t3;
f_2381(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3442,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 425  append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[225]+1)))(4,*((C_word*)lf[225]+1),t4,C_retrieve(lf[70]),((C_word*)((C_word*)t0)[2])[1]);}}

/* k3440 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3442,2,t0,t1);}
t2=C_mutate((C_word*)lf[70]+1 /* (set! explicit-library-modules ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3462,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("##sys#append");
t4=*((C_word*)lf[242]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[2])[1],C_SCHEME_END_OF_LIST);}

/* k3460 in k3440 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3462,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[240],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,lf[241],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)((C_word*)t0)[3])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
t7=((C_word*)t0)[2];
f_2381(t7,t6);}

/* k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2381(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2381,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2384,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],tmp=(C_word)a,a+=19,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3400,a[2]=t6,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 427  append");
((C_proc4)C_retrieve_proc(*((C_word*)lf[225]+1)))(4,*((C_word*)lf[225]+1),t7,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* k3398 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3400,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3402,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3402(t5,((C_word*)t0)[2],t1);}

/* loop965 in k3398 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3402(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3402,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[239]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3431,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g981982");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3429 in loop965 in k3398 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3431(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3431,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop965978");
t6=((C_word*)((C_word*)t0)[4])[1];
f_3402(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop965978");
t6=((C_word*)((C_word*)t0)[4])[1];
f_3402(t6,((C_word*)t0)[3],t5);}}

/* k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2384,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2387,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
C_trace("batch-driver.scm: 428  gensym");
((C_proc2)C_retrieve_symbol_proc(lf[238]))(2,*((C_word*)lf[238]+1),t2);}

/* k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2387(C_word c,C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2387,2,t0,t1);}
t2=(C_word)C_i_length(C_retrieve(lf[88]));
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2393,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],tmp=(C_word)a,a+=17,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3140,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[4],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3334,a[2]=t5,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3334(t12,t8,C_retrieve(lf[237]));}

/* loop991 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3334(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(18);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3334,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_cdr(t3);
t5=(C_word)C_i_car(t3);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[229],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t4,t8);
t10=(C_word)C_a_i_cons(&a,2,lf[234],t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t12=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t11);
t13=C_mutate(((C_word *)((C_word*)t0)[4])+1,t11);
t14=(C_word)C_slot(t2,C_fix(1));
C_trace("loop9911004");
t20=t1;
t21=t14;
t1=t20;
t2=t21;
goto loop;}
else{
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t11);
t13=C_mutate(((C_word *)((C_word*)t0)[4])+1,t11);
t14=(C_word)C_slot(t2,C_fix(1));
C_trace("loop9911004");
t20=t1;
t21=t14;
t1=t20;
t2=t21;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3138 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3140(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3140,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3144,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3290,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3290(t10,t6,C_retrieve(lf[236]));}

/* loop1019 in k3138 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3290(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3290,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[235],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
C_trace("loop10191032");
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
C_trace("loop10191032");
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3142 in k3138 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3144(C_word c,C_word t0,C_word t1){
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
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3144,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3148,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_retrieve(lf[232]))){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,lf[229],t3);
t5=(C_truep(C_retrieve(lf[211]))?(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST):(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST));
t6=(C_word)C_a_i_cons(&a,2,lf[229],t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,t4,t7);
t9=(C_word)C_a_i_cons(&a,2,lf[233],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,C_retrieve(lf[230]),t10);
t12=(C_word)C_a_i_cons(&a,2,lf[234],t11);
t13=t2;
f_3148(t13,(C_word)C_a_i_cons(&a,2,t12,C_SCHEME_END_OF_LIST));}
else{
t3=t2;
f_3148(t3,C_SCHEME_END_OF_LIST);}}

/* k3146 in k3142 in k3138 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3148(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3148,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3167,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3167(t10,t6,C_retrieve(lf[88]));}

/* loop1051 in k3146 in k3142 in k3138 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3167(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(27);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3167,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_car(t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,lf[229],t5);
t7=(C_word)C_i_cdr(t3);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,lf[229],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,t6,t10);
t12=(C_word)C_a_i_cons(&a,2,C_retrieve(lf[230]),t11);
t13=(C_word)C_a_i_cons(&a,2,lf[231],t12);
t14=(C_word)C_a_i_cons(&a,2,t13,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t15=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t14);
t16=C_mutate(((C_word *)((C_word*)t0)[4])+1,t14);
t17=(C_word)C_slot(t2,C_fix(1));
C_trace("loop10511064");
t23=t1;
t24=t17;
t1=t23;
t2=t24;
goto loop;}
else{
t15=C_mutate(((C_word *)((C_word*)t0)[2])+1,t14);
t16=C_mutate(((C_word *)((C_word*)t0)[4])+1,t14);
t17=(C_word)C_slot(t2,C_fix(1));
C_trace("loop10511064");
t23=t1;
t24=t17;
t1=t23;
t2=t24;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3150 in k3146 in k3142 in k3138 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_retrieve(lf[211]);
if(C_truep(t2)){
C_trace("batch-driver.scm: 430  append");
((C_proc9)C_retrieve_proc(*((C_word*)lf[225]+1)))(9,*((C_word*)lf[225]+1),((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,lf[226]);}
else{
if(C_truep(((C_word*)t0)[3])){
C_trace("batch-driver.scm: 430  append");
((C_proc9)C_retrieve_proc(*((C_word*)lf[225]+1)))(9,*((C_word*)lf[225]+1),((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,lf[227]);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
C_trace("batch-driver.scm: 430  append");
((C_proc9)C_retrieve_proc(*((C_word*)lf[225]+1)))(9,*((C_word*)lf[225]+1),((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],t3,lf[228]);}}}

/* k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2393,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2396,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3079,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(C_retrieve(lf[222])))){
C_trace("batch-driver.scm: 452  debugging");
((C_proc4)C_retrieve_symbol_proc(lf[103]))(4,*((C_word*)lf[103]+1),t5,lf[223],lf[224]);}
else{
t6=t5;
f_3079(2,t6,C_SCHEME_FALSE);}}

/* k3077 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3079,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3084,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3084(t5,((C_word*)t0)[2],C_retrieve(lf[222]));}
else{
t2=((C_word*)t0)[2];
f_2396(2,t2,C_SCHEME_UNDEFINED);}}

/* loop1085 in k3077 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3084(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3084,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3119,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=*((C_word*)lf[31]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3096,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),t6,lf[221],t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3094 in loop1085 in k3077 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3096,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),t2,t3,((C_word*)t0)[3]);}

/* k3097 in k3094 in loop1085 in k3077 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3099,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),t2,lf[220],((C_word*)t0)[3]);}

/* k3100 in k3097 in k3094 in loop1085 in k3077 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3102,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3105,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),t2,t3,((C_word*)t0)[3]);}

/* k3103 in k3100 in k3097 in k3094 in loop1085 in k3077 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_retrieve(lf[33]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k3117 in loop1085 in k3077 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3084(t3,((C_word*)t0)[2],t2);}

/* k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2396,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2399,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3073,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 456  debugging");
((C_proc4)C_retrieve_symbol_proc(lf[103]))(4,*((C_word*)lf[103]+1),t3,lf[218],lf[219]);}

/* k3071 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("batch-driver.scm: 457  display-real-name-table");
((C_proc2)C_retrieve_symbol_proc(lf[217]))(2,*((C_word*)lf[217]+1),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
f_2399(2,t2,C_SCHEME_UNDEFINED);}}

/* k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2399(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2399,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2402,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3067,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 458  debugging");
((C_proc4)C_retrieve_symbol_proc(lf[103]))(4,*((C_word*)lf[103]+1),t3,lf[215],lf[216]);}

/* k3065 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("batch-driver.scm: 459  display-line-number-database");
((C_proc2)C_retrieve_symbol_proc(lf[214]))(2,*((C_word*)lf[214]+1),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
f_2402(2,t2,C_SCHEME_UNDEFINED);}}

/* k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2402,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2405,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
if(C_truep(C_retrieve(lf[211]))){
if(C_truep(((C_word*)t0)[10])){
C_trace("batch-driver.scm: 462  compiler-warning");
((C_proc5)C_retrieve_symbol_proc(lf[206]))(5,*((C_word*)lf[206]+1),t2,lf[212],lf[213],C_retrieve(lf[211]));}
else{
t3=t2;
f_2405(2,t3,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_2405(2,t3,C_SCHEME_UNDEFINED);}}

/* k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2405,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3052,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[153]))){
C_trace("batch-driver.scm: 464  feature?");
((C_proc3)C_retrieve_symbol_proc(lf[209]))(3,*((C_word*)lf[209]+1),t3,lf[210]);}
else{
t4=t2;
f_2408(2,t4,C_SCHEME_UNDEFINED);}}

/* k3050 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("batch-driver.scm: 465  compiler-warning");
((C_proc4)C_retrieve_symbol_proc(lf[206]))(4,*((C_word*)lf[206]+1),((C_word*)t0)[2],lf[207],lf[208]);}
else{
t2=((C_word*)t0)[2];
f_2408(2,t2,C_SCHEME_UNDEFINED);}}

/* k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2408,2,t0,t1);}
t2=C_mutate((C_word*)lf[46]+1 /* (set! line-number-database ...) */,C_retrieve(lf[89]));
t3=C_set_block_item(lf[89] /* line-number-database-2 */,0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2413,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
C_trace("batch-driver.scm: 472  end-time");
t5=((C_word*)((C_word*)t0)[16])[1];
f_1926(t5,t4,lf[205]);}

/* k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2416,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],tmp=(C_word)a,a+=17,tmp);
C_trace("batch-driver.scm: 473  print-expr");
t3=((C_word*)((C_word*)t0)[2])[1];
f_1717(t3,t2,lf[203],lf[204],((C_word*)((C_word*)t0)[3])[1]);}

/* k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2416,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2419,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep((C_word)C_i_memq(lf[202],((C_word*)t0)[3]))){
C_trace("batch-driver.scm: 475  exit");
((C_proc2)C_retrieve_symbol_proc(lf[125]))(2,*((C_word*)lf[125]+1),t2);}
else{
t3=t2;
f_2419(2,t3,C_SCHEME_UNDEFINED);}}

/* k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2419,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2422,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
C_trace("batch-driver.scm: 477  user-pass");
((C_proc2)C_retrieve_symbol_proc(lf[5]))(2,*((C_word*)lf[5]+1),t2);}

/* k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2422,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2425,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2998,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[16],tmp=(C_word)a,a+=7,tmp);
C_trace("batch-driver.scm: 479  dribble");
t4=((C_word*)((C_word*)t0)[12])[1];
f_1632(t4,t3,lf[201],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2425(2,t3,C_SCHEME_UNDEFINED);}}

/* k2996 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2998(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2998,2,t0,t1);}
t2=f_1916(((C_word*)((C_word*)t0)[6])[1]);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3005,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3010,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t9,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_3010(t11,t7,((C_word*)((C_word*)t0)[5])[1]);}

/* loop1123 in k2996 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_3010(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3010,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3039,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
C_trace("g11391140");
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3037 in loop1123 in k2996 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3039(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3039,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop11231136");
t6=((C_word*)((C_word*)t0)[4])[1];
f_3010(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop11231136");
t6=((C_word*)((C_word*)t0)[4])[1];
f_3010(t6,((C_word*)t0)[3],t5);}}

/* k3003 in k2996 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_3005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
C_trace("batch-driver.scm: 482  end-time");
t3=((C_word*)((C_word*)t0)[3])[1];
f_1926(t3,((C_word*)t0)[2],lf[200]);}

/* k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2425,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2991,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],tmp=(C_word)a,a+=16,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2995,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 487  canonicalize-begin-body");
((C_proc3)C_retrieve_symbol_proc(lf[199]))(3,*((C_word*)lf[199]+1),t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k2993 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 486  build-node-graph");
((C_proc3)C_retrieve_symbol_proc(lf[198]))(3,*((C_word*)lf[198]+1),((C_word*)t0)[2],t1);}

/* k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2991,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_record(&a,4,lf[90],lf[91],lf[92],t2);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2436,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],tmp=(C_word)a,a+=18,tmp);
C_trace("batch-driver.scm: 490  print-node");
t7=((C_word*)((C_word*)t0)[12])[1];
f_1671(t7,t6,lf[196],lf[197],t3);}

/* k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2439,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
C_trace("batch-driver.scm: 491  initialize-analysis-database");
((C_proc2)C_retrieve_symbol_proc(lf[195]))(2,*((C_word*)lf[195]+1),t2);}

/* k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2442,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_retrieve(lf[179]))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2937,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[16],a[7]=t2,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[17],tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_word)C_i_memq(lf[193],((C_word*)t0)[2]))){
t4=t3;
f_2937(2,t4,C_SCHEME_UNDEFINED);}
else{
C_trace("batch-driver.scm: 496  load-type-database");
((C_proc3)C_retrieve_symbol_proc(lf[190]))(3,*((C_word*)lf[190]+1),t3,lf[194]);}}
else{
t3=t2;
f_2442(t3,C_SCHEME_UNDEFINED);}}

/* k2935 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2937,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2940,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2969,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2977,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 497  collect-options");
t5=((C_word*)((C_word*)t0)[2])[1];
f_1881(t5,t4,lf[192]);}

/* k2975 in k2935 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("for-each");
t2=*((C_word*)lf[191]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2968 in k2935 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2969(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2969,3,t0,t1,t2);}
t3=C_retrieve(lf[190]);
C_trace("g11711172");
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,C_SCHEME_FALSE);}

/* k2938 in k2935 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2940,2,t0,t1);}
t2=f_1916(((C_word*)((C_word*)t0)[8])[1]);
t3=C_set_block_item(lf[95] /* first-analysis */,0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2948,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("batch-driver.scm: 500  analyze");
t5=((C_word*)((C_word*)t0)[2])[1];
f_1961(t5,t4,lf[189],((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}

/* k2946 in k2938 in k2935 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2948,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2951,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("batch-driver.scm: 501  print-db");
t4=((C_word*)((C_word*)t0)[2])[1];
f_1693(t4,t3,lf[188],lf[182],((C_word*)((C_word*)t0)[7])[1],C_fix(0));}

/* k2949 in k2946 in k2938 in k2935 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2954,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("batch-driver.scm: 502  end-time");
t3=((C_word*)((C_word*)t0)[4])[1];
f_1926(t3,t2,lf[187]);}

/* k2952 in k2949 in k2946 in k2938 in k2935 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2954,2,t0,t1);}
t2=f_1916(((C_word*)((C_word*)t0)[6])[1]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2960,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
C_trace("batch-driver.scm: 504  debugging");
((C_proc4)C_retrieve_symbol_proc(lf[103]))(4,*((C_word*)lf[103]+1),t3,lf[104],lf[186]);}

/* k2958 in k2952 in k2949 in k2946 in k2938 in k2935 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2963,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 505  scrutinize");
((C_proc4)C_retrieve_symbol_proc(lf[185]))(4,*((C_word*)lf[185]+1),t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k2961 in k2958 in k2952 in k2949 in k2946 in k2938 in k2935 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2963,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2966,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 506  end-time");
t3=((C_word*)((C_word*)t0)[2])[1];
f_1926(t3,t2,lf[184]);}

/* k2964 in k2961 in k2958 in k2952 in k2949 in k2946 in k2938 in k2935 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[95] /* first-analysis */,0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
f_2442(t3,t2);}

/* k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2442(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2442,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2445,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],tmp=(C_word)a,a+=16,tmp);
if(C_truep(C_retrieve(lf[174]))){
t3=f_1916(((C_word*)((C_word*)t0)[16])[1]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2910,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[15],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[13],a[6]=t2,a[7]=((C_word*)t0)[16],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_retrieve(lf[179]))){
t5=t4;
f_2910(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=C_set_block_item(lf[95] /* first-analysis */,0,C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2928,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
C_trace("batch-driver.scm: 513  analyze");
t7=((C_word*)((C_word*)t0)[14])[1];
f_1961(t7,t6,lf[183],((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}}
else{
t3=t2;
f_2445(t3,C_SCHEME_UNDEFINED);}}

/* k2926 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2928,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2931,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 514  print-db");
t4=((C_word*)((C_word*)t0)[2])[1];
f_1693(t4,t3,lf[181],lf[182],((C_word*)((C_word*)t0)[5])[1],C_fix(0));}

/* k2929 in k2926 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 515  end-time");
t2=((C_word*)((C_word*)t0)[3])[1];
f_1926(t2,((C_word*)t0)[2],lf[180]);}

/* k2908 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2910,2,t0,t1);}
t2=f_1916(((C_word*)((C_word*)t0)[7])[1]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2916,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
C_trace("batch-driver.scm: 517  perform-lambda-lifting!");
((C_proc4)C_retrieve_symbol_proc(lf[178]))(4,*((C_word*)lf[178]+1),t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2914 in k2908 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2916,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2919,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 518  end-time");
t3=((C_word*)((C_word*)t0)[2])[1];
f_1926(t3,t2,lf[177]);}

/* k2917 in k2914 in k2908 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2919,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2922,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 519  print-node");
t3=((C_word*)((C_word*)t0)[3])[1];
f_1671(t3,t2,lf[175],lf[176],((C_word*)t0)[2]);}

/* k2920 in k2917 in k2914 in k2908 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2922(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[95] /* first-analysis */,0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
f_2445(t3,t2);}

/* k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2445(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2445,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2904,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 522  vector->list");
((C_proc3)C_retrieve_proc(*((C_word*)lf[172]+1)))(3,*((C_word*)lf[172]+1),t3,C_retrieve(lf[173]));}

/* k2902 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 522  concatenate");
((C_proc3)C_retrieve_symbol_proc(lf[167]))(3,*((C_word*)lf[167]+1),((C_word*)t0)[2],t1);}

/* k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2451,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2897,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 523  debugging");
((C_proc4)C_retrieve_symbol_proc(lf[103]))(4,*((C_word*)lf[103]+1),t3,lf[170],lf[171]);}

/* k2895 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
C_trace("batch-driver.scm: 524  pp");
((C_proc3)C_retrieve_symbol_proc(lf[169]))(3,*((C_word*)lf[169]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2451(2,t2,C_SCHEME_UNDEFINED);}}

/* k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2451,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2454,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],tmp=(C_word)a,a+=16,tmp);
if(C_truep(C_retrieve(lf[160]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2804,a[2]=t2,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2859,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2861,a[2]=t5,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_2861(t12,t8,((C_word*)t0)[2]);}
else{
t3=t2;
f_2454(2,t3,C_SCHEME_UNDEFINED);}}

/* loop1223 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2861(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2861,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[168]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2890,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g12391240");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2888 in loop1223 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2890(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2890,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop12231236");
t6=((C_word*)((C_word*)t0)[4])[1];
f_2861(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
C_trace("loop12231236");
t6=((C_word*)((C_word*)t0)[4])[1];
f_2861(t6,((C_word*)t0)[3],t5);}}

/* k2857 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 534  concatenate");
((C_proc3)C_retrieve_symbol_proc(lf[167]))(3,*((C_word*)lf[167]+1),((C_word*)t0)[2],t1);}

/* k2802 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2804,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2806,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2806(t5,((C_word*)t0)[2],t1);}

/* loop1204 in k2802 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2806(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2806,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2814,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2844,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g12111212");
t6=t3;
f_2814(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2842 in loop1204 in k2802 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2806(t3,((C_word*)t0)[2],t2);}

/* g1211 in loop1204 in k2802 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2814(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2814,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2818,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2837,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2841,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 529  symbol->string");
((C_proc3)C_retrieve_proc(*((C_word*)lf[166]+1)))(3,*((C_word*)lf[166]+1),t5,t2);}

/* k2839 in g1211 in loop1204 in k2802 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 529  make-pathname");
((C_proc5)C_retrieve_symbol_proc(lf[164]))(5,*((C_word*)lf[164]+1),((C_word*)t0)[2],C_SCHEME_FALSE,t1,lf[165]);}

/* k2835 in g1211 in loop1204 in k2802 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 528  ##sys#resolve-include-filename");
((C_proc5)C_retrieve_symbol_proc(lf[163]))(5,*((C_word*)lf[163]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k2816 in g1211 in loop1204 in k2802 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2818,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2827,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 531  file-exists?");
((C_proc3)C_retrieve_symbol_proc(lf[162]))(3,*((C_word*)lf[162]+1),t2,t1);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2825 in k2816 in g1211 in loop1204 in k2802 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2827,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2830,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 532  dribble");
t3=((C_word*)((C_word*)t0)[2])[1];
f_1632(t3,t2,lf[161],(C_word)C_a_i_list(&a,1,((C_word*)t0)[3]));}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2828 in k2825 in k2816 in g1211 in loop1204 in k2802 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 533  load-inline-file");
((C_proc3)C_retrieve_symbol_proc(lf[157]))(3,*((C_word*)lf[157]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2454,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2457,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
C_trace("batch-driver.scm: 535  collect-options");
t3=((C_word*)((C_word*)t0)[2])[1];
f_1881(t3,t2,lf[159]);}

/* k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2457,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
if(C_truep((C_word)C_i_nullp(t1))){
t3=t2;
f_2460(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=C_set_block_item(lf[155] /* inline-globally */,0,C_SCHEME_TRUE);
t4=C_set_block_item(lf[156] /* inline-locally */,0,C_SCHEME_TRUE);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2768,a[2]=t6,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2768(t8,t2,t1);}}

/* loop1249 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2768(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2768,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2776,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2786,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g12561257");
t6=t3;
f_2776(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2784 in loop1249 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2768(t3,((C_word*)t0)[2],t2);}

/* g1256 in loop1249 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2776(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2776,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2780,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 541  dribble");
t4=((C_word*)((C_word*)t0)[2])[1];
f_1632(t4,t3,lf[158],(C_word)C_a_i_list(&a,1,t2));}

/* k2778 in g1256 in loop1249 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 542  load-inline-file");
((C_proc3)C_retrieve_symbol_proc(lf[157]))(3,*((C_word*)lf[157]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2460(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2460,2,t0,t1);}
t2=C_set_block_item(lf[46] /* line-number-database */,0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[93] /* constant-table */,0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[94] /* inline-table */,0,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2466,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
if(C_truep(C_retrieve(lf[153]))){
t6=t5;
f_2466(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=(C_word)C_slot(((C_word*)t0)[2],C_fix(3));
t7=(C_word)C_i_car(t6);
C_trace("batch-driver.scm: 549  scan-toplevel-assignments");
((C_proc3)C_retrieve_symbol_proc(lf[154]))(3,*((C_word*)lf[154]+1),t5,t7);}}

/* k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2466,2,t0,t1);}
t2=f_1916(((C_word*)((C_word*)t0)[14])[1]);
t3=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2472,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
C_trace("batch-driver.scm: 552  perform-cps-conversion");
((C_proc3)C_retrieve_symbol_proc(lf[152]))(3,*((C_word*)lf[152]+1),t3,((C_word*)t0)[2]);}

/* k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2472,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2475,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
C_trace("batch-driver.scm: 553  end-time");
t3=((C_word*)((C_word*)t0)[12])[1];
f_1926(t3,t2,lf[151]);}

/* k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2475,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2478,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
C_trace("batch-driver.scm: 554  print-node");
t3=((C_word*)((C_word*)t0)[11])[1];
f_1671(t3,t2,lf[149],lf[150],((C_word*)t0)[2]);}

/* k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2478,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2483,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=t3,a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp));
t5=((C_word*)t3)[1];
f_2483(t5,((C_word*)t0)[3],C_fix(1),((C_word*)t0)[2],C_SCHEME_TRUE);}

/* loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_2483(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2483,NULL,5,t0,t1,t2,t3,t4);}
t5=f_1916(((C_word*)((C_word*)t0)[13])[1]);
t6=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2490,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=t2,a[15]=t3,a[16]=((C_word*)t0)[13],a[17]=t4,tmp=(C_word)a,a+=18,tmp);
C_trace("batch-driver.scm: 560  analyze");
t7=((C_word*)((C_word*)t0)[10])[1];
f_1961(t7,t6,lf[148],t3,(C_word)C_a_i_list(&a,2,t2,t4));}

/* k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2490,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=t1,a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],tmp=(C_word)a,a+=19,tmp);
if(C_truep(C_retrieve(lf[95]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2718,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_memq(lf[146],C_retrieve(lf[35])))){
C_trace("batch-driver.scm: 563  dump-undefined-globals");
((C_proc3)C_retrieve_symbol_proc(lf[147]))(3,*((C_word*)lf[147]+1),t3,t1);}
else{
t4=t3;
f_2718(2,t4,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_2493(2,t3,C_SCHEME_UNDEFINED);}}

/* k2716 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2718,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2721,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_memq(lf[144],C_retrieve(lf[35])))){
C_trace("batch-driver.scm: 565  dump-defined-globals");
((C_proc3)C_retrieve_symbol_proc(lf[145]))(3,*((C_word*)lf[145]+1),t2,((C_word*)t0)[2]);}
else{
t3=t2;
f_2721(2,t3,C_SCHEME_UNDEFINED);}}

/* k2719 in k2716 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_i_memq(lf[142],C_retrieve(lf[35])))){
C_trace("batch-driver.scm: 567  dump-global-refs");
((C_proc3)C_retrieve_symbol_proc(lf[143]))(3,*((C_word*)lf[143]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_2493(2,t3,t2);}}

/* k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2493,2,t0,t1);}
t2=C_set_block_item(lf[95] /* first-analysis */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
C_trace("batch-driver.scm: 569  end-time");
t4=((C_word*)((C_word*)t0)[12])[1];
f_1926(t4,t3,lf[141]);}

/* k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2497,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2500,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
C_trace("batch-driver.scm: 570  print-db");
t3=((C_word*)((C_word*)t0)[2])[1];
f_1693(t3,t2,lf[139],lf[140],((C_word*)t0)[15],((C_word*)t0)[14]);}

/* k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2500,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2503,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
if(C_truep((C_word)C_i_memq(lf[137],C_retrieve(lf[35])))){
C_trace("batch-driver.scm: 572  print-program-statistics");
((C_proc3)C_retrieve_symbol_proc(lf[138]))(3,*((C_word*)lf[138]+1),t2,((C_word*)t0)[15]);}
else{
t3=t2;
f_2503(2,t3,C_SCHEME_UNDEFINED);}}

/* k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2503,2,t0,t1);}
if(C_truep(((C_word*)t0)[18])){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2509,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[14],a[8]=((C_word*)t0)[15],a[9]=((C_word*)t0)[16],a[10]=((C_word*)t0)[17],tmp=(C_word)a,a+=11,tmp);
C_trace("batch-driver.scm: 575  debugging");
((C_proc5)C_retrieve_symbol_proc(lf[103]))(5,*((C_word*)lf[103]+1),t2,lf[104],lf[109],((C_word*)t0)[14]);}
else{
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2595,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[14],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[17],tmp=(C_word)a,a+=16,tmp);
C_trace("batch-driver.scm: 599  print-node");
t3=((C_word*)((C_word*)t0)[10])[1];
f_1671(t3,t2,lf[135],lf[136],((C_word*)t0)[16]);}}

/* k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2595,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2598,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
if(C_truep(C_retrieve(lf[132]))){
t3=C_retrieve(lf[132]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2706,a[2]=((C_word*)t0)[14],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 603  dribble");
t5=((C_word*)((C_word*)t0)[13])[1];
f_1632(t5,t4,lf[134],(C_word)C_a_i_list(&a,1,t3));}
else{
t3=t2;
f_2598(2,t3,C_SCHEME_UNDEFINED);}}

/* k2704 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 604  emit-global-inline-file");
((C_proc4)C_retrieve_symbol_proc(lf[133]))(4,*((C_word*)lf[133]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2598,2,t0,t1);}
t2=f_1916(((C_word*)((C_word*)t0)[15])[1]);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2604,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
C_trace("batch-driver.scm: 607  perform-closure-conversion");
((C_proc4)C_retrieve_symbol_proc(lf[131]))(4,*((C_word*)lf[131]+1),t3,((C_word*)t0)[2],((C_word*)t0)[14]);}

/* k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2604,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2607,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=t1,a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
C_trace("batch-driver.scm: 608  end-time");
t3=((C_word*)((C_word*)t0)[11])[1];
f_1926(t3,t2,lf[130]);}

/* k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2607,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2610,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],tmp=(C_word)a,a+=14,tmp);
C_trace("batch-driver.scm: 609  print-db");
t3=((C_word*)((C_word*)t0)[3])[1];
f_1693(t3,t2,lf[128],lf[129],((C_word*)t0)[13],((C_word*)t0)[2]);}

/* k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2610,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2613,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
if(C_truep(C_retrieve(lf[126]))){
t3=(C_word)C_fudge(C_fix(6));
t4=(C_word)C_fixnum_difference(t3,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep((C_word)C_fixnum_greaterp(t4,C_fix(60000)))){
C_trace("batch-driver.scm: 611  display");
((C_proc3)C_retrieve_proc(*((C_word*)lf[36]+1)))(3,*((C_word*)lf[36]+1),t2,lf[127]);}
else{
t5=t2;
f_2613(2,t5,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_2613(2,t3,C_SCHEME_UNDEFINED);}}

/* k2611 in k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2613,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2616,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[2])){
C_trace("batch-driver.scm: 612  exit");
((C_proc3)C_retrieve_symbol_proc(lf[125]))(3,*((C_word*)lf[125]+1),t2,C_fix(0));}
else{
t3=t2;
f_2616(2,t3,C_SCHEME_UNDEFINED);}}

/* k2614 in k2611 in k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2616,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2619,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
C_trace("batch-driver.scm: 613  print-node");
t3=((C_word*)((C_word*)t0)[2])[1];
f_1671(t3,t2,lf[123],lf[124],((C_word*)t0)[10]);}

/* k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2619,2,t0,t1);}
t2=f_1916(((C_word*)((C_word*)t0)[10])[1]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2627,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2633,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[2],t3,t4);}

/* a2632 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2633(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2633,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=t4,a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=t1,a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
C_trace("batch-driver.scm: 618  end-time");
t7=((C_word*)((C_word*)t0)[6])[1];
f_1926(t7,t6,lf[122]);}

/* k2635 in a2632 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2637(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2637,2,t0,t1);}
t2=f_1916(((C_word*)((C_word*)t0)[12])[1]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2643,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[8])){
C_trace("batch-driver.scm: 621  open-output-file");
((C_proc3)C_retrieve_proc(*((C_word*)lf[120]+1)))(3,*((C_word*)lf[120]+1),t3,((C_word*)t0)[8]);}
else{
C_trace("batch-driver.scm: 621  current-output-port");
((C_proc2)C_retrieve_proc(*((C_word*)lf[121]+1)))(2,*((C_word*)lf[121]+1),t3);}}

/* k2641 in k2635 in a2632 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2643(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2643,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2646,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
C_trace("batch-driver.scm: 622  dribble");
t3=((C_word*)((C_word*)t0)[11])[1];
f_1632(t3,t2,lf[119],(C_word)C_a_i_list(&a,1,((C_word*)t0)[8]));}

/* k2644 in k2641 in k2635 in a2632 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2649,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
C_trace("batch-driver.scm: 623  generate-code");
((C_proc9)C_retrieve_symbol_proc(lf[118]))(9,*((C_word*)lf[118]+1),t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[8],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2647 in k2644 in k2641 in k2635 in a2632 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2649,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2652,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
C_trace("batch-driver.scm: 624  close-output-port");
((C_proc3)C_retrieve_proc(*((C_word*)lf[117]+1)))(3,*((C_word*)lf[117]+1),t2,((C_word*)t0)[2]);}
else{
t3=t2;
f_2652(2,t3,C_SCHEME_UNDEFINED);}}

/* k2650 in k2647 in k2644 in k2641 in k2635 in a2632 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2652,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2655,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 625  end-time");
t3=((C_word*)((C_word*)t0)[2])[1];
f_1926(t3,t2,lf[116]);}

/* k2653 in k2650 in k2647 in k2644 in k2641 in k2635 in a2632 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2655,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2658,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_memq(lf[113],C_retrieve(lf[35])))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2674,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 626  ##sys#stop-timer");
t4=*((C_word*)lf[115]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f5114,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 627  compiler-cleanup-hook");
((C_proc2)C_retrieve_symbol_proc(lf[112]))(2,*((C_word*)lf[112]+1),t3);}}

/* f5114 in k2653 in k2650 in k2647 in k2644 in k2641 in k2635 in a2632 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f5114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 628  dribble");
t2=((C_word*)((C_word*)t0)[3])[1];
f_1632(t2,((C_word*)t0)[2],lf[111],C_SCHEME_END_OF_LIST);}

/* k2672 in k2653 in k2650 in k2647 in k2644 in k2641 in k2635 in a2632 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 626  ##sys#display-times");
((C_proc3)C_retrieve_symbol_proc(lf[114]))(3,*((C_word*)lf[114]+1),((C_word*)t0)[2],t1);}

/* k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2635 in a2632 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2658,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2661,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 627  compiler-cleanup-hook");
((C_proc2)C_retrieve_symbol_proc(lf[112]))(2,*((C_word*)lf[112]+1),t2);}

/* k2659 in k2656 in k2653 in k2650 in k2647 in k2644 in k2641 in k2635 in a2632 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 628  dribble");
t2=((C_word*)((C_word*)t0)[3])[1];
f_1632(t2,((C_word*)t0)[2],lf[111],C_SCHEME_END_OF_LIST);}

/* a2626 in k2617 in k2614 in k2611 in k2608 in k2605 in k2602 in k2596 in k2593 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2627,2,t0,t1);}
C_trace("batch-driver.scm: 617  prepare-for-code-generation");
((C_proc4)C_retrieve_symbol_proc(lf[110]))(4,*((C_word*)lf[110]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2507 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2509,2,t0,t1);}
t2=f_1916(((C_word*)((C_word*)t0)[10])[1]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2517,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2523,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
C_trace("##sys#call-with-values");
C_call_with_values(4,0,((C_word*)t0)[2],t3,t4);}

/* a2522 in k2507 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2523,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t3,tmp=(C_word)a,a+=11,tmp);
C_trace("batch-driver.scm: 580  end-time");
t5=((C_word*)((C_word*)t0)[4])[1];
f_1926(t5,t4,lf[108]);}

/* k2525 in a2522 in k2507 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2530,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
C_trace("batch-driver.scm: 581  print-node");
t3=((C_word*)((C_word*)t0)[2])[1];
f_1671(t3,t2,lf[106],lf[107],((C_word*)t0)[6]);}

/* k2528 in k2525 in a2522 in k2507 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2530(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2530,2,t0,t1);}
if(C_truep(((C_word*)t0)[9])){
t2=(C_word)C_fixnum_increase(((C_word*)t0)[8]);
C_trace("batch-driver.scm: 583  loop");
t3=((C_word*)((C_word*)t0)[7])[1];
f_2483(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5],C_SCHEME_TRUE);}
else{
t2=C_retrieve(lf[97]);
if(C_truep(t2)){
if(C_truep(C_retrieve(lf[98]))){
t3=f_1916(((C_word*)((C_word*)t0)[4])[1]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2566,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
C_trace("batch-driver.scm: 590  analyze");
t5=((C_word*)((C_word*)t0)[2])[1];
f_1961(t5,t4,lf[102],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_fixnum_increase(((C_word*)t0)[8]);
C_trace("batch-driver.scm: 596  loop");
t4=((C_word*)((C_word*)t0)[7])[1];
f_2483(t4,((C_word*)t0)[6],t3,((C_word*)t0)[5],C_SCHEME_FALSE);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2549,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
C_trace("batch-driver.scm: 585  debugging");
((C_proc4)C_retrieve_symbol_proc(lf[103]))(4,*((C_word*)lf[103]+1),t3,lf[104],lf[105]);}}}

/* k2547 in k2528 in k2525 in a2522 in k2507 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_block_item(lf[97] /* inline-substitutions-enabled */,0,C_SCHEME_TRUE);
t3=(C_word)C_fixnum_increase(((C_word*)t0)[5]);
C_trace("batch-driver.scm: 587  loop");
t4=((C_word*)((C_word*)t0)[4])[1];
f_2483(t4,((C_word*)t0)[3],t3,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k2564 in k2528 in k2525 in a2522 in k2507 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2569,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
C_trace("batch-driver.scm: 591  end-time");
t3=((C_word*)((C_word*)t0)[2])[1];
f_1926(t3,t2,lf[101]);}

/* k2567 in k2564 in k2528 in k2525 in a2522 in k2507 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2569(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2569,2,t0,t1);}
t2=f_1916(((C_word*)((C_word*)t0)[8])[1]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2575,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
C_trace("batch-driver.scm: 593  transform-direct-lambdas!");
((C_proc4)C_retrieve_symbol_proc(lf[100]))(4,*((C_word*)lf[100]+1),t3,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* k2573 in k2567 in k2564 in k2528 in k2525 in a2522 in k2507 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2578,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
C_trace("batch-driver.scm: 594  end-time");
t3=((C_word*)((C_word*)t0)[2])[1];
f_1926(t3,t2,lf[99]);}

/* k2576 in k2573 in k2567 in k2564 in k2528 in k2525 in a2522 in k2507 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[6]);
C_trace("batch-driver.scm: 595  loop");
t3=((C_word*)((C_word*)t0)[5])[1];
f_2483(t3,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2516 in k2507 in k2501 in k2498 in k2495 in k2491 in k2488 in loop in k2476 in k2473 in k2470 in k2464 in k2458 in k2455 in k2452 in k2449 in k2446 in k2443 in k2440 in k2437 in k2434 in k2989 in k2423 in k2420 in k2417 in k2414 in k2411 in k2406 in k2403 in k2400 in k2397 in k2394 in k2391 in k2385 in k2382 in k2379 in k2373 in k2370 in k2367 in k2364 in k2361 in k2358 in k2355 in k2352 in k2349 in k2341 in k2338 in k2335 in k2332 in k2328 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2517,2,t0,t1);}
C_trace("batch-driver.scm: 579  perform-high-level-optimizations");
((C_proc4)C_retrieve_symbol_proc(lf[96]))(4,*((C_word*)lf[96]+1),t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2313 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 371  display");
((C_proc3)C_retrieve_proc(*((C_word*)lf[36]+1)))(3,*((C_word*)lf[36]+1),((C_word*)t0)[2],t1);}

/* k2306 in k2294 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 372  newline");
((C_proc2)C_retrieve_proc(*((C_word*)lf[81]+1)))(2,*((C_word*)lf[81]+1),((C_word*)t0)[2]);}

/* k2282 in k2273 in k2270 in k2267 in k2264 in k2261 in k2250 in k2246 in k2242 in k2238 in k2234 in k2230 in k2227 in k2223 in k2219 in k2216 in k2212 in k2204 in k2200 in k2197 in k2194 in k2191 in k2184 in k2181 in k2178 in k2175 in k2172 in k2169 in k2166 in k2162 in k2159 in k2153 in k2150 in k2147 in k2144 in k2141 in k2138 in k2135 in k2129 in k2123 in k2120 in k2117 in k2114 in k2111 in k2108 in k2105 in k2102 in k2099 in k2096 in k2093 in k2089 in k2086 in k2083 in k2080 in k2077 in k2074 in k2071 in k2068 in k2065 in k2062 in k2059 in k2056 in k2048 in k2044 in k2041 in k2038 in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_2284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 367  newline");
((C_proc2)C_retrieve_proc(*((C_word*)lf[81]+1)))(2,*((C_word*)lf[81]+1),((C_word*)t0)[2]);}

/* analyze in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1961(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
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
C_save_and_reclaim((void*)trf_1961,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1963,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1986,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1991,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
C_trace("def-no291333");
t8=t7;
f_1991(t8,t1);}
else{
t8=(C_word)C_i_car(t4);
t9=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t9))){
C_trace("def-contf292331");
t10=t6;
f_1986(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
C_trace("body289297");
t12=t5;
f_1963(t12,t1,t8,t10);}
else{
C_trace("##sys#error");
t12=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-no291 in analyze in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1991(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1991,NULL,2,t0,t1);}
C_trace("def-contf292331");
t2=((C_word*)t0)[2];
f_1986(t2,t1,C_fix(0));}

/* def-contf292 in analyze in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1986(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1986,NULL,3,t0,t1,t2);}
C_trace("body289297");
t3=((C_word*)t0)[2];
f_1963(t3,t1,t2,C_SCHEME_TRUE);}

/* body289 in analyze in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1963(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1963,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1967,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
C_trace("batch-driver.scm: 160  analyze-expression");
((C_proc3)C_retrieve_symbol_proc(lf[57]))(3,*((C_word*)lf[57]+1),t4,((C_word*)t0)[2]);}

/* k1965 in body289 in analyze in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1967,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1970,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1975,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1981,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 162  upap");
t5=((C_word*)((C_word*)t0)[6])[1];
((C_proc9)C_retrieve_proc(t5))(9,t5,t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],t3,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* a1980 in k1965 in body289 in analyze in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1981(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1981,5,t0,t1,t2,t3,t4);}
t5=C_retrieve(lf[56]);
C_trace("g328329");
t6=t5;
((C_proc6)C_retrieve_proc(t6))(6,t6,t1,((C_word*)t0)[2],t2,t3,t4);}

/* a1974 in k1965 in body289 in analyze in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1975(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1975,4,t0,t1,t2,t3);}
t4=C_retrieve(lf[55]);
C_trace("g313314");
t5=t4;
((C_proc5)C_retrieve_proc(t5))(5,t5,t1,((C_word*)t0)[2],t2,t3);}

/* k1968 in k1965 in body289 in analyze in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* read-form in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1955(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1955,NULL,3,t0,t1,t2);}
C_trace("batch-driver.scm: 156  ##sys#read");
((C_proc4)C_retrieve_symbol_proc(lf[54]))(4,*((C_word*)lf[54]+1),t1,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* end-time in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1926(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1926,NULL,3,t0,t1,t2);}
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t3=*((C_word*)lf[31]+1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1933,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),t4,lf[53],t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1931 in end-time in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1936,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k1934 in k1931 in end-time in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1936,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),t2,lf[52],((C_word*)t0)[3]);}

/* k1937 in k1934 in k1931 in end-time in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1942,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fudge(C_fix(6));
t4=(C_word)C_fixnum_difference(t3,((C_word*)((C_word*)t0)[2])[1]);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[42]+1)))(4,*((C_word*)lf[42]+1),t2,t4,((C_word*)t0)[3]);}

/* k1940 in k1937 in k1934 in k1931 in end-time in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("write-char/port");
t2=C_retrieve(lf[33]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* begin-time in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static C_word C_fcall f_1916(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t1=(C_word)C_fudge(C_fix(6));
t2=C_mutate(((C_word *)((C_word*)t0)[2])+1,t1);
return(t2);}
else{
t1=C_SCHEME_UNDEFINED;
return(t1);}}

/* collect-options in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1881(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1881,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1887,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1887(t6,t1,((C_word*)t0)[2]);}

/* loop in collect-options in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1887(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1887,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_memq(((C_word*)t0)[4],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1895,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("g264265");
t5=t4;
f_1895(t5,t1,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* g264 in loop in collect-options in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1895(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1895,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1903,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 145  option-arg");
f_1527(t3,t2);}

/* k1901 in g264 in loop in collect-options in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1903,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1907,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cddr(((C_word*)t0)[3]);
C_trace("batch-driver.scm: 145  loop");
t4=((C_word*)((C_word*)t0)[2])[1];
f_1887(t4,t2,t3);}

/* k1905 in k1901 in g264 in loop in collect-options in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1907,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* arg-val in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1801(C_word t1,C_word t2){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1801,NULL,2,t1,t2);}
t3=(C_word)C_i_string_length(t2);
t4=(C_word)C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1811,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(2)))){
C_trace("batch-driver.scm: 136  string->number");
C_string_to_number(3,0,t5,t2);}
else{
t6=(C_word)C_i_string_ref(t2,t4);
t7=(C_word)C_eqp(t6,C_make_character(109));
t8=(C_truep(t7)?t7:(C_word)C_eqp(t6,C_make_character(77)));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1842,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1850,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 138  substring");
((C_proc5)C_retrieve_proc(*((C_word*)lf[51]+1)))(5,*((C_word*)lf[51]+1),t10,t2,C_fix(0),t4);}
else{
t9=(C_word)C_eqp(t6,C_make_character(107));
t10=(C_truep(t9)?t9:(C_word)C_eqp(t6,C_make_character(75)));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1866,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1870,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 139  substring");
((C_proc5)C_retrieve_proc(*((C_word*)lf[51]+1)))(5,*((C_word*)lf[51]+1),t12,t2,C_fix(0),t4);}
else{
C_trace("batch-driver.scm: 140  string->number");
C_string_to_number(3,0,t5,t2);}}}}

/* k1868 in arg-val in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 139  string->number");
C_string_to_number(3,0,((C_word*)t0)[2],t1);}

/* k1864 in arg-val in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_times(t1,C_fix(1024));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
C_trace("batch-driver.scm: 141  quit");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[50],((C_word*)t0)[2]);}}

/* k1848 in arg-val in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 138  string->number");
C_string_to_number(3,0,((C_word*)t0)[2],t1);}

/* k1840 in arg-val in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_times(t1,C_fix(1048576));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
C_trace("batch-driver.scm: 141  quit");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[50],((C_word*)t0)[2]);}}

/* k1809 in arg-val in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
C_trace("batch-driver.scm: 141  quit");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[50],((C_word*)t0)[2]);}}

/* infohook in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1752,5,t0,t1,t2,t3,t4);}
t5=C_retrieve(lf[44]);
t6=(C_truep(t5)?t5:(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1798,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1759,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("g209210");
t8=t6;
((C_proc5)C_retrieve_proc(t8))(5,t8,t7,t2,t3,t4);}

/* k1757 in infohook in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1762,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1765,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_eqp(lf[49],((C_word*)t0)[2]);
if(C_truep(t4)){
t5=(C_word)C_i_car(t1);
t6=t3;
f_1765(t6,(C_word)C_i_symbolp(t5));}
else{
t5=t3;
f_1765(t5,C_SCHEME_FALSE);}}

/* k1763 in k1757 in infohook in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1765(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1765,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1776,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1780,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[5]);
C_trace("batch-driver.scm: 128  ##sys#hash-table-ref");
((C_proc4)C_retrieve_symbol_proc(lf[48]))(4,*((C_word*)lf[48]+1),t4,C_retrieve(lf[46]),t5);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}}

/* k1778 in k1763 in k1757 in infohook in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
C_trace("batch-driver.scm: 127  alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[47]))(5,*((C_word*)lf[47]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}
else{
C_trace("batch-driver.scm: 127  alist-cons");
((C_proc5)C_retrieve_symbol_proc(lf[47]))(5,*((C_word*)lf[47]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}}

/* k1774 in k1763 in k1757 in infohook in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 124  ##sys#hash-table-set!");
((C_proc5)C_retrieve_symbol_proc(lf[45]))(5,*((C_word*)lf[45]+1),((C_word*)t0)[3],C_retrieve(lf[46]),((C_word*)t0)[2],t1);}

/* k1760 in k1757 in infohook in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_1798 in infohook in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1798(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1798,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* print-expr in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1717(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1717,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1724,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_trace("batch-driver.scm: 118  print-header");
t6=((C_word*)((C_word*)t0)[2])[1];
f_1647(t6,t5,t2,t3);}

/* k1722 in print-expr in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1724,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1729,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_1729(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* loop194 in k1722 in print-expr in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1729(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1729,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[39]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1739,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
C_trace("g201202");
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1737 in loop194 in k1722 in print-expr in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1729(t3,((C_word*)t0)[2],t2);}

/* print-db in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1693(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1693,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1700,a[2]=t5,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 113  print-header");
t7=((C_word*)((C_word*)t0)[2])[1];
f_1647(t7,t6,t2,t3);}

/* k1698 in print-db in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1700,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[31]+1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1703,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),t3,lf[43],t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1701 in k1698 in print-db in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1703,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1706,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
C_trace("write");
((C_proc4)C_retrieve_proc(*((C_word*)lf[42]+1)))(4,*((C_word*)lf[42]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1704 in k1701 in k1698 in print-db in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1706,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1709,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[33]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),((C_word*)t0)[2]);}

/* k1707 in k1704 in k1701 in k1698 in print-db in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1709,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1712,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[33]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k1710 in k1707 in k1704 in k1701 in k1698 in print-db in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 115  display-analysis-database");
((C_proc3)C_retrieve_symbol_proc(lf[41]))(3,*((C_word*)lf[41]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* print-node in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1671(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1671,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1678,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 107  print-header");
t6=((C_word*)((C_word*)t0)[2])[1];
f_1647(t6,t5,t2,t3);}

/* k1676 in print-node in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1678,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
C_trace("batch-driver.scm: 109  dump-nodes");
((C_proc3)C_retrieve_symbol_proc(lf[38]))(3,*((C_word*)lf[38]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1691,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("batch-driver.scm: 110  build-expression-tree");
((C_proc3)C_retrieve_symbol_proc(lf[40]))(3,*((C_word*)lf[40]+1),t2,((C_word*)t0)[2]);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1689 in k1676 in print-node in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("batch-driver.scm: 110  pretty-print");
((C_proc3)C_retrieve_symbol_proc(lf[39]))(3,*((C_word*)lf[39]+1),((C_word*)t0)[2],t1);}

/* print-header in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1647(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1647,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1651,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_trace("batch-driver.scm: 100  dribble");
t5=((C_word*)((C_word*)t0)[2])[1];
f_1632(t5,t4,lf[37],(C_word)C_a_i_list(&a,1,t2));}

/* k1649 in print-header in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1651,2,t0,t1);}
if(C_truep((C_word)C_i_memq(((C_word*)t0)[4],C_retrieve(lf[35])))){
t2=*((C_word*)lf[31]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1660,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
C_trace("write-char/port");
t4=C_retrieve(lf[33]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(91),t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k1658 in k1649 in print-header in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1660,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1663,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
C_trace("display");
((C_proc4)C_retrieve_proc(*((C_word*)lf[36]+1)))(4,*((C_word*)lf[36]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1661 in k1658 in k1649 in print-header in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1663,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1666,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[33]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(93),((C_word*)t0)[2]);}

/* k1664 in k1661 in k1658 in k1649 in print-header in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1666,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1669,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[33]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k1667 in k1664 in k1661 in k1658 in k1649 in print-header in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* dribble in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1632(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1632,NULL,4,t0,t1,t2,t3);}
if(C_truep(((C_word*)t0)[2])){
t4=*((C_word*)lf[31]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1639,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(6,0,t5,C_retrieve(lf[34]),t4,t2,t3);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1637 in dribble in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1639,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1642,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
C_trace("write-char/port");
t3=C_retrieve(lf[33]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k1640 in k1637 in dribble in k1583 in k1577 in k1574 in k4787 in k1558 in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_ccall f_1642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("##sys#flush-output");
((C_proc3)C_retrieve_symbol_proc(lf[32]))(3,*((C_word*)lf[32]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* option-arg in compile-source-file in k1520 in k1516 in k1512 in k1508 in k1504 in k1499 in k1496 */
static void C_fcall f_1527(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1527,NULL,2,t1,t2);}
t3=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_i_car(t2);
C_trace("batch-driver.scm: 50   quit");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t1,lf[9],t4);}
else{
t4=(C_word)C_i_cadr(t2);
if(C_truep((C_word)C_i_symbolp(t4))){
C_trace("batch-driver.scm: 53   quit");
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t1,lf[10],t4);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[388] = {
{"toplevel:batch_driver_scm",(void*)C_driver_toplevel},
{"f_1498:batch_driver_scm",(void*)f_1498},
{"f_1501:batch_driver_scm",(void*)f_1501},
{"f_1506:batch_driver_scm",(void*)f_1506},
{"f_1510:batch_driver_scm",(void*)f_1510},
{"f_1514:batch_driver_scm",(void*)f_1514},
{"f_1518:batch_driver_scm",(void*)f_1518},
{"f_1522:batch_driver_scm",(void*)f_1522},
{"f_1524:batch_driver_scm",(void*)f_1524},
{"f_1560:batch_driver_scm",(void*)f_1560},
{"f_4808:batch_driver_scm",(void*)f_4808},
{"f_4793:batch_driver_scm",(void*)f_4793},
{"f_4789:batch_driver_scm",(void*)f_4789},
{"f_4778:batch_driver_scm",(void*)f_4778},
{"f_4749:batch_driver_scm",(void*)f_4749},
{"f_4753:batch_driver_scm",(void*)f_4753},
{"f_1576:batch_driver_scm",(void*)f_1576},
{"f_4745:batch_driver_scm",(void*)f_4745},
{"f_4706:batch_driver_scm",(void*)f_4706},
{"f_4708:batch_driver_scm",(void*)f_4708},
{"f_4737:batch_driver_scm",(void*)f_4737},
{"f_1579:batch_driver_scm",(void*)f_1579},
{"f_1585:batch_driver_scm",(void*)f_1585},
{"f_4687:batch_driver_scm",(void*)f_4687},
{"f_4683:batch_driver_scm",(void*)f_4683},
{"f_4679:batch_driver_scm",(void*)f_4679},
{"f_2040:batch_driver_scm",(void*)f_2040},
{"f_2043:batch_driver_scm",(void*)f_2043},
{"f_2046:batch_driver_scm",(void*)f_2046},
{"f_4664:batch_driver_scm",(void*)f_4664},
{"f_4608:batch_driver_scm",(void*)f_4608},
{"f_4616:batch_driver_scm",(void*)f_4616},
{"f_4618:batch_driver_scm",(void*)f_4618},
{"f_4656:batch_driver_scm",(void*)f_4656},
{"f_2050:batch_driver_scm",(void*)f_2050},
{"f_4558:batch_driver_scm",(void*)f_4558},
{"f_4560:batch_driver_scm",(void*)f_4560},
{"f_4595:batch_driver_scm",(void*)f_4595},
{"f_4599:batch_driver_scm",(void*)f_4599},
{"f_2058:batch_driver_scm",(void*)f_2058},
{"f_2061:batch_driver_scm",(void*)f_2061},
{"f_2064:batch_driver_scm",(void*)f_2064},
{"f_2067:batch_driver_scm",(void*)f_2067},
{"f_2070:batch_driver_scm",(void*)f_2070},
{"f_2073:batch_driver_scm",(void*)f_2073},
{"f_2076:batch_driver_scm",(void*)f_2076},
{"f_2079:batch_driver_scm",(void*)f_2079},
{"f_2082:batch_driver_scm",(void*)f_2082},
{"f_2085:batch_driver_scm",(void*)f_2085},
{"f_2088:batch_driver_scm",(void*)f_2088},
{"f_2091:batch_driver_scm",(void*)f_2091},
{"f_4461:batch_driver_scm",(void*)f_4461},
{"f_4463:batch_driver_scm",(void*)f_4463},
{"f_4492:batch_driver_scm",(void*)f_4492},
{"f_2095:batch_driver_scm",(void*)f_2095},
{"f_4456:batch_driver_scm",(void*)f_4456},
{"f_2098:batch_driver_scm",(void*)f_2098},
{"f_2101:batch_driver_scm",(void*)f_2101},
{"f_2104:batch_driver_scm",(void*)f_2104},
{"f_2107:batch_driver_scm",(void*)f_2107},
{"f_2110:batch_driver_scm",(void*)f_2110},
{"f_2113:batch_driver_scm",(void*)f_2113},
{"f_2116:batch_driver_scm",(void*)f_2116},
{"f_2119:batch_driver_scm",(void*)f_2119},
{"f_2122:batch_driver_scm",(void*)f_2122},
{"f_2125:batch_driver_scm",(void*)f_2125},
{"f_4411:batch_driver_scm",(void*)f_4411},
{"f_2131:batch_driver_scm",(void*)f_2131},
{"f_4396:batch_driver_scm",(void*)f_4396},
{"f_4399:batch_driver_scm",(void*)f_4399},
{"f_4402:batch_driver_scm",(void*)f_4402},
{"f_2137:batch_driver_scm",(void*)f_2137},
{"f_4386:batch_driver_scm",(void*)f_4386},
{"f_4389:batch_driver_scm",(void*)f_4389},
{"f_2140:batch_driver_scm",(void*)f_2140},
{"f_2143:batch_driver_scm",(void*)f_2143},
{"f_4344:batch_driver_scm",(void*)f_4344},
{"f_2146:batch_driver_scm",(void*)f_2146},
{"f_4338:batch_driver_scm",(void*)f_4338},
{"f_2149:batch_driver_scm",(void*)f_2149},
{"f_4329:batch_driver_scm",(void*)f_4329},
{"f_2152:batch_driver_scm",(void*)f_2152},
{"f_4311:batch_driver_scm",(void*)f_4311},
{"f_4314:batch_driver_scm",(void*)f_4314},
{"f_4317:batch_driver_scm",(void*)f_4317},
{"f_4320:batch_driver_scm",(void*)f_4320},
{"f_2155:batch_driver_scm",(void*)f_2155},
{"f_4270:batch_driver_scm",(void*)f_4270},
{"f_4272:batch_driver_scm",(void*)f_4272},
{"f_4301:batch_driver_scm",(void*)f_4301},
{"f_4266:batch_driver_scm",(void*)f_4266},
{"f_2161:batch_driver_scm",(void*)f_2161},
{"f_2164:batch_driver_scm",(void*)f_2164},
{"f_4215:batch_driver_scm",(void*)f_4215},
{"f_4217:batch_driver_scm",(void*)f_4217},
{"f_4246:batch_driver_scm",(void*)f_4246},
{"f_2168:batch_driver_scm",(void*)f_2168},
{"f_2171:batch_driver_scm",(void*)f_2171},
{"f_2174:batch_driver_scm",(void*)f_2174},
{"f_2177:batch_driver_scm",(void*)f_2177},
{"f_2180:batch_driver_scm",(void*)f_2180},
{"f_4112:batch_driver_scm",(void*)f_4112},
{"f_4126:batch_driver_scm",(void*)f_4126},
{"f_4151:batch_driver_scm",(void*)f_4151},
{"f_4156:batch_driver_scm",(void*)f_4156},
{"f_4184:batch_driver_scm",(void*)f_4184},
{"f_4022:batch_driver_scm",(void*)f_4022},
{"f_4027:batch_driver_scm",(void*)f_4027},
{"f_4041:batch_driver_scm",(void*)f_4041},
{"f_4066:batch_driver_scm",(void*)f_4066},
{"f_4071:batch_driver_scm",(void*)f_4071},
{"f_4099:batch_driver_scm",(void*)f_4099},
{"f_2183:batch_driver_scm",(void*)f_2183},
{"f_4016:batch_driver_scm",(void*)f_4016},
{"f_4008:batch_driver_scm",(void*)f_4008},
{"f_3983:batch_driver_scm",(void*)f_3983},
{"f_3985:batch_driver_scm",(void*)f_3985},
{"f_3995:batch_driver_scm",(void*)f_3995},
{"f_2186:batch_driver_scm",(void*)f_2186},
{"f_2193:batch_driver_scm",(void*)f_2193},
{"f_2196:batch_driver_scm",(void*)f_2196},
{"f_2199:batch_driver_scm",(void*)f_2199},
{"f_3946:batch_driver_scm",(void*)f_3946},
{"f_3962:batch_driver_scm",(void*)f_3962},
{"f_3965:batch_driver_scm",(void*)f_3965},
{"f_2202:batch_driver_scm",(void*)f_2202},
{"f_2206:batch_driver_scm",(void*)f_2206},
{"f_2214:batch_driver_scm",(void*)f_2214},
{"f_2218:batch_driver_scm",(void*)f_2218},
{"f_3909:batch_driver_scm",(void*)f_3909},
{"f_3911:batch_driver_scm",(void*)f_3911},
{"f_3940:batch_driver_scm",(void*)f_3940},
{"f_2221:batch_driver_scm",(void*)f_2221},
{"f_3870:batch_driver_scm",(void*)f_3870},
{"f_3872:batch_driver_scm",(void*)f_3872},
{"f_3901:batch_driver_scm",(void*)f_3901},
{"f_3866:batch_driver_scm",(void*)f_3866},
{"f_3810:batch_driver_scm",(void*)f_3810},
{"f_3812:batch_driver_scm",(void*)f_3812},
{"f_3806:batch_driver_scm",(void*)f_3806},
{"f_2225:batch_driver_scm",(void*)f_2225},
{"f_2229:batch_driver_scm",(void*)f_2229},
{"f_2232:batch_driver_scm",(void*)f_2232},
{"f_3785:batch_driver_scm",(void*)f_3785},
{"f_2236:batch_driver_scm",(void*)f_2236},
{"f_3778:batch_driver_scm",(void*)f_3778},
{"f_2240:batch_driver_scm",(void*)f_2240},
{"f_3771:batch_driver_scm",(void*)f_3771},
{"f_2244:batch_driver_scm",(void*)f_2244},
{"f_3764:batch_driver_scm",(void*)f_3764},
{"f_2248:batch_driver_scm",(void*)f_2248},
{"f_3744:batch_driver_scm",(void*)f_3744},
{"f_2252:batch_driver_scm",(void*)f_2252},
{"f_2263:batch_driver_scm",(void*)f_2263},
{"f_2266:batch_driver_scm",(void*)f_2266},
{"f_2269:batch_driver_scm",(void*)f_2269},
{"f_3703:batch_driver_scm",(void*)f_3703},
{"f_2272:batch_driver_scm",(void*)f_2272},
{"f_2275:batch_driver_scm",(void*)f_2275},
{"f_2296:batch_driver_scm",(void*)f_2296},
{"f_2324:batch_driver_scm",(void*)f_2324},
{"f_2330:batch_driver_scm",(void*)f_2330},
{"f_2334:batch_driver_scm",(void*)f_2334},
{"f_2337:batch_driver_scm",(void*)f_2337},
{"f_2340:batch_driver_scm",(void*)f_2340},
{"f_2343:batch_driver_scm",(void*)f_2343},
{"f_2351:batch_driver_scm",(void*)f_2351},
{"f_2354:batch_driver_scm",(void*)f_2354},
{"f_2357:batch_driver_scm",(void*)f_2357},
{"f_3671:batch_driver_scm",(void*)f_3671},
{"f_3679:batch_driver_scm",(void*)f_3679},
{"f_2360:batch_driver_scm",(void*)f_2360},
{"f_2363:batch_driver_scm",(void*)f_2363},
{"f_3516:batch_driver_scm",(void*)f_3516},
{"f_3615:batch_driver_scm",(void*)f_3615},
{"f_3664:batch_driver_scm",(void*)f_3664},
{"f_3632:batch_driver_scm",(void*)f_3632},
{"f_3636:batch_driver_scm",(void*)f_3636},
{"f_3641:batch_driver_scm",(void*)f_3641},
{"f_3662:batch_driver_scm",(void*)f_3662},
{"f_3627:batch_driver_scm",(void*)f_3627},
{"f_3618:batch_driver_scm",(void*)f_3618},
{"f_3576:batch_driver_scm",(void*)f_3576},
{"f_3605:batch_driver_scm",(void*)f_3605},
{"f_3531:batch_driver_scm",(void*)f_3531},
{"f_3535:batch_driver_scm",(void*)f_3535},
{"f_3541:batch_driver_scm",(void*)f_3541},
{"f_3570:batch_driver_scm",(void*)f_3570},
{"f_3539:batch_driver_scm",(void*)f_3539},
{"f_3527:batch_driver_scm",(void*)f_3527},
{"f_3507:batch_driver_scm",(void*)f_3507},
{"f_3511:batch_driver_scm",(void*)f_3511},
{"f_2366:batch_driver_scm",(void*)f_2366},
{"f_2369:batch_driver_scm",(void*)f_2369},
{"f_3465:batch_driver_scm",(void*)f_3465},
{"f_3471:batch_driver_scm",(void*)f_3471},
{"f_3500:batch_driver_scm",(void*)f_3500},
{"f_3469:batch_driver_scm",(void*)f_3469},
{"f_2372:batch_driver_scm",(void*)f_2372},
{"f_2375:batch_driver_scm",(void*)f_2375},
{"f_3442:batch_driver_scm",(void*)f_3442},
{"f_3462:batch_driver_scm",(void*)f_3462},
{"f_2381:batch_driver_scm",(void*)f_2381},
{"f_3400:batch_driver_scm",(void*)f_3400},
{"f_3402:batch_driver_scm",(void*)f_3402},
{"f_3431:batch_driver_scm",(void*)f_3431},
{"f_2384:batch_driver_scm",(void*)f_2384},
{"f_2387:batch_driver_scm",(void*)f_2387},
{"f_3334:batch_driver_scm",(void*)f_3334},
{"f_3140:batch_driver_scm",(void*)f_3140},
{"f_3290:batch_driver_scm",(void*)f_3290},
{"f_3144:batch_driver_scm",(void*)f_3144},
{"f_3148:batch_driver_scm",(void*)f_3148},
{"f_3167:batch_driver_scm",(void*)f_3167},
{"f_3152:batch_driver_scm",(void*)f_3152},
{"f_2393:batch_driver_scm",(void*)f_2393},
{"f_3079:batch_driver_scm",(void*)f_3079},
{"f_3084:batch_driver_scm",(void*)f_3084},
{"f_3096:batch_driver_scm",(void*)f_3096},
{"f_3099:batch_driver_scm",(void*)f_3099},
{"f_3102:batch_driver_scm",(void*)f_3102},
{"f_3105:batch_driver_scm",(void*)f_3105},
{"f_3119:batch_driver_scm",(void*)f_3119},
{"f_2396:batch_driver_scm",(void*)f_2396},
{"f_3073:batch_driver_scm",(void*)f_3073},
{"f_2399:batch_driver_scm",(void*)f_2399},
{"f_3067:batch_driver_scm",(void*)f_3067},
{"f_2402:batch_driver_scm",(void*)f_2402},
{"f_2405:batch_driver_scm",(void*)f_2405},
{"f_3052:batch_driver_scm",(void*)f_3052},
{"f_2408:batch_driver_scm",(void*)f_2408},
{"f_2413:batch_driver_scm",(void*)f_2413},
{"f_2416:batch_driver_scm",(void*)f_2416},
{"f_2419:batch_driver_scm",(void*)f_2419},
{"f_2422:batch_driver_scm",(void*)f_2422},
{"f_2998:batch_driver_scm",(void*)f_2998},
{"f_3010:batch_driver_scm",(void*)f_3010},
{"f_3039:batch_driver_scm",(void*)f_3039},
{"f_3005:batch_driver_scm",(void*)f_3005},
{"f_2425:batch_driver_scm",(void*)f_2425},
{"f_2995:batch_driver_scm",(void*)f_2995},
{"f_2991:batch_driver_scm",(void*)f_2991},
{"f_2436:batch_driver_scm",(void*)f_2436},
{"f_2439:batch_driver_scm",(void*)f_2439},
{"f_2937:batch_driver_scm",(void*)f_2937},
{"f_2977:batch_driver_scm",(void*)f_2977},
{"f_2969:batch_driver_scm",(void*)f_2969},
{"f_2940:batch_driver_scm",(void*)f_2940},
{"f_2948:batch_driver_scm",(void*)f_2948},
{"f_2951:batch_driver_scm",(void*)f_2951},
{"f_2954:batch_driver_scm",(void*)f_2954},
{"f_2960:batch_driver_scm",(void*)f_2960},
{"f_2963:batch_driver_scm",(void*)f_2963},
{"f_2966:batch_driver_scm",(void*)f_2966},
{"f_2442:batch_driver_scm",(void*)f_2442},
{"f_2928:batch_driver_scm",(void*)f_2928},
{"f_2931:batch_driver_scm",(void*)f_2931},
{"f_2910:batch_driver_scm",(void*)f_2910},
{"f_2916:batch_driver_scm",(void*)f_2916},
{"f_2919:batch_driver_scm",(void*)f_2919},
{"f_2922:batch_driver_scm",(void*)f_2922},
{"f_2445:batch_driver_scm",(void*)f_2445},
{"f_2904:batch_driver_scm",(void*)f_2904},
{"f_2448:batch_driver_scm",(void*)f_2448},
{"f_2897:batch_driver_scm",(void*)f_2897},
{"f_2451:batch_driver_scm",(void*)f_2451},
{"f_2861:batch_driver_scm",(void*)f_2861},
{"f_2890:batch_driver_scm",(void*)f_2890},
{"f_2859:batch_driver_scm",(void*)f_2859},
{"f_2804:batch_driver_scm",(void*)f_2804},
{"f_2806:batch_driver_scm",(void*)f_2806},
{"f_2844:batch_driver_scm",(void*)f_2844},
{"f_2814:batch_driver_scm",(void*)f_2814},
{"f_2841:batch_driver_scm",(void*)f_2841},
{"f_2837:batch_driver_scm",(void*)f_2837},
{"f_2818:batch_driver_scm",(void*)f_2818},
{"f_2827:batch_driver_scm",(void*)f_2827},
{"f_2830:batch_driver_scm",(void*)f_2830},
{"f_2454:batch_driver_scm",(void*)f_2454},
{"f_2457:batch_driver_scm",(void*)f_2457},
{"f_2768:batch_driver_scm",(void*)f_2768},
{"f_2786:batch_driver_scm",(void*)f_2786},
{"f_2776:batch_driver_scm",(void*)f_2776},
{"f_2780:batch_driver_scm",(void*)f_2780},
{"f_2460:batch_driver_scm",(void*)f_2460},
{"f_2466:batch_driver_scm",(void*)f_2466},
{"f_2472:batch_driver_scm",(void*)f_2472},
{"f_2475:batch_driver_scm",(void*)f_2475},
{"f_2478:batch_driver_scm",(void*)f_2478},
{"f_2483:batch_driver_scm",(void*)f_2483},
{"f_2490:batch_driver_scm",(void*)f_2490},
{"f_2718:batch_driver_scm",(void*)f_2718},
{"f_2721:batch_driver_scm",(void*)f_2721},
{"f_2493:batch_driver_scm",(void*)f_2493},
{"f_2497:batch_driver_scm",(void*)f_2497},
{"f_2500:batch_driver_scm",(void*)f_2500},
{"f_2503:batch_driver_scm",(void*)f_2503},
{"f_2595:batch_driver_scm",(void*)f_2595},
{"f_2706:batch_driver_scm",(void*)f_2706},
{"f_2598:batch_driver_scm",(void*)f_2598},
{"f_2604:batch_driver_scm",(void*)f_2604},
{"f_2607:batch_driver_scm",(void*)f_2607},
{"f_2610:batch_driver_scm",(void*)f_2610},
{"f_2613:batch_driver_scm",(void*)f_2613},
{"f_2616:batch_driver_scm",(void*)f_2616},
{"f_2619:batch_driver_scm",(void*)f_2619},
{"f_2633:batch_driver_scm",(void*)f_2633},
{"f_2637:batch_driver_scm",(void*)f_2637},
{"f_2643:batch_driver_scm",(void*)f_2643},
{"f_2646:batch_driver_scm",(void*)f_2646},
{"f_2649:batch_driver_scm",(void*)f_2649},
{"f_2652:batch_driver_scm",(void*)f_2652},
{"f_2655:batch_driver_scm",(void*)f_2655},
{"f5114:batch_driver_scm",(void*)f5114},
{"f_2674:batch_driver_scm",(void*)f_2674},
{"f_2658:batch_driver_scm",(void*)f_2658},
{"f_2661:batch_driver_scm",(void*)f_2661},
{"f_2627:batch_driver_scm",(void*)f_2627},
{"f_2509:batch_driver_scm",(void*)f_2509},
{"f_2523:batch_driver_scm",(void*)f_2523},
{"f_2527:batch_driver_scm",(void*)f_2527},
{"f_2530:batch_driver_scm",(void*)f_2530},
{"f_2549:batch_driver_scm",(void*)f_2549},
{"f_2566:batch_driver_scm",(void*)f_2566},
{"f_2569:batch_driver_scm",(void*)f_2569},
{"f_2575:batch_driver_scm",(void*)f_2575},
{"f_2578:batch_driver_scm",(void*)f_2578},
{"f_2517:batch_driver_scm",(void*)f_2517},
{"f_2315:batch_driver_scm",(void*)f_2315},
{"f_2308:batch_driver_scm",(void*)f_2308},
{"f_2284:batch_driver_scm",(void*)f_2284},
{"f_1961:batch_driver_scm",(void*)f_1961},
{"f_1991:batch_driver_scm",(void*)f_1991},
{"f_1986:batch_driver_scm",(void*)f_1986},
{"f_1963:batch_driver_scm",(void*)f_1963},
{"f_1967:batch_driver_scm",(void*)f_1967},
{"f_1981:batch_driver_scm",(void*)f_1981},
{"f_1975:batch_driver_scm",(void*)f_1975},
{"f_1970:batch_driver_scm",(void*)f_1970},
{"f_1955:batch_driver_scm",(void*)f_1955},
{"f_1926:batch_driver_scm",(void*)f_1926},
{"f_1933:batch_driver_scm",(void*)f_1933},
{"f_1936:batch_driver_scm",(void*)f_1936},
{"f_1939:batch_driver_scm",(void*)f_1939},
{"f_1942:batch_driver_scm",(void*)f_1942},
{"f_1916:batch_driver_scm",(void*)f_1916},
{"f_1881:batch_driver_scm",(void*)f_1881},
{"f_1887:batch_driver_scm",(void*)f_1887},
{"f_1895:batch_driver_scm",(void*)f_1895},
{"f_1903:batch_driver_scm",(void*)f_1903},
{"f_1907:batch_driver_scm",(void*)f_1907},
{"f_1801:batch_driver_scm",(void*)f_1801},
{"f_1870:batch_driver_scm",(void*)f_1870},
{"f_1866:batch_driver_scm",(void*)f_1866},
{"f_1850:batch_driver_scm",(void*)f_1850},
{"f_1842:batch_driver_scm",(void*)f_1842},
{"f_1811:batch_driver_scm",(void*)f_1811},
{"f_1752:batch_driver_scm",(void*)f_1752},
{"f_1759:batch_driver_scm",(void*)f_1759},
{"f_1765:batch_driver_scm",(void*)f_1765},
{"f_1780:batch_driver_scm",(void*)f_1780},
{"f_1776:batch_driver_scm",(void*)f_1776},
{"f_1762:batch_driver_scm",(void*)f_1762},
{"f_1798:batch_driver_scm",(void*)f_1798},
{"f_1717:batch_driver_scm",(void*)f_1717},
{"f_1724:batch_driver_scm",(void*)f_1724},
{"f_1729:batch_driver_scm",(void*)f_1729},
{"f_1739:batch_driver_scm",(void*)f_1739},
{"f_1693:batch_driver_scm",(void*)f_1693},
{"f_1700:batch_driver_scm",(void*)f_1700},
{"f_1703:batch_driver_scm",(void*)f_1703},
{"f_1706:batch_driver_scm",(void*)f_1706},
{"f_1709:batch_driver_scm",(void*)f_1709},
{"f_1712:batch_driver_scm",(void*)f_1712},
{"f_1671:batch_driver_scm",(void*)f_1671},
{"f_1678:batch_driver_scm",(void*)f_1678},
{"f_1691:batch_driver_scm",(void*)f_1691},
{"f_1647:batch_driver_scm",(void*)f_1647},
{"f_1651:batch_driver_scm",(void*)f_1651},
{"f_1660:batch_driver_scm",(void*)f_1660},
{"f_1663:batch_driver_scm",(void*)f_1663},
{"f_1666:batch_driver_scm",(void*)f_1666},
{"f_1669:batch_driver_scm",(void*)f_1669},
{"f_1632:batch_driver_scm",(void*)f_1632},
{"f_1639:batch_driver_scm",(void*)f_1639},
{"f_1642:batch_driver_scm",(void*)f_1642},
{"f_1527:batch_driver_scm",(void*)f_1527},
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
