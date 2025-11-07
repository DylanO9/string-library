#include <stdio.h>
#include "stringlib.h"

size_t my_strlen(const char *s) {
    int n = 0;
    while (*s++ != '\0') n++;
    return n;
}
