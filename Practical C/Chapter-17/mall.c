#include <stdio.h>
#include <stdlib.h>

int main() {
    int *a = malloc(3*sizeof(int));
    a[0] = 33;
    a[1] = 66;
    a[2] = 99;
    
    printf("&a[0]: %lu\n", &a[0]);
    printf("&a[1]: %lu\n", &a[1]);
    printf("&a[2]: %lu\n", &a[2]);

    return (0);
}
