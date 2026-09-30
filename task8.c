#include <stdio.h>

int main()
{
    int salaries[6], count = 0;

    for(int i = 0; i < 6; i++)
    {
        printf("\nEnter your salary: $");
        scanf("%d", &salaries[i]);

        if (salaries[i] > 50000)
        {
            count++;
        }
    }

    for(int i = 0; i < 6; i++)
    {
        printf("\nSalary %d: $%d.", i + 1, salaries[i]);
    }

    printf("\nNumber of Employees with salaries above 50000: %d", count);

}
