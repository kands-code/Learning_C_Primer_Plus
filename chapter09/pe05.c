/* pe05.c -- all to the maximum */
#include <stdio.h>

void larger_of(double *, double *);

int main(void)
{
	double x, y;
	printf("Enter the first number: ");
	scanf("%lf", &x);
	printf("Enter the second number: ");
	scanf("%lf", &y);

	larger_of(&x, &y);

	printf("The large one is %f, and x and y all become %f\n", x, y);

	return 0;
}

void larger_of(double * x, double * y)
{
	if (*x > *y)
	{
		*y = *x;
	}
	else
	{
		*x = *y;
	}
}
