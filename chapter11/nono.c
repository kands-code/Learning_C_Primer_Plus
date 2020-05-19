/* nono.c -- noo! */
#include <stdio.h>
int main(void)
{
    // ususally, the compiler stored the side_a after the dont
    char side_a[] = "Side A";
    char dont[] = {'W', 'O', 'W', '!'};
    char side_b[] = "Side B";

    puts(dont);
    // it prints WOW!Side A // usually, not always, may be different

    return 0;
}