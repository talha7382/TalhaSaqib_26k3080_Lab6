#include <stdio.h>

int main()
{
    int saved, total = 0, count = 0;
    do
    {
        printf("\nEnter amount saved: ");
        scanf("%d", &saved);
        total += saved;
        if (saved > 0)
            {
                count++;
            }
    }
    while (saved > 0);

    printf("Total savings: $%d,\nTotal deposits: %d", total, count);
}
