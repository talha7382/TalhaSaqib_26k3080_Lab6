#include <stdio.h>

int main()
{
    int prices[5], total = 0;
    float discount = 0;
    for(int i = 0; i < 5; i++)
    {
        printf("\nEnter the price of the product: $");
        scanf("%d", &prices[i]);

        total += prices[i];
    }

    if (total >= 10000)
    {
        discount = total * 0.10;
    }

    float final_bill = total - discount;

    printf("Total: $%d.\nDiscount: $%.1f.\nFinal Total: $%.1f", total, discount, final_bill);
}
