/* pe13.c -- handles with 3x5 arrays */
#include <stdio.h>
#define R 3
#define N 5

void getArray(double (*arr)[N], int row);
// E -- each
void getEAverage(double (*arr)[N], int row, double source[R]);
double getAverage(double (*arr)[N], int row);
double getMaximum(double (*arr)[N], int row);

int main(void)
{
	int i;
	double darr[R][N];
	double eaver[R], aver, max;
	getArray(darr, R);
	getEAverage(darr, R, eaver);
	aver = getAverage(darr, R);
	max = getMaximum(darr, R);

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

void getArray(double (*arr)[N], int row)
{
	int i, j;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < N; ++j)
		{
			scanf("%lf", &arr[i][j]);
		}
	}
}

void getEAverage(double (*arr)[N], int row, double source[R])
{
	int i, j;
	double sum;
	for (i = 0; i < row; ++i)
	{
		for (sum = 0, j = 0; j < N; ++j)
		{
			sum += arr[i][j];
		}
		source[i] = sum / N;
	}
}

double getAverage(double (*arr)[N], int row)
{
	int i, j;
	double sum;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < N; ++j)
		{
			sum += arr[i][j];
		}
	}

	return sum / (N * row);
}
double getMaximum(double (*arr)[N], int row)
{
	int i, j;
	double max = arr[0][0];

	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < N; ++j)
		{
			if (max < arr[i][j])
			{
				max = arr[i][j];
			}
		}
	}

	return max;
}
