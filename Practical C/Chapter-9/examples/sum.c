#include <stdio.h>
int sum(int first, int last, int array[])
{
	if(first == last)
		return(array[first]);
	/* else */
	return(array[first]) + sum(first + 1, last, array);
}
int main() {
	printf("Sum: %d\n", sum(1 8 3 2));
	return(0);
}
