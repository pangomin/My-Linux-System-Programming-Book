#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define MAX_INPUT 1000
#define FILE_NAME 100

int main(int argc, char* argv[])
{
	if ((argc != 2) && (argv [1][1] != 'a' || 't')) {
		printf("Usage: %s -a[APPEND MODE] or -t[TRUNC MODE]", argv[0]);
		return 1;
	}
	char line[MAX_INPUT];
	char file_name[FILE_NAME];
	int fd;			// File descriptor
	ssize_t nbytes;	// number of bytes written

	// taking file name
	printf("Enter file name: ");
	if (fgets(file_name, sizeof(file_name), stdin) == NULL) {
	    fprintf(stderr, "\nError: Fail to read the input");
		return 1;
	} else {
		file_name[strcspn(file_name, "\n")] = '\0';
		/* clear the buffer (for very limited buffer)
		int c;
		while((c = getchar()) != '\n' && c != EOF)
		// discard ; */
	}
	/******************** TO DO ***************************
	else {
		fprintf(stderr, "Error: File name is too big");
	}
	******************************************************/

		// open the file
	if (argc > 1 && argv[1][0] == '-') {
		char option = argv[1][1];
		switch (option) {
			case 'a':
		fd = open(file_name, O_WRONLY | O_CREAT | O_APPEND, 0664);
			break;

			case 't':
		fd = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, 0664);
			break;

			default:
		fd = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	}
}
		if (fd == -1) {
		goto clean_up;
	} else {
		printf("Enter the input:\n");
	}
	if (fgets(line, sizeof(line), stdin) == NULL) {
		fprintf(stderr, "Error: Fail to read the input stream");
		close (fd);
		return 1;
	}
	// pointer to where the write loop should start again
	char* line_ptr = line;
	// remaining bytes to be written
	ssize_t remaining = strlen(line);

	while (remaining > 0) {
		nbytes = write(fd, line_ptr, remaining);
		if (nbytes == -1) {
			if (errno == EINTR) {
				continue;
			}
				goto clean_up;
		}
		line_ptr += nbytes;
		remaining -= nbytes;
	}
	close(fd);
	return 0;
clean_up:
	perror("Error");
}
