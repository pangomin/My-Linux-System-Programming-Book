#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    if (argc != 2 && argc > 2) {
        fprintf(stderr, "Usage: %s <memory_in_megabytes>\n",
                argv[0]);
        return 1;
    }
    printf("Requested memory: %s MB\n", argv[1]);

    // Convert string argv[1] to integer
    int requestedMemory = atoi(argv[1]);
    
    // Define ARRAY_SIZE based on requestedMemory
#define ARRAY_SIZE (requestedMemory * 1024 * 1024)
while (1) {
    void *array = malloc(ARRAY_SIZE);
    if (array == NULL) {
        fprintf(stderr, "Failed to allocate memory, NULL.");
        return 1;
    }
} 
    time_t start_time = time(NULL);
    time_t end_time = start_time + (time_t)(1.0 * 60.0);
/*
    while (start_time < end_time) {
        for (size_t i = 0; i < ARRAY_SIZE; ++i) {
            ((int*)array)[i] = ((int*)array)[i] + 1;
        }
    }
*/
    return 0;
}
