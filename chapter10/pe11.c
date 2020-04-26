/* pe11.c -- display and double a array which is 3x5 */
#include <stdio.h>
#define ROW 3
#define COL 5

void display(int row, int col, int arr[row][col]);
void doubling(int (*arr)[COL], int row);

int main(int argc, char const *argv[])
{
	int arr[ROW][COL] = {
		{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15}
	};
	printf("This was arr:\n");
	display(ROW, COL, arr);

	doubling(arr, 3);

	printf("This is arr:\n");
	display(ROW, COL, arr);

	return 0;
}

void display(int row, int col, int arr[row][col])
{
	int i, j;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		putchar('\n');
	}
}
void doubling(int (*arr)[COL], int row)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < COL; ++j) // "COL" can be changed by "sizeof(arr[i])/sizeof(int)"
		{
			arr[i][j] *= 2;
		}
	}
}
