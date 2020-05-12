/* pe08.c -- calling functions */
#include <stdio.h>
//headers, define the functions
void one_three(void);
void two(void);
//main function
int main(void)
{
		printf("starting now:\n");

		one_three();/* call function */

		printf("done!\n");

		return 0;
}
//define the functions
void one_three(void)
{
		printf("one\n");
		two();/* call a function named two */
		printf("three\n");
}

void two(void)
{
		printf("two\n");
}


