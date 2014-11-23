#ifndef CHICKEN_COMMON_H
#define CHICKEN_COMMON_H

#ifdef HAVE_CHICKEN_CONFIG_H
# include <config.h>
#endif

#include <definitions.h>
#include <types.h>
#include <macros.h>

#define container_of(ptr, type, member) \
    ((type *) ((char *) (ptr) - offsetof(type, member)))

#endif /* CHICKEN_COMMON_H */
