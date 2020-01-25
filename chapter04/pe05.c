/* pe05.c -- to show the speed of download */
#include <stdio.h>
int main(void)
{
    float speed, size, time;
    printf("Enter the download speed(Mbs): ");
    scanf("%f", &speed);
    printf("Enter the size of the file: ");
    scanf("%f", &size);
    time = size * 8 / speed;

    printf("At %.2f megabits per second, a file of %.2f megabytes\n", speed, size);
    printf("download in %.2f seconds\n", time);

    return 0;
}