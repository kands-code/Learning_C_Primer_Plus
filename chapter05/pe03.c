/* pe03.c -- converts days to weeks and days */
#include <stdio.h>
#define DTW 7
int main(void) {
	int week, day, ds;
	scanf("%d", &day);
	week = day / DTW;
	ds = day % DTW;

	printf("%d days are %d weeks, %d days\n", day, week, ds);

	return 0;
}
