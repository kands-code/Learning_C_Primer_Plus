/* pe06.c -- write a function to test whether the character is in the string you give */
#include <stdio.h>

int is_within(char ch, char * str);

int main(void)
{
    char opt = 'y', ch, str[20];
    int res;
    while (opt == 'y')
    {

        printf("please enter the string you want to use:\n");
        fgets(str, 50, stdin);
        printf("please enter the character you want to find:\n");
        ch = getchar();
        res = is_within(ch, str);
        if (res == -1)
            printf("The string %s is wrong, please check and try again", str);
        else if (res == 0)
            printf("The character %c is not found in %s", ch, str);
        else
            printf("The character %c is the %d character of %s", ch, res, str);
        while (getchar() != '\n')
            scanf("%*s");
        printf("Do you want to continue? (y or n)");
        opt = getchar();
        while (getchar() != '\n')
            scanf("%*s");
    }
    return 0;
}

int is_within(char ch, char * str)
{
    int i = 0;
    if (str == NULL)
        return -1;
    else
    {
        for (i = 0; *(str + i) != '\0'; i++)
        {
            if (*(str + i) == ch)
                return i + 1;
        }
    }

    return 0;
}
