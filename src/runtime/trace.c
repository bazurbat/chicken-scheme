#include "trace.h"
#include <chicken.h>
#include <assert.h>

#define DEFAULT_TRACE_BUFFER_SIZE      16

#define MIN_TRACE_BUFFER_SIZE          3

TRACE_INFO *trace_buffer;

TRACE_INFO *trace_buffer_limit;

static TRACE_INFO
    *trace_buffer_top;

int
    C_trace_buffer_size = DEFAULT_TRACE_BUFFER_SIZE;

int
    show_trace;

static int
    trace_buffer_full;

C_word current_thread_symbol;

C_regparm void C_fcall C_trace(C_char *name)
{
    if(show_trace) {
        fputs(name, stderr);
        fputc('\n', stderr);
    }

    if(trace_buffer_top >= trace_buffer_limit) {
        trace_buffer_top = trace_buffer;
        trace_buffer_full = 1;
    }

    trace_buffer_top->raw = name;
    trace_buffer_top->cooked1 = C_SCHEME_FALSE;
    trace_buffer_top->cooked2 = C_SCHEME_FALSE;
    trace_buffer_top->thread = C_block_item(current_thread_symbol, 0);
    ++trace_buffer_top;
}

C_regparm C_word C_fcall C_emit_trace_info2(char *raw, C_word x, C_word y, C_word t)
{
    if(trace_buffer_top >= trace_buffer_limit) {
        trace_buffer_top = trace_buffer;
        trace_buffer_full = 1;
    }

    trace_buffer_top->raw = raw;
    trace_buffer_top->cooked1 = x;
    trace_buffer_top->cooked2 = y;
    trace_buffer_top->thread = t;
    ++trace_buffer_top;
    return x;
}

C_char *C_dump_trace(int start)
{
    TRACE_INFO *ptr;
    C_char *result;
    int i, result_len;

    result_len = STRING_BUFFER_SIZE;
    if((result = (char *)malloc(result_len)) == NULL)
        horror(C_text("out of memory - cannot allocate trace-dump buffer"));

    *result = '\0';

    if(trace_buffer_top > trace_buffer || trace_buffer_full) {
        if(trace_buffer_full) {
            i = C_trace_buffer_size;
            C_strlcat(result, C_text("...more...\n"), result_len);
        }
        else i = trace_buffer_top - trace_buffer;

        ptr = trace_buffer_full ? trace_buffer_top : trace_buffer;
        ptr += start;
        i -= start;

        for(; i--; ++ptr) {
            if(ptr >= trace_buffer_limit) ptr = trace_buffer;

            if(strlen(result) > STRING_BUFFER_SIZE - 32) {
                result_len = strlen(result) * 2;
                result = realloc(result, result_len);
                if(result == NULL)
                    horror(C_text("out of memory - cannot reallocate trace-dump buffer"));
            }

            C_strlcat(result, ptr->raw, result_len);

            if(i > 0) C_strlcat(result, "\n", result_len);
            else C_strlcat(result, " \t<--\n", result_len);
        }
    }

    return result;
}

C_regparm void C_fcall C_clear_trace_buffer(void)
{
    int i;

    if(trace_buffer == NULL) {
        if(C_trace_buffer_size < MIN_TRACE_BUFFER_SIZE)
            C_trace_buffer_size = MIN_TRACE_BUFFER_SIZE;

        trace_buffer = (TRACE_INFO *)malloc(sizeof(TRACE_INFO) * C_trace_buffer_size);

        if(trace_buffer == NULL)
            panic(C_text("out of memory - cannot allocate trace-buffer"));
    }

    trace_buffer_top = trace_buffer;
    trace_buffer_limit = trace_buffer + C_trace_buffer_size;
    trace_buffer_full = 0;

    for(i = 0; i < C_trace_buffer_size; ++i) {
        trace_buffer[ i ].cooked1 = C_SCHEME_FALSE;
        trace_buffer[ i ].cooked2 = C_SCHEME_FALSE;
        trace_buffer[ i ].thread = C_SCHEME_FALSE;
    }
}


C_word C_resize_trace_buffer(C_word size) {
    int old_size = C_trace_buffer_size;
    assert(trace_buffer);
    free(trace_buffer);
    trace_buffer = NULL;
    C_trace_buffer_size = C_unfix(size);
    C_clear_trace_buffer();
    return(C_fix(old_size));
}

C_word C_fetch_trace(C_word starti, C_word buffer)
{
    TRACE_INFO *ptr;
    int i, p = 0, start = C_unfix(starti);

    if(trace_buffer_top > trace_buffer || trace_buffer_full) {
        if(trace_buffer_full) i = C_trace_buffer_size;
        else i = trace_buffer_top - trace_buffer;

        ptr = trace_buffer_full ? trace_buffer_top : trace_buffer;
        ptr += start;
        i -= start;

        if(C_header_size(buffer) < i * 4)
            panic(C_text("destination buffer too small for call-chain"));

        for(; i--; ++ptr) {
            if(ptr >= trace_buffer_limit) ptr = trace_buffer;

            /* outside-pointer, will be ignored by GC */
            C_mutate(&C_block_item(buffer, p++), (C_word)ptr->raw);

            /* subject to GC */
            C_mutate(&C_block_item(buffer, p++), ptr->cooked1);
            C_mutate(&C_block_item(buffer, p++), ptr->cooked2);
            C_mutate(&C_block_item(buffer, p++), ptr->thread);
        }
    }

    return C_fix(p);
}
