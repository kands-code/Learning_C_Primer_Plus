/* pe02.c -- uses array function */
#include <stdio.h>
/** C primer plus
 * qestion: Write a program that inintializes an array-of-double
 *          and then copies the contents of array into three other
 *          arrays.
 * need: three function. The first uses array notation, the second
 *       uses pointer notation and the third takes three args, the name
 *       of target, the name of source and the pointer to the last element
 */
void copy_arr(double target[], double source[], int len);
void copy_ptr(double *target, double *source, int len);
void copy_ptrs(double *target, double *source, double *end);

int main(void)
{
    double source[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double target1[5], target2[5], target3[5];
    int i;

    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);

    printf("This is target1\n");
    for (i = 0; i < 5; i++)
    {
        printf("%.1f\t", target1[i]);
    }
    putchar('\n');

    printf("This is target2\n");
    for (i = 0; i < 5; i++)
    {
        printf("%.1f\t", target2[i]);
    }
    putchar('\n');
    printf("This is target3\n");
    for (i = 0; i < 5; i++)
    {
        printf("%.1f\t", target3[i]);
    }
    putchar('\n');

    return 0;
}

void copy_arr(double target[], double source[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        target[i] = source[i];
    }
}

void copy_ptr(double *target, double *source, int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        *(target + i) = *(source + i);
    }
}

void copy_ptrs(double *target, double *source, double *end)
{
    double * i = source;
    for (;i < end; i++, target++)
    {
        *target = *i;
    }
}