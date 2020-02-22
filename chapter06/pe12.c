/* pe12.c -- the application on math */
#include <stdio.h>
int main(void)
{
	double reo, ret;
	int i;
	long num;
	
	printf("Enter the times you want to run: ");
	scanf("%ld", &num);

	for (i = 1; i <= num; i++)
	{
		reo += 1.0/i;
		// printf("reo is %lf\n", reo);

		if ((i+1) % 2 == 0)
		{
			ret += 1.0/i;
			// printf("ret is %lf\n", ret);
		}
		else
		{
			ret -= 1.0/i;
			// printf("ret is %lf\n", ret);
		}
	}

	printf("The value of the two infinite series is %lf and %lf\n", reo, ret);

	return 0;
}
