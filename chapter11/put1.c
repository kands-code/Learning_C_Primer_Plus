/* put1.c -- prints a string without aadding \n */
// means not add '\n' automatically
#include <stdio.h>
void put1(const char * string) /* string not altered */
{
    while (*string != '\0')
        putchar(*string++);
}