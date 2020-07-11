/* pe08.c -- write the function string_in() */
#include <stdio.h>

char * string_in(char * dest, char * str);

int main(void)
{
    char opt = 'y', *res;
    char dest[50], str[50];
    while (opt == 'y')
    {
        puts("Please enter the sentence you want to check:");
        fgets(str, 49, stdin);
        puts("Please enter the sentence you want to check in:");
        fgets(dest, 49, stdin);
        res = string_in(dest, str);
        if (res == NULL) puts("Can't find!");
        else printf("The address is %p\n", res);
        printf("Do you want to try again?(y or n): ");
        opt = getchar();
        while (getchar() != '\n')
            scanf("%*s");
    }
    puts("\nFarewell!");

    return 0;
}

char * string_in(char * dest, char * str)
{
    char * s = dest, * t = str, * res = NULL;
    while (*s != '\0')
    {
        if (*s == *t)
        {
            res = s;
            while ((*t != '\0') && (*s != '\0') && (*t == *s))
            {
                s++;
                t++;
            }
            if (*t != '\0') res = NULL;
            else break;
        }
        else s++;
    }

    return res;
}
