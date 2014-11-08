#include "platform.h"
#include <chicken.h>

void C_ccall C_software_type(C_word c, C_word closure, C_word k)
{
    C_word *a, s;

    if(c != 2) C_bad_argc(c, 2);

    a = C_alloc(2 + C_bytestowords(strlen(C_SOFTWARE_TYPE)));
    s = C_string2(&a, C_SOFTWARE_TYPE);

    C_kontinue(k, s);
}

void C_ccall C_software_version(C_word c, C_word closure, C_word k)
{
    C_word *a, s;

    if(c != 2) C_bad_argc(c, 2);

    a = C_alloc(2 + C_bytestowords(strlen(C_SOFTWARE_VERSION)));
    s = C_string2(&a, C_SOFTWARE_VERSION);

    C_kontinue(k, s);
}

void C_ccall C_machine_type(C_word c, C_word closure, C_word k)
{
    C_word *a, s;

    if(c != 2) C_bad_argc(c, 2);

    a = C_alloc(2 + C_bytestowords(strlen(C_MACHINE_TYPE)));
    s = C_string2(&a, C_MACHINE_TYPE);

    C_kontinue(k, s);
}

void C_ccall C_machine_byte_order(C_word c, C_word closure, C_word k)
{
    char *str;
    C_word *a, s;

    if(c != 2) C_bad_argc(c, 2);

#if defined(C_MACHINE_BYTE_ORDER)
    str = C_MACHINE_BYTE_ORDER;
#else
    C_cblock
    static C_word one_two_three = 123;
    str = (*((C_char *)&one_two_three) != 123) ? "big-endian" : "little-endian";
    C_cblockend;
#endif

    a = C_alloc(2 + C_bytestowords(strlen(str)));
    s = C_string2(&a, str);

    C_kontinue(k, s);
}

void C_ccall C_build_platform(C_word c, C_word closure, C_word k)
{
    C_word *a, s;

    if(c != 2) C_bad_argc(c, 2);

    a = C_alloc(2 + C_bytestowords(strlen(C_BUILD_PLATFORM)));
    s = C_string2(&a, C_BUILD_PLATFORM);

    C_kontinue(k, s);
}

void C_ccall C_get_memory_info(C_word c, C_word closure, C_word k)
{
    C_word ab[ C_SIZEOF_VECTOR(2) ], *a = ab;

    C_kontinue(k, C_vector(&a, 2, C_fix(heap_size), C_fix(stack_size)));
}
