/* pe01.c -- c03_programming_exercises my answer */
#include <stdio.h>
int main(void)
{
		int over_int = 12345678901234567890;
		float toobig = 3.4E38 * 100.0f;
		double under_float = 0.1234E-10;
		double a = 0;
		
		a = under_float / 10;

		printf("%d\n", over_int);
		printf("%f\n%lf\n", toobig, under_float);

		return 0;
}
