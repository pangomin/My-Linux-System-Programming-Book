#include <stdio.h>

int counter(void) {
    static int counter = 0;
    ++counter;
    printf("counter: %d\n", counter);
};

int main() {
    counter();
    counter();
    counter();

    return 0;
}
