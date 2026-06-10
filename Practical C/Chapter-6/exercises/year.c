#include <stdio.h>

char line[100];
int year;
int leap;

int main(){
	printf("Enter the year number: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &year);

	if ((year % 4) == 0) {
		leap = 1;
			printf("This is a leap yea!");
	}
	else if ((year % 4) != 0) {
		leap = 0;
			printf("This is not a leap year");
	}
}
