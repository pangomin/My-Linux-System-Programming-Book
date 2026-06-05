#include <stdio.h>

#define SEEK_LIM 20

int main(void) {
	FILE *stream;
	stream = fopen("data", "w");
	if(!stream) {
		return 1;
	}
	fputc('s', stream);

	if(fseek(stream, SEEK_LIM, SEEK_END) != 0) {
		perror("fseek");
	} else {
		fputc('\0', stream);
	}
	unsigned int fpos = ftell(stream);
	printf("Position: %lu\n", fpos);
	printf("Set position to (%d max): ", SEEK_LIM - 1);

	/* Using getchar for fun */
	for(int i = 0, ch; i < SEEK_LIM - 1 && (ch = getchar()) != '\n' && ch != EOF; ch = i) {
		fsetpos(stream, i);
		printf("New position: %lu\n", fpos);
	}
}
