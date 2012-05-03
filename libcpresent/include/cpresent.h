#if !defined(_CPRESENT_H)
#define _CPRESENT_H

#define EXPORTED_SYM __attribute__((visibility("default")))

#include "slide.h"

typedef struct _cpresent {
    char *name;
    char *filename;

    SLIDE *slides;
} CPRESENT;

CPRESENT *InitPresentation(void);

#endif
