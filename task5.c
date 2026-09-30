#include <stdio.h>

int main()
{
    int temp[100];
    int count = 0, above_100 = 0, sum = 0;

    for(int i = 0; i < 7; i++)
    {

        printf("\nEnter The Temperature today: ");
        scanf("%d", &temp[count]);

        if (temp[count] > 100)
        {
            above_100++;
        }

        sum += temp[count];
        count ++;
    }

    printf("Total temperature: %d\nNumber of tempeartures above 100: %d", sum, above_100);

}











