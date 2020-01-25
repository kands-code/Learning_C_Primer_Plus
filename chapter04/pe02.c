/* pe02.c -- print your first name */
#include <stdio.h>
#include <string.h>
int main(void)
{
    char first[20]; // variable, used to store your first name
    int num, needs;
    printf("Enter your first name: ");
    scanf("%s", first);
    // use the strlen() function to get the length of your name
    num = strlen(first);
    needs = num + 3;
    // use escape sequence to print \"
    printf("a)  \"%s\"\n", first);
    printf("b)  \"%20s\"\n", first);
    printf("c)  \"%-20s\"\n", first);
    // use the modifier '*'
    printf("d)  '%*s'\n", needs, first);

    return 0;
}