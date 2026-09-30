#include <stdio.h>

int main()
{
    int i = 1;
    while(i != 0)
    {
        printf("Enter a number: ");
        scanf("%d", &i);

        if (i != 0)
        {
            printf("The cube is %d\n", i*i*i);
        }
    }
}
