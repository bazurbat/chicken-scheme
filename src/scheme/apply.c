#include "apply.h"
#include <memory/gc.h>
#include <runtime/errors.h>
#include <scheme/pairs.h>

#include <stdarg.h>

void C_ccall C_apply(C_word c, C_word closure, C_word k, C_word fn, ...)
{
    va_list v;
    int i, n = c - 3;
    C_word x, skip;
#ifdef C_HACKED_APPLY
    C_word *buf = C_temporary_stack_limit;
    void *proc;
#endif

    if(c < 4) C_bad_min_argc(c, 4);

    if(C_immediatep(fn) || C_header_bits(fn) != C_CLOSURE_TYPE) {
        barf(C_NOT_A_CLOSURE_ERROR, "apply", fn);
    }

    va_start(v, fn);

    for(i = n; i > 1; --i) {
        x = va_arg(v, C_word);
#ifdef C_HACKED_APPLY
        *(buf++) = x;
#else
        C_save(x);
#endif
    }

    x = va_arg(v, C_word);

    if(x != C_SCHEME_END_OF_LIST && (C_immediatep(x) || C_block_header(x) != C_PAIR_TAG))
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "apply", x);

    for(skip = x; !C_immediatep(skip) && C_block_header(skip) == C_PAIR_TAG; skip = C_u_i_cdr(skip)) {
        x = C_u_i_car(skip);

#ifdef C_HACKED_APPLY
        if(buf >= C_temporary_stack_bottom) barf(C_TOO_MANY_PARAMETERS_ERROR, "apply");

        *(buf++) = x;
#else
        C_save(x);

        if(C_temporary_stack < C_temporary_stack_limit)
            barf(C_TOO_MANY_PARAMETERS_ERROR, "apply");
#endif
        ++n;
    }

    va_end(v);
    --n;

#ifdef C_HACKED_APPLY
    /* 3 additional args + 1 slot for stack-pointer + two for stack-alignment to 16 bytes */
    buf = alloca((n + 6) * sizeof(C_word));
# ifdef __x86_64__
    /* XXX Shouldn't this check for C_SIXTY_FOUR in general? */
    buf = (void *)C_align16((C_uword)buf);
# endif
    buf[ 0 ] = n + 2;
    buf[ 1 ] = fn;
    buf[ 2 ] = k;
    memcpy(&buf[ 3 ], C_temporary_stack_limit, n * sizeof(C_word));
    proc = (void *)C_block_item(fn, 0);
    C_do_apply_hack(proc, buf, n + 3);
#else
    C_do_apply(n, fn, k);
#endif
}

void C_ccall C_do_apply(C_word n, C_word fn, C_word k)
{
    void *pr = (void *)C_block_item(fn, 0);
    C_word *ptr = C_temporary_stack = C_temporary_stack_bottom;

/* PTR_O_p<P>_<B>(o): list of COUNT = ((2 ** P) * B) '*(ptr-I)' arguments,
 * with offset I in range [o, o+COUNT-1].
 */
#define PTR_O_p0_0(o)
#define PTR_O_p1_0(o)
#define PTR_O_p2_0(o)
#define PTR_O_p3_0(o)
#define PTR_O_p4_0(o)
#define PTR_O_p5_0(o)
#define PTR_O_p6_0(o)
#define PTR_O_p7_0(o)
#define PTR_O_p0_1(o)   , *(ptr-(o))
#define PTR_O_p1_1(o)   , *(ptr-(o)), *(ptr-(o+1))
#define PTR_O_p2_1(o)   PTR_O_p1_1(o) PTR_O_p1_1(o+2)
#define PTR_O_p3_1(o)   PTR_O_p2_1(o) PTR_O_p2_1(o+4)
#define PTR_O_p4_1(o)   PTR_O_p3_1(o) PTR_O_p3_1(o+8)
#define PTR_O_p5_1(o)   PTR_O_p4_1(o) PTR_O_p4_1(o+16)
#define PTR_O_p6_1(o)   PTR_O_p5_1(o) PTR_O_p5_1(o+32)
#define PTR_O_p7_1(o)   PTR_O_p6_1(o) PTR_O_p6_1(o+64)

/* CASE_C_PROC_p0 (n0,  p6,p5,p4,p3,p2,p1,p0):
 *  let's note <N> = <n0> - 2; the macro inserts:
 *      case <N>: ((C_cproc<n0>)pr) (<n0>, fn, k, <rest>);
 *  where <rest> is:    *(ptr-1), ..., *(ptr-<N>)
 *  (<rest> is empty for <n0> == 2).
 *  We must have:   n0 = SUM (i = 7 to 0, p<i> * (1 << i)).
 * CASE_C_PROC_p<N+1> (...):
 *  like CASE_C_PROC_p<N>, but with doubled output...
 */
#define CASE_C_PROC_p0(n0,  p6,p5,p4,p3,p2,p1,p0) \
case (n0-2): ((C_proc ## n0)pr)(n0, fn, k \
                                PTR_O_p6_ ## p6(((n0-2)&0x80)+1) \
                                PTR_O_p5_ ## p5(((n0-2)&0xC0)+1) \
                                PTR_O_p4_ ## p4(((n0-2)&0xE0)+1) \
                                PTR_O_p3_ ## p3(((n0-2)&0xF0)+1) \
                                PTR_O_p2_ ## p2(((n0-2)&0xF8)+1) \
                                PTR_O_p1_ ## p1(((n0-2)&0xFC)+1) \
                                PTR_O_p0_ ## p0(((n0-2)&0xFE)+1));
#define CASE_C_PROC_p1( n0,n1,  p6,p5,p4,p3,p2,p1) \
    CASE_C_PROC_p0 (n0,  p6,p5,p4,p3,p2,p1,0) \
    CASE_C_PROC_p0 (n1,  p6,p5,p4,p3,p2,p1,1)
#define CASE_C_PROC_p2( n0,n1,n2,n3,  p6,p5,p4,p3,p2) \
    CASE_C_PROC_p1 (n0,n1,  p6,p5,p4,p3,p2,0) \
    CASE_C_PROC_p1 (n2,n3,  p6,p5,p4,p3,p2,1)
#define CASE_C_PROC_p3( n0,n1,n2,n3,n4,n5,n6,n7,  p6,p5,p4,p3) \
    CASE_C_PROC_p2 (n0,n1,n2,n3,  p6,p5,p4,p3,0) \
    CASE_C_PROC_p2 (n4,n5,n6,n7,  p6,p5,p4,p3,1)

    switch(n) {
        CASE_C_PROC_p3 (2,3,4,5,6,7,8,9,  0,0,0,0)
        CASE_C_PROC_p3 (10,11,12,13,14,15,16,17,  0,0,0,1)
        CASE_C_PROC_p3 (18,19,20,21,22,23,24,25,  0,0,1,0)
        CASE_C_PROC_p3 (26,27,28,29,30,31,32,33,  0,0,1,1)
        CASE_C_PROC_p3 (34,35,36,37,38,39,40,41,  0,1,0,0)
        CASE_C_PROC_p3 (42,43,44,45,46,47,48,49,  0,1,0,1)
        CASE_C_PROC_p3 (50,51,52,53,54,55,56,57,  0,1,1,0)
        CASE_C_PROC_p3 (58,59,60,61,62,63,64,65,  0,1,1,1)
        CASE_C_PROC_p0 (66,  1,0,0,0,0,0,0)
        CASE_C_PROC_p0 (67,  1,0,0,0,0,0,1)
        CASE_C_PROC_p1 (68,69,  1,0,0,0,0,1)
        CASE_C_PROC_p2 (70,71,72,73,  1,0,0,0,1)
        CASE_C_PROC_p3 (74,75,76,77,78,79,80,81,  1,0,0,1)
        CASE_C_PROC_p3 (82,83,84,85,86,87,88,89,  1,0,1,0)
        CASE_C_PROC_p3 (90,91,92,93,94,95,96,97,  1,0,1,1)
        CASE_C_PROC_p3 (98,99,100,101,102,103,104,105,  1,1,0,0)
        CASE_C_PROC_p3 (106,107,108,109,110,111,112,113,  1,1,0,1)
        CASE_C_PROC_p3 (114,115,116,117,118,119,120,121,  1,1,1,0)
        CASE_C_PROC_p2 (122,123,124,125,  1,1,1,1,0)
        CASE_C_PROC_p1 (126,127,  1,1,1,1,1,0)
        CASE_C_PROC_p0 (128,  1,1,1,1,1,1,0)
    default: barf(C_TOO_MANY_PARAMETERS_ERROR, "apply");
    }
}
