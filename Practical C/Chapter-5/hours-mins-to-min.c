/* Hours and minutes to minutes */
#include <stdio.h>

char line[100];		// input
int h, m, total_minutes;

int main()
{
	printf("Enter hours and minutes: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d%d", &h, &m);

	total_minutes = h * 60 + m;
	printf("%d hours and %d minutes = %d minutes", h, m, total_minutes);

	return (0);
}
