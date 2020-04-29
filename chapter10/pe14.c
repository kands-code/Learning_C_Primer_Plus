/* pe14.c -- uses vla to handle with 3x5 arrays */
#include <stdio.h>
#define R 3
#define N 5

void getArray(int row, int col, double arr[row][col]);
// E -- each
void getEAverage(int row, int col, double arr[row][col], double source[row]);
double getAverage(int row, int col, double arr[row][col]);
double getMaximum(int row, int col, double arr[row][col]);

int main(void)
{
	int i;
	double darr[R][N];
	double eaver[R], aver, max;
	getArray(R, N, darr);
	getEAverage(R, N, darr, eaver);
	aver = getAverage(R, N, darr);
	max = getMaximum(R, N, darr);

	printf("The average of each row is:\n");
	for (i = 0; i < R; ++i)
	{
		printf("%f\t", eaver[i]);
	}
	putchar('\n');
	printf("And the average of all elements is %f\n", aver);
	printf("The maximum of the array is %f\n", max);

	return 0;
}

void getArray(int row, int col, double arr[row][col])
{
	int i, j;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			scanf("%lf", &arr[i][j]);
		}
	}
}

void getEAverage(int row, int col, double arr[row][col], double source[row])
{
	int i, j;
	double sum;
	for (i = 0; i < row; ++i)
	{
		for (sum = 0, j = 0; j < col; ++j)
		{
			sum += arr[i][j];
		}
		source[i] = sum / col;
	}
}

double getAverage(int row, int col, double arr[row][col])
{
	int i, j;
	double sum;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			sum += arr[i][j];
		}
	}

	return sum / (col * row);
}
double getMaximum(int row, int col, double arr[row][col])
{
	int i, j;
	double max = arr[0][0];

	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}

	return max;
}
