// pe10.c -- calculate the tax
#include <stdio.h>
#define S 17850
#define HH 23900
#define MJ 29750
#define MS 14875
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
		case 1: tax = S*.15+(income-S)*.28;
			break;
		case 2: tax = HH*.15+(income-HH)*.28;
			break;
		case 3: tax = MJ*.15+(income-MJ)*.28;
			break;
		case 4: tax = MS*.15+(income-MS)*.28;
			break;
		}

		printf("The tax is %d\n", tax);

		printf("\nEnter 1 if you are a single\nEnter 2 if you are a head of household\nEnter 3 if you are married and joint\nmarried but separate enter 4\nEnter you number(nonnumerical to quit): ");
	}

	printf("Bye!\n");

	return 0;
}
