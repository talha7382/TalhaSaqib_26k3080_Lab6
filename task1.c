#include <stdio.h>

int main()
{
    int amount;
    int is_continuing = 0, balance = 50000, count = 0;

    do
    {
        printf("\nEnter a withdrawal amount: $");
        scanf("%d", &amount);
        
        if (amount > 0)
        {
            balance -= amount;
            count++;
        }

    } while (amount > 0 && balance > 0);

    printf("Remaining Balance: $%d\nNumber of withdrawals: %d", balance, count);

}
