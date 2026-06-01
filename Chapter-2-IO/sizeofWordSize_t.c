#include <stdio.h>

int main(void) {
	unsigned long word = 1720;
	size_t count;
	ssize_t nr;
	count = sizeof (word);

	printf("count: %lu\n", count);
}
