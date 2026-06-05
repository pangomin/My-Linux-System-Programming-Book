#include <stdio.h>

int main() {
    size_t size = 100;
    printf("size: %d\nsizeof size: %zu\n", size, sizeof(size));

    long double dildo = 200000.0;
    ssize_t doubleSize = dildo;
    printf("double: %.1Lf\nsizeof double: %zu\nDoubleSize: %zu\n", dildo, sizeof(dildo), doubleSize);

    return 0;
}
