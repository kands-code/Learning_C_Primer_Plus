// pe03.c -- counts the number of upper and lower

#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int upper = 0, lower = 0, other = 0;
	int ch;

	while ((ch = getchar()) != EOF)
	{
		if (isupper(ch)) upper++;
		else if (islower(ch)) lower++;
		else other++;
	}

	printf("\nThe number of upper case is %d, the lower case is %d, and other character is %d.\n", upper, lower, other);

	return 0;
}
