/*  Mistake maker program. It prints floating-point using %d
	Prints an integer using %f
	Prints a chatacter using %d
*/
#include <stdio.h>

int main()
{
	float f; // print using %d
	int i;	 // print using %f
	char c;   // pring using %d
	f = 1.2; i = 1; c = 'A';
	printf(" float: %d\n int: %f\n char: %d\n", f, i, c);
	return (0);
}
