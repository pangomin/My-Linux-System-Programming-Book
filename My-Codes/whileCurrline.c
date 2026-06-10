#include <stdio.h>

int main(void) {
	int a;
	a = 10;
	while (a) {
		printf("%d\n", a);
		--a;
	}
	return 0;
}
