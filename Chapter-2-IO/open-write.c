/********
 * Creates specified file. If it exists, replaces the entire content
 * with the user-provided input
 * Parameters:
 *    filename - /PATH/OF/filename to write to
 ********/
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#define MAX_INPUT 3

int main(void)
{
	char line[MAX_INPUT];
	char file_name[2];
	int fd;
	ssize_t nbytes;
	char *ptr = line;
	int remaining;

  printf("Enter file name: ");
  if (!(fgets(file_name, sizeof(file_name), stdin))) {
    // FIXME: missing newline? use fprintf(stderr, ...) instead.
    fprintf(stderr, "Fail to read the input stream");
    // NOTE: fgets()  returns s on success, and NULL on error or **when end of file oc‐
                // curs while no characters have been read.**
  } else if (file_name > 0) {
    file_name[strcspn(file_name, "\n")] = '\0';
  }

  // FIXME: If fgets() fails, file_name is still used uninitialized.
	if (file_name > 0) {
  fd = open(file_name, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	} else {
		goto cleanup;
	}

  // FIXME: Prefer to return early with if (fd == -1) instead of wrapping
  // the rest of the function in if (fd != -1).
  if (fd == -1) {
		goto cleanup;
	}
		else {
    printf("Enter the input you want to be written:\n ");
		}
    // FIXME: error handling?
    if (!(fgets(line, sizeof(line), stdin))) {
			fprintf(stderr, "Fail to read the input stream");
		}

    // FIXME: write() *may* return a shorter nbytes; this loop doesn't handle partial writes or
    // advance the buffer.
    // FIXME: strlen(line) is getting called each iteration.
    // FIXME: nbytes is assigned the result of (write(...) != 0). (operator order)
	while ((nbytes = write(fd, line, strlen(line))) != 0) {
		remaining = strlen(line);
		ptr += nbytes;
      if (nbytes == -1) {
          goto cleanup;
        if (errno == EINTR) {
          continue;
        }
        // FIXME: 'else' is unnecessary; keep the body, remove else.
          // FIXME: break is unreachable after goto
      }
    }


// FIXME: horrible name; what failed? what does this cleanup? add more labels if necessary (to close fd)
// FIXME: print_error runs even on success.
	return 0;
cleanup:
  perror("error");
}
