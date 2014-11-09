#ifndef RUNTIME_STRINGS_H
#define RUNTIME_STRINGS_H

#include "definitions.h"

C_inline char *C_string_or_null(C_word x)
{
    return C_truep(x) ? C_c_string(x) : NULL;
}

C_inline C_word C_u_i_string_equal_p(C_word x, C_word y)
{
    C_word n;

    n = C_header_size(x);
    return C_mk_bool(n == C_header_size(y)
                     && !C_memcmp((char *)C_data_pointer(x), (char *)C_data_pointer(y), n));
}

/* Like memcmp but case insensitive (to strncasecmp as memcmp is to strncmp) */
C_inline int C_memcasecmp(const char *x, const char *y, unsigned int len)
{
    const unsigned char *ux = (const unsigned char *)x;
    const unsigned char *uy = (const unsigned char *)y;

    while (len--) {
        if (tolower(*ux++) != tolower(*uy++))
            return (tolower(*--ux) - tolower(*--uy));
    }
    return 0;
}

/* These strl* functions are based on public domain code by C.B. Falconer */
#ifdef HAVE_STRLCPY
# define C_strlcpy                  strlcpy
#else
C_inline size_t C_strlcpy(char *dst, const char *src, size_t sz)
{
    const char *start = src;

    if (sz--) {
        while ((*dst++ = *src))
            if (sz--) src++;
            else {
                *(--dst) = '\0';
                break;
            }
    }
    while (*src++) continue;
    return src - start - 1;
}
#endif

#ifdef HAVE_STRLCAT
# define C_strlcat                  strlcat
#else
C_inline size_t C_strlcat(char *dst, const char *src, size_t sz)
{
    char  *start = dst;

    while (*dst++)   /* assumes sz >= strlen(dst) */
        if (sz) sz--;  /* i.e. well formed string */
    dst--;
    return dst - start + C_strlcpy(dst, src, sz);
}
#endif

#endif /* RUNTIME_STRINGS_H */
