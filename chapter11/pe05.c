/* pe05.c -- design a function work as strchr() do */
#include <stdio.h>

// srccstr --> search character in a string
char * srccstr(char * str, char ch);

int main(void)
{
    char * str = "We are together!";
    char ch1 = 'W', ch2 = 'r', ch3 = 'v';
    char *res1, *res2, *res3;

    res1 = srccstr(str, ch1);
    res2 = srccstr(str, ch2);
    res3 = srccstr(str, ch3);

    printf("%p, is %c\n", res1, *res1);
    printf("%p, is %c\n", res2, *res2);
    if (res3 == NULL)
        printf("Can't find the character 'v'.\n");
    else
        printf("Yes, we find %p", res3);

    return 0;
}

char * srccstr(char * str, char ch)
{
    char * res = NULL;
    for (res = str; *res != ch && *res != '\0'; res++);
    if (*res == '\0')
        res = NULL;

    return res;
}