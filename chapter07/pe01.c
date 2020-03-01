// pe01.c -- count characters
#include <stdio.h>
int main(void)
{
	int scnt = 0, ncnt = 0, ocnt = 0;
	char ch;

	printf("Enter characters(# to quit): ");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case ' ': scnt++;
			  break;
		case '\n': ncnt++;
			   break;
		default: ocnt++;
		}
	}

	printf("\nSpaces %d, newline %d, other %d\n", scnt, ncnt, ocnt);

	return 0;
}
