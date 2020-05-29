/* pe01.c -- design a function to get input */
#include <stdio.h>

// declare
void fetch_in(char arr[], int n);

// test
int main(void)
{
    char arr[10];
    fetch_in(arr, 9);
    printf("@start\n#%s#\n@end\n", arr);

    return 0;
}

// definition
void fetch_in(char arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        arr[i] = getchar();
}