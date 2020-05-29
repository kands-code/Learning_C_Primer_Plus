/* pe03.c -- design a function which can only read a word */
#include <stdio.h>
#include <ctype.h>
// declare
void read_word(char arr[]);

// test
int main(void)
{
    char arr[20];
    read_word(arr);
    printf("@start\n#%s#\n@end\n", arr);

    return 0;
}

// definition
void read_word(char arr[])
{
    int i;
    char temp;
    // skip over leading white space
    while (isspace(temp = getchar()));
    for (i = 0; !isspace(temp); i++)
    {
        arr[i] = temp;
        temp = getchar();
    }
}