// pe05.c -- redo pe04.c with switch
#include <stdio.h>
int main(void)
{
	int r_p = 0, r_e = 0;
	char ch;

	printf("Enter your sentence(# to quit): ");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
		case '.': printf("!");
			  r_p++;
			  break;
		case '!': printf("!!");
			  r_e++;
			  break;
		default: putchar(ch);
		}
	}

	printf("\n\nReplaced period %d times, replaced exclamation mark %d times\n", r_p, r_e);

	return 0;
}
