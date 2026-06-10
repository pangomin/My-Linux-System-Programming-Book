#include <stdio.h>

int main() {
    int amount_owed = 10;
    int balance = 0;

    amount_owed = (balance < 0) ? 0 : balance;
    printf("%d\n%d\n", amount_owed, balance);

    if (balance < 0)
        amount_owed = 0;
    else
        amount_owed = balance;
    
    printf("%d\n%d", amount_owed, balance);
}
