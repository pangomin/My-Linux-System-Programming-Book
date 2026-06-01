#include <stdio.h>
#include <string.h>

int main(void) {
	FILE *stream;
	char string[100];
	size_t size;
	char *result;

	stream = fopen("data", "a");
	result = fgets(string, sizeof(string), stdin);
	size = strlen(string) - 1;
	fputs(result, stream);
	printf("sizeof string: %lu\nsize of fputs: %lu\n", sizeof(string), size);
	fclose(stream);

printf("All 100 bytes (including garbage):\n");
for (int i = 0; i < 100; i++) {
    if (string[i] == '\0')
        printf("\\0 ");
    else if (string[i] == '\n')
        printf("\\n ");
    else if (string[i] >= 32 && string[i] <= 126)
        printf("%c ", string[i]);  // Printable
    else
        printf("[%d] ", string[i]); // Garbage/unprintable
}
	return 0;
}
