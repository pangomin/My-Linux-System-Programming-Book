#include <stdio.h>
#include <stdlib.h>
int main() {
    int *a = malloc(3*sizeof(int));
    a[0] = 0;
    printf("a: %d\n", a[0]);
}
