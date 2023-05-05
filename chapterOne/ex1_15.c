/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-15: Rewrite the temperature conversion program of Section 1.2
 *                to use a function for conversion.
 */
#include <stdio.h>


float fahrenheitToCelcius(float fahr);

float celciusToFahrenheit(float celc);

int main() {
	float 
}

float fahrenheitToCelcius(float fahr) {
	return (5.0 / 9.0) * (fahr - 32);
}

float celciusToFahrenheit(float celc) {
	return (9.0 * celc / 5.0) + 32;
}

/* OUTPUT
 *
 * >>> cc ex1_3.c
 * >>> ./a.out
 * FAHRENHEIT     CELCIUS
 *        0.0       -17.8
 *       20.0        -6.7
 *       40.0         4.4
 *       60.0        15.6
 *       80.0        26.7
 *      100.0        37.8
 *      120.0        48.9
 *      140.0        60.0
 *      160.0        71.1
 *      180.0        82.2
 *      200.0        93.3
 *      220.0       104.4
 *      240.0       115.6
 *      260.0       126.7
 *      280.0       137.8
 *      300.0       148.9
 * >>>
 */
