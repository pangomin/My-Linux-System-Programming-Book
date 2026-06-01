#include <stdio.h>

int main(void) {
    FILE *stream = fopen("data.bin", "wb");
    if (!stream) return 1;

    int buf[3] = {0};  // Initialize ALL elements to ZERO

    for (int i = 0; i < 3; ++i) {
        buf[i] = i + 1;      // Now this increments from 0 to 1, etc.
        printf("buf[%d] = %d, i = %d\n", i, buf[i], i);
    }

    fwrite(buf, sizeof(int), 3, stream);  // Write 3 integers, not 3*sizeof(buf)
    // or: fwrite(buf, sizeof(buf), 1, stream);

    fclose(stream);
    return 0;
}
