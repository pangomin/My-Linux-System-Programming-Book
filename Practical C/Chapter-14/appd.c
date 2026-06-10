#include <stdio.h>

int main()
{
    int a = 101;
    int *ap = &a;
    int **app = &ap;
    int *appd = *app;
    int appdd = *appd;

    printf("appdd: %d", appdd);

    return(0);
}
