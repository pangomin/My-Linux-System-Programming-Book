#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void) {
	int read;
	char line[100];
	while (1) {
	if ((read = read(stdin)) < 10) {
		fgets(line, sizeof(line), stdin);
	} else {
		fprintf(stderr, "beyond the limits!");
			break;
	}
  }
	return 0;
}
