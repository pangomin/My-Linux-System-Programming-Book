#include <stdio.h>
#include <sys/types.h>

int main()
{
    int bar = 12221112;
    size_t foo = (size_t)&bar;
    printf("%lx\n%p\n%d\n", foo, &bar, *(int*)foo);
}
