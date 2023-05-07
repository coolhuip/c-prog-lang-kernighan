/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-15: Rewrite the temperature conversion program of Section 1.2
 *                to use a function for conversion.
 */
#include <stdio.h>


void fahrenheitToCelcius();
void celciusToFahrenheit();


int main() {
	fahrenheitToCelcius();
	celciusToFahrenheit();
}

void fahrenheitToCelcius() {
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
		celcius = (5.0 / 9.0) * (fahr - 32);
		printf("%10.1f%10.1f\n", fahr, celcius);
		fahr += step;
	}
}

void celciusToFahrenheit() {
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

>>> cc ex1_15.c
>>> ./a.out
FAHRENHEIT     CELCIUS
       0.0       -17.8
      20.0        -6.7
      40.0         4.4
      60.0        15.6
      80.0        26.7
     100.0        37.8
     120.0        48.9
     140.0        60.0
     160.0        71.1
     180.0        82.2
     200.0        93.3
     220.0       104.4
     240.0       115.6
     260.0       126.7
     280.0       137.8
     300.0       148.9
CELCIUS  FAHRENHEIT
  -20.0        -4.0
  -10.0        14.0
    0.0        32.0
   10.0        50.0
   20.0        68.0
   30.0        86.0
   40.0       104.0
   50.0       122.0
   60.0       140.0
   70.0       158.0
   80.0       176.0
   90.0       194.0
  100.0       212.0
  110.0       230.0
  120.0       248.0
  130.0       266.0
>>>

 */
