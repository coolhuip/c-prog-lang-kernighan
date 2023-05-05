/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-4: Write a program to print the corresponding Celsius to Fahrenheit above the table.
 *
 */
#include <stdio.h>


/*
 * degF to degC  =>  C = (5/9)(F-32)
 * degC to defF  =>  F = (9/5)C + 32
 */
int main() {
	float fahr, celcius;
	int lower, upper, step;
	char strFahr[] = "FAHRENHEIT";
        char strCelcius[] = "CELCIUS";
	lower = -20;
	upper = 130;
	step = 10;

	printf("%7s%12s\n", strCelcius, strFahr);

	celcius = lower;
	while (celcius <= upper) {
		fahr = (9.0 * celcius / 5.0) + 32;
		printf("%7.1f%12.1f\n", celcius, fahr);
		celcius += step;
	}
}

/* OUTPUT
 *
 * >>> cc ex1_4.c
 * >>> ./a.out
 * CELCIUS  FAHRENHEIT
 *   -20.0        -4.0
 *   -10.0        14.0
 *     0.0        32.0
 *    10.0        50.0
 *    20.0        68.0
 *    30.0        86.0
 *    40.0       104.0
 *    50.0       122.0
 *    60.0       140.0
 *    70.0       158.0
 *    80.0       176.0
 *    90.0       194.0
 *   100.0       212.0
 *   110.0       230.0
 *   120.0       248.0
 *   130.0       266.0
 * >>>
 */
