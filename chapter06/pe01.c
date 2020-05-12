/* pe01.c -- storage lowercase letter in an array */
#include <stdio.h>
int main(void)
{
	char letter[26];
	char ch;
	int i;
	for (ch = 'a', i = 0; i < 26; ch++, i++)
	{
		letter[i] = ch;
	}

	for (i = 0; i < 26; i++)
	{
		if ((i+1) % 6 == 0) printf("%c\n", letter[i]);
		else printf("%c\t", letter[i]);
	}

	printf("\n");

	return 0;
}
