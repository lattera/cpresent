#if !defined(_SLIDE_H)
#define _SLIDE_H

typedef enum _slide_data_type { NONE=0, BULLET=1, TEXT=2 } SLIDE_DATA_TYPE;

typedef struct _slide_data {
    SLIDE_DATA_TYPE type;
    char *data;

    struct _slide_data *next;
} SLIDE_DATA;

typedef struct _slide {
    SLIDE_DATA *data;

    struct _slide *next;
} SLIDE;

#endif
