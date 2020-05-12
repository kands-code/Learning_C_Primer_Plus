/* pe04.c -- print float */
#include <stdio.h>
int main(void)
{
		double x;
		printf("Enter a floating-point value: ");
		scanf("%lf", &x);
		printf("fixed-point notation: %lf\n", x);
		printf("exponenial notation: %e\n", x);
		printf("p notation: %a\n", x);

		return 0;
}
