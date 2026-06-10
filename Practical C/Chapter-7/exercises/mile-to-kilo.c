/* A program that converts miles to kilomiters and gallon to liters*/
#include <stdio.h>
#include <string.h>

char line[100];					  /* Take input */
float miles, kilomiters;		/* Defining Mile and Kilomiter variables */
float gallons, liters;  	   /* Defining galon and liter variabels */
char user_input;				  /* To see what type of units user needs */


int main()
{
	/* Get the value from user */
/* Take the input from user if user needs to convert gal or liters
 * or both*/
	printf("***\n This program converts miles to kilomiters or gallons to liters\n ***\n");
	while (1) {
		printf("What unit do you want to convert to metric? (m, g, or b for both): ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%d", &user_input);

		char line2[100]; /* Input for miles to kilo */
		if (user_input == 'm') {
			printf("Enter the distance: ");
			fgets(line2, sizeof(line2), stdin);
			sscanf(line2, "%f", miles);
			kilomiters = miles * 1.60934;	/* Convert miles to kilomiters */
		printf("%f Miles = f% Kilomiters", miles, kilomiters);

	}

	/* Expressions */
//	km = ml * 1.60934;	/* Convert miles to kilomiters */
//	printf("%f Miles = %f Kilomiters\n", ml, km);
//	lit = gal * 3.785;  /* Convert galons to liters */
//	printf ("%f Gallons = %f Liters\n", gal, lit);

	return (0);
}
