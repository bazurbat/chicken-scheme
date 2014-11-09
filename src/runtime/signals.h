#ifndef RUNTIME_SIGNALS_H
#define RUNTIME_SIGNALS_H

#include "definitions.h"

#ifndef NSIG
#define NSIG 32
#endif

extern volatile C_TLS int serious_signal_occurred;
extern C_TLS int signal_mapping_table[ NSIG ];

void global_signal_handler(int signum);
C_fctexport C_word C_fcall C_establish_signal_handler(C_word signum, C_word reason) C_regparm;

#endif /* RUNTIME_SIGNALS_H */
