/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-1: Run the "hello, world" program on your system. Experiment
 *               w/ leaving out parts of the program, to see what error
 *               messages you get.
 *
 */
#include <stdio.h>


int main() {
	printf("hello, ");
	printf("world");
	printf("\n");
}

/* OUTPUT
 *
 * >>> cc ex1_1.c
 * >>> ./a.out
 * hello, world
 * >>>
 */
