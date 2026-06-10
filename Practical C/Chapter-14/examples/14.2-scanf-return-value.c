#include <stdio.h>

char line[100];     /* Line from keyboard */
int count, total;   /* Number of entries and total value */
int scan_count;     /* Number of parameters scanned */

int main()
{
    fgets(line, sizeof(line), stdin);
    scan_count = sscanf(line, "%d %d", &count, &total);

    switch (scan_count) {
    case EOF:
    case 0:
        printf("Didn't find any number\n");
        break;
    case 1: printf("Found 'count'(%d), but not 'total'\n", count);
            break;
    case 2: printf("Found both 'count'(%d) and 'total'(%d)\n", count, total);
            break;
    default:
            printf("This should not be possible\n");
            break;
    }
    return(0);
}
