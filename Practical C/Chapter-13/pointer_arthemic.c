#include <stdio.h>

int main()
{
    int count;
    int my[10];
    int *my_ptr = my;
    
    for(count = 0; count < 10; ++count) {
       my_ptr = my[0];
       //  ++my_ptr;
    printf("*my_ptr: %p\n my_ptr: %d\n", my_ptr, my_ptr - my);
    }
    return(0);
}
