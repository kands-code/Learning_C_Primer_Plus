/* pe06.c -- sort the three double values */
#include <stdio.h>
void dsort(double *, double *, double *);

int main(void)
{
	double a, b, c;
	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);
	printf("c = ");
	scanf("%lf", &c);

	printf("Before a: %f, b: %f, c: %f\n", a, b, c);
	dsort(&a, &b, &c);
	printf("After a: %f, b: %f, c: %f\n", a, b, c);

	return 0;
}

void dsort(double * a, double * b, double * c)
{
	double t;

	if (*a > *b)
	{
		t = *a;
		*a = *b;
		*b = t;
	}
	if (*a > *c)
	{
		t = *a;
		*a = *c;
		*c = t;
	}
	if (*b > *c)
	{
		t = *b;
		*b = *c;
		*c = t;
	}
}
