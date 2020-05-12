/* pe04.c -- calculate the harmonic mean of two double values */
#include <stdio.h>

double har(double, double);

int main(void)
{
	double a, b, res;
	printf("Enter the value of a: ");
	scanf("%lf", &a);
	printf("Enter the value of b: ");
	scanf("%lf", &b);

	res = har(a, b);

	printf("The result is %.4f\n", res);

	return 0;
}

double har(double a, double b)
{
	return 2/(1/a + 1/b);
}
