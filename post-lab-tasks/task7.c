#include <stdio.h>

int main()
{
	int marks[5], total = 0;
	
	for (int i = 0; i < 5; i++)
	{
		printf("\nPlease enter your marks: ");
		scanf("%d", &marks[i]);
		
		total += marks[i];
	}
	
	int lowest = marks[0];
	int highest = marks[0];
    
    for (int i = 1; i < 5; i++)
	{
        if (marks[i] > highest) 
		{
            highest = marks[i]; 
        }
        
        if (marks[i] < lowest ) 
		{
        	lowest = marks[i];
		}
    }
    
    float average = total / 5.0;
    
    printf("\nTotal marks: %d.\nAverage marks: %.2f.\nHighest marks: %d\nLowest marks: %d.", total, average, highest, lowest);
    
}
