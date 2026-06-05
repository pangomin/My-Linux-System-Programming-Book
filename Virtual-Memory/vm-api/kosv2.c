#include <stdio.h>
#include <stdlib.h>

char line[100];

int main(void)
{
    while (1) {
    char *p = malloc(60000000);

    for (int i = 0; i<60000000; ++i ) {
        p[i] = 1;
    }
  }

    return 0;
}

