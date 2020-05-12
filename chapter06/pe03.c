/* pe03.c -- print pattern */
#include <stdio.h>
int main(void)
{
	char ch;
	int i, j;
	for (i = 1; ch = 'F', i <= 6; i++)
	{
		for (j = 0; j < i; ch--, j++)
			printf("%c", ch);

		printf("\n");
	}

	return 0;
}
