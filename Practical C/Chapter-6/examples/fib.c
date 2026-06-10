#include <stdio.h>
int old_number;			/* preveious Fibonacci number */
int current_number;		/* current Fib number */
int next_number;		/* next number in the series */

int main()
{
	old_number = 1;
	current_number = 1;

	printf("1\n");	/* Print first number */

	while (current_number < 100) {

		printf("%d\n", current_number);
		next_number = current_number + old_number;

		old_number = current_number;
		current_number = next_number;
	}
	return (0);
}
