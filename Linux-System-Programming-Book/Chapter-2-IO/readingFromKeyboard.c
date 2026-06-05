#include <unistd.h>
#include <stdio.h>

int main() {
    char buffer[100];
    ssize_t bytes_read;

    printf("Type something:\n");

    bytes_read = read(0, buffer, sizeof(buffer) - 1);

    if (bytes_read > 0) {
        buffer[bytes_read] = '\0';
        printf("you typed: %s\n", buffer);
    } else if (bytes_read == 0) {
            printf("No data\n");
    } else {
        perror("Read error");
    }
    return 0;
    }
