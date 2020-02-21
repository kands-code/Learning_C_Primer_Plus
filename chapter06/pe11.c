/* pe11.c -- read and output backward */
#include <stdio.h>
int main(void)
{
	int i;
	int num[8];
	printf("Enter eight integers(separate by space): ");
	for (i = 0; i < 8; i++)
		scanf("%d", &num[i]);
	for (i = 7; i >= 0; i--)
		printf("%d ", num[i]);

	printf("\n");

	return 0;
}
