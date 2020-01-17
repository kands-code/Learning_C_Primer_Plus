/* pe07_1.c -- convert inches to cm */
#include <stdio.h>
int main(void)
{
		double height_inch;
		double height_cm;
		printf("Enter your height(in inches): ");
		scanf("%lf", &height_inch);
		height_cm = height_inch * 2.54;
		printf("Your height in cm is %.2lfcm\n", height_cm);

		return 0;
}

