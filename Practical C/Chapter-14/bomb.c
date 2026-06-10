#include <stdlib.h>
#include <unistd.h>

int main()
{
        (void)calloc(5e9, sizeof(char));
        sleep(1000);
}

