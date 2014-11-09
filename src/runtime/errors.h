#ifndef RUNTIME_ERROR_H
#define RUNTIME_ERROR_H

#include "definitions.h"

#define C_BAD_ARGUMENT_COUNT_ERROR                    1
#define C_BAD_MINIMUM_ARGUMENT_COUNT_ERROR            2
#define C_BAD_ARGUMENT_TYPE_ERROR                     3
#define C_UNBOUND_VARIABLE_ERROR                      4
#define C_TOO_MANY_PARAMETERS_ERROR                   5
#define C_OUT_OF_MEMORY_ERROR                         6
#define C_DIVISION_BY_ZERO_ERROR                      7
#define C_OUT_OF_RANGE_ERROR                          8
#define C_NOT_A_CLOSURE_ERROR                         9
#define C_CONTINUATION_CANT_RECEIVE_VALUES_ERROR      10
#define C_BAD_ARGUMENT_TYPE_CYCLIC_LIST_ERROR         11
#define C_TOO_DEEP_RECURSION_ERROR                    12
#define C_CANT_REPRESENT_INEXACT_ERROR                13
#define C_NOT_A_PROPER_LIST_ERROR                     14
#define C_BAD_ARGUMENT_TYPE_NO_FIXNUM_ERROR           15
#define C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR           16
#define C_BAD_ARGUMENT_TYPE_NO_STRING_ERROR           17
#define C_BAD_ARGUMENT_TYPE_NO_PAIR_ERROR             18
#define C_BAD_ARGUMENT_TYPE_NO_LIST_ERROR             19
#define C_BAD_ARGUMENT_TYPE_NO_CHAR_ERROR             20
#define C_BAD_ARGUMENT_TYPE_NO_VECTOR_ERROR           21
#define C_BAD_ARGUMENT_TYPE_NO_SYMBOL_ERROR           22
#define C_STACK_OVERFLOW_ERROR                        23
#define C_BAD_ARGUMENT_TYPE_BAD_STRUCT_ERROR          24
#define C_BAD_ARGUMENT_TYPE_NO_BYTEVECTOR_ERROR       25
#define C_LOST_LOCATIVE_ERROR                         26
#define C_BAD_ARGUMENT_TYPE_NO_BLOCK_ERROR            27
#define C_BAD_ARGUMENT_TYPE_NO_NUMBER_VECTOR_ERROR    28
#define C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR          29
#define C_BAD_ARGUMENT_TYPE_NO_UINTEGER_ERROR         30
#define C_BAD_ARGUMENT_TYPE_NO_POINTER_ERROR          31
#define C_BAD_ARGUMENT_TYPE_NO_TAGGED_POINTER_ERROR   32
#define C_BAD_ARGUMENT_TYPE_NO_FLONUM_ERROR           33
#define C_BAD_ARGUMENT_TYPE_NO_CLOSURE_ERROR          34
#define C_BAD_ARGUMENT_TYPE_BAD_BASE_ERROR            35
#define C_CIRCULAR_DATA_ERROR                         36
#define C_BAD_ARGUMENT_TYPE_NO_BOOLEAN_ERROR          37
#define C_BAD_ARGUMENT_TYPE_NO_LOCATIVE_ERROR         38
#define C_BAD_ARGUMENT_TYPE_NO_PORT_ERROR             39
#define C_BAD_ARGUMENT_TYPE_NO_INPUT_PORT_ERROR       40
#define C_BAD_ARGUMENT_TYPE_NO_OUTPUT_PORT_ERROR      41
#define C_PORT_CLOSED_ERROR                           42
#define C_ASCIIZ_REPRESENTATION_ERROR                 43
#define C_MEMORY_VIOLATION_ERROR                      44
#define C_FLOATING_POINT_EXCEPTION_ERROR              45
#define C_ILLEGAL_INSTRUCTION_ERROR                   46
#define C_BUS_ERROR                                   47

extern C_TLS C_word
    error_hook_symbol,
    error_location;

void C_dbg(C_char *prefix, C_char *fstr, ...);

void barf(int code, char *loc, ...) C_noret;

void panic(C_char *msg) C_noret;

void usual_panic(C_char *msg) C_noret;

void horror(C_char *msg) C_noret;

C_fctexport void C_bad_memory(void) C_noret;
C_fctexport void C_bad_memory_2(void) C_noret;
C_fctexport void C_bad_argc(int c, int n) C_noret;
C_fctexport void C_bad_min_argc(int c, int n) C_noret;
C_fctexport void C_bad_argc_2(int c, int n, C_word closure) C_noret;
C_fctexport void C_bad_min_argc_2(int c, int n, C_word closure) C_noret;
C_fctexport void C_stack_overflow(void) C_noret;
C_fctexport void C_temp_stack_overflow(void) C_noret;
C_fctexport void C_unbound_error(C_word sym) C_noret;
C_fctexport void C_no_closure_error(C_word x) C_noret;
C_fctexport void C_div_by_zero_error(char *loc) C_noret;
C_fctexport void C_unbound_variable(C_word sym);
C_fctimport void C_ccall C_invalid_procedure(int c, C_word self, ...) C_noret;

#endif
