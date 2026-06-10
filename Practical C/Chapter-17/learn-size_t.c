#include <stdio.h>

int main() {
    int x = 20;
    float y = 20.5;

    printf("size_t of y: %zu\n", size_t);
    
    // sizeof MEASURES and the RESULT is a size_t value
    size_t size_of_int = sizeof(x);  // Like: "4 teaspoons"
    
    // %zu is the format specifier for size_t
    printf("Size of x: %zu bytes\n", sizeof(x));  // Prints: Size of x: 4 bytes
    printf("Size stored: %zu\n", size_of_int);    // Prints: Size stored: 4
    
    // Let's trace through what happens:
    // 1. sizeof(x) is evaluated by the compiler
    // 2. It calculates: "int needs 4 bytes on this system"
    // 3. It produces the number 4
    // 4. This number 4 has type size_t
    
    return 0;
}
