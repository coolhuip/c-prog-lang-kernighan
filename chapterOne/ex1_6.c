/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-6: Verify that the expression getchar() != EOF is 0 or 1.
 *
 */
#include <stdio.h>


/*
 * Improper value assignment.
 */
int main() {
	int c;

	printf("%d", c = (getchar() != EOF));
	printf("\n");
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
