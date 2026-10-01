#include <stdio.h>

int main()
{
	int units[5], total = 0, bill = 0, surcharge = 0;
	
	for (int i = 0; i < 5; i++)
	{
		printf("\nPlease enter your units: ");
		scanf("%d", &units[i]);
		
		total += units[i];
	}
	
	int lowest = units[0];
	int highest = units[0];
    
    for (int i = 1; i < 5; i++)
	{
        if (units[i] > highest) 
        {
            highest = units[i]; 
        }
        
        if (units[i] < lowest ) 
        {
        	lowest = units[i];
		}
    }

    bill = total * 10;

    if (total > 500)
    {
        surcharge = 0.05 * bill;
    }    

    int final_bill = bill + surcharge;

    printf("\nTotal units: %d.\nHighest units: %d\nLowest lowest: %d.\nFinal collected amount: Rs. %d.", total, highest, lowest, final_bill);
    
}
