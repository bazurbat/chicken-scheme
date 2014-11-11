#ifndef SCHEME_STRINGS_H
#define SCHEME_STRINGS_H

#include <runtime/definitions.h>
#include <runtime/types.h>

/* XXX Sometimes this is (ab)used on bytevectors (ie, blob=? uses string_compare) */
#define C_c_string(x)              ((C_char *)C_data_pointer(x))

C_fctexport C_word C_fcall C_set_print_precision(C_word n) C_regparm;
C_fctexport C_word C_fcall C_get_print_precision(void) C_regparm;

C_fctexport C_word C_fcall C_string(C_word **ptr, int len, C_char *str) C_regparm;
C_fctexport C_word C_fcall C_static_string(C_word **ptr, int len, C_char *str) C_regparm;

C_fctexport C_word C_fcall C_string_aligned8(C_word **ptr, int len, C_char *str) C_regparm;
C_fctexport C_word C_fcall C_string2(C_word **ptr, C_char *str) C_regparm;
C_fctexport C_word C_fcall C_string2_safe(C_word **ptr, int max, C_char *str) C_regparm;

C_fctexport C_word C_a_i_string(C_word **a, int c, ...);

C_word C_fcall convert_string_to_number(C_char *str, int radix, C_word *fix, double *flo) C_regparm;

C_fctexport void C_ccall C_number_to_string(C_word c, C_word closure, C_word k, C_word num, ...) C_noret;
C_fctexport C_word C_fcall C_a_i_string_to_number(C_word **a, int c, C_word str, C_word radix) C_regparm;
C_fctexport C_word C_string_to_pbytevector(C_word s) C_regparm;

C_fctexport C_word C_fcall C_i_string_ci_equal_p(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_string_equal_p(C_word x, C_word y) C_regparm;
C_fctexport C_word C_fcall C_i_string_length(C_word s) C_regparm;
C_fctexport C_word C_fcall C_i_string_ref(C_word s, C_word i) C_regparm;
C_fctexport C_word C_fcall C_i_string_set(C_word s, C_word i, C_word c) C_regparm;

C_fctexport C_word C_fcall C_u_i_string_hash(C_word str, C_word rnd) C_regparm;
C_fctexport C_word C_fcall C_u_i_string_ci_hash(C_word str, C_word rnd) C_regparm;

C_word C_fcall maybe_inexact_to_exact(C_word n) C_regparm;
C_fctexport C_word C_fcall C_i_inexact_to_exact(C_word n) C_regparm;

C_fctexport C_word C_fcall C_pbytevector(int len, C_char *str) C_regparm;

C_word C_fcall hash_string(int len, C_char *str, C_word m, C_word r, int ci) C_regparm;

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

#endif /* SCHEME_STRINGS_H */
