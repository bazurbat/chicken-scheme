#include "strings.h"
#include <runtime/errors.h>
#include <math/predicates.h>
#include <math/fixnum.h>
#include <math/flonum.h>
#include <runtime/macros.h>

#include <errno.h>

#define STRING_BUFFER_SIZE             4096
static C_TLS C_char buffer[ STRING_BUFFER_SIZE ];

#ifdef C_DOUBLE_IS_32_BITS
# define FLONUM_PRINT_PRECISION         7
#else
# define FLONUM_PRINT_PRECISION         15
#endif

static C_TLS int flonum_print_precision = FLONUM_PRINT_PRECISION;

C_regparm C_word C_fcall C_set_print_precision(C_word n)
{
    flonum_print_precision = C_unfix(n);
    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_get_print_precision(void)
{
    return C_fix(flonum_print_precision);
}


C_regparm C_word C_fcall C_string(C_word **ptr, int len, C_char *str)
{
    C_word strblock = (C_word)(*ptr);

    *ptr = (C_word *)((C_word)(*ptr) + sizeof(C_header) + C_align(len));
    C_block_header_init(strblock, C_STRING_TYPE | len);
    C_memcpy(C_data_pointer(strblock), str, len);
    return strblock;
}

C_regparm C_word C_fcall C_static_string(C_word **ptr, int len, C_char *str)
{
    C_word *dptr = (C_word *)C_malloc(sizeof(C_header) + C_align(len));
    C_word strblock;

    if(dptr == NULL)
        panic(C_text("out of memory - cannot allocate static string"));

    strblock = (C_word)dptr;
    C_block_header_init(strblock, C_STRING_TYPE | len);
    C_memcpy(C_data_pointer(strblock), str, len);
    return strblock;
}

C_regparm C_word C_fcall C_string_aligned8(C_word **ptr, int len, C_char *str)
{
    C_word *p = *ptr,
    *p0;

#ifndef C_SIXTY_FOUR
    /* Align on 8-byte boundary: */
    if(C_aligned8(p)) ++p;
#endif

    p0 = p;
    *ptr = p + 1 + C_bytestowords(len);
    *(p++) = C_STRING_TYPE | C_8ALIGN_BIT | len;
    C_memcpy(p, str, len);
    return (C_word)p0;
}

C_regparm C_word C_fcall C_string2(C_word **ptr, C_char *str)
{
    C_word strblock = (C_word)(*ptr);
    int len;

    if(str == NULL) return C_SCHEME_FALSE;

    len = C_strlen(str);
    *ptr = (C_word *)((C_word)(*ptr) + sizeof(C_header) + C_align(len));
    C_block_header_init(strblock, C_STRING_TYPE | len);
    C_memcpy(C_data_pointer(strblock), str, len);
    return strblock;
}

C_regparm C_word C_fcall C_string2_safe(C_word **ptr, int max, C_char *str)
{
    C_word strblock = (C_word)(*ptr);
    int len;

    if(str == NULL) return C_SCHEME_FALSE;

    len = C_strlen(str);

    if(len >= max) {
        C_snprintf(buffer, sizeof(buffer), C_text("foreign string result exceeded maximum of %d bytes"), max);
        panic(buffer);
    }

    *ptr = (C_word *)((C_word)(*ptr) + sizeof(C_header) + C_align(len));
    C_block_header_init(strblock, C_STRING_TYPE | len);
    C_memcpy(C_data_pointer(strblock), str, len);
    return strblock;
}

C_word C_a_i_string(C_word **a, int c, ...)
{
    va_list v;
    C_word x, s = (C_word)(*a);
    char *p;

    *a = (C_word *)((C_word)(*a) + sizeof(C_header) + C_align(c));
    C_block_header_init(s, C_STRING_TYPE | c);
    p = (char *)C_data_pointer(s);
    va_start(v, c);

    while(c--) {
        x = va_arg(v, C_word);

        if((x & C_IMMEDIATE_TYPE_BITS) == C_CHARACTER_BITS)
            *(p++) = C_character_code(x);
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "string", x);
    }

    return s;
}

static int from_n_nary(C_char *str, int base, double *r)
{
    double n = 0;
    C_char *ptr = str;

    while(*ptr != '\0') {
        int c = C_tolower((int)(*(ptr++)));

        if(c < '0') return 0;
        else if(c >= '0' + base) {
            if(base < 10) return 0;
            else if(c < 'a') return 0;
            else if(c >= 'a' + base - 10) return 0;
            else n = n * base + c - 'a' + 10;
        }
        else n = n * base + c - '0';
    }

    *r = n;
    return 1;
}

static char *to_n_nary(C_uword num, C_uword base)
{
    char *p;
    static char digits[] ={ '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
    buffer [ 66 ] = '\0';
    p = buffer + 66;

    do {
        *(--p) = digits [ num % base ];
        num /= base;
    } while (num);

    return p;
}


C_regparm C_word C_fcall convert_string_to_number(C_char *str, int radix, C_word *fix, double *flo)
{
    C_ulong ln;
    C_word n;
    C_char *eptr, *eptr2;
    double fn;
    int len = C_strlen(str);

    if(radix == 10) {
        if (len == 6) {
            if((*str == '+' || *str == '-') &&
               C_strchr("inIN", *(str+1)) != NULL &&
               C_strchr("naNA", *(str+2)) != NULL &&
               C_strchr("fnFN", *(str+3)) != NULL &&
               *(str+4) == '.' && *(str+5) == '0') {
                if (*(str+1) == 'i' || *(str+1) == 'I') /* Inf */
                    *flo = INFINITY;
                else                              /* NaN */
                    *flo = NAN;
                if (*str == '-')
                    *flo *= -1.0;
                return 2;
            }
        }
#ifdef _MSC_VER
        else if (len == 7) {
            if ((*str == '+' || *str == '-') &&
                C_strchr("1", *(str+1)) &&
                C_strchr(".", *(str+2)) &&
                C_strchr("#", *(str+3)) &&
                C_strchr("I", *(str+4)) &&
                C_strchr("N", *(str+5))) {
                if (C_strchr("F", *(str+6)))
                    *flo = INFINITY;
                else if (C_strchr("D", *(str+6)))
                    *flo = NAN;
                return 2;
            }
        }
#endif
        /* Prevent C parser from accepting things like "-inf" on its own... */
        for(n = 0; n < len; ++n) {
            if (C_strchr("+-0123456789e.", *(str+n)) == NULL)
                return 0;
        }
    }

    if(C_strpbrk(str, "xX\0") != NULL) return 0;

    errno = 0;
    n = C_strtow(str, &eptr, radix);

    if(((n == C_LONG_MAX || n == C_LONG_MIN) && errno == ERANGE) || *eptr != '\0') {
        if(radix != 10)
            return from_n_nary(str, radix, flo) ? 2 : 0;

        errno = 0;
        fn = C_strtod(str, &eptr2);

        if(fn == HUGE_VAL && errno == ERANGE) return 0;
        else if(eptr2 == str) return 0;
        else if(*eptr2 == '\0' || (eptr != eptr2 && !C_strncmp(eptr2, ".0", C_strlen(eptr2)))) {
            *flo = fn;
            return 2;
        }

        return 0;
    }
    else if((n & C_INT_SIGN_BIT) != ((n << 1) & C_INT_SIGN_BIT)) { /* doesn't fit into fixnum? */
        if(*eptr == '\0' || !C_strncmp(eptr, ".0", C_strlen(eptr))) {
            *flo = (double)n;
            return 2;
        }
        else return 0;
    }
    else {
        *fix = n;
        return 1;
    }
}

void C_ccall C_number_to_string(C_word c, C_word closure, C_word k, C_word num, ...)
{
    C_word radix, *a;
    C_char *p;
    double f;
    va_list v;
    int neg = 0;

    if(c == 3) radix = 10;
    else if(c == 4) {
        va_start(v, num);
        radix = va_arg(v, C_word);
        va_end(v);

        if(radix & C_FIXNUM_BIT) radix = C_unfix(radix);
        else barf(C_BAD_ARGUMENT_TYPE_BAD_BASE_ERROR, "number->string", radix);
    }
    else C_bad_argc(c, 3);

    if(num & C_FIXNUM_BIT) {
        num = C_unfix(num);

        if(num < 0) {
            neg = 1;
            num = -num;
        }

        if((radix < 2) || (radix > 16)) {
            barf(C_BAD_ARGUMENT_TYPE_BAD_BASE_ERROR, "number->string", C_fix(radix));
        }

        switch(radix) {
#ifdef C_SIXTY_FOUR
        case 8: C_snprintf(p = buffer + 1, sizeof(buffer) -1, C_text("%llo"), (long long)num); break;
        case 10: C_snprintf(p = buffer + 1, sizeof(buffer) - 1, C_text("%lld"), (long long)num); break;
        case 16: C_snprintf(p = buffer + 1, sizeof(buffer) - 1, C_text("%llx"), (long long)num); break;
#else
        case 8: C_snprintf(p = buffer + 1, sizeof(buffer) - 1, C_text("%o"), num); break;
        case 10: C_snprintf(p = buffer + 1, sizeof(buffer) - 1, C_text("%d"), num); break;
        case 16: C_snprintf(p = buffer + 1, sizeof(buffer) - 1, C_text("%x"), num); break;
#endif
        default:
            p = to_n_nary(num, radix);
        }
    }
    else if(!C_immediatep(num) && C_block_header(num) == C_FLONUM_TAG) {
        f = C_flonum_magnitude(num);

        if(C_fits_in_unsigned_int_p(num) == C_SCHEME_TRUE) {
            if(f < 0) {
                neg = 1;
                f = -f;
            }

            if((radix < 2) || (radix > 16)) {
                barf(C_BAD_ARGUMENT_TYPE_BAD_BASE_ERROR, "number->string", C_fix(radix));
            }

            switch(radix) {
            case 8:
                C_snprintf(p = buffer, sizeof(buffer), "%o", (unsigned int)f);
                goto fini;

            case 16:
                C_snprintf(p = buffer, sizeof(buffer), "%x", (unsigned int)f);
                goto fini;

            case 10: break;     /* force output of decimal point to retain
                                   read/write invariance (the little we support) */

            default:
                p = to_n_nary((unsigned int)f, radix);
                goto fini;

            }
        }

        if(C_isnan(f)) {
            C_strlcpy(buffer, C_text("+nan.0"), sizeof(buffer));
            p = buffer;
            goto fini;
        }
        else if(C_isinf(f)) {
            C_snprintf(buffer, sizeof(buffer), "%cinf.0", f > 0 ? '+' : '-');
            p = buffer;
            goto fini;
        }

        C_snprintf(buffer, STRING_BUFFER_SIZE, C_text("%.*g"),
                   flonum_print_precision, f);
        buffer[STRING_BUFFER_SIZE-1] = '\0';

        if((p = C_strpbrk(buffer, C_text(".eE"))) == NULL) {
            if(*buffer == 'i' || *buffer == 'n') { /* inf or nan */
                C_memmove(buffer + 1, buffer, C_strlen(buffer) + 1);
                *buffer = '+';
            }
            else if(buffer[ 1 ] != 'i') C_strlcat(buffer, C_text(".0"), sizeof(buffer)); /* negative infinity? */
        }

        p = buffer;
    }
    else
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "number->string", num);

fini:
    if(neg) *(--p) = '-';

    radix = C_strlen(p);
    a = C_alloc((C_bytestowords(radix) + 1));
    radix = C_string(&a, radix, p);
    C_kontinue(k, radix);
}

C_regparm C_word C_fcall C_a_i_string_to_number(C_word **a, int c, C_word str, C_word radix0)
{
    int radix, radixpf = 0, sharpf = 0, ratf = 0, exactf = 0, exactpf = 0, periodf = 0, expf = 0;
    C_word n1, n;
    C_char *sptr, *eptr, *rptr;
    double fn1, fn;

    if(radix0 & C_FIXNUM_BIT) radix = C_unfix(radix0);
    else barf(C_BAD_ARGUMENT_TYPE_BAD_BASE_ERROR, "string->number", radix0);

    if(C_immediatep(str) || C_header_bits(str) != C_STRING_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "string->number", str);

    if((n = C_header_size(str)) == 0) {
fail:
        n = C_SCHEME_FALSE;
        goto fini;
    }

    if(n >= STRING_BUFFER_SIZE - 1) goto fail;

    C_memcpy(sptr = buffer, C_c_string(str), n > (STRING_BUFFER_SIZE - 1) ? STRING_BUFFER_SIZE : n);
    buffer[ n ] = '\0';
    if (n != strlen(buffer)) /* Don't barf; this is simply invalid number syntax */
        goto fail;

    while(*sptr == '#') {
        switch(C_tolower((int)*(++sptr))) {
        case 'b': if(radixpf) goto fail; else { radix = 2; radixpf = 1; } break;
        case 'o': if(radixpf) goto fail; else { radix = 8; radixpf = 1; } break;
        case 'd': if(radixpf) goto fail; else { radix = 10; radixpf = 1; } break;
        case 'x': if(radixpf) goto fail; else { radix = 16; radixpf = 1; } break;
        case 'e': if(exactpf) goto fail; else { exactf = 1; exactpf = 1; } break;
        case 'i': if(exactpf) goto fail; else { exactf = 0; exactpf = 1; } break;
        default: goto fail; /* Unknown prefix type */
        }

        ++sptr;
    }

    /* Scan for embedded special characters and do basic sanity checking: */
    for(eptr = sptr, rptr = sptr; *eptr != '\0'; ++eptr) {
        switch(C_tolower((int)*eptr)) {
        case '.':
            if(periodf || ratf || expf) goto fail;

            periodf = 1;
            break;

        case '#':
            if (expf || (eptr == rptr) ||
                (!sharpf && (eptr == rptr+1) && (C_strchr("+-.", *rptr) != NULL)))
                goto fail;

            sharpf = 1;
            *eptr = '0';

            break;
        case '/':
            if(periodf || ratf || expf || eptr == sptr) goto fail;

            sharpf = 0; /* Allow sharp signs in the denominator */
            ratf = 1;
            rptr = eptr+1;
            break;
        case 'e':
        case 'd':
        case 'f':
        case 'l':
        case 's':
            /* Don't set exp flag if we see the "f" in "inf.0" (preceded by 'n') */
            /* Other failure modes are handled elsewhere. */
            if(radix == 10 && eptr > sptr && C_tolower((int)*(eptr-1)) != 'n') {
                if (ratf) goto fail;

                expf = 1;
                sharpf = 0;
                *eptr = 'e'; /* strtod() normally only understands 'e', not dfls */
            }
            break;
        default:
            if(sharpf) goto fail;
            break;
        }
    }
    if (eptr == rptr) goto fail; /* Disallow "empty" numbers like "#x" and "1/" */

    /* check for rational representation: */
    if(rptr != sptr) {
        if (*(rptr) == '-' || *(rptr) == '+') {
            n = C_SCHEME_FALSE;
            goto fini;
        }
        *(rptr-1) = '\0';

        switch(convert_string_to_number(sptr, radix, &n1, &fn1)) {
        case 0:
            n = C_SCHEME_FALSE;
            goto fini;

        case 1:
            fn1 = (double)n1;
            break;

            /* case 2: nop */
        }

        sptr = rptr;
    }

    /* convert number and return result: */
    switch(convert_string_to_number(sptr, radix, &n, &fn)) {
    case 0:                     /* failed */
        n = C_SCHEME_FALSE;
        break;

    case 1:                     /* fixnum */
        if(sharpf || ratf || (exactpf && !exactf)) {
            n = C_flonum(a, ratf ? fn1 / (double)n : (double)n);

            if(exactpf && exactf) n = maybe_inexact_to_exact(n);
        }
        else n = C_fix(n);

        break;

    case 2:                     /* flonum */
        n = C_flonum(a, ratf ? fn1 / fn : fn);

        if(exactpf && exactf) n = maybe_inexact_to_exact(n);

        break;
    }

fini:
    return n;
}

C_regparm C_word C_string_to_pbytevector(C_word s)
{
    return C_pbytevector(C_header_size(s), (C_char *)C_data_pointer(s));
}

C_regparm C_word C_fcall C_i_string_ci_equal_p(C_word x, C_word y)
{
    C_word n;
    char *p1, *p2;

    if(C_immediatep(x) || C_header_bits(x) != C_STRING_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "string-ci=?", x);

    if(C_immediatep(y) || C_header_bits(y) != C_STRING_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "string-ci=?", y);

    n = C_header_size(x);

    if(n != C_header_size(y)) return C_SCHEME_FALSE;

    p1 = (char *)C_data_pointer(x);
    p2 = (char *)C_data_pointer(y);

    while(n--) {
        if(C_tolower((int)(*(p1++))) != C_tolower((int)(*(p2++))))
            return C_SCHEME_FALSE;
    }

    return C_SCHEME_TRUE;
}

C_regparm C_word C_fcall C_i_string_equal_p(C_word x, C_word y)
{
    C_word n;

    if(C_immediatep(x) || C_header_bits(x) != C_STRING_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "string=?", x);

    if(C_immediatep(y) || C_header_bits(y) != C_STRING_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "string=?", y);

    n = C_header_size(x);

    return C_mk_bool(n == C_header_size(y)
                     && !C_memcmp((char *)C_data_pointer(x), (char *)C_data_pointer(y), n));
}

C_regparm C_word C_fcall C_i_string_length(C_word s)
{
    if(C_immediatep(s) || C_header_bits(s) != C_STRING_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "string-length", s);

    return C_fix(C_header_size(s));
}

C_regparm C_word C_fcall C_i_string_ref(C_word s, C_word i)
{
    int j;

    if(C_immediatep(s) || C_header_bits(s) != C_STRING_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "string-ref", s);

    if(i & C_FIXNUM_BIT) {
        j = C_unfix(i);

        if(j < 0 || j >= C_header_size(s)) barf(C_OUT_OF_RANGE_ERROR, "string-ref", s, i);

        return C_subchar(s, i);
    }

    barf(C_BAD_ARGUMENT_TYPE_ERROR, "string-ref", i);
    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_i_string_set(C_word s, C_word i, C_word c)
{
    int j;

    if(C_immediatep(s) || C_header_bits(s) != C_STRING_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "string-set!", s);

    if(!C_immediatep(c) || (c & C_IMMEDIATE_TYPE_BITS) != C_CHARACTER_BITS)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "string-set!", c);

    if(i & C_FIXNUM_BIT) {
        j = C_unfix(i);

        if(j < 0 || j >= C_header_size(s)) barf(C_OUT_OF_RANGE_ERROR, "string-set!", s, i);

        return C_setsubchar(s, i, c);
    }

    barf(C_BAD_ARGUMENT_TYPE_ERROR, "string-set!", i);
    return C_SCHEME_UNDEFINED;
}

C_regparm C_word C_fcall C_u_i_string_hash(C_word str, C_word rnd)
{
    int len = C_header_size(str);
    C_char *ptr = C_data_pointer(str);
    return C_fix(hash_string(len, ptr, C_MOST_POSITIVE_FIXNUM, C_unfix(rnd), 0));
}

C_regparm C_word C_fcall C_u_i_string_ci_hash(C_word str, C_word rnd)
{
    int len = C_header_size(str);
    C_char *ptr = C_data_pointer(str);
    return C_fix(hash_string(len, ptr, C_MOST_POSITIVE_FIXNUM, C_unfix(rnd), 1));
}

C_regparm C_word maybe_inexact_to_exact(C_word n)
{
    double m;
    C_word r;

    if(modf(C_flonum_magnitude(n), &m) == 0.0) {
        r = (C_word)m;

        if(r == m && C_fitsinfixnump(r))
            return C_fix(r);
    }
    return C_SCHEME_FALSE;
}

C_regparm C_word C_fcall C_i_inexact_to_exact(C_word n)
{
    C_word r;

    if(n & C_FIXNUM_BIT) return n;
    else if(C_immediatep(n) || C_block_header(n) != C_FLONUM_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "inexact->exact", n);

    r = maybe_inexact_to_exact(n);
    if (r != C_SCHEME_FALSE) return r;

    barf(C_CANT_REPRESENT_INEXACT_ERROR, "inexact->exact", n);
    return 0;
}

C_regparm C_word C_fcall C_pbytevector(int len, C_char *str)
{
    C_SCHEME_BLOCK *pbv = C_malloc(len + sizeof(C_header));

    if(pbv == NULL) panic(C_text("out of memory - cannot allocate permanent blob"));

    pbv->header = C_BYTEVECTOR_TYPE | len;
    C_memcpy(pbv->data, str, len);
    return (C_word)pbv;
}

C_regparm C_word C_fcall hash_string(int len, C_char *str, C_word m, C_word r, int ci)
{
    C_uword key = r;

    if (ci)
        while(len--) key ^= (key << 6) + (key >> 2) + C_tolower((int)(*str++));
    else
        while(len--) key ^= (key << 6) + (key >> 2) + *(str++);

    return (C_word)(key % (C_uword)m);
}