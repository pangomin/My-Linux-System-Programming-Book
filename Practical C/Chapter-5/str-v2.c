#include <string.h>
#include <stdio.h>

char name[30];	/* First name of someone */
int main()
{
	strcpy(name, "Sam");  /* Initialize the name */
	strcat(name, " Altman"); /* Put the last name at the end of name */
	printf("The name is %s\n", name);
	return (0);
}
