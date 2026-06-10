#include <stdio.h>

int main()
{
    int arr[3] = {10, 20, 30};
    printf("arr[3]: %d\n", arr[3]);
    int *ptr = arr;        // Points to 10
    int *end = &arr[2];    // Points just past the 30 (the boundary)

    while (ptr < end) {
        printf("end: %d\n", end - arr);
        ++ptr;             // Move to the next element
        printf(" ptr_d: %d\n ptr_p: %p\n ", *ptr, ptr);
    }
}
