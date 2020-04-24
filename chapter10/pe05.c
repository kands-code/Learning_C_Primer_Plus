/* pe05.c -- get the difference of the maximum and minimum */
/**
 * question: Write a function that returns the difference
 * between the largest and smallest elements of an array-of-double.
 */

#include <stdio.h>
#define LEN 5
// dbls --> the difference between the largest and the smallest
double dbls(double * arr, int len);

int main(void)
{
	double arr[LEN] = {1.1, 1.2, 1.3, 1.4, 1.5};
	double diff = dbls(arr, LEN);
	
	printf("The difference between the largest and the smallest is %f\n", diff);
	
	return 0;
}

double dbls(double * arr, int len)
{
	int i, j;
	double temp;
	double diff = 0.0;
	
	for (i = 0; i < len - 1; i++)
	{
		for (j = i + 1; j  < len; j++)
		{
			if (j < i)
			{
				temp = i;
				i = j;
				j = temp;
			}
		}
	}
	
	diff = arr[len - 1] - arr[0];
	
	return diff;
}