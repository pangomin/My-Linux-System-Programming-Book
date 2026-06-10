#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct linked_list {
    struct linked_list *next_ptr;  /* Next item in the list. */
    char *data;                     /* Data for the list */
};
struct linked_list *first_ptr;

// Function to create and return a new node
struct linked_list *create_node(char *data) {
    struct linked_list *new_node = malloc(sizeof(struct linked_list));

    if (new_node == NULL) {
        printf("Error: Failed to allocate memory for the node!\n");
        return NULL;
    }

    new_node->next_ptr = NULL;
    new_node->data = strdup(data); // strdup is used here to create a duplicate of the string

    return new_node;
}

// Function to add a node to the end of the list
void add_to_list(struct linked_list **head, char *data) {
    struct linked_list *current_ptr = *head;
    struct linked_list *new_node = create_node(data);

    if (*head == NULL) { // List is empty
        *head = new_node;
        return;
    }

    while (current_ptr->next_ptr != NULL) {
        current_ptr = current_ptr->next_ptr;
    }

    current_ptr->next_ptr = new_node;
}

// Function to print all elements in the list
void print_list(struct linked_list *current_ptr) {
    if (current_ptr == NULL) {
        printf("List is empty.\n");
        return;
    }

    while (current_ptr != NULL) {
        printf("%s -> ", current_ptr->data);
        current_ptr = current_ptr->next_ptr;
    }
    printf("\n");
}

// Function to find a node in the list by name
int find(char *name) {
    struct linked_list *current_ptr = first_ptr;

    while ((strcmp(current_ptr->data, name) != 0) && (current_ptr != NULL)) {
        current_ptr = current_ptr->next_ptr;
    }

    return (current_ptr != NULL);
}

int main() {
    // Initialize the first pointer to NULL
    first_ptr = NULL;

    // Add nodes to the list
    add_to_list(&first_ptr, "Alice");
    add_to_list(&first_ptr, "Bob");
    add_to_list(&first_ptr, "Charlie");

    // Print all elements in the list
    printf("List contents:\n");
    print_list(first_ptr);

    // Test find function
    char *test_name = "Bob";
    if (find(test_name)) {
        printf("%s found in the list.\n", test_name);
    } else {
        printf("%s not found in the list.\n", test_name);
    }

    // Clean up memory - note: in a real program, you would need to free all nodes
    struct linked_list *current_ptr = first_ptr;
    while (current_ptr != NULL) {
        struct linked_list *next_node = current_ptr->next_ptr;
        free(current_ptr->data); // Free the strdup allocated data
        free(current_ptr);
        current_ptr = next_node;
    }

    return 0;
}
