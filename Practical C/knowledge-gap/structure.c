#include "st.h"
#include <stdio.h>
#include <string.h>

int main()
{
    int ctr;
    struct bookInfo books[3];

    for(ctr = 0; ctr < 3; ctr++)
    {
        printf("What is the name of the book #%d?\n", (ctr+1));
        fgets(books[ctr].title, sizeof(books[ctr].title), stdin);

        puts("Who is the author? ");

 //      getchar(books[ctr].author);
       putchar("How much did the book cost? ");

      //  scanf(" $%f", &books[ctr].price);
       // putchar("How many pages in the book? ");
       // scanf(" %d", &books[ctr].pages);

        getchar(); //Clears last newline for next loop
    }
    printf("\n\nHere is the collection of books: \n");
    for (ctr = 0; ctr < 3; ctr++)
    {
        printf("#%d: %s by %s", (ctr+1), books[ctr].title,
                books[ctr].author);
        printf("\nIt is %d pages and costs $%.2f", books[ctr].pages,
                books[ctr].price);
        printf("\n\n");
    }
    return(0);
}
