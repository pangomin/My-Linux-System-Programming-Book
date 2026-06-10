#include <stdio.h>

void changeNumber(int* numPtr) {  // Takes an ADDRESS
    *numPtr = 99;  // Changes the value at that address
    printf("Inside: Changing value at address %p to %d\n", numPtr, *numPtr);
}

int main() {
    int x = 10;
    printf("Before: x = %d (at address %p)\n", x, &x);
    
    changeNumber(&x);  // Pass ADDRESS of x
    
    printf("After: x = %d\n", x);  // Now changed!
    
    // We can also get a pointer to x
    int* x_ptr = &x;
    printf("x_ptr points to address %p\n", x_ptr);
    printf("Value at that address: %d\n", *x_ptr);
    
    return 0;
}
