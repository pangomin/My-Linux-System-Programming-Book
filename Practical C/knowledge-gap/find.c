#include <stdio.h>
#include <string.h>

int main() {
    struct linked_list {
        struct linked_list *next_ptr;
        char *data;
    } linked_listVar;
    struct linked_list *first_ptr;
    char name[] = "NAME";
    linked_listVar->data = &name[];
    printf("data: %s\n", linked_listVar->*data);
}
