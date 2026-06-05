#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *str = "test";
    char *cpy = malloc(3* sizeof(char));
    strcpy(cpy, str);

    printf("%s", cpy);

    return 0;
}
