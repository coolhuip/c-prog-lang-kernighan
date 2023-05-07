/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-5: Modify the temperature conversion program to print the table
 *               in reverse order (i.e., from 300 degrees to 0).
 *
 */
#include <stdio.h>

#define   LOWER  0
#define   UPPER  300
#define   STEP   20

#define   STR_CELC  "CELCIUS"
#define   STR_FAHR  "FAHRENHEIT"


int main() {
	float fahr, celcius;

	printf("%10s%10s\n", STR_FAHR, STR_CELC);
	for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
		celcius = (5.0/9.0) * (fahr - 32);
		printf("%10.1f%10.1f\n", fahr, celcius);
	}
}

/* OUTPUT

>>> cc ex1_5.c
>>> ./a.out
FAHRENHEIT   CELCIUS
     300.0     148.9
     280.0     137.8
     260.0     126.7
     240.0     115.6
     220.0     104.4
     200.0      93.3
     180.0      82.2
     160.0      71.1
     140.0      60.0
     120.0      48.9
     100.0      37.8
      80.0      26.7
      60.0      15.6
      40.0       4.4
      20.0      -6.7
       0.0     -17.8
>>>

 */
