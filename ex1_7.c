/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-7: Write a program to print the value of EOF.
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

	while ((c = getchar()) != EOF) {
		putchar(c);
	}
}

void EOFvalue() {
	int c;

	printf("%d", c = EOF);
	printf("\n");
}

int main() {
	//copyPrintCharInefficient();
	//printf("\n");
	//copyPrintCharEfficient();
	EOFvalue();
}

/* OUTPUT
 *
 * >>> cc ex1_7.c
 * >>> ./a.out
 * -1
 * >>>
 */
