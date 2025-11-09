#include "stringlib.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>

int main() {
    char temp[50] = "Hello";
    assert(strcmp(my_strcat(temp, " World"), "Hello World") == 0);
    printf("Everything looks good!\n");
    return 0;
}
