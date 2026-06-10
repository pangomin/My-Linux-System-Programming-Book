#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct linked_list {
    struct linked_list *next_ptr;
    char *data;
};

struct linked_list *first_ptr = NULL;

/********************************************************
 * find -- Looks for a data item in the list.
 *
 * Parameters
 *      name -- Name to look for in the list
 * Returns
 *          0 if name is found
 *          1 if name is not found
 ********************************************************/
int find(char *name) {
    struct linked_list *current_ptr = first_ptr;

    while (current_ptr != NULL) {
        if (strcmp(current_ptr->data, name) == 0) {
            return 0; // Found
        }
        current_ptr = current_ptr->next_ptr;
    }

    return 1; // Not found
}

int main() {
    struct linked_list *node0, *node1;

    // Allocate memory for the nodes
    node0 = (struct linked_list *)malloc(sizeof(struct linked_list));
    node1 = (struct linked_list *)malloc(sizeof(struct linked_list));

    if (node0 == NULL || node1 == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        return 1;
    }

    // Allocate memory for the data strings
    char *ali_data = (char *)malloc(4 * sizeof(char)); // Allocate enough for "Ali\0"
    char *hassan_data = (char *)malloc(7 * sizeof(char));

    if (ali_data == NULL || hassan_data == NULL) {
        fprintf(stderr, "Memory allocation failed!\n");
        free(node0);  // Clean up previously allocated memory
        free(node1);
        return 1;
    }


    strcpy(ali_data, "Ali");
    strcpy(hassan_data, "Hassan");

    // Assign data to the nodes
    node0->data = ali_data;
    node1->data = hassan_data;

    // Link the nodes
    node0->next_ptr = node1;
    node1->next_ptr = NULL;  // Important: Terminate the list

    // Set the head of the list
    first_ptr = node0;

    char name[] = "Ali";

    if (find(name) == 0) {
        printf("Found %s in the list.\n", name);
    } else {
        printf("%s not found in the list.\n", name);
    }


    // Free the allocated memory
    free(ali_data);
    free(hassan_data);
    free(node0);
    free(node1);

    return 0;
}
