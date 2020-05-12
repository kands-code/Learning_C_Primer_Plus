// pe03.c -- count odds and evens
#include <stdio.h>
int main(void)
{
	int num, i = 0, oddSum = 0, evenSum = 0, ocnt= 0, ecnt = 0;
	int odd[100];
	int even[100];

	printf("Enter integers(0 to quit): ");

	while (scanf("%d", &num))
	{
		if (num % 2)
		{
			oddSum += num;
			odd[ocnt] = num;
			ocnt++;
		}
		else
		{
			evenSum += num;
			even[ecnt] = num;
			ecnt++;
		}

		if (!num) break;
	}

	printf("The even numbers are:\n");
	for (i = 0; i < ecnt; i++)
	{
		if ((i+1) % 4)
			printf("%d\t", even[i]);
		else printf("%d\n", even[i]);
	}

	printf("The average of them is %.2f\n", ((float)evenSum/ecnt + 0.005));

	for (i = 0; i < ocnt; i++)
	{
		if ((i+1) % 4)
			printf("%d\t", odd[i]);
		else printf("%d\n", odd[i]);
	}

	printf("The average of them is %.2f\n", ((float)oddSum/ecnt + 0.005));

	return 0;
}
