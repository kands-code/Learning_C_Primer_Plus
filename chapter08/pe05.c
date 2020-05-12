// pe05.c -- modify Listing 8.4
#include <stdio.h>
int main(void)
{
	int guess = 50;
	int max = 100, min = 1;
	char ch;

	printf("Pick an integer from 1 to 100. I will try to guess it.\nRespond with an l if my guess is lower and with an h if my guess is higher, with a y if my guess is right.\n");
	printf("Uh...is your number %d?\n", guess);
	while ((ch = getchar()) != 'y')
	{
		if (ch == 'l')
		{
			min = guess;
			guess = (max + min)/2;
			printf("Well, then is it %d?\n", guess);
		}
		else if (ch == 'h')
		{
			max = guess;
			guess = (max + min)/2;
			printf("Well, then is it %d?\n", guess);
		}
		else 
			printf("I can only know y, l and h!\n");
		while (getchar() != '\n')
			continue;
	}

	printf("I knew I could do it!\n");

	return 0;
}
