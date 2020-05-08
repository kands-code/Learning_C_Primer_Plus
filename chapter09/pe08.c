/* pe08.c -- my power() */
#include <stdio.h>

double power(double, int);

int main(void)
{
	int p, n, t;
	double base, exp;

	printf("Enter q to quit, r to run: ");
	while ((n = getchar()) != 'q')
	{
		if (n != 'r')
		{
			printf("Your order is wrong!\n");
			continue;
		}

		printf("Enter the base: ");
		scanf("%lf", &base);
		printf("Enter the power(integer): ");
		t = scanf("%d", &p);
		if (t != 1)
		{
			printf("Your power is wrong!\n");
			printf("Continue? (q or r): ");
			continue;
		}

		exp = power(base, p);

		printf("The %d power of %.4f is %.4f\n", p, base, exp);

		printf("Continue? (q or r): ");

		// there is a '\t' in the buffer
		getchar();
	}

	printf("Bye.\n");

	return 0;
}

double power(double base, int p)
{
	int i;
	double exp = 1, temp = 1;
	if (p > 0)
	{
		for (i = 0; i < p; i++)
		{
			exp *= base;
		}
	}
	else if (p < 0)
	{
		for (i = 0; i < -p; i++)
		{
			temp *= base;
		}

		exp = 1/temp;
	}

	return exp;
}
