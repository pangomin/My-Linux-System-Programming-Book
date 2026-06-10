#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;  // Number of integers to store
    int *arr;

    // Allocate memory for n integers
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Fill the array using pointer arithmetic
    for (int i = 0; i < n; i++) {
        *(arr + i) = (i + 1) * 10;  // Equivalent to arr[i] = (i+1)*10;
    }

    // Print the array using pointer arithmetic
    printf("Array values:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}

