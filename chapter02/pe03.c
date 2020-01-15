/* pe03.c -- convert your age to in years to days */
// 1 year = 365 days
#include <stdio.h>
#define YEAR 365 /*define a YEAR equals to 365 days */
int main(void)
{
		/* define variables */
		int age;
		int days;
		/* get your age */
		printf("Please enter your age:\n");
		scanf("%d", &age);
		/* compute the days */
		days = age * YEAR;
		/* print it */
		printf("Your age in days(about) is %d.\n", days);

		return 0;
}
