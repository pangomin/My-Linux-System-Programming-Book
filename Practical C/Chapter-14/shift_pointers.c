#include <stdio.h>

int main()
{
    int m = 1;
    int *m_p = &m;
    int count = 1;
    printf("%p\n", m_p);
    
    count << m_p;
    printf("%p\n", m_p);
    return(0);
}
