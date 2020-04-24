/* pe07.c -- copies two dimensional array */
// use the function from pe02.c
#include <stdio.h>
#define ROW 3
#define COL 5
void copy_arr(double target[], double source[], int len);

int main(int argc, char const *argv[])
{
	int i, j;
	double tdaf[ROW][COL] = {
		{1.1, 1.2, 1.3, 1.4, 1.5},
		{2.1, 2.2, 2.3, 2.4, 2.5},
		{3.1, 3.2, 3.3, 3.4, 3.5}
	};
	double tdas[ROW][COL] = {0};

	printf("This was tdaf:\n");
	for (i = 0; i < ROW; ++i)
	{
		for (j = 0; j < COL; ++j)
		{
			printf("%f\t", tdaf[i][j]);
		}
		putchar('\n');
	}

	printf("This was tdas:\n");
	for (i = 0; i < ROW; ++i)
	{
		for (j = 0; j < COL; ++j)
		{
			printf("%f\t", tdas[i][j]);
		}
		putchar('\n');
	}

	for (i = 0; i < ROW; i++)
	{
		copy_arr(tdas[i], tdaf[i], COL);
	}

	printf("This is tdaf:\n");
	for (i = 0; i < ROW; ++i)
	{
		for (j = 0; j < COL; ++j)
		{
			printf("%f\t", tdaf[i][j]);
		}
		putchar('\n');
	}

	printf("This is tdas:\n");
	for (i = 0; i < ROW; ++i)
	{
		for (j = 0; j < COL; ++j)
		{
			printf("%f\t", tdas[i][j]);
		}
		putchar('\n');
	}

	return 0;
}

void copy_arr(double target[], double source[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        target[i] = source[i];
    }
}