/* pe02.c -- find the biggest on */
#include <stdio.h>

// maximum in the array --> mia
int mia(int array[], int len);

int main(void)
{
    int arr[10] = {1, 9, 10, 8, 44, 7, 6, 5, 2, 3};
    int max = mia(arr, 10);

    printf("The maximum of arr is %d\n", max);
    return 0;
}

int mia(int array[], int len)
{
    int i, index = 0;

    for (i = 0; i < len; i++)
    {
        if (array[i] > array[index])
        {
            index = i;
        }
    }
    
    return array[index];
}