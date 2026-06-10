#include <stdio.h>

int main(void)
{
    char filename[40];
    int file_number = 0;
    FILE *out_file;
    while(file_number < 10) {
        sprintf(filename, "file.%d", file_number);
        ++file_number;
    
    out_file = fopen(filename, "w");
    
    if (out_file == NULL) {
        perror("fopen");
        return 1;
    }

    fclose(out_file);
    }
    return 0;
}

