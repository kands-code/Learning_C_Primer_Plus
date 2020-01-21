/* praise1.c -- uses an assortment of strings */
#include <stdio.h>
#define PRAISEL "You are an extraordinary being."
int main(void)
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISEL);

    return 0;
}