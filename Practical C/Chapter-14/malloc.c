#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const long double DATA_SIZE = (2 * 1024);

int main()
{
    char line[10];
    char *data_ptr;
    while (1) {
    data_ptr = malloc(DATA_SIZE);
    free (data_ptr);
    }
}
