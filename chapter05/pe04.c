/* pe04.c -- height convertion */
#include <stdio.h>
#define CTE 2.54
int main(void) {
	int feet;
	float cheight, inches, temp;
	printf("Enter a height in centimeters: ");
	scanf("%f", &cheight);
	while(cheight > 0) {
		temp = cheight / CTE;
		feet = temp / 12;
		inches = temp - 12*feet;
		printf("%.1f cm = %d feet, %.1f inches\n", cheight, feet, inches);

		printf("Enter a height in centimeters(<=0 to quit): ");
		scanf("%f", &cheight);
	}

	printf("bye\n");

	return 0;
}
	
