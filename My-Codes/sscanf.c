#include <stdio.h>

int main(void)
{
	double der = 10.0;
	int ger = 1;
	int mer = sscanf(der, "%d", &ger);
	printf("%d", mer);
}
