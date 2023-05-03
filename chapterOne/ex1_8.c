/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-8: Write a program to count blanks, tabs, and newlines.
 *
 */
#include <stdio.h>


int main() {
	int nlc, c;

	nlc = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == ' ' || c == '\t')
			++nlc;
	}
	printf("Count: %d\n", nlc);
}

/* OUTPUT
 *
 * >>> cc ex1_8.c
 * >>> ./a.out
 * ___this is some text
 * ___tabbed	line
 * ___CTRL-D
 * Count: 6
 * >>>
 */
