/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-6: Verify that the expression getchar() != EOF is 0 or 1.
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

void improperValueAssignment() {
	int c;

	printf("%d", c = (getchar() != EOF));
	printf("\n");
}

int main() {
	//copyPrintCharInefficient();
	//printf("\n");
	//copyPrintCharEfficient();
	improperValueAssignment();
}

/* OUTPUT
 *
 * >>> cc ex1_6.c
 * >>> ./a.out
 * ___CTRL-D
 * 0
 * >>> ./a.out
 * ___idk some input
 * 1
 * >>>
 */
