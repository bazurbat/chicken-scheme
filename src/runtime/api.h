#ifndef RUNTIME_API_H
#define RUNTIME_API_H

#include "definitions.h"

extern C_TLS int chicken_is_running;
extern C_TLS int stack_size_changed;
extern C_TLS int fake_tty_flag;
extern C_TLS int forwarding_table_size;
extern C_TLS int C_enable_repl;

C_varextern C_TLS int
    C_abort_on_thread_exceptions;


C_varextern C_TLS int
    C_disable_overflow_check,
    C_main_argc;

C_varextern C_TLS char
    **C_main_argv,
    *C_dlerror;

C_varextern C_TLS void (C_fcall *C_restart_trampoline)(void *proc) C_regparm C_noret;
C_varextern C_TLS int (*C_gc_mutation_hook)(C_word *slot, C_word val);

C_fctexport void C_default_5fstub_toplevel(C_word c,C_word d,C_word k) C_noret;

#ifdef HAVE_SIGSETJMP
C_varextern C_TLS sigjmp_buf C_restart;
#else
C_varextern C_TLS jmp_buf C_restart;
#endif

C_varextern C_TLS void *C_restart_address;

typedef struct C_block_struct
{
    C_header header;
#if (__STDC_VERSION__ >= 199901L)
    C_word data[];
#else
    C_word data[ 1 ];
#endif
} C_SCHEME_BLOCK;

typedef struct C_ptable_entry_struct
{
    C_char *id;
    void *ptr;
} C_PTABLE_ENTRY;

typedef struct C_gc_root_struct
{
    C_word value;
    struct C_gc_root_struct *next, *prev;
    int finalizable;
} C_GC_ROOT;

typedef void (C_fcall *TRAMPOLINE)(void *proc) C_regparm C_noret;

#define CHICKEN_gc_root_ref(root)      (((C_GC_ROOT *)(root))->value)
#define CHICKEN_gc_root_set(root, x)   C_mutate2(&((C_GC_ROOT *)(root))->value, (x))

#define CHICKEN_global_ref(root)       C_u_i_car(((C_GC_ROOT *)(root))->value)
#define CHICKEN_global_set(root, x)    C_mutate2(&C_u_i_car(((C_GC_ROOT *)(root))->value), (x))

#define CHICKEN_default_toplevel       ((void *)C_default_5fstub_toplevel)

void generic_trampoline(void *dummy) C_noret;

C_fctexport int CHICKEN_main(int argc, char *argv[], void *toplevel);
C_fctexport int CHICKEN_initialize(int heap, int stack, int symbols, void *toplevel);
C_fctexport C_word CHICKEN_run(void *toplevel);
C_fctexport C_word CHICKEN_continue(C_word k);
C_fctexport void *CHICKEN_new_gc_root();
C_fctexport void *CHICKEN_new_gc_root_2(int finalizable);
C_fctexport void *CHICKEN_new_finalizable_gc_root();
C_fctexport void CHICKEN_delete_gc_root(void *root);
C_fctexport void *CHICKEN_global_lookup(char *name);
C_fctexport int CHICKEN_is_running();
C_fctexport void CHICKEN_interrupt();
C_fctexport void CHICKEN_parse_command_line(int argc, char *argv[], C_word *heap, C_word *stack, C_word *symbols);

C_fctexport void  CHICKEN_get_error_message(char *buf,int bufsize);
C_fctexport int  CHICKEN_load(char * filename);
C_fctexport int  CHICKEN_read(char * str,C_word *result);
C_fctexport int  CHICKEN_apply_to_string(C_word func,C_word args,char *buf,int bufsize);
C_fctexport int  CHICKEN_apply(C_word func,C_word args,C_word *result);
C_fctexport int  CHICKEN_eval_string_to_string(char *str,char *buf,int bufsize);
C_fctexport int  CHICKEN_eval_to_string(C_word exp,char *buf,int bufsize);
C_fctexport int  CHICKEN_eval_string(char * str,C_word *result);
C_fctexport int  CHICKEN_eval(C_word exp,C_word *result);
C_fctexport int  CHICKEN_yield();

C_fctexport void C_fcall C_toplevel_entry(C_char *name) C_regparm;
C_fctexport C_word C_halt(C_word msg);
C_fctexport C_word C_message(C_word msg);
C_fctexport C_word C_exit_runtime(C_word code);

C_fctexport void C_ccall C_return_to_host(C_word c, C_word closure, C_word k) C_noret;
C_fctexport void C_ccall C_context_switch(C_word c, C_word closure, C_word k, C_word state) C_noret;

C_fctimport void C_ccall C_toplevel(C_word c, C_word self, C_word k) C_noret;

#endif /* RUNTIME_API_H */
