/* pe09.c -- converts temperature */
#include <stdio.h>
const double U = 5.0;
const double D = 9.0;
const double M = 32.0;
const double CK = 273.16;

void Temperatures(double fahrenheit);

int main(void) {
	double fahrenheit;
	printf("Enter the temperature: ");
	while(scanf("%lf", &fahrenheit) == 1) {
		Temperatures(fahrenheit);

		printf("Enter the temperature(enter nonnumeric to quit): ");
	}

	printf("Bye!\n");

	return 0;
}

void Temperatures(double fahrenheit) {
	double celsius, kelvin;

	celsius = U/D*(fahrenheit-M);

	kelvin = celsius + CK;

	printf("Temperature in Fahrenheit is %.2f℉, in Celsius is %.2f℃, in Kelvin is %.2fK\n", fahrenheit, celsius, kelvin);
}
