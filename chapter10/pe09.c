/* pe09.c -- use VLA and inintialize 3x5 array-of-double */
#include <stdio.h>

// use VLA to copy
void copy_vla(int row, int col, double source[row][col], double target[row][col]);
// use VLA to display
void display_vla(int row, int col, double arr[row][col]);

int main(void)
{
	double tfarrf[3][5] = {
		{1.1, 1.2, 1.3, 1.4, 1.5},
		{2.1, 2.2, 2.3, 2.4, 2.5},
		{3.1, 3.2, 3.3, 3.4, 3.5}
	};
	double tfarrs[3][5] = {0.0};

	printf("This was tfarrf:\n");
	display_vla(3, 5, tfarrf);

	printf("This was tfarrs:\n");
	display_vla(3, 5, tfarrs);

	copy_vla(3, 5, tfarrf, tfarrs);

	printf("This is tfarrf:\n");
	display_vla(3, 5, tfarrf);

	printf("This is tfarrs:\n");
	display_vla(3, 5, tfarrs);

	return 0;
}

void copy_vla(int row, int col, double source[row][col], double target[row][col])
{
	int i, j;

	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			target[i][j] = source[i][j];
		}
	}
}

void display_vla(int row, int col, double arr[row][col])
{
	int i, j;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			printf("%f\t", arr[i][j]);
		}
		putchar('\n');
	}
}