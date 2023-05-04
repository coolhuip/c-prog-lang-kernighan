/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Pertains to Exercise 1-11
 *
 */
#include <stdio.h>

#define IN  1     // inside a word
#define OUT 0     // outside a word


/*
 * A bare-bones version of the UNIX program wc.
 * --------------------------------------------
 * Count lines, words, and characters in input.
 *
 * NOTE: This function is INCOMPLETE. It will count punctuation marks as
 *       a word if there is space between a word and a punctuation mark.
 *            E.g., "Hello, world !" --> 3 words instead of 2
 */
void wordCount() {
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') ++nl;
		if (c == '\n' || c == '\t' || c == ' ')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("nc: %d\nnw: %d\nnl: %d\n", nc, nw, nl);
}
