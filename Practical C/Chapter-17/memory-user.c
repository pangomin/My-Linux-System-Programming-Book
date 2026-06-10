#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <memory_in_megabytes>\n", argv[0]);
        return 1;
    }

    // Print argv[1] to see what was passed
    printf("Requested memory: %s MB\n", argv[1]);
    
    // Convert to integer after printing
    int MEMORY_USER = atoi(argv[1]);
    
    // Define ARRAY_SIZE based on converted value
    #define ARRAY_SIZE ((MEMORY_USER * 1024 * 1024) * 2) // Allocate double the requested memory
    
    void *array = malloc(ARRAY_SIZE);
    if (array == NULL) {
        perror("Failed to allocate memory");
        return 1;
    }

    printf("Allocated %d MB of memory\n", MEMORY_USER * 2);
    
    time_t start_time = time(NULL);
    time_t end_time = start_time + (time_t)(10.0 * 60.0); // Run for 10 minutes

    while (time(NULL) < end_time) {
        for (size_t i = 0; i < ARRAY_SIZE; ++i) {
            ((int *)array)[i] = ((int *)array)[i] + 1; // Touch each entry
        }
    }

    free(array);
    printf("Memory stream finished.\n");
    return 0;
}
