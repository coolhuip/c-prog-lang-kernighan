/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-14: Write a program to print a histogram of the frequencies of
 *                different characters in its input.
 */
#include <stdio.h>

#define IN  1
#define OUT 0


int main() {	
	int userChoice, i, c;

	printf("Vertical histogram? Horizontal histogram? Choose.\n");
	printf("Enter v or h: ");
	userChoice = getchar();

	if (userChoice != 'v' && userChoice != 'h')
		printf("\nInvalid input. Exiting program...\n");

	else if (userChoice == 'h') {
		printf("\n");

		wordCount = 0;
		state = OUT;
		while ((c = getchar()) != EOF) {
			if (c == '\n' || c == '\t' || c == ' ') {
				if (state == IN) {
					state = OUT;
					if (wordCount < 10)
						printf("Word #%d:   "
								, wordCount);
					else if (wordCount >= 10
							&& wordCount < 100)
						printf("Word #%d:  "
								, wordCount);
					else
						printf("Word #%d: "
								, wordCount);
					for (i = 0; i < wordLength; i++)
						printf("|||");
					printf("\n");
				}
			} else if (state == OUT) {
				wordLength = 1; 
				state = IN;
				wordCount++;
			} else if (state == IN) {
				wordLength++;
			}
		}
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
 *
 *
 */
