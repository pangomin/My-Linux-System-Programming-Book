#include <stdio.h>

int main(void) {
	FILE *stream;
	stream = fopen("data", "w");
	if (!stream) return 1;
	fputc('s', stream);

	if(fseeko(stream, 10ULL * 1024 * 1024* 1024 * 1024 * 1024, SEEK_END) != 0)
		perror("fseeko");
	fputc('\0', stream);
	unsigned long long pos = ftello(stream);
	printf("pos: %llu\n", pos);
	fgetpos(stream, 200);
	fclose(stream);

	return 0;
}
