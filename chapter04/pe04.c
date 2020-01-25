/* pe04.c -- display your name and height in inches */
#include <stdio.h>
int main(void)
{
    char name[20];
    float height;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your height in inches: ");
    scanf("%f", &height);

    printf("%s, you are %.3f feet tall\n", name, height);

    return 0;
}