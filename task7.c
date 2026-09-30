#include <stdio.h>

int main()
{
    int total = 0, price, is_continuing = 0, count = 0;
    do
    {
        printf("\nPlease enter the price of the food item:\n");
        scanf("%d", &price);

        total += price;
        count++;

        printf("Press 1 to enter a new food item, press 0 to end: ");
        scanf("%d", &is_continuing);

    } while (is_continuing);

    printf("\nNumber of food items: %d.\nTotal price of food ordered: $%d", count, total);
    
}
