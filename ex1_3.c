/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-3: Modify the temperature conversion program to print a heading above the table.
 *
 */
#include <stdio.h>


/*
 * Formula: C = (5/9)(F-32)
 */
void intFahrCelciusConversion() {
	int fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		// celcius = (5/9) * (fahr - 32);  <-- You CANNOT do it this way...
		// 				       ...b/c: The operation 5/9 yields a truncated integer ZERO.
		//                                             You would, instead, need 5.0/9.0 if celcius is FLOAT.
		celcius = 5 * (fahr - 32) / 9;
		printf("%3d%6d\n", fahr, celcius);
		fahr += step;
	}
}

void floatFahrCelciusConversion() {
	float fahr, celcius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celcius = (5.0/9.0) * (fahr - 32);
		printf("%5.1f%6.1f\n", fahr, celcius);
		fahr += step;
	}
}

void modifiedFahrCelciusConversion() {
	float fahr, celcius;
	int lower, upper, step;
	char strFahr[] = "FAHRENHEIT";
        char strCelcius[] = "CELCIUS";
	lower = 0;
	upper = 300;
	step = 20;

	printf("%10s%10s\n", strFahr, strCelcius);

	fahr = lower;
	while (fahr <= upper) {
		celcius = (5.0/9.0) * (fahr - 32);
		printf("%10.1f%10.1f\n", fahr, celcius);
		fahr += step;
	}
}

int main() {
	modifiedFahrCelciusConversion();
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
