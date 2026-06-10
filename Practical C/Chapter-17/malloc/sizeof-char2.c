#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate space for 4 integers
    int *data = malloc(4 * sizeof(int));
    if (!data) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    printf("data before realloc: %lu\n", (void*)data);
    
    // Calculate new size for 8 integers
    size_t new_size = 8 * sizeof(int);
    
    // Actually call realloc
    int *temp = realloc(data, new_size);
    if (!temp) {
        printf("Reallocation failed!\n");
        free(data);
        return 1;
    }
    data = temp;
    
    printf("data after realloc: %lu\n", (void*)data);
    
    // Don't forget to free the memory
    free(data);
    
    return 0;
}
