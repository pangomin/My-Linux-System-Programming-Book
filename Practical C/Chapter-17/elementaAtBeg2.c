#include <stdio.h>
#include <stdlib.h>

// Structure for a node in linked list
struct Node {
    int data;           // Actual data stored
    struct Node* next;  // Pointer to next node
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Function to insert node at beginning
void insertAtBeginning(struct Node** head, int value) {
    // Create new node
    struct Node* newNode = createNode(value);

    // New node points to old first node
    newNode->next = *head;

    // Head now points to new node
    *head = newNode;
}

// Function to display the list
void displayList(struct Node* head) {
    struct Node* current = head;
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

// Function to visualize memory layout
void visualizeMemory(struct Node* head) {
    printf("\n=== Memory Visualization ===\n");
    struct Node* current = head;
    int address_counter = 1000; // Simulated memory addresses

    while (current != NULL) {
        printf("Memory Chunk at address %d:\n", address_counter);
        printf("  [Data: %d | Next: ", current->data);

        if (current->next != NULL) {
            printf("%d (points to next chunk)]\n", address_counter + 10);
        } else {
            printf("NULL (end of list)]\n");
        }

        printf("  |\n");
        printf("  v\n");

        current = current->next;
        address_counter += 10;
    }
    printf("NULL (end of list)\n");
}

// Main function
int main() {
    struct Node* head = NULL; // Start with empty list

    printf("=== Linked List Insertion Demo ===\n\n");

    // Create initial list: 10 -> 20 -> 30
    printf("1. Creating initial list with values 10, 20, 30\n");
    insertAtBeginning(&head, 30);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 10);

    displayList(head);
    visualizeMemory(head);

    printf("\n2. Inserting new element 5 at the beginning\n");
    printf("   Steps:\n");
    printf("   a. Create new node with data=5\n");
    printf("   b. New node's next points to current head (node with 10)\n");
    printf("   c. Head now points to new node (node with 5)\n");

    insertAtBeginning(&head, 5);

    displayList(head);
    visualizeMemory(head);

    printf("\n3. Inserting another element 1 at the beginning\n");
    insertAtBeginning(&head, 1);

    displayList(head);
    visualizeMemory(head);

    // Free allocated memory
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
