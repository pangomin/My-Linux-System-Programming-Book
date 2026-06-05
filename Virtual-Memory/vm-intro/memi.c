#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

#define NUM_THREADS 32  // Number of threads to use

typedef struct {
    int *array;         // Pointer to the shared array
    size_t start_idx;   // Starting index for this thread
    size_t end_idx;     // Ending index (exclusive) for this thread
    int thread_id;      // Thread ID
    time_t end_time;    // When to stop running
} thread_args_t;

// Thread function that accesses its portion of the array
void* memory_access_thread(void *arg) {
    thread_args_t *args = (thread_args_t *)arg;
    
    printf("Thread %d: Processing indices %zu to %zu\n", 
           args->thread_id, args->start_idx, args->end_idx - 1);
    
    while (time(NULL) < args->end_time) {
        for (size_t i = args->start_idx; i < args->end_idx; ++i) {
            // Touch each memory location in this thread's segment
            args->array[i] = args->array[i] + 1;
        }
    }
    
    printf("Thread %d: Finished\n", args->thread_id);
    return NULL;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <memory_in_megabytes>\n", argv[0]);
        return 1;
    }

    // Convert and calculate memory size
    long memory_user = atol(argv[1]);
    if (memory_user <= 0) {
        fprintf(stderr, "Memory size must be positive\n");
        return 1;
    }
    
    // Calculate total bytes and number of integers
    size_t total_bytes = memory_user * 1024 * 1024 * 2;
    size_t num_ints = total_bytes / sizeof(int);
    
    printf("Allocating %.2f MB (%zu integers)...\n", 
           total_bytes / (1024.0 * 1024.0), num_ints);
    
    // Allocate and initialize array
    int *array = malloc(num_ints * sizeof(int));
    if (array == NULL) {
        perror("Failed to allocate memory");
        return 1;
    }
    
    // Initialize array with zeros
    for (size_t i = 0; i < num_ints; ++i) {
        array[i] = 0;
    }
    
    // Set end time (10 minutes from now)
    time_t end_time = time(NULL) + (time_t)(10 * 60);
    printf("Running for 10 minutes (until %s)", ctime(&end_time));
    
    // Create threads
    pthread_t threads[NUM_THREADS];
    thread_args_t thread_args[NUM_THREADS];
    
    // Calculate chunk size for each thread
    size_t chunk_size = num_ints / NUM_THREADS;
    
    for (int i = 0; i < NUM_THREADS; ++i) {
        thread_args[i].array = array;
        thread_args[i].thread_id = i;
        thread_args[i].end_time = end_time;
        
        // Set start and end indices for this thread
        thread_args[i].start_idx = i * chunk_size;
        
        // Last thread gets any remainder
        if (i == NUM_THREADS - 1) {
            thread_args[i].end_idx = num_ints;
        } else {
            thread_args[i].end_idx = (i + 1) * chunk_size;
        }
        
        // Create thread
        int rc = pthread_create(&threads[i], NULL, 
                                memory_access_thread, &thread_args[i]);
        if (rc != 0) {
            fprintf(stderr, "Error creating thread %d: %s\n", 
                    i, strerror(rc));
            // Clean up and exit
            for (int j = 0; j < i; ++j) {
                pthread_cancel(threads[j]);
            }
            free(array);
            return 1;
        }
    }
    
    // Wait for all threads to complete
    for (int i = 0; i < NUM_THREADS; ++i) {
        pthread_join(threads[i], NULL);
    }
    
    // Verify memory was accessed
    long long total_sum = 0;
    for (size_t i = 0; i < num_ints && i < 100; ++i) {
        total_sum += array[i];
    }
    printf("Sample sum (first 100 elements): %lld\n", total_sum);
    
    free(array);
    printf("Memory stream finished with %d threads.\n", NUM_THREADS);
    return 0;
}
