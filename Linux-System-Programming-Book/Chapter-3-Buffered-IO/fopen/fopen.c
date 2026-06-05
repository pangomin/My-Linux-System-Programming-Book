#include <stdio.h>

int main(void) {
	FILE *pointer;
	pointer = fopen("test", "w");
	if (!pointer)
		return 1;
	printf("%lu\n", *pointer);
	return 0;
}
