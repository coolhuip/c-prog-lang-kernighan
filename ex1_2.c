/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-2: Experiment to find out what happens when printf's argument
 *               string contains \c, where \c is not one of the following:
 *                                   ------------------------------------
 *                                       1. \n
 *                                       2. \t
 *                                       3. \b
 *                                       4. \"
 *                                       5. \\
 *
 */
#include <stdio.h>


int main() {
	printf("hello, ");
	printf("world!");
	printf("\c");
	printf("Testing NEWLINE"); 
	printf("\n");
}

/* OUTPUT
 *
 * >>> cc ex1_2.c
 * ex1_2.c: In function ‘main’:
 * ex1_2.c:19:9: warning: unknown escape sequence: '\c'
 *   19 |  printf("\c");
 *      |         ^~~~
 * >>> ./a.out
 * hello, world!cTesting NEWLINE
 * >>>
 */
