#include <stdio.h>
#include <stdlib.h>

int main() {
    int *data = malloc(4*sizeof(char));
    printf("data before multiplying: %lu\n", data);

    size_t size = sizeof(2*sizeof(char));

    void *realloc(void *data, size_t size);

    printf("data after multiplying by 4: %lu\n", data);

    return (0);
}
