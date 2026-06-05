#include <stdio.h>

int main(void) {
	int *a;
	int c = 10;
	*a++ = c;
	printf("a: %p, b: %d", a, c);
}
