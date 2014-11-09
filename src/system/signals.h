#ifndef SYSTEM_SIGNALS_H
#define SYSTEM_SIGNALS_H

#include <runtime/definitions.h>

#ifndef NSIG
#define NSIG 32
#endif

extern volatile C_TLS int serious_signal_occurred;

extern C_TLS int signal_mapping_table[ NSIG ];

extern C_TLS int chicken_is_running;

void global_signal_handler(int signum);

C_fctexport C_word C_fcall C_establish_signal_handler(C_word signum, C_word reason) C_regparm;

#endif /* SYSTEM_SIGNALS_H */
