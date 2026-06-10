#include <stdio.h>
#include <string.h>

int main()
{
    struct linked_list {
    struct linked_list *next_ptr;
    char *data;
    };
    struct linked_list *first_ptr;
    
    int find(char *name)
    {
    struct linked_list *current_ptr;
    while (strcmp(current_ptr->data, name) != 0) && (current_ptr != NULL))
        current_ptr = (*current_ptr)->next_ptr;
    return (current_ptr != NULL);
    }
}
