#include <stdio.h>

int main(void) {
    FILE *file;
    file = fopen("file", "r");
    int c;
    c = fgetc(file);
    printf("c=%c\n", (char) c);
	ungetc(c, file);
	printf("c=%c\n", (char) c);
	return 0;
}
