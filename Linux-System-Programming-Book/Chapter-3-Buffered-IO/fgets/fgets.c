#include <stdio.h>

#define LINE_MAX 20

int main(void) {
	FILE *stream;
	char buf[LINE_MAX];
	char *store;

	stream = fopen("test", "r");
	store = fgets(buf, LINE_MAX, stream);

	if (store == NULL) {
		// error
		;
	}
	printf("%s\n", store);
	return 0;

}
