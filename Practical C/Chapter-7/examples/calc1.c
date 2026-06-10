#include <stdio.h>

char line[100]; /* line of data from the input */
int result;		/* the result of the calculations */
char operator;	/* operator the user specified */
int value;		/* value specified after the operator */

int main()
{
	result = 0; /* initialize the result */

/* Loop forever (or till we hit the break statement) */
	while (1) {
		printf("Result: %d\n", result);
		printf("Enter operator and number: ");
		fgets(line, sizeof(line), stdin);
		sscanf(line, "%c %d", &operator, &value);

	if (operator == '+') {
		result += value;
	}
		else if (operator == '-') {
			result -= value;
		}
		else if (operator == '*') {
			result *= value;
		}
		else if (operator == '/') {
			if (value == 0) {
				printf("Error:Divide by zero\n");
				printf("	operation ignored\n");
			} else
			result /= value;
		}
		else if (operator == 'q') {
			break; }
		else {
			printf("Unknown operator %c\n", operator);
		}
	}
}
