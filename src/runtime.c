/* runtime.c - Runtime code for compiler generated executables
   ;
   ; Copyright (c) 2008-2014, The CHICKEN Team
   ; Copyright (c) 2000-2007, Felix L. Winkelmann
   ; All rights reserved.
   ;
   ; Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following
   ; conditions are met:
   ;
   ;   Redistributions of source code must retain the above copyright notice, this list of conditions and the following
   ;     disclaimer.
   ;   Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following
   ;     disclaimer in the documentation and/or other materials provided with the distribution.
   ;   Neither the name of the author nor the names of its contributors may be used to endorse or promote
   ;     products derived from this software without specific prior written permission.
   ;
   ; THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS
   ; OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
   ; AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR
   ; CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   ; CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
   ; SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
   ; THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
   ; OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
   ; POSSIBILITY OF SUCH DAMAGE.
 */


#include "chicken.h"
#include "runtime/errors.h"
#include "runtime/symbol_table.h"
#include "runtime/fixnum.h"
#include "runtime/arithmetic.h"

#include <assert.h>
#include <errno.h>
#include <signal.h>
#ifdef HAVE_SYS_STAT_H
#include <sys/stat.h>
#endif

#ifdef HAVE_SYSEXITS_H
# include <sysexits.h>
#endif

#if !defined(PIC)
# define NO_DLOAD2
#endif

#ifndef NO_DLOAD2
# ifdef HAVE_DLFCN_H
#  include <dlfcn.h>
# endif

# ifdef HAVE_DL_H
#  include <dl.h>
# endif
#endif

#ifndef EX_SOFTWARE
# define EX_SOFTWARE  70
#endif

#ifndef EOVERFLOW
# define EOVERFLOW  0
#endif

/* TODO: Include sys/select.h? Windows doesn't seem to have it... */
#ifndef NO_POSIX_POLL
#  include <poll.h>
#endif

#if !defined(C_NONUNIX)

# include <sys/time.h>
# include <sys/resource.h>
# include <sys/wait.h>

#else

#endif

#ifndef RTLD_GLOBAL
# define RTLD_GLOBAL                   0
#endif

#ifndef RTLD_NOW
# define RTLD_NOW                      0
#endif

#ifndef RTLD_LOCAL
# define RTLD_LOCAL                    0
#endif

#ifndef RTLD_LAZY
# define RTLD_LAZY                     0
#endif

#if defined(_WIN32)
/* Include winsock2 to get select() for check_fd_ready() */
# include <winsock2.h>
# include <windows.h>
#endif

#ifdef HAVE_CONFIG_H
# ifdef PACKAGE
#  undef PACKAGE
# endif
# ifdef VERSION
#  undef VERSION
# endif
# include <chicken-config.h>

# ifndef HAVE_ALLOCA
#  error this package requires "alloca()"
# endif
#endif

/* Parameters: */

#define RELAX_MULTIVAL_CHECK

#define MAX_HASH_PREFIX                64

#define TEMPORARY_STACK_SIZE           2048

/* only for relevant for Windows: */

#define MAXIMAL_NUMBER_OF_COMMAND_LINE_ARGUMENTS 256

/* these could be shorter in unsafe mode: */
#define C_check_int(x, f, n, w)     if(((x) & C_FIXNUM_BIT) != 0) n = C_unfix(x); \
    else if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG) \
        barf(C_BAD_ARGUMENT_TYPE_NO_NUMBER_ERROR, w, x); \
    else { double _m; \
           f = C_flonum_magnitude(x); \
           if(modf(f, &_m) != 0.0 || f < C_WORD_MIN || f > C_WORD_MAX) \
               barf(C_BAD_ARGUMENT_TYPE_NO_INTEGER_ERROR, w, x); \
           else n = (C_word)f; \
    }

#define C_pte(name)                  pt[ i ].id = #name; pt[ i++ ].ptr = (void *)name;

#ifndef SIGBUS
# define SIGBUS                      0
#endif


/* Type definitions: */

typedef void (*TOPLEVEL)(C_word c, C_word self, C_word k) C_noret;

/* Variables: */

C_TLS C_word
*C_temporary_stack,
*C_temporary_stack_bottom,
*C_temporary_stack_limit,
*C_stack_limit;
C_TLS C_long
    C_timer_interrupt_counter,
    C_initial_timer_interrupt_period;
C_TLS void *C_restart_address;
C_TLS int C_entry_point_status;
C_TLS int (*C_gc_mutation_hook)(C_word *slot, C_word val);
C_TLS void (*C_panic_hook)(C_char *msg) = NULL;
C_TLS void (*C_pre_gc_hook)(int mode) = NULL;
C_TLS void (*C_post_gc_hook)(int mode, C_long ms) = NULL;
C_TLS void (C_fcall *C_restart_trampoline)(void *proc) C_regparm C_noret;

C_TLS int
    C_abort_on_thread_exceptions,
    C_enable_repl,
    C_interrupts_enabled,
    C_disable_overflow_check,
    C_main_argc;
C_TLS time_t C_startup_time_seconds;
C_TLS char
**C_main_argv,
*C_dlerror;

static C_TLS C_char
    buffer[ STRING_BUFFER_SIZE ],
*save_string;
static C_TLS C_word
*saved_stack_limit,
*stack_bottom;
static C_TLS int
    forwarding_table_size,
    return_to_host,
    fake_tty_flag,
    stack_size_changed,
    dlopen_flags,
    chicken_is_running,
    chicken_ran_once,
    pass_serious_signals = 1,
    callback_continuation_level;
static volatile C_TLS int serious_signal_occurred = 0;
static C_TLS unsigned int
    mutation_count,
    tracked_mutation_count;
static C_TLS int chicken_is_initialized;
static C_TLS double
    timer_start_ms,
    interrupt_time,
    last_interrupt_latency;
static C_TLS int signal_mapping_table[ NSIG ];
static C_TLS int
    callback_returned_flag;


/* Prototypes: */

static void parse_argv(C_char *cmds);
static void global_signal_handler(int signum);
static C_word arg_val(C_char *arg);
static void C_fcall initial_trampoline(void *proc) C_regparm C_noret;
static C_ccall void termination_continuation(C_word c, C_word self, C_word result) C_noret;
static C_ccall void values_continuation(C_word c, C_word closure, C_word dummy, ...) C_noret;

static C_ccall void call_cc_wrapper(C_word c, C_word closure, C_word k, C_word result) C_noret;
static C_ccall void call_cc_values_wrapper(C_word c, C_word closure, C_word k, ...) C_noret;
static void allocate_vector_2(void *dummy) C_noret;
static void make_structure_2(void *dummy) C_noret;
static void callback_trampoline(void *dummy) C_noret;
static C_ccall void callback_return_continuation(C_word c, C_word self, C_word r) C_noret;
static void become_2(void *dummy) C_noret;
static void copy_closure_2(void *dummy) C_noret;
static void C_fcall sigsegv_trampoline(void *) C_regparm;
static void C_fcall sigill_trampoline(void *) C_regparm;
static void C_fcall sigfpe_trampoline(void *) C_regparm;
static void C_fcall sigbus_trampoline(void *) C_regparm;

static C_PTABLE_ENTRY *create_initial_ptable();

#if !defined(NO_DLOAD2) && (defined(HAVE_DLFCN_H) || defined(HAVE_DL_H) || (defined(HAVE_LOADLIBRARY) && defined(HAVE_GETPROCADDRESS)))
static void dload_2(void *dummy) C_noret;
#endif


/* Startup code: */

int CHICKEN_main(int argc, char *argv[], void *toplevel)
{
    C_word h, s, n;

    pass_serious_signals = 0;
    CHICKEN_parse_command_line(argc, argv, &h, &s, &n);

    if(!CHICKEN_initialize(h, s, n, toplevel))
        panic(C_text("cannot initialize - out of memory"));

    CHICKEN_run(NULL);
    return 0;
}


/* Custom argv parser for Windoze: */

void parse_argv(C_char *cmds)
{
    C_char *ptr = cmds,
    *bptr0, *bptr, *aptr;
    int n = 0;

    C_main_argv = (C_char **)malloc(MAXIMAL_NUMBER_OF_COMMAND_LINE_ARGUMENTS * sizeof(C_char *));

    if(C_main_argv == NULL)
        panic(C_text("cannot allocate argument-list buffer"));

    C_main_argc = 0;

    for(;; ) {
        while(isspace((int)(*ptr))) ++ptr;

        if(*ptr == '\0') break;

        for(bptr0 = bptr = buffer; !isspace((int)(*ptr)) && *ptr != '\0'; *(bptr++) = *(ptr++))
            ++n;

        *bptr = '\0';

        aptr = (C_char*) malloc(sizeof(C_char) * (n + 1));
        if (!aptr)
            panic(C_text("cannot allocate argument buffer"));

        C_strlcpy(aptr, bptr0, sizeof(C_char) * (n + 1));

        C_main_argv[ C_main_argc++ ] = aptr;
    }
}


/* Initialize runtime system: */

int CHICKEN_initialize(int heap, int stack, int symbols, void *toplevel)
{
    int i;
#ifdef HAVE_SIGACTION
    struct sigaction sa;
#endif

    /*FIXME Should have C_tzset in chicken.h? */
#ifdef C_NONUNIX
    C_startup_time_seconds = (time_t)0;
# if defined(__MINGW32__)
    /* Make sure _tzname, _timezone, and _daylight are set */
    _tzset();
# endif
#else
    struct timeval tv;
    C_gettimeofday(&tv, NULL);
    C_startup_time_seconds = tv.tv_sec;
    /* Make sure tzname, timezone, and daylight are set */
    tzset();
#endif

    if(chicken_is_initialized) return 1;
    else chicken_is_initialized = 1;

    if(debug_mode)
        C_dbg(C_text("debug"), C_text("application startup...\n"));

    C_panic_hook = usual_panic;
    symbol_table_list = NULL;

    symbol_table = C_new_symbol_table(".", symbols ? symbols : DEFAULT_SYMBOL_TABLE_SIZE);

    if(symbol_table == NULL)
        return 0;

    page_size = 0;
    stack_size = stack ? stack : DEFAULT_STACK_SIZE;
    C_set_or_change_heap_size(heap ? heap : DEFAULT_HEAP_SIZE, 0);

    /* Allocate temporary stack: */
    if((C_temporary_stack_limit = (C_word *)C_malloc(TEMPORARY_STACK_SIZE * sizeof(C_word))) == NULL)
        return 0;

    C_temporary_stack_bottom = C_temporary_stack_limit + TEMPORARY_STACK_SIZE;
    C_temporary_stack = C_temporary_stack_bottom;

    /* Allocate mutation stack: */
    mutation_stack_bottom = (C_word **)C_malloc(DEFAULT_MUTATION_STACK_SIZE * sizeof(C_word *));

    if(mutation_stack_bottom == NULL) return 0;

    mutation_stack_top = mutation_stack_bottom;
    mutation_stack_limit = mutation_stack_bottom + DEFAULT_MUTATION_STACK_SIZE;
    C_gc_mutation_hook = NULL;
    C_gc_trace_hook = NULL;

    /* Allocate weak item table: */
    if(C_enable_gcweak) {
        weak_item_table = (WEAK_TABLE_ENTRY *)C_calloc(WEAK_TABLE_SIZE, sizeof(WEAK_TABLE_ENTRY));

        if(weak_item_table == NULL)
            return 0;
    }

    /* Initialize finalizer lists: */
    finalizer_list = NULL;
    finalizer_free_list = NULL;
    pending_finalizer_indices =
        (FINALIZER_NODE **)C_malloc(C_max_pending_finalizers * sizeof(FINALIZER_NODE *));

    if(pending_finalizer_indices == NULL) return 0;

    /* Initialize forwarding table: */
    forwarding_table =
        (C_word *)C_malloc((DEFAULT_FORWARDING_TABLE_SIZE + 1) * 2 * sizeof(C_word));

    if(forwarding_table == NULL) return 0;

    *forwarding_table = 0;
    forwarding_table_size = DEFAULT_FORWARDING_TABLE_SIZE;

    /* Initialize locative table: */
    locative_table = (C_word *)C_malloc(DEFAULT_LOCATIVE_TABLE_SIZE * sizeof(C_word));

    if(locative_table == NULL) return 0;

    locative_table_size = DEFAULT_LOCATIVE_TABLE_SIZE;
    locative_table_count = 0;

    /* Setup collectibles: */
    collectibles = (C_word **)C_malloc(sizeof(C_word *) * DEFAULT_COLLECTIBLES_SIZE);

    if(collectibles == NULL) return 0;

    collectibles_top = collectibles;
    collectibles_limit = collectibles + DEFAULT_COLLECTIBLES_SIZE;
    gc_root_list = NULL;

    /* Initialize global variables: */
    if(C_heap_growth <= 0) C_heap_growth = DEFAULT_HEAP_GROWTH;

    if(C_heap_shrinkage <= 0) C_heap_shrinkage = DEFAULT_HEAP_SHRINKAGE;

    if(C_maximal_heap_size <= 0) C_maximal_heap_size = DEFAULT_MAXIMAL_HEAP_SIZE;

#if !defined(NO_DLOAD2) && defined(HAVE_DLFCN_H)
    dlopen_flags = RTLD_LAZY | RTLD_GLOBAL;
#else
    dlopen_flags = 0;
#endif

    /* setup signal handlers */
    if(!pass_serious_signals) {
#ifdef HAVE_SIGACTION
        sa.sa_flags = 0;
        sigfillset(&sa.sa_mask); /* See note in C_establish_signal_handler() */
        sa.sa_handler = global_signal_handler;
        C_sigaction(SIGBUS, &sa, NULL);
        C_sigaction(SIGFPE, &sa, NULL);
        C_sigaction(SIGILL, &sa, NULL);
        C_sigaction(SIGSEGV, &sa, NULL);
#else
# ifndef _MSC_VER
        C_signal(SIGBUS, global_signal_handler);
# endif
        C_signal(SIGILL, global_signal_handler);
        C_signal(SIGFPE, global_signal_handler);
        C_signal(SIGSEGV, global_signal_handler);
#endif
    }

    tracked_mutation_count = mutation_count = gc_count_1 = gc_count_1_total = gc_count_2 = 0;
    lf_list = NULL;
    C_register_lf2(NULL, 0, create_initial_ptable());
    C_restart_address = toplevel;
    C_restart_trampoline = initial_trampoline;
    trace_buffer = NULL;
    C_clear_trace_buffer();
    chicken_is_running = chicken_ran_once = 0;
    pending_interrupts_count = 0;
    handling_interrupts = 0;
    last_interrupt_latency = 0;
    C_interrupts_enabled = 1;
    C_initial_timer_interrupt_period = INITIAL_TIMER_INTERRUPT_PERIOD;
    C_timer_interrupt_counter = INITIAL_TIMER_INTERRUPT_PERIOD;
    memset(signal_mapping_table, 0, sizeof(int) * NSIG);
    initialize_symbol_table();
    C_dlerror = "cannot load compiled code dynamically - this is a statically linked executable";
    error_location = C_SCHEME_FALSE;
    C_pre_gc_hook = NULL;
    C_post_gc_hook = NULL;
    live_finalizer_count = 0;
    allocated_finalizer_count = 0;
    current_module_name = NULL;
    current_module_handle = NULL;
    callback_continuation_level = 0;
    gc_ms = 0;
    (void)C_randomize(C_fix(time(NULL)));
    return 1;
}


static C_PTABLE_ENTRY *create_initial_ptable()
{
    /* IMPORTANT: hardcoded table size -
       this must match the number of C_pte calls + 1 (NULL terminator)! */
    C_PTABLE_ENTRY *pt = (C_PTABLE_ENTRY *)C_malloc(sizeof(C_PTABLE_ENTRY) * 56);
    int i = 0;

    if(pt == NULL)
        panic(C_text("out of memory - cannot create initial ptable"));

    C_pte(termination_continuation);
    C_pte(callback_return_continuation);
    C_pte(values_continuation);
    C_pte(call_cc_values_wrapper);
    C_pte(call_cc_wrapper);
    C_pte(C_gc);
    C_pte(C_allocate_vector);
    C_pte(C_make_structure);
    C_pte(C_ensure_heap_reserve);
    C_pte(C_return_to_host);
    C_pte(C_get_symbol_table_info);
    C_pte(C_get_memory_info);
    C_pte(C_decode_seconds);
    C_pte(C_stop_timer);
    C_pte(C_dload);
    C_pte(C_set_dlopen_flags);
    C_pte(C_become);
    C_pte(C_apply_values);
    C_pte(C_times);
    C_pte(C_minus);
    C_pte(C_plus);
    C_pte(C_divide);
    C_pte(C_nequalp);
    C_pte(C_greaterp);
    /* IMPORTANT: have you read the comments at the start and the end of this function? */
    C_pte(C_lessp);
    C_pte(C_greater_or_equal_p);
    C_pte(C_less_or_equal_p);
    C_pte(C_quotient);
    C_pte(C_flonum_fraction);
    C_pte(C_flonum_rat);
    C_pte(C_expt);
    C_pte(C_number_to_string);
    C_pte(C_make_symbol);
    C_pte(C_string_to_symbol);
    C_pte(C_apply);
    C_pte(C_call_cc);
    C_pte(C_values);
    C_pte(C_call_with_values);
    C_pte(C_continuation_graft);
    C_pte(C_open_file_port);
    C_pte(C_software_type);
    C_pte(C_machine_type);
    C_pte(C_machine_byte_order);
    C_pte(C_software_version);
    C_pte(C_build_platform);
    C_pte(C_make_pointer);
    C_pte(C_make_tagged_pointer);
    C_pte(C_peek_signed_integer);
    C_pte(C_peek_unsigned_integer);
    C_pte(C_context_switch);
    C_pte(C_register_finalizer);
    C_pte(C_locative_ref);
    C_pte(C_copy_closure);
    C_pte(C_dump_heap_state);
    C_pte(C_filter_heap_objects);

    /* IMPORTANT: did you remember the hardcoded pte table size? */
    pt[ i ].id = NULL;
    return pt;
}


void *CHICKEN_new_gc_root_2(int finalizable)
{
    C_GC_ROOT *r = (C_GC_ROOT *)C_malloc(sizeof(C_GC_ROOT));

    if(r == NULL)
        panic(C_text("out of memory - cannot allocate GC root"));

    r->value = C_SCHEME_UNDEFINED;
    r->next = gc_root_list;
    r->prev = NULL;
    r->finalizable = finalizable;

    if(gc_root_list != NULL) gc_root_list->prev = r;

    gc_root_list = r;
    return (void *)r;
}


void *CHICKEN_new_gc_root()
{
    return CHICKEN_new_gc_root_2(0);
}


void *CHICKEN_new_finalizable_gc_root()
{
    return CHICKEN_new_gc_root_2(1);
}


void CHICKEN_delete_gc_root(void *root)
{
    C_GC_ROOT *r = (C_GC_ROOT *)root;

    if(r->prev == NULL) gc_root_list = r->next;
    else r->prev->next = r->next;

    if(r->next != NULL) r->next->prev = r->prev;

    C_free(root);
}


void *CHICKEN_global_lookup(char *name)
{
    int
        len = C_strlen(name),
        key = hash_string(len, name, symbol_table->size, symbol_table->rand, 0);
    C_word s;
    void *root = CHICKEN_new_gc_root();

    if(C_truep(s = lookup(key, len, name, symbol_table))) {
        if(C_block_item(s, 0) != C_SCHEME_UNBOUND) {
            CHICKEN_gc_root_set(root, s);
            return root;
        }
    }

    return NULL;
}


int CHICKEN_is_running()
{
    return chicken_is_running;
}


void CHICKEN_interrupt()
{
    C_timer_interrupt_counter = 0;
}


C_regparm void C_fcall
sigsegv_trampoline(void *dummy)
{
    barf(C_MEMORY_VIOLATION_ERROR, NULL);
}


C_regparm void C_fcall
sigbus_trampoline(void *dummy)
{
    barf(C_BUS_ERROR, NULL);
}


C_regparm void C_fcall
sigfpe_trampoline(void *dummy)
{
    barf(C_FLOATING_POINT_EXCEPTION_ERROR, NULL);
}


C_regparm void C_fcall
sigill_trampoline(void *dummy)
{
    barf(C_ILLEGAL_INSTRUCTION_ERROR, NULL);
}


/* This is called from POSIX signals: */

void global_signal_handler(int signum)
{
#if defined(HAVE_SIGPROCMASK)
    if(signum == SIGSEGV || signum == SIGFPE || signum == SIGILL || signum == SIGBUS) {
        sigset_t sset;

        if(serious_signal_occurred || !chicken_is_running) {
            switch(signum) {
            case SIGSEGV: panic(C_text("unrecoverable segmentation violation"));
            case SIGFPE: panic(C_text("unrecoverable floating-point exception"));
            case SIGILL: panic(C_text("unrecoverable illegal instruction error"));
            case SIGBUS: panic(C_text("unrecoverable bus error"));
            default: panic(C_text("unrecoverable serious condition"));
            }
        }
        else serious_signal_occurred = 1;

        /* unblock signal to avoid nested invocation of the handler */
        sigemptyset(&sset);
        sigaddset(&sset, signum);
        C_sigprocmask(SIG_UNBLOCK, &sset, NULL);

        switch(signum) {
        case SIGSEGV: C_reclaim(sigsegv_trampoline, NULL);
        case SIGFPE: C_reclaim(sigfpe_trampoline, NULL);
        case SIGILL: C_reclaim(sigill_trampoline, NULL);
        case SIGBUS: C_reclaim(sigbus_trampoline, NULL);
        default: panic(C_text("invalid serious signal"));
        }
    }
#endif

    C_raise_interrupt(signal_mapping_table[ signum ]);
#ifndef HAVE_SIGACTION
    /* not necessarily needed, but older UNIXen may not leave the handler installed: */
    C_signal(signum, global_signal_handler);
#endif
}


/* Modify stack-size at runtime: */

void C_do_resize_stack(C_word stack)
{
    C_uword old = stack_size,
            diff = stack - old;

    if(diff != 0 && !stack_size_changed) {
        if(debug_mode)
            C_dbg(C_text("debug"), C_text("stack resized to %d bytes\n"), (int)stack);

        stack_size = stack;

#if C_STACK_GROWS_DOWNWARD
        C_stack_limit = (C_word *)((C_byte *)C_stack_limit - diff);
#else
        C_stack_limit = (C_word *)((C_byte *)C_stack_limit + diff);
#endif
    }
}


/* Check whether nursery is sufficiently big: */

void C_check_nursery_minimum(C_word words)
{
    if(words >= C_bytestowords(stack_size))
        panic(C_text("nursery is too small - try higher setting using the `-:s' option"));
}

C_word C_resize_pending_finalizers(C_word size) {
    int sz = C_num_to_int(size);

    FINALIZER_NODE **newmem =
        (FINALIZER_NODE **)C_realloc(pending_finalizer_indices, sz * sizeof(FINALIZER_NODE *));

    if (newmem == NULL)
        return C_SCHEME_FALSE;

    pending_finalizer_indices = newmem;
    C_max_pending_finalizers = sz;
    return C_SCHEME_TRUE;
}


/* Parse runtime options from command-line: */

void CHICKEN_parse_command_line(int argc, char *argv[], C_word *heap, C_word *stack, C_word *symbols)
{
    int i;
    char *ptr;
    C_word x;

    C_main_argc = argc;
    C_main_argv = argv;
    *heap = DEFAULT_HEAP_SIZE;
    *stack = DEFAULT_STACK_SIZE;
    *symbols = DEFAULT_SYMBOL_TABLE_SIZE;

    for(i = 1; i < C_main_argc; ++i)
        if(!strncmp(C_main_argv[ i ], C_text("-:"), 2)) {
            for(ptr = &C_main_argv[ i ][ 2 ]; *ptr != '\0'; ) {
                switch(*(ptr++)) {
                case '?':
                    C_dbg("Runtime options", "\n\n"
                          " -:?              display this text\n"
                          " -:c              always treat stdin as console\n"
                          " -:d              enable debug output\n"
                          " -:D              enable more debug output\n"
                          " -:g              show GC information\n"
                          " -:o              disable stack overflow checks\n"
                          " -:hiSIZE         set initial heap size\n"
                          " -:hmSIZE         set maximal heap size\n"
                          " -:hgPERCENTAGE   set heap growth percentage\n"
                          " -:hsPERCENTAGE   set heap shrink percentage\n"
                          " -:hSIZE          set fixed heap size\n"
                          " -:r              write trace output to stderr\n"
                          " -:sSIZE          set nursery (stack) size\n"
                          " -:tSIZE          set symbol-table size\n"
                          " -:fSIZE          set maximal number of pending finalizers\n"
                          " -:w              enable garbage collection of unused symbols\n"
                          " -:x              deliver uncaught exceptions of other threads to primordial one\n"
                          " -:b              enter REPL on error\n"
                          " -:B              sound bell on major GC\n"
                          " -:aSIZE          set trace-buffer/call-chain size\n"
                          " -:H              dump heap state on exit\n"
                          " -:S              do not handle segfaults or other serious conditions\n"
                          "\n  SIZE may have a `k' (`K'), `m' (`M') or `g' (`G') suffix, meaning size\n"
                          "  times 1024, 1048576, and 1073741824, respectively.\n\n");
                    exit(0);

                case 'h':
                    switch(*ptr) {
                    case 'i':
                        *heap = arg_val(ptr + 1);
                        heap_size_changed = 1;
                        goto next;
                    case 'g':
                        C_heap_growth = arg_val(ptr + 1);
                        goto next;
                    case 'm':
                        C_maximal_heap_size = arg_val(ptr + 1);
                        goto next;
                    case 's':
                        C_heap_shrinkage = arg_val(ptr + 1);
                        goto next;
                    default:
                        *heap = arg_val(ptr);
                        heap_size_changed = 1;
                        C_heap_size_is_fixed = 1;
                        goto next;
                    }

                case 'o':
                    C_disable_overflow_check = 1;
                    break;

                case 'B':
                    gc_bell = 1;
                    break;

                case 'H':
                    dump_heap_on_exit = 1;
                    break;

                case 'S':
                    pass_serious_signals = 1;
                    break;

                case 's':
                    *stack = arg_val(ptr);
                    stack_size_changed = 1;
                    goto next;

                case 'f':
                    C_max_pending_finalizers = arg_val(ptr);
                    goto next;

                case 'a':
                    C_trace_buffer_size = arg_val(ptr);
                    goto next;

                case 't':
                    *symbols = arg_val(ptr);
                    goto next;

                case 'c':
                    fake_tty_flag = 1;
                    break;

                case 'd':
                    debug_mode = 1;
                    break;

                case 'D':
                    debug_mode = 2;
                    break;

                case 'g':
                    gc_report_flag = 2;
                    break;

                case 'w':
                    C_enable_gcweak = 1;
                    break;

                case 'r':
                    show_trace = 1;
                    break;

                case 'x':
                    C_abort_on_thread_exceptions = 1;
                    break;

                case 'b':
                    C_enable_repl = 1;
                    break;

                default: panic(C_text("illegal runtime option"));
                }
            }

next:;
        }
}


C_word arg_val(C_char *arg)
{
    int len;
    C_char *end;
    C_long val, mul = 1;

    if (arg == NULL) panic(C_text("illegal runtime-option argument"));

    len = C_strlen(arg);

    if(len < 1) panic(C_text("illegal runtime-option argument"));

    switch(arg[ len - 1 ]) {
    case 'k':
    case 'K': mul = 1024; break;

    case 'm':
    case 'M': mul = 1024 * 1024; break;

    case 'g':
    case 'G': mul = 1024 * 1024 * 1024; break;

    default: mul = 1;
    }

    val = C_strtow(arg, &end, 10);

    if((mul != 1 ? end[ 1 ] != '\0' : end[ 0 ] != '\0'))
        panic(C_text("invalid runtime-option argument suffix"));

    return val * mul;
}


/* Run embedded code with arguments: */

C_word CHICKEN_run(void *toplevel)
{
    if(!chicken_is_initialized && !CHICKEN_initialize(0, 0, 0, toplevel))
        panic(C_text("could not initialize"));

    if(chicken_is_running)
        panic(C_text("re-invocation of Scheme world while process is already running"));

    chicken_is_running = chicken_ran_once = 1;
    return_to_host = 0;

#if C_STACK_GROWS_DOWNWARD
    C_stack_limit = (C_word *)((C_byte *)C_stack_pointer - stack_size);
#else
    C_stack_limit = (C_word *)((C_byte *)C_stack_pointer + stack_size);
#endif

    stack_bottom = C_stack_pointer;

    if(debug_mode)
        C_dbg(C_text("debug"), C_text("stack bottom is 0x%lx.\n"), (C_word)stack_bottom);

    /* The point of (usually) no return... */
#ifdef HAVE_SIGSETJMP
    C_sigsetjmp(C_restart, 0);
#else
    C_setjmp(C_restart);
#endif

    serious_signal_occurred = 0;

    if(!return_to_host)
        (C_restart_trampoline)(C_restart_address);

    chicken_is_running = 0;
    return C_restore;
}


C_word CHICKEN_continue(C_word k)
{
    if(C_temporary_stack_bottom != C_temporary_stack)
        panic(C_text("invalid temporary stack level"));

    if(!chicken_is_initialized)
        panic(C_text("runtime system has not been initialized - `CHICKEN_run' has probably not been called"));

    C_save(k);
    return CHICKEN_run(NULL);
}


/* Trampoline called at system startup: */

C_regparm void C_fcall initial_trampoline(void *proc)
{
    TOPLEVEL top = (TOPLEVEL)proc;
    C_word closure = (C_word)C_alloc(C_SIZEOF_CLOSURE(1));

    ((C_SCHEME_BLOCK *)closure)->header = C_CLOSURE_TYPE | 1;
    C_set_block_item(closure, 0, (C_word)termination_continuation);
    (top)(2, C_SCHEME_UNDEFINED, closure);
}


/* The final continuation: */

void C_ccall termination_continuation(C_word c, C_word self, C_word result)
{
    if(debug_mode) {
        C_dbg(C_text("debug"), C_text("application terminated normally\n"));
    }

    exit(0);
}


/* Timing routines: */

C_regparm double C_fcall C_milliseconds(void)
{
#ifdef C_NONUNIX
    if(CLOCKS_PER_SEC == 1000) return clock();
    else return C_floor(((double)clock() / (double)CLOCKS_PER_SEC) * 1000);
#else
    struct timeval tv;

    if(C_gettimeofday(&tv, NULL) == -1) return 0;
    else return
            C_floor(((double)tv.tv_sec - C_startup_time_seconds) * 1000.0 + tv.tv_usec / 1000);
#endif
}


C_regparm time_t C_fcall C_seconds(C_long *ms)
{
#ifdef C_NONUNIX
    if(ms != NULL) *ms = 0;

    return (time_t)(clock() / CLOCKS_PER_SEC);
#else
    struct timeval tv;

    if(C_gettimeofday(&tv, NULL) == -1) {
        if(ms != NULL) *ms = 0;

        return (time_t)0;
    }
    else {
        if(ms != NULL) *ms = tv.tv_usec / 1000;

        return tv.tv_sec;
    }
#endif
}


C_regparm double C_fcall C_cpu_milliseconds(void)
{
#if defined(C_NONUNIX)
    if(CLOCKS_PER_SEC == 1000) return clock();
    else return C_floor(((double)clock() / (double)CLOCKS_PER_SEC) * 1000);
#else
    struct rusage ru;

    if(C_getrusage(RUSAGE_SELF, &ru) == -1) return 0;
    else return
            C_floor(((double)ru.ru_utime.tv_sec + ru.ru_stime.tv_sec) * 1000
                    + ((double)ru.ru_utime.tv_usec + ru.ru_stime.tv_usec) / 1000);
#endif
}


/* Support code for callbacks: */

int C_fcall C_save_callback_continuation(C_word **ptr, C_word k)
{
    C_word p = C_a_pair(ptr, k, C_block_item(callback_continuation_stack_symbol, 0));

    C_mutate_slot(&C_block_item(callback_continuation_stack_symbol, 0), p);
    return ++callback_continuation_level;
}


C_word C_fcall C_restore_callback_continuation(void)
{
    /* obsolete, but retained for keeping old code working */
    C_word p = C_block_item(callback_continuation_stack_symbol, 0),
           k;

    assert(!C_immediatep(p) && C_block_header(p) == C_PAIR_TAG);
    k = C_u_i_car(p);

    C_mutate2(&C_block_item(callback_continuation_stack_symbol, 0), C_u_i_cdr(p));
    --callback_continuation_level;
    return k;
}


C_word C_fcall C_restore_callback_continuation2(int level)
{
    C_word p = C_block_item(callback_continuation_stack_symbol, 0),
           k;

    if(level != callback_continuation_level || C_immediatep(p) || C_block_header(p) != C_PAIR_TAG)
        panic(C_text("unbalanced callback continuation stack"));

    k = C_u_i_car(p);

    C_mutate2(&C_block_item(callback_continuation_stack_symbol, 0), C_u_i_cdr(p));
    --callback_continuation_level;
    return k;
}


C_word C_fcall C_callback(C_word closure, int argc)
{
#ifdef HAVE_SIGSETJMP
    sigjmp_buf prev;
#else
    jmp_buf prev;
#endif
    C_word
    *a = C_alloc(C_SIZEOF_CLOSURE(2)),
     k = C_closure(&a, 2, (C_word)callback_return_continuation, C_SCHEME_FALSE);
    int old = chicken_is_running;

    if(old && C_block_item(callback_continuation_stack_symbol, 0) == C_SCHEME_END_OF_LIST)
        panic(C_text("callback invoked in non-safe context"));

    C_memcpy(&prev, &C_restart, sizeof(C_restart));
    callback_returned_flag = 0;
    chicken_is_running = 1;

#ifdef HAVE_SIGSETJMP
    if(!C_sigsetjmp(C_restart, 0)) C_do_apply(argc, closure, k);
#else
    if(!C_setjmp(C_restart)) C_do_apply(argc, closure, k);
#endif

    serious_signal_occurred = 0;

    if(!callback_returned_flag) (C_restart_trampoline)(C_restart_address);
    else {
        C_memcpy(&C_restart, &prev, sizeof(C_restart));
        callback_returned_flag = 0;
    }

    chicken_is_running = old;
    return C_restore;
}


void C_fcall C_callback_adjust_stack(C_word *a, int size)
{
    if(!chicken_is_running && !C_in_stackp((C_word)a)) {
        if(debug_mode)
            C_dbg(C_text("debug"),
                  C_text("callback invoked in lower stack region - adjusting limits:\n"
                         "[debug]   current:  \t%p\n"
                         "[debug]   previous: \t%p (bottom) - %p (limit)\n"),
                  a, stack_bottom, C_stack_limit);

#if C_STACK_GROWS_DOWNWARD
        C_stack_limit = (C_word *)((C_byte *)a - stack_size);
        stack_bottom = a + size;
#else
        C_stack_limit = (C_word *)((C_byte *)a + stack_size);
        stack_bottom = a;
#endif

        if(debug_mode)
            C_dbg(C_text("debug"), C_text("new:      \t%p (bottom) - %p (limit)\n"),
                  stack_bottom, C_stack_limit);
    }
}


C_word C_fcall C_callback_wrapper(void *proc, int argc)
{
    C_word
    *a = C_alloc(C_SIZEOF_CLOSURE(1)),
     closure = C_closure(&a, 1, (C_word)proc),
     result;

    result = C_callback(closure, argc);
    assert(C_temporary_stack == C_temporary_stack_bottom);
    return result;
}


void C_ccall callback_return_continuation(C_word c, C_word self, C_word r)
{
    if(C_block_item(self, 1) == C_SCHEME_TRUE)
        panic(C_text("callback returned twice"));

    assert(callback_returned_flag == 0);
    callback_returned_flag = 1;
    C_set_block_item(self, 1, C_SCHEME_TRUE);
    C_save(r);
    C_reclaim(NULL, NULL);
}


C_regparm int C_in_stackp(C_word x)
{
    C_word *ptr = (C_word *)(C_uword)x;

#if C_STACK_GROWS_DOWNWARD
    return ptr >= C_stack_pointer_test && ptr <= stack_bottom;
#else
    return ptr < C_stack_pointer_test && ptr >= stack_bottom;
#endif
}


/* Cons the rest-aguments together: */

C_regparm C_word C_fcall C_restore_rest(C_word *ptr, int num)
{
    C_word x = C_SCHEME_END_OF_LIST;
    C_SCHEME_BLOCK *node;

    while(num--) {
        node = (C_SCHEME_BLOCK *)ptr;
        ptr += 3;
        node->header = C_PAIR_TYPE | (C_SIZEOF_PAIR - 1);
        node->data[ 0 ] = C_restore;
        node->data[ 1 ] = x;
        x = (C_word)node;
    }

    return x;
}


/* I? */
C_regparm C_word C_fcall C_restore_rest_vector(C_word *ptr, int num)
{
    C_word *p0 = ptr;

    *(ptr++) = C_VECTOR_TYPE | num;
    ptr += num;

    while(num--) *(--ptr) = C_restore;

    return (C_word)p0;
}


C_regparm C_word C_fcall
C_mutate_slot(C_word *slot, C_word val)
{
    unsigned int mssize, newmssize, bytes;

    ++mutation_count;
    /* Mutation stack exists to track mutations pointing from elsewhere
     * into nursery.  Stuff pointing anywhere else can be skipped, as
     * well as mutations on nursery objects.
     */
    if(!C_in_stackp(val) || C_in_stackp((C_word)slot))
        return *slot = val;

#ifdef C_GC_HOOKS
    if(C_gc_mutation_hook != NULL && C_gc_mutation_hook(slot, val)) return val;
#endif

    if(mutation_stack_top >= mutation_stack_limit) {
        assert(mutation_stack_top == mutation_stack_limit);
        mssize = mutation_stack_top - mutation_stack_bottom;
        newmssize = mssize * 2;
        bytes = newmssize * sizeof(C_word *);

        if(debug_mode)
            C_dbg(C_text("debug"), C_text("resizing mutation-stack from " UWORD_COUNT_FORMAT_STRING "k to " UWORD_COUNT_FORMAT_STRING "k ...\n"),
                  (mssize * sizeof(C_word *)) / 1024, bytes / 1024);

        mutation_stack_bottom = (C_word **)realloc(mutation_stack_bottom, bytes);

        if(mutation_stack_bottom == NULL)
            panic(C_text("out of memory - cannot re-allocate mutation stack"));

        mutation_stack_limit = mutation_stack_bottom + newmssize;
        mutation_stack_top = mutation_stack_bottom + mssize;
    }

    *(mutation_stack_top++) = slot;
    ++tracked_mutation_count;
    return *slot = val;
}


void handle_interrupt(void *trampoline, void *proc)
{
    C_word *p, x, n;
    double c;

    /* Build vector with context information: */
    n = C_temporary_stack_bottom - C_temporary_stack;
    p = C_alloc(C_SIZEOF_VECTOR(2) + C_SIZEOF_VECTOR(n+1));
    x = (C_word)p;
    *(p++) = C_VECTOR_TYPE | C_BYTEBLOCK_BIT | (2 * sizeof(C_word));
    *(p++) = (C_word)trampoline;
    *(p++) = (C_word)proc;
    C_save(x);
    x = (C_word)p;
    *(p++) = C_VECTOR_TYPE | (n + 1);
    *(p++) = C_restore;
    C_memcpy(p, C_temporary_stack, n * sizeof(C_word));

    /* Restore state to the one at the time of the interrupt: */
    C_temporary_stack = C_temporary_stack_bottom;
    C_stack_limit = saved_stack_limit;

    /* Invoke high-level interrupt handler: */
    C_save(C_fix(pending_interrupts[ --pending_interrupts_count ]));
    C_save(x);
    x = C_block_item(interrupt_hook_symbol, 0);

    if(C_immediatep(x))
        panic(C_text("`##sys#interrupt-hook' is not defined"));

    c = C_cpu_milliseconds() - interrupt_time;
    last_interrupt_latency = c;
    C_timer_interrupt_counter = C_initial_timer_interrupt_period;
    /* <- no continuation is passed: "##sys#interrupt-hook" may not return! */
    C_do_apply(2, x, C_SCHEME_UNDEFINED);
}


void
C_unbound_variable(C_word sym)
{
    barf(C_UNBOUND_VARIABLE_ERROR, NULL, sym);
}

/* XXX: This needs to be given a better name.
   C_retrieve used to exist but it just called C_fast_retrieve */
C_regparm C_word C_fcall C_retrieve2(C_word val, char *name)
{
    C_word *p;
    int len;

    if(val == C_SCHEME_UNBOUND) {
        len = C_strlen(name);
        /* this is ok: we won't return from `C_retrieve2'
         * (or the value isn't needed). */
        p = C_alloc(C_SIZEOF_STRING(len));
        C_unbound_variable(C_string2(&p, name));
    }

    return val;
}


void C_ccall
C_invalid_procedure(int c, C_word self, ...)
{
    barf(C_NOT_A_CLOSURE_ERROR, NULL, self);
}


C_regparm C_word C_fcall C_u_i_string_hash(C_word str, C_word rnd)
{
    int len = C_header_size(str);
    C_char *ptr = C_data_pointer(str);
    return C_fix(hash_string(len, ptr, C_MOST_POSITIVE_FIXNUM, C_unfix(rnd), 0));
}

C_regparm C_word C_fcall C_u_i_string_ci_hash(C_word str, C_word rnd)
{
    int len = C_header_size(str);
    C_char *ptr = C_data_pointer(str);
    return C_fix(hash_string(len, ptr, C_MOST_POSITIVE_FIXNUM, C_unfix(rnd), 1));
}

C_regparm void C_fcall C_toplevel_entry(C_char *name)
{
    if(debug_mode)
        C_dbg(C_text("debug"), C_text("entering toplevel %s...\n"), name);
}


C_word C_halt(C_word msg)
{
    C_char *dmp = msg != C_SCHEME_FALSE ? C_dump_trace(0) : NULL;

    if(msg != C_SCHEME_FALSE) {
        C_fwrite(C_data_pointer(msg), C_header_size(msg), sizeof(C_char), C_stderr);
        C_fputc('\n', C_stderr);
    }

    if(dmp != NULL)
        C_dbg("", C_text("\n%s"), dmp);

    C_exit(EX_SOFTWARE);
    return 0;
}


C_word C_message(C_word msg)
{
    unsigned int n = C_header_size(msg);
    /*
     * Strictly speaking this isn't necessary for the non-gui-mode,
     * but let's try and keep this consistent across modes.
     */
    if (memchr(C_c_string(msg), '\0', n) != NULL)
        barf(C_ASCIIZ_REPRESENTATION_ERROR, "##sys#message", msg);

    C_fwrite(C_c_string(msg), n, sizeof(C_char), stdout);
    C_putchar('\n');
    return C_SCHEME_UNDEFINED;
}


C_regparm C_word C_fcall C_start_timer(void)
{
    tracked_mutation_count = 0;
    mutation_count = 0;
    gc_count_1_total = 0;
    gc_count_2 = 0;
    timer_start_ms = C_cpu_milliseconds();
    gc_ms = 0;
    return C_SCHEME_UNDEFINED;
}


void C_ccall C_stop_timer(C_word c, C_word closure, C_word k)
{
    double t0 = C_cpu_milliseconds() - timer_start_ms;
    C_word
        ab[ WORDS_PER_FLONUM * 2 + C_SIZEOF_VECTOR(6) ],
    *a = ab,
        elapsed = C_flonum(&a, t0 / 1000.0),
        gc_time = C_flonum(&a, gc_ms / 1000.0),
        info;

    info = C_vector(&a, 6, elapsed, gc_time, C_fix(mutation_count),
                    C_fix(tracked_mutation_count), C_fix(gc_count_1_total),
                    C_fix(gc_count_2));
    C_kontinue(k, info);
}


C_word C_exit_runtime(C_word code)
{
    exit(C_unfix(code));
    return 0;                   /* to please the compiler... */
}


C_regparm C_word C_fcall C_read_char(C_word port)
{
    C_FILEPTR fp = C_port_file(port);
    int c = C_getc(fp);

    if(c == EOF) {
        if(ferror(fp)) {
            clearerr(fp);
            return C_fix(-1);
        }
        /* Found here:
           http://mail.python.org/pipermail/python-bugs-list/2002-July/012579.html */
#if defined(_WIN32)
        else if(GetLastError() == ERROR_OPERATION_ABORTED) return C_fix(-1);
#endif
        else return C_SCHEME_END_OF_FILE;
    }

    return C_make_character(c);
}


C_regparm C_word C_fcall C_peek_char(C_word port)
{
    C_FILEPTR fp = C_port_file(port);
    int c = C_getc(fp);

    if(c == EOF) {
        if(ferror(fp)) {
            clearerr(fp);
            return C_fix(-1);
        }
        /* see above */
#if defined(_WIN32)
        else if(GetLastError() == ERROR_OPERATION_ABORTED) return C_fix(-1);
#endif
        else return C_SCHEME_END_OF_FILE;
    }

    C_ungetc(c, fp);
    return C_make_character(c);
}


/*
 * TODO: Implement something for Windows that supports selecting on
 * arbitrary fds (there, select() only works on network sockets and
 * poll() is not available at all).
 */
C_regparm int C_fcall C_check_fd_ready(int fd)
{
#ifdef NO_POSIX_POLL
    fd_set in;
    struct timeval tm;
    int rv;
    FD_ZERO(&in);
    FD_SET(fd, &in);
    tm.tv_sec = tm.tv_usec = 0;
    rv = select(fd + 1, &in, NULL, NULL, &tm);
    if(rv > 0) { rv = FD_ISSET(fd, &in) ? 1 : 0; }
    return rv;
#else
    struct pollfd ps;
    ps.fd = fd;
    ps.events = POLLIN;
    return poll(&ps, 1, 0);
#endif
}

C_regparm C_word C_fcall C_char_ready_p(C_word port)
{
#if defined(C_NONUNIX)
    /* The best we can currently do on Windows... */
    return C_SCHEME_TRUE;
#else
    int fd = C_fileno(C_port_file(port));
    return C_mk_bool(C_check_fd_ready(fd) == 1);
#endif
}


C_regparm C_word C_fcall C_fudge(C_word fudge_factor)
{
    int i, j;
    double tgc;

    switch(fudge_factor) {
    case C_fix(3):              /* 64-bit system? */
#ifdef C_SIXTY_FOUR
        return C_SCHEME_TRUE;
#else
        return C_SCHEME_FALSE;
#endif

    case C_fix(4):              /* is this a console application? */
        return C_SCHEME_TRUE;

    case C_fix(7):              /* wordsize */
        return C_fix(sizeof(C_word));

    case C_fix(10):             /* clocks per sec */
        return C_fix(CLOCKS_PER_SEC);

    case C_fix(11):             /* not a unix system? */
#if defined(C_NONUNIX)
        return C_SCHEME_FALSE;
#else
        return C_SCHEME_TRUE;
#endif

    case C_fix(12):             /* tty forced? */
        return C_mk_bool(fake_tty_flag);

    case C_fix(13):             /* debug mode */
        return C_mk_bool(debug_mode);

    case C_fix(14):             /* interrupts enabled? */
        return C_mk_bool(C_interrupts_enabled);

    case C_fix(15):             /* symbol-gc enabled? */
        return C_mk_bool(C_enable_gcweak);

    case C_fix(17):             /* fixed heap? */
        return(C_mk_bool(C_heap_size_is_fixed));

    case C_fix(18):             /* stack direction */
        return(C_fix(C_STACK_GROWS_DOWNWARD));

    case C_fix(21):             /* largest fixnum */
        return C_fix(C_MOST_POSITIVE_FIXNUM);

    case C_fix(24):             /* dynamic loading available? */
#ifdef NO_DLOAD2
        return C_SCHEME_FALSE;
#else
        return C_SCHEME_TRUE;
#endif

    case C_fix(25):             /* REPL on error? XXX Is this used anywhere? */
        return C_mk_bool(C_enable_repl);

    case C_fix(26):             /* number of untriggered finalizers */
        return C_fix(live_finalizer_count);

    case C_fix(27):             /* total number of finalizers used and unused */
        return C_fix(allocated_finalizer_count);

    case C_fix(28):             /* are procedure-tabled enabled? */
#ifdef C_ENABLE_PTABLES
        return C_SCHEME_TRUE;
#else
        return C_SCHEME_FALSE;
#endif

    case C_fix(31):             /* GC time since last invocation */
        tgc = timer_accumulated_gc_ms;
        timer_accumulated_gc_ms = 0;
        return C_fix(tgc);

    case C_fix(32):             /* are GC-hooks enabled? */
#ifdef C_GC_HOOKS
        return C_SCHEME_TRUE;
#else
        return C_SCHEME_FALSE;
#endif

    case C_fix(33):             /* return process-ID */
        return C_fix(C_getpid());

    case C_fix(34):             /* effective maximum for procedure arguments */
#ifdef C_HACKED_APPLY
        return C_fix(TEMPORARY_STACK_SIZE);
#else
        return C_fix(126);
#endif

    case C_fix(36):             /* toggle debug mode */
        debug_mode = !debug_mode;
        return C_mk_bool(debug_mode);

    case C_fix(37):             /* heap-dump enabled? */
        return C_mk_bool(dump_heap_on_exit);

    case C_fix(39):             /* is this a cross-chicken? */
#if defined(C_CROSS_CHICKEN) && C_CROSS_CHICKEN
        return C_SCHEME_TRUE;
#else
        return C_SCHEME_FALSE;
#endif

    case C_fix(40):             /* assembly stub for "apply" available? */
#if defined(C_HACKED_APPLY)
        return C_SCHEME_TRUE;
#else
        return C_SCHEME_FALSE;
#endif

    case C_fix(41):             /* major CHICKEN version */
        return C_fix(C_MAJOR_VERSION);

    case C_fix(42):             /* binary version number */
#ifdef C_BINARY_VERSION
        return C_fix(C_BINARY_VERSION);
#else
        return C_fix(0);
#endif

    case C_fix(43):             /* minor CHICKEN version */
        return C_fix(C_MINOR_VERSION);

    default:
        panic(C_text("unknown fudge factor"));
    }
}


C_regparm void C_fcall C_paranoid_check_for_interrupt(void)
{
    if(--C_timer_interrupt_counter <= 0)
        C_raise_interrupt(C_TIMER_INTERRUPT_NUMBER);
}


C_regparm void C_fcall C_raise_interrupt(int reason)
{
    if(C_interrupts_enabled) {
        if(pending_interrupts_count == 0 && !handling_interrupts) {
            /* Force the next stack check to fail by faking a "full" stack.
               That causes save_and_reclaim() to be called, which will
               invoke handle_interrupt() (which restores the stack limit). */
            saved_stack_limit = C_stack_limit;

#if C_STACK_GROWS_DOWNWARD
            C_stack_limit = C_stack_pointer + 1000;
#else
            C_stack_limit = C_stack_pointer - 1000;
#endif
            interrupt_time = C_cpu_milliseconds();
            pending_interrupts[ pending_interrupts_count++ ] = reason;
        } else if(pending_interrupts_count < MAX_PENDING_INTERRUPTS) {
            int i;
            /*
             * Drop signals if too many, but don't queue up multiple entries
             * for the same signal.
             */
            for (i = 0; i < pending_interrupts_count; ++i) {
                if (pending_interrupts[i] == reason)
                    return;
            }
            pending_interrupts[ pending_interrupts_count++ ] = reason;
        }
    }
}


C_regparm C_word C_fcall C_enable_interrupts(void)
{
    C_timer_interrupt_counter = C_initial_timer_interrupt_period;
    /* assert(C_timer_interrupt_counter > 0); */
    C_interrupts_enabled = 1;
    return C_SCHEME_UNDEFINED;
}


C_regparm C_word C_fcall C_disable_interrupts(void)
{
    C_interrupts_enabled = 0;
    return C_SCHEME_UNDEFINED;
}


C_regparm C_word C_fcall C_establish_signal_handler(C_word signum, C_word reason)
{
    int sig = C_unfix(signum);
#if defined(HAVE_SIGACTION)
    struct sigaction newsig;
#endif

    if(reason == C_SCHEME_FALSE) C_signal(sig, SIG_IGN);
    else {
        signal_mapping_table[ sig ] = C_unfix(reason);
#if defined(HAVE_SIGACTION)
        newsig.sa_flags = 0;
        /* The global signal handler is used for all signals, and
           manipulates a single queue.  Don't allow other signals to
           concurrently arrive while it's doing this, to avoid races. */
        sigfillset(&newsig.sa_mask);
        newsig.sa_handler = global_signal_handler;
        C_sigaction(sig, &newsig, NULL);
#else
        C_signal(sig, global_signal_handler);
#endif
    }

    return C_SCHEME_UNDEFINED;
}


/* Copy blocks into collected or static memory: */

C_regparm C_word C_fcall C_copy_block(C_word from, C_word to)
{
    int n = C_header_size(from);
    C_long bytes;

    if(C_header_bits(from) & C_BYTEBLOCK_BIT) {
        bytes = n;
        C_memcpy((C_SCHEME_BLOCK *)to, (C_SCHEME_BLOCK *)from, bytes + sizeof(C_header));
    }
    else {
        bytes = C_wordstobytes(n);
        C_memcpy((C_SCHEME_BLOCK *)to, (C_SCHEME_BLOCK *)from, bytes + sizeof(C_header));
    }

    return to;
}


C_regparm C_word C_fcall C_evict_block(C_word from, C_word ptr)
{
    int n = C_header_size(from);
    C_long bytes;
    C_word *p = (C_word *)C_pointer_address(ptr);

    if(C_header_bits(from) & C_BYTEBLOCK_BIT) bytes = n;
    else bytes = C_wordstobytes(n);

    C_memcpy(p, (C_SCHEME_BLOCK *)from, bytes + sizeof(C_header));
    return (C_word)p;
}

/* Primitives: */

void C_ccall C_call_cc(C_word c, C_word closure, C_word k, C_word cont)
{
    C_word *a = C_alloc(C_SIZEOF_CLOSURE(2)),
            wrapper;
    void *pr = (void *)C_block_item(cont,0);

    if(C_immediatep(cont) || C_header_bits(cont) != C_CLOSURE_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "call-with-current-continuation", cont);

    /* Check for values-continuation: */
    if(C_block_item(k,0) == (C_word)values_continuation)
        wrapper = C_closure(&a, 2, (C_word)call_cc_values_wrapper, k);
    else wrapper = C_closure(&a, 2, (C_word)call_cc_wrapper, k);

    ((C_proc3)pr)(3, cont, k, wrapper);
}


void C_ccall call_cc_wrapper(C_word c, C_word closure, C_word k, C_word result)
{
    C_word cont = C_block_item(closure,1);

    if(c != 3) C_bad_argc(c, 3);

    C_kontinue(cont, result);
}


void C_ccall call_cc_values_wrapper(C_word c, C_word closure, C_word k, ...)
{
    va_list v;
    C_word cont = C_block_item(closure,1),
           x1;
    int n = c;

    va_start(v, k);

    if(c > 2) {
        x1 = va_arg(v, C_word);
        --n;

        while(--c > 2) C_save(va_arg(v, C_word));
    }
    else x1 = C_SCHEME_UNBOUND;

    va_end(v);
    C_do_apply(n - 2, cont, x1);
}


/* I */
void C_ccall C_continuation_graft(C_word c, C_word self, C_word k, C_word kk, C_word proc)
{
    ((C_proc2)C_fast_retrieve_proc(proc))(2, proc, C_block_item(kk, 1));
}


void C_ccall C_values(C_word c, C_word closure, C_word k, ...)
{
    va_list v;
    C_word n = c;

    if(c < 2) C_bad_min_argc(c, 2);

    va_start(v, k);

    /* Check continuation whether it receives multiple values: */
    if(C_block_item(k, 0) == (C_word)values_continuation) {
        while(c-- > 2)
            C_save(va_arg(v, C_word));

        va_end(v);
        C_do_apply(n - 2, k, C_SCHEME_UNBOUND); /* unbound value marks direct invocation */
    }

    if(c != 3) {
#ifdef RELAX_MULTIVAL_CHECK
        if(c == 2) n = C_SCHEME_UNDEFINED;
        else n = va_arg(v, C_word);
#else
        barf(C_CONTINUATION_CANT_RECEIVE_VALUES_ERROR, "values", k);
#endif
    }
    else n = va_arg(v, C_word);

    va_end(v);
    C_kontinue(k, n);
}


void C_ccall C_apply_values(C_word c, C_word closure, C_word k, C_word lst)
{
    C_word n;

    if(c != 3) C_bad_argc(c, 3);

    /* Check continuation wether it receives multiple values: */
    if(C_block_item(k, 0) == (C_word)values_continuation) {
        for(n = 0; !C_immediatep(lst) && C_block_header(lst) == C_PAIR_TAG; ++n) {
            C_save(C_u_i_car(lst));
            lst = C_u_i_cdr(lst);
        }

        C_do_apply(n, k, C_SCHEME_UNBOUND); /* unbound value marks direct invocation */
    }

    if(C_immediatep(lst) || (C_block_header(lst) == C_PAIR_TAG && C_u_i_cdr(lst) == C_SCHEME_END_OF_LIST)) {
#ifdef RELAX_MULTIVAL_CHECK
        if(C_immediatep(lst)) n = C_SCHEME_UNDEFINED;
        else n = C_u_i_car(lst);
#else
        barf(C_CONTINUATION_CANT_RECEIVE_VALUES_ERROR, "values", k);
#endif
    }
    else n = C_u_i_car(lst);

    C_kontinue(k, n);
}


void C_ccall C_call_with_values(C_word c, C_word closure, C_word k, C_word thunk, C_word kont)
{
    C_word *a = C_alloc(C_SIZEOF_CLOSURE(3)),
            kk;

    if(c != 4) C_bad_argc(c, 4);

    if(C_immediatep(thunk) || C_header_bits(thunk) != C_CLOSURE_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "call-with-values", thunk);

    if(C_immediatep(kont) || C_header_bits(kont) != C_CLOSURE_TYPE)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "call-with-values", kont);

    kk = C_closure(&a, 3, (C_word)values_continuation, kont, k);
    C_do_apply(0, thunk, kk);
}


void C_ccall C_u_call_with_values(C_word c, C_word closure, C_word k, C_word thunk, C_word kont)
{
    C_word *a = C_alloc(C_SIZEOF_CLOSURE(3)),
            kk;

    kk = C_closure(&a, 3, (C_word)values_continuation, kont, k);
    C_do_apply(0, thunk, kk);
}


void C_ccall values_continuation(C_word c, C_word closure, C_word arg0, ...)
{
    C_word kont = C_block_item(closure, 1),
           k = C_block_item(closure, 2),
           n = c,
    *ptr;
    va_list v;

    if(arg0 == C_SCHEME_UNBOUND) { /* This continuation was called by 'values'... */
        va_start(v, arg0);

        for(; c-- > 2; C_save(va_arg(v, C_word))) ;

        va_end(v);
    }
    else {                      /* This continuation was captured and called explicity... */
        ++n;
        c -= 1;

        /* move temporary-stack contents upwards one slot: */
        for(ptr = C_temporary_stack - c; --c; ++ptr) *ptr = ptr[ 1 ];

        C_save(arg0);
    }

    C_do_apply(n - 2, kont, k);
}

void C_ccall C_open_file_port(C_word c, C_word closure, C_word k, C_word port, C_word channel, C_word mode)
{
    C_FILEPTR fp = (C_FILEPTR)NULL;
    C_char fmode[ 4 ];
    C_word n;
    char *buf;

    switch(channel) {
    case C_fix(0): fp = C_stdin; break;
    case C_fix(1): fp = C_stdout; break;
    case C_fix(2): fp = C_stderr; break;
    default:
        n = C_header_size(channel);
        buf = buffer;

        if(n >= STRING_BUFFER_SIZE) {
            if((buf = (char *)C_malloc(n + 1)) == NULL)
                barf(C_OUT_OF_MEMORY_ERROR, "open");
        }

        C_strncpy(buf, C_c_string(channel), n);
        buf[ n ] = '\0';
        if (n != strlen(buf))
            barf(C_ASCIIZ_REPRESENTATION_ERROR, "open", channel);
        n = C_header_size(mode);
        if (n >= sizeof(fmode)) n = sizeof(fmode) - 1;
        C_strncpy(fmode, C_c_string(mode), n);
        fmode[ n ] = '\0';
        if (n != strlen(fmode)) /* Shouldn't happen, but never hurts */
            barf(C_ASCIIZ_REPRESENTATION_ERROR, "open", mode);
        fp = C_fopen(buf, fmode);

        if(buf != buffer) C_free(buf);
    }

    C_set_block_item(port, 0, (C_word)fp);
    C_kontinue(k, C_mk_bool(fp != NULL));
}


void C_ccall C_flonum_fraction(C_word c, C_word closure, C_word k, C_word n)
{
    double i, fn = C_flonum_magnitude(n);
    C_alloc_flonum;

    C_kontinue_flonum(k, modf(fn, &i));
}

void C_ccall C_flonum_rat(C_word c, C_word closure, C_word k, C_word n)
{
    double frac, tmp, numer, denom, fn = C_flonum_magnitude(n);
    double ga, gb;
    C_word ab[WORDS_PER_FLONUM * 2], *ap = ab;
    int i = 0;

    if (isnormal(fn)) {
        /* Calculate bit-length of the fractional part (ie, after decimal point) */
        frac = fn;
        while(!C_isnan(frac) && !C_isinf(frac) && C_modf(frac, &tmp) != 0.0) {
            frac *= 2;
            if (i++ > 3000) /* should this be flonum-maximum-exponent? */
                barf(C_CANT_REPRESENT_INEXACT_ERROR, "fprat", n);
        }

        /* Now we can compute the rational number r = 2^i/X*2^i = numer/denom. */
        denom = pow(2, i);
        numer = fn*denom;
    } else { /* denormalised/subnormal number: [+-]1.0/+inf.0 */
        numer = fn > 0.0 ? 1.0 : -1.0;
        denom = INFINITY; /* +inf */
    }
    C_values(4, C_SCHEME_UNDEFINED, k, C_flonum(&ap, numer), C_flonum(&ap, denom));
}


C_regparm C_word C_fcall
C_a_i_exact_to_inexact(C_word **a, int c, C_word n)
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


/* special case for fixnum arg and decimal radix */
void C_ccall
C_fixnum_to_string(C_word c, C_word self, C_word k, C_word num)
{
    C_word *a, s;
    int n;

    /*XXX is this necessary? */
#ifdef C_SIXTY_FOUR
    C_snprintf(buffer, sizeof(buffer), C_text(LONG_FORMAT_STRING), C_unfix(num));
#else
    C_snprintf(buffer, sizeof(buffer), C_text("%d"), C_unfix(num));
#endif
    n = C_strlen(buffer);
    a = C_alloc(C_bytestowords(n) + 1);
    s = C_string2(&a, buffer);
    C_kontinue(k, s);
}


void C_ccall C_make_structure(C_word c, C_word closure, C_word k, C_word type, ...)
{
    va_list v;
    int i;

    va_start(v, type);

    for(i = c - 3; i--; C_save(va_arg(v, C_word))) ;

    va_end(v);
    C_save(type);
    C_save(k);

    if(!C_demand(c - 1))
        C_reclaim((void *)make_structure_2, NULL);

    make_structure_2(NULL);
}


void make_structure_2(void *dummy)
{
    C_word k = C_restore,
           type = C_restore,
           size = C_rest_count(0),
    *a = C_alloc(C_SIZEOF_STRUCTURE(size+1)),
    *s = a,
           s0 = (C_word)s;

    *(s++) = C_STRUCTURE_TYPE | (size + 1);
    *(s++) = type;
    s += size;

    while(size--)
        *(--s) = C_restore;

    C_kontinue(k, s0);
}


void C_ccall C_make_pointer(C_word c, C_word closure, C_word k)
{
    C_word ab[ 2 ], *a = ab,
           p;

    p = C_mpointer(&a, NULL);
    C_kontinue(k, p);
}


void C_ccall C_make_tagged_pointer(C_word c, C_word closure, C_word k, C_word tag)
{
    C_word ab[ 3 ], *a = ab,
           p;

    p = C_taggedmpointer(&a, tag, NULL);
    C_kontinue(k, p);
}


void generic_trampoline(void *dummy)
{
    C_word k = C_restore;

    C_kontinue(k, C_SCHEME_UNDEFINED);
}


void C_ccall C_return_to_host(C_word c, C_word closure, C_word k)
{
    return_to_host = 1;
    C_save(k);
    C_reclaim((void *)generic_trampoline, NULL);
}


void C_ccall C_context_switch(C_word c, C_word closure, C_word k, C_word state)
{
    C_word n = C_header_size(state) - 1,
           adrs = C_block_item(state, 0);
    TRAMPOLINE trampoline;

    C_temporary_stack = C_temporary_stack_bottom - n;
    C_memcpy(C_temporary_stack, (C_word *)state + 2, n * sizeof(C_word));
    trampoline = (TRAMPOLINE)C_block_item(adrs,0);
    trampoline((void *)C_block_item(adrs,1));
}


void C_ccall C_peek_signed_integer(C_word c, C_word closure, C_word k, C_word v, C_word index)
{
    C_word x = C_block_item(v, C_unfix(index));
    C_alloc_flonum;

    if((x & C_INT_SIGN_BIT) != ((x << 1) & C_INT_SIGN_BIT)) {
        C_kontinue_flonum(k, (double)x);
    }

    C_kontinue(k, C_fix(x));
}


void C_ccall C_peek_unsigned_integer(C_word c, C_word closure, C_word k, C_word v, C_word index)
{
    C_word x = C_block_item(v, C_unfix(index));
    C_alloc_flonum;

    if((x & C_INT_SIGN_BIT) || ((x << 1) & C_INT_SIGN_BIT)) {
        C_kontinue_flonum(k, (double)(C_uword)x);
    }

    C_kontinue(k, C_fix(x));
}


void C_ccall C_decode_seconds(C_word c, C_word closure, C_word k, C_word secs, C_word mode)
{
    time_t tsecs;
    struct tm *tmt;
    C_word ab[ C_SIZEOF_VECTOR(10) ], *a = ab,
           info;

    tsecs = (time_t)((secs & C_FIXNUM_BIT) != 0 ? C_unfix(secs) : C_flonum_magnitude(secs));

    if(mode == C_SCHEME_FALSE) tmt = C_localtime(&tsecs);
    else tmt = C_gmtime(&tsecs);

    if(tmt  == NULL)
        C_kontinue(k, C_SCHEME_FALSE);

    info = C_vector(&a, 10, C_fix(tmt->tm_sec), C_fix(tmt->tm_min), C_fix(tmt->tm_hour),
                    C_fix(tmt->tm_mday), C_fix(tmt->tm_mon), C_fix(tmt->tm_year),
                    C_fix(tmt->tm_wday), C_fix(tmt->tm_yday),
                    tmt->tm_isdst > 0 ? C_SCHEME_TRUE : C_SCHEME_FALSE,
#ifdef C_GNU_ENV
                    /* negative for west of UTC, but we want positive */
                    C_fix(-tmt->tm_gmtoff)
#elif defined(__MINGW32__) || defined(_WIN32) || defined(__WINNT__)
                    C_fix(mode == C_SCHEME_FALSE ? _timezone : 0) /* does not account for DST */
#else
                    C_fix(mode == C_SCHEME_FALSE ? timezone : 0) /* does not account for DST */
#endif
                    );
    C_kontinue(k, info);
}


/* Register finalizer: */

void C_ccall C_register_finalizer(C_word c, C_word closure, C_word k, C_word x, C_word proc)
{
    if(C_immediatep(x) || (!C_in_stackp(x) && !C_in_heapp(x))) /* not GCable? */
        C_kontinue(k, x);

    C_do_register_finalizer(x, proc);
    C_kontinue(k, x);
}


void C_ccall C_do_register_finalizer(C_word x, C_word proc)
{
    C_word *ptr;
    int n, i;
    FINALIZER_NODE *flist;

    if(finalizer_free_list == NULL) {
        if((flist = (FINALIZER_NODE *)C_malloc(sizeof(FINALIZER_NODE))) == NULL)
            panic(C_text("out of memory - cannot allocate finalizer node"));

        ++allocated_finalizer_count;
    }
    else {
        flist = finalizer_free_list;
        finalizer_free_list = flist->next;
    }

    if(finalizer_list != NULL) finalizer_list->previous = flist;

    flist->previous = NULL;
    flist->next = finalizer_list;
    finalizer_list = flist;

    if(C_in_stackp(x)) C_mutate_slot(&flist->item, x);
    else flist->item = x;

    if(C_in_stackp(proc)) C_mutate_slot(&flist->finalizer, proc);
    else flist->finalizer = proc;

    ++live_finalizer_count;
}


int C_do_unregister_finalizer(C_word x)
{
    int n;
    FINALIZER_NODE *flist;

    for(flist = finalizer_list; flist != NULL; flist = flist->next) {
        if(flist->item == x) {
            if(flist->previous == NULL) finalizer_list = flist->next;
            else flist->previous->next = flist->next;

            return 1;
        }
    }

    return 0;
}


/* Dynamic loading of shared objects: */

void C_ccall C_set_dlopen_flags(C_word c, C_word closure, C_word k, C_word now, C_word global)
{
#if !defined(NO_DLOAD2) && defined(HAVE_DLFCN_H)
    dlopen_flags = (C_truep(now) ? RTLD_NOW : RTLD_LAZY) | (C_truep(global) ? RTLD_GLOBAL : RTLD_LOCAL);
#endif
    C_kontinue(k, C_SCHEME_UNDEFINED);
}


void C_ccall C_dload(C_word c, C_word closure, C_word k, C_word name, C_word entry)
{
#if !defined(NO_DLOAD2) && (defined(HAVE_DLFCN_H) || defined(HAVE_DL_H) || (defined(HAVE_LOADLIBRARY) && defined(HAVE_GETPROCADDRESS)))
    /* Force minor GC: otherwise the lf may contain pointers to stack-data
       (stack allocated interned symbols, for example) */
    C_save_and_reclaim((void *)dload_2, NULL, 3, k, name, entry);
#endif

    C_kontinue(k, C_SCHEME_FALSE);
}


#ifdef DLOAD_2_DEFINED
# undef DLOAD_2_DEFINED
#endif


#if !defined(NO_DLOAD2) && defined(HAVE_DLFCN_H) && !defined(DLOAD_2_DEFINED)
#  define DLOAD_2_DEFINED
void dload_2(void *dummy)
{
    void *handle, *p, *p2;
    C_word
        entry = C_restore,
        name = C_restore,
        k = C_restore;
    C_char *topname = (C_char *)C_data_pointer(entry);
    C_char *mname = (C_char *)C_data_pointer(name);
    C_char *tmp;
    int tmp_len = 0;

    if((handle = C_dlopen(mname, dlopen_flags)) != NULL) {
        if((p = C_dlsym(handle, topname)) == NULL) {
            tmp_len = C_strlen(topname) + 2;
            tmp = (C_char *)C_malloc(tmp_len);

            if(tmp == NULL)
                panic(C_text("out of memory - cannot allocate toplevel name string"));

            C_strlcpy(tmp, C_text("_"), tmp_len);
            C_strlcat(tmp, topname, tmp_len);
            p = C_dlsym(handle, tmp);
            C_free(tmp);
        }

        if(p != NULL) {
            current_module_name = C_strdup(mname);
            current_module_handle = handle;

            if(debug_mode) {
                C_dbg(C_text("debug"), C_text("loading compiled module `%s' (handle is " UWORD_FORMAT_STRING ")\n"),
                      current_module_name, (C_uword)current_module_handle);
            }

            ((C_proc2)p)(2, C_SCHEME_UNDEFINED, k); /* doesn't return */
        }

        C_dlclose(handle);
    }

    C_dlerror = (char *)dlerror();
    C_kontinue(k, C_SCHEME_FALSE);
}
#endif


#if !defined(NO_DLOAD2) && (defined(HAVE_LOADLIBRARY) && defined(HAVE_GETPROCADDRESS)) && !defined(DLOAD_2_DEFINED)
# define DLOAD_2_DEFINED
void dload_2(void *dummy)
{
    HINSTANCE handle;
    FARPROC p = NULL, p2;
    C_word
        entry = C_restore,
        name = C_restore,
        k = C_restore;
    C_char *topname = (C_char *)C_data_pointer(entry);
    C_char *mname = (C_char *)C_data_pointer(name);

    /* cannot use LoadLibrary on non-DLLs, so we use extension checking */
    if (C_header_size(name) >= 5) {
        char *n = (char*) C_data_pointer(name);
        int l = C_header_size(name);
        if (C_strncasecmp(".dll", n+l-5, 4) &&
            C_strncasecmp(".so", n+l-4, 3))
            C_kontinue(k, C_SCHEME_FALSE);
    }

    if((handle = LoadLibrary(mname)) != NULL) {
        if ((p = GetProcAddress(handle, topname)) != NULL) {
            current_module_name = C_strdup(mname);
            current_module_handle = handle;

            if(debug_mode) {
                C_dbg(C_text("debug"), C_text("loading compiled module `%s' (handle is " UWORD_FORMAT_STRING ")\n"),
                      current_module_name, (C_uword)current_module_handle);
            }

            ((C_proc2)p)(2, C_SCHEME_UNDEFINED, k);
        }
        else FreeLibrary(handle);
    }

    C_dlerror = (char *) C_strerror(errno);
    C_kontinue(k, C_SCHEME_FALSE);
}
#endif


void C_ccall C_become(C_word c, C_word closure, C_word k, C_word table)
{
    C_word tp, x, old, neu, i, *p;

    i = forwarding_table_size;
    p = forwarding_table;

    for(tp = table; tp != C_SCHEME_END_OF_LIST; tp = C_u_i_cdr(tp)) {
        x = C_u_i_car(tp);
        old = C_u_i_car(x);
        neu = C_u_i_cdr(x);

        if(i == 0) {
            if((forwarding_table = (C_word *)realloc(forwarding_table, (forwarding_table_size + 1) * 4 * sizeof(C_word))) == NULL)
                panic(C_text("out of memory - cannot re-allocate forwarding table"));

            i = forwarding_table_size;
            p = forwarding_table + forwarding_table_size * 2;
            forwarding_table_size *= 2;
        }

        *(p++) = old;
        *(p++) = neu;
        --i;
    }

    *p = 0;
    C_fromspace_top = C_fromspace_limit;
    C_save_and_reclaim((void *)become_2, NULL, 1, k);
}


void become_2(void *dummy)
{
    C_word k = C_restore;
    *forwarding_table = 0;
    C_kontinue(k, C_SCHEME_UNDEFINED);
}


C_regparm C_word C_fcall
C_a_i_cpu_time(C_word **a, int c, C_word buf)
{
    C_word u, s = C_fix(0);

#if defined(C_NONUNIX)
    if(CLOCKS_PER_SEC == 1000) u = clock();
    else u = C_number(a, C_floor(((double)clock() / (double)CLOCKS_PER_SEC) * 1000));
#else
    struct rusage ru;

    if(C_getrusage(RUSAGE_SELF, &ru) == -1) u = 0;
    else {
        u = C_number(a, C_floor((double)ru.ru_utime.tv_sec * 1000 + ru.ru_utime.tv_usec / 1000));
        s = C_number(a, C_floor((double)ru.ru_stime.tv_sec * 1000 + ru.ru_stime.tv_usec / 1000));
    }
#endif

    /* buf must not be in nursery */
    C_set_block_item(buf, 0, u);
    C_set_block_item(buf, 1, s);
    return buf;
}


C_regparm C_word C_fcall C_a_i_make_locative(C_word **a, int c, C_word type, C_word object, C_word index, C_word weak)
{
    C_word *loc = *a;
    int offset, i, in = C_unfix(index);
    *a = loc + C_SIZEOF_LOCATIVE;

    loc[ 0 ] = C_LOCATIVE_TAG;

    switch(C_unfix(type)) {
    case C_SLOT_LOCATIVE: in *= sizeof(C_word); break;
    case C_U16_LOCATIVE:
    case C_S16_LOCATIVE: in *= 2; break;
    case C_U32_LOCATIVE:
    case C_F32_LOCATIVE:
    case C_S32_LOCATIVE: in *= 4; break;
    case C_F64_LOCATIVE: in *= 8; break;
    }

    offset = in + sizeof(C_header);
    loc[ 1 ] = object + offset;
    loc[ 2 ] = C_fix(offset);
    loc[ 3 ] = type;
    loc[ 4 ] = C_truep(weak) ? C_SCHEME_FALSE : object;

    for(i = 0; i < locative_table_count; ++i)
        if(locative_table[ i ] == C_SCHEME_UNDEFINED) {
            locative_table[ i ] = (C_word)loc;
            return (C_word)loc;
        }

    if(locative_table_count >= locative_table_size) {
        if(debug_mode == 2)
            C_dbg(C_text("debug"), C_text("resizing locative table from %d to %d (count is %d)\n"),
                  locative_table_size, locative_table_size * 2, locative_table_count);

        locative_table = (C_word *)C_realloc(locative_table, locative_table_size * 2 * sizeof(C_word));

        if(locative_table == NULL)
            panic(C_text("out of memory - cannot resize locative table"));

        locative_table_size *= 2;
    }

    locative_table[ locative_table_count++ ] = (C_word)loc;
    return (C_word)loc;
}


void C_ccall C_locative_ref(C_word c, C_word closure, C_word k, C_word loc)
{
    C_word *ptr, val;
    C_alloc_flonum;

    if(c != 3) C_bad_argc(c, 3);

    if(C_immediatep(loc) || C_block_header(loc) != C_LOCATIVE_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", loc);

    ptr = (C_word *)C_block_item(loc, 0);

    if(ptr == NULL) barf(C_LOST_LOCATIVE_ERROR, "locative-ref", loc);

    switch(C_unfix(C_block_item(loc, 2))) {
    case C_SLOT_LOCATIVE: C_kontinue(k, *ptr);
    case C_CHAR_LOCATIVE: C_kontinue(k, C_make_character(*((char *)ptr)));
    case C_U8_LOCATIVE: C_kontinue(k, C_fix(*((unsigned char *)ptr)));
    case C_S8_LOCATIVE: C_kontinue(k, C_fix(*((char *)ptr)));
    case C_U16_LOCATIVE: C_kontinue(k, C_fix(*((unsigned short *)ptr)));
    case C_S16_LOCATIVE: C_kontinue(k, C_fix(*((short *)ptr)));
    case C_U32_LOCATIVE: C_peek_unsigned_integer(0, 0, k, (C_word)(ptr - 1), 0);
    case C_S32_LOCATIVE: C_peek_signed_integer(0, 0, k, (C_word)(ptr - 1), 0);
    case C_F32_LOCATIVE: C_kontinue_flonum(k, *((float *)ptr));
    case C_F64_LOCATIVE: C_kontinue_flonum(k, *((double *)ptr));
    default: panic(C_text("bad locative type"));
    }
}


C_regparm C_word C_fcall C_i_locative_set(C_word loc, C_word x)
{
    C_word *ptr, val;

    if(C_immediatep(loc) || C_block_header(loc) != C_LOCATIVE_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", loc);

    ptr = (C_word *)C_block_item(loc, 0);

    if(ptr == NULL)
        barf(C_LOST_LOCATIVE_ERROR, "locative-set!", loc);

    switch(C_unfix(C_block_item(loc, 2))) {
    case C_SLOT_LOCATIVE: C_mutate2(ptr, x); break;

    case C_CHAR_LOCATIVE:
        if((x & C_IMMEDIATE_TYPE_BITS) != C_CHARACTER_BITS)
            barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

        *((char *)ptr) = C_character_code(x);
        break;

    case C_U8_LOCATIVE:
        if((x & C_FIXNUM_BIT) == 0)
            barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

        *((unsigned char *)ptr) = C_unfix(x);
        break;

    case C_S8_LOCATIVE:
        if((x & C_FIXNUM_BIT) == 0)
            barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

        *((char *)ptr) = C_unfix(x);
        break;

    case C_U16_LOCATIVE:
        if((x & C_FIXNUM_BIT) == 0)
            barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

        *((unsigned short *)ptr) = C_unfix(x);
        break;

    case C_S16_LOCATIVE:
        if((x & C_FIXNUM_BIT) == 0)
            barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

        *((short *)ptr) = C_unfix(x);
        break;

    case C_U32_LOCATIVE:
        if((x & C_FIXNUM_BIT) == 0 && (C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG))
            barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

        *((C_u32 *)ptr) = C_num_to_unsigned_int(x);
        break;

    case C_S32_LOCATIVE:
        if((x & C_FIXNUM_BIT) == 0 && (C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG))
            barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

        *((C_s32 *)ptr) = C_num_to_int(x);
        break;

    case C_F32_LOCATIVE:
        if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
            barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

        *((float *)ptr) = C_flonum_magnitude(x);
        break;

    case C_F64_LOCATIVE:
        if(C_immediatep(x) || C_block_header(x) != C_FLONUM_TAG)
            barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative-set!", x);

        *((double *)ptr) = C_flonum_magnitude(x);
        break;

    default: panic(C_text("bad locative type"));
    }

    return C_SCHEME_UNDEFINED;
}


C_regparm C_word C_fcall C_i_locative_to_object(C_word loc)
{
    C_word *ptr;

    if(C_immediatep(loc) || C_block_header(loc) != C_LOCATIVE_TAG)
        barf(C_BAD_ARGUMENT_TYPE_ERROR, "locative->object", loc);

    ptr = (C_word *)C_block_item(loc, 0);

    if(ptr == NULL) return C_SCHEME_FALSE;
    else return (C_word)ptr - C_unfix(C_block_item(loc, 1));
}


void C_ccall C_copy_closure(C_word c, C_word closure, C_word k, C_word proc)
{
    int n = C_header_size(proc);

    if(!C_demand(n + 1)) C_save_and_reclaim((void *)copy_closure_2, NULL, 2, proc, k);
    else {
        C_save(proc);
        C_save(k);
        copy_closure_2(NULL);
    }
}


static void copy_closure_2(void *dummy)
{
    C_word
        k = C_restore,
        proc = C_restore;
    int cells = C_header_size(proc);
    C_word
    *ptr = C_alloc(C_SIZEOF_CLOSURE(cells)),
    *p = ptr;

    *(p++) = C_CLOSURE_TYPE | cells;
    /* this is only allowed because the storage is freshly allocated: */
    C_memcpy_slots(p, C_data_pointer(proc), cells);
    C_kontinue(k, (C_word)ptr);
}


/* decoding of literals in compressed format */

static C_regparm C_uword C_fcall decode_size(C_char **str)
{
    C_uchar **ustr = (C_uchar **)str;
    C_uword size = (*((*ustr)++) & 0xff) << 16; /* always big endian */

    size |= (*((*ustr)++) & 0xff) << 8;
    size |= (*((*ustr)++) & 0xff);
    return size;
}


static C_regparm C_word C_fcall decode_literal2(C_word **ptr, C_char **str,
                                                C_word *dest)
{
    C_ulong bits = *((*str)++) & 0xff;
    C_word *data, *dptr, val;
    C_uword size;

    /* vvv this can be taken out at a later stage (once it works reliably) vvv */
    if(bits != 0xfe)
        panic(C_text("invalid encoded literal format"));

    bits = *((*str)++) & 0xff;
    /* ^^^ */

#ifdef C_SIXTY_FOUR
    bits <<= 24 + 32;
#else
    bits <<= 24;
#endif

    if(bits == C_HEADER_BITS_MASK) {            /* special/immediate */
        switch(0xff & *((*str)++)) {
        case C_BOOLEAN_BITS:
            return C_mk_bool(*((*str)++));

        case C_CHARACTER_BITS:
            return C_make_character(decode_size(str));

        case C_SCHEME_END_OF_LIST:
        case C_SCHEME_UNDEFINED:
        case C_SCHEME_END_OF_FILE:
            return (C_word)(*(*str - 1));

        case C_FIXNUM_BIT:
            val = *((*str)++) << 24; /* always big endian */
            val |= (*((*str)++) & 0xff) << 16;
            val |= (*((*str)++) & 0xff) << 8;
            val |= (*((*str)++) & 0xff);
            return C_fix(val);

#ifdef C_SIXTY_FOUR
        case (C_FLONUM_TYPE >> (24 + 32)) & 0xff:
#else
        case (C_FLONUM_TYPE >> 24) & 0xff:
#endif
            bits = C_FLONUM_TYPE;
            break;

        default:
            panic(C_text("invalid encoded special literal"));
        }
    }

#ifndef C_SIXTY_FOUR
    if((bits & C_8ALIGN_BIT) != 0) {
        /* Align _data_ on 8-byte boundary: */
        if(C_aligned8(*ptr)) ++(*ptr);
    }
#endif

    val = (C_word)(*ptr);

    if(bits == C_FLONUM_TYPE) {
        C_word ln;
        double fn;

        switch (convert_string_to_number(*str, 10, &ln, &fn)) {
        case 0:                 /* failed */
            panic(C_text("invalid encoded numeric literal"));
            break;

        case 1:                 /* fixnum */
            val = C_fix(ln);
            break;

        case 2:                 /* flonum */
            val = C_flonum(ptr, fn);
            break;
        }

        while(*((*str)++) != '\0') ; /* skip terminating '\0' */
        return val;
    }

    if((bits & C_SPECIALBLOCK_BIT) != 0)
        panic(C_text("literals with special bit cannot be decoded"));

    size = decode_size(str);

    switch(bits) {
    case C_STRING_TYPE:
        /* strings are always allocated statically */
        val = C_static_string(ptr, size, *str);
        *str += size;
        break;

    case C_BYTEVECTOR_TYPE:
        /* ... as are bytevectors (blobs) */
        val = C_static_bytevector(ptr, size, *str);
        *str += size;
        break;

    case C_SYMBOL_TYPE:
        if(dest == NULL)
            panic(C_text("invalid literal symbol destination"));

        val = C_h_intern(dest, size, *str);
        *str += size;
        break;

    case C_LAMBDA_INFO_TYPE:
        /* lambda infos are always allocated statically */
        val = C_static_lambda_info(ptr, size, *str);
        *str += size;
        break;

    default:
        *((*ptr)++) = C_make_header(bits, size);
        data = *ptr;

        if((bits & C_BYTEBLOCK_BIT) != 0) {
            C_memcpy(data, *str, size);
            size = C_align(size);
            *str += size;
            *ptr = (C_word *)C_align((C_word)(*ptr) + size);
        }
        else {
            C_word *dptr = *ptr;
            *ptr += size;

            while(size--) {
                *dptr = decode_literal2(ptr, str, dptr);
                ++dptr;
            }
        }
    }

    return val;
}


C_regparm C_word C_fcall
C_decode_literal(C_word **ptr, C_char *str)
{
    return decode_literal2(ptr, &str, NULL);
}


C_regparm C_word C_fcall C_i_bit_setp(C_word n, C_word i)
{
    double f1;
    C_uword nn1;
    int index;

    if((i & C_FIXNUM_BIT) == 0)
        barf(C_BAD_ARGUMENT_TYPE_NO_FIXNUM_ERROR, "bit-set?", i);

    index = C_unfix(i);

    if(index < 0 || index >= C_WORD_SIZE)
        barf(C_OUT_OF_RANGE_ERROR, "bit-set?", n, i);

    C_check_uint(n, f1, nn1, "bit-set?");
    return C_mk_bool((nn1 & (1 << index)) != 0);
}


C_regparm C_word C_fcall
C_i_getprop(C_word sym, C_word prop, C_word def)
{
    C_word pl = C_block_item(sym, 2);

    while(pl != C_SCHEME_END_OF_LIST) {
        if(C_block_item(pl, 0) == prop)
            return C_u_i_car(C_u_i_cdr(pl));
        else pl = C_u_i_cdr(C_u_i_cdr(pl));
    }

    return def;
}


C_regparm C_word C_fcall
C_putprop(C_word **ptr, C_word sym, C_word prop, C_word val)
{
    C_word pl = C_block_item(sym, 2);

    while(pl != C_SCHEME_END_OF_LIST) {
        if(C_block_item(pl, 0) == prop) {
            C_mutate2(&C_u_i_car(C_u_i_cdr(pl)), val);
            return val;
        }
        else pl = C_u_i_cdr(C_u_i_cdr(pl));
    }

    pl = C_a_pair(ptr, val, C_block_item(sym, 2));
    pl = C_a_pair(ptr, prop, pl);
    C_mutate_slot(&C_block_item(sym, 2), pl);
    return val;
}


C_regparm C_word C_fcall
C_i_get_keyword(C_word kw, C_word args, C_word def)
{
    while(!C_immediatep(args)) {
        if(C_block_header(args) == C_PAIR_TAG) {
            if(kw == C_u_i_car(args)) {
                args = C_u_i_cdr(args);

                if(C_immediatep(args) || C_block_header(args) != C_PAIR_TAG)
                    return def;
                else return C_u_i_car(args);
            }
            else {
                args = C_u_i_cdr(args);

                if(C_immediatep(args) || C_block_header(args) != C_PAIR_TAG)
                    return def;
                else args = C_u_i_cdr(args);
            }
        }
    }

    return def;
}


C_regparm C_word C_fcall
C_i_file_exists_p(C_word name, C_word file, C_word dir)
{
    struct stat buf;
    int res;

    res = stat(C_c_string(name), &buf);

    if(res != 0) {
        switch(errno) {
        case ENOENT: return C_SCHEME_FALSE;
        case EOVERFLOW: return C_truep(dir) ? C_SCHEME_FALSE : C_SCHEME_TRUE;
        case ENOTDIR: return C_SCHEME_FALSE;
        default: return C_fix(res);
        }
    }

    switch(buf.st_mode & S_IFMT) {
    case S_IFDIR: return C_truep(file) ? C_SCHEME_FALSE : C_SCHEME_TRUE;
    default: return C_truep(dir) ? C_SCHEME_FALSE : C_SCHEME_TRUE;
    }
}


C_regparm C_word C_fcall
C_i_pending_interrupt(C_word dummy)
{
    if(pending_interrupts_count > 0) {
        handling_interrupts = 1; /* Lock out further forced GCs until we're done */
        return C_fix(pending_interrupts[ --pending_interrupts_count ]);
    } else {
        handling_interrupts = 0; /* OK, can go on */
        return C_SCHEME_FALSE;
    }
}
