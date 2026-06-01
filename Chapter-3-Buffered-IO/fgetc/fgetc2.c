#include <stdio.h>

// Reads a line from stream into str, up to n-1 characters.
// Stops at newline (does NOT store it) or EOF.
// Returns str on success, NULL on error or EOF.
char *my_fgets(char *str, int n, FILE *stream) {
    char *s = str;
    int c;
	printf("n:%d\n", n);
    while (--n > 0 && (c = fgetc(stream)) != EOF) {

	printf("n:%d\n", n);
        if (c == '\n') {
            break;  // Stop at newline, but don't store it
        }
		printf("s:%p\n", s);
        *s++ = c;
    }

    *s = '\0';  // Null-terminate the string

    // Return NULL if nothing was read
    if (s == str && c == EOF) {
        return NULL;
    }
    return str;
}

// Example usage:
int main() {
    char buffer[100];

    printf("Enter a line of text: ");
    my_fgets(buffer, 10, stdin);

    printf("You entered (without newline): '%s'\n", buffer);

    return 0;
}
