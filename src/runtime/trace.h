#ifndef RUNTIME_TRACE_H
#define RUNTIME_TRACE_H

#include <common.h>

typedef struct trace_info_struct
{
    C_char *raw;
    C_word cooked1, cooked2, thread;
} TRACE_INFO;

extern C_TLS TRACE_INFO *trace_buffer;
extern C_TLS TRACE_INFO *trace_buffer_limit;

extern C_TLS C_word current_thread_symbol;
extern C_TLS int show_trace;

C_varextern C_TLS int
    C_trace_buffer_size;

C_fctexport void C_fcall C_trace(C_char *name) C_regparm;
C_fctexport C_word C_fcall C_emit_trace_info2(char *raw, C_word x, C_word y, C_word t) C_regparm;
C_fctexport C_char *C_dump_trace(int start);
C_fctexport void C_fcall C_clear_trace_buffer(void) C_regparm;
C_fctexport C_word C_resize_trace_buffer(C_word size);
C_fctexport C_word C_fetch_trace(C_word start, C_word buffer);

#endif /* RUNTIME_TRACE_H */
