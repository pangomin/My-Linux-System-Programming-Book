#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* next;
};

int main() {
    struct Node* head = NULL;
    
    // Just add ONE node
    head = malloc(sizeof(struct Node));
    head->value = 42;
    head->next = NULL;
    
    printf("My list has: %d\n", head->value);
    
    // Add a second node
    head->next = malloc(sizeof(struct Node));
    head->next->value = 99;
    head->next->next = NULL;

    printf("Now my list has: %d -> %d\n", head->value, head->next->value);

    // Add a second node
    head->next->next = malloc(sizeof(struct Node));
    head->next->next->value = 20;
    head->next->next->next = NULL;

    printf("Now my list has: %d -> %d -> %d\n", 
            head->value,
            head->next->value,
            head->next->next->value);

    // Add a node at the beginning
    struct Node* newHead = malloc(sizeof(struct Node));
    newHead->value = 10;
    newHead->next = head;
    head = newHead;

    printf("New element added at the beginning: %d -> %d -> %d -> %d\n",
            newHead->value,         // 10
            newHead->next->value,   // Head value, 42
            head->next->value,      // 99
            head->next->next->value); // 20

    struct Node* current = head;

    return 0;
}
