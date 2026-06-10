#include <stdio.h>
#include <string.h>

char *tmp_name(void)
{
    static char name[30];
    static int sequence = 0;

    ++sequence;
    
    strcpy(name, "tmp");
    

    name[3] = sequence + '0';
    name[4] = '\0';
    
}

int main()
{
    char *tmp_name(void);
    char *name1;
    char *name2;

    name1 = tmp_name();
    name2 = tmp_name();

    printf("Name1: %s\n", name1);
    printf("Name2: %s\n", name2);
    return(0);
}
