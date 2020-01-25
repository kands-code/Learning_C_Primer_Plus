/* pe07.c -- display the value of 1.0/3.0 in float and double */
#include <stdio.h>
#include <float.h>
int main(void)
{
    float f = 1.0/3.0;
    double d = 1.0/3.0;
    printf("%.4f %.4f\n", f, d);
    printf("%.12f %.16f\n", f, d);
    printf("%.16f %.16f\n", f, d);

    printf("%d %d\n", FLT_DIG, DBL_DIG);

    return 0;
}