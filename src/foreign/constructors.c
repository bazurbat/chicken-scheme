#include "constructors.h"
#include <foreign/data.h>
#include <math/fixnum.h>
#include <memory/gc.h>
#include <runtime/macros.h>
#include <runtime/types.h>

#include <stdarg.h>

static void make_structure_2(void *dummy) C_noret;

void C_ccall C_make_structure(C_word c, C_word closure, C_word k, C_word type, ...)
{
    va_list v;
    int i;

    va_start(v, type);

    for(i = c - 3; i--; C_save(va_arg(v, C_word))) ;

    va_end(v);
    C_save(type);
    C_save(k);

    if(!C_demand(c - 1))
        C_reclaim((void *)make_structure_2, NULL);

    make_structure_2(NULL);
}

void make_structure_2(void *dummy)
{
    C_word k = C_restore,
           type = C_restore,
           size = C_rest_count(0),
    *a = C_alloc(C_SIZEOF_STRUCTURE(size+1)),
    *s = a,
           s0 = (C_word)s;

    *(s++) = C_STRUCTURE_TYPE | (size + 1);
    *(s++) = type;
    s += size;

    while(size--)
        *(--s) = C_restore;

    C_kontinue(k, s0);
}

void C_ccall C_make_pointer(C_word c, C_word closure, C_word k)
{
    C_word ab[ 2 ], *a = ab,
           p;

    p = C_mpointer(&a, NULL);
    C_kontinue(k, p);
}

void C_ccall C_make_tagged_pointer(C_word c, C_word closure, C_word k, C_word tag)
{
    C_word ab[ 3 ], *a = ab,
           p;

    p = C_taggedmpointer(&a, tag, NULL);
    C_kontinue(k, p);
}

C_word C_structure(C_word **ptr, int n, ...)
{
    va_list v;
    C_word *p = *ptr,
    *p0 = p;

    *(p++) = C_STRUCTURE_TYPE | n;
    va_start(v, n);

    while(n--)
        *(p++) = va_arg(v, C_word);

    *ptr = p;
    va_end(v);
    return (C_word)p0;
}

C_word C_fcall C_closure(C_word **ptr, int cells, C_word proc, ...)
{
    va_list va;
    C_word *p = *ptr,
    *p0 = p;

    *p = C_CLOSURE_TYPE | cells;
    *(++p) = proc;

    for(va_start(va, proc); --cells; *(++p) = va_arg(va, C_word)) ;

    va_end(va);
    *ptr = p + 1;
    return (C_word)p0;
}

C_word C_a_i_port(C_word **ptr, int n)
{
    C_word
    *p = *ptr,
    *p0 = p;
    int i;

    *(p++) = C_PORT_TYPE | (C_SIZEOF_PORT - 1);
    *(p++) = (C_word)NULL;

    for(i = 0; i < C_SIZEOF_PORT - 2; ++i)
        *(p++) = C_SCHEME_FALSE;

    *ptr = p;
    return (C_word)p0;
}

C_regparm C_word C_fcall C_static_lambda_info(C_word **ptr, int len, C_char *str)
{
    int dlen = sizeof(C_header) + C_align(len);
    void *dptr = malloc(dlen);
    C_word strblock;

    if(dptr == NULL)
        panic(C_text("out of memory - cannot allocate static lambda info"));

    strblock = (C_word)dptr;
    C_block_header_init(strblock, C_LAMBDA_INFO_TYPE | len);
    memcpy(C_data_pointer(strblock), str, len);
    return strblock;
}

C_regparm C_word C_fcall C_number(C_word **ptr, double n)
{
    C_word
    *p = *ptr,
    *p0;
    double m;

    if(n <= (double)C_MOST_POSITIVE_FIXNUM
       && n >= (double)C_MOST_NEGATIVE_FIXNUM && modf(n, &m) == 0.0) {
        return C_fix(n);
    }

#ifndef C_SIXTY_FOUR
#ifndef C_DOUBLE_IS_32_BITS
    /* Align double on 8-byte boundary: */
    if(C_aligned8(p)) ++p;
#endif
#endif

    p0 = p;
    *(p++) = C_FLONUM_TAG;
    *((double *)p) = n;
    *ptr = p + sizeof(double) / sizeof(C_word);
    return (C_word)p0;
}

C_regparm C_word C_fcall C_mpointer(C_word **ptr, void *mp)
{
    C_word
    *p = *ptr,
    *p0 = p;

    *(p++) = C_POINTER_TYPE | 1;
    *((void **)p) = mp;
    *ptr = p + 1;
    return (C_word)p0;
}

C_regparm C_word C_fcall C_mpointer_or_false(C_word **ptr, void *mp)
{
    C_word
    *p = *ptr,
    *p0 = p;

    if(mp == NULL) return C_SCHEME_FALSE;

    *(p++) = C_POINTER_TYPE | 1;
    *((void **)p) = mp;
    *ptr = p + 1;
    return (C_word)p0;
}

C_regparm C_word C_fcall C_taggedmpointer(C_word **ptr, C_word tag, void *mp)
{
    C_word
    *p = *ptr,
    *p0 = p;

    *(p++) = C_TAGGED_POINTER_TAG;
    *((void **)p) = mp;
    *(++p) = tag;
    *ptr = p + 1;
    return (C_word)p0;
}

C_regparm C_word C_fcall C_taggedmpointer_or_false(C_word **ptr, C_word tag, void *mp)
{
    C_word
    *p = *ptr,
    *p0 = p;

    if(mp == NULL) return C_SCHEME_FALSE;

    *(p++) = C_TAGGED_POINTER_TAG;
    *((void **)p) = mp;
    *(++p) = tag;
    *ptr = p + 1;
    return (C_word)p0;
}

C_word C_fcall C_a_i_smart_mpointer(C_word **ptr, int c, C_word x)
{
    C_word
    *p = *ptr,
    *p0 = p;
    void *mp;

    if(C_immediatep(x)) mp = NULL;
    else if((C_header_bits(x) & C_SPECIALBLOCK_BIT) != 0) mp = C_pointer_address(x);
    else mp = C_data_pointer(x);

    *(p++) = C_POINTER_TYPE | 1;
    *((void **)p) = mp;
    *ptr = p + 1;
    return (C_word)p0;
}
