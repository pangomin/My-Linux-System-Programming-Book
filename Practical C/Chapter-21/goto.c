#include <stdio.h>
#include <stdlib.h>

#define X_LIMIT 10
#define Y_LIMIT 20

int main() {
    int x, y;
    int data[X_LIMIT][Y_LIMIT];
    data[x][y] = data[x][y];
        for (x = 0; x < X_LIMIT; x++) {
            for (y = 0; y < Y_LIMIT; y++) {
                if (data[x][y] == 0)
                    goto found;
        }
    }
    printf("Not found\n");
    exit(8);

found:
    printf("Found at (%d, %d)\n", x, y);
}
