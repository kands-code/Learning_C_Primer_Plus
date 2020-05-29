/* pe04.c -- read only one word and limit the length */
#include <stdio.h>
#include <ctype.h>
// declare
void read_word(char arr[], int len);

int main(void)
{
    char arr[20];
    read_word(arr, 19);
    printf("@start\n#%s#\n@end\n", arr);

    return 0;
}

// definition
void read_word(char arr[], int len)
{
    int i;
    char temp;
    // skip over leading white space
    while (isspace(temp = getchar()));
    for (i = 0; !isspace(temp) && i < len; i++)
    {
        arr[i] = temp;
        temp = getchar();
    }
}