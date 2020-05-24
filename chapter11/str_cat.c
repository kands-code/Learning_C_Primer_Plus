/* str_cat.c -- joins two strings */
#include <stdio.h>
#include <string.h>
#define SIZE 80
char * s_gets(char * st, int n);
int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like shoes.";

    puts("What is your favorite flowers?");
    // if return is not NULL (null pointer)
    if (s_gets(flower, SIZE))
    {
        strcat(flower, addon); // append the addon to the flower
        puts(flower);
        puts(addon);
    }
    else
        puts("End of file encountered!");
    puts("bye");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else // must have st[i] == '\0'
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}