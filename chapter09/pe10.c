/* pe10.c -- base change */
#include <stdio.h>

long base_n(int, int);

int main(void)
{
	int base, raw, ch;
	long after;
	printf("This program can change the base of a positive integer.\n");
	printf("Enter q to quit or r to run: ");
	
	while ((ch = getchar()) != 'q')
	{
		// there is a '\t' in the buffer
		getchar();
		if (ch != 'r')
		{
			printf("Your order is wrong!\n");
			printf("Continue? (q or r): ");
			continue;
		}

		printf("Enter the raw number: ");
		scanf("%d", &raw);
		while (raw < 0)
		{
			printf("The raw number must be positive!\n");
			printf("Enter again: ");
			scanf("%d", &raw);
		}
		printf("Enter the base you want: ");
		scanf("%d", &base);

		while (base < 2 || base > 11)
		{
			printf("The base is in the range of 2 to 10.\n");
			printf("Enter again: ");
			scanf("%d", &base);
		}

		after = base_n(raw, base);

		printf("The %d base of %d is %ld.\n", base, raw, after);

		printf("Continue? (r or q): ");
	}

	printf("Bye.\n");

	return 0;
}

long base_n(int raw, int base)
{
	int t, s;
	if (raw == 0)
	{
		return 0;
	}
	t = raw % base;
	s = raw / base;

	return 10 * base_n(s, base) + t;
}
