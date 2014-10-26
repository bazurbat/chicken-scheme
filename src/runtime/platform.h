#ifndef _RUNTIME_PLATFORM_H_
#define _RUNTIME_PLATFORM_H_

#include "chicken.h"

static int is_64bit(void)
{
#ifdef C_SIXTY_FOUR
    return C_SCHEME_TRUE;
#else
    return C_SCHEME_FALSE;
#endif
}

#endif
