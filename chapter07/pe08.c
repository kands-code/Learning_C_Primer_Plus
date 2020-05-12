/* pe08.c -- make a menu and calculate tax */
#include <stdio.h>
#define ER 1.5f
#define FTR 0.15f
#define NTR 0.2f
#define RTR 0.25f

void start(int num);

void hello(void);

int main(void)
{
	int select, workTime;
	float basicPay, grossPay, netPay;
	float tax;

	while (1)
	{
		start(65);
		hello();
		start(65);

		scanf("%d", &select);
		switch (select)
		{
		case 1: basicPay = 8.75f;
			break;
		case 2: basicPay = 9.33f;
			break;
		case 3: basicPay = 10.00f;
			break;
		case 4: basicPay = 11.20f;
			break;
		case 5: goto END;
		default: printf("The selection is wrong, please select again.\n");
			 continue;
		}

		printf("Enter your work time: ");
		scanf("%d", &workTime);

		if (workTime > 40)
			grossPay = (workTime - 40) * ER * basicPay + basicPay * 40;
		else 
			grossPay = basicPay * workTime;

		if (grossPay > 450)
			tax = 75 + (grossPay - 450) * RTR;
		else if (grossPay > 300)
			tax = 45 + (grossPay - 300) * NTR;
		else
			tax = grossPay * FTR;

		netPay = grossPay - tax;

		printf("\nGross pay is $%.2f, tax is $%.2f, net pay is $%.2f.\n\n", grossPay, tax, netPay);
	}

END:	printf("\nBye!\n");

	return 0;
}

void start(int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf("*");
	}
	putchar('\n');
}

void hello(void)
{
	printf("Enter the number corresponding to the desired pay rate or action:\n1) $8.75/hr\t\t2) $9.33/hr\n3) $10.00/hr\t\t4) 11.20/hr\n5) quit\n");
}
