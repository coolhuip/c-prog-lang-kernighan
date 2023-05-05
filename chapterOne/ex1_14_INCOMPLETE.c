/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-14: Write a program to print a histogram of the frequencies of
 *                different characters in its input.
 */
#include <stdio.h>


/*
 * Print a histogram of the frequencies of the following characters:
 *      a-z charFreq[0:25]
 *      A-Z charFreq[26:51]
 *      0-9 charFreq[52:61]
 *      ' ' charFreq[62]
 *      \n  charFreq[63]
 *      \t  charFreq[64]
 * Treat all other characters (e.g., punctuation marks) as "other characters"
 */
int main() {	
	int charFreq[65];  // By default, C arrays are initialized to zeros.
	int userChoice, i, c;

	printf("Vertical histogram? Horizontal histogram? Choose.\n");
	printf("Enter v or h: ");
	userChoice = getchar();

	if (userChoice != 'v' && userChoice != 'h')
		printf("\nInvalid input. Exiting program...\n");

	else if (userChoice == 'h') {
		/* Horizontal histogram NOT implemented */
	}

	else {
		/* Vertical histogram NOT implemented */
	}
}

/* OUTPUT
 *
 * >>> cc ex1_14.c
 * >>> ./a.out
 * Vertical histogram? Horizontal histogram? Choose.
 * Enter v or h: ___a
 *
 * Invalid input. Exiting program...
 * >>>
 * >>> ./a.out
 * Vertical histogram? Horizontal histogram? Choose.
 * Enter v or h: ___
 *
 */
