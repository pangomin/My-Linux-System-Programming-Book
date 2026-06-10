#include <stdio.h>

int main() {
    int x = 20;
    int *x_p = &x;
    int *y_p;
    y_p = x_p;
    printf("%p\n %d\n", y_p, *y_p);
}
