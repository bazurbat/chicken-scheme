#ifndef RUNTIME_API_H
#define RUNTIME_API_H

#include "definitions.h"

extern C_TLS int chicken_is_running;
extern C_TLS int stack_size_changed;
extern C_TLS int fake_tty_flag;
extern C_TLS int forwarding_table_size;
extern C_TLS int C_enable_repl;

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
