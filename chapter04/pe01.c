/* pe01.c -- print your name in the format last, first */
#include <stdio.h>
int main(void)
{
    char first[20], last[20];
    printf("Enter your first name: ");
    scanf("%s", first);
    printf("Enter your last name: ");
    scanf("%s", last);
    printf("%s,%s\n", last, first);

    return 0;
}