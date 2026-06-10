#include <stdio.h>
#include <stdlib.h>
int main() {
    char line[10];
    while (1) {
    printf("Enter add(a), delete(d), quit(q): ");
    fgets(line, sizeof(line), stdin);
switch (line[0]) {
case 'a':
printf("Add\n");
break;
case 'd':
printf("Delete\n");
break;
case 'q':
printf("Quit\n");
exit(0);
default:
printf("Error:Bad command %c\n", line[0]);
break;
} goto def;
def:
printf("def\n");
}
}
