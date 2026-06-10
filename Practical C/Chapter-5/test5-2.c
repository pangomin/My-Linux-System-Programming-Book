/* A program to calculate the volume of a sphere */
/* Steps:
 1. A constant for PI (3.1415927)
 2. get r and do 4/3r^3
 3. print the result*/

#include <stdio.h>

char line[100];				// Input number
const float PI = 3.1415927; //PI constant
float radius, result;		// Sphere radius and result

int main()
{
	/* Getting input */
	printf("Enter the radius: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &radius); /* convert input type to float */

	/* Expression stage */
	result = 4.0/3.0 * PI * (radius * radius * radius);
	printf("the volume is: %f", result);

	return (0);
}
