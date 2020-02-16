/* pe02.c -- print all integer in the range */
#include <stdio.h>
int main(void) {
	int i, d;
	printf("Enter a integer:\n");	// ask for an integer
	scanf("%d",&i);
	d = i;
	while(d <= i+10) {
		printf("%d ", d);

		d++;
	}
	printf("\n");
	return 0;
}
