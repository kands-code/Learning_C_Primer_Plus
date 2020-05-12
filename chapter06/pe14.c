/* pe14.c -- two float arrays */
#include <stdio.h>
int main(void)
{
	float fo[8], ft[8];
	float sum;
	int i;

	for (i = 0, sum = 0; i < 8; i++)
	{
		printf("%d Enter floating number: ", i+1);
		scanf("%f", &fo[i]);
		sum += fo[i];
		ft[i] = sum;
	}

	for (i = 0; i < 8; i++)
	{
		printf("%f ", fo[i]);
	}

	printf("\n");

	for (i = 0; i < 8; i++)
        {
		printf("%f ", ft[i]);
	}

	printf("\n");

	return 0;
}
