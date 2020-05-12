/* pe12.c -- rewrite rain.c to functionally split program */
#include <stdio.h>
#define MONTHS 12
#define YEARS 5

void year_average(const float (*arr)[MONTHS], int year);
void month_average(const float (*arr)[MONTHS], int year);

int main(void)
{
	// initializing rainfall data for 2010-2014
	const float rain[YEARS][MONTHS] =
	{
		{4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
		{8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
		{9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
		{7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
		{7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
	};

	year_average(rain, YEARS);
	month_average(rain, YEARS);
	
	return 0;
}

void year_average(const float (*arr)[MONTHS], int year)
{
	int y, m;
	float subtot,total;

	printf(" YEAR		RAINFALL (inches)\n");
	for (y = 0, total = 0; y < year; y++)
	{	// for each year, sum rainfall for each month
		for (m = 0, subtot = 0; m < MONTHS; m++)
		{
			subtot += arr[y][m];
		}
		printf("%5d %15.1f\n", 2010 + y, subtot);
		total += subtot; // total for all years
	}
	printf("\nThe yearly average is %.1f inches.\n\n", total / year);
}

void month_average(const float (*arr)[MONTHS], int year)
{
	int y, m;
	float subtot,total;

	printf("MONTHLY AVERAHES:\n\n");
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
	for (m = 0; m < MONTHS; m++)
	{	// for each month, sum rainfall over years
		for (y = 0, subtot = 0; y < year; y++)
		{
			subtot += arr[y][m];
		}
		printf("%4.1f", subtot / year);
	}
	printf("\n"); // also putchar('\n');
}