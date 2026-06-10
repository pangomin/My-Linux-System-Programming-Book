#include <stdio.h>

struct test {
	char data[10];
};

void spacePointer(struct test pointer *, int nothing) {
	printf("%s\n", pointer)
};
int main(void) {
	struct test node1;
	node1.data[0] = "a";
	spacePointer(&node1, 0);
}
