/*  pe03.c -- output the floating-point number */
#include <stdio.h>
int main(void)
{
    double a1;
    // the number book use is 21.29
    scanf("%lf", &a1);
    printf("a)  The input is %.1f or %.1e.\n", a1, a1);
    printf("b)  The input is %+.3f or %.3E.\n", a1, a1);

    return 0;
}