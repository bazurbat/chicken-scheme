#ifndef RUNTIME_TYPES_H
#define RUNTIME_TYPES_H

/* Types: */

typedef struct C_block_struct
{
    C_header header;
#if (__STDC_VERSION__ >= 199901L)
    C_word data[];
#else
    C_word data[ 1 ];
#endif
} C_SCHEME_BLOCK;

typedef struct C_symbol_table_struct
{
    char *name;
    unsigned int size;
    unsigned int rand;
    C_word *table;
    struct C_symbol_table_struct *next;
} C_SYMBOL_TABLE;

typedef struct C_gc_root_struct
{
    C_word value;
    struct C_gc_root_struct *next, *prev;
    int finalizable;
} C_GC_ROOT;

typedef struct C_ptable_entry_struct
{
    C_char *id;
    void *ptr;
} C_PTABLE_ENTRY;

#ifdef __x86_64__
# define C_AMD64_ABI_WEIRDNESS      , ...
#else
# define C_AMD64_ABI_WEIRDNESS
#endif

/* C_WORD_p<P>_<B>: List of ((2 ** P) * B) 'C_word' parameters */
#define C_WORD_p0_0
#define C_WORD_p1_0
#define C_WORD_p2_0
#define C_WORD_p3_0
#define C_WORD_p4_0
#define C_WORD_p5_0
#define C_WORD_p6_0
#define C_WORD_p7_0
#define C_WORD_p0_1     C_word,
#define C_WORD_p1_1     C_word, C_word,
#define C_WORD_p2_1     C_WORD_p1_1 C_WORD_p1_1
#define C_WORD_p3_1     C_WORD_p2_1 C_WORD_p2_1
#define C_WORD_p4_1     C_WORD_p3_1 C_WORD_p3_1
#define C_WORD_p5_1     C_WORD_p4_1 C_WORD_p4_1
#define C_WORD_p6_1     C_WORD_p5_1 C_WORD_p5_1
#define C_WORD_p7_1     C_WORD_p6_1 C_WORD_p6_1

/* DECL_C_PROC_p0 (n0,  p7,p6,p5,p4,p3,p2,p1,p0):
 *  declare function C_proc<n0>, which have <n0> 'C_word' parameters
 *  (not counting last 'C_word C_AMD64_ABI_WEIRDNESS' one).
 *  We must have:   n0 = SUM (i = 7 to 0, p<i> * (1 << i)).
 * DECL_C_PROC_p<N+1> (...):
 *  declare 2 as much functions as DECL_C_PROC_p<N>...
 */
#define DECL_C_PROC_p0( n0,  p7,p6,p5,p4,p3,p2,p1,p0) \
    typedef void (C_ccall *C_proc ## n0)(C_WORD_p7_ ## p7 C_WORD_p6_ ## p6 \
                                         C_WORD_p5_ ## p5 C_WORD_p4_ ## p4 \
                                         C_WORD_p3_ ## p3 C_WORD_p2_ ## p2 \
                                         C_WORD_p1_ ## p1 C_WORD_p0_ ## p0 \
                                         C_word C_AMD64_ABI_WEIRDNESS) C_noret;
#define DECL_C_PROC_p1( n0,n1,  p7,p6,p5,p4,p3,p2,p1) \
    DECL_C_PROC_p0 (n0,  p7,p6,p5,p4,p3,p2,p1,0) \
    DECL_C_PROC_p0 (n1,  p7,p6,p5,p4,p3,p2,p1,1)
#define DECL_C_PROC_p2( n0,n1,n2,n3,  p7,p6,p5,p4,p3,p2) \
    DECL_C_PROC_p1 (n0,n1,  p7,p6,p5,p4,p3,p2,0) \
    DECL_C_PROC_p1 (n2,n3,  p7,p6,p5,p4,p3,p2,1)
#define DECL_C_PROC_p3( n0,n1,n2,n3,n4,n5,n6,n7,  p7,p6,p5,p4,p3) \
    DECL_C_PROC_p2 (n0,n1,n2,n3,  p7,p6,p5,p4,p3,0) \
    DECL_C_PROC_p2 (n4,n5,n6,n7,  p7,p6,p5,p4,p3,1)

DECL_C_PROC_p1 (2,3,  0,0,0,0,0,0,1)
DECL_C_PROC_p2 (4,5,6,7,  0,0,0,0,0,1)
DECL_C_PROC_p3 (8,9,10,11,12,13,14,15,    0,0,0,0,1)
DECL_C_PROC_p3 (16,17,18,19,20,21,22,23,  0,0,0,1,0)
DECL_C_PROC_p3 (24,25,26,27,28,29,30,31,  0,0,0,1,1)
DECL_C_PROC_p3 (32,33,34,35,36,37,38,39,  0,0,1,0,0)
DECL_C_PROC_p3 (40,41,42,43,44,45,46,47,  0,0,1,0,1)
DECL_C_PROC_p3 (48,49,50,51,52,53,54,55,  0,0,1,1,0)
DECL_C_PROC_p3 (56,57,58,59,60,61,62,63,  0,0,1,1,1)
DECL_C_PROC_p1 (64,65,  0,1,0,0,0,0,0)
DECL_C_PROC_p0 (66,  0,1,0,0,0,0,1,0)
DECL_C_PROC_p0 (67,  0,1,0,0,0,0,1,1)
DECL_C_PROC_p2 (68,69,70,71,  0,1,0,0,0,1)
DECL_C_PROC_p3 (72,73,74,75,76,77,78,79,  0,1,0,0,1)
DECL_C_PROC_p3 (80,81,82,83,84,85,86,87,  0,1,0,1,0)
DECL_C_PROC_p3 (88,89,90,91,92,93,94,95,  0,1,0,1,1)
DECL_C_PROC_p3 (96,97,98,99,100,101,102,103,  0,1,1,0,0)
DECL_C_PROC_p3 (104,105,106,107,108,109,110,111,  0,1,1,0,1)
DECL_C_PROC_p3 (112,113,114,115,116,117,118,119,  0,1,1,1,0)
DECL_C_PROC_p3 (120,121,122,123,124,125,126,127,  0,1,1,1,1)
DECL_C_PROC_p0 (128,  1,0,0,0,0,0,0,0)

#endif /* RUNTIME_TYPES_H */
