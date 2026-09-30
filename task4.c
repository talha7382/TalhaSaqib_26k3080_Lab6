#include <stdio.h>

int main()
{
    // max entries 100 hain, i do not understand how to make it endless
    int marks[100];
    int count = 0;
    int is_continuing;

    do 
    {
        printf("Enter marks: ");
        scanf("%d", &marks[count]);
        count += 1;

        printf("Do you want to enter marks for another student? 1 for Yes, 0 for No: ");
        scanf("%d", &is_continuing);

    } while (is_continuing);
    

    printf("The number of students are: %d", count);

    printf("\nthe list of marks are:\n");
    for (int i = 0; i < count; i++) 
    {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }

}
