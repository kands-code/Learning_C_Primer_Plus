/* pe05.c -- turn your age from years to seconds */
#include <stdio.h>
int main(void)
{
		int age;
		double seconds;
		printf("Please enter your age: ");
		scanf("%d", &age);
		seconds = age * 3.156E7;
		printf("Your age in seconds approximately is %es\n", seconds);
		return 0;
}
