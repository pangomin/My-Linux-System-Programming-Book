/* convert centigrade to fahrenheit. F = 9/5c + 32 */
/* First, we need a variable to hold F. Using `fgets` we can take input.
Steps:
 1. Take the input
 2. do 9/5 * input + 32
 3. print the result*/
#include <stdio.h>
#include <string.h>

char line[100];
float celsius, fahrenheit;

int main()
{
	printf("Enter celsius: ");

	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &celsius);

	fahrenheit = 9.0 / 5.0 * celsius + 32;

	printf("%f celsius = %f fahrenheit", celsius, fahrenheit);

	return(0);
}

