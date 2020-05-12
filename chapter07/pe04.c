// pe04.c -- replace period and exclamation mark
#include <stdio.h>
#define STOP '#'
int main(void)
{
	int r_p = 0, r_e = 0;	// replaced period, replace exc.;
	char ch;

	printf("Enter your sentence(# to quit): ");
	while ((ch = getchar()) != STOP)
	{
		if (ch == '.')
		{
			printf("!");
			r_p++;
		}
		else if (ch == '!')
		{
			printf("!!");
			r_e++;
		}
		else putchar(ch);
	}

	printf("\n\nReplaced period %d times,replaced exclamation mark %d times\n", r_p, r_e);

	return 0;
}
