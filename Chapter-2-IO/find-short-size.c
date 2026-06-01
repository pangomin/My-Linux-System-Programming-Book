#include <stdio.h>

int main(void) {
	short a;
	for (a = 0; a < 100000000; ++a) {
		printf("a: %d\n", a);
	}
}
