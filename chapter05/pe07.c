/* pe07.c -- use function to caculate the cube */
#include <stdio.h>

void cube(double);

int main(void) {
	double d;
	printf("Enter a number: ");
	scanf("%lf", &d);
	cube(d);

	return 0;
}

void cube(double d) {
	double res = d * d * d;
	printf("The cube of %f is %f\n", d, res);
}
