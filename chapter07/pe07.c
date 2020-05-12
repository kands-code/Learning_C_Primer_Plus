// pe07.c -- calculate the tax and net pay
#include <stdio.h>
#define BP 10.0f	// basic pay
#define EP 10.0f*1.5f	// excess pay
#define FR 0.15f	// first rate
#define NR 0.20f	// next rate
#define RR 0.25f	// rest rate
#define FWT 40 		// fundamental work time
#define FTP 300		// first tax pay
#define NTP 150		// next tax pay

int main(void)
{
	float grossPay, netPay, tax;
	int workTime;

	printf("Enter your work time(nonnumeric to quit): ");
	while (scanf("%d", &workTime))
	{
		if (workTime > FWT)
			grossPay = FWT * BP + (workTime - FWT) * EP;
		else grossPay = workTime * BP;

		if (grossPay > NTP + FTP)
			tax = FR * FTP + NTP * NR + (grossPay - NTP - FTP) * RR;
		else if (grossPay > FTP)
			tax = FR * FTP + (grossPay - FTP) * NR;
		else
			tax = grossPay * FR;

		netPay = grossPay - tax;

		printf("\nThe gross pay is $%.2f, tax is $%.2f, and the net pay is $%.2f\n\n", grossPay, tax, netPay);

		printf("Enter your work time(nonnumeric to quit): ");
	}

	printf("\nBye!\n");

	return 0;
}
