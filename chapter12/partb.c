// partb.c -- rest of program
// compile with parta.c
#include <stdio.h>

extern int count;           // reference declaration, external linakge

static int total = 0;       // static definition, internal linakge
void accumulate(int k);     // prototype


void accumulate(int k)      // k has block scope, no linakge
{
    static int subtotal = 0;    // static, no linakge
    if (k <= 0)
    {
        printf("loop cycle: %d\n", count);
        printf("subtotal: %d; total: %d\n", subtotal, total);
        subtotal = 0;
    }
    else
    {
        subtotal += k;
        total += k;
    }
}
