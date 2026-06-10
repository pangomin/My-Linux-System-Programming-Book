#include <stdio.h>

int main() {
    int my[10];
    int *my_p;
    my_p = my;
    printf("%d", my_p - my);

    return(0);
}
