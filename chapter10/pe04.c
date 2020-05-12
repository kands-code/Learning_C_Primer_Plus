// pe04.c -- find the index of the maximum
#include <stdio.h>
// index of the maximum --> iom
int iom(double array[], int len);

int main(void)
{
    double arr[5] = {2.2, 4.4, 8.8, 10.2, 1.3};
    int index = iom(arr, 5);

    printf("The index of maximum in array is %d\n", index);
    
    return 0;
}

int iom(double array[], int len)
{
    int i, index = 0;

    for (i = 0; i < len; i++)
    {
        if (array[i] > array[index])
        {
            index = i;
        }
    }

    return index;
}