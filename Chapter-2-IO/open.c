#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
	int fd;

	if (argc != 2) {
		printf("Usage: %s <filename>", argv[0]);
	} else {
		fd = open(argv[2], O_TRUNC);
		close(fd);
	}
	return 0;
}
