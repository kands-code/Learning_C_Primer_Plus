// input.c -- when to use &
#include <stdio.h>
int main(void)
{
    int age;        // variable
    float assets;   // variable
    char pet[30];   // string 

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}