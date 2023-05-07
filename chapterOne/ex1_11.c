/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-11: How would you test the word count program? What kinds of
 *                input are most likely to uncover bugs if there are any?
 */
#include <stdio.h>

#define IN  1
#define OUT 2


/*
 * A bare-bones version of the UNIX program wc.
 * --------------------------------------------
 * Count lines, words, and characters in input.
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

int main() {
	printf("wordCount() does NOT account for punctuation marks.\n");
	printf("For instance, if input: \"hello world !\",\n");
	printf("then wordCount() will count 3 words instead of 2.\n");
}

/* OUTPUT

>>> cc ex1_11.c
>>> ./a.out
wordCount() does NOT account for punctuation marks.
For instance, if input: "hello world !",
then wordCount() will count 3 words instead of 2.
>>>

 */
