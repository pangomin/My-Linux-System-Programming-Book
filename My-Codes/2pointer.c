#include <stdio.h>
int main()
{
	int i = 4;
	int *i_p;

	printf("i = %d\n", i);
	i_p = &i;
	*i_p = 2;

	printf("i = %d\n", i);

	return (0);
}
