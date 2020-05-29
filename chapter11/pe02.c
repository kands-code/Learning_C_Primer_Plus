/* pe02.c -- modify the fetch_in to stop inputing after the space or n character */
#include <stdio.h>
#include <ctype.h>
//declare
void fetch_in(char arr[], int n);

// test
int main(void)
{
    char arr[20];
    fetch_in(arr, 20);
    printf("@start\n#%s#\n@end\n", arr);

    return 0;
}

// definition
void fetch_in(char arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        arr[i] = getchar();
        if (isspace(arr[i]))
            return;
    }
}