#include "count.c"
#include <stdio.h>
/* Number of times through the loop */
extern int counter;

/* Routine to increament the counter */
extern void inc_counter(void);

int main() {
    int index; // Loop index

    for (index = 0; index < 100; ++index) {
        inc_counter();
    printf("Counter is %d\n", counter);
    }

    return (0);
}
