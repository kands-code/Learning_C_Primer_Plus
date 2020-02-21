/* pe05.c -- advance try of printing pattern */
#include <stdio.h>
int main(void)
{
	int i, j, diff;
	char ch, o;

	printf("Please enter a uppercase letter: ");
	scanf("%c", &ch);
	// we can use if to make the program more safe
	// but I won't do that
	diff = ch - 'A';
	for (i = 1; i <= diff+1 ; i++)
	{
		for (j = 0; j < diff-i+1; j++)
		{
			printf(" ");
		}
		for (j = 0, o = 'A'; j < i; o++, j++)
		{
			printf("%c", o);
		}
		for (j = 0, o = 'A'+i-2; j < i-1; o--, j++)
                {
                        printf("%c", o);
                }
		printf("\n");
	}

	return 0;
}
