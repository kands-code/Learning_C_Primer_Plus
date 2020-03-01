// pe06.c -- count the times 'ei' show
#include <stdio.h>
int main(void)
{
	int times = 0, cnt = 0;
	char prec , ch;

	printf("Enter character(# to quit): ");
	while ((ch = getchar()) != '#')
	{
		if (cnt > 1)
		{
			if (prec == 'i' && ch == 'e')
				times++;
		}

		cnt++;
		prec = ch;
	}

	printf("The sequence 'ie' occurs %d times.\n", times);

	return 0;
}
