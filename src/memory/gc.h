#ifndef RUNTIME_GC_H
#define RUNTIME_GC_H

#include <runtime/definitions.h>
#include <runtime/types.h>
#include "heap.h"
#include "finalizers.h"

#define WEAK_TABLE_SIZE                997

#ifdef C_STRESS_TEST
# define C_STRESS_FAILURE          3
# define C_stress                  (rand() % C_STRESS_FAILURE)
#else
# define C_stress                  1
#endif

#define C_stack_overflow_check    C_stack_check1(C_stack_overflow())

#if defined (__llvm__) && defined (__GNUC__)
# if defined (__i386__)
#  define C_stack_pointer ({C_word *sp; __asm__ __volatile__ ("movl %%esp,%0" : "=r" (sp) :); sp; })
# elif defined (__x86_64__)
#  define C_stack_pointer ({C_word *sp; __asm__ __volatile__ ("movq %%rsp,%0" : "=r" (sp) :); sp; })
# else
#  define C_stack_pointer ((C_word *)C_alloca(1))
# endif
#else
# define C_stack_pointer ((C_word *)C_alloca(0))
#endif

#if C_STACK_GROWS_DOWNWARD
# define C_demand(n)              (C_stress && ((C_word)(C_stack_pointer - C_stack_limit) > (n)))
# define C_stack_probe(p)         (C_stress && ((C_word *)(p) >= C_stack_limit))

# define C_stack_check1(err)      if(!C_disable_overflow_check) {       \
        do { C_byte *_sp = (C_byte*)(C_stack_pointer); \
             if(_sp < (C_byte *)C_stack_limit && \
                ((C_byte *)C_stack_limit - _sp) > C_STACK_RESERVE) \
                 err; }                          \
        while(0); }

#else
# define C_demand(n)              (C_stress && ((C_word)(C_stack_limit - C_stack_pointer) > (n)))
# define C_stack_probe(p)         (C_stress && ((C_word *)(p) < C_stack_limit))

# define C_stack_check1(err)      if(!C_disable_overflow_check) {       \
        do { C_byte *_sp = (C_byte*)(C_stack_pointer); \
             if(_sp > (C_byte *)C_stack_limit && \
                (_sp - (C_byte *)C_stack_limit) > C_STACK_RESERVE) \
                 err; }                          \
        while(0); }

#endif

extern C_TLS C_word *stack_bottom;
extern C_TLS C_word *saved_stack_limit;

C_varextern C_TLS int C_disable_overflow_check;

C_varextern C_TLS C_word
    *C_temporary_stack,
    *C_temporary_stack_bottom,
    *C_temporary_stack_limit,
    *C_stack_limit;

C_fctexport void C_check_nursery_minimum(C_word size);

C_fctexport void C_do_resize_stack(C_word stack);
C_fctexport int C_in_stackp(C_word x) C_regparm;

extern C_TLS unsigned int mutation_count;
extern C_TLS unsigned int tracked_mutation_count;

extern C_TLS C_byte
    *heapspace1,
    *heapspace2,
    *fromspace_start,
    *tospace_start,
    *tospace_top,
    *tospace_limit,
    *new_tospace_start,
    *new_tospace_top,
    *new_tospace_limit,
    *heap_scan_top;

extern C_TLS C_word
    **mutation_stack_bottom,
    **mutation_stack_limit,
    **mutation_stack_top;

C_varextern C_TLS int
    C_enable_gcweak;

C_TLS void (*C_gc_trace_hook)(C_word *var, int mode);

extern C_TLS int
    gc_bell,
    gc_report_flag,
    gc_count_1,
    gc_count_1_total,
    gc_count_2;

extern C_TLS C_word
    callback_continuation_stack_symbol,
    *forwarding_table;

extern C_TLS C_GC_ROOT *gc_root_list;

void handle_interrupt(void *trampoline, void *proc) C_noret;

C_varextern C_TLS void (*C_pre_gc_hook)(int mode);
C_varextern C_TLS void (*C_post_gc_hook)(int mode, C_long ms);
C_varextern C_TLS void (*C_panic_hook)(C_char *msg);

typedef struct weak_table_entry_struct
{
    C_word item,                /* item weakly held (symbol) */
           container;           /* object holding reference to symbol, lowest 3 bits are */
} WEAK_TABLE_ENTRY;             /*   also used as a counter, saturated at 2 or more */

extern C_TLS WEAK_TABLE_ENTRY *weak_item_table;

typedef struct lf_list_struct
{
    C_word *lf;
    int count;
    struct lf_list_struct *next, *prev;
    C_PTABLE_ENTRY *ptable;
    void *module_handle;
    char *module_name;
} LF_LIST;

extern C_TLS LF_LIST *lf_list;

extern C_TLS unsigned int stack_size;

extern C_TLS C_word
    **collectibles,
    **collectibles_top,
    **collectibles_limit;

extern C_TLS double gc_ms,
       timer_accumulated_gc_ms;

C_fctexport void C_ccall C_gc(C_word c, C_word closure, C_word k, ...) C_noret;

C_fctexport void C_initialize_lf(C_word *lf, int count);
C_fctexport void *C_register_lf(C_word *lf, int count);
C_fctexport void *C_register_lf2(C_word *lf, int count, C_PTABLE_ENTRY *ptable);
C_fctexport void C_unregister_lf(void *handle);

C_fctexport C_word C_fcall C_mutate_slot(C_word *slot, C_word val) C_regparm;
C_fctexport void C_fcall C_reclaim(void *trampoline, void *proc) C_regparm C_noret;
C_fctexport void C_save_and_reclaim(void *trampoline, void *proc, int n, ...) C_noret;
C_fctexport void C_fcall C_rereclaim2(C_uword size, int double_plus) C_regparm;
C_fctexport int C_fcall C_in_fromspacep(C_word x) C_regparm;
C_fctexport C_word C_fcall C_set_gc_report(C_word flag) C_regparm;
C_fctexport void C_fcall C_gc_protect(C_word **addr, int n) C_regparm;
C_fctexport void C_fcall C_gc_unprotect(int n) C_regparm;
C_fctexport void C_ccall C_allocate_vector(C_word c, C_word closure, C_word k, C_word size, C_word type, C_word init, C_word align8) C_noret;

C_fctexport C_char *C_lookup_procedure_id(void *ptr);
C_fctexport void *C_lookup_procedure_ptr(C_char *id);
C_fctexport void C_ccall C_become(C_word c, C_word closure, C_word k, C_word table) C_noret;

C_inline C_word C_permanentp(C_word x)
{
    return C_mk_bool(!C_immediatep(x) && !C_in_stackp(x) && !C_in_heapp(x));
}

// This is needed for bootstrapping
#define C_mutate2 C_mutate

C_inline C_word C_mutate(C_word *slot, C_word val)
{
    if(!C_immediatep(val)) return C_mutate_slot(slot, val);
    else return *slot = val;
}

#endif /* RUNTIME_GC_H */
