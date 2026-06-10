#include <stdio.h>

#define NALL(type) (type*)0

int main(void) {
	int *a = NALL(int);
	printf("%d", a);
}
