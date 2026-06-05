#include <stdio.h>

int main(void) {
    FILE *stream = fopen("data", "w+");
    fputc('f', stream);
    rewind(stream);  // Go back to beginning
    int c = fgetc(stream);
    printf("Read character: %c\n", c);
    fclose(stream);
    return 0;
}
