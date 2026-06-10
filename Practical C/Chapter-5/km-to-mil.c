/* Kilomiters to miles_miles = kilomiter*0.6213712*/
#include <stdio.h>

char line[100];			// input
float kilomiter, mile; //  declaring km and mile vars

int main()
{
	printf("Kilomiter: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &kilomiter);

	mile = kilomiter * 0.6213712;
	printf("%f kilomiters = %f miles\n", kilomiter, mile);

	return (0);
}
