/* pe07.c -- read a word and print it backward */
#include <stdio.h>
int main(void)
{
	int len, i;
	char ca[50];
	printf("Enter a word: ");
	scanf("%s", ca);

	len = strlen(ca);

	for (i = len-1; i >= 0; i--)
		printf("%c", ca[i]);
	printf("\n");

	return 0;
}
