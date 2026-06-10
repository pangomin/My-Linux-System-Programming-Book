#include <stdio.h>

#define MAX_ENTRIES 100
int main() {
    struct mailing {
        char name[60];
        char addr1[60];
        char addr2[60];
        char city[40];
        char state[3];   /* room for null terminator */
        long int zip;
    };
    struct mailing list[MAX_ENTRIES] = {
    {
        "ali",
        "Karaj",
        "Tehran",
        "Azimie",
        "KJ",
        141525
    },
    {
        "ali",
        "Karaj",
        "Tehran",
        "Azimie",
        "KJ",
        141525
    }
};

    struct mailing *list_ptrs[MAX_ENTRIES];
    int current;

    for(current = 0; current < 100; ++current)
        list_ptrs[current] = &list[current];

    printf("Name:  %s\n", list_ptrs[0]->name);
    printf("Addr1: %s\n", list_ptrs[0]->addr1);
    printf("Addr2: %s\n", list_ptrs[0]->addr2);
    printf("City:  %s\n", list_ptrs[0]->city);
    printf("State: %s\n", list_ptrs[0]->state);
    printf("ZIP:   %ld\n", list_ptrs[0]->zip);

    printf("\n");

    printf("Name:  %s\n", list_ptrs[1]->name);
    printf("Addr1: %s\n", list_ptrs[1]->addr1);
    printf("Addr2: %s\n", list_ptrs[1]->addr2);
    printf("City:  %s\n", list_ptrs[1]->city);
    printf("State: %s\n", list_ptrs[1]->state);
    printf("ZIP:   %ld\n", list_ptrs[1]->zip);

    return(0);
}


