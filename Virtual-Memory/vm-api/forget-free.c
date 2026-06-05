#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int *p = malloc(4000*sizeof(int));
    for(int i = 0; i > 4000; ++i) {
    p[i] = 1;
  }
    printf("\n");
    
    return 0;
}
