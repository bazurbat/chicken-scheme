/* Generated from batch-driver.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2010-02-09 21:38
   Version 4.2.12
   windows-mingw32-x86 [ manyargs ptables ]
   compiled 2010-01-08 on lenovo-1 (MINGW32_NT-6.0)
   command line: batch-driver.scm -optimize-level 2 -include-path . -include-path ./ -inline -no-lambda-info -local -no-trace -extend private-namespace.scm -no-trace -output-file batch-driver.c
   unit: driver
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[409];
static double C_possibly_force_alignment;


C_noret_decl(C_driver_toplevel)
C_externexport void C_ccall C_driver_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1508)
static void C_ccall f_1508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1511)
static void C_ccall f_1511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1516)
static void C_ccall f_1516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1520)
static void C_ccall f_1520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1524)
static void C_ccall f_1524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1528)
static void C_ccall f_1528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1532)
static void C_ccall f_1532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4848)
static void C_ccall f_4848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4833)
static void C_ccall f_4833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4829)
static void C_ccall f_4829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4818)
static void C_ccall f_4818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4789)
static void C_fcall f_4789(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4793)
static void C_ccall f_4793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1586)
static void C_ccall f_1586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4785)
static void C_ccall f_4785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4746)
static void C_ccall f_4746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4748)
static void C_fcall f_4748(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1589)
static void C_ccall f_1589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1595)
static void C_fcall f_1595(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4727)
static void C_ccall f_4727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4723)
static void C_ccall f_4723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4719)
static void C_ccall f_4719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2061)
static void C_fcall f_2061(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2064)
static void C_fcall f_2064(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2067)
static void C_ccall f_2067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4704)
static void C_ccall f_4704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4656)
static void C_ccall f_4656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4658)
static void C_fcall f_4658(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4696)
static void C_ccall f_4696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2071)
static void C_ccall f_2071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4598)
static void C_ccall f_4598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4600)
static void C_fcall f_4600(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4635)
static void C_ccall f_4635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4639)
static void C_ccall f_4639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2079)
static void C_ccall f_2079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2082)
static void C_fcall f_2082(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2085)
static void C_fcall f_2085(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2088)
static void C_fcall f_2088(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2094)
static void C_fcall f_2094(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2097)
static void C_ccall f_2097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2100)
static void C_fcall f_2100(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2103)
static void C_fcall f_2103(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2106)
static void C_fcall f_2106(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2109)
static void C_fcall f_2109(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2112)
static void C_fcall f_2112(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4503)
static void C_fcall f_4503(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4532)
static void C_ccall f_4532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2116)
static void C_ccall f_2116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4496)
static void C_ccall f_4496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2119)
static void C_fcall f_2119(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2122)
static void C_fcall f_2122(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2125)
static void C_fcall f_2125(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2128)
static void C_fcall f_2128(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2131)
static void C_fcall f_2131(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2134)
static void C_fcall f_2134(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2137)
static void C_fcall f_2137(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2140)
static void C_fcall f_2140(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2143)
static void C_fcall f_2143(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_fcall f_2146(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4451)
static void C_ccall f_4451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2152)
static void C_fcall f_2152(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4436)
static void C_ccall f_4436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4439)
static void C_ccall f_4439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4442)
static void C_ccall f_4442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2158)
static void C_fcall f_2158(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4429)
static void C_ccall f_4429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2161)
static void C_ccall f_2161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2164)
static void C_ccall f_2164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4384)
static void C_ccall f_4384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4378)
static void C_ccall f_4378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2170)
static void C_ccall f_2170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2173)
static void C_ccall f_2173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4351)
static void C_ccall f_4351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4354)
static void C_ccall f_4354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4357)
static void C_ccall f_4357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4360)
static void C_ccall f_4360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2176)
static void C_ccall f_2176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4312)
static void C_fcall f_4312(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4341)
static void C_ccall f_4341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4306)
static void C_ccall f_4306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2182)
static void C_ccall f_2182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2185)
static void C_ccall f_2185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4255)
static void C_ccall f_4255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4257)
static void C_fcall f_4257(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4286)
static void C_ccall f_4286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2192)
static void C_fcall f_2192(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2195)
static void C_fcall f_2195(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2198)
static void C_fcall f_2198(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2201)
static void C_fcall f_2201(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4152)
static void C_fcall f_4152(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4166)
static void C_ccall f_4166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4191)
static void C_ccall f_4191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4196)
static void C_ccall f_4196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4224)
static void C_ccall f_4224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4062)
static void C_ccall f_4062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4067)
static void C_fcall f_4067(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4081)
static void C_ccall f_4081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4106)
static void C_ccall f_4106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4139)
static void C_ccall f_4139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2204)
static void C_ccall f_2204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4056)
static void C_ccall f_4056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4048)
static void C_ccall f_4048(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4023)
static void C_ccall f_4023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4025)
static void C_fcall f_4025(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4035)
static void C_ccall f_4035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2207)
static void C_ccall f_2207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2214)
static void C_ccall f_2214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2217)
static void C_ccall f_2217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2220)
static void C_ccall f_2220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3986)
static void C_fcall f_3986(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2223)
static void C_ccall f_2223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2227)
static void C_ccall f_2227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2235)
static void C_ccall f_2235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2239)
static void C_ccall f_2239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3949)
static void C_ccall f_3949(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3951)
static void C_fcall f_3951(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3980)
static void C_ccall f_3980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2242)
static void C_ccall f_2242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3912)
static void C_fcall f_3912(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3941)
static void C_ccall f_3941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3906)
static void C_ccall f_3906(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3850)
static void C_ccall f_3850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3852)
static void C_fcall f_3852(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3846)
static void C_ccall f_3846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2246)
static void C_ccall f_2246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2250)
static void C_ccall f_2250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2253)
static void C_fcall f_2253(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2257)
static void C_ccall f_2257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3818)
static void C_ccall f_3818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3811)
static void C_ccall f_3811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2265)
static void C_ccall f_2265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2269)
static void C_ccall f_2269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3784)
static void C_ccall f_3784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2273)
static void C_ccall f_2273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2284)
static void C_ccall f_2284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2287)
static void C_fcall f_2287(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2290)
static void C_ccall f_2290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3743)
static void C_ccall f_3743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2317)
static void C_fcall f_2317(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2345)
static void C_ccall f_2345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2351)
static void C_ccall f_2351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2355)
static void C_ccall f_2355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2372)
static void C_ccall f_2372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3711)
static void C_ccall f_3711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3719)
static void C_ccall f_3719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2381)
static void C_ccall f_2381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3556)
static void C_fcall f_3556(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3655)
static void C_ccall f_3655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3704)
static void C_ccall f_3704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3672)
static void C_ccall f_3672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3676)
static void C_ccall f_3676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3681)
static void C_fcall f_3681(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3702)
static void C_ccall f_3702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3667)
static void C_ccall f_3667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3658)
static void C_ccall f_3658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3616)
static void C_fcall f_3616(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3645)
static void C_ccall f_3645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3571)
static void C_ccall f_3571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3575)
static void C_ccall f_3575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3581)
static void C_fcall f_3581(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3610)
static void C_ccall f_3610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3547)
static void C_ccall f_3547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3551)
static void C_ccall f_3551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2387)
static void C_ccall f_2387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2390)
static void C_ccall f_2390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3505)
static void C_ccall f_3505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3511)
static void C_fcall f_3511(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3509)
static void C_ccall f_3509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2393)
static void C_fcall f_2393(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2396)
static void C_ccall f_2396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3482)
static void C_ccall f_3482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3502)
static void C_ccall f_3502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2402)
static void C_fcall f_2402(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3440)
static void C_ccall f_3440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3442)
static void C_fcall f_3442(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2405)
static void C_ccall f_2405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3374)
static void C_fcall f_3374(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3180)
static void C_ccall f_3180(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3330)
static void C_fcall f_3330(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3184)
static void C_ccall f_3184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3188)
static void C_fcall f_3188(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3207)
static void C_fcall f_3207(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3192)
static void C_ccall f_3192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2414)
static void C_ccall f_2414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3119)
static void C_ccall f_3119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3124)
static void C_fcall f_3124(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3136)
static void C_ccall f_3136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3139)
static void C_ccall f_3139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3142)
static void C_ccall f_3142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3145)
static void C_ccall f_3145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3159)
static void C_ccall f_3159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2417)
static void C_ccall f_2417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3113)
static void C_ccall f_3113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2420)
static void C_ccall f_2420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3107)
static void C_ccall f_3107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2426)
static void C_ccall f_2426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2434)
static void C_ccall f_2434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2437)
static void C_ccall f_2437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2440)
static void C_ccall f_2440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2443)
static void C_ccall f_2443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3050)
static void C_fcall f_3050(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3079)
static void C_ccall f_3079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3031)
static void C_ccall f_3031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2457)
static void C_ccall f_2457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2460)
static void C_ccall f_2460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2977)
static void C_ccall f_2977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3017)
static void C_ccall f_3017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3009)
static void C_ccall f_3009(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2980)
static void C_ccall f_2980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2988)
static void C_ccall f_2988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2991)
static void C_ccall f_2991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2463)
static void C_fcall f_2463(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2968)
static void C_ccall f_2968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2971)
static void C_ccall f_2971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2956)
static void C_ccall f_2956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2959)
static void C_ccall f_2959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2466)
static void C_fcall f_2466(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2944)
static void C_ccall f_2944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2469)
static void C_ccall f_2469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2472)
static void C_ccall f_2472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2901)
static void C_fcall f_2901(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2930)
static void C_ccall f_2930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2899)
static void C_ccall f_2899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2844)
static void C_ccall f_2844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_fcall f_2846(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2884)
static void C_ccall f_2884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2854)
static void C_fcall f_2854(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2877)
static void C_ccall f_2877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2858)
static void C_ccall f_2858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2475)
static void C_ccall f_2475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2478)
static void C_ccall f_2478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2808)
static void C_fcall f_2808(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2826)
static void C_ccall f_2826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2816)
static void C_fcall f_2816(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2820)
static void C_ccall f_2820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2487)
static void C_ccall f_2487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2493)
static void C_ccall f_2493(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2496)
static void C_ccall f_2496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2499)
static void C_ccall f_2499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2504)
static void C_fcall f_2504(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2511)
static void C_ccall f_2511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2758)
static void C_ccall f_2758(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2761)
static void C_ccall f_2761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2514)
static void C_ccall f_2514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2518)
static void C_ccall f_2518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2521)
static void C_ccall f_2521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2524)
static void C_ccall f_2524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2616)
static void C_ccall f_2616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2619)
static void C_ccall f_2619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2632)
static void C_ccall f_2632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2638)
static void C_ccall f_2638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2641)
static void C_ccall f_2641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2644)
static void C_ccall f_2644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2658)
static void C_ccall f_2658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2662)
static void C_ccall f_2662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2668)
static void C_ccall f_2668(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2671)
static void C_ccall f_2671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2674)
static void C_ccall f_2674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2680)
static void C_ccall f_2680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f5154)
static void C_ccall f5154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2699)
static void C_ccall f_2699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2683)
static void C_ccall f_2683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2686)
static void C_ccall f_2686(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2548)
static void C_ccall f_2548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2570)
static void C_ccall f_2570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2587)
static void C_ccall f_2587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2599)
static void C_ccall f_2599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2336)
static void C_ccall f_2336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2329)
static void C_ccall f_2329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1982)
static void C_fcall f_1982(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2012)
static void C_fcall f_2012(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2007)
static void C_fcall f_2007(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1984)
static void C_fcall f_1984(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1988)
static void C_ccall f_1988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1976)
static void C_fcall f_1976(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1947)
static void C_fcall f_1947(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1957)
static void C_ccall f_1957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1960)
static void C_ccall f_1960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1963)
static void C_ccall f_1963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1937)
static C_word C_fcall f_1937(C_word t0);
C_noret_decl(f_1902)
static void C_fcall f_1902(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1908)
static void C_fcall f_1908(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1916)
static void C_fcall f_1916(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1924)
static void C_ccall f_1924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1822)
static void C_fcall f_1822(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1871)
static void C_ccall f_1871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1863)
static void C_ccall f_1863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1832)
static void C_ccall f_1832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1773)
static void C_ccall f_1773(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1780)
static void C_ccall f_1780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1786)
static void C_fcall f_1786(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1801)
static void C_ccall f_1801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1797)
static void C_ccall f_1797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1783)
static void C_ccall f_1783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1819)
static void C_ccall f_1819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1730)
static void C_fcall f_1730(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1737)
static void C_ccall f_1737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1742)
static void C_fcall f_1742(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1754)
static void C_ccall f_1754(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1760)
static void C_ccall f_1760(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1706)
static void C_fcall f_1706(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1716)
static void C_ccall f_1716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1719)
static void C_ccall f_1719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1722)
static void C_ccall f_1722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1725)
static void C_ccall f_1725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1684)
static void C_fcall f_1684(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1691)
static void C_ccall f_1691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1704)
static void C_ccall f_1704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1660)
static void C_fcall f_1660(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1664)
static void C_ccall f_1664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1673)
static void C_ccall f_1673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1676)
static void C_ccall f_1676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1679)
static void C_ccall f_1679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1645)
static void C_fcall f_1645(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1652)
static void C_ccall f_1652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1537)
static void C_fcall f_1537(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_4789)
static void C_fcall trf_4789(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4789(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4789(t0,t1,t2);}

C_noret_decl(trf_4748)
static void C_fcall trf_4748(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4748(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4748(t0,t1,t2);}

C_noret_decl(trf_1595)
static void C_fcall trf_1595(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1595(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1595(t0,t1);}

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

C_noret_decl(trf_4658)
static void C_fcall trf_4658(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4658(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4658(t0,t1,t2);}

C_noret_decl(trf_4600)
static void C_fcall trf_4600(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4600(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4600(t0,t1,t2);}

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

C_noret_decl(trf_2094)
static void C_fcall trf_2094(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2094(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2094(t0,t1);}

C_noret_decl(trf_2100)
static void C_fcall trf_2100(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2100(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2100(t0,t1);}

C_noret_decl(trf_2103)
static void C_fcall trf_2103(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2103(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2103(t0,t1);}

C_noret_decl(trf_2106)
static void C_fcall trf_2106(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2106(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2106(t0,t1);}

C_noret_decl(trf_2109)
static void C_fcall trf_2109(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2109(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2109(t0,t1);}

C_noret_decl(trf_2112)
static void C_fcall trf_2112(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2112(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2112(t0,t1);}

C_noret_decl(trf_4503)
static void C_fcall trf_4503(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4503(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4503(t0,t1,t2);}

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

C_noret_decl(trf_2128)
static void C_fcall trf_2128(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2128(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2128(t0,t1);}

C_noret_decl(trf_2131)
static void C_fcall trf_2131(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2131(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2131(t0,t1);}

C_noret_decl(trf_2134)
static void C_fcall trf_2134(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2134(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2134(t0,t1);}

C_noret_decl(trf_2137)
static void C_fcall trf_2137(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2137(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2137(t0,t1);}

C_noret_decl(trf_2140)
static void C_fcall trf_2140(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2140(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2140(t0,t1);}

C_noret_decl(trf_2143)
static void C_fcall trf_2143(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2143(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2143(t0,t1);}

C_noret_decl(trf_2146)
static void C_fcall trf_2146(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2146(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2146(t0,t1);}

C_noret_decl(trf_2152)
static void C_fcall trf_2152(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2152(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2152(t0,t1);}

C_noret_decl(trf_2158)
static void C_fcall trf_2158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2158(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2158(t0,t1);}

C_noret_decl(trf_4312)
static void C_fcall trf_4312(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4312(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4312(t0,t1,t2);}

C_noret_decl(trf_4257)
static void C_fcall trf_4257(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4257(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4257(t0,t1,t2);}

C_noret_decl(trf_2192)
static void C_fcall trf_2192(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2192(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2192(t0,t1);}

C_noret_decl(trf_2195)
static void C_fcall trf_2195(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2195(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2195(t0,t1);}

C_noret_decl(trf_2198)
static void C_fcall trf_2198(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2198(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2198(t0,t1);}

C_noret_decl(trf_2201)
static void C_fcall trf_2201(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2201(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2201(t0,t1);}

C_noret_decl(trf_4152)
static void C_fcall trf_4152(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4152(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4152(t0,t1,t2);}

C_noret_decl(trf_4067)
static void C_fcall trf_4067(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4067(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4067(t0,t1,t2);}

C_noret_decl(trf_4025)
static void C_fcall trf_4025(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4025(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4025(t0,t1,t2);}

C_noret_decl(trf_3986)
static void C_fcall trf_3986(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3986(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3986(t0,t1,t2);}

C_noret_decl(trf_3951)
static void C_fcall trf_3951(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3951(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3951(t0,t1,t2);}

C_noret_decl(trf_3912)
static void C_fcall trf_3912(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3912(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3912(t0,t1,t2);}

C_noret_decl(trf_3852)
static void C_fcall trf_3852(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3852(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3852(t0,t1,t2);}

C_noret_decl(trf_2253)
static void C_fcall trf_2253(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2253(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2253(t0,t1);}

C_noret_decl(trf_2287)
static void C_fcall trf_2287(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2287(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2287(t0,t1);}

C_noret_decl(trf_2317)
static void C_fcall trf_2317(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2317(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2317(t0,t1);}

C_noret_decl(trf_3556)
static void C_fcall trf_3556(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3556(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3556(t0,t1,t2);}

C_noret_decl(trf_3681)
static void C_fcall trf_3681(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3681(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3681(t0,t1,t2);}

C_noret_decl(trf_3616)
static void C_fcall trf_3616(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3616(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3616(t0,t1,t2);}

C_noret_decl(trf_3581)
static void C_fcall trf_3581(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3581(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3581(t0,t1,t2);}

C_noret_decl(trf_3511)
static void C_fcall trf_3511(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3511(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3511(t0,t1,t2);}

C_noret_decl(trf_2393)
static void C_fcall trf_2393(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2393(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2393(t0,t1);}

C_noret_decl(trf_2402)
static void C_fcall trf_2402(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2402(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2402(t0,t1);}

C_noret_decl(trf_3442)
static void C_fcall trf_3442(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3442(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3442(t0,t1,t2);}

C_noret_decl(trf_3374)
static void C_fcall trf_3374(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3374(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3374(t0,t1,t2);}

C_noret_decl(trf_3330)
static void C_fcall trf_3330(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3330(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3330(t0,t1,t2);}

C_noret_decl(trf_3188)
static void C_fcall trf_3188(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3188(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3188(t0,t1);}

C_noret_decl(trf_3207)
static void C_fcall trf_3207(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3207(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3207(t0,t1,t2);}

C_noret_decl(trf_3124)
static void C_fcall trf_3124(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3124(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3124(t0,t1,t2);}

C_noret_decl(trf_3050)
static void C_fcall trf_3050(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3050(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3050(t0,t1,t2);}

C_noret_decl(trf_2463)
static void C_fcall trf_2463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2463(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2463(t0,t1);}

C_noret_decl(trf_2466)
static void C_fcall trf_2466(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2466(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2466(t0,t1);}

C_noret_decl(trf_2901)
static void C_fcall trf_2901(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2901(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2901(t0,t1,t2);}

C_noret_decl(trf_2846)
static void C_fcall trf_2846(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2846(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2846(t0,t1,t2);}

C_noret_decl(trf_2854)
static void C_fcall trf_2854(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2854(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2854(t0,t1,t2);}

C_noret_decl(trf_2808)
static void C_fcall trf_2808(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2808(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2808(t0,t1,t2);}

C_noret_decl(trf_2816)
static void C_fcall trf_2816(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2816(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2816(t0,t1,t2);}

C_noret_decl(trf_2504)
static void C_fcall trf_2504(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2504(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2504(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1982)
static void C_fcall trf_1982(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1982(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1982(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2012)
static void C_fcall trf_2012(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2012(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2012(t0,t1);}

C_noret_decl(trf_2007)
static void C_fcall trf_2007(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2007(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2007(t0,t1,t2);}

C_noret_decl(trf_1984)
static void C_fcall trf_1984(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1984(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1984(t0,t1,t2,t3);}

C_noret_decl(trf_1976)
static void C_fcall trf_1976(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1976(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1976(t0,t1,t2);}

C_noret_decl(trf_1947)
static void C_fcall trf_1947(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1947(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1947(t0,t1,t2);}

C_noret_decl(trf_1902)
static void C_fcall trf_1902(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1902(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1902(t0,t1,t2);}

C_noret_decl(trf_1908)
static void C_fcall trf_1908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1908(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1908(t0,t1,t2);}

C_noret_decl(trf_1916)
static void C_fcall trf_1916(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1916(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1916(t0,t1,t2);}

C_noret_decl(trf_1822)
static void C_fcall trf_1822(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1822(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1822(t0,t1);}

C_noret_decl(trf_1786)
static void C_fcall trf_1786(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1786(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1786(t0,t1);}

C_noret_decl(trf_1730)
static void C_fcall trf_1730(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1730(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1730(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1742)
static void C_fcall trf_1742(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1742(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1742(t0,t1,t2);}

C_noret_decl(trf_1706)
static void C_fcall trf_1706(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1706(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_1706(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1684)
static void C_fcall trf_1684(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1684(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1684(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1660)
static void C_fcall trf_1660(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1660(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1660(t0,t1,t2,t3);}

C_noret_decl(trf_1645)
static void C_fcall trf_1645(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1645(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1645(t0,t1,t2,t3);}

C_noret_decl(trf_1537)
static void C_fcall trf_1537(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1537(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1537(t0,t1);}

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
if(!C_demand_2(3175)){
C_save(t1);
C_rereclaim2(3175*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,409);
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
lf[29]=C_h_intern(&lf[29],8,"unboxing");
lf[30]=C_h_intern(&lf[30],7,"nursery");
lf[31]=C_h_intern(&lf[31],10,"stack-size");
lf[32]=C_h_intern(&lf[32],19,"\003sysstandard-output");
lf[33]=C_h_intern(&lf[33],16,"\003sysflush-output");
lf[34]=C_h_intern(&lf[34],19,"\003syswrite-char/port");
lf[35]=C_h_intern(&lf[35],7,"fprintf");
lf[36]=C_h_intern(&lf[36],26,"\010compilerdebugging-chicken");
lf[37]=C_h_intern(&lf[37],7,"display");
lf[38]=C_decode_literal(C_heaptop,"\376B\000\000\010pass: ~a");
lf[39]=C_h_intern(&lf[39],19,"\010compilerdump-nodes");
lf[40]=C_h_intern(&lf[40],12,"pretty-print");
lf[41]=C_h_intern(&lf[41],30,"\010compilerbuild-expression-tree");
lf[42]=C_h_intern(&lf[42],34,"\010compilerdisplay-analysis-database");
lf[43]=C_h_intern(&lf[43],5,"write");
lf[44]=C_decode_literal(C_heaptop,"\376B\000\000\013(iteration ");
lf[45]=C_h_intern(&lf[45],7,"newline");
lf[46]=C_h_intern(&lf[46],26,"\003sysdefault-read-info-hook");
lf[47]=C_h_intern(&lf[47],19,"\003syshash-table-set!");
lf[48]=C_h_intern(&lf[48],24,"\003sysline-number-database");
lf[49]=C_h_intern(&lf[49],10,"alist-cons");
lf[50]=C_h_intern(&lf[50],18,"\003syshash-table-ref");
lf[51]=C_h_intern(&lf[51],9,"list-info");
lf[52]=C_decode_literal(C_heaptop,"\376B\000\000\033invalid numeric argument ~S");
lf[53]=C_h_intern(&lf[53],9,"substring");
lf[54]=C_decode_literal(C_heaptop,"\376B\000\000\003: \011");
lf[55]=C_decode_literal(C_heaptop,"\376B\000\000\030milliseconds needed for ");
lf[56]=C_h_intern(&lf[56],8,"\003sysread");
lf[57]=C_h_intern(&lf[57],12,"\010compilerget");
lf[58]=C_h_intern(&lf[58],13,"\010compilerput!");
lf[59]=C_h_intern(&lf[59],27,"\010compileranalyze-expression");
lf[60]=C_h_intern(&lf[60],9,"\003syserror");
lf[61]=C_h_intern(&lf[61],1,"D");
lf[62]=C_h_intern(&lf[62],25,"\010compilerimport-libraries");
lf[63]=C_h_intern(&lf[63],26,"\010compilerdisabled-warnings");
lf[64]=C_h_intern(&lf[64],16,"emit-inline-file");
lf[65]=C_h_intern(&lf[65],12,"inline-limit");
lf[66]=C_h_intern(&lf[66],21,"\010compilerverbose-mode");
lf[67]=C_h_intern(&lf[67],31,"\003sysread-error-with-line-number");
lf[68]=C_h_intern(&lf[68],21,"\003sysinclude-pathnames");
lf[69]=C_h_intern(&lf[69],19,"\000compiler-extension");
lf[70]=C_h_intern(&lf[70],12,"\003sysfeatures");
lf[71]=C_h_intern(&lf[71],10,"\000compiling");
lf[72]=C_h_intern(&lf[72],28,"\003sysexplicit-library-modules");
lf[73]=C_h_intern(&lf[73],25,"\010compilertarget-heap-size");
lf[74]=C_h_intern(&lf[74],33,"\010compilertarget-initial-heap-size");
lf[75]=C_h_intern(&lf[75],27,"\010compilertarget-heap-growth");
lf[76]=C_h_intern(&lf[76],30,"\010compilertarget-heap-shrinkage");
lf[77]=C_h_intern(&lf[77],26,"\010compilertarget-stack-size");
lf[78]=C_h_intern(&lf[78],8,"no-trace");
lf[79]=C_h_intern(&lf[79],24,"\010compileremit-trace-info");
lf[80]=C_h_intern(&lf[80],29,"disable-stack-overflow-checks");
lf[81]=C_h_intern(&lf[81],40,"\010compilerdisable-stack-overflow-checking");
lf[82]=C_h_intern(&lf[82],7,"version");
lf[83]=C_h_intern(&lf[83],22,"\010compilerprint-version");
lf[84]=C_h_intern(&lf[84],4,"help");
lf[85]=C_h_intern(&lf[85],20,"\010compilerprint-usage");
lf[86]=C_h_intern(&lf[86],7,"release");
lf[87]=C_h_intern(&lf[87],15,"chicken-version");
lf[88]=C_h_intern(&lf[88],24,"\010compilersource-filename");
lf[89]=C_h_intern(&lf[89],28,"\010compilerprofile-lambda-list");
lf[90]=C_h_intern(&lf[90],31,"\010compilerline-number-database-2");
lf[91]=C_h_intern(&lf[91],4,"node");
lf[92]=C_h_intern(&lf[92],6,"lambda");
lf[93]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\377\016\376\377\016");
lf[94]=C_h_intern(&lf[94],23,"\010compilerconstant-table");
lf[95]=C_h_intern(&lf[95],21,"\010compilerinline-table");
lf[96]=C_h_intern(&lf[96],23,"\010compilerfirst-analysis");
lf[97]=C_h_intern(&lf[97],41,"\010compilerperform-high-level-optimizations");
lf[98]=C_h_intern(&lf[98],37,"\010compilerinline-substitutions-enabled");
lf[99]=C_h_intern(&lf[99],22,"optimize-leaf-routines");
lf[100]=C_decode_literal(C_heaptop,"\376B\000\000\031leaf routine optimization");
lf[101]=C_h_intern(&lf[101],34,"\010compilertransform-direct-lambdas!");
lf[102]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[103]=C_h_intern(&lf[103],4,"leaf");
lf[104]=C_h_intern(&lf[104],18,"\010compilerdebugging");
lf[105]=C_h_intern(&lf[105],1,"p");
lf[106]=C_decode_literal(C_heaptop,"\376B\000\000\025rewritings enabled...");
lf[107]=C_decode_literal(C_heaptop,"\376B\000\000\023optimized-iteration");
lf[108]=C_h_intern(&lf[108],1,"5");
lf[109]=C_decode_literal(C_heaptop,"\376B\000\000\014optimization");
lf[110]=C_decode_literal(C_heaptop,"\376B\000\000\021optimization pass");
lf[111]=C_h_intern(&lf[111],36,"\010compilerprepare-for-code-generation");
lf[112]=C_decode_literal(C_heaptop,"\376B\000\000\025compilation finished.");
lf[113]=C_h_intern(&lf[113],30,"\010compilercompiler-cleanup-hook");
lf[114]=C_h_intern(&lf[114],1,"t");
lf[115]=C_h_intern(&lf[115],17,"\003sysdisplay-times");
lf[116]=C_h_intern(&lf[116],14,"\003sysstop-timer");
lf[117]=C_decode_literal(C_heaptop,"\376B\000\000\017code generation");
lf[118]=C_h_intern(&lf[118],17,"close-output-port");
lf[119]=C_h_intern(&lf[119],22,"\010compilergenerate-code");
lf[120]=C_decode_literal(C_heaptop,"\376B\000\000\023generating `~A\047 ...");
lf[121]=C_h_intern(&lf[121],16,"open-output-file");
lf[122]=C_h_intern(&lf[122],19,"current-output-port");
lf[123]=C_decode_literal(C_heaptop,"\376B\000\000\013preparation");
lf[124]=C_h_intern(&lf[124],4,"exit");
lf[125]=C_decode_literal(C_heaptop,"\376B\000\000\010unboxing");
lf[126]=C_h_intern(&lf[126],1,"U");
lf[127]=C_decode_literal(C_heaptop,"\376B\000\000\010unboxing");
lf[128]=C_h_intern(&lf[128],26,"\010compilerperform-unboxing!");
lf[129]=C_decode_literal(C_heaptop,"\376B\000\000\023performing unboxing");
lf[130]=C_decode_literal(C_heaptop,"\376B\000\000\021closure-converted");
lf[131]=C_h_intern(&lf[131],1,"9");
lf[132]=C_h_intern(&lf[132],20,"\003syswarnings-enabled");
lf[133]=C_decode_literal(C_heaptop,"\376B\000\000#(don\047t worry - still compiling...)\012");
lf[134]=C_decode_literal(C_heaptop,"\376B\000\000\016final-analysis");
lf[135]=C_h_intern(&lf[135],1,"8");
lf[136]=C_decode_literal(C_heaptop,"\376B\000\000\022closure conversion");
lf[137]=C_h_intern(&lf[137],35,"\010compilerperform-closure-conversion");
lf[138]=C_h_intern(&lf[138],27,"\010compilerinline-output-file");
lf[139]=C_h_intern(&lf[139],32,"\010compileremit-global-inline-file");
lf[140]=C_decode_literal(C_heaptop,"\376B\000\000&Generating global inline file `~a\047 ...");
lf[141]=C_decode_literal(C_heaptop,"\376B\000\000\011optimized");
lf[142]=C_h_intern(&lf[142],1,"7");
lf[143]=C_h_intern(&lf[143],1,"s");
lf[144]=C_h_intern(&lf[144],33,"\010compilerprint-program-statistics");
lf[145]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[146]=C_h_intern(&lf[146],1,"4");
lf[147]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[148]=C_h_intern(&lf[148],1,"v");
lf[149]=C_h_intern(&lf[149],25,"\010compilerdump-global-refs");
lf[150]=C_h_intern(&lf[150],1,"d");
lf[151]=C_h_intern(&lf[151],29,"\010compilerdump-defined-globals");
lf[152]=C_h_intern(&lf[152],1,"u");
lf[153]=C_h_intern(&lf[153],31,"\010compilerdump-undefined-globals");
lf[154]=C_h_intern(&lf[154],3,"opt");
lf[155]=C_decode_literal(C_heaptop,"\376B\000\000\003cps");
lf[156]=C_h_intern(&lf[156],1,"3");
lf[157]=C_decode_literal(C_heaptop,"\376B\000\000\016cps conversion");
lf[158]=C_h_intern(&lf[158],31,"\010compilerperform-cps-conversion");
lf[159]=C_h_intern(&lf[159],6,"unsafe");
lf[160]=C_h_intern(&lf[160],34,"\010compilerscan-toplevel-assignments");
lf[161]=C_h_intern(&lf[161],24,"\010compilerinline-globally");
lf[162]=C_h_intern(&lf[162],23,"\010compilerinline-locally");
lf[163]=C_h_intern(&lf[163],25,"\010compilerload-inline-file");
lf[164]=C_decode_literal(C_heaptop,"\376B\000\000\032Loading inline file ~a ...");
lf[165]=C_h_intern(&lf[165],19,"consult-inline-file");
lf[166]=C_h_intern(&lf[166],28,"\010compilerenable-inline-files");
lf[167]=C_decode_literal(C_heaptop,"\376B\000\000\032Loading inline file ~a ...");
lf[168]=C_h_intern(&lf[168],12,"file-exists\077");
lf[169]=C_h_intern(&lf[169],28,"\003sysresolve-include-filename");
lf[170]=C_h_intern(&lf[170],13,"make-pathname");
lf[171]=C_decode_literal(C_heaptop,"\376B\000\000\006inline");
lf[172]=C_h_intern(&lf[172],14,"symbol->string");
lf[173]=C_h_intern(&lf[173],11,"concatenate");
lf[174]=C_h_intern(&lf[174],3,"cdr");
lf[175]=C_h_intern(&lf[175],2,"pp");
lf[176]=C_h_intern(&lf[176],1,"M");
lf[177]=C_decode_literal(C_heaptop,"\376B\000\000\017; requirements:");
lf[178]=C_h_intern(&lf[178],12,"vector->list");
lf[179]=C_h_intern(&lf[179],26,"\010compilerfile-requirements");
lf[180]=C_h_intern(&lf[180],26,"\010compilerdo-lambda-lifting");
lf[181]=C_decode_literal(C_heaptop,"\376B\000\000\015lambda lifted");
lf[182]=C_h_intern(&lf[182],1,"L");
lf[183]=C_decode_literal(C_heaptop,"\376B\000\000\016lambda lifting");
lf[184]=C_h_intern(&lf[184],32,"\010compilerperform-lambda-lifting!");
lf[185]=C_h_intern(&lf[185],22,"\010compilerdo-scrutinize");
lf[186]=C_decode_literal(C_heaptop,"\376B\000\000\032pre-analysis (lambda-lift)");
lf[187]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[188]=C_h_intern(&lf[188],1,"0");
lf[189]=C_h_intern(&lf[189],4,"lift");
lf[190]=C_decode_literal(C_heaptop,"\376B\000\000\010scrutiny");
lf[191]=C_h_intern(&lf[191],19,"\010compilerscrutinize");
lf[192]=C_decode_literal(C_heaptop,"\376B\000\000\023performing scrutiny");
lf[193]=C_decode_literal(C_heaptop,"\376B\000\000\014pre-analysis");
lf[194]=C_decode_literal(C_heaptop,"\376B\000\000\010analysis");
lf[195]=C_h_intern(&lf[195],8,"scrutiny");
lf[196]=C_h_intern(&lf[196],27,"\010compilerload-type-database");
lf[197]=C_h_intern(&lf[197],12,"\003sysfor-each");
lf[198]=C_h_intern(&lf[198],5,"types");
lf[199]=C_h_intern(&lf[199],17,"ignore-repository");
lf[200]=C_decode_literal(C_heaptop,"\376B\000\000\010types.db");
lf[201]=C_h_intern(&lf[201],37,"\010compilerinitialize-analysis-database");
lf[202]=C_decode_literal(C_heaptop,"\376B\000\000\021initial node tree");
lf[203]=C_h_intern(&lf[203],1,"T");
lf[204]=C_h_intern(&lf[204],25,"\010compilerbuild-node-graph");
lf[205]=C_h_intern(&lf[205],32,"\010compilercanonicalize-begin-body");
lf[206]=C_decode_literal(C_heaptop,"\376B\000\000\011user pass");
lf[207]=C_decode_literal(C_heaptop,"\376B\000\000\014User pass...");
lf[208]=C_h_intern(&lf[208],12,"check-syntax");
lf[209]=C_decode_literal(C_heaptop,"\376B\000\000\015canonicalized");
lf[210]=C_h_intern(&lf[210],1,"2");
lf[211]=C_decode_literal(C_heaptop,"\376B\000\000\020canonicalization");
lf[212]=C_h_intern(&lf[212],25,"\010compilercompiler-warning");
lf[213]=C_h_intern(&lf[213],5,"style");
lf[214]=C_decode_literal(C_heaptop,"\376B\000\000Icompiling extensions in unsafe mode is bad practice and should be avoided");
lf[215]=C_h_intern(&lf[215],8,"feature\077");
lf[216]=C_h_intern(&lf[216],19,"compiling-extension");
lf[217]=C_h_intern(&lf[217],18,"\010compilerunit-name");
lf[218]=C_h_intern(&lf[218],5,"usage");
lf[219]=C_decode_literal(C_heaptop,"\376B\000\000*library unit `~a\047 compiled in dynamic mode");
lf[220]=C_h_intern(&lf[220],37,"\010compilerdisplay-line-number-database");
lf[221]=C_h_intern(&lf[221],1,"n");
lf[222]=C_decode_literal(C_heaptop,"\376B\000\000\025line number database:");
lf[223]=C_h_intern(&lf[223],32,"\010compilerdisplay-real-name-table");
lf[224]=C_h_intern(&lf[224],1,"N");
lf[225]=C_decode_literal(C_heaptop,"\376B\000\000\020real name table:");
lf[226]=C_decode_literal(C_heaptop,"\376B\000\000\002\011\011");
lf[227]=C_decode_literal(C_heaptop,"\376B\000\000\002  ");
lf[228]=C_h_intern(&lf[228],35,"\010compilercompiler-syntax-statistics");
lf[229]=C_h_intern(&lf[229],1,"S");
lf[230]=C_decode_literal(C_heaptop,"\376B\000\000\030applied compiler syntax:");
lf[231]=C_h_intern(&lf[231],6,"append");
lf[232]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016\376\377\016");
lf[233]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016\376\377\016");
lf[234]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\016\004coreundefined\376\377\016\376\377\016");
lf[235]=C_h_intern(&lf[235],5,"quote");
lf[236]=C_h_intern(&lf[236],33,"\010compilerprofile-info-vector-name");
lf[237]=C_h_intern(&lf[237],28,"\003sysset-profile-info-vector!");
lf[238]=C_h_intern(&lf[238],21,"\010compileremit-profile");
lf[239]=C_h_intern(&lf[239],25,"\003sysregister-profile-info");
lf[240]=C_h_intern(&lf[240],4,"set!");
lf[241]=C_h_intern(&lf[241],13,"\004corecallunit");
lf[242]=C_h_intern(&lf[242],19,"\010compilerused-units");
lf[243]=C_h_intern(&lf[243],28,"\010compilerimmutable-constants");
lf[244]=C_h_intern(&lf[244],6,"gensym");
lf[245]=C_h_intern(&lf[245],32,"\010compilercanonicalize-expression");
lf[246]=C_h_intern(&lf[246],4,"uses");
lf[247]=C_h_intern(&lf[247],7,"declare");
lf[248]=C_h_intern(&lf[248],10,"\003sysappend");
lf[249]=C_decode_literal(C_heaptop,"\376B\000\000\006source");
lf[250]=C_h_intern(&lf[250],1,"1");
lf[251]=C_decode_literal(C_heaptop,"\376B\000\000\032User preprocessing pass...");
lf[252]=C_decode_literal(C_heaptop,"\376B\000\000\021User read pass...");
lf[253]=C_h_intern(&lf[253],21,"\010compilerstring->expr");
lf[254]=C_h_intern(&lf[254],7,"reverse");
lf[255]=C_h_intern(&lf[255],27,"\003syscurrent-source-filename");
lf[256]=C_h_intern(&lf[256],33,"\010compilerclose-checked-input-file");
lf[257]=C_h_intern(&lf[257],16,"\003sysdynamic-wind");
lf[258]=C_h_intern(&lf[258],34,"\010compilercheck-and-open-input-file");
lf[259]=C_h_intern(&lf[259],8,"epilogue");
lf[260]=C_h_intern(&lf[260],8,"prologue");
lf[261]=C_h_intern(&lf[261],8,"postlude");
lf[262]=C_h_intern(&lf[262],7,"prelude");
lf[263]=C_h_intern(&lf[263],11,"make-vector");
lf[264]=C_h_intern(&lf[264],34,"\010compilerline-number-database-size");
lf[265]=C_h_intern(&lf[265],1,"r");
lf[266]=C_decode_literal(C_heaptop,"\376B\000\000\021target stack size");
lf[267]=C_decode_literal(C_heaptop,"\376B\000\000\020target heap size");
lf[268]=C_decode_literal(C_heaptop,"\376B\000\000\021debugging options");
lf[269]=C_decode_literal(C_heaptop,"\376B\000\000\007options");
lf[270]=C_decode_literal(C_heaptop,"\376B\000\000\022compiling `~a\047 ...");
lf[271]=C_decode_literal(C_heaptop,"\376B\000\0009\012Enter \042chicken -help\042 for information on how to use it.\012");
lf[272]=C_h_intern(&lf[272],5,"-help");
lf[273]=C_h_intern(&lf[273],1,"h");
lf[274]=C_h_intern(&lf[274],2,"-h");
lf[275]=C_h_intern(&lf[275],33,"\010compilerload-identifier-database");
lf[276]=C_decode_literal(C_heaptop,"\376B\000\000\012modules.db");
lf[277]=C_h_intern(&lf[277],18,"accumulate-profile");
lf[278]=C_h_intern(&lf[278],28,"\010compilerprofiled-procedures");
lf[279]=C_h_intern(&lf[279],3,"all");
lf[280]=C_decode_literal(C_heaptop,"\376B\000\000\024Generating ~aprofile");
lf[281]=C_decode_literal(C_heaptop,"\376B\000\000\014accumulated ");
lf[282]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[283]=C_h_intern(&lf[283],39,"\010compilerdefault-profiling-declarations");
lf[284]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376\003\000\000\002\376\001\000\000\004set!\376\003\000\000\002\376\001\000\000\027\003sysprofile-append-mode\376\003\000\000\002\376\377\006\001\376\377\016\376\377\016");
lf[285]=C_decode_literal(C_heaptop,"\376B\000\000\022debugging info: ~A");
lf[286]=C_decode_literal(C_heaptop,"\376B\000\000\011calltrace");
lf[287]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[288]=C_h_intern(&lf[288],21,"no-usual-integrations");
lf[289]=C_h_intern(&lf[289],17,"standard-bindings");
lf[290]=C_h_intern(&lf[290],34,"\010compilerdefault-standard-bindings");
lf[291]=C_h_intern(&lf[291],17,"extended-bindings");
lf[292]=C_h_intern(&lf[292],34,"\010compilerdefault-extended-bindings");
lf[293]=C_h_intern(&lf[293],1,"m");
lf[294]=C_h_intern(&lf[294],14,"set-gc-report!");
lf[295]=C_h_intern(&lf[295],42,"\010compilerdefault-default-target-stack-size");
lf[296]=C_h_intern(&lf[296],41,"\010compilerdefault-default-target-heap-size");
lf[297]=C_h_intern(&lf[297],14,"compile-syntax");
lf[298]=C_h_intern(&lf[298],25,"\003sysenable-runtime-macros");
lf[299]=C_h_intern(&lf[299],22,"\004corerequire-extension");
lf[300]=C_h_intern(&lf[300],14,"string->symbol");
lf[301]=C_h_intern(&lf[301],17,"require-extension");
lf[302]=C_h_intern(&lf[302],16,"static-extension");
lf[303]=C_h_intern(&lf[303],28,"\010compilerpostponed-initforms");
lf[304]=C_h_intern(&lf[304],6,"delete");
lf[305]=C_h_intern(&lf[305],3,"eq\077");
lf[306]=C_h_intern(&lf[306],4,"load");
lf[307]=C_h_intern(&lf[307],12,"load-verbose");
lf[308]=C_decode_literal(C_heaptop,"\376B\000\000\036Loading compiler extensions...");
lf[309]=C_h_intern(&lf[309],6,"extend");
lf[310]=C_h_intern(&lf[310],17,"register-feature!");
lf[311]=C_h_intern(&lf[311],12,"string-split");
lf[312]=C_decode_literal(C_heaptop,"\376B\000\000\001,");
lf[313]=C_h_intern(&lf[313],10,"append-map");
lf[314]=C_h_intern(&lf[314],7,"feature");
lf[315]=C_h_intern(&lf[315],38,"no-procedure-checks-for-usual-bindings");
lf[316]=C_h_intern(&lf[316],8,"\003sysput!");
lf[317]=C_h_intern(&lf[317],21,"\010compileralways-bound");
lf[318]=C_h_intern(&lf[318],34,"\010compileralways-bound-to-procedure");
lf[319]=C_h_intern(&lf[319],19,"no-procedure-checks");
lf[320]=C_h_intern(&lf[320],28,"\010compilerno-procedure-checks");
lf[321]=C_h_intern(&lf[321],15,"no-bound-checks");
lf[322]=C_h_intern(&lf[322],24,"\010compilerno-bound-checks");
lf[323]=C_h_intern(&lf[323],14,"no-argc-checks");
lf[324]=C_h_intern(&lf[324],23,"\010compilerno-argc-checks");
lf[325]=C_h_intern(&lf[325],20,"keep-shadowed-macros");
lf[326]=C_h_intern(&lf[326],33,"\010compilerundefine-shadowed-macros");
lf[327]=C_decode_literal(C_heaptop,"\376B\000\000(source- and output-filename are the same");
lf[328]=C_h_intern(&lf[328],23,"\010compilerchop-separator");
lf[329]=C_h_intern(&lf[329],12,"include-path");
lf[330]=C_decode_literal(C_heaptop,"\376\003\000\000\002\376B\000\000\014-r5rs-syntax\376\377\016");
lf[331]=C_h_intern(&lf[331],13,"symbol-escape");
lf[332]=C_h_intern(&lf[332],20,"parentheses-synonyms");
lf[333]=C_h_intern(&lf[333],5,"\000none");
lf[334]=C_h_intern(&lf[334],14,"case-sensitive");
lf[335]=C_decode_literal(C_heaptop,"\376B\000\000.Disabled the Chicken extensions to R5RS syntax");
lf[336]=C_h_intern(&lf[336],16,"no-symbol-escape");
lf[337]=C_decode_literal(C_heaptop,"\376B\000\000$Disabled support for escaped symbols");
lf[338]=C_h_intern(&lf[338],23,"no-parenthesis-synonyms");
lf[339]=C_h_intern(&lf[339],20,"parenthesis-synonyms");
lf[340]=C_decode_literal(C_heaptop,"\376B\000\000)Disabled support for parenthesis synonyms");
lf[341]=C_decode_literal(C_heaptop,"\376B\000\000\006prefix");
lf[342]=C_h_intern(&lf[342],7,"\000prefix");
lf[343]=C_decode_literal(C_heaptop,"\376B\000\000\004none");
lf[344]=C_decode_literal(C_heaptop,"\376B\000\000\006suffix");
lf[345]=C_h_intern(&lf[345],7,"\000suffix");
lf[346]=C_decode_literal(C_heaptop,"\376B\000\000+invalid argument to `-keyword-style\047 option");
lf[347]=C_h_intern(&lf[347],17,"compress-literals");
lf[348]=C_decode_literal(C_heaptop,"\376B\000\000+`the -compress-literals\047 option is obsolete");
lf[349]=C_h_intern(&lf[349],16,"case-insensitive");
lf[350]=C_decode_literal(C_heaptop,"\376B\000\000,Identifiers and symbols are case insensitive");
lf[351]=C_h_intern(&lf[351],24,"\010compilerinline-max-size");
lf[352]=C_decode_literal(C_heaptop,"\376B\000\0000invalid argument to `-inline-limit\047 option: `~A\047");
lf[353]=C_h_intern(&lf[353],26,"\010compilerlocal-definitions");
lf[354]=C_h_intern(&lf[354],6,"inline");
lf[355]=C_h_intern(&lf[355],30,"emit-external-prototypes-first");
lf[356]=C_h_intern(&lf[356],30,"\010compilerexternal-protos-first");
lf[357]=C_h_intern(&lf[357],5,"block");
lf[358]=C_h_intern(&lf[358],26,"\010compilerblock-compilation");
lf[359]=C_h_intern(&lf[359],17,"fixnum-arithmetic");
lf[360]=C_h_intern(&lf[360],11,"number-type");
lf[361]=C_h_intern(&lf[361],6,"fixnum");
lf[362]=C_h_intern(&lf[362],18,"disable-interrupts");
lf[363]=C_h_intern(&lf[363],28,"\010compilerinsert-timer-checks");
lf[364]=C_h_intern(&lf[364],10,"setup-mode");
lf[365]=C_h_intern(&lf[365],14,"\003syssetup-mode");
lf[366]=C_h_intern(&lf[366],16,"unsafe-libraries");
lf[367]=C_h_intern(&lf[367],27,"\010compileremit-unsafe-marker");
lf[368]=C_h_intern(&lf[368],11,"no-warnings");
lf[369]=C_decode_literal(C_heaptop,"\376B\000\000\025Warnings are disabled");
lf[370]=C_h_intern(&lf[370],15,"disable-warning");
lf[371]=C_h_intern(&lf[371],13,"inline-global");
lf[372]=C_h_intern(&lf[372],5,"local");
lf[373]=C_h_intern(&lf[373],18,"no-compiler-syntax");
lf[374]=C_h_intern(&lf[374],32,"\010compilercompiler-syntax-enabled");
lf[375]=C_h_intern(&lf[375],14,"no-lambda-info");
lf[376]=C_h_intern(&lf[376],26,"\010compileremit-closure-info");
lf[377]=C_h_intern(&lf[377],3,"raw");
lf[378]=C_h_intern(&lf[378],12,"emit-exports");
lf[379]=C_h_intern(&lf[379],7,"warning");
lf[380]=C_decode_literal(C_heaptop,"\376B\000\000(deprecated compiler option: emit-exports");
lf[381]=C_h_intern(&lf[381],1,"b");
lf[382]=C_h_intern(&lf[382],15,"\003sysstart-timer");
lf[383]=C_h_intern(&lf[383],10,"scrutinize");
lf[384]=C_h_intern(&lf[384],11,"lambda-lift");
lf[385]=C_h_intern(&lf[385],25,"emit-all-import-libraries");
lf[386]=C_h_intern(&lf[386],29,"\010compilerall-import-libraries");
lf[387]=C_h_intern(&lf[387],13,"string-append");
lf[388]=C_decode_literal(C_heaptop,"\376B\000\000\013.import.scm");
lf[389]=C_h_intern(&lf[389],19,"emit-import-library");
lf[390]=C_h_intern(&lf[390],16,"\003sysstring->list");
lf[391]=C_h_intern(&lf[391],5,"debug");
lf[392]=C_h_intern(&lf[392],18,"\003sysdload-disabled");
lf[393]=C_h_intern(&lf[393],15,"repository-path");
lf[394]=C_h_intern(&lf[394],30,"\010compilerstandalone-executable");
lf[395]=C_h_intern(&lf[395],29,"\010compilerstring->c-identifier");
lf[396]=C_h_intern(&lf[396],18,"\010compilerstringify");
lf[397]=C_decode_literal(C_heaptop,"\376B\000\000\001;");
lf[398]=C_decode_literal(C_heaptop,"\376B\000\000\000");
lf[399]=C_h_intern(&lf[399],24,"get-environment-variable");
lf[400]=C_decode_literal(C_heaptop,"\376B\000\000\024CHICKEN_INCLUDE_PATH");
lf[401]=C_h_intern(&lf[401],9,"to-stdout");
lf[402]=C_decode_literal(C_heaptop,"\376B\000\000\001c");
lf[403]=C_h_intern(&lf[403],13,"pathname-file");
lf[404]=C_decode_literal(C_heaptop,"\376B\000\000\003out");
lf[405]=C_h_intern(&lf[405],29,"\010compilerdefault-declarations");
lf[406]=C_h_intern(&lf[406],30,"\010compilerunits-used-by-default");
lf[407]=C_h_intern(&lf[407],28,"\010compilerinitialize-compiler");
lf[408]=C_h_intern(&lf[408],14,"make-parameter");
C_register_lf2(lf,409,create_ptable());
t2=C_mutate(&lf[0] /* (set! c341 ...) */,lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1508,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k1506 */
static void C_ccall f_1508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1508,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1511,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1509 in k1506 */
static void C_ccall f_1511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1511,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1516,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 38   make-parameter */
((C_proc3)C_retrieve_symbol_proc(lf[408]))(3,*((C_word*)lf[408]+1),t2,C_SCHEME_FALSE);}

/* k1514 in k1509 in k1506 */
static void C_ccall f_1516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1516,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1 /* (set! user-options-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1520,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 39   make-parameter */
((C_proc3)C_retrieve_symbol_proc(lf[408]))(3,*((C_word*)lf[408]+1),t3,C_SCHEME_FALSE);}

/* k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1520,2,t0,t1);}
t2=C_mutate((C_word*)lf[3]+1 /* (set! user-read-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1524,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 40   make-parameter */
((C_proc3)C_retrieve_symbol_proc(lf[408]))(3,*((C_word*)lf[408]+1),t3,C_SCHEME_FALSE);}

/* k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1524,2,t0,t1);}
t2=C_mutate((C_word*)lf[4]+1 /* (set! user-preprocessor-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1528,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 41   make-parameter */
((C_proc3)C_retrieve_symbol_proc(lf[408]))(3,*((C_word*)lf[408]+1),t3,C_SCHEME_FALSE);}

/* k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1528,2,t0,t1);}
t2=C_mutate((C_word*)lf[5]+1 /* (set! user-pass ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1532,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 42   make-parameter */
((C_proc3)C_retrieve_symbol_proc(lf[408]))(3,*((C_word*)lf[408]+1),t3,C_SCHEME_FALSE);}

/* k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1532,2,t0,t1);}
t2=C_mutate((C_word*)lf[6]+1 /* (set! user-post-analysis-pass ...) */,t1);
t3=C_mutate((C_word*)lf[7]+1 /* (set! compile-source-file ...) */,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1534,tmp=(C_word)a,a+=2,tmp));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1534(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_1534r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1534r(t0,t1,t2,t3);}}

static void C_ccall f_1534r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1537,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1570,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm: 55   initialize-compiler */
((C_proc2)C_retrieve_symbol_proc(lf[407]))(2,*((C_word*)lf[407]+1),t5);}

/* k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1570,2,t0,t1);}
t2=(C_word)C_i_memq(lf[11],((C_word*)t0)[5]);
t3=C_mutate((C_word*)lf[12]+1 /* (set! explicit-use-flag ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4829,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4833,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[12]))){
/* batch-driver.scm: 58   append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[231]+1)))(4,*((C_word*)lf[231]+1),t5,C_retrieve(lf[405]),C_SCHEME_END_OF_LIST);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4848,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#append */
t7=*((C_word*)lf[248]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_retrieve(lf[406]),C_SCHEME_END_OF_LIST);}}

/* k4846 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4848,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[246],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
/* batch-driver.scm: 58   append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[231]+1)))(4,*((C_word*)lf[231]+1),((C_word*)t0)[2],C_retrieve(lf[405]),t3);}

/* k4831 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[248]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4829,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[13],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=t3;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(C_word)C_i_memq(lf[14],((C_word*)t0)[5]);
t7=(C_word)C_i_memq(lf[15],((C_word*)t0)[5]);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[4],a[6]=t6,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t7)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4789,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* g7879 */
t10=t9;
f_4789(t10,t8,t7);}
else{
if(C_truep((C_word)C_i_memq(lf[401],((C_word*)t0)[5]))){
t9=t8;
f_1586(2,t9,C_SCHEME_FALSE);}
else{
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4818,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
/* batch-driver.scm: 71   pathname-file */
((C_proc3)C_retrieve_symbol_proc(lf[403]))(3,*((C_word*)lf[403]+1),t9,((C_word*)t0)[2]);}
else{
/* batch-driver.scm: 71   make-pathname */
((C_proc5)C_retrieve_symbol_proc(lf[170]))(5,*((C_word*)lf[170]+1),t8,C_SCHEME_FALSE,lf[404],lf[402]);}}}}

/* k4816 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 71   make-pathname */
((C_proc5)C_retrieve_symbol_proc(lf[170]))(5,*((C_word*)lf[170]+1),((C_word*)t0)[2],C_SCHEME_FALSE,t1,lf[402]);}

/* g78 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_4789(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4789,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4793,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 66   option-arg */
f_1537(t3,t2);}

/* k4791 in g78 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_i_symbolp(t1))){
/* batch-driver.scm: 68   symbol->string */
((C_proc3)C_retrieve_proc(*((C_word*)lf[172]+1)))(3,*((C_word*)lf[172]+1),((C_word*)t0)[2],t1);}
else{
t2=t1;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1586(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1586,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1589,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4746,a[2]=t6,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4785,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 72   get-environment-variable */
((C_proc3)C_retrieve_symbol_proc(lf[399]))(3,*((C_word*)lf[399]+1),t8,lf[400]);}

/* k4783 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* batch-driver.scm: 72   string-split */
((C_proc4)C_retrieve_symbol_proc(lf[311]))(4,*((C_word*)lf[311]+1),((C_word*)t0)[2],t2,lf[397]);}
else{
/* batch-driver.scm: 72   string-split */
((C_proc4)C_retrieve_symbol_proc(lf[311]))(4,*((C_word*)lf[311]+1),((C_word*)t0)[2],lf[398],lf[397]);}}

/* k4744 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4746,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4748,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4748(t5,((C_word*)t0)[2],t1);}

/* loop84 in k4744 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_4748(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4748,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[328]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4777,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g100101 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4775 in loop84 in k4744 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4777(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4777,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop8497 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4748(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop8497 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4748(t6,((C_word*)t0)[3],t5);}}

/* k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1589(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1589,2,t0,t1);}
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
t12=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1595,a[2]=t1,a[3]=t8,a[4]=t10,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t4,a[10]=t6,a[11]=((C_word*)t0)[6],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[8],tmp=(C_word)a,a+=14,tmp);
if(C_truep(t11)){
t13=t12;
f_1595(t13,t11);}
else{
t13=(C_word)C_i_memq(lf[277],((C_word*)t0)[8]);
t14=t12;
f_1595(t14,(C_truep(t13)?t13:(C_word)C_i_memq(lf[19],((C_word*)t0)[8])));}}

/* k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1595(C_word t0,C_word t1){
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
C_word ab[117],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1595,NULL,2,t0,t1);}
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
t15=(C_word)C_i_memq(lf[29],((C_word*)t0)[13]);
t16=C_SCHEME_FALSE;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_SCHEME_FALSE;
t19=(*a=C_VECTOR_TYPE|1,a[1]=t18,tmp=(C_word)a,a+=2,tmp);
t20=C_SCHEME_FALSE;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=(C_word)C_i_memq(lf[30],((C_word*)t0)[13]);
t23=(C_truep(t22)?t22:(C_word)C_i_memq(lf[31],((C_word*)t0)[13]));
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
t48=C_set_block_item(t25,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1645,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp));
t49=C_set_block_item(t27,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1660,a[2]=t25,tmp=(C_word)a,a+=3,tmp));
t50=C_set_block_item(t29,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1684,a[2]=t27,a[3]=t17,tmp=(C_word)a,a+=4,tmp));
t51=C_set_block_item(t31,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1706,a[2]=t27,tmp=(C_word)a,a+=3,tmp));
t52=C_set_block_item(t33,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1730,a[2]=t27,tmp=(C_word)a,a+=3,tmp));
t53=C_set_block_item(t35,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1773,tmp=(C_word)a,a+=2,tmp));
t54=C_set_block_item(t37,0,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1822,tmp=(C_word)a,a+=2,tmp));
t55=C_set_block_item(t39,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1902,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp));
t56=C_set_block_item(t41,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1937,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp));
t57=C_set_block_item(t43,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1947,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp));
t58=C_set_block_item(t45,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1976,a[2]=t35,tmp=(C_word)a,a+=3,tmp));
t59=C_set_block_item(t47,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1982,a[2]=t21,tmp=(C_word)a,a+=3,tmp));
t60=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_2061,a[2]=((C_word*)t0)[10],a[3]=t9,a[4]=((C_word*)t0)[2],a[5]=t5,a[6]=t6,a[7]=t7,a[8]=t8,a[9]=((C_word*)t0)[11],a[10]=t37,a[11]=t23,a[12]=t1,a[13]=t45,a[14]=((C_word*)t0)[3],a[15]=t4,a[16]=((C_word*)t0)[4],a[17]=t33,a[18]=t39,a[19]=t31,a[20]=t15,a[21]=t13,a[22]=t14,a[23]=((C_word*)t0)[5],a[24]=t25,a[25]=t29,a[26]=t47,a[27]=t43,a[28]=t41,a[29]=t19,a[30]=((C_word*)t0)[6],a[31]=((C_word*)t0)[7],a[32]=((C_word*)t0)[8],a[33]=t21,a[34]=t11,a[35]=((C_word*)t0)[12],a[36]=((C_word*)t0)[13],a[37]=t17,tmp=(C_word)a,a+=38,tmp);
if(C_truep(t12)){
t61=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4719,a[2]=t60,tmp=(C_word)a,a+=3,tmp);
t62=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4723,a[2]=t61,tmp=(C_word)a,a+=3,tmp);
t63=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4727,a[2]=t62,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 174  option-arg */
f_1537(t63,t12);}
else{
t61=t60;
f_2061(t61,C_SCHEME_UNDEFINED);}}

/* k4725 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 174  stringify */
((C_proc3)C_retrieve_symbol_proc(lf[396]))(3,*((C_word*)lf[396]+1),((C_word*)t0)[2],t1);}

/* k4721 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 174  string->c-identifier */
((C_proc3)C_retrieve_symbol_proc(lf[395]))(3,*((C_word*)lf[395]+1),((C_word*)t0)[2],t1);}

/* k4717 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[217]+1 /* (set! unit-name ...) */,t1);
t3=((C_word*)t0)[2];
f_2061(t3,t2);}

/* k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2061(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2061,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_2064,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
t3=C_retrieve(lf[217]);
if(C_truep(t3)){
if(C_truep(t3)){
t4=C_set_block_item(lf[394] /* standalone-executable */,0,C_SCHEME_FALSE);
t5=t2;
f_2064(t5,t4);}
else{
t4=t2;
f_2064(t4,C_SCHEME_UNDEFINED);}}
else{
if(C_truep(((C_word*)t0)[22])){
t4=C_set_block_item(lf[394] /* standalone-executable */,0,C_SCHEME_FALSE);
t5=t2;
f_2064(t5,t4);}
else{
t4=t2;
f_2064(t4,C_SCHEME_UNDEFINED);}}}

/* k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2064(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2064,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_2067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
if(C_truep((C_word)C_i_memq(lf[199],((C_word*)t0)[36]))){
t3=C_set_block_item(lf[392] /* dload-disabled */,0,C_SCHEME_TRUE);
/* batch-driver.scm: 179  repository-path */
((C_proc3)C_retrieve_symbol_proc(lf[393]))(3,*((C_word*)lf[393]+1),t2,C_SCHEME_FALSE);}
else{
t3=t2;
f_2067(2,t3,C_SCHEME_UNDEFINED);}}

/* k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[44],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2067,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|37,a[1]=(C_word)f_2071,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],a[37]=((C_word*)t0)[37],tmp=(C_word)a,a+=38,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4648,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4704,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 185  collect-options */
t5=((C_word*)((C_word*)t0)[18])[1];
f_1902(t5,t4,lf[391]);}

/* k4702 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 181  append-map */
((C_proc4)C_retrieve_symbol_proc(lf[313]))(4,*((C_word*)lf[313]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a4647 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4648(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_4648,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4656,a[2]=t1,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* string->list */
t8=C_retrieve(lf[390]);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k4654 in a4647 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4656,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4658,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4658(t5,((C_word*)t0)[2],t1);}

/* loop355 in k4654 in a4647 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_4658(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4658,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4696,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_a_i_string(&a,1,t4);
/* batch-driver.scm: 183  string->symbol */
((C_proc3)C_retrieve_proc(*((C_word*)lf[300]+1)))(3,*((C_word*)lf[300]+1),t3,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4694 in loop355 in k4654 in a4647 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4696(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4696,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop355368 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4658(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop355368 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4658(t6,((C_word*)t0)[3],t5);}}

/* k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2071(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2071,2,t0,t1);}
t2=C_mutate((C_word*)lf[36]+1 /* (set! debugging-chicken ...) */,t1);
t3=(C_word)C_i_memq(lf[61],C_retrieve(lf[36]));
t4=C_mutate(((C_word *)((C_word*)t0)[37])+1,t3);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2079,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4598,a[2]=t9,a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 191  collect-options */
t11=((C_word*)((C_word*)t0)[18])[1];
f_1902(t11,t10,lf[389]);}

/* k4596 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4598,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4600,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4600(t5,((C_word*)t0)[2],t1);}

/* loop379 in k4596 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_4600(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4600,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4635,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm: 189  string->symbol */
((C_proc3)C_retrieve_proc(*((C_word*)lf[300]+1)))(3,*((C_word*)lf[300]+1),t4,t3);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4633 in loop379 in k4596 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4635,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4639,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm: 190  string-append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[387]+1)))(4,*((C_word*)lf[387]+1),t2,((C_word*)t0)[2],lf[388]);}

/* k4637 in k4633 in loop379 in k4596 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4639(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4639,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t4=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop379392 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_4600(t7,((C_word*)t0)[3],t6);}
else{
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t6=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop379392 */
t7=((C_word*)((C_word*)t0)[4])[1];
f_4600(t7,((C_word*)t0)[3],t6);}}

/* k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2079,2,t0,t1);}
t2=C_mutate((C_word*)lf[62]+1 /* (set! import-libraries ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep((C_word)C_i_memq(lf[385],((C_word*)t0)[36]))){
if(C_truep(((C_word*)t0)[21])){
t4=t3;
f_2082(t4,C_SCHEME_UNDEFINED);}
else{
t4=C_set_block_item(lf[386] /* all-import-libraries */,0,C_SCHEME_TRUE);
t5=t3;
f_2082(t5,t4);}}
else{
t4=t3;
f_2082(t4,C_SCHEME_UNDEFINED);}}

/* k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2082(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2082,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep((C_word)C_i_memq(lf[384],((C_word*)t0)[36]))){
t3=C_set_block_item(lf[180] /* do-lambda-lifting */,0,C_SCHEME_TRUE);
t4=t2;
f_2085(t4,t3);}
else{
t3=t2;
f_2085(t3,C_SCHEME_UNDEFINED);}}

/* k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2085(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2085,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2088,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep((C_word)C_i_memq(lf[383],((C_word*)t0)[36]))){
t3=C_set_block_item(lf[185] /* do-scrutinize */,0,C_SCHEME_TRUE);
t4=t2;
f_2088(t4,t3);}
else{
t3=t2;
f_2088(t3,C_SCHEME_UNDEFINED);}}

/* k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2088(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2088,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|36,a[1]=(C_word)f_2091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],a[36]=((C_word*)t0)[36],tmp=(C_word)a,a+=37,tmp);
if(C_truep((C_word)C_i_memq(lf[114],C_retrieve(lf[36])))){
/* batch-driver.scm: 197  ##sys#start-timer */
t3=*((C_word*)lf[382]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=t2;
f_2091(2,t3,C_SCHEME_UNDEFINED);}}

/* k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2091,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2094,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],a[35]=((C_word*)t0)[36],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[381],C_retrieve(lf[36])))){
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t4=t2;
f_2094(t4,t3);}
else{
t3=t2;
f_2094(t3,C_SCHEME_UNDEFINED);}}

/* k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2094(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2094,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2097,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[378],((C_word*)t0)[35]))){
/* batch-driver.scm: 200  warning */
((C_proc3)C_retrieve_symbol_proc(lf[379]))(3,*((C_word*)lf[379]+1),t2,lf[380]);}
else{
t3=t2;
f_2097(2,t3,C_SCHEME_UNDEFINED);}}

/* k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2100,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[377],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[12] /* explicit-use-flag */,0,C_SCHEME_TRUE);
t4=C_set_block_item(((C_word*)t0)[15],0,C_SCHEME_END_OF_LIST);
t5=C_set_block_item(((C_word*)t0)[31],0,C_SCHEME_END_OF_LIST);
t6=t2;
f_2100(t6,t5);}
else{
t3=t2;
f_2100(t3,C_SCHEME_UNDEFINED);}}

/* k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2100(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2100,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2103,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[375],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[376] /* emit-closure-info */,0,C_SCHEME_FALSE);
t4=t2;
f_2103(t4,t3);}
else{
t3=t2;
f_2103(t3,C_SCHEME_UNDEFINED);}}

/* k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2103(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2103,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2106,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[373],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[374] /* compiler-syntax-enabled */,0,C_SCHEME_FALSE);
t4=t2;
f_2106(t4,t3);}
else{
t3=t2;
f_2106(t3,C_SCHEME_UNDEFINED);}}

/* k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2106(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2106,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[372],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[353] /* local-definitions */,0,C_SCHEME_TRUE);
t4=t2;
f_2109(t4,t3);}
else{
t3=t2;
f_2109(t3,C_SCHEME_UNDEFINED);}}

/* k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2109(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2109,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2112,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[371],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[166] /* enable-inline-files */,0,C_SCHEME_TRUE);
t4=C_set_block_item(lf[162] /* inline-locally */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[161] /* inline-globally */,0,C_SCHEME_TRUE);
t6=t2;
f_2112(t6,t5);}
else{
t3=t2;
f_2112(t3,C_SCHEME_UNDEFINED);}}

/* k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2112(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[45],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2112,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4501,a[2]=t6,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 215  collect-options */
t8=((C_word*)((C_word*)t0)[17])[1];
f_1902(t8,t7,lf[370]);}

/* k4499 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4501,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4503,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4503(t5,((C_word*)t0)[2],t1);}

/* loop431 in k4499 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_4503(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4503,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[300]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4532,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g447448 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4530 in loop431 in k4499 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4532(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4532,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop431444 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4503(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop431444 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4503(t6,((C_word*)t0)[3],t5);}}

/* k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2116,2,t0,t1);}
t2=C_mutate((C_word*)lf[63]+1 /* (set! disabled-warnings ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2119,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[368],((C_word*)t0)[35]))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4496,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 217  dribble */
t5=((C_word*)((C_word*)t0)[23])[1];
f_1645(t5,t4,lf[369],C_SCHEME_END_OF_LIST);}
else{
t4=t3;
f_2119(t4,C_SCHEME_UNDEFINED);}}

/* k4494 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[132] /* warnings-enabled */,0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
f_2119(t3,t2);}

/* k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2119(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2119,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2122,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[99],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[99] /* optimize-leaf-routines */,0,C_SCHEME_TRUE);
t4=t2;
f_2122(t4,t3);}
else{
t3=t2;
f_2122(t3,C_SCHEME_UNDEFINED);}}

/* k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2122(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2122,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2125,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[159],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[159] /* unsafe */,0,C_SCHEME_TRUE);
t4=t2;
f_2125(t4,t3);}
else{
t3=t2;
f_2125(t3,C_SCHEME_UNDEFINED);}}

/* k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2125(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2125,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2128,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(((C_word*)t0)[21])){
if(C_truep((C_word)C_i_memq(lf[366],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[367] /* emit-unsafe-marker */,0,C_SCHEME_TRUE);
t4=t2;
f_2128(t4,t3);}
else{
t3=t2;
f_2128(t3,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_2128(t3,C_SCHEME_UNDEFINED);}}

/* k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2128(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2128,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2131,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[364],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[365] /* setup-mode */,0,C_SCHEME_TRUE);
t4=t2;
f_2131(t4,t3);}
else{
t3=t2;
f_2131(t3,C_SCHEME_UNDEFINED);}}

/* k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2131(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2131,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2134,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[362],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[363] /* insert-timer-checks */,0,C_SCHEME_FALSE);
t4=t2;
f_2134(t4,t3);}
else{
t3=t2;
f_2134(t3,C_SCHEME_UNDEFINED);}}

/* k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2134(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2134,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2137,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[359],((C_word*)t0)[35]))){
t3=C_mutate((C_word*)lf[360]+1 /* (set! number-type ...) */,lf[361]);
t4=t2;
f_2137(t4,t3);}
else{
t3=t2;
f_2137(t3,C_SCHEME_UNDEFINED);}}

/* k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2137(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2137,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[357],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[358] /* block-compilation */,0,C_SCHEME_TRUE);
t4=t2;
f_2140(t4,t3);}
else{
t3=t2;
f_2140(t3,C_SCHEME_UNDEFINED);}}

/* k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2140(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2140,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[355],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[356] /* external-protos-first */,0,C_SCHEME_TRUE);
t4=t2;
f_2143(t4,t3);}
else{
t3=t2;
f_2143(t3,C_SCHEME_UNDEFINED);}}

/* k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2143(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2143,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2146,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[354],((C_word*)t0)[35]))){
t3=C_set_block_item(lf[162] /* inline-locally */,0,C_SCHEME_TRUE);
t4=t2;
f_2146(t4,t3);}
else{
t3=t2;
f_2146(t3,C_SCHEME_UNDEFINED);}}

/* k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2146(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2146,NULL,2,t0,t1);}
t2=(C_word)C_i_memq(lf[64],((C_word*)t0)[35]);
t3=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2152,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep(t2)){
t4=C_set_block_item(lf[162] /* inline-locally */,0,C_SCHEME_TRUE);
t5=C_set_block_item(lf[353] /* local-definitions */,0,C_SCHEME_TRUE);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4451,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 235  option-arg */
f_1537(t6,t2);}
else{
t4=t3;
f_2152(t4,C_SCHEME_FALSE);}}

/* k4449 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[138]+1 /* (set! inline-output-file ...) */,t1);
t3=((C_word*)t0)[2];
f_2152(t3,t2);}

/* k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2152(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2152,NULL,2,t0,t1);}
t2=(C_word)C_i_memq(lf[65],((C_word*)t0)[35]);
t3=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2158,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[35],a[32]=((C_word*)t0)[31],a[33]=((C_word*)t0)[32],a[34]=((C_word*)t0)[33],a[35]=((C_word*)t0)[34],tmp=(C_word)a,a+=36,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4436,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 238  option-arg */
f_1537(t4,t2);}
else{
t4=t3;
f_2158(t4,C_SCHEME_FALSE);}}

/* k4434 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4439,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 239  string->number */
C_string_to_number(3,0,t2,t1);}

/* k4437 in k4434 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4442,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t1;
t4=C_mutate((C_word*)lf[351]+1 /* (set! inline-max-size ...) */,t3);
t5=((C_word*)t0)[3];
f_2158(t5,t4);}
else{
/* batch-driver.scm: 240  quit */
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t2,lf[352],((C_word*)t0)[2]);}}

/* k4440 in k4437 in k4434 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[351]+1 /* (set! inline-max-size ...) */,t1);
t3=((C_word*)t0)[2];
f_2158(t3,t2);}

/* k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2158(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2158,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2161,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[349],((C_word*)t0)[31]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4426,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 242  dribble */
t4=((C_word*)((C_word*)t0)[23])[1];
f_1645(t4,t3,lf[350],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2161(2,t3,C_SCHEME_UNDEFINED);}}

/* k4424 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4429,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 243  register-feature! */
((C_proc3)C_retrieve_symbol_proc(lf[310]))(3,*((C_word*)lf[310]+1),t2,lf[349]);}

/* k4427 in k4424 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 244  case-sensitive */
((C_proc3)C_retrieve_symbol_proc(lf[334]))(3,*((C_word*)lf[334]+1),((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2161,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|35,a[1]=(C_word)f_2164,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],a[35]=((C_word*)t0)[35],tmp=(C_word)a,a+=36,tmp);
if(C_truep((C_word)C_i_memq(lf[347],((C_word*)t0)[31]))){
/* batch-driver.scm: 246  compiler-warning */
((C_proc4)C_retrieve_symbol_proc(lf[212]))(4,*((C_word*)lf[212]+1),t2,lf[218],lf[348]);}
else{
t3=t2;
f_2164(2,t3,C_SCHEME_UNDEFINED);}}

/* k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2164,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2167,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],a[34]=((C_word*)t0)[35],tmp=(C_word)a,a+=35,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4384,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 248  option-arg */
f_1537(t3,((C_word*)t0)[2]);}
else{
t3=t2;
f_2167(2,t3,C_SCHEME_UNDEFINED);}}

/* k4382 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_i_string_equal_p(lf[341],t1))){
/* batch-driver.scm: 249  keyword-style */
((C_proc3)C_retrieve_symbol_proc(lf[25]))(3,*((C_word*)lf[25]+1),((C_word*)t0)[2],lf[342]);}
else{
if(C_truep((C_word)C_i_string_equal_p(lf[343],t1))){
/* batch-driver.scm: 250  keyword-style */
((C_proc3)C_retrieve_symbol_proc(lf[25]))(3,*((C_word*)lf[25]+1),((C_word*)t0)[2],lf[333]);}
else{
if(C_truep((C_word)C_i_string_equal_p(lf[344],t1))){
/* batch-driver.scm: 251  keyword-style */
((C_proc3)C_retrieve_symbol_proc(lf[25]))(3,*((C_word*)lf[25]+1),((C_word*)t0)[2],lf[345]);}
else{
/* batch-driver.scm: 252  quit */
((C_proc3)C_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),((C_word*)t0)[2],lf[346]);}}}}

/* k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2167,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2170,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[338],((C_word*)t0)[30]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4378,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 254  dribble */
t4=((C_word*)((C_word*)t0)[22])[1];
f_1645(t4,t3,lf[340],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2170(2,t3,C_SCHEME_UNDEFINED);}}

/* k4376 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 255  parenthesis-synonyms */
((C_proc3)C_retrieve_symbol_proc(lf[339]))(3,*((C_word*)lf[339]+1),((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2170,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2173,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[336],((C_word*)t0)[30]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4369,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 257  dribble */
t4=((C_word*)((C_word*)t0)[22])[1];
f_1645(t4,t3,lf[337],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2173(2,t3,C_SCHEME_UNDEFINED);}}

/* k4367 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 258  symbol-escape */
((C_proc3)C_retrieve_symbol_proc(lf[331]))(3,*((C_word*)lf[331]+1),((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2173,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],a[34]=((C_word*)t0)[34],tmp=(C_word)a,a+=35,tmp);
if(C_truep((C_word)C_i_memq(lf[330],((C_word*)t0)[30]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4351,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 260  dribble */
t4=((C_word*)((C_word*)t0)[22])[1];
f_1645(t4,t3,lf[335],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2176(2,t3,C_SCHEME_UNDEFINED);}}

/* k4349 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4354,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 261  case-sensitive */
((C_proc3)C_retrieve_symbol_proc(lf[334]))(3,*((C_word*)lf[334]+1),t2,C_SCHEME_FALSE);}

/* k4352 in k4349 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4354,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4357,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 262  keyword-style */
((C_proc3)C_retrieve_symbol_proc(lf[25]))(3,*((C_word*)lf[25]+1),t2,lf[333]);}

/* k4355 in k4352 in k4349 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4357,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4360,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 263  parentheses-synonyms */
((C_proc3)C_retrieve_symbol_proc(lf[332]))(3,*((C_word*)lf[332]+1),t2,C_SCHEME_FALSE);}

/* k4358 in k4355 in k4352 in k4349 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 264  symbol-escape */
((C_proc3)C_retrieve_symbol_proc(lf[331]))(3,*((C_word*)lf[331]+1),((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2176(C_word c,C_word t0,C_word t1){
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
C_word ab[47],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2176,2,t0,t1);}
t2=C_mutate((C_word*)lf[66]+1 /* (set! verbose-mode ...) */,((C_word*)t0)[34]);
t3=C_set_block_item(lf[67] /* read-error-with-line-number */,0,C_SCHEME_TRUE);
t4=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2182,a[2]=((C_word*)t0)[34],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4306,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4310,a[2]=t9,a[3]=t6,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 268  collect-options */
t11=((C_word*)((C_word*)t0)[16])[1];
f_1902(t11,t10,lf[329]);}

/* k4308 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4310,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4312,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4312(t5,((C_word*)t0)[2],t1);}

/* loop520 in k4308 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_4312(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4312,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[328]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4341,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g536537 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4339 in loop520 in k4308 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4341(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4341,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop520533 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4312(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop520533 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4312(t6,((C_word*)t0)[3],t5);}}

/* k4304 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 268  append */
((C_proc5)C_retrieve_proc(*((C_word*)lf[231]+1)))(5,*((C_word*)lf[231]+1),((C_word*)t0)[3],t1,C_retrieve(lf[68]),((C_word*)t0)[2]);}

/* k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2182,2,t0,t1);}
t2=C_mutate((C_word*)lf[68]+1 /* (set! include-pathnames ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2185,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep(((C_word*)t0)[21])){
if(C_truep(((C_word*)t0)[28])){
if(C_truep((C_word)C_i_string_equal_p(((C_word*)t0)[21],((C_word*)t0)[28]))){
/* batch-driver.scm: 272  quit */
((C_proc3)C_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),t3,lf[327]);}
else{
t4=t3;
f_2185(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2185(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_2185(2,t4,C_SCHEME_UNDEFINED);}}

/* k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2185,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2189,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4255,a[2]=t6,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 273  collect-options */
t8=((C_word*)((C_word*)t0)[16])[1];
f_1902(t8,t7,lf[246]);}

/* k4253 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4255,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4257,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4257(t5,((C_word*)t0)[2],t1);}

/* loop549 in k4253 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_4257(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4257,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[300]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4286,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g565566 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4284 in loop549 in k4253 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4286(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4286,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop549562 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4257(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop549562 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_4257(t6,((C_word*)t0)[3],t5);}}

/* k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2189,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[33])+1,t1);
t3=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[33],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],a[33]=((C_word*)t0)[32],tmp=(C_word)a,a+=34,tmp);
if(C_truep((C_word)C_i_memq(lf[325],((C_word*)t0)[30]))){
t4=C_set_block_item(lf[326] /* undefine-shadowed-macros */,0,C_SCHEME_FALSE);
t5=t3;
f_2192(t5,t4);}
else{
t4=t3;
f_2192(t4,C_SCHEME_UNDEFINED);}}

/* k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2192(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2192,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep((C_word)C_i_memq(lf[323],((C_word*)t0)[31]))){
t3=C_set_block_item(lf[324] /* no-argc-checks */,0,C_SCHEME_TRUE);
t4=t2;
f_2195(t4,t3);}
else{
t3=t2;
f_2195(t3,C_SCHEME_UNDEFINED);}}

/* k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2195(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2195,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2198,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep((C_word)C_i_memq(lf[321],((C_word*)t0)[31]))){
t3=C_set_block_item(lf[322] /* no-bound-checks */,0,C_SCHEME_TRUE);
t4=t2;
f_2198(t4,t3);}
else{
t3=t2;
f_2198(t3,C_SCHEME_UNDEFINED);}}

/* k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2198(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2198,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2201,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep((C_word)C_i_memq(lf[319],((C_word*)t0)[31]))){
t3=C_set_block_item(lf[320] /* no-procedure-checks */,0,C_SCHEME_TRUE);
t4=t2;
f_2201(t4,t3);}
else{
t3=t2;
f_2201(t3,C_SCHEME_UNDEFINED);}}

/* k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2201(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2201,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2204,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
if(C_truep((C_word)C_i_memq(lf[315],((C_word*)t0)[31]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4062,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4152,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t5)[1];
f_4152(t7,t3,C_retrieve(lf[290]));}
else{
t3=t2;
f_2204(2,t3,C_SCHEME_UNDEFINED);}}

/* loop582 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_4152(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4152,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4224,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4191,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4166,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t6))){
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[316]))(5,*((C_word*)lf[316]+1),t5,t4,lf[318],C_SCHEME_TRUE);}
else{
t8=(C_word)C_i_cdr(t6);
if(C_truep((C_word)C_i_nullp(t8))){
t9=(C_word)C_i_car(t6);
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[316]))(5,*((C_word*)lf[316]+1),t5,t4,lf[318],t9);}
else{
/* ##sys#error */
t9=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,lf[0],t6);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4164 in loop582 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[316]))(5,*((C_word*)lf[316]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[318],t1);}

/* k4189 in loop582 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4191,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[316]))(5,*((C_word*)lf[316]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[317],C_SCHEME_TRUE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[316]))(5,*((C_word*)lf[316]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[317],t5);}
else{
/* ##sys#error */
t5=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k4194 in k4189 in loop582 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[316]))(5,*((C_word*)lf[316]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[317],t1);}

/* k4222 in loop582 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4152(t3,((C_word*)t0)[2],t2);}

/* k4060 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4062,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4067,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4067(t5,((C_word*)t0)[2],C_retrieve(lf[292]));}

/* loop629 in k4060 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_4067(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4067,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4139,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4106,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4081,a[2]=t4,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t6))){
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[316]))(5,*((C_word*)lf[316]+1),t5,t4,lf[318],C_SCHEME_TRUE);}
else{
t8=(C_word)C_i_cdr(t6);
if(C_truep((C_word)C_i_nullp(t8))){
t9=(C_word)C_i_car(t6);
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[316]))(5,*((C_word*)lf[316]+1),t5,t4,lf[318],t9);}
else{
/* ##sys#error */
t9=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,lf[0],t6);}}}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4079 in loop629 in k4060 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[316]))(5,*((C_word*)lf[316]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[318],t1);}

/* k4104 in loop629 in k4060 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4106,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4111,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[316]))(5,*((C_word*)lf[316]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[317],C_SCHEME_TRUE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=(C_word)C_i_car(t2);
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[316]))(5,*((C_word*)lf[316]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[317],t5);}
else{
/* ##sys#error */
t5=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k4109 in k4104 in loop629 in k4060 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#put! */
((C_proc5)C_retrieve_symbol_proc(lf[316]))(5,*((C_word*)lf[316]+1),((C_word*)t0)[3],((C_word*)t0)[2],lf[317],t1);}

/* k4137 in loop629 in k4060 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4067(t3,((C_word*)t0)[2],t2);}

/* k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[43],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2204,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2207,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4023,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4048,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4056,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 297  collect-options */
t6=((C_word*)((C_word*)t0)[17])[1];
f_1902(t6,t5,lf[314]);}

/* k4054 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 297  append-map */
((C_proc4)C_retrieve_symbol_proc(lf[313]))(4,*((C_word*)lf[313]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a4047 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4048(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4048,3,t0,t1,t2);}
t3=C_retrieve(lf[311]);
/* g695696 */
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,lf[312]);}

/* k4021 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4023,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4025,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4025(t5,((C_word*)t0)[2],t1);}

/* loop677 in k4021 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_4025(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4025,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[310]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4035,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g684685 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4033 in loop677 in k4021 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4025(t3,((C_word*)t0)[2],t2);}

/* k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2207,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[69],C_retrieve(lf[70]));
t3=C_mutate((C_word*)lf[70]+1 /* (set! features ...) */,t2);
t4=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2214,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],a[33]=((C_word*)t0)[33],tmp=(C_word)a,a+=34,tmp);
/* batch-driver.scm: 301  collect-options */
t5=((C_word*)((C_word*)t0)[17])[1];
f_1902(t5,t4,lf[309]);}

/* k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2214,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|34,a[1]=(C_word)f_2217,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],a[33]=((C_word*)t0)[32],a[34]=((C_word*)t0)[33],tmp=(C_word)a,a+=35,tmp);
/* batch-driver.scm: 302  dribble */
t3=((C_word*)((C_word*)t0)[23])[1];
f_1645(t3,t2,lf[308],C_SCHEME_END_OF_LIST);}

/* k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|33,a[1]=(C_word)f_2220,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],a[33]=((C_word*)t0)[34],tmp=(C_word)a,a+=34,tmp);
if(C_truep(((C_word*)t0)[2])){
/* batch-driver.scm: 303  load-verbose */
((C_proc3)C_retrieve_symbol_proc(lf[307]))(3,*((C_word*)lf[307]+1),t2,C_SCHEME_TRUE);}
else{
t3=t2;
f_2220(2,t3,C_SCHEME_UNDEFINED);}}

/* k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2220(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2220,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2223,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],a[31]=((C_word*)t0)[32],a[32]=((C_word*)t0)[33],tmp=(C_word)a,a+=33,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3986,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_3986(t6,t2,((C_word*)t0)[2]);}

/* loop702 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3986(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3986,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4005,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4002,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 305  ##sys#resolve-include-filename */
((C_proc5)C_retrieve_symbol_proc(lf[169]))(5,*((C_word*)lf[169]+1),t5,t4,C_SCHEME_FALSE,C_SCHEME_TRUE);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k4000 in loop702 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 305  load */
((C_proc3)C_retrieve_symbol_proc(lf[306]))(3,*((C_word*)lf[306]+1),((C_word*)t0)[2],t1);}

/* k4003 in loop702 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_4005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3986(t3,((C_word*)t0)[2],t2);}

/* k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2223,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2227,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
/* batch-driver.scm: 307  delete */
((C_proc5)C_retrieve_symbol_proc(lf[304]))(5,*((C_word*)lf[304]+1),t2,lf[69],C_retrieve(lf[70]),*((C_word*)lf[305]+1));}

/* k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2227,2,t0,t1);}
t2=C_mutate((C_word*)lf[70]+1 /* (set! features ...) */,t1);
t3=(C_word)C_a_i_cons(&a,2,lf[71],C_retrieve(lf[70]));
t4=C_mutate((C_word*)lf[70]+1 /* (set! features ...) */,t3);
t5=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2235,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],a[32]=((C_word*)t0)[32],tmp=(C_word)a,a+=33,tmp);
/* batch-driver.scm: 310  user-post-analysis-pass */
((C_proc2)C_retrieve_symbol_proc(lf[6]))(2,*((C_word*)lf[6]+1),t5);}

/* k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2235,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[32])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
/* batch-driver.scm: 313  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[231]+1)))(4,*((C_word*)lf[231]+1),t3,((C_word*)((C_word*)t0)[31])[1],C_retrieve(lf[303]));}

/* k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2239,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[31])+1,t1);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2242,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3949,a[2]=t7,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 315  collect-options */
t9=((C_word*)((C_word*)t0)[16])[1];
f_1902(t9,t8,lf[302]);}

/* k3947 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3949(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3949,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3951,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3951(t5,((C_word*)t0)[2],t1);}

/* loop719 in k3947 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3951(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3951,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[300]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3980,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g735736 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3978 in loop719 in k3947 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
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
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3980,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop719732 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3951(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop719732 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3951(t6,((C_word*)t0)[3],t5);}}

/* k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2242(C_word c,C_word t0,C_word t1){
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
C_word ab[59],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2242,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|32,a[1]=(C_word)f_2246,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],a[27]=((C_word*)t0)[26],a[28]=((C_word*)t0)[27],a[29]=((C_word*)t0)[28],a[30]=((C_word*)t0)[29],a[31]=((C_word*)t0)[30],a[32]=((C_word*)t0)[31],tmp=(C_word)a,a+=33,tmp);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3846,a[2]=((C_word*)t0)[31],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3850,a[2]=t7,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_END_OF_LIST;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_FALSE;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3906,a[2]=t1,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3910,a[2]=t13,a[3]=t10,a[4]=t12,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 321  collect-options */
t15=((C_word*)((C_word*)t0)[16])[1];
f_1902(t15,t14,lf[301]);}

/* k3908 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3910,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3912,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3912(t5,((C_word*)t0)[2],t1);}

/* loop770 in k3908 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3912(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3912,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[300]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3941,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g786787 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3939 in loop770 in k3908 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3941(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3941,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop770783 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3912(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop770783 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3912(t6,((C_word*)t0)[3],t5);}}

/* k3904 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3906(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 321  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[231]+1)))(4,*((C_word*)lf[231]+1),((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3848 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3850,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3852,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3852(t5,((C_word*)t0)[2],t1);}

/* loop742 in k3848 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3852(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3852,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,C_SCHEME_TRUE,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(C_word)C_a_i_cons(&a,2,lf[299],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t9=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t8);
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t8);
t11=(C_word)C_slot(t2,C_fix(1));
/* loop742755 */
t17=t1;
t18=t11;
t1=t17;
t2=t18;
goto loop;}
else{
t9=C_mutate(((C_word *)((C_word*)t0)[2])+1,t8);
t10=C_mutate(((C_word *)((C_word*)t0)[4])+1,t8);
t11=(C_word)C_slot(t2,C_fix(1));
/* loop742755 */
t17=t1;
t18=t11;
t1=t17;
t2=t18;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3844 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 318  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[231]+1)))(4,*((C_word*)lf[231]+1),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2246,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[32])+1,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2250,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[32],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
/* batch-driver.scm: 325  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[231]+1)))(4,*((C_word*)lf[231]+1),t3,C_retrieve(lf[72]),((C_word*)t0)[2]);}

/* k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2250,2,t0,t1);}
t2=C_mutate((C_word*)lf[72]+1 /* (set! explicit-library-modules ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|31,a[1]=(C_word)f_2253,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],a[25]=((C_word*)t0)[25],a[26]=((C_word*)t0)[26],a[27]=((C_word*)t0)[27],a[28]=((C_word*)t0)[28],a[29]=((C_word*)t0)[29],a[30]=((C_word*)t0)[30],a[31]=((C_word*)t0)[31],tmp=(C_word)a,a+=32,tmp);
if(C_truep((C_word)C_i_memq(lf[297],((C_word*)t0)[31]))){
t4=C_set_block_item(lf[298] /* enable-runtime-macros */,0,C_SCHEME_TRUE);
t5=t3;
f_2253(t5,t4);}
else{
t4=t3;
f_2253(t4,C_SCHEME_UNDEFINED);}}

/* k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2253(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2253,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|30,a[1]=(C_word)f_2257,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],a[30]=((C_word*)t0)[31],tmp=(C_word)a,a+=31,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3825,a[2]=t2,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 331  option-arg */
f_1537(t3,((C_word*)t0)[2]);}
else{
t3=C_retrieve(lf[296]);
if(C_truep(t3)){
t4=(C_word)C_eqp(t3,C_fix(0));
t5=t2;
f_2257(2,t5,(C_truep(t4)?C_SCHEME_FALSE:t3));}
else{
t4=t2;
f_2257(2,t4,C_SCHEME_FALSE);}}}

/* k3823 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 331  arg-val */
f_1822(((C_word*)t0)[2],t1);}

/* k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2257,2,t0,t1);}
t2=C_mutate((C_word*)lf[73]+1 /* (set! target-heap-size ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|29,a[1]=(C_word)f_2261,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],a[29]=((C_word*)t0)[30],tmp=(C_word)a,a+=30,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3818,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 335  option-arg */
f_1537(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_2261(2,t4,C_SCHEME_FALSE);}}

/* k3816 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 335  arg-val */
f_1822(((C_word*)t0)[2],t1);}

/* k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2261,2,t0,t1);}
t2=C_mutate((C_word*)lf[74]+1 /* (set! target-initial-heap-size ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|28,a[1]=(C_word)f_2265,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],a[28]=((C_word*)t0)[29],tmp=(C_word)a,a+=29,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3811,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 336  option-arg */
f_1537(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_2265(2,t4,C_SCHEME_FALSE);}}

/* k3809 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 336  arg-val */
f_1822(((C_word*)t0)[2],t1);}

/* k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2265,2,t0,t1);}
t2=C_mutate((C_word*)lf[75]+1 /* (set! target-heap-growth ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|27,a[1]=(C_word)f_2269,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],a[24]=((C_word*)t0)[25],a[25]=((C_word*)t0)[26],a[26]=((C_word*)t0)[27],a[27]=((C_word*)t0)[28],tmp=(C_word)a,a+=28,tmp);
if(C_truep(((C_word*)t0)[2])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3804,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 337  option-arg */
f_1537(t4,((C_word*)t0)[2]);}
else{
t4=t3;
f_2269(2,t4,C_SCHEME_FALSE);}}

/* k3802 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 337  arg-val */
f_1822(((C_word*)t0)[2],t1);}

/* k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2269,2,t0,t1);}
t2=C_mutate((C_word*)lf[76]+1 /* (set! target-heap-shrinkage ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2273,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],a[18]=((C_word*)t0)[21],a[19]=((C_word*)t0)[22],a[20]=((C_word*)t0)[23],a[21]=((C_word*)t0)[24],a[22]=((C_word*)t0)[25],a[23]=((C_word*)t0)[26],a[24]=((C_word*)t0)[27],tmp=(C_word)a,a+=25,tmp);
if(C_truep(((C_word*)t0)[4])){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3784,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 340  option-arg */
f_1537(t4,((C_word*)t0)[4]);}
else{
t4=C_retrieve(lf[295]);
if(C_truep(t4)){
t5=(C_word)C_eqp(t4,C_fix(0));
t6=t3;
f_2273(2,t6,(C_truep(t5)?C_SCHEME_FALSE:t4));}
else{
t5=t3;
f_2273(2,t5,C_SCHEME_FALSE);}}}

/* k3782 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 340  arg-val */
f_1822(((C_word*)t0)[2],t1);}

/* k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2273,2,t0,t1);}
t2=C_mutate((C_word*)lf[77]+1 /* (set! target-stack-size ...) */,t1);
t3=(C_word)C_i_memq(lf[78],((C_word*)t0)[24]);
t4=(C_word)C_i_not(t3);
t5=C_mutate((C_word*)lf[79]+1 /* (set! emit-trace-info ...) */,t4);
t6=(C_word)C_i_memq(lf[80],((C_word*)t0)[24]);
t7=C_mutate((C_word*)lf[81]+1 /* (set! disable-stack-overflow-checking ...) */,t6);
t8=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2284,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
if(C_truep((C_word)C_i_memq(lf[293],C_retrieve(lf[36])))){
/* batch-driver.scm: 346  set-gc-report! */
((C_proc3)C_retrieve_symbol_proc(lf[294]))(3,*((C_word*)lf[294]+1),t8,C_SCHEME_TRUE);}
else{
t9=t8;
f_2284(2,t9,C_SCHEME_UNDEFINED);}}

/* k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2284,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
if(C_truep((C_word)C_i_memq(lf[288],((C_word*)t0)[24]))){
t3=t2;
f_2287(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_mutate((C_word*)lf[289]+1 /* (set! standard-bindings ...) */,C_retrieve(lf[290]));
t4=C_mutate((C_word*)lf[291]+1 /* (set! extended-bindings ...) */,C_retrieve(lf[292]));
t5=t2;
f_2287(t5,t4);}}

/* k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2287(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2287,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2290,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],a[24]=((C_word*)t0)[24],tmp=(C_word)a,a+=25,tmp);
if(C_truep(C_retrieve(lf[79]))){
/* batch-driver.scm: 350  dribble */
t3=((C_word*)((C_word*)t0)[16])[1];
f_1645(t3,t2,lf[285],(C_word)C_a_i_list(&a,1,lf[286]));}
else{
/* batch-driver.scm: 350  dribble */
t3=((C_word*)((C_word*)t0)[16])[1];
f_1645(t3,t2,lf[285],(C_word)C_a_i_list(&a,1,lf[287]));}}

/* k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2290,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2293,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[24],tmp=(C_word)a,a+=24,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(C_word)C_i_car(((C_word*)t0)[2]);
t4=(C_word)C_eqp(lf[277],t3);
t5=C_set_block_item(lf[238] /* emit-profile */,0,C_SCHEME_TRUE);
t6=C_mutate((C_word*)lf[278]+1 /* (set! profiled-procedures ...) */,lf[279]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3743,a[2]=t2,a[3]=((C_word*)t0)[16],a[4]=t4,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
/* batch-driver.scm: 359  append */
((C_proc5)C_retrieve_proc(*((C_word*)lf[231]+1)))(5,*((C_word*)lf[231]+1),t7,((C_word*)((C_word*)t0)[6])[1],C_retrieve(lf[283]),lf[284]);}
else{
/* batch-driver.scm: 359  append */
((C_proc5)C_retrieve_proc(*((C_word*)lf[231]+1)))(5,*((C_word*)lf[231]+1),t7,((C_word*)((C_word*)t0)[6])[1],C_retrieve(lf[283]),C_SCHEME_END_OF_LIST);}}
else{
t3=t2;
f_2293(2,t3,C_SCHEME_UNDEFINED);}}

/* k3741 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3743,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
if(C_truep(((C_word*)t0)[4])){
/* batch-driver.scm: 365  dribble */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1645(t3,((C_word*)t0)[2],lf[280],(C_word)C_a_i_list(&a,1,lf[281]));}
else{
/* batch-driver.scm: 365  dribble */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1645(t3,((C_word*)t0)[2],lf[280],(C_word)C_a_i_list(&a,1,lf[282]));}}

/* k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2293,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2296,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm: 368  load-identifier-database */
((C_proc3)C_retrieve_symbol_proc(lf[275]))(3,*((C_word*)lf[275]+1),t2,lf[276]);}

/* k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2296,2,t0,t1);}
if(C_truep((C_word)C_i_memq(lf[82],((C_word*)t0)[23]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2305,a[2]=((C_word*)t0)[22],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 371  print-version */
((C_proc3)C_retrieve_symbol_proc(lf[83]))(3,*((C_word*)lf[83]+1),t2,C_SCHEME_TRUE);}
else{
t2=(C_word)C_i_memq(lf[84],((C_word*)t0)[23]);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2317,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[23],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
if(C_truep(t2)){
t4=t3;
f_2317(t4,t2);}
else{
t4=(C_word)C_i_memq(lf[272],((C_word*)t0)[23]);
if(C_truep(t4)){
t5=t3;
f_2317(t5,t4);}
else{
t5=(C_word)C_i_memq(lf[273],((C_word*)t0)[23]);
t6=t3;
f_2317(t6,(C_truep(t5)?t5:(C_word)C_i_memq(lf[274],((C_word*)t0)[23])));}}}}

/* k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2317(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2317,NULL,2,t0,t1);}
if(C_truep(t1)){
/* batch-driver.scm: 374  print-usage */
((C_proc2)C_retrieve_symbol_proc(lf[85]))(2,*((C_word*)lf[85]+1),((C_word*)t0)[23]);}
else{
if(C_truep((C_word)C_i_memq(lf[86],((C_word*)t0)[22]))){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2329,a[2]=((C_word*)t0)[23],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2336,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 376  chicken-version */
((C_proc2)C_retrieve_symbol_proc(lf[87]))(2,*((C_word*)lf[87]+1),t3);}
else{
t2=((C_word*)t0)[21];
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2351,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[22],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[23],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],a[18]=((C_word*)t0)[16],a[19]=((C_word*)t0)[17],a[20]=((C_word*)t0)[18],a[21]=((C_word*)t0)[19],a[22]=((C_word*)t0)[20],a[23]=((C_word*)t0)[21],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm: 384  dribble */
t4=((C_word*)((C_word*)t0)[15])[1];
f_1645(t4,t3,lf[270],(C_word)C_a_i_list(&a,1,((C_word*)t0)[21]));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2345,a[2]=((C_word*)t0)[23],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 379  print-version */
((C_proc3)C_retrieve_symbol_proc(lf[83]))(3,*((C_word*)lf[83]+1),t3,C_SCHEME_TRUE);}}}}

/* k2343 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 380  display */
((C_proc3)C_retrieve_proc(*((C_word*)lf[37]+1)))(3,*((C_word*)lf[37]+1),((C_word*)t0)[2],lf[271]);}

/* k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2351,2,t0,t1);}
t2=C_mutate((C_word*)lf[88]+1 /* (set! source-filename ...) */,((C_word*)t0)[23]);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2355,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[23],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm: 386  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[104]))(5,*((C_word*)lf[104]+1),t3,lf[265],lf[269],((C_word*)t0)[9]);}

/* k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2358,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm: 387  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[104]))(5,*((C_word*)lf[104]+1),t2,lf[265],lf[268],C_retrieve(lf[36]));}

/* k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2358,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2361,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm: 388  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[104]))(5,*((C_word*)lf[104]+1),t2,lf[265],lf[267],C_retrieve(lf[73]));}

/* k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2361,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2364,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm: 389  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[104]))(5,*((C_word*)lf[104]+1),t2,lf[265],lf[266],C_retrieve(lf[77]));}

/* k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2364,2,t0,t1);}
t2=(C_word)C_fudge(C_fix(6));
t3=C_mutate(((C_word *)((C_word*)t0)[23])+1,t2);
t4=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2372,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[23],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm: 393  make-vector */
((C_proc4)C_retrieve_proc(*((C_word*)lf[263]+1)))(4,*((C_word*)lf[263]+1),t4,C_retrieve(lf[264]),C_SCHEME_END_OF_LIST);}

/* k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2372,2,t0,t1);}
t2=C_mutate((C_word*)lf[48]+1 /* (set! line-number-database ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|23,a[1]=(C_word)f_2375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],a[23]=((C_word*)t0)[23],tmp=(C_word)a,a+=24,tmp);
/* batch-driver.scm: 394  collect-options */
t4=((C_word*)((C_word*)t0)[10])[1];
f_1902(t4,t3,lf[262]);}

/* k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|24,a[1]=(C_word)f_2378,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],tmp=(C_word)a,a+=25,tmp);
/* batch-driver.scm: 395  collect-options */
t3=((C_word*)((C_word*)t0)[10])[1];
f_1902(t3,t2,lf[261]);}

/* k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2378,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|25,a[1]=(C_word)f_2381,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],tmp=(C_word)a,a+=26,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3711,a[2]=((C_word*)t0)[11],a[3]=t2,a[4]=((C_word*)t0)[18],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 397  collect-options */
t4=((C_word*)((C_word*)t0)[11])[1];
f_1902(t4,t3,lf[260]);}

/* k3709 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3711,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3719,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 399  collect-options */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1902(t4,t3,lf[259]);}

/* k3717 in k3709 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 396  append */
((C_proc5)C_retrieve_proc(*((C_word*)lf[231]+1)))(5,*((C_word*)lf[231]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2381,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|26,a[1]=(C_word)f_2384,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],a[21]=((C_word*)t0)[20],a[22]=((C_word*)t0)[21],a[23]=((C_word*)t0)[22],a[24]=((C_word*)t0)[23],a[25]=((C_word*)t0)[24],a[26]=((C_word*)t0)[25],tmp=(C_word)a,a+=27,tmp);
/* batch-driver.scm: 401  user-read-pass */
((C_proc2)C_retrieve_symbol_proc(lf[3]))(2,*((C_word*)lf[3]+1),t2);}

/* k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2384,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2387,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[15],a[12]=((C_word*)t0)[16],a[13]=((C_word*)t0)[17],a[14]=((C_word*)t0)[18],a[15]=((C_word*)t0)[19],a[16]=((C_word*)t0)[20],a[17]=((C_word*)t0)[21],a[18]=((C_word*)t0)[22],a[19]=((C_word*)t0)[23],a[20]=((C_word*)t0)[24],a[21]=((C_word*)t0)[25],a[22]=((C_word*)t0)[26],tmp=(C_word)a,a+=23,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3547,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm: 403  dribble */
t4=((C_word*)((C_word*)t0)[22])[1];
f_1645(t4,t3,lf[252],C_SCHEME_END_OF_LIST);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3556,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_3556(t6,t2,((C_word*)t0)[4]);}}

/* doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3556(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3556,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3567,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3571,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3616,a[2]=t5,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3616(t12,t8,((C_word*)t0)[4]);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm: 413  check-and-open-input-file */
((C_proc3)C_retrieve_symbol_proc(lf[258]))(3,*((C_word*)lf[258]+1),t4,t3);}}

/* k3653 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3655(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3655,2,t0,t1);}
t2=((C_word*)t0)[7];
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3658,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3667,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3704,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* ##sys#dynamic-wind */
t10=*((C_word*)lf[257]+1);
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t6,t7,t8,t9);}

/* a3703 in k3653 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3704,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve(lf[255]));
t3=C_mutate((C_word*)lf[255]+1 /* (set! current-source-filename ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* a3671 in k3653 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3672,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3676,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm: 415  read-form */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1976(t3,t2,((C_word*)t0)[5]);}

/* k3674 in a3671 in k3653 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3676,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3681,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_3681(t5,((C_word*)t0)[2],t1);}

/* doloop919 in k3674 in a3671 in k3653 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3681(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3681,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_eofp(t2))){
/* batch-driver.scm: 418  close-checked-input-file */
((C_proc4)C_retrieve_symbol_proc(lf[256]))(4,*((C_word*)lf[256]+1),t1,((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[4])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[4])+1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3702,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 416  read-form */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1976(t6,t5,((C_word*)t0)[6]);}}

/* k3700 in doloop919 in k3674 in a3671 in k3653 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
f_3681(t2,((C_word*)t0)[2],t1);}

/* a3666 in k3653 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3667,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,C_retrieve(lf[255]));
t3=C_mutate((C_word*)lf[255]+1 /* (set! current-source-filename ...) */,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}

/* k3656 in k3653 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_3556(t3,((C_word*)t0)[2],t2);}

/* loop861 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3616(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3616,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[253]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3645,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g877878 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3643 in loop861 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3645(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3645,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop861874 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3616(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop861874 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3616(t6,((C_word*)t0)[3],t5);}}

/* k3569 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3571,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3575,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 410  reverse */
((C_proc3)C_retrieve_proc(*((C_word*)lf[254]+1)))(3,*((C_word*)lf[254]+1),t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k3573 in k3569 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3575(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3575,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3579,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3581,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3581(t10,t6,((C_word*)t0)[2]);}

/* loop884 in k3573 in k3569 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3581(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3581,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[253]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3610,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g900901 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3608 in loop884 in k3573 in k3569 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3610(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3610,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop884897 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3581(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop884897 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3581(t6,((C_word*)t0)[3],t5);}}

/* k3577 in k3573 in k3569 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 409  append */
((C_proc5)C_retrieve_proc(*((C_word*)lf[231]+1)))(5,*((C_word*)lf[231]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3565 in doloop854 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3545 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3547,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3551,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 404  proc */
t3=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3549 in k3545 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2387(2,t3,t2);}

/* k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2387,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2390,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm: 422  user-preprocessor-pass */
((C_proc2)C_retrieve_symbol_proc(lf[4]))(2,*((C_word*)lf[4]+1),t2);}

/* k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2393,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3505,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 424  dribble */
t4=((C_word*)((C_word*)t0)[18])[1];
f_1645(t4,t3,lf[251],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2393(t3,C_SCHEME_UNDEFINED);}}

/* k3503 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3505(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3505,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3509,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3511,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t8,a[5]=t5,tmp=(C_word)a,a+=6,tmp));
t10=((C_word*)t8)[1];
f_3511(t10,t6,((C_word*)((C_word*)t0)[4])[1]);}

/* loop935 in k3503 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3511(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3511,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3540,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g951952 */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3538 in loop935 in k3503 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3540(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3540,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop935948 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3511(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop935948 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3511(t6,((C_word*)t0)[3],t5);}}

/* k3507 in k3503 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2393(t3,t2);}

/* k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2393(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2393,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|22,a[1]=(C_word)f_2396,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],a[20]=((C_word*)t0)[20],a[21]=((C_word*)t0)[21],a[22]=((C_word*)t0)[22],tmp=(C_word)a,a+=23,tmp);
/* batch-driver.scm: 427  print-expr */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1730(t3,t2,lf[249],lf[250],((C_word*)((C_word*)t0)[3])[1]);}

/* k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2396,2,t0,t1);}
t2=f_1937(((C_word*)((C_word*)t0)[22])[1]);
t3=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2402,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],a[18]=((C_word*)t0)[19],a[19]=((C_word*)t0)[20],a[20]=((C_word*)t0)[21],a[21]=((C_word*)t0)[22],tmp=(C_word)a,a+=22,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[2])[1]))){
t4=t3;
f_2402(t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3482,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 430  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[231]+1)))(4,*((C_word*)lf[231]+1),t4,C_retrieve(lf[72]),((C_word*)((C_word*)t0)[2])[1]);}}

/* k3480 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3482,2,t0,t1);}
t2=C_mutate((C_word*)lf[72]+1 /* (set! explicit-library-modules ...) */,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3502,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* ##sys#append */
t4=*((C_word*)lf[248]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[2])[1],C_SCHEME_END_OF_LIST);}

/* k3500 in k3480 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3502,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[246],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,lf[247],t3);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)((C_word*)t0)[3])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
t7=((C_word*)t0)[2];
f_2402(t7,t6);}

/* k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2402(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_2402,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2405,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],a[17]=((C_word*)t0)[19],a[18]=((C_word*)t0)[20],a[19]=((C_word*)t0)[21],tmp=(C_word)a,a+=20,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3440,a[2]=t6,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 432  append */
((C_proc4)C_retrieve_proc(*((C_word*)lf[231]+1)))(4,*((C_word*)lf[231]+1),t7,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* k3438 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3440,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3442,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3442(t5,((C_word*)t0)[2],t1);}

/* loop968 in k3438 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3442(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3442,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_retrieve(lf[245]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3471,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g984985 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3469 in loop968 in k3438 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3471(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3471,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop968981 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3442(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop968981 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3442(t6,((C_word*)t0)[3],t5);}}

/* k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2405,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|20,a[1]=(C_word)f_2408,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],a[20]=((C_word*)t0)[19],tmp=(C_word)a,a+=21,tmp);
/* batch-driver.scm: 433  gensym */
((C_proc2)C_retrieve_symbol_proc(lf[244]))(2,*((C_word*)lf[244]+1),t2);}

/* k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2408(C_word c,C_word t0,C_word t1){
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
C_word ab[37],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2408,2,t0,t1);}
t2=(C_word)C_i_length(C_retrieve(lf[89]));
t3=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=((C_word*)t0)[13],a[11]=((C_word*)t0)[14],a[12]=((C_word*)t0)[15],a[13]=((C_word*)t0)[16],a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[18],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[20],tmp=(C_word)a,a+=18,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3180,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[4],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3374,a[2]=t5,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_3374(t12,t8,C_retrieve(lf[243]));}

/* loop994 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3374(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3374,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_cdr(t3);
t5=(C_word)C_i_car(t3);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
t7=(C_word)C_a_i_cons(&a,2,lf[235],t6);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,t4,t8);
t10=(C_word)C_a_i_cons(&a,2,lf[240],t9);
t11=(C_word)C_a_i_cons(&a,2,t10,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t12=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t11);
t13=C_mutate(((C_word *)((C_word*)t0)[4])+1,t11);
t14=(C_word)C_slot(t2,C_fix(1));
/* loop9941007 */
t20=t1;
t21=t14;
t1=t20;
t2=t21;
goto loop;}
else{
t12=C_mutate(((C_word *)((C_word*)t0)[2])+1,t11);
t13=C_mutate(((C_word *)((C_word*)t0)[4])+1,t11);
t14=(C_word)C_slot(t2,C_fix(1));
/* loop9941007 */
t20=t1;
t21=t14;
t1=t20;
t2=t21;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3178 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3180(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3180,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3184,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3330,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3330(t10,t6,C_retrieve(lf[242]));}

/* loop1022 in k3178 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3330(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3330,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_a_i_cons(&a,2,t3,C_SCHEME_END_OF_LIST);
t5=(C_word)C_a_i_cons(&a,2,lf[241],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t7=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop10221035 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=C_mutate(((C_word *)((C_word*)t0)[4])+1,t6);
t9=(C_word)C_slot(t2,C_fix(1));
/* loop10221035 */
t15=t1;
t16=t9;
t1=t15;
t2=t16;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3182 in k3178 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3184(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3184,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3188,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_retrieve(lf[238]))){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_SCHEME_END_OF_LIST);
t4=(C_word)C_a_i_cons(&a,2,lf[235],t3);
t5=(C_truep(C_retrieve(lf[217]))?(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,C_SCHEME_END_OF_LIST):(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST));
t6=(C_word)C_a_i_cons(&a,2,lf[235],t5);
t7=(C_word)C_a_i_cons(&a,2,t6,C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,t4,t7);
t9=(C_word)C_a_i_cons(&a,2,lf[239],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,C_retrieve(lf[236]),t10);
t12=(C_word)C_a_i_cons(&a,2,lf[240],t11);
t13=t2;
f_3188(t13,(C_word)C_a_i_cons(&a,2,t12,C_SCHEME_END_OF_LIST));}
else{
t3=t2;
f_3188(t3,C_SCHEME_END_OF_LIST);}}

/* k3186 in k3182 in k3178 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3188(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3188,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3192,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3207,a[2]=t3,a[3]=t8,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_3207(t10,t6,C_retrieve(lf[89]));}

/* loop1054 in k3186 in k3182 in k3178 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3207(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_3207,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_i_car(t3);
t5=(C_word)C_a_i_cons(&a,2,t4,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_cons(&a,2,lf[235],t5);
t7=(C_word)C_i_cdr(t3);
t8=(C_word)C_a_i_cons(&a,2,t7,C_SCHEME_END_OF_LIST);
t9=(C_word)C_a_i_cons(&a,2,lf[235],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,C_SCHEME_END_OF_LIST);
t11=(C_word)C_a_i_cons(&a,2,t6,t10);
t12=(C_word)C_a_i_cons(&a,2,C_retrieve(lf[236]),t11);
t13=(C_word)C_a_i_cons(&a,2,lf[237],t12);
t14=(C_word)C_a_i_cons(&a,2,t13,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t15=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[4])[1],C_fix(1),t14);
t16=C_mutate(((C_word *)((C_word*)t0)[4])+1,t14);
t17=(C_word)C_slot(t2,C_fix(1));
/* loop10541067 */
t23=t1;
t24=t17;
t1=t23;
t2=t24;
goto loop;}
else{
t15=C_mutate(((C_word *)((C_word*)t0)[2])+1,t14);
t16=C_mutate(((C_word *)((C_word*)t0)[4])+1,t14);
t17=(C_word)C_slot(t2,C_fix(1));
/* loop10541067 */
t23=t1;
t24=t17;
t1=t23;
t2=t24;
goto loop;}}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3190 in k3186 in k3182 in k3178 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_retrieve(lf[217]);
if(C_truep(t2)){
/* batch-driver.scm: 435  append */
((C_proc9)C_retrieve_proc(*((C_word*)lf[231]+1)))(9,*((C_word*)lf[231]+1),((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,lf[232]);}
else{
if(C_truep(((C_word*)t0)[3])){
/* batch-driver.scm: 435  append */
((C_proc9)C_retrieve_proc(*((C_word*)lf[231]+1)))(9,*((C_word*)lf[231]+1),((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],C_SCHEME_END_OF_LIST,lf[233]);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
/* batch-driver.scm: 435  append */
((C_proc9)C_retrieve_proc(*((C_word*)lf[231]+1)))(9,*((C_word*)lf[231]+1),((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],t3,lf[234]);}}}

/* k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2414,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2417,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],tmp=(C_word)a,a+=19,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3119,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(C_retrieve(lf[228])))){
/* batch-driver.scm: 457  debugging */
((C_proc4)C_retrieve_symbol_proc(lf[104]))(4,*((C_word*)lf[104]+1),t5,lf[229],lf[230]);}
else{
t6=t5;
f_3119(2,t6,C_SCHEME_FALSE);}}

/* k3117 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3119,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3124,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_3124(t5,((C_word*)t0)[2],C_retrieve(lf[228]));}
else{
t2=((C_word*)t0)[2];
f_2417(2,t2,C_SCHEME_UNDEFINED);}}

/* loop1088 in k3117 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3124(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3124,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3159,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=*((C_word*)lf[32]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3136,a[2]=t4,a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[37]+1)))(4,*((C_word*)lf[37]+1),t6,lf[227],t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3134 in loop1088 in k3117 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3136,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3139,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[37]+1)))(4,*((C_word*)lf[37]+1),t2,t3,((C_word*)t0)[3]);}

/* k3137 in k3134 in loop1088 in k3117 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3139,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[37]+1)))(4,*((C_word*)lf[37]+1),t2,lf[226],((C_word*)t0)[3]);}

/* k3140 in k3137 in k3134 in loop1088 in k3117 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3142,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3145,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[37]+1)))(4,*((C_word*)lf[37]+1),t2,t3,((C_word*)t0)[3]);}

/* k3143 in k3140 in k3137 in k3134 in loop1088 in k3117 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=C_retrieve(lf[34]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* k3157 in loop1088 in k3117 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3124(t3,((C_word*)t0)[2],t2);}

/* k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2417,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2420,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3113,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 461  debugging */
((C_proc4)C_retrieve_symbol_proc(lf[104]))(4,*((C_word*)lf[104]+1),t3,lf[224],lf[225]);}

/* k3111 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm: 462  display-real-name-table */
((C_proc2)C_retrieve_symbol_proc(lf[223]))(2,*((C_word*)lf[223]+1),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
f_2420(2,t2,C_SCHEME_UNDEFINED);}}

/* k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2423,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3107,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 463  debugging */
((C_proc4)C_retrieve_symbol_proc(lf[104]))(4,*((C_word*)lf[104]+1),t3,lf[221],lf[222]);}

/* k3105 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm: 464  display-line-number-database */
((C_proc2)C_retrieve_symbol_proc(lf[220]))(2,*((C_word*)lf[220]+1),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
f_2423(2,t2,C_SCHEME_UNDEFINED);}}

/* k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2423,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2426,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
if(C_truep(C_retrieve(lf[217]))){
if(C_truep(((C_word*)t0)[11])){
/* batch-driver.scm: 467  compiler-warning */
((C_proc5)C_retrieve_symbol_proc(lf[212]))(5,*((C_word*)lf[212]+1),t2,lf[218],lf[219],C_retrieve(lf[217]));}
else{
t3=t2;
f_2426(2,t3,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_2426(2,t3,C_SCHEME_UNDEFINED);}}

/* k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2429,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3092,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve(lf[159]))){
/* batch-driver.scm: 469  feature? */
((C_proc3)C_retrieve_symbol_proc(lf[215]))(3,*((C_word*)lf[215]+1),t3,lf[216]);}
else{
t4=t2;
f_2429(2,t4,C_SCHEME_UNDEFINED);}}

/* k3090 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm: 470  compiler-warning */
((C_proc4)C_retrieve_symbol_proc(lf[212]))(4,*((C_word*)lf[212]+1),((C_word*)t0)[2],lf[213],lf[214]);}
else{
t2=((C_word*)t0)[2];
f_2429(2,t2,C_SCHEME_UNDEFINED);}}

/* k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2429,2,t0,t1);}
t2=C_mutate((C_word*)lf[48]+1 /* (set! line-number-database ...) */,C_retrieve(lf[90]));
t3=C_set_block_item(lf[90] /* line-number-database-2 */,0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
/* batch-driver.scm: 477  end-time */
t5=((C_word*)((C_word*)t0)[17])[1];
f_1947(t5,t4,lf[211]);}

/* k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2434,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2437,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm: 478  print-expr */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1730(t3,t2,lf[209],lf[210],((C_word*)((C_word*)t0)[3])[1]);}

/* k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2440,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
if(C_truep((C_word)C_i_memq(lf[208],((C_word*)t0)[3]))){
/* batch-driver.scm: 480  exit */
((C_proc2)C_retrieve_symbol_proc(lf[124]))(2,*((C_word*)lf[124]+1),t2);}
else{
t3=t2;
f_2440(2,t3,C_SCHEME_UNDEFINED);}}

/* k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2440,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2443,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
/* batch-driver.scm: 482  user-pass */
((C_proc2)C_retrieve_symbol_proc(lf[5]))(2,*((C_word*)lf[5]+1),t2);}

/* k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2443,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2446,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],tmp=(C_word)a,a+=18,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3038,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[16],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[17],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm: 484  dribble */
t4=((C_word*)((C_word*)t0)[13])[1];
f_1645(t4,t3,lf[207],C_SCHEME_END_OF_LIST);}
else{
t3=t2;
f_2446(2,t3,C_SCHEME_UNDEFINED);}}

/* k3036 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3038(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3038,2,t0,t1);}
t2=f_1937(((C_word*)((C_word*)t0)[6])[1]);
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3045,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3050,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t9,a[5]=t6,tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_3050(t11,t7,((C_word*)((C_word*)t0)[5])[1]);}

/* loop1126 in k3036 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_3050(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3050,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3079,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
/* g11421143 */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}
else{
t3=((C_word*)((C_word*)t0)[3])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k3077 in loop1126 in k3036 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3079(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3079,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop11261139 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3050(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop11261139 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_3050(t6,((C_word*)t0)[3],t5);}}

/* k3043 in k3036 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* batch-driver.scm: 487  end-time */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1947(t3,((C_word*)t0)[2],lf[206]);}

/* k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3031,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],tmp=(C_word)a,a+=17,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3035,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 492  canonicalize-begin-body */
((C_proc3)C_retrieve_symbol_proc(lf[205]))(3,*((C_word*)lf[205]+1),t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k3033 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 491  build-node-graph */
((C_proc3)C_retrieve_symbol_proc(lf[204]))(3,*((C_word*)lf[204]+1),((C_word*)t0)[2],t1);}

/* k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3031,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_record(&a,4,lf[91],lf[92],lf[93],t2);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2457,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=((C_word*)t0)[14],a[17]=((C_word*)t0)[15],a[18]=((C_word*)t0)[16],tmp=(C_word)a,a+=19,tmp);
/* batch-driver.scm: 495  print-node */
t7=((C_word*)((C_word*)t0)[13])[1];
f_1684(t7,t6,lf[202],lf[203],t3);}

/* k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2457,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],tmp=(C_word)a,a+=19,tmp);
/* batch-driver.scm: 496  initialize-analysis-database */
((C_proc2)C_retrieve_symbol_proc(lf[201]))(2,*((C_word*)lf[201]+1),t2);}

/* k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2460,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2463,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],a[17]=((C_word*)t0)[18],tmp=(C_word)a,a+=18,tmp);
if(C_truep(C_retrieve(lf[185]))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2977,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[16],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[17],a[7]=t2,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[18],tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_word)C_i_memq(lf[199],((C_word*)t0)[2]))){
t4=t3;
f_2977(2,t4,C_SCHEME_UNDEFINED);}
else{
/* batch-driver.scm: 501  load-type-database */
((C_proc3)C_retrieve_symbol_proc(lf[196]))(3,*((C_word*)lf[196]+1),t3,lf[200]);}}
else{
t3=t2;
f_2463(t3,C_SCHEME_UNDEFINED);}}

/* k2975 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2977,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2980,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3009,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3017,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 502  collect-options */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1902(t5,t4,lf[198]);}

/* k3015 in k2975 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[197]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a3008 in k2975 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3009(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3009,3,t0,t1,t2);}
t3=C_retrieve(lf[196]);
/* g11741175 */
t4=t3;
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,C_SCHEME_FALSE);}

/* k2978 in k2975 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2980,2,t0,t1);}
t2=f_1937(((C_word*)((C_word*)t0)[8])[1]);
t3=C_set_block_item(lf[96] /* first-analysis */,0,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2988,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm: 505  analyze */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1982(t5,t4,lf[195],((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}

/* k2986 in k2978 in k2975 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2988,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2991,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm: 506  print-db */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1706(t4,t3,lf[194],lf[188],((C_word*)((C_word*)t0)[7])[1],C_fix(0));}

/* k2989 in k2986 in k2978 in k2975 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2991,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2994,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm: 507  end-time */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1947(t3,t2,lf[193]);}

/* k2992 in k2989 in k2986 in k2978 in k2975 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2994,2,t0,t1);}
t2=f_1937(((C_word*)((C_word*)t0)[6])[1]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3000,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm: 509  debugging */
((C_proc4)C_retrieve_symbol_proc(lf[104]))(4,*((C_word*)lf[104]+1),t3,lf[105],lf[192]);}

/* k2998 in k2992 in k2989 in k2986 in k2978 in k2975 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3000,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3003,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 510  scrutinize */
((C_proc4)C_retrieve_symbol_proc(lf[191]))(4,*((C_word*)lf[191]+1),t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k3001 in k2998 in k2992 in k2989 in k2986 in k2978 in k2975 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3003(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3003,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3006,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 511  end-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1947(t3,t2,lf[190]);}

/* k3004 in k3001 in k2998 in k2992 in k2989 in k2986 in k2978 in k2975 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_3006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[96] /* first-analysis */,0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
f_2463(t3,t2);}

/* k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2463(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2463,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2466,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_retrieve(lf[180]))){
t3=f_1937(((C_word*)((C_word*)t0)[17])[1]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[16],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[14],a[6]=t2,a[7]=((C_word*)t0)[17],tmp=(C_word)a,a+=8,tmp);
if(C_truep(C_retrieve(lf[185]))){
t5=t4;
f_2950(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=C_set_block_item(lf[96] /* first-analysis */,0,C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2968,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=((C_word*)t0)[16],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm: 518  analyze */
t7=((C_word*)((C_word*)t0)[15])[1];
f_1982(t7,t6,lf[189],((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}}
else{
t3=t2;
f_2466(t3,C_SCHEME_UNDEFINED);}}

/* k2966 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2968,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2971,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 519  print-db */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1706(t4,t3,lf[187],lf[188],((C_word*)((C_word*)t0)[5])[1],C_fix(0));}

/* k2969 in k2966 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 520  end-time */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1947(t2,((C_word*)t0)[2],lf[186]);}

/* k2948 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2950,2,t0,t1);}
t2=f_1937(((C_word*)((C_word*)t0)[7])[1]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2956,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm: 522  perform-lambda-lifting! */
((C_proc4)C_retrieve_symbol_proc(lf[184]))(4,*((C_word*)lf[184]+1),t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);}

/* k2954 in k2948 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2956,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2959,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 523  end-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1947(t3,t2,lf[183]);}

/* k2957 in k2954 in k2948 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2959,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2962,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 524  print-node */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1684(t3,t2,lf[181],lf[182],((C_word*)t0)[2]);}

/* k2960 in k2957 in k2954 in k2948 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[96] /* first-analysis */,0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
f_2466(t3,t2);}

/* k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2466(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2466,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2944,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 527  vector->list */
((C_proc3)C_retrieve_proc(*((C_word*)lf[178]+1)))(3,*((C_word*)lf[178]+1),t3,C_retrieve(lf[179]));}

/* k2942 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 527  concatenate */
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),((C_word*)t0)[2],t1);}

/* k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2469,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2472,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=((C_word*)t0)[16],tmp=(C_word)a,a+=18,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2937,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 528  debugging */
((C_proc4)C_retrieve_symbol_proc(lf[104]))(4,*((C_word*)lf[104]+1),t3,lf[176],lf[177]);}

/* k2935 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* batch-driver.scm: 529  pp */
((C_proc3)C_retrieve_symbol_proc(lf[175]))(3,*((C_word*)lf[175]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_2472(2,t2,C_SCHEME_UNDEFINED);}}

/* k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2472(C_word c,C_word t0,C_word t1){
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
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2472,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2475,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[17],tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_retrieve(lf[166]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2844,a[2]=t2,a[3]=((C_word*)t0)[13],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2899,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2901,a[2]=t5,a[3]=t10,a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_2901(t12,t8,((C_word*)t0)[2]);}
else{
t3=t2;
f_2475(2,t3,C_SCHEME_UNDEFINED);}}

/* loop1226 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2901(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2901,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=*((C_word*)lf[174]+1);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2930,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g12421243 */
t6=t3;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=((C_word*)((C_word*)t0)[2])[1];
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2928 in loop1226 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2930(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2930,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,C_SCHEME_END_OF_LIST);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[6])[1],C_fix(1),t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop12261239 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2901(t6,((C_word*)t0)[3],t5);}
else{
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t5=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* loop12261239 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2901(t6,((C_word*)t0)[3],t5);}}

/* k2897 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 539  concatenate */
((C_proc3)C_retrieve_symbol_proc(lf[173]))(3,*((C_word*)lf[173]+1),((C_word*)t0)[2],t1);}

/* k2842 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2844,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2846,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2846(t5,((C_word*)t0)[2],t1);}

/* loop1207 in k2842 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2846(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2846,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2854,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2884,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g12141215 */
t6=t3;
f_2854(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2882 in loop1207 in k2842 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2846(t3,((C_word*)t0)[2],t2);}

/* g1214 in loop1207 in k2842 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2854(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2854,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2858,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2877,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2881,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 534  symbol->string */
((C_proc3)C_retrieve_proc(*((C_word*)lf[172]+1)))(3,*((C_word*)lf[172]+1),t5,t2);}

/* k2879 in g1214 in loop1207 in k2842 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 534  make-pathname */
((C_proc5)C_retrieve_symbol_proc(lf[170]))(5,*((C_word*)lf[170]+1),((C_word*)t0)[2],C_SCHEME_FALSE,t1,lf[171]);}

/* k2875 in g1214 in loop1207 in k2842 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 533  ##sys#resolve-include-filename */
((C_proc5)C_retrieve_symbol_proc(lf[169]))(5,*((C_word*)lf[169]+1),((C_word*)t0)[2],t1,C_SCHEME_FALSE,C_SCHEME_TRUE);}

/* k2856 in g1214 in loop1207 in k2842 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2858,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2867,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 536  file-exists? */
((C_proc3)C_retrieve_symbol_proc(lf[168]))(3,*((C_word*)lf[168]+1),t2,t1);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2865 in k2856 in g1214 in loop1207 in k2842 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2867,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2870,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 537  dribble */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1645(t3,t2,lf[167],(C_word)C_a_i_list(&a,1,((C_word*)t0)[3]));}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2868 in k2865 in k2856 in g1214 in loop1207 in k2842 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 538  load-inline-file */
((C_proc3)C_retrieve_symbol_proc(lf[163]))(3,*((C_word*)lf[163]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2475,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2478,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],a[15]=((C_word*)t0)[16],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm: 540  collect-options */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1902(t3,t2,lf[165]);}

/* k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2478,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2481,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
if(C_truep((C_word)C_i_nullp(t1))){
t3=t2;
f_2481(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=C_set_block_item(lf[161] /* inline-globally */,0,C_SCHEME_TRUE);
t4=C_set_block_item(lf[162] /* inline-locally */,0,C_SCHEME_TRUE);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2808,a[2]=t6,a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_2808(t8,t2,t1);}}

/* loop1252 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2808(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2808,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2816,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2826,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* g12591260 */
t6=t3;
f_2816(t6,t4,t5);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k2824 in loop1252 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_2808(t3,((C_word*)t0)[2],t2);}

/* g1259 in loop1252 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2816(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2816,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2820,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 546  dribble */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1645(t4,t3,lf[164],(C_word)C_a_i_list(&a,1,t2));}

/* k2818 in g1259 in loop1252 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 547  load-inline-file */
((C_proc3)C_retrieve_symbol_proc(lf[163]))(3,*((C_word*)lf[163]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2481,2,t0,t1);}
t2=C_set_block_item(lf[48] /* line-number-database */,0,C_SCHEME_FALSE);
t3=C_set_block_item(lf[94] /* constant-table */,0,C_SCHEME_FALSE);
t4=C_set_block_item(lf[95] /* inline-table */,0,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2487,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
if(C_truep(C_retrieve(lf[159]))){
t6=t5;
f_2487(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=(C_word)C_slot(((C_word*)t0)[2],C_fix(3));
t7=(C_word)C_i_car(t6);
/* batch-driver.scm: 554  scan-toplevel-assignments */
((C_proc3)C_retrieve_symbol_proc(lf[160]))(3,*((C_word*)lf[160]+1),t5,t7);}}

/* k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2487,2,t0,t1);}
t2=f_1937(((C_word*)((C_word*)t0)[15])[1]);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2493,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp);
/* batch-driver.scm: 557  perform-cps-conversion */
((C_proc3)C_retrieve_symbol_proc(lf[158]))(3,*((C_word*)lf[158]+1),t3,((C_word*)t0)[2]);}

/* k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2493(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2493,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2496,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm: 558  end-time */
t3=((C_word*)((C_word*)t0)[13])[1];
f_1947(t3,t2,lf[157]);}

/* k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2496,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2499,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
/* batch-driver.scm: 559  print-node */
t3=((C_word*)((C_word*)t0)[12])[1];
f_1684(t3,t2,lf[155],lf[156],((C_word*)t0)[2]);}

/* k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2499,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2504,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=t3,a[14]=((C_word*)t0)[15],tmp=(C_word)a,a+=15,tmp));
t5=((C_word*)t3)[1];
f_2504(t5,((C_word*)t0)[3],C_fix(1),((C_word*)t0)[2],C_SCHEME_TRUE);}

/* loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2504(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2504,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t6=f_1937(((C_word*)((C_word*)t0)[14])[1]);
t7=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2511,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=t2,a[16]=t5,a[17]=((C_word*)t0)[14],a[18]=t4,tmp=(C_word)a,a+=19,tmp);
/* batch-driver.scm: 565  analyze */
t8=((C_word*)((C_word*)t0)[11])[1];
f_1982(t8,t7,lf[154],((C_word*)t5)[1],(C_word)C_a_i_list(&a,2,t2,t4));}

/* k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2511,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2514,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=t1,a[17]=((C_word*)t0)[16],a[18]=((C_word*)t0)[17],a[19]=((C_word*)t0)[18],tmp=(C_word)a,a+=20,tmp);
if(C_truep(C_retrieve(lf[96]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2758,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_memq(lf[152],C_retrieve(lf[36])))){
/* batch-driver.scm: 568  dump-undefined-globals */
((C_proc3)C_retrieve_symbol_proc(lf[153]))(3,*((C_word*)lf[153]+1),t3,t1);}
else{
t4=t3;
f_2758(2,t4,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_2514(2,t3,C_SCHEME_UNDEFINED);}}

/* k2756 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2758(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2758,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2761,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_memq(lf[150],C_retrieve(lf[36])))){
/* batch-driver.scm: 570  dump-defined-globals */
((C_proc3)C_retrieve_symbol_proc(lf[151]))(3,*((C_word*)lf[151]+1),t2,((C_word*)t0)[2]);}
else{
t3=t2;
f_2761(2,t3,C_SCHEME_UNDEFINED);}}

/* k2759 in k2756 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep((C_word)C_i_memq(lf[148],C_retrieve(lf[36])))){
/* batch-driver.scm: 572  dump-global-refs */
((C_proc3)C_retrieve_symbol_proc(lf[149]))(3,*((C_word*)lf[149]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
f_2514(2,t3,t2);}}

/* k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2514,2,t0,t1);}
t2=C_set_block_item(lf[96] /* first-analysis */,0,C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2518,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
/* batch-driver.scm: 574  end-time */
t4=((C_word*)((C_word*)t0)[13])[1];
f_1947(t4,t3,lf[147]);}

/* k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2518,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
/* batch-driver.scm: 575  print-db */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1706(t3,t2,lf[145],lf[146],((C_word*)t0)[16],((C_word*)t0)[15]);}

/* k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2521,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2524,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],a[17]=((C_word*)t0)[17],a[18]=((C_word*)t0)[18],a[19]=((C_word*)t0)[19],tmp=(C_word)a,a+=20,tmp);
if(C_truep((C_word)C_i_memq(lf[143],C_retrieve(lf[36])))){
/* batch-driver.scm: 577  print-program-statistics */
((C_proc3)C_retrieve_symbol_proc(lf[144]))(3,*((C_word*)lf[144]+1),t2,((C_word*)t0)[16]);}
else{
t3=t2;
f_2524(2,t3,C_SCHEME_UNDEFINED);}}

/* k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2524,2,t0,t1);}
if(C_truep(((C_word*)t0)[19])){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2530,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=((C_word*)t0)[13],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[16],a[9]=((C_word*)t0)[17],a[10]=((C_word*)t0)[18],tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm: 580  debugging */
((C_proc5)C_retrieve_symbol_proc(lf[104]))(5,*((C_word*)lf[104]+1),t2,lf[105],lf[110],((C_word*)t0)[15]);}
else{
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2616,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[9],a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[17],a[16]=((C_word*)t0)[18],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm: 602  print-node */
t3=((C_word*)((C_word*)t0)[11])[1];
f_1684(t3,t2,lf[141],lf[142],((C_word*)((C_word*)t0)[17])[1]);}}

/* k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2616,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(C_retrieve(lf[138]))){
t3=C_retrieve(lf[138]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2746,a[2]=((C_word*)t0)[14],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 605  dribble */
t5=((C_word*)((C_word*)t0)[13])[1];
f_1645(t5,t4,lf[140],(C_word)C_a_i_list(&a,1,t3));}
else{
t3=t2;
f_2619(2,t3,C_SCHEME_UNDEFINED);}}

/* k2744 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 606  emit-global-inline-file */
((C_proc4)C_retrieve_symbol_proc(lf[139]))(4,*((C_word*)lf[139]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2619,2,t0,t1);}
t2=f_1937(((C_word*)((C_word*)t0)[16])[1]);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2626,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm: 608  perform-closure-conversion */
((C_proc4)C_retrieve_symbol_proc(lf[137]))(4,*((C_word*)lf[137]+1),t3,((C_word*)((C_word*)t0)[15])[1],((C_word*)t0)[14]);}

/* k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2626,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[16])+1,t1);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2629,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[16],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
/* batch-driver.scm: 609  end-time */
t4=((C_word*)((C_word*)t0)[12])[1];
f_1947(t4,t3,lf[136]);}

/* k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2629,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2632,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=((C_word*)t0)[14],a[13]=((C_word*)t0)[15],a[14]=((C_word*)t0)[16],tmp=(C_word)a,a+=15,tmp);
/* batch-driver.scm: 610  print-db */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1706(t3,t2,lf[134],lf[135],((C_word*)t0)[14],((C_word*)t0)[2]);}

/* k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2632,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2635,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],tmp=(C_word)a,a+=14,tmp);
if(C_truep(C_retrieve(lf[132]))){
t3=(C_word)C_fudge(C_fix(6));
t4=(C_word)C_fixnum_difference(t3,((C_word*)((C_word*)t0)[2])[1]);
if(C_truep((C_word)C_fixnum_greaterp(t4,C_fix(60000)))){
/* batch-driver.scm: 613  display */
((C_proc3)C_retrieve_proc(*((C_word*)lf[37]+1)))(3,*((C_word*)lf[37]+1),t2,lf[133]);}
else{
t5=t2;
f_2635(2,t5,C_SCHEME_UNDEFINED);}}
else{
t3=t2;
f_2635(2,t3,C_SCHEME_UNDEFINED);}}

/* k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2635,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2638,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],tmp=(C_word)a,a+=14,tmp);
/* batch-driver.scm: 614  print-node */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1684(t3,t2,lf[130],lf[131],((C_word*)((C_word*)t0)[12])[1]);}

/* k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2638,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2641,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2714,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[12],a[4]=t2,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[13],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm: 616  debugging */
((C_proc4)C_retrieve_symbol_proc(lf[104]))(4,*((C_word*)lf[104]+1),t3,lf[105],lf[129]);}
else{
t3=t2;
f_2641(2,t3,C_SCHEME_UNDEFINED);}}

/* k2712 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2714,2,t0,t1);}
t2=f_1937(((C_word*)((C_word*)t0)[6])[1]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm: 618  perform-unboxing! */
((C_proc3)C_retrieve_symbol_proc(lf[128]))(3,*((C_word*)lf[128]+1),t3,((C_word*)((C_word*)t0)[3])[1]);}

/* k2718 in k2712 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2720,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2723,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 619  end-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1947(t3,t2,lf[127]);}

/* k2721 in k2718 in k2712 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 620  print-node */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1684(t2,((C_word*)t0)[3],lf[125],lf[126],((C_word*)((C_word*)t0)[2])[1]);}

/* k2639 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2644,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[2])){
/* batch-driver.scm: 621  exit */
((C_proc3)C_retrieve_symbol_proc(lf[124]))(3,*((C_word*)lf[124]+1),t2,C_fix(0));}
else{
t3=t2;
f_2644(2,t3,C_SCHEME_UNDEFINED);}}

/* k2642 in k2639 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2644,2,t0,t1);}
t2=f_1937(((C_word*)((C_word*)t0)[10])[1]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2652,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2658,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t3,t4);}

/* a2657 in k2642 in k2639 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2658(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2658,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2662,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=t4,a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=t1,a[11]=((C_word*)t0)[7],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm: 626  end-time */
t7=((C_word*)((C_word*)t0)[6])[1];
f_1947(t7,t6,lf[123]);}

/* k2660 in a2657 in k2642 in k2639 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2662,2,t0,t1);}
t2=f_1937(((C_word*)((C_word*)t0)[12])[1]);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2668,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
if(C_truep(((C_word*)t0)[8])){
/* batch-driver.scm: 628  open-output-file */
((C_proc3)C_retrieve_proc(*((C_word*)lf[121]+1)))(3,*((C_word*)lf[121]+1),t3,((C_word*)t0)[8]);}
else{
/* batch-driver.scm: 628  current-output-port */
((C_proc2)C_retrieve_proc(*((C_word*)lf[122]+1)))(2,*((C_word*)lf[122]+1),t3);}}

/* k2666 in k2660 in a2657 in k2642 in k2639 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2668(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2668,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2671,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* batch-driver.scm: 629  dribble */
t3=((C_word*)((C_word*)t0)[11])[1];
f_1645(t3,t2,lf[120],(C_word)C_a_i_list(&a,1,((C_word*)t0)[8]));}

/* k2669 in k2666 in k2660 in a2657 in k2642 in k2639 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2671(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2671,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2674,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm: 630  generate-code */
((C_proc9)C_retrieve_symbol_proc(lf[119]))(9,*((C_word*)lf[119]+1),t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[8],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2672 in k2669 in k2666 in k2660 in a2657 in k2642 in k2639 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2674,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2677,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
/* batch-driver.scm: 631  close-output-port */
((C_proc3)C_retrieve_proc(*((C_word*)lf[118]+1)))(3,*((C_word*)lf[118]+1),t2,((C_word*)t0)[2]);}
else{
t3=t2;
f_2677(2,t3,C_SCHEME_UNDEFINED);}}

/* k2675 in k2672 in k2669 in k2666 in k2660 in a2657 in k2642 in k2639 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2677,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2680,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 632  end-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1947(t3,t2,lf[117]);}

/* k2678 in k2675 in k2672 in k2669 in k2666 in k2660 in a2657 in k2642 in k2639 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2680,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2683,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_memq(lf[114],C_retrieve(lf[36])))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2699,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 634  ##sys#stop-timer */
t4=*((C_word*)lf[116]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f5154,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 635  compiler-cleanup-hook */
((C_proc2)C_retrieve_symbol_proc(lf[113]))(2,*((C_word*)lf[113]+1),t3);}}

/* f5154 in k2678 in k2675 in k2672 in k2669 in k2666 in k2660 in a2657 in k2642 in k2639 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f5154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 636  dribble */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1645(t2,((C_word*)t0)[2],lf[112],C_SCHEME_END_OF_LIST);}

/* k2697 in k2678 in k2675 in k2672 in k2669 in k2666 in k2660 in a2657 in k2642 in k2639 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 634  ##sys#display-times */
((C_proc3)C_retrieve_symbol_proc(lf[115]))(3,*((C_word*)lf[115]+1),((C_word*)t0)[2],t1);}

/* k2681 in k2678 in k2675 in k2672 in k2669 in k2666 in k2660 in a2657 in k2642 in k2639 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2683,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2686,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 635  compiler-cleanup-hook */
((C_proc2)C_retrieve_symbol_proc(lf[113]))(2,*((C_word*)lf[113]+1),t2);}

/* k2684 in k2681 in k2678 in k2675 in k2672 in k2669 in k2666 in k2660 in a2657 in k2642 in k2639 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2686(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 636  dribble */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1645(t2,((C_word*)t0)[2],lf[112],C_SCHEME_END_OF_LIST);}

/* a2651 in k2642 in k2639 in k2636 in k2633 in k2630 in k2627 in k2624 in k2617 in k2614 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2652,2,t0,t1);}
/* batch-driver.scm: 625  prepare-for-code-generation */
((C_proc4)C_retrieve_symbol_proc(lf[111]))(4,*((C_word*)lf[111]+1),t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* k2528 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2530(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2530,2,t0,t1);}
t2=f_1937(((C_word*)((C_word*)t0)[10])[1]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2538,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t3,t4);}

/* a2543 in k2528 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2544,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2548,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t3,tmp=(C_word)a,a+=11,tmp);
/* batch-driver.scm: 584  end-time */
t5=((C_word*)((C_word*)t0)[4])[1];
f_1947(t5,t4,lf[109]);}

/* k2546 in a2543 in k2528 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2548,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* batch-driver.scm: 585  print-node */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1684(t3,t2,lf[107],lf[108],((C_word*)t0)[6]);}

/* k2549 in k2546 in a2543 in k2528 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2551,2,t0,t1);}
if(C_truep(((C_word*)t0)[9])){
t2=(C_word)C_fixnum_increase(((C_word*)t0)[8]);
/* batch-driver.scm: 586  loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_2504(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5],C_SCHEME_TRUE);}
else{
t2=C_retrieve(lf[98]);
if(C_truep(t2)){
if(C_truep(C_retrieve(lf[99]))){
t3=f_1937(((C_word*)((C_word*)t0)[4])[1]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2587,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm: 593  analyze */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1982(t5,t4,lf[103],((C_word*)t0)[5],C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_fixnum_increase(((C_word*)t0)[8]);
/* batch-driver.scm: 599  loop */
t4=((C_word*)((C_word*)t0)[7])[1];
f_2504(t4,((C_word*)t0)[6],t3,((C_word*)t0)[5],C_SCHEME_FALSE);}}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2570,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* batch-driver.scm: 588  debugging */
((C_proc4)C_retrieve_symbol_proc(lf[104]))(4,*((C_word*)lf[104]+1),t3,lf[105],lf[106]);}}}

/* k2568 in k2549 in k2546 in a2543 in k2528 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_set_block_item(lf[98] /* inline-substitutions-enabled */,0,C_SCHEME_TRUE);
t3=(C_word)C_fixnum_increase(((C_word*)t0)[5]);
/* batch-driver.scm: 590  loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_2504(t4,((C_word*)t0)[3],t3,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* k2585 in k2549 in k2546 in a2543 in k2528 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2587,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2590,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* batch-driver.scm: 594  end-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1947(t3,t2,lf[102]);}

/* k2588 in k2585 in k2549 in k2546 in a2543 in k2528 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2590,2,t0,t1);}
t2=f_1937(((C_word*)((C_word*)t0)[8])[1]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2596,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm: 596  transform-direct-lambdas! */
((C_proc4)C_retrieve_symbol_proc(lf[101]))(4,*((C_word*)lf[101]+1),t3,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* k2594 in k2588 in k2585 in k2549 in k2546 in a2543 in k2528 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2596,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2599,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* batch-driver.scm: 597  end-time */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1947(t3,t2,lf[100]);}

/* k2597 in k2594 in k2588 in k2585 in k2549 in k2546 in a2543 in k2528 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[6]);
/* batch-driver.scm: 598  loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_2504(t3,((C_word*)t0)[4],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2537 in k2528 in k2522 in k2519 in k2516 in k2512 in k2509 in loop in k2497 in k2494 in k2491 in k2485 in k2479 in k2476 in k2473 in k2470 in k2467 in k2464 in k2461 in k2458 in k2455 in k3029 in k2444 in k2441 in k2438 in k2435 in k2432 in k2427 in k2424 in k2421 in k2418 in k2415 in k2412 in k2406 in k2403 in k2400 in k2394 in k2391 in k2388 in k2385 in k2382 in k2379 in k2376 in k2373 in k2370 in k2362 in k2359 in k2356 in k2353 in k2349 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2538,2,t0,t1);}
/* batch-driver.scm: 583  perform-high-level-optimizations */
((C_proc4)C_retrieve_symbol_proc(lf[97]))(4,*((C_word*)lf[97]+1),t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* k2334 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 376  display */
((C_proc3)C_retrieve_proc(*((C_word*)lf[37]+1)))(3,*((C_word*)lf[37]+1),((C_word*)t0)[2],t1);}

/* k2327 in k2315 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 377  newline */
((C_proc2)C_retrieve_proc(*((C_word*)lf[45]+1)))(2,*((C_word*)lf[45]+1),((C_word*)t0)[2]);}

/* k2303 in k2294 in k2291 in k2288 in k2285 in k2282 in k2271 in k2267 in k2263 in k2259 in k2255 in k2251 in k2248 in k2244 in k2240 in k2237 in k2233 in k2225 in k2221 in k2218 in k2215 in k2212 in k2205 in k2202 in k2199 in k2196 in k2193 in k2190 in k2187 in k2183 in k2180 in k2174 in k2171 in k2168 in k2165 in k2162 in k2159 in k2156 in k2150 in k2144 in k2141 in k2138 in k2135 in k2132 in k2129 in k2126 in k2123 in k2120 in k2117 in k2114 in k2110 in k2107 in k2104 in k2101 in k2098 in k2095 in k2092 in k2089 in k2086 in k2083 in k2080 in k2077 in k2069 in k2065 in k2062 in k2059 in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 372  newline */
((C_proc2)C_retrieve_proc(*((C_word*)lf[45]+1)))(2,*((C_word*)lf[45]+1),((C_word*)t0)[2]);}

/* analyze in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1982(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_1982,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1984,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2007,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2012,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-no294336 */
t8=t7;
f_2012(t8,t1);}
else{
t8=(C_word)C_i_car(t4);
t9=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-contf295334 */
t10=t6;
f_2007(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* body292300 */
t12=t5;
f_1984(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-no294 in analyze in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2012(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2012,NULL,2,t0,t1);}
/* def-contf295334 */
t2=((C_word*)t0)[2];
f_2007(t2,t1,C_fix(0));}

/* def-contf295 in analyze in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_2007(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2007,NULL,3,t0,t1,t2);}
/* body292300 */
t3=((C_word*)t0)[2];
f_1984(t3,t1,t2,C_SCHEME_TRUE);}

/* body292 in analyze in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1984(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1984,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1988,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* batch-driver.scm: 165  analyze-expression */
((C_proc3)C_retrieve_symbol_proc(lf[59]))(3,*((C_word*)lf[59]+1),t4,((C_word*)t0)[2]);}

/* k1986 in body292 in analyze in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1988,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1991,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[6])[1])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1996,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2002,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 167  upap */
t5=((C_word*)((C_word*)t0)[6])[1];
((C_proc9)C_retrieve_proc(t5))(9,t5,t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],t3,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* a2001 in k1986 in body292 in analyze in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2002,5,t0,t1,t2,t3,t4);}
t5=C_retrieve(lf[58]);
/* g331332 */
t6=t5;
((C_proc6)C_retrieve_proc(t6))(6,t6,t1,((C_word*)t0)[2],t2,t3,t4);}

/* a1995 in k1986 in body292 in analyze in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1996(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1996,4,t0,t1,t2,t3);}
t4=C_retrieve(lf[57]);
/* g316317 */
t5=t4;
((C_proc5)C_retrieve_proc(t5))(5,t5,t1,((C_word*)t0)[2],t2,t3);}

/* k1989 in k1986 in body292 in analyze in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* read-form in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1976(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1976,NULL,3,t0,t1,t2);}
/* batch-driver.scm: 161  ##sys#read */
((C_proc4)C_retrieve_symbol_proc(lf[56]))(4,*((C_word*)lf[56]+1),t1,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* end-time in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1947(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1947,NULL,3,t0,t1,t2);}
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t3=*((C_word*)lf[32]+1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1954,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[37]+1)))(4,*((C_word*)lf[37]+1),t4,lf[55],t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1952 in end-time in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1957,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[37]+1)))(4,*((C_word*)lf[37]+1),t2,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k1955 in k1952 in end-time in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1960,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[37]+1)))(4,*((C_word*)lf[37]+1),t2,lf[54],((C_word*)t0)[3]);}

/* k1958 in k1955 in k1952 in end-time in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1963,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fudge(C_fix(6));
t4=(C_word)C_fixnum_difference(t3,((C_word*)((C_word*)t0)[2])[1]);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[43]+1)))(4,*((C_word*)lf[43]+1),t2,t4,((C_word*)t0)[3]);}

/* k1961 in k1958 in k1955 in k1952 in end-time in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* write-char/port */
t2=C_retrieve(lf[34]);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_make_character(10),((C_word*)t0)[2]);}

/* begin-time in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static C_word C_fcall f_1937(C_word t0){
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

/* collect-options in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1902(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1902,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1908,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t2,tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_1908(t6,t1,((C_word*)t0)[2]);}

/* loop in collect-options in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1908(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1908,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_memq(((C_word*)t0)[4],t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1916,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* g267268 */
t5=t4;
f_1916(t5,t1,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* g267 in loop in collect-options in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1916(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1916,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1924,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 150  option-arg */
f_1537(t3,t2);}

/* k1922 in g267 in loop in collect-options in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1924,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1928,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cddr(((C_word*)t0)[3]);
/* batch-driver.scm: 150  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1908(t4,t2,t3);}

/* k1926 in k1922 in g267 in loop in collect-options in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1928,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* arg-val in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1822(C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1822,NULL,2,t1,t2);}
t3=(C_word)C_i_string_length(t2);
t4=(C_word)C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1832,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(2)))){
/* batch-driver.scm: 141  string->number */
C_string_to_number(3,0,t5,t2);}
else{
t6=(C_word)C_i_string_ref(t2,t4);
t7=(C_word)C_eqp(t6,C_make_character(109));
t8=(C_truep(t7)?t7:(C_word)C_eqp(t6,C_make_character(77)));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1863,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1871,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 143  substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t10,t2,C_fix(0),t4);}
else{
t9=(C_word)C_eqp(t6,C_make_character(107));
t10=(C_truep(t9)?t9:(C_word)C_eqp(t6,C_make_character(75)));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1887,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1891,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 144  substring */
((C_proc5)C_retrieve_proc(*((C_word*)lf[53]+1)))(5,*((C_word*)lf[53]+1),t12,t2,C_fix(0),t4);}
else{
/* batch-driver.scm: 145  string->number */
C_string_to_number(3,0,t5,t2);}}}}

/* k1889 in arg-val in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 144  string->number */
C_string_to_number(3,0,((C_word*)t0)[2],t1);}

/* k1885 in arg-val in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_times(t1,C_fix(1024));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* batch-driver.scm: 146  quit */
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[52],((C_word*)t0)[2]);}}

/* k1869 in arg-val in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 143  string->number */
C_string_to_number(3,0,((C_word*)t0)[2],t1);}

/* k1861 in arg-val in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_times(t1,C_fix(1048576));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* batch-driver.scm: 146  quit */
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[52],((C_word*)t0)[2]);}}

/* k1830 in arg-val in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* batch-driver.scm: 146  quit */
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),((C_word*)t0)[3],lf[52],((C_word*)t0)[2]);}}

/* infohook in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1773(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1773,5,t0,t1,t2,t3,t4);}
t5=C_retrieve(lf[46]);
t6=(C_truep(t5)?t5:(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1819,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1780,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* g212213 */
t8=t6;
((C_proc5)C_retrieve_proc(t8))(5,t8,t7,t2,t3,t4);}

/* k1778 in infohook in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1780,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1783,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1786,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_eqp(lf[51],((C_word*)t0)[2]);
if(C_truep(t4)){
t5=(C_word)C_i_car(t1);
t6=t3;
f_1786(t6,(C_word)C_i_symbolp(t5));}
else{
t5=t3;
f_1786(t5,C_SCHEME_FALSE);}}

/* k1784 in k1778 in infohook in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1786(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1786,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1797,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1801,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[5]);
/* batch-driver.scm: 133  ##sys#hash-table-ref */
((C_proc4)C_retrieve_symbol_proc(lf[50]))(4,*((C_word*)lf[50]+1),t4,C_retrieve(lf[48]),t5);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}}

/* k1799 in k1784 in k1778 in infohook in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=t1;
/* batch-driver.scm: 132  alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[49]))(5,*((C_word*)lf[49]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}
else{
/* batch-driver.scm: 132  alist-cons */
((C_proc5)C_retrieve_symbol_proc(lf[49]))(5,*((C_word*)lf[49]+1),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}}

/* k1795 in k1784 in k1778 in infohook in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 129  ##sys#hash-table-set! */
((C_proc5)C_retrieve_symbol_proc(lf[47]))(5,*((C_word*)lf[47]+1),((C_word*)t0)[3],C_retrieve(lf[48]),((C_word*)t0)[2],t1);}

/* k1781 in k1778 in infohook in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_1819 in infohook in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1819(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1819,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* print-expr in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1730(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1730,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1737,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* batch-driver.scm: 119  print-header */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1660(t6,t5,t2,t3);}

/* k1735 in print-expr in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1737,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1742,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_1742(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* loop195 in k1735 in print-expr in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1742(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1742,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1760,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_slot(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1754,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 122  pretty-print */
((C_proc3)C_retrieve_symbol_proc(lf[40]))(3,*((C_word*)lf[40]+1),t5,t4);}
else{
t3=C_SCHEME_UNDEFINED;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1752 in loop195 in k1735 in print-expr in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1754(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 123  newline */
((C_proc2)C_retrieve_proc(*((C_word*)lf[45]+1)))(2,*((C_word*)lf[45]+1),((C_word*)t0)[2]);}

/* k1758 in loop195 in k1735 in print-expr in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1760(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_1742(t3,((C_word*)t0)[2],t2);}

/* print-db in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1706(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1706,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1713,a[2]=t5,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 114  print-header */
t7=((C_word*)((C_word*)t0)[2])[1];
f_1660(t7,t6,t2,t3);}

/* k1711 in print-db in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1713,2,t0,t1);}
if(C_truep(t1)){
t2=*((C_word*)lf[32]+1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1716,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[37]+1)))(4,*((C_word*)lf[37]+1),t3,lf[44],t2);}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1714 in k1711 in print-db in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1716,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1719,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* write */
((C_proc4)C_retrieve_proc(*((C_word*)lf[43]+1)))(4,*((C_word*)lf[43]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1717 in k1714 in k1711 in print-db in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t3=C_retrieve(lf[34]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(41),((C_word*)t0)[2]);}

/* k1720 in k1717 in k1714 in k1711 in print-db in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1725,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_retrieve(lf[34]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k1723 in k1720 in k1717 in k1714 in k1711 in print-db in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 116  display-analysis-database */
((C_proc3)C_retrieve_symbol_proc(lf[42]))(3,*((C_word*)lf[42]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* print-node in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1684(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1684,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1691,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 108  print-header */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1660(t6,t5,t2,t3);}

/* k1689 in print-node in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1691,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
/* batch-driver.scm: 110  dump-nodes */
((C_proc3)C_retrieve_symbol_proc(lf[39]))(3,*((C_word*)lf[39]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1704,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* batch-driver.scm: 111  build-expression-tree */
((C_proc3)C_retrieve_symbol_proc(lf[41]))(3,*((C_word*)lf[41]+1),t2,((C_word*)t0)[2]);}}
else{
t2=C_SCHEME_UNDEFINED;
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1702 in k1689 in print-node in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* batch-driver.scm: 111  pretty-print */
((C_proc3)C_retrieve_symbol_proc(lf[40]))(3,*((C_word*)lf[40]+1),((C_word*)t0)[2],t1);}

/* print-header in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1660(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1660,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1664,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* batch-driver.scm: 101  dribble */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1645(t5,t4,lf[38],(C_word)C_a_i_list(&a,1,t2));}

/* k1662 in print-header in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1664,2,t0,t1);}
if(C_truep((C_word)C_i_memq(((C_word*)t0)[4],C_retrieve(lf[36])))){
t2=*((C_word*)lf[32]+1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1673,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* write-char/port */
t4=C_retrieve(lf[34]);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_make_character(91),t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k1671 in k1662 in print-header in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1673,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1676,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* display */
((C_proc4)C_retrieve_proc(*((C_word*)lf[37]+1)))(4,*((C_word*)lf[37]+1),t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k1674 in k1671 in k1662 in print-header in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1676,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1679,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_retrieve(lf[34]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(93),((C_word*)t0)[2]);}

/* k1677 in k1674 in k1671 in k1662 in print-header in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1679,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1682,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* write-char/port */
t3=C_retrieve(lf[34]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k1680 in k1677 in k1674 in k1671 in k1662 in print-header in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* dribble in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1645(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1645,NULL,4,t0,t1,t2,t3);}
if(C_truep(((C_word*)t0)[2])){
t4=*((C_word*)lf[32]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1652,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(6,0,t5,C_retrieve(lf[35]),t4,t2,t3);}
else{
t4=C_SCHEME_UNDEFINED;
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1650 in dribble in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1652,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* write-char/port */
t3=C_retrieve(lf[34]);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k1653 in k1650 in dribble in k1593 in k1587 in k1584 in k4827 in k1568 in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_ccall f_1655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#flush-output */
((C_proc3)C_retrieve_symbol_proc(lf[33]))(3,*((C_word*)lf[33]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* option-arg in compile-source-file in k1530 in k1526 in k1522 in k1518 in k1514 in k1509 in k1506 */
static void C_fcall f_1537(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1537,NULL,2,t1,t2);}
t3=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_i_car(t2);
/* batch-driver.scm: 50   quit */
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t1,lf[9],t4);}
else{
t4=(C_word)C_i_cadr(t2);
if(C_truep((C_word)C_i_symbolp(t4))){
/* batch-driver.scm: 53   quit */
((C_proc4)C_retrieve_symbol_proc(lf[8]))(4,*((C_word*)lf[8]+1),t1,lf[10],t4);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[393] = {
{"toplevel:batch_driver_scm",(void*)C_driver_toplevel},
{"f_1508:batch_driver_scm",(void*)f_1508},
{"f_1511:batch_driver_scm",(void*)f_1511},
{"f_1516:batch_driver_scm",(void*)f_1516},
{"f_1520:batch_driver_scm",(void*)f_1520},
{"f_1524:batch_driver_scm",(void*)f_1524},
{"f_1528:batch_driver_scm",(void*)f_1528},
{"f_1532:batch_driver_scm",(void*)f_1532},
{"f_1534:batch_driver_scm",(void*)f_1534},
{"f_1570:batch_driver_scm",(void*)f_1570},
{"f_4848:batch_driver_scm",(void*)f_4848},
{"f_4833:batch_driver_scm",(void*)f_4833},
{"f_4829:batch_driver_scm",(void*)f_4829},
{"f_4818:batch_driver_scm",(void*)f_4818},
{"f_4789:batch_driver_scm",(void*)f_4789},
{"f_4793:batch_driver_scm",(void*)f_4793},
{"f_1586:batch_driver_scm",(void*)f_1586},
{"f_4785:batch_driver_scm",(void*)f_4785},
{"f_4746:batch_driver_scm",(void*)f_4746},
{"f_4748:batch_driver_scm",(void*)f_4748},
{"f_4777:batch_driver_scm",(void*)f_4777},
{"f_1589:batch_driver_scm",(void*)f_1589},
{"f_1595:batch_driver_scm",(void*)f_1595},
{"f_4727:batch_driver_scm",(void*)f_4727},
{"f_4723:batch_driver_scm",(void*)f_4723},
{"f_4719:batch_driver_scm",(void*)f_4719},
{"f_2061:batch_driver_scm",(void*)f_2061},
{"f_2064:batch_driver_scm",(void*)f_2064},
{"f_2067:batch_driver_scm",(void*)f_2067},
{"f_4704:batch_driver_scm",(void*)f_4704},
{"f_4648:batch_driver_scm",(void*)f_4648},
{"f_4656:batch_driver_scm",(void*)f_4656},
{"f_4658:batch_driver_scm",(void*)f_4658},
{"f_4696:batch_driver_scm",(void*)f_4696},
{"f_2071:batch_driver_scm",(void*)f_2071},
{"f_4598:batch_driver_scm",(void*)f_4598},
{"f_4600:batch_driver_scm",(void*)f_4600},
{"f_4635:batch_driver_scm",(void*)f_4635},
{"f_4639:batch_driver_scm",(void*)f_4639},
{"f_2079:batch_driver_scm",(void*)f_2079},
{"f_2082:batch_driver_scm",(void*)f_2082},
{"f_2085:batch_driver_scm",(void*)f_2085},
{"f_2088:batch_driver_scm",(void*)f_2088},
{"f_2091:batch_driver_scm",(void*)f_2091},
{"f_2094:batch_driver_scm",(void*)f_2094},
{"f_2097:batch_driver_scm",(void*)f_2097},
{"f_2100:batch_driver_scm",(void*)f_2100},
{"f_2103:batch_driver_scm",(void*)f_2103},
{"f_2106:batch_driver_scm",(void*)f_2106},
{"f_2109:batch_driver_scm",(void*)f_2109},
{"f_2112:batch_driver_scm",(void*)f_2112},
{"f_4501:batch_driver_scm",(void*)f_4501},
{"f_4503:batch_driver_scm",(void*)f_4503},
{"f_4532:batch_driver_scm",(void*)f_4532},
{"f_2116:batch_driver_scm",(void*)f_2116},
{"f_4496:batch_driver_scm",(void*)f_4496},
{"f_2119:batch_driver_scm",(void*)f_2119},
{"f_2122:batch_driver_scm",(void*)f_2122},
{"f_2125:batch_driver_scm",(void*)f_2125},
{"f_2128:batch_driver_scm",(void*)f_2128},
{"f_2131:batch_driver_scm",(void*)f_2131},
{"f_2134:batch_driver_scm",(void*)f_2134},
{"f_2137:batch_driver_scm",(void*)f_2137},
{"f_2140:batch_driver_scm",(void*)f_2140},
{"f_2143:batch_driver_scm",(void*)f_2143},
{"f_2146:batch_driver_scm",(void*)f_2146},
{"f_4451:batch_driver_scm",(void*)f_4451},
{"f_2152:batch_driver_scm",(void*)f_2152},
{"f_4436:batch_driver_scm",(void*)f_4436},
{"f_4439:batch_driver_scm",(void*)f_4439},
{"f_4442:batch_driver_scm",(void*)f_4442},
{"f_2158:batch_driver_scm",(void*)f_2158},
{"f_4426:batch_driver_scm",(void*)f_4426},
{"f_4429:batch_driver_scm",(void*)f_4429},
{"f_2161:batch_driver_scm",(void*)f_2161},
{"f_2164:batch_driver_scm",(void*)f_2164},
{"f_4384:batch_driver_scm",(void*)f_4384},
{"f_2167:batch_driver_scm",(void*)f_2167},
{"f_4378:batch_driver_scm",(void*)f_4378},
{"f_2170:batch_driver_scm",(void*)f_2170},
{"f_4369:batch_driver_scm",(void*)f_4369},
{"f_2173:batch_driver_scm",(void*)f_2173},
{"f_4351:batch_driver_scm",(void*)f_4351},
{"f_4354:batch_driver_scm",(void*)f_4354},
{"f_4357:batch_driver_scm",(void*)f_4357},
{"f_4360:batch_driver_scm",(void*)f_4360},
{"f_2176:batch_driver_scm",(void*)f_2176},
{"f_4310:batch_driver_scm",(void*)f_4310},
{"f_4312:batch_driver_scm",(void*)f_4312},
{"f_4341:batch_driver_scm",(void*)f_4341},
{"f_4306:batch_driver_scm",(void*)f_4306},
{"f_2182:batch_driver_scm",(void*)f_2182},
{"f_2185:batch_driver_scm",(void*)f_2185},
{"f_4255:batch_driver_scm",(void*)f_4255},
{"f_4257:batch_driver_scm",(void*)f_4257},
{"f_4286:batch_driver_scm",(void*)f_4286},
{"f_2189:batch_driver_scm",(void*)f_2189},
{"f_2192:batch_driver_scm",(void*)f_2192},
{"f_2195:batch_driver_scm",(void*)f_2195},
{"f_2198:batch_driver_scm",(void*)f_2198},
{"f_2201:batch_driver_scm",(void*)f_2201},
{"f_4152:batch_driver_scm",(void*)f_4152},
{"f_4166:batch_driver_scm",(void*)f_4166},
{"f_4191:batch_driver_scm",(void*)f_4191},
{"f_4196:batch_driver_scm",(void*)f_4196},
{"f_4224:batch_driver_scm",(void*)f_4224},
{"f_4062:batch_driver_scm",(void*)f_4062},
{"f_4067:batch_driver_scm",(void*)f_4067},
{"f_4081:batch_driver_scm",(void*)f_4081},
{"f_4106:batch_driver_scm",(void*)f_4106},
{"f_4111:batch_driver_scm",(void*)f_4111},
{"f_4139:batch_driver_scm",(void*)f_4139},
{"f_2204:batch_driver_scm",(void*)f_2204},
{"f_4056:batch_driver_scm",(void*)f_4056},
{"f_4048:batch_driver_scm",(void*)f_4048},
{"f_4023:batch_driver_scm",(void*)f_4023},
{"f_4025:batch_driver_scm",(void*)f_4025},
{"f_4035:batch_driver_scm",(void*)f_4035},
{"f_2207:batch_driver_scm",(void*)f_2207},
{"f_2214:batch_driver_scm",(void*)f_2214},
{"f_2217:batch_driver_scm",(void*)f_2217},
{"f_2220:batch_driver_scm",(void*)f_2220},
{"f_3986:batch_driver_scm",(void*)f_3986},
{"f_4002:batch_driver_scm",(void*)f_4002},
{"f_4005:batch_driver_scm",(void*)f_4005},
{"f_2223:batch_driver_scm",(void*)f_2223},
{"f_2227:batch_driver_scm",(void*)f_2227},
{"f_2235:batch_driver_scm",(void*)f_2235},
{"f_2239:batch_driver_scm",(void*)f_2239},
{"f_3949:batch_driver_scm",(void*)f_3949},
{"f_3951:batch_driver_scm",(void*)f_3951},
{"f_3980:batch_driver_scm",(void*)f_3980},
{"f_2242:batch_driver_scm",(void*)f_2242},
{"f_3910:batch_driver_scm",(void*)f_3910},
{"f_3912:batch_driver_scm",(void*)f_3912},
{"f_3941:batch_driver_scm",(void*)f_3941},
{"f_3906:batch_driver_scm",(void*)f_3906},
{"f_3850:batch_driver_scm",(void*)f_3850},
{"f_3852:batch_driver_scm",(void*)f_3852},
{"f_3846:batch_driver_scm",(void*)f_3846},
{"f_2246:batch_driver_scm",(void*)f_2246},
{"f_2250:batch_driver_scm",(void*)f_2250},
{"f_2253:batch_driver_scm",(void*)f_2253},
{"f_3825:batch_driver_scm",(void*)f_3825},
{"f_2257:batch_driver_scm",(void*)f_2257},
{"f_3818:batch_driver_scm",(void*)f_3818},
{"f_2261:batch_driver_scm",(void*)f_2261},
{"f_3811:batch_driver_scm",(void*)f_3811},
{"f_2265:batch_driver_scm",(void*)f_2265},
{"f_3804:batch_driver_scm",(void*)f_3804},
{"f_2269:batch_driver_scm",(void*)f_2269},
{"f_3784:batch_driver_scm",(void*)f_3784},
{"f_2273:batch_driver_scm",(void*)f_2273},
{"f_2284:batch_driver_scm",(void*)f_2284},
{"f_2287:batch_driver_scm",(void*)f_2287},
{"f_2290:batch_driver_scm",(void*)f_2290},
{"f_3743:batch_driver_scm",(void*)f_3743},
{"f_2293:batch_driver_scm",(void*)f_2293},
{"f_2296:batch_driver_scm",(void*)f_2296},
{"f_2317:batch_driver_scm",(void*)f_2317},
{"f_2345:batch_driver_scm",(void*)f_2345},
{"f_2351:batch_driver_scm",(void*)f_2351},
{"f_2355:batch_driver_scm",(void*)f_2355},
{"f_2358:batch_driver_scm",(void*)f_2358},
{"f_2361:batch_driver_scm",(void*)f_2361},
{"f_2364:batch_driver_scm",(void*)f_2364},
{"f_2372:batch_driver_scm",(void*)f_2372},
{"f_2375:batch_driver_scm",(void*)f_2375},
{"f_2378:batch_driver_scm",(void*)f_2378},
{"f_3711:batch_driver_scm",(void*)f_3711},
{"f_3719:batch_driver_scm",(void*)f_3719},
{"f_2381:batch_driver_scm",(void*)f_2381},
{"f_2384:batch_driver_scm",(void*)f_2384},
{"f_3556:batch_driver_scm",(void*)f_3556},
{"f_3655:batch_driver_scm",(void*)f_3655},
{"f_3704:batch_driver_scm",(void*)f_3704},
{"f_3672:batch_driver_scm",(void*)f_3672},
{"f_3676:batch_driver_scm",(void*)f_3676},
{"f_3681:batch_driver_scm",(void*)f_3681},
{"f_3702:batch_driver_scm",(void*)f_3702},
{"f_3667:batch_driver_scm",(void*)f_3667},
{"f_3658:batch_driver_scm",(void*)f_3658},
{"f_3616:batch_driver_scm",(void*)f_3616},
{"f_3645:batch_driver_scm",(void*)f_3645},
{"f_3571:batch_driver_scm",(void*)f_3571},
{"f_3575:batch_driver_scm",(void*)f_3575},
{"f_3581:batch_driver_scm",(void*)f_3581},
{"f_3610:batch_driver_scm",(void*)f_3610},
{"f_3579:batch_driver_scm",(void*)f_3579},
{"f_3567:batch_driver_scm",(void*)f_3567},
{"f_3547:batch_driver_scm",(void*)f_3547},
{"f_3551:batch_driver_scm",(void*)f_3551},
{"f_2387:batch_driver_scm",(void*)f_2387},
{"f_2390:batch_driver_scm",(void*)f_2390},
{"f_3505:batch_driver_scm",(void*)f_3505},
{"f_3511:batch_driver_scm",(void*)f_3511},
{"f_3540:batch_driver_scm",(void*)f_3540},
{"f_3509:batch_driver_scm",(void*)f_3509},
{"f_2393:batch_driver_scm",(void*)f_2393},
{"f_2396:batch_driver_scm",(void*)f_2396},
{"f_3482:batch_driver_scm",(void*)f_3482},
{"f_3502:batch_driver_scm",(void*)f_3502},
{"f_2402:batch_driver_scm",(void*)f_2402},
{"f_3440:batch_driver_scm",(void*)f_3440},
{"f_3442:batch_driver_scm",(void*)f_3442},
{"f_3471:batch_driver_scm",(void*)f_3471},
{"f_2405:batch_driver_scm",(void*)f_2405},
{"f_2408:batch_driver_scm",(void*)f_2408},
{"f_3374:batch_driver_scm",(void*)f_3374},
{"f_3180:batch_driver_scm",(void*)f_3180},
{"f_3330:batch_driver_scm",(void*)f_3330},
{"f_3184:batch_driver_scm",(void*)f_3184},
{"f_3188:batch_driver_scm",(void*)f_3188},
{"f_3207:batch_driver_scm",(void*)f_3207},
{"f_3192:batch_driver_scm",(void*)f_3192},
{"f_2414:batch_driver_scm",(void*)f_2414},
{"f_3119:batch_driver_scm",(void*)f_3119},
{"f_3124:batch_driver_scm",(void*)f_3124},
{"f_3136:batch_driver_scm",(void*)f_3136},
{"f_3139:batch_driver_scm",(void*)f_3139},
{"f_3142:batch_driver_scm",(void*)f_3142},
{"f_3145:batch_driver_scm",(void*)f_3145},
{"f_3159:batch_driver_scm",(void*)f_3159},
{"f_2417:batch_driver_scm",(void*)f_2417},
{"f_3113:batch_driver_scm",(void*)f_3113},
{"f_2420:batch_driver_scm",(void*)f_2420},
{"f_3107:batch_driver_scm",(void*)f_3107},
{"f_2423:batch_driver_scm",(void*)f_2423},
{"f_2426:batch_driver_scm",(void*)f_2426},
{"f_3092:batch_driver_scm",(void*)f_3092},
{"f_2429:batch_driver_scm",(void*)f_2429},
{"f_2434:batch_driver_scm",(void*)f_2434},
{"f_2437:batch_driver_scm",(void*)f_2437},
{"f_2440:batch_driver_scm",(void*)f_2440},
{"f_2443:batch_driver_scm",(void*)f_2443},
{"f_3038:batch_driver_scm",(void*)f_3038},
{"f_3050:batch_driver_scm",(void*)f_3050},
{"f_3079:batch_driver_scm",(void*)f_3079},
{"f_3045:batch_driver_scm",(void*)f_3045},
{"f_2446:batch_driver_scm",(void*)f_2446},
{"f_3035:batch_driver_scm",(void*)f_3035},
{"f_3031:batch_driver_scm",(void*)f_3031},
{"f_2457:batch_driver_scm",(void*)f_2457},
{"f_2460:batch_driver_scm",(void*)f_2460},
{"f_2977:batch_driver_scm",(void*)f_2977},
{"f_3017:batch_driver_scm",(void*)f_3017},
{"f_3009:batch_driver_scm",(void*)f_3009},
{"f_2980:batch_driver_scm",(void*)f_2980},
{"f_2988:batch_driver_scm",(void*)f_2988},
{"f_2991:batch_driver_scm",(void*)f_2991},
{"f_2994:batch_driver_scm",(void*)f_2994},
{"f_3000:batch_driver_scm",(void*)f_3000},
{"f_3003:batch_driver_scm",(void*)f_3003},
{"f_3006:batch_driver_scm",(void*)f_3006},
{"f_2463:batch_driver_scm",(void*)f_2463},
{"f_2968:batch_driver_scm",(void*)f_2968},
{"f_2971:batch_driver_scm",(void*)f_2971},
{"f_2950:batch_driver_scm",(void*)f_2950},
{"f_2956:batch_driver_scm",(void*)f_2956},
{"f_2959:batch_driver_scm",(void*)f_2959},
{"f_2962:batch_driver_scm",(void*)f_2962},
{"f_2466:batch_driver_scm",(void*)f_2466},
{"f_2944:batch_driver_scm",(void*)f_2944},
{"f_2469:batch_driver_scm",(void*)f_2469},
{"f_2937:batch_driver_scm",(void*)f_2937},
{"f_2472:batch_driver_scm",(void*)f_2472},
{"f_2901:batch_driver_scm",(void*)f_2901},
{"f_2930:batch_driver_scm",(void*)f_2930},
{"f_2899:batch_driver_scm",(void*)f_2899},
{"f_2844:batch_driver_scm",(void*)f_2844},
{"f_2846:batch_driver_scm",(void*)f_2846},
{"f_2884:batch_driver_scm",(void*)f_2884},
{"f_2854:batch_driver_scm",(void*)f_2854},
{"f_2881:batch_driver_scm",(void*)f_2881},
{"f_2877:batch_driver_scm",(void*)f_2877},
{"f_2858:batch_driver_scm",(void*)f_2858},
{"f_2867:batch_driver_scm",(void*)f_2867},
{"f_2870:batch_driver_scm",(void*)f_2870},
{"f_2475:batch_driver_scm",(void*)f_2475},
{"f_2478:batch_driver_scm",(void*)f_2478},
{"f_2808:batch_driver_scm",(void*)f_2808},
{"f_2826:batch_driver_scm",(void*)f_2826},
{"f_2816:batch_driver_scm",(void*)f_2816},
{"f_2820:batch_driver_scm",(void*)f_2820},
{"f_2481:batch_driver_scm",(void*)f_2481},
{"f_2487:batch_driver_scm",(void*)f_2487},
{"f_2493:batch_driver_scm",(void*)f_2493},
{"f_2496:batch_driver_scm",(void*)f_2496},
{"f_2499:batch_driver_scm",(void*)f_2499},
{"f_2504:batch_driver_scm",(void*)f_2504},
{"f_2511:batch_driver_scm",(void*)f_2511},
{"f_2758:batch_driver_scm",(void*)f_2758},
{"f_2761:batch_driver_scm",(void*)f_2761},
{"f_2514:batch_driver_scm",(void*)f_2514},
{"f_2518:batch_driver_scm",(void*)f_2518},
{"f_2521:batch_driver_scm",(void*)f_2521},
{"f_2524:batch_driver_scm",(void*)f_2524},
{"f_2616:batch_driver_scm",(void*)f_2616},
{"f_2746:batch_driver_scm",(void*)f_2746},
{"f_2619:batch_driver_scm",(void*)f_2619},
{"f_2626:batch_driver_scm",(void*)f_2626},
{"f_2629:batch_driver_scm",(void*)f_2629},
{"f_2632:batch_driver_scm",(void*)f_2632},
{"f_2635:batch_driver_scm",(void*)f_2635},
{"f_2638:batch_driver_scm",(void*)f_2638},
{"f_2714:batch_driver_scm",(void*)f_2714},
{"f_2720:batch_driver_scm",(void*)f_2720},
{"f_2723:batch_driver_scm",(void*)f_2723},
{"f_2641:batch_driver_scm",(void*)f_2641},
{"f_2644:batch_driver_scm",(void*)f_2644},
{"f_2658:batch_driver_scm",(void*)f_2658},
{"f_2662:batch_driver_scm",(void*)f_2662},
{"f_2668:batch_driver_scm",(void*)f_2668},
{"f_2671:batch_driver_scm",(void*)f_2671},
{"f_2674:batch_driver_scm",(void*)f_2674},
{"f_2677:batch_driver_scm",(void*)f_2677},
{"f_2680:batch_driver_scm",(void*)f_2680},
{"f5154:batch_driver_scm",(void*)f5154},
{"f_2699:batch_driver_scm",(void*)f_2699},
{"f_2683:batch_driver_scm",(void*)f_2683},
{"f_2686:batch_driver_scm",(void*)f_2686},
{"f_2652:batch_driver_scm",(void*)f_2652},
{"f_2530:batch_driver_scm",(void*)f_2530},
{"f_2544:batch_driver_scm",(void*)f_2544},
{"f_2548:batch_driver_scm",(void*)f_2548},
{"f_2551:batch_driver_scm",(void*)f_2551},
{"f_2570:batch_driver_scm",(void*)f_2570},
{"f_2587:batch_driver_scm",(void*)f_2587},
{"f_2590:batch_driver_scm",(void*)f_2590},
{"f_2596:batch_driver_scm",(void*)f_2596},
{"f_2599:batch_driver_scm",(void*)f_2599},
{"f_2538:batch_driver_scm",(void*)f_2538},
{"f_2336:batch_driver_scm",(void*)f_2336},
{"f_2329:batch_driver_scm",(void*)f_2329},
{"f_2305:batch_driver_scm",(void*)f_2305},
{"f_1982:batch_driver_scm",(void*)f_1982},
{"f_2012:batch_driver_scm",(void*)f_2012},
{"f_2007:batch_driver_scm",(void*)f_2007},
{"f_1984:batch_driver_scm",(void*)f_1984},
{"f_1988:batch_driver_scm",(void*)f_1988},
{"f_2002:batch_driver_scm",(void*)f_2002},
{"f_1996:batch_driver_scm",(void*)f_1996},
{"f_1991:batch_driver_scm",(void*)f_1991},
{"f_1976:batch_driver_scm",(void*)f_1976},
{"f_1947:batch_driver_scm",(void*)f_1947},
{"f_1954:batch_driver_scm",(void*)f_1954},
{"f_1957:batch_driver_scm",(void*)f_1957},
{"f_1960:batch_driver_scm",(void*)f_1960},
{"f_1963:batch_driver_scm",(void*)f_1963},
{"f_1937:batch_driver_scm",(void*)f_1937},
{"f_1902:batch_driver_scm",(void*)f_1902},
{"f_1908:batch_driver_scm",(void*)f_1908},
{"f_1916:batch_driver_scm",(void*)f_1916},
{"f_1924:batch_driver_scm",(void*)f_1924},
{"f_1928:batch_driver_scm",(void*)f_1928},
{"f_1822:batch_driver_scm",(void*)f_1822},
{"f_1891:batch_driver_scm",(void*)f_1891},
{"f_1887:batch_driver_scm",(void*)f_1887},
{"f_1871:batch_driver_scm",(void*)f_1871},
{"f_1863:batch_driver_scm",(void*)f_1863},
{"f_1832:batch_driver_scm",(void*)f_1832},
{"f_1773:batch_driver_scm",(void*)f_1773},
{"f_1780:batch_driver_scm",(void*)f_1780},
{"f_1786:batch_driver_scm",(void*)f_1786},
{"f_1801:batch_driver_scm",(void*)f_1801},
{"f_1797:batch_driver_scm",(void*)f_1797},
{"f_1783:batch_driver_scm",(void*)f_1783},
{"f_1819:batch_driver_scm",(void*)f_1819},
{"f_1730:batch_driver_scm",(void*)f_1730},
{"f_1737:batch_driver_scm",(void*)f_1737},
{"f_1742:batch_driver_scm",(void*)f_1742},
{"f_1754:batch_driver_scm",(void*)f_1754},
{"f_1760:batch_driver_scm",(void*)f_1760},
{"f_1706:batch_driver_scm",(void*)f_1706},
{"f_1713:batch_driver_scm",(void*)f_1713},
{"f_1716:batch_driver_scm",(void*)f_1716},
{"f_1719:batch_driver_scm",(void*)f_1719},
{"f_1722:batch_driver_scm",(void*)f_1722},
{"f_1725:batch_driver_scm",(void*)f_1725},
{"f_1684:batch_driver_scm",(void*)f_1684},
{"f_1691:batch_driver_scm",(void*)f_1691},
{"f_1704:batch_driver_scm",(void*)f_1704},
{"f_1660:batch_driver_scm",(void*)f_1660},
{"f_1664:batch_driver_scm",(void*)f_1664},
{"f_1673:batch_driver_scm",(void*)f_1673},
{"f_1676:batch_driver_scm",(void*)f_1676},
{"f_1679:batch_driver_scm",(void*)f_1679},
{"f_1682:batch_driver_scm",(void*)f_1682},
{"f_1645:batch_driver_scm",(void*)f_1645},
{"f_1652:batch_driver_scm",(void*)f_1652},
{"f_1655:batch_driver_scm",(void*)f_1655},
{"f_1537:batch_driver_scm",(void*)f_1537},
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
