#include <stdio.h>

int main()
{
	int recharge = 1, total = 0, attempts = 0;
	
	while (recharge > 0 && total < 50000)
	{
		printf("\nEnter Recharge Amount: Rs. ");
		scanf("%d", &recharge);
		
		if (recharge > 0)
		{
			total += recharge;
			attempts++;
		}
	}
	
	printf("\nTotal recharged amount: Rs. %d\nTotal attempts: %d", total, attempts);
}
