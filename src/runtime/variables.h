#ifndef RUNTIME_VARIABLES_H
#define RUNTIME_VARIABLES_H

/* Variables: */

C_varextern C_TLS time_t C_startup_time_seconds;
C_varextern C_TLS C_word
*C_temporary_stack,
*C_temporary_stack_bottom,
*C_temporary_stack_limit,
*C_stack_limit;
C_varextern C_TLS C_long
    C_timer_interrupt_counter,
    C_initial_timer_interrupt_period;
C_varextern C_TLS C_byte
*C_fromspace_top,
*C_fromspace_limit;
#ifdef HAVE_SIGSETJMP
C_varextern C_TLS sigjmp_buf C_restart;
#else
C_varextern C_TLS jmp_buf C_restart;
#endif
C_varextern C_TLS void *C_restart_address;
C_varextern C_TLS int C_entry_point_status;

C_varextern C_TLS void (C_fcall *C_restart_trampoline)(void *proc) C_regparm C_noret;
C_varextern C_TLS void (*C_pre_gc_hook)(int mode);
C_varextern C_TLS void (*C_post_gc_hook)(int mode, C_long ms);
C_varextern C_TLS void (*C_panic_hook)(C_char *msg);

C_varextern C_TLS int
    C_abort_on_thread_exceptions,
    C_interrupts_enabled,
    C_disable_overflow_check,
    C_enable_gcweak,
    C_heap_size_is_fixed,
    C_max_pending_finalizers,
    C_trace_buffer_size,
    C_main_argc;
C_varextern C_TLS C_uword
    C_heap_growth,
    C_heap_shrinkage;
C_varextern C_TLS char
**C_main_argv,
*C_dlerror;
C_varextern C_TLS C_uword C_maximal_heap_size;
C_varextern C_TLS int (*C_gc_mutation_hook)(C_word *slot, C_word val);
C_varextern C_TLS void (*C_gc_trace_hook)(C_word *var, int mode);
C_varextern C_TLS C_word (*C_get_unbound_variable_value_hook)(C_word sym);

#endif /* RUNTIME_VARIABLES_H */
