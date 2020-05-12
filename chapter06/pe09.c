/* pe09.c -- loop of calculate and function*/
#include <stdio.h>
#include <math.h>

float calc(float a, float b);

int main(void)
{         float a, b;                                                printf("Enter two float-number(separate by space enter nonnumeric input to quit): ");
	while (scanf("%f %f", &a, &b) == 2)
	{
		printf("The value of their difference divided by their product is %f.\n", calc(a, b));
		printf("Enter two float-number(separate by space enter nonnmeric input to quit): ");
	}
	printf("Bye!\n");
	
	return 0;
}

float calc(float a, float b)
{
	return fabs(a-b)/(a*b);
}
