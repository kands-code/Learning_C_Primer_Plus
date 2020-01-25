/* pe08.c -- show your car is good or not */
#include <stdio.h>
#define L 3.785
#define KM 1.609
int main(void)
{
    float miles, gallons;
    float liters, km;
    float mpg, lphk;    // miles per gallons, liters per 100km
    printf("Enter the miles you traveled: ");
    scanf("%f", &miles);
    printf("Enter the gasoline you used in gallons: ");
    scanf("%f", &gallons);
    mpg = miles / gallons;
    liters = gallons * L;
    km = miles * KM;
    lphk = 100 * liters / km;
    printf("in miles-per-gallons is %.1f miles-per-gallons\n", mpg);
    printf("in liters-per-100km is %.1f liters-per-100km\n", lphk);

    return 0;
}