#include <string.h>
#include <stdio.h>

char first[100]; // First name
char last[100]; // Last name
char full_name[200]; // Full version of first and last name

int main()
{
	strcpy(first, "Steve");		/* Initialize first name */
	strcpy(last, "Oualline");   /* Initialize last name */

	strcpy(full_name, first); /* full = "Steve" */
	/* Note: strcat not strcpy */
	strcat(full_name, " ");   /* full = "Steve " */
	strcat(full_name, last);  /* full = "Steve Oualine" */

	printf("The full name is %s\n", full_name);
	return (0);
}
