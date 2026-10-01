#include <stdio.h>

int main()
{
	int login_attempts = 3, PIN = 1234, attempts = 0, attempt;
	
	while (login_attempts > 0)
	{
		printf("\nPlease Enter the PIN: ");
		scanf("%d", &attempt);
		
		attempts += 1;
		if (attempt != PIN)
			{
				login_attempts -= 1;
				printf("\nAttempts remaining: %d", login_attempts);
			}
		else
		{
			printf("\nLogin Successful.");
			break;
		}
	}
	
	printf("\nAccount Locked.");
	
}
