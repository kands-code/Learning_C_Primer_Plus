/* pe06.c -- modify pe05.c */
#include <stdio.h>
int main(void)  /* finds sum of first 20 integers */
{
	int count, sum; /* declaration statement */
	int n;
	printf("How far do you want to caculate: ");
	scanf("%d", &n);                                                                                                      count = 0;      /* assignment statement */
	sum = 0;        /* ditto                */
	while(count++ < n)     /* while        */
		sum = sum + count * count; /* statement */
	printf("sum = %d\n", sum); /* function statement */
	return 0;       /* return statememt */
}
