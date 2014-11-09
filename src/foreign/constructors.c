#include "constructors.h"
#include <memory/gc.h>
#include <memory/nursery.h>
#include <runtime/macros.h>
#include <runtime/pointers.h>
#include <runtime/scheme.h>
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
