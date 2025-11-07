#include "../include/stringlib.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>

int main () {
    char temp[20];
    assert(strcmp(my_strcpy(temp, "Dylan"), "Dylan") == 0);
    printf("Everything looks good!\n");
    return 0;
}

