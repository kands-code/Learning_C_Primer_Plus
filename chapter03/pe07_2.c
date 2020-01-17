/* pe07_2.c -- covert cm to inches */
#include <stdio.h>
int main(void)
{
		double height_cm, height_inch;
		printf("Enter your height(in cm): ");
		scanf("%lf", &height_cm);
		height_inch = height_cm / 2.54;
		printf("Your height in inches is %.2lf inches\n", height_inch);

		return 0;
}
