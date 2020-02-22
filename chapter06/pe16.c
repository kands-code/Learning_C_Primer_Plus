/* pe16.c -- count the value */
#include <stdio.h>
#define L_RATE 0.1
#define R_RATE 0.05
int main(void)
{
	double l = 100.0, r = 100.0;
	double l_v = 10.0, r_v = 5.0;
	int year = 0;

	while (l_v > r_v)
	{
		r *= 1+R_RATE;
		l *= 1+L_RATE;
		r_v = r * R_RATE;
		year++;
	}
	printf("After %d years\nL is $%.2lf, the value of investment is $%.3lf\nand R is $%.2lf, the value of investment is $%.3lf\n", year, l, l_v, r, r_v);

	return 0;
}
