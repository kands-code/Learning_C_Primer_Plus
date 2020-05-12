/* pe06.c -- reverses the array */
#include <stdio.h>
#define LEN 5

void rev(double * arr, int len);

int main(int argc, char const *argv[])
{
	int i;
	double arr[LEN] = {1.1, 1.2, 1.3, 1.4, 1.5};

	for (i = 0; i < LEN; ++i)
	{
		printf("%f\t", arr[i]);
	}
	putchar('\n');

	rev(arr, LEN);

	for (i = 0; i < LEN; ++i)
	{
		printf("%f\t", arr[i]);
	}
	putchar('\n');

	return 0;
}

void rev(double * arr, int len)
{
	int i;
	double temp;

	for (i = 0; i < (len - 1) / 2; ++i)
	{
		temp = arr[i];
		arr[i] = arr[len - 1 - i];
		arr[len - 1 - i] = temp;
	}
}