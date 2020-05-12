/* pe02.c -- enter ASCII code and print the character */
#include <stdio.h>
int main(void)
{
		short c;

		printf("Please enter an ASCII code: ");
		scanf("%hd", &c);

		printf("The character is %c\n", c);

		return 0;
}
