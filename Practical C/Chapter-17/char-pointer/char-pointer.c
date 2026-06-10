#include <stdio.h>

int main() {
    char *data_p = "Ali";
    char  data[] = "Ali";

    size_t size = sizeof(data_p);

    printf("data_p: %s\ndata: %s\n", data_p, data);
    printf("size of data_p: %zu\n", size);
    printf("data_p address: %lu\n", data_p);

    return (0);
}
