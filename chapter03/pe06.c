/* pe06.c -- caculate the amount of water molecule */
#include <stdio.h>
int main(void)
{
		double mass;
		long double amount;
		printf("Please enter the mass of water(in quarts): ");
		scanf("%lf", &mass);
		amount = mass * 950 / 3.0E-23;

		printf("The amount of water is %Le\n", amount);

		return 0;
}
