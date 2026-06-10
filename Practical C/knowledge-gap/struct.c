#include <stdio.h>
#include <string.h>

struct invStruct {
    char manuf[25];      // Manufacturer name (25 chars max)
    char model[15];      // Model code (15 chars max)
    int diskSpace;       // Disk size in GB
    int memSpace;        // Memory size in GB
    int ports;           // Number of USB ports
    int quantity;        // Inventory count
    float cost;          // Cost price
    float price;         // Retail price
} invStructVar;          // structure variable, deonating invStruct.

int main() {
    struct invStruct items[1];
    // Initialize the first computer in inventory
    strcpy(items[0].manuf, "Dell");      // Copy string to manuf
    strcpy(items[0].model, "XPS15");     // Copy string to model
    items[0].diskSpace = 512;            // Set disk space
    items[0].quantity = 10;              // Set inventory count
    items[0].price = 1299.99;            // Set retail price

    // Testing structure variable
    invStructVar.ports = 4;
    printf("ports: %d\n", invStructVar.ports);

    // Access data
    printf("Model: %s, Price: $%.2f\n", items[0].model, items[0].price);

    // Pointers & Structures
    
    /* Declaring a pointer variable that can contain
     * the address of an invStruct.
     * Structure variable, though, could be used. 
     */
    struct invStruct *invStruct_p;

    invStruct_p = &invStructVar;    
    /* Now the address of invStructVar is in the invStruct_p. */

    invStruct_p->cost = 24.5;
    printf("Accessing invStruct_p->cost: %.2f\n", invStruct_p->cost);
}
