/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-7: Write a program to print the value of EOF.
 *
 */
#include <stdio.h>


/*
 * Print the integer value of EOF.
 */
int main() {
	int c;

	printf("%d", c = EOF);
	printf("\n");
}

/* OUTPUT
 *
 * >>> cc ex1_7.c
 * >>> ./a.out
 * -1
 * >>>
 */
