#include <stdio.h>
int main(void)
{
	int i;
	int income, tax;

	printf("\nEnter 1 if you are a single\nEnter 2 if you are a head of household\nEnter 3 if you are married and joint\nmarried but separate enter 4\nEnter you number(nonnumerical to quit): ");

	while (scanf("%d", &i))
	{
		printf("Enter your income please: ");
		scanf("%d", &income);
		switch (i)
		{
		case 1: tax = 17850*.15+(income-17850)*.28;
			break;
		case 2: tax = 23900*.15+(income-23900)*.28;
			break;
		case 3: tax = 29750*.15+(income-29750)*.28;
			break;
		case 4: tax = 14875*.15+(income-14875)*.28;
			break;
		}

		printf("The tax is %d\n", tax);

		printf("\nEnter 1 if you are a single\nEnter 2 if you are a head of household\nEnter 3 if you are married and joint\nmarried but separate enter 4\nEnter you number(nonnumerical to quit): ");
	}

	printf("Bye!\n");

	return 0;
}
