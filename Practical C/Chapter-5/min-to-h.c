/* Minutes to hours
Steps:
1. Get input
2. devide input to 60
3. multipy output to 60 and - input */
#include <stdio.h>

char line[100];						 //input, minutes
int input_min, hour, devided; // vars

int main()
{
	printf("Enter minuts: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &input_min);

	hour = input_min / 60;
	devided = input_min - (hour * 60);
	printf("%d minutes = %d hour %d minutes", input_min, hour, devided);

	return (0);
}
