/* Print perimeter of a rectangle */

#include <stdio.h>

char line[100];		  // get input
float width, height; //  w and h of the rectangle
float perimeter;

int main()
{
	printf("Enter width and height: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f %f", &width, &height);

	printf("Perimeter: %f", perimeter = 2 * (width + height));

	return(0);
}
