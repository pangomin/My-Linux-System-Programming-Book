#include <stdio.h>
const char FILE_NAME[] = "in_file.txt";
#include <string.h>
#include <stdlib.h>

int main() {
    int count; // loop counter
    for(count = 0; count < 100; ++count) {
    FILE *in_file; // input file
    in_file = fopen(FILE_NAME, "w");
    fputs("This is a string", in_file);
    }
    return(0);
}
