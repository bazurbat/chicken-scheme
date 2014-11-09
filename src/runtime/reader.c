#include "reader.h"
#include <chicken.h>


C_regparm C_word C_fcall C_read_char(C_word port)
{
    C_FILEPTR fp = C_port_file(port);
    int c = C_getc(fp);

    if(c == EOF) {
        if(ferror(fp)) {
            clearerr(fp);
            return C_fix(-1);
        }
        /* Found here:
           http://mail.python.org/pipermail/python-bugs-list/2002-July/012579.html */
#if defined(_WIN32)
        else if(GetLastError() == ERROR_OPERATION_ABORTED) return C_fix(-1);
#endif
        else return C_SCHEME_END_OF_FILE;
    }

    return C_make_character(c);
}


C_regparm C_word C_fcall C_peek_char(C_word port)
{
    C_FILEPTR fp = C_port_file(port);
    int c = C_getc(fp);

    if(c == EOF) {
        if(ferror(fp)) {
            clearerr(fp);
            return C_fix(-1);
        }
        /* see above */
#if defined(_WIN32)
        else if(GetLastError() == ERROR_OPERATION_ABORTED) return C_fix(-1);
#endif
        else return C_SCHEME_END_OF_FILE;
    }

    C_ungetc(c, fp);
    return C_make_character(c);
}


C_regparm C_word C_fcall C_char_ready_p(C_word port)
{
#if defined(C_NONUNIX)
    /* The best we can currently do on Windows... */
    return C_SCHEME_TRUE;
#else
    int fd = C_fileno(C_port_file(port));
    return C_mk_bool(C_check_fd_ready(fd) == 1);
#endif
}

void C_ccall C_peek_signed_integer(C_word c, C_word closure, C_word k, C_word v, C_word index)
{
    C_word x = C_block_item(v, C_unfix(index));
    C_alloc_flonum;

    if((x & C_INT_SIGN_BIT) != ((x << 1) & C_INT_SIGN_BIT)) {
        C_kontinue_flonum(k, (double)x);
    }

    C_kontinue(k, C_fix(x));
}


void C_ccall C_peek_unsigned_integer(C_word c, C_word closure, C_word k, C_word v, C_word index)
{
    C_word x = C_block_item(v, C_unfix(index));
    C_alloc_flonum;

    if((x & C_INT_SIGN_BIT) || ((x << 1) & C_INT_SIGN_BIT)) {
        C_kontinue_flonum(k, (double)(C_uword)x);
    }

    C_kontinue(k, C_fix(x));
}


void C_ccall C_decode_seconds(C_word c, C_word closure, C_word k, C_word secs, C_word mode)
{
    time_t tsecs;
    struct tm *tmt;
    C_word ab[ C_SIZEOF_VECTOR(10) ], *a = ab,
           info;

    tsecs = (time_t)((secs & C_FIXNUM_BIT) != 0 ? C_unfix(secs) : C_flonum_magnitude(secs));

    if(mode == C_SCHEME_FALSE) tmt = C_localtime(&tsecs);
    else tmt = C_gmtime(&tsecs);

    if(tmt  == NULL)
        C_kontinue(k, C_SCHEME_FALSE);

    info = C_vector(&a, 10, C_fix(tmt->tm_sec), C_fix(tmt->tm_min), C_fix(tmt->tm_hour),
                    C_fix(tmt->tm_mday), C_fix(tmt->tm_mon), C_fix(tmt->tm_year),
                    C_fix(tmt->tm_wday), C_fix(tmt->tm_yday),
                    tmt->tm_isdst > 0 ? C_SCHEME_TRUE : C_SCHEME_FALSE,
#ifdef C_GNU_ENV
                    /* negative for west of UTC, but we want positive */
                    C_fix(-tmt->tm_gmtoff)
#elif defined(__MINGW32__) || defined(_WIN32) || defined(__WINNT__)
                    C_fix(mode == C_SCHEME_FALSE ? _timezone : 0) /* does not account for DST */
#else
                    C_fix(mode == C_SCHEME_FALSE ? timezone : 0) /* does not account for DST */
#endif
                    );
    C_kontinue(k, info);
}

/* decoding of literals in compressed format */

static C_regparm C_uword C_fcall decode_size(C_char **str)
{
    C_uchar **ustr = (C_uchar **)str;
    C_uword size = (*((*ustr)++) & 0xff) << 16; /* always big endian */

    size |= (*((*ustr)++) & 0xff) << 8;
    size |= (*((*ustr)++) & 0xff);
    return size;
}


static C_regparm C_word C_fcall decode_literal2(C_word **ptr, C_char **str,
                                                C_word *dest)
{
    C_ulong bits = *((*str)++) & 0xff;
    C_word *data, *dptr, val;
    C_uword size;

    /* vvv this can be taken out at a later stage (once it works reliably) vvv */
    if(bits != 0xfe)
        panic(C_text("invalid encoded literal format"));

    bits = *((*str)++) & 0xff;
    /* ^^^ */

#ifdef C_SIXTY_FOUR
    bits <<= 24 + 32;
#else
    bits <<= 24;
#endif

    if(bits == C_HEADER_BITS_MASK) {            /* special/immediate */
        switch(0xff & *((*str)++)) {
        case C_BOOLEAN_BITS:
            return C_mk_bool(*((*str)++));

        case C_CHARACTER_BITS:
            return C_make_character(decode_size(str));

        case C_SCHEME_END_OF_LIST:
        case C_SCHEME_UNDEFINED:
        case C_SCHEME_END_OF_FILE:
            return (C_word)(*(*str - 1));

        case C_FIXNUM_BIT:
            val = *((*str)++) << 24; /* always big endian */
            val |= (*((*str)++) & 0xff) << 16;
            val |= (*((*str)++) & 0xff) << 8;
            val |= (*((*str)++) & 0xff);
            return C_fix(val);

#ifdef C_SIXTY_FOUR
        case (C_FLONUM_TYPE >> (24 + 32)) & 0xff:
#else
        case (C_FLONUM_TYPE >> 24) & 0xff:
#endif
            bits = C_FLONUM_TYPE;
            break;

        default:
            panic(C_text("invalid encoded special literal"));
        }
    }

#ifndef C_SIXTY_FOUR
    if((bits & C_8ALIGN_BIT) != 0) {
        /* Align _data_ on 8-byte boundary: */
        if(C_aligned8(*ptr)) ++(*ptr);
    }
#endif

    val = (C_word)(*ptr);

    if(bits == C_FLONUM_TYPE) {
        C_word ln;
        double fn;

        switch (convert_string_to_number(*str, 10, &ln, &fn)) {
        case 0:                 /* failed */
            panic(C_text("invalid encoded numeric literal"));
            break;

        case 1:                 /* fixnum */
            val = C_fix(ln);
            break;

        case 2:                 /* flonum */
            val = C_flonum(ptr, fn);
            break;
        }

        while(*((*str)++) != '\0') ; /* skip terminating '\0' */
        return val;
    }

    if((bits & C_SPECIALBLOCK_BIT) != 0)
        panic(C_text("literals with special bit cannot be decoded"));

    size = decode_size(str);

    switch(bits) {
    case C_STRING_TYPE:
        /* strings are always allocated statically */
        val = C_static_string(ptr, size, *str);
        *str += size;
        break;

    case C_BYTEVECTOR_TYPE:
        /* ... as are bytevectors (blobs) */
        val = C_static_bytevector(ptr, size, *str);
        *str += size;
        break;

    case C_SYMBOL_TYPE:
        if(dest == NULL)
            panic(C_text("invalid literal symbol destination"));

        val = C_h_intern(dest, size, *str);
        *str += size;
        break;

    case C_LAMBDA_INFO_TYPE:
        /* lambda infos are always allocated statically */
        val = C_static_lambda_info(ptr, size, *str);
        *str += size;
        break;

    default:
        *((*ptr)++) = C_make_header(bits, size);
        data = *ptr;

        if((bits & C_BYTEBLOCK_BIT) != 0) {
            C_memcpy(data, *str, size);
            size = C_align(size);
            *str += size;
            *ptr = (C_word *)C_align((C_word)(*ptr) + size);
        }
        else {
            C_word *dptr = *ptr;
            *ptr += size;

            while(size--) {
                *dptr = decode_literal2(ptr, str, dptr);
                ++dptr;
            }
        }
    }

    return val;
}


C_regparm C_word C_fcall
C_decode_literal(C_word **ptr, C_char *str)
{
    return decode_literal2(ptr, &str, NULL);
}


