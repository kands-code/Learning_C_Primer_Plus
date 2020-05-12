/* pe07.c -- manage the characters */
#include <stdio.h>
#include <ctype.h>
// to EOF, ctrl D for linux and Unix and ctrl Z for windows

int readIn(char);

int main(void)
{
	int loc, ch;

	printf("please enter a sentence:\n");

	while ((ch = getchar()) != EOF)
	{
		loc = readIn(ch);

		if (loc != -1)
			printf("%c is a letter, location is %d\n", ch, loc);
	}

	printf("Bye.\n");

	return 0;
}

int readIn(char ch)
{
	int loc = -1;

	if (isalpha(ch))
	{
		loc = tolower(ch) - 'a' + 1;
	}

	return loc;
}
