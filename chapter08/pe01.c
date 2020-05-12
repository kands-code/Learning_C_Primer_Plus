// pe01.c -- count the number of input
#include <stdio.h>

int main(void)
{
	int ch, cnt = 0;

	// EOF in Unix or Linux can be simulate by ^D
	while ((ch = getchar()) != EOF)
	{
		cnt++;
	}

	printf("\nThe number of character is %d.\n", cnt);

	return 0;
}
