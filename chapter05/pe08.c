/* pe08.c -- used to caculate the modulus */
#include <stdio.h>
int main(void) {
	int sec, fir;
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand: ");
	scanf("%d", &sec);
	printf("Now enter the first operand: ");
	scanf("%d", &fir);
	while(fir > 0) {
		printf("%d %% %d is %d\n", fir, sec, fir%sec);
		printf("Enter next number for first operand(<=0 to quit): ");
		scanf("%d", &fir);
	}

	printf("Done!\n");

	return 0;
}
