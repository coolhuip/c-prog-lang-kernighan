/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-13: Write a program to print a histogram of the lengths of words
 *                in its input. It's easy to draw the histogram with the bars
 *                horizontal; a vertical orientation is more challenging.
 */
#include <stdio.h>

#define IN  1
#define OUT 0


int main() {	
	int userChoice, i, c, state, wordCount, wordLength;

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
 * >>> cc ex1_13.c
 * >>> ./a.out
 * Vertical histogram? Horizontal histogram? Choose.
 * Enter v or h: ___a
 *
 * Invalid input. Exiting program...
 * >>>
 * >>> ./a.out
 * Vertical histogram? Horizontal histogram? Choose.
 * Enter v or h: ___h
 *
 * ___ I got the mutant turtle squad beside me, poison pen, youtube.com, lauryn hill, mistah fab
 * Word #1:   |||
 * Word #2:   |||||||||
 * Word #3:   |||||||||
 * Word #4:   ||||||||||||||||||
 * Word #5:   ||||||||||||||||||
 * Word #6:   |||||||||||||||
 * Word #7:   ||||||||||||||||||
 * Word #8:   |||||||||
 * Word #9:   ||||||||||||||||||
 * Word #10:  ||||||||||||
 * Word #11:  ||||||||||||||||||||||||||||||||||||
 * Word #12:  ||||||||||||||||||
 * Word #13:  |||||||||||||||
 * Word #14:  ||||||||||||||||||
 * Word #15:  |||||||||
 * ___CTRL-D
 * >>>
 */
