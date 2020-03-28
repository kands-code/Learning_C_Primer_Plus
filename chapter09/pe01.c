/* pe01.c -- the smaller one */
#include <stdio.h>
double min(double x, double y);

int main(void)
{
	double x, y;
	double minimum;
	printf("Enter the two number you want to compare:\n");
	scanf("%lf %lf", &x, &y);

	minimum = min(x, y);

	printf("The smaller one is %lf\n", minimum);

	return 0;
}

double min(double x, double y)
{
	return x > y ? y : x;
}
