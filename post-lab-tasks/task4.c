#include <stdio.h>

int main()
{
	int price, is_resuming = 1, total = 0;
	float discount = 0;
	
	while (is_resuming)
	{
		printf("\nEnter The price of the item: $");
		scanf("%d", &price);
		
		total += price;
		
		printf("\nContinue shopping? press 1 for yes 0 for no: ");
		scanf("%d", &is_resuming);
	}
	
	if (total > 10000)
	{
		discount = 0.10 * total;
	}
	
	float final_bill = total - discount;
	
	printf("\nTotal bill: $%d\nDiscount: $%.2f\nFinal bill: $%.2f", total, discount, final_bill);
	
}
