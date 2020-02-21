/* pe08.c -- loop of calculate */
#include <stdio.h>
#include <math.h>
int main(void)
{
	float a, b;
	printf("Enter two float-number(separate by space enter nonnumeric input to quit): ");
	while (scanf("%f %f", &a, &b) == 2)
	{
		printf("The value of their difference divided by their product is %f.\n", fabs(a-b)/(a*b));
		printf("Enter two float-number(separate by space enter nonnmeric input to quit): ");
	}	
	printf("Bye!\n");

	return 0;
}
