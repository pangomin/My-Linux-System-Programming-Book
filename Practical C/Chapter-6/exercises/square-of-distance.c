/* We have two points. Use fgets to get them.
We need A and B. Each has two numbers to substract
one by one. Now we have distance.*/
#include <stdio.h>
#include <math.h>

char line[100];  						/* Input */
int c, xa, xb, ya, yb, distance, square;		/* Ponts */

int main()
{
	printf("Enter point a (x,y): ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d%d", &xa, &ya);

	printf("Enter point b (x,y): ");
	fgets(line, sizeof(line),stdin);
	sscanf(line, "%d%d", &xb, &yb);

	c = (xa - xb) * (xa - xb) + (ya - yb) * (ya - yb);
	c *= c;
	square = c * c;
	printf("Square of c = %d\n", square);

	distance = sqrt(square);
	printf("Distance = %d", distance);

	return (0);
}
