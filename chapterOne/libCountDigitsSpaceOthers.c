/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Pertains to Exercises 1-13, 1-14
 *
 */
#include <stdio.h>


/*
 * Count the number of occurrences of each digit, of white space characters
 * (blank, tab, newline), and of all other characters.
 */
void countDigitsSpaceOthers() {
	int c, i, nWhite, nOther;
	int nDigit[10];

	nWhite = nOther = 0;
	for (i = 0; i < 10; i++) nDigit[i] = 0; // Initialize array of zeros.

	while ((c = getchar()) != EOF) {
		if (c >= '0' && c <= '9') nDigit[c - '0']++;
		else if (c == '\n' || c == '\t' || c == ' ') nWhite++;
		else nOther++;
	}

	printf("Digits:");
	for (i = 0; i < 10; i++) printf(" %d", nDigit[i]);
	printf("\nWhite spaces: %d\nOthers: %d\n", nWhite, nOther);
}
