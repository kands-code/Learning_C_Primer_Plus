/* pe18.c -- improve your charm */
#include <stdio.h>
#define MAX 150
int main(void)
{
	int fri, week;
	fri = 5;
	week = 0;

	printf("%d week, %d friends\n", week, fri);

	while (fri < MAX)
	{
		week++;
		fri = (fri - week) * 2;
		printf("%d week, %d friends\n", week, fri);
	}
	return 0;
}
