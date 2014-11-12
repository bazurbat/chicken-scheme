#include "errors.h"
#include "symbol_table.h"
#include <chicken.h>

#define C_vfprintf                 vfprintf

C_TLS C_word
    error_hook_symbol,
    error_location;

C_TLS void (*C_panic_hook)(C_char *msg) = NULL;

static C_regparm C_word C_fcall intern0(C_char *str)
{
    int len = strlen(str);
    int key = hash_string(len, str, symbol_table->size, symbol_table->rand, 0);
    C_word s;

    if(C_truep(s = lookup(key, len, str, symbol_table))) return s;
    else return C_SCHEME_FALSE;
}

void C_dbg(C_char *prefix, C_char *fstr, ...)
{
    va_list va;

    va_start(va, fstr);
    fflush(stdout);
    fprintf(stderr, "[%s] ", prefix);
    C_vfprintf(stderr, fstr, va);
    fflush(stderr);
    va_end(va);
}

/* Hook for setting breakpoints */

C_word C_dbg_hook(C_word dummy)
{
    return dummy;
}

void panic(C_char *msg)
{
    if(C_panic_hook != NULL) C_panic_hook(msg);

    usual_panic(msg);
}

void usual_panic(C_char *msg)
{
    C_char *dmp = C_dump_trace(0);

    C_dbg_hook(C_SCHEME_UNDEFINED);

    C_dbg("panic", C_text("%s - execution terminated\n\n%s"), msg, dmp);
    C_exit(1);
}


void horror(C_char *msg)
{
    C_dbg_hook(C_SCHEME_UNDEFINED);

    C_dbg("horror", C_text("\n%s - execution terminated"), msg);
    C_exit(1);
}


/* Error-hook, called from C-level runtime routines: */

void barf(int code, char *loc, ...)
{
    C_char *msg;
    C_word err = error_hook_symbol;
    int c, i;
    va_list v;

    C_dbg_hook(C_SCHEME_UNDEFINED);

    C_temporary_stack = C_temporary_stack_bottom;
    err = C_block_item(err, 0);

    if(C_immediatep(err))
        panic(C_text("`##sys#error-hook' is not defined - the `library' unit was probably not linked with this executable"));

    switch(code) {
    case C_BAD_ARGUMENT_COUNT_ERROR:
        msg = C_text("bad argument count");
        c = 3;
        break;

    case C_BAD_MINIMUM_ARGUMENT_COUNT_ERROR:
        msg = C_text("too few arguments");
        c = 3;
        break;

    case C_BAD_ARGUMENT_TYPE_ERROR:
        msg = C_text("bad argument type");
        c = 1;
        break;

    case C_UNBOUND_VARIABLE_ERROR:
        msg = C_text("unbound variable");
        c = 1;
        break;

    case C_TOO_MANY_PARAMETERS_ERROR:
        msg = C_text("parameter limit exceeded");
        c = 0;
        break;

    case C_OUT_OF_MEMORY_ERROR:
        msg = C_text("not enough memory");
        c = 0;
        break;

    case C_DIVISION_BY_ZERO_ERROR:
        msg = C_text("division by zero");
        c = 0;
        break;

    case C_OUT_OF_RANGE_ERROR:
        msg = C_text("out of range");
        c = 2;
        break;

    case C_NOT_A_CLOSURE_ERROR:
        msg = C_text("call of non-procedure");
        c = 1;
        break;

    case C_CONTINUATION_CANT_RECEIVE_VALUES_ERROR:
        msg = C_text("continuation cannot receive multiple values");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_CYCLIC_LIST_ERROR:
        msg = C_text("bad argument type - not a non-cyclic list");
        c = 1;
        break;

    case C_TOO_DEEP_RECURSION_ERROR:
        msg = C_text("recursion too deep");
        c = 0;
        break;

    case C_CANT_REPRESENT_INEXACT_ERROR:
        msg = C_text("inexact number cannot be represented as an exact number");
        c = 1;
        break;

    case C_NOT_A_PROPER_LIST_ERROR:
        msg = C_text("bad argument type - not a proper list");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_FIXNUM_ERROR:
        msg = C_text("bad argument type - not a fixnum");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_STRING_ERROR:
        msg = C_text("bad argument type - not a string");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_PAIR_ERROR:
        msg = C_text("bad argument type - not a pair");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_BOOLEAN_ERROR:
        msg = C_text("bad argument type - not a boolean");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_LOCATIVE_ERROR:
        msg = C_text("bad argument type - not a locative");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_LIST_ERROR:
        msg = C_text("bad argument type - not a list");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR:
        msg = C_text("bad argument type - not a number");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_SYMBOL_ERROR:
        msg = C_text("bad argument type - not a symbol");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_VECTOR_ERROR:
        msg = C_text("bad argument type - not a vector");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_CHAR_ERROR:
        msg = C_text("bad argument type - not a character");
        c = 1;
        break;

    case C_STACK_OVERFLOW_ERROR:
        msg = C_text("stack overflow");
        c = 0;
        break;

    case C_BAD_ARGUMENT_TYPE_BAD_STRUCT_ERROR:
        msg = C_text("bad argument type - not a structure of the required type");
        c = 2;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_BYTEVECTOR_ERROR:
        msg = C_text("bad argument type - not a blob");
        c = 1;
        break;

    case C_LOST_LOCATIVE_ERROR:
        msg = C_text("locative refers to reclaimed object");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR:
        msg = C_text("bad argument type - not a non-immediate value");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_NUMBER_VECTOR_ERROR:
        msg = C_text("bad argument type - not a number vector");
        c = 2;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR:
        msg = C_text("bad argument type - not an integer");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_UINTEGER_ERROR:
        msg = C_text("bad argument type - not an unsigned integer");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR:
        msg = C_text("bad argument type - not a pointer");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_TAGGED_POINTER_ERROR:
        msg = C_text("bad argument type - not a tagged pointer");
        c = 2;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR:
        msg = C_text("bad argument type - not a flonum");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_CLOSURE_ERROR:
        msg = C_text("bad argument type - not a procedure");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_BAD_BASE_ERROR:
        msg = C_text("bad argument type - invalid base");
        c = 1;
        break;

    case C_CIRCULAR_DATA_ERROR:
        msg = C_text("recursion too deep or circular data encountered");
        c = 0;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_PORT_ERROR:
        msg = C_text("bad argument type - not a port");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_INPUT_PORT_ERROR:
        msg = C_text("bad argument type - not an input-port");
        c = 1;
        break;

    case C_BAD_ARGUMENT_TYPE_NO_OUTPUT_PORT_ERROR:
        msg = C_text("bad argument type - not an output-port");
        c = 1;
        break;

    case C_PORT_CLOSED_ERROR:
        msg = C_text("port already closed");
        c = 1;
        break;

    case C_ASCIIZ_REPRESENTATION_ERROR:
        msg = C_text("cannot represent string with NUL bytes as C string");
        c = 1;
        break;

    case C_MEMORY_VIOLATION_ERROR:
        msg = C_text("segmentation violation");
        c = 0;
        break;

    default: panic(C_text("illegal internal error code"));
    }

    if(!C_immediatep(err)) {
        C_save(C_fix(code));

        if(loc != NULL)
            C_save(intern0(loc));
        else {
            C_save(error_location);
            error_location = C_SCHEME_FALSE;
        }

        va_start(v, loc);
        i = c;

        while(i--)
            C_save(va_arg(v, C_word));

        va_end(v);
        /* No continuation is passed: '##sys#error-hook' may not return: */
        C_do_apply(c + 2, err, C_SCHEME_UNDEFINED);
    }
    else panic(msg);
}

/* Print error messages and exit: */

void C_bad_memory(void)
{
    panic(C_text("there is not enough stack-space to run this executable"));
}

void C_bad_memory_2(void)
{
    panic(C_text("there is not enough heap-space to run this executable - try using the '-:h...' option"));
}

/* The following two can be thrown out in the next release... */

void C_bad_argc(int c, int n)
{
    C_bad_argc_2(c, n, C_SCHEME_FALSE);
}

void C_bad_min_argc(int c, int n)
{
    C_bad_min_argc_2(c, n, C_SCHEME_FALSE);
}

void C_bad_argc_2(int c, int n, C_word closure)
{
    barf(C_BAD_ARGUMENT_COUNT_ERROR, NULL, C_fix(n - 2), C_fix(c - 2), closure);
}

void C_bad_min_argc_2(int c, int n, C_word closure)
{
    barf(C_BAD_MINIMUM_ARGUMENT_COUNT_ERROR, NULL, C_fix(n - 2), C_fix(c - 2), closure);
}

void C_stack_overflow(void)
{
    barf(C_STACK_OVERFLOW_ERROR, NULL);
}

void C_temp_stack_overflow(void)
{
    /* Just raise a "too many parameters" error; it isn't very useful to
       show a different message here. */
    barf(C_TOO_MANY_PARAMETERS_ERROR, NULL);
}

void C_unbound_error(C_word sym)
{
    barf(C_UNBOUND_VARIABLE_ERROR, NULL, sym);
}

void C_no_closure_error(C_word x)
{
    barf(C_NOT_A_CLOSURE_ERROR, NULL, x);
}

void C_div_by_zero_error(char *loc)
{
    barf(C_DIVISION_BY_ZERO_ERROR, loc);
}

void C_unbound_variable(C_word sym)
{
    barf(C_UNBOUND_VARIABLE_ERROR, NULL, sym);
}

void C_ccall C_invalid_procedure(int c, C_word self, ...)
{
    barf(C_NOT_A_CLOSURE_ERROR, NULL, self);
}


