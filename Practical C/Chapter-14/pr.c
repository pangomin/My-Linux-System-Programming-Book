#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    int *array_p = array;

    printf("array_p + 1: %d\n", *(array_p + 1));

    for(int i = 0; i < 5; ++i) {
        printf("array_p:%d\n *array_p:%p\n", array_p - array, *array_p);
        array_p = array_p + 1;
    }
    return (0);
}
