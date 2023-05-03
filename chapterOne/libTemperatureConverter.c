/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Pertains to Exercises 1-3, 1-4, 1-5
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

