/* pe04.c -- use function to print */
#include <stdio.h>
//header
void jolly(void);
void deny(void);
//main function
int main(void)
{
		/* call functions to print */
		jolly();
		jolly();
		jolly();
		deny();

		return 0;
}

void jolly(void)
{
		printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
		printf("Which nobody can deny!\n");
}
