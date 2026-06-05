#include <stdio.h>

int main(void) {
	FILE *stream;
	stream = fopen("data", "w");
	fclose(stream);
	if(stream) {
		ferror(stream);
	}
	return 0;
}
