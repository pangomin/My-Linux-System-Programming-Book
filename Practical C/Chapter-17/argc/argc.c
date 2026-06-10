#include <stdio.h>
#include <string.h>  // For strlen()

int main(int argc, char *argv[]) {
    printf("argc: %d\n", argc);

    for(int i = 0; i < argc; i++) {
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    printf("argv[argc] = %p (should be NULL)\n", (void*)argv[argc]);

    // Check if we have enough arguments before accessing argv[1]
    if(argc > 1 && argv[1][0] == '-') {
        // ISSUE 1: Should check argv[1][1] not argv[2][1]
        // We want the character after '-' in the FIRST argument
        char option = argv[1][1];
        
        switch(option) {
            case 'v':
                printf("you used -v\n");
                break;
            case '\0':  // This happens with just "-" (no option letter)
                fprintf(stderr, "Error: Usage is %s <-v>\n", argv[0]);
                return 1;  // Exit with error
            default:
                fprintf(stderr, "Error: Unknown option -%c\n", option);
                fprintf(stderr, "Usage: %s <-v>\n", argv[0]);
                return 1;
        }
    } else if(argc > 1) {
        fprintf(stderr, "Error: First argument should start with '-'\n");
        fprintf(stderr, "Usage: %s <-v>\n", argv[0]);
        return 1;
    }

    return 0;
}
