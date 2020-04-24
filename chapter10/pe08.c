/* pe08.c -- make seven-element array become a three-element array */
#include <stdio.h>
#define N 3

void copy_ptrs(double *target, double *source, double *end);

int main(void)
{
	int i, j;
	double sarr[N][7] = {
		{11, 12, 13, 14, 15, 16, 17},
		{21, 22, 23, 24, 25, 26, 27},
		{31, 32, 33, 34, 35, 36, 37}
	};
	double tarr[N][3] = {0};

	printf("This was sarr:\n");
	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < 7; ++j)
		{
			printf("%f\t", sarr[i][j]);
		}
		putchar('\n');
	}

	printf("This was tarr:\n");
	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("%f\t", tarr[i][j]);
		}
		putchar('\n');
	}

	for (i = 0; i < N; i++)
	{
		copy_ptrs(tarr[i], &sarr[i][2], &sarr[i][5]);
	}

	printf("This is sarr:\n");
	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < 7; ++j)
		{
			printf("%f\t", sarr[i][j]);
		}
		putchar('\n');
	}

	printf("This is tarr:\n");
	for (i = 0; i < N; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("%f\t", tarr[i][j]);
		}
		putchar('\n');
	}

	return 0;
}

void copy_ptrs(double *target, double *source, double *end)
{
    double * i = source;
    for (;i < end; i++, target++)
    {
        *target = *i;
    }
}