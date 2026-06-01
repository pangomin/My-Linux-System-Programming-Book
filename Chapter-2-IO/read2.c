#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

int main() {

	int fd;		// File descriptor
	fd = open("ToRead.txt", O_RDONLY);
	char buf[BUFSIZ];
	ssize_t nr; // Size of lines red

start:
	nr = read(fd, buf, BUFSIZ);
	if (nr == -1) {
		perror("Error");
	}
	/* If the system call is interrupted,
	 * go to start again,
	 * which may cause a little overhead*/
	if (errno == EINTR) {
	    	goto start;
	}
	if (errno == EAGAIN) {
		return EINTR;
	} else {
		return -1;
	}
}
