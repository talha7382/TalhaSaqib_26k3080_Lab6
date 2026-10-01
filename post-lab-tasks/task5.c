#include <stdio.h>

int main()
{
	int price, is_resuming = 1, bill = 0;
	float discount = 0;
	
	while (is_resuming)
	{
		printf("\nEnter The price of the food: $");
		scanf("%d", &price);
		
		bill += price;
		
		printf("\nOrder another item? press 1 for yes 0 for no: ");
		scanf("%d", &is_resuming);
	}
	
	if (bill > 5000)
	{
		discount = 0.05 * bill;
	}
	
	float final_bill = bill - discount;
	
	printf("\nTotal bill: $%d\nDiscount: $%.2f\nFinal bill: $%.2f", bill, discount, final_bill);
	
}
