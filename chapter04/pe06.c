/* pe06.c -- print the length of your name */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char first[20];
    char last[20];
    int f_l, l_l;   //f_l first name length, l_l last name length
    printf("Enter your first name: ");
    scanf("%s", first);
    printf("Enter your last name: ");
    scanf("%s", last);
    // use strlen() function to get the length of your name
    f_l = strlen(first);
    l_l = strlen(last);
    printf("%s %s\n", first, last);
    printf("%*d %*d\n", f_l, f_l, l_l, l_l);
    printf("%s %s\n", first, last);
    printf("%-*d %-*d\n", f_l, f_l, l_l, l_l);

    return 0;
}