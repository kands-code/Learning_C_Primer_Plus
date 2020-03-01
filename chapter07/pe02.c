// pe02.c -- print ascii pairs
#include <stdio.h>
int main(void)
{
	int cnt = 0;
	char ch;

	printf("Please enter characters(# to quit): ");
	while ((ch = getchar()) != '#')
	{
		if ((cnt+1) % 8 == 0)
			printf("%c : %d\n", ch, ch);
		else printf("%c : %d\t", ch, ch);
	}

	return 0;
}

