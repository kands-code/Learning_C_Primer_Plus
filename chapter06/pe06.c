/* pe06.c -- print a table */
#include <stdio.h>
int main(void)
{
	int i, up,low;
	printf("Enter the INTEGER of the lower one: ");
	scanf("%d", &low);
	printf("Enter the INTEGER of the lower one: ");
	scanf("%d", &up);
	printf("|int\t\t|square\t\t|cube\t\t|\n");
	for (i = low; i <= up; i++)
		printf("|%d\t\t|%d\t\t|%d\t\t|\n", i, i*i, i*i*i);
	return 0;
}
