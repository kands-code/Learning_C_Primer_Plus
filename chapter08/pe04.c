// pe04.c -- count the average of a word
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int ch, wcnt = 0, sum = 0, cnt = 0;
	double average;

	while ((ch = getchar()) != EOF)
	{
		if (!isspace(ch) && !ispunct(ch))
			wcnt++;
		else
		{
			cnt++;
			sum += wcnt;
			wcnt = 0;
		}
	}

	average = (double)sum / cnt;

	printf("\nThere are %d words here, and the average of a word is %.2lf.\n", cnt, average);

	return 0;
}
