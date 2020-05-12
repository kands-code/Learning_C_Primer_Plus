/* pe13.c -- use do while to output */
#include <stdio.h>
int main(void)
{
	int tp[8];	// power of two
	int temp, i;

	for (i = 0, temp = 1; i < 8; i++)
	{
		temp *= 2;
		tp[i] = temp;
	}
	
	temp = 1;

	do
	{
		printf("%d power of 2 is %d\n", temp, tp[temp-1]);

		temp++;
	}
	while (temp <= 8);

	return 0;
}
