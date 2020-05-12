#include <stdio.h>

long Fibonacci(int month);

int main(void)
{
	long res;
	int month;
	printf("Enter the month: ");
	scanf("%d", &month);

	res = Fibonacci(month);

	printf("The result is %ld\n", res);

	return 0;
}

long Fibonacci(int month)
{
	int i;
	long a = 1, b = 1, c;

	if (month < 3)
	{
		return a;
	}
	for (i = 2; i < month; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}

	return c;
}
