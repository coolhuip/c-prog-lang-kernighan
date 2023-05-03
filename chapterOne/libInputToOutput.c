/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Pertains to Exercises 1-6, 1-7
 *
 */
#include <stdio.h>


/* copy input to output; 1st version */
void copyPrintCharInefficient() {
	int c; // c MUST be int-type, and not char-type, b/c it must be
	       // able to hold EOF character.

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}

}

/* copy input to output; 2nd version */
void copyPrintCharEfficient() {
	int c;

	while ((c = getchar()) != EOF) 
		putchar(c);
}

