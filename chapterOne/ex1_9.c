/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-9: Write a program to copy its input to its output, replacing
 *               each string of one or more blanks by a single blank.
 *
 */
#include <stdio.h>


/*
 * Basically, if there are more than one whitespace between any two words,
 * replace those whitespaces with a single one.
 */
int main() {
	int c, prevSpace;

	prevSpace = 0;
	while ((c = getchar()) != EOF) {
		if (c == '\t') c = ' ';
		if (c == ' ' && !prevSpace) {
			putchar(c);
			prevSpace = 1;
		} else if (c != ' ') {
			putchar(c);
			prevSpace = 0;
		}
	}
}

/* OUTPUT
 *
 * >>> cc ex1_9.c
 * >>> ./a.out
 * ___This is       an input 	with too  many redundant spaces  .
 * This is an input with too many redundant spaces .
 * ___CTRL-D
 * >>>
 */
