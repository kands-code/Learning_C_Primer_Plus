/* pe17.c -- empty your account */
#include <stdio.h>
#define RATE 0.08
int main(void)
{
	double re = 1000000;
	int year = 0;

	while (re > 0)
	{
		re *= (1+RATE);
		re -= 100000;
		year++;
	}

	printf("Spend %d years, left $%.2lf\n", year, re);

	return 0;
}
