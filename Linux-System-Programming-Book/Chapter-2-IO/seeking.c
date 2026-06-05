#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int main(void) {
	int fd, ret;

	fd = open("hole", O_RDWR | O_CREAT, 0664);
	ret = lseek(fd, (off_t) 9999999999, SEEK_END);
	if (ret == (off_t) -1) {
		perror("Seek");
	}
	return 0;
}
