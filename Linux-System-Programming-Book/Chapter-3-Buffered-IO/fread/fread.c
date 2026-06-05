#include <stdio.h>

int main(void) {
	char buf[10];
	size_t nr;

	nr = fread(buf, sizeof(buf), 1, stdin);
	printf("%lu", nr);
	return 0;
}
