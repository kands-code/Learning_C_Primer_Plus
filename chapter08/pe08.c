/* pe08.c -- small calculator */

#include <stdio.h>
#include <ctype.h>

void hello(void);

float getFloat(void);

void operat(float n, float m, char o);

int main(void)
{
	float fn, sn;
	char ch;
	hello();
	while ((ch = getchar()) != 'q')
	{
		if (ch == 'a' || ch == 's'
		|| ch == 'm' || ch == 'd')
		{
			printf("Enter first number: ");
			fn = getFloat();
			printf("Enter second number: ");
			sn = getFloat();
			operat(fn, sn, ch);
		}
		else if (ch != '\n')
		{
			printf("wrrong order!\n");
			continue;
		}
		else continue;

		hello();
	}

	printf("Bye.\n");

	return 0;
}

void hello(void)
{
	printf("Enter the operation of your choice:\na. add\t\t\ts. subtract\nm. multiply\t\td. divide\nq. quit\n");
}

float getFloat(void)
{
	float f;
	char ch;

	while (scanf("%f", &f) != 1)
	{
		while ((ch = getchar()) != '\n')
			putchar(ch);
		printf(" is not a number.\nPlease enter a number, such as 2.5, -1.78E8, or 3: ");
	}

	return f;
}

void operat(float n, float m, char ch)
{
	switch (ch)                                       {
                case 'a': printf("%f + %f = %f\n", n, m, m+n);
			  break;
		case 's': printf("%f - %f = %f\n", n, m, n-m);
			  break;
		case 'm': printf("%f * %f = %f\n", n, m, n*m);
			  break;
		case 'd': while (!m)
			  {
				  printf("Enter a number other than 0: ");
				  m = getFloat();
			  }
			  printf("%f / %f = %f\n", n, m, n/m);
	}
}
