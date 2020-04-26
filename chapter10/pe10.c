/* pe10.c -- the sum of two array */
#include <stdio.h>
#define LEN 5

void sum_arr(int * arr_f, int * arr_s, int * sum, int len);
void display(int * arr, int len);

int main(void)
{
	int arr_f[LEN] = {1, 2, 3, 4, 5};
	int arr_s[LEN] = {6, 7, 8, 9, 0};
	int sum[LEN] = {0};
	printf("This was arr_f:\n");
	display(arr_f, LEN);

	printf("This was arr_s:\n");
	display(arr_s, LEN);

	printf("This was sum:\n");
	display(sum, LEN);

	sum_arr(arr_f, arr_s, sum, LEN);

	printf("This is arr_f:\n");
	display(arr_f, LEN);

	printf("This is arr_s:\n");
	display(arr_s, LEN);

	printf("This is sum:\n");
	display(sum, LEN);

	return 0;
}

void sum_arr(int * arr_f, int * arr_s, int * sum, int len)
{
	int i;
	for (i = 0; i < len; ++i)
	{
		sum[i] = arr_f[i] + arr_s[i];
	}
}

void display(int * arr, int len)
{
	int i;
	for (i = 0; i < len; ++i)
	{
		printf("%d\t", arr[i]);
	}
	putchar('\n');
}