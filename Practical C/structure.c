#include <stdio.h>

int main()
{
    struct link {
    int a;
    } var = {
    2
    };
    int as = link.a + 2;
    printf("a: %d\n", as);

    return(0);
}
