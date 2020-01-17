/* pe08.c -- convert cups to other types */
#include <stdio.h>
int main(void)
{
		double cup, pint, ounce,tablespoon, teaspoon;
		printf("Enter the volume(in cups): ");
		scanf("%lf", &cup);
		pint = cup / 2.0;
		ounce = 8 * cup;
		tablespoon = ounce * 2;
		teaspoon = 3 * tablespoon;

		printf("The volume in pint is %.2lf pint(s)\n", pint); 
		printf("The volume in ounce is %.2lf ounce(s)\n", ounce); 
		printf("The volume in tablespoon is %.2lf tablespoon(s)\n",
						tablespoon); 
		printf("The volume in teaspoon is %.2lf teaspoon(s)\n", teaspoon);
		
		return 0;
}	
