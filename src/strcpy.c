#include "stringlib.h"

char *my_strcpy(char *dest, const char *src) {
    size_t pos = 0;
    while ((dest[pos++] = src[pos]) != '\0')
        ;
    return dest;
}
