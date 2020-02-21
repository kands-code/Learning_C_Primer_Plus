/* pe10.c -- calculate the sum of square */
#include <stdio.h>
int main(void)
{
	int sum = 0, up, low, i;
	printf("Enter lower and upper integer limits: ");
	scanf("%d %d", &low, &up);
	while (low < up)
	{
		for (i = low; i <= up; i++)
		{
			sum += i*i;
		}
		printf("The sums of the squares from %d to %d is %d\n", low*low, up*up, sum);
		printf("Enter lower and upper integer limits: ");
		scanf("%d %d", &low, &up);
	}
	printf("Done\n");

	return 0;
}
