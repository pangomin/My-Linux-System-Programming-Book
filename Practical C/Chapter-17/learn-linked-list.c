#include <stdio.h>

struct linkedList_t {
    struct linkedList_t *linkedList_p;
    int data;
};

int main() {
    struct linkedList_t node0;
    struct linkedList_t node1;
    struct linkedList_t node2;

    // Link the nodes together
    node0.linkedList_p = &node1;   // node0 points to node1
    node1.linkedList_p = &node2;   // node1 points to node2
    
    // Set data values
    node0.data = 1;
    node1.data = 2;
    node2.data = 0;
    
    printf("Node0.data: %d\n", node0.data);
    printf("Node0->linkedList_p->data: %d\n", node0.linkedList_p->data);
    printf("Node2.data: %d\n", node2.data);
    printf("Node0->linkedList_p->linkedList_p->data: %d\n", 
           node0.linkedList_p->linkedList_p->data);

    return 0;
}
