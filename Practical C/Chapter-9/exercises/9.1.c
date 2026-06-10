#include <stdio.h>
#include <string.h>

char line[1000];
int counter;
int main() {
	printf("Enter a string: ");
	fgets(line, sizeof(line), stdin);
	for(counter = 0; stdin == ' '; ++counter);

	printf("TOTAL: %d\n", counter);
	return (0);
}
