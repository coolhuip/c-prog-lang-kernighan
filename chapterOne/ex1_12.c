/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-12: Write a program that prints its input one word per line.
 *
 */
#include <stdio.h>

#define IN  1
#define OUT 0


int main() {
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF) {
		if (c == '\n' || c == '\t' || c == ' ') {
			if (state == IN) {
				state = OUT;
				putchar('\n');
			}
		} else state = IN;
		if (state == IN) putchar(c);
	}
        putchar('\n');
}

/* OUTPUT

>>> cc ex1_12.c
>>> ./a.out
___Hello, 		world     !
Hello,
world
!
___CTRL-D

>>> ./a.out
___Hello, world !
Hello,
world
!
___CTRL-D

>>>

 */
