/* pe07.c -- write a function called 'mystrncpy()' */
#include <stdio.h>

char * mystrncpy(char * dest, char * src, int len);

int main(void)
{
    char opt = 'y', src[50], dest[50];
    while (opt == 'y')
    {
        puts("please enter the sentence you want to copy:");
        fgets(src, 49, stdin);
        mystrncpy(dest, src, 49);
        printf("The sentence had been copied from src into dest!\n");
        puts(dest);
        printf("Do you want to continue?(y or n): ");
        opt = getchar();
        while (getchar() != '\n')
            scanf("%*s");
    }

    return 0;
}

char * mystrncpy(char * dest, char * src, int len)
{
    int i = 0;
    for (i = 0; i < len; i++)
    {
        if (*(src + i) != '\0')
            *(dest + i) = *(src + i);
        else break;
    }
    for (;i < len; i++)
        *(dest + i) = '\0';

    return dest;
}
