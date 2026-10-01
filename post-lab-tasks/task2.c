#include <stdio.h>

int main()
{
	int marks = 1, total = 0, average, count = 0;
	
	while (marks >= 0 && marks <= 100)
	{
		printf("\nEnter Marks: ");
		scanf("%d", &marks);
		
		if (marks >= 0 && marks <= 100)
		{
			total += marks;
			count++;
		}
	}
	
	average = total / count;
	printf("Total marks: %d\nAverage marks: %d\nNumber of students: %d", total, average, count);
	
}
