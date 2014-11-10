#include "arithmetic.h"
#include "fixnum.h"
#include "flonum.h"
#include <memory/gc.h>
#include <runtime/macros.h>

#include <stdarg.h>

void C_ccall C_times(C_word c, C_word closure, C_word k, ...)
{
    va_list v;
    C_word x, y;
    C_word iresult = C_fix(1);
    double fresult;
    C_alloc_flonum;

    va_start(v, k);
    c -= 2;

    while(c--) {
        x = va_arg(v, C_word);

        if(x & C_FIXNUM_BIT) {
            y = C_i_o_fixnum_times(iresult, x);

            if(y == C_SCHEME_FALSE) {
                fresult = (double)C_unfix(iresult) * (double)C_unfix(x);
                goto flonum_result;
            }
            else iresult = y;
        }
        else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
            fresult = (double)C_unfix(iresult) * C_flonum_magnitude(x);
            goto flonum_result;
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "*", x);
    }

    va_end(v);
    C_kontinue(k, iresult);

flonum_result:
    while(c--) {
        x = va_arg(v, C_word);

        if(x & C_FIXNUM_BIT)
            fresult *= (double)C_unfix(x);
        else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG)
            fresult *= C_flonum_magnitude(x);
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "*", x);
    }

    va_end(v);
    C_kontinue_flonum(k, fresult);
}

C_regparm C_word C_fcall C_2_times(C_word **ptr, C_word x, C_word y)
{
    C_word iresult;

    if(x & C_FIXNUM_BIT) {
        if(y & C_FIXNUM_BIT) {
            iresult = C_i_o_fixnum_times(x, y);

            if(iresult == C_SCHEME_FALSE)
                return C_flonum(ptr, (double)C_unfix(x) * (double)C_unfix(y));
            else return iresult;
        }
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_flonum(ptr, (double)C_unfix(x) * C_flonum_magnitude(y));
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "*", y);
    }
    else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        if(y & C_FIXNUM_BIT)
            return C_flonum(ptr, C_flonum_magnitude(x) * (double)C_unfix(y));
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_flonum(ptr, C_flonum_magnitude(x) * C_flonum_magnitude(y));
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "*", y);
    }
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, "*", x);
    /* shutup compiler */
    return C_flonum(ptr, NAN);
}

void C_ccall C_plus(C_word c, C_word closure, C_word k, ...)
{
    va_list v;
    C_word x, y;
    C_word iresult = C_fix(0);
    double fresult;
    C_alloc_flonum;

    va_start(v, k);
    c -= 2;

    while(c--) {
        x = va_arg(v, C_word);

        if(x & C_FIXNUM_BIT) {
            y = C_i_o_fixnum_plus(iresult, x);

            if(y == C_SCHEME_FALSE) {
                fresult = (double)C_unfix(iresult) + (double)C_unfix(x);
                goto flonum_result;
            }
            else iresult = y;
        }
        else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
            fresult = (double)C_unfix(iresult) + C_flonum_magnitude(x);
            goto flonum_result;
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "+", x);
    }

    va_end(v);
    C_kontinue(k, iresult);

flonum_result:
    while(c--) {
        x = va_arg(v, C_word);

        if(x & C_FIXNUM_BIT)
            fresult += (double)C_unfix(x);
        else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG)
            fresult += C_flonum_magnitude(x);
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "+", x);
    }

    va_end(v);
    C_kontinue_flonum(k, fresult);
}

C_regparm C_word C_fcall C_2_plus(C_word **ptr, C_word x, C_word y)
{
    C_word iresult;

    if(x & C_FIXNUM_BIT) {
        if(y & C_FIXNUM_BIT) {
            iresult = C_i_o_fixnum_plus(x, y);

            if(iresult == C_SCHEME_FALSE)
                return C_flonum(ptr, (double)C_unfix(x) + (double)C_unfix(y));
            else return iresult;
        }
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_flonum(ptr, (double)C_unfix(x) + C_flonum_magnitude(y));
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "+", y);
    }
    else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        if(y & C_FIXNUM_BIT)
            return C_flonum(ptr, C_flonum_magnitude(x) + (double)C_unfix(y));
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_flonum(ptr, C_flonum_magnitude(x) + C_flonum_magnitude(y));
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "+", y);
    }
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, "+", x);
    /* shutup compiler */
    return C_flonum(ptr, NAN);
}

void C_ccall C_minus(C_word c, C_word closure, C_word k, C_word n1, ...)
{
    va_list v;
    C_word x, y;
    C_word iresult;
    double fresult;
    int ff = 0;
    C_alloc_flonum;

    if(c < 3) C_bad_min_argc(c, 3);

    if(n1 & C_FIXNUM_BIT) iresult = n1;
    else if(!C_immediatep(n1) && C_block_header(n1) == C_FLONUM_TAG) {
        fresult = C_flonum_magnitude(n1);
        ff = 1;
    }
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, "-", n1);

    if(c == 3) {
        if(!ff) C_kontinue(k, C_fix(-C_unfix(n1)));
        else C_kontinue_flonum(k, -fresult);
    }

    va_start(v, n1);
    c -= 3;

    if(ff) goto flonum_result;

    while(c--) {
        x = va_arg(v, C_word);

        if(x & C_FIXNUM_BIT) {
            y = C_i_o_fixnum_difference(iresult, x);

            if(y == C_SCHEME_FALSE) {
                fresult = (double)C_unfix(iresult) - (double)C_unfix(x);
                goto flonum_result;
            }
            else iresult = y;
        }
        else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
            fresult = (double)C_unfix(iresult) - C_flonum_magnitude(x);
            goto flonum_result;
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "-", x);
    }

    va_end(v);
    C_kontinue(k, iresult);

flonum_result:
    while(c--) {
        x = va_arg(v, C_word);

        if(x & C_FIXNUM_BIT)
            fresult -= (double)C_unfix(x);
        else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG)
            fresult -= C_flonum_magnitude(x);
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "-", x);
    }

    va_end(v);
    C_kontinue_flonum(k, fresult);
}

C_regparm C_word C_fcall C_2_minus(C_word **ptr, C_word x, C_word y)
{
    C_word iresult;

    if(x & C_FIXNUM_BIT) {
        if(y & C_FIXNUM_BIT) {
            iresult = C_i_o_fixnum_difference(x, y);

            if(iresult == C_SCHEME_FALSE)
                return C_flonum(ptr, (double)C_unfix(x) - (double)C_unfix(y));
            else return iresult;
        }
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_flonum(ptr, (double)C_unfix(x) - C_flonum_magnitude(y));
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "-", y);
    }
    else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        if(y & C_FIXNUM_BIT)
            return C_flonum(ptr, C_flonum_magnitude(x) - (double)C_unfix(y));
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_flonum(ptr, C_flonum_magnitude(x) - C_flonum_magnitude(y));
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "-", y);
    }
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, "-", x);
    /* shutup compiler */
    return C_flonum(ptr, NAN);
}

void C_ccall C_divide(C_word c, C_word closure, C_word k, C_word n1, ...)
{
    va_list v;
    C_word n2;
    C_word iresult, n3;
    int fflag;
    double fresult, f2;
    C_alloc_flonum;

    if(c < 3) C_bad_min_argc(c, 3);

    if(n1 & C_FIXNUM_BIT) {
        iresult = C_unfix(n1);
        fflag = 0;
    }
    else if(!C_immediatep(n1) && C_block_header(n1) == C_FLONUM_TAG) {
        fresult = C_flonum_magnitude(n1);
        fflag = 1;
    }
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, "/", n1);

    if(c == 3) {
        if(fflag) {
            if(fresult == 0) barf(C_DIVISION_BY_ZERO_ERROR, "/");

            fresult = 1.0 / fresult;
        }
        else {
            if(iresult == 0) barf(C_DIVISION_BY_ZERO_ERROR, "/");
            else if(iresult == 1) C_kontinue(k, C_fix(1));

            fresult = 1.0 / (double)iresult;
            fflag = 1;
        }

        goto cont;
    }

    va_start(v, n1);
    c -= 3;

    while(c--) {
        n1 = va_arg(v, C_word);

        if(n1 & C_FIXNUM_BIT) {
            if(fflag) {
                if((n1 = C_unfix(n1)) == 0)
                    barf(C_DIVISION_BY_ZERO_ERROR, "/");

                fresult /= n1;
            }
            else {
                if((n2 = C_unfix(n1)) == 0)
                    barf(C_DIVISION_BY_ZERO_ERROR, "/");

                n3 = iresult / n2;

                if((fresult = (double)iresult / (double)n2) != n3)
                    fflag = 1;
                else iresult = n3;
            }
        }
        else if(!C_immediatep(n1) && C_block_header(n1) == C_FLONUM_TAG) {
            if(fflag) {
                if((f2 = C_flonum_magnitude(n1)) == 0)
                    barf(C_DIVISION_BY_ZERO_ERROR, "/");

                fresult /= f2;
            }
            else {
                fflag = 1;

                if((f2 = C_flonum_magnitude(n1)) == 0)
                    barf(C_DIVISION_BY_ZERO_ERROR, "/");

                fresult = (double)iresult / f2;
            }
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "/", n1);
    }

    va_end(v);

cont:
    if(fflag) {
        C_kontinue_flonum(k, fresult);
    }
    else n1 = C_fix(iresult);

    C_kontinue(k, n1);
}

C_regparm C_word C_fcall C_2_divide(C_word **ptr, C_word x, C_word y)
{
    C_word iresult;
    double fresult;
    int fflag = 0;

    if(x & C_FIXNUM_BIT) {
        if(y & C_FIXNUM_BIT) {
            if((iresult = C_unfix(y)) == 0) barf(C_DIVISION_BY_ZERO_ERROR, "/");

            fresult = (double)C_unfix(x) / (double)iresult;
            iresult = C_unfix(x) / iresult;
        }
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG) {
            if((fresult = C_flonum_magnitude(y)) == 0.0)
                barf(C_DIVISION_BY_ZERO_ERROR, "/");

            fresult = (double)C_unfix(x) / fresult;
            fflag = 1;
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "/", y);
    }
    else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        fflag = 1;

        if(y & C_FIXNUM_BIT) {
            fresult = C_flonum_magnitude(x);

            if((iresult = C_unfix(y)) == 0) barf(C_DIVISION_BY_ZERO_ERROR, "/");

            fresult = fresult / (double)iresult;
        }
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG) {
            if((fresult = C_flonum_magnitude(y)) == 0.0) barf(C_DIVISION_BY_ZERO_ERROR, "/");

            fresult = C_flonum_magnitude(x) / fresult;
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "/", y);
    }
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, "/", x);

    if(fflag || (double)iresult != fresult) return C_flonum(ptr, fresult);
    else return C_fix(iresult);
}

C_regparm C_word C_fcall C_equalp(C_word x, C_word y)
{
    C_header header;
    C_word bits, n, i;

    C_stack_check1(barf(C_CIRCULAR_DATA_ERROR, "equal?"));

loop:
    if(x == y) return 1;

    if(C_immediatep(x) || C_immediatep(y)) return 0;

    if((header = C_block_header(x)) != C_block_header(y)) return 0;
    else if((bits = header & C_HEADER_BITS_MASK) & C_BYTEBLOCK_BIT) {
        if(header == C_FLONUM_TAG && C_block_header(y) == C_FLONUM_TAG)
            return C_flonum_magnitude(x) == C_flonum_magnitude(y);
        else return !C_memcmp(C_data_pointer(x), C_data_pointer(y), header & C_HEADER_SIZE_MASK);
    }
    else if(header == C_SYMBOL_TAG) return 0;
    else {
        i = 0;
        n = header & C_HEADER_SIZE_MASK;

        if(bits & C_SPECIALBLOCK_BIT) {
            /* do not recurse into closures */
            if(C_header_bits(x) == C_CLOSURE_TYPE)
                return !C_memcmp((void *)x, (void *)y, n * sizeof(C_word));
            else if(C_block_item(x, 0) != C_block_item(y, 0)) return 0;
            else ++i;

            if(n == 1) return 1;
        }

        if(--n < 0) return 1;

        while(i < n)
            if(!C_equalp(C_block_item(x, i), C_block_item(y, i))) return 0;
            else ++i;

        x = C_block_item(x, i);
        y = C_block_item(y, i);
        goto loop;
    }
}

void C_ccall C_nequalp(C_word c, C_word closure, C_word k, ...)
{
    C_word x, i2, f, fflag, ilast;
    double flast, f2;
    va_list v;

    c -= 2;
    f = 1;
    va_start(v, k);

    if(c == 0) goto cont;

    x = va_arg(v, C_word);

    if(x & C_FIXNUM_BIT) {
        fflag = 0;
        ilast = C_unfix(x);
    }
    else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        fflag = 1;
        flast = C_flonum_magnitude(x);
    }
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, "=", x);

    while(--c) {
        x = va_arg(v, C_word);

        if(x & C_FIXNUM_BIT) {
            if(fflag) {
                f = flast == (f2 = (double)C_unfix(x));
                flast = f2;
            }
            else {
                f = ilast == (i2 = C_unfix(x));
                ilast = i2;
            }
        }
        else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
            if(fflag) {
                f = flast == (f2 = C_flonum_magnitude(x));
                flast = f2;
            }
            else {
                f = (double)ilast == (f2 = C_flonum_magnitude(x));
                flast = f2;
                fflag = 1;
            }
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "=", x);

        if(!f) break;
    }

cont:
    va_end(v);
    C_kontinue(k, C_mk_bool(f));
}

C_regparm C_word C_fcall C_i_nequalp(C_word x, C_word y)
{
    if(x & C_FIXNUM_BIT) {
        if(y & C_FIXNUM_BIT) return C_mk_bool(x == y);
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_mk_bool((double)C_unfix(x) == C_flonum_magnitude(y));

        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "=", y);
    }
    else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        if(y & C_FIXNUM_BIT) return C_mk_bool(C_flonum_magnitude(x) == (double)C_unfix(y));
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_mk_bool(C_flonum_magnitude(x) == C_flonum_magnitude(y));

        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "=", y);
    }
    else barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "=", x);

    return C_SCHEME_FALSE;
}

void C_ccall C_greaterp(C_word c, C_word closure, C_word k, ...)
{
    C_word x, i2, f, fflag, ilast;
    double flast, f2;
    va_list v;

    c -= 2;
    f = 1;
    va_start(v, k);

    if(c == 0) goto cont;

    x = va_arg(v, C_word);

    if(x & C_FIXNUM_BIT) {
        fflag = 0;
        ilast = C_unfix(x);
    }
    else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        fflag = 1;
        flast = C_flonum_magnitude(x);
    }
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, ">", x);

    while(--c) {
        x = va_arg(v, C_word);

        if(x & C_FIXNUM_BIT) {
            if(fflag) {
                f = flast > (f2 = (double)C_unfix(x));
                flast = f2;
            }
            else {
                f = ilast > (i2 = C_unfix(x));
                ilast = i2;
            }
        }
        else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
            if(fflag) {
                f = flast > (f2 = C_flonum_magnitude(x));
                flast = f2;
            }
            else {
                f = (double)ilast > (f2 = C_flonum_magnitude(x));
                flast = f2;
                fflag = 1;
            }
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, ">", x);

        if(!f) break;
    }

cont:
    va_end(v);
    C_kontinue(k, C_mk_bool(f));
}

C_regparm C_word C_fcall C_i_greaterp(C_word x, C_word y)
{
    if(x & C_FIXNUM_BIT) {
        if(y & C_FIXNUM_BIT) return C_mk_bool(x > y);
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_mk_bool((double)C_unfix(x) > C_flonum_magnitude(y));

        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, ">", y);
    }
    else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        if(y & C_FIXNUM_BIT) return C_mk_bool(C_flonum_magnitude(x) > (double)C_unfix(y));
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_mk_bool(C_flonum_magnitude(x) > C_flonum_magnitude(y));

        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, ">", y);
    }
    else barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, ">", x);

    return C_SCHEME_FALSE;
}

void C_ccall C_lessp(C_word c, C_word closure, C_word k, ...)
{
    C_word x, i2, f, fflag, ilast;
    double flast, f2;
    va_list v;

    c -= 2;
    f = 1;
    va_start(v, k);

    if(c == 0) goto cont;

    x = va_arg(v, C_word);

    if(x &C_FIXNUM_BIT) {
        fflag = 0;
        ilast = C_unfix(x);
    }
    else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        fflag = 1;
        flast = C_flonum_magnitude(x);
    }
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, "<", x);

    while(--c) {
        x = va_arg(v, C_word);

        if(x &C_FIXNUM_BIT) {
            if(fflag) {
                f = flast < (f2 = (double)C_unfix(x));
                flast = f2;
            }
            else {
                f = ilast < (i2 = C_unfix(x));
                ilast = i2;
            }
        }
        else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
            if(fflag) {
                f = flast < (f2 = C_flonum_magnitude(x));
                flast = f2;
            }
            else {
                f = (double)ilast < (f2 = C_flonum_magnitude(x));
                flast = f2;
                fflag = 1;
            }
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "<", x);

        if(!f) break;
    }

cont:
    va_end(v);
    C_kontinue(k, C_mk_bool(f));
}

C_regparm C_word C_fcall C_i_lessp(C_word x, C_word y)
{
    if(x & C_FIXNUM_BIT) {
        if(y & C_FIXNUM_BIT) return C_mk_bool(x < y);
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_mk_bool((double)C_unfix(x) < C_flonum_magnitude(y));

        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "<", y);
    }
    else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        if(y & C_FIXNUM_BIT) return C_mk_bool(C_flonum_magnitude(x) < (double)C_unfix(y));
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_mk_bool(C_flonum_magnitude(x) < C_flonum_magnitude(y));

        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "<", y);
    }
    else barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "<", x);

    return C_SCHEME_FALSE;
}

void C_ccall C_greater_or_equal_p(C_word c, C_word closure, C_word k, ...)
{
    C_word x, i2, f, fflag, ilast;
    double flast, f2;
    va_list v;

    c -= 2;
    f = 1;
    va_start(v, k);

    if(c == 0) goto cont;

    x = va_arg(v, C_word);

    if(x &C_FIXNUM_BIT) {
        fflag = 0;
        ilast = C_unfix(x);
    }
    else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        fflag = 1;
        flast = C_flonum_magnitude(x);
    }
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, ">=", x);

    while(--c) {
        x = va_arg(v, C_word);

        if(x &C_FIXNUM_BIT) {
            if(fflag) {
                f = flast >= (f2 = (double)C_unfix(x));
                flast = f2;
            }
            else {
                f = ilast >= (i2 = C_unfix(x));
                ilast = i2;
            }
        }
        else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
            if(fflag) {
                f = flast >= (f2 = C_flonum_magnitude(x));
                flast = f2;
            }
            else {
                f = (double)ilast >= (f2 = C_flonum_magnitude(x));
                flast = f2;
                fflag = 1;
            }
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, ">=", x);

        if(!f) break;
    }

cont:
    va_end(v);
    C_kontinue(k, C_mk_bool(f));
}

C_regparm C_word C_fcall C_i_greater_or_equalp(C_word x, C_word y)
{
    if(x & C_FIXNUM_BIT) {
        if(y & C_FIXNUM_BIT) return C_mk_bool(x >= y);
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_mk_bool((double)C_unfix(x) >= C_flonum_magnitude(y));

        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, ">=", y);
    }
    else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        if(y & C_FIXNUM_BIT) return C_mk_bool(C_flonum_magnitude(x) >= (double)C_unfix(y));
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_mk_bool(C_flonum_magnitude(x) >= C_flonum_magnitude(y));

        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, ">=", y);
    }
    else barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, ">=", x);

    return C_SCHEME_FALSE;
}

void C_ccall C_less_or_equal_p(C_word c, C_word closure, C_word k, ...)
{
    C_word x, i2, f, fflag, ilast;
    double flast, f2;
    va_list v;

    c -= 2;
    f = 1;
    va_start(v, k);

    if(c == 0) goto cont;

    x = va_arg(v, C_word);

    if(x &C_FIXNUM_BIT) {
        fflag = 0;
        ilast = C_unfix(x);
    }
    else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        fflag = 1;
        flast = C_flonum_magnitude(x);
    }
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, "<=", x);

    while(--c) {
        x = va_arg(v, C_word);

        if(x &C_FIXNUM_BIT) {
            if(fflag) {
                f = flast <= (f2 = (double)C_unfix(x));
                flast = f2;
            }
            else {
                f = ilast <= (i2 = C_unfix(x));
                ilast = i2;
            }
        }
        else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
            if(fflag) {
                f = flast <= (f2 = C_flonum_magnitude(x));
                flast = f2;
            }
            else {
                f = (double)ilast <= (f2 = C_flonum_magnitude(x));
                flast = f2;
                fflag = 1;
            }
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "<=", x);

        if(!f) break;
    }

cont:
    va_end(v);
    C_kontinue(k, C_mk_bool(f));
}

C_regparm C_word C_fcall C_i_less_or_equalp(C_word x, C_word y)
{
    if(x & C_FIXNUM_BIT) {
        if(y & C_FIXNUM_BIT) return C_mk_bool(x <= y);
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_mk_bool((double)C_unfix(x) <= C_flonum_magnitude(y));

        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "<=", y);
    }
    else if(!C_immediatep(x) && C_block_header(x) == C_FLONUM_TAG) {
        if(y & C_FIXNUM_BIT) return C_mk_bool(C_flonum_magnitude(x) <= (double)C_unfix(y));
        else if(!C_immediatep(y) && C_block_header(y) == C_FLONUM_TAG)
            return C_mk_bool(C_flonum_magnitude(x) <= C_flonum_magnitude(y));

        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "<=", y);
    }
    else barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, "<=", x);

    return C_SCHEME_FALSE;
}

void C_ccall C_expt(C_word c, C_word closure, C_word k, C_word n1, C_word n2)
{
    double m1, m2;
    C_word r;
    C_alloc_flonum;

    if(c != 4) C_bad_argc(c, 4);

    if(n1 & C_FIXNUM_BIT) m1 = C_unfix(n1);
    else if(!C_immediatep(n1) && C_block_header(n1) == C_FLONUM_TAG)
        m1 = C_flonum_magnitude(n1);
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, "expt", n1);

    if(n2 & C_FIXNUM_BIT) m2 = C_unfix(n2);
    else if(!C_immediatep(n2) && C_block_header(n2) == C_FLONUM_TAG)
        m2 = C_flonum_magnitude(n2);
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, "expt", n2);

    m1 = pow(m1, m2);
    r = (C_word)m1;

    if(r == m1 && (n1 & C_FIXNUM_BIT) && (n2 & C_FIXNUM_BIT) && modf(m1, &m2) == 0.0 && C_fitsinfixnump(r))
        C_kontinue(k, C_fix(r));

    C_kontinue_flonum(k, m1);
}

C_regparm C_word C_fcall C_a_i_exact_to_inexact(C_word **a, int c, C_word n)
{
    if(n & C_FIXNUM_BIT)
        return C_flonum(a, (double)C_unfix(n));
    else if(C_immediatep(n) || C_block_header(n) != C_FLONUM_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "exact->inexact", n);

    return n;
}

void C_ccall C_quotient(C_word c, C_word closure, C_word k, C_word n1, C_word n2)
{
    double f1, f2, r;
    C_word result;
    C_alloc_flonum;

    if(c != 4) C_bad_argc(c, 4);

    if(n1 &C_FIXNUM_BIT) {
        if(n2 &C_FIXNUM_BIT) {
            if((n2 = C_unfix(n2)) == 0)
                barf(C_DIVISION_BY_ZERO_ERROR, "quotient");

            result = C_fix(C_unfix(n1) / n2);
            C_kontinue(k, result);
        }
        else if(!C_immediatep(n2) && C_block_header(n2) == C_FLONUM_TAG) {
            f1 = (double)C_unfix(n1);
            f2 = C_flonum_magnitude(n2);
            if(C_isnan(f2) || C_isinf(f2) || C_modf(f2, &r) != 0.0)
                barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "quotient", n2);
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "quotient", n2);
    }
    else if(!C_immediatep(n1) && C_block_header(n1) == C_FLONUM_TAG) {
        f1 = C_flonum_magnitude(n1);
        if(C_isnan(f1) || C_isinf(f1) || C_modf(f1, &r) != 0.0)
            barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "quotient", n1);

        if(n2 &C_FIXNUM_BIT)
            f2 = (double)C_unfix(n2);
        else if(!C_immediatep(n2) && C_block_header(n2) == C_FLONUM_TAG) {
            f2 = C_flonum_magnitude(n2);
            if(C_isnan(f2) || C_isinf(f2) || C_modf(f2, &r) != 0.0)
                barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, "quotient", n2);
        }
        else barf(C_BAD_ARGUMENT_TYPE_ERROR, "quotient", n2);
    }
    else barf(C_BAD_ARGUMENT_TYPE_ERROR, "quotient", n1);

    if(f2 == 0)
        barf(C_DIVISION_BY_ZERO_ERROR, "quotient");

    modf(f1 / f2, &r);
    C_kontinue_flonum(k, r);
}
