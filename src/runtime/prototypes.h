#ifndef RUNTIME_PROTOTYPES_H
#define RUNTIME_PROTOTYPES_H

/* Prototypes: */

C_BEGIN_C_DECLS

C_fctexport int CHICKEN_main(int argc, char *argv[], void *toplevel);
C_fctexport int CHICKEN_initialize(int heap, int stack, int symbols, void *toplevel);
C_fctexport C_word CHICKEN_run(void *toplevel);
C_fctexport C_word CHICKEN_continue(C_word k);
C_fctexport void *CHICKEN_new_gc_root();
C_fctexport void *CHICKEN_new_finalizable_gc_root();
C_fctexport void *CHICKEN_new_gc_root_2(int finalizable);
C_fctexport void CHICKEN_delete_gc_root(void *root);
C_fctexport void *CHICKEN_global_lookup(char *name);
C_fctexport int CHICKEN_is_running();
C_fctexport void CHICKEN_interrupt();

C_fctexport void C_check_nursery_minimum(C_word size);
C_fctexport int C_fcall C_save_callback_continuation(C_word **ptr, C_word k);
C_fctexport C_word C_fcall C_restore_callback_continuation(void);
C_fctexport C_word C_fcall C_restore_callback_continuation2(int level);
C_fctexport C_word C_fcall C_callback(C_word closure, int argc);
C_fctexport C_word C_fcall C_callback_wrapper(void *proc, int argc);
C_fctexport void C_fcall C_callback_adjust_stack(C_word *base, int size);
C_fctexport void CHICKEN_parse_command_line(int argc, char *argv[], C_word *heap, C_word *stack, C_word *symbols);
C_fctexport void C_fcall C_toplevel_entry(C_char *name) C_regparm;
C_fctexport C_word C_fcall C_enable_interrupts(void) C_regparm;
C_fctexport C_word C_fcall C_disable_interrupts(void) C_regparm;
C_fctexport void C_fcall C_paranoid_check_for_interrupt(void) C_regparm;
C_fctexport void C_do_resize_stack(C_word stack);
C_fctexport void C_initialize_lf(C_word *lf, int count);
C_fctexport void *C_register_lf(C_word *lf, int count);
C_fctexport void *C_register_lf2(C_word *lf, int count, C_PTABLE_ENTRY *ptable);
C_fctexport void C_unregister_lf(void *handle);
C_fctexport C_word C_fcall C_restore_rest(C_word *ptr, int num) C_regparm;
C_fctexport C_word C_fcall C_restore_rest_vector(C_word *ptr, int num) C_regparm;
C_fctexport C_word C_fcall C_mutate_slot(C_word *slot, C_word val) C_regparm;
C_fctexport void C_fcall C_reclaim(void *trampoline, void *proc) C_regparm C_noret;
C_fctexport void C_save_and_reclaim(void *trampoline, void *proc, int n, ...) C_noret;
C_fctexport void C_fcall C_rereclaim2(C_uword size, int double_plus) C_regparm;
C_fctexport void C_unbound_variable(C_word sym);
C_fctexport C_word C_fcall C_retrieve2(C_word val, char *name) C_regparm;
C_fctexport int C_in_stackp(C_word x) C_regparm;
C_fctexport int C_fcall C_in_fromspacep(C_word x) C_regparm;
C_fctexport C_word C_fcall C_u_i_string_hash(C_word str, C_word rnd) C_regparm;
C_fctexport C_word C_fcall C_u_i_string_ci_hash(C_word str, C_word rnd) C_regparm;
C_fctexport C_word C_halt(C_word msg);
C_fctexport C_word C_message(C_word msg);
C_fctexport C_word C_fcall C_set_gc_report(C_word flag) C_regparm;
C_fctexport C_word C_fcall C_start_timer(void) C_regparm;
C_fctexport C_word C_exit_runtime(C_word code);
C_fctexport C_word C_fcall C_read_char(C_word port) C_regparm;
C_fctexport C_word C_fcall C_peek_char(C_word port) C_regparm;
C_fctexport int C_fcall C_check_fd_ready(int fd) C_regparm;
C_fctexport C_word C_fcall C_char_ready_p(C_word port) C_regparm;
C_fctexport C_word C_fcall C_fudge(C_word fudge_factor) C_regparm;
C_fctexport void C_fcall C_raise_interrupt(int reason) C_regparm;
C_fctexport C_word C_fcall C_establish_signal_handler(C_word signum, C_word reason) C_regparm;
C_fctexport C_word C_fcall C_copy_block(C_word from, C_word to) C_regparm;
C_fctexport C_word C_fcall C_evict_block(C_word from, C_word ptr) C_regparm;
C_fctexport void C_fcall C_gc_protect(C_word **addr, int n) C_regparm;
C_fctexport void C_fcall C_gc_unprotect(int n) C_regparm;
C_fctexport C_word C_dbg_hook(C_word x);

C_fctimport void C_ccall C_toplevel(C_word c, C_word self, C_word k) C_noret;
C_fctimport void C_ccall C_invalid_procedure(int c, C_word self, ...) C_noret;
C_fctexport void C_ccall C_stop_timer(C_word c, C_word closure, C_word k) C_noret;
C_fctexport void C_ccall C_open_file_port(C_word c, C_word closure, C_word k, C_word port, C_word channel, C_word mode) C_noret;
C_fctexport void C_ccall C_allocate_vector(C_word c, C_word closure, C_word k, C_word size, C_word type, C_word init, C_word align8) C_noret;
C_fctexport void C_ccall C_flonum_fraction(C_word c, C_word closure, C_word k, C_word n) C_noret;
C_fctexport void C_ccall C_flonum_rat(C_word c, C_word closure, C_word k, C_word n) C_noret;
C_fctexport void C_ccall C_quotient(C_word c, C_word closure, C_word k, C_word n1, C_word n2) C_noret;
C_fctexport void C_ccall C_fixnum_to_string(C_word c, C_word closure, C_word k, C_word num) C_noret;
C_fctexport void C_ccall C_make_structure(C_word c, C_word closure, C_word k, C_word type, ...) C_noret;
C_fctexport void C_ccall C_make_pointer(C_word c, C_word closure, C_word k) C_noret;
C_fctexport void C_ccall C_make_tagged_pointer(C_word c, C_word closure, C_word k, C_word tag) C_noret;
C_fctexport void C_ccall C_return_to_host(C_word c, C_word closure, C_word k) C_noret;
C_fctexport void C_ccall C_context_switch(C_word c, C_word closure, C_word k, C_word state) C_noret;
C_fctexport void C_ccall C_peek_signed_integer(C_word c, C_word closure, C_word k, C_word v, C_word index) C_noret;
C_fctexport void C_ccall C_peek_unsigned_integer(C_word c, C_word closure, C_word k, C_word v, C_word index) C_noret;
C_fctexport void C_ccall C_decode_seconds(C_word c, C_word closure, C_word k, C_word secs, C_word mode) C_noret;
C_fctexport void C_ccall C_become(C_word c, C_word closure, C_word k, C_word table) C_noret;
C_fctexport void C_ccall C_locative_ref(C_word c, C_word closure, C_word k, C_word loc) C_noret;
C_fctexport void C_ccall C_copy_closure(C_word c, C_word closure, C_word k, C_word proc) C_noret;
C_fctexport time_t C_fcall C_seconds(C_long *ms) C_regparm;
C_fctexport C_word C_fcall C_i_locative_set(C_word loc, C_word x) C_regparm;
C_fctexport C_word C_fcall C_i_locative_to_object(C_word loc) C_regparm;
C_fctexport C_word C_fcall C_a_i_make_locative(C_word **a, int c, C_word type, C_word object, C_word index, C_word weak) C_regparm;
C_fctexport C_word C_fcall C_i_bit_setp(C_word n, C_word i) C_regparm;
C_fctexport C_word C_fcall C_i_getprop(C_word sym, C_word prop, C_word def) C_regparm;
C_fctexport C_word C_fcall C_putprop(C_word **a, C_word sym, C_word prop, C_word val) C_regparm;
C_fctexport C_word C_fcall C_i_get_keyword(C_word key, C_word args, C_word def) C_regparm;
C_fctexport double C_fcall C_milliseconds(void) C_regparm;
C_fctexport double C_fcall C_cpu_milliseconds(void) C_regparm;
C_fctexport C_word C_fcall C_a_i_cpu_time(C_word **a, int c, C_word buf) C_regparm;
C_fctexport C_word C_fcall C_a_i_exact_to_inexact(C_word **a, int c, C_word n) C_regparm;
C_fctexport C_word C_fcall C_i_file_exists_p(C_word name, C_word file, C_word dir) C_regparm;

C_fctexport C_char *C_lookup_procedure_id(void *ptr);
C_fctexport void *C_lookup_procedure_ptr(C_char *id);
C_fctexport C_char *C_executable_path();

#ifdef C_SIXTY_FOUR
C_fctexport void C_ccall C_peek_signed_integer_32(C_word c, C_word closure, C_word k, C_word v, C_word index) C_noret;
C_fctexport void C_ccall C_peek_unsigned_integer_32(C_word c, C_word closure, C_word k, C_word v, C_word index) C_noret;
#else
# define C_peek_signed_integer_32    C_peek_signed_integer
# define C_peek_unsigned_integer_32  C_peek_unsigned_integer
#endif

C_fctexport C_word C_fcall C_decode_literal(C_word **ptr, C_char *str) C_regparm;
C_fctexport C_word C_fcall C_i_pending_interrupt(C_word dummy) C_regparm;

/* defined in eval.scm: */
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

C_fctexport void C_default_5fstub_toplevel(C_word c,C_word d,C_word k) C_noret;

C_END_C_DECLS

#endif /* RUNTIME_PROTOTYPES_H */
