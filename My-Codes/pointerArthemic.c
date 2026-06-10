#include <stdio.h>

const int array[] = {4, 5, 8, 9, 8, 1, 0, 1, 9, 3};
int *array_ptr;
int sum = 0;

int main()
{
    array_ptr = array;
    while ((*array_ptr) != 0) {
        ++array_ptr;
        ++sum;
    }
    printf("Number of elements before zero %d\n", sum);
return (0);
}
