/* pe04.c -- print some interesting pattern */
#include <stdio.h>
int main(void)
{
	char ch;
	int i, j;

	for (i = 1, ch = 'A'; i <= 6; i++)
	{
		for (j = 0; j < i; ch++, j++)
			printf("%c", ch);

		printf("\n");
	}

	return 0;
}
