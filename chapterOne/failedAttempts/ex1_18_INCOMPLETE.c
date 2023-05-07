/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-18: Write a program to remove trailing blanks and tabs from each
 *                line of input, and to delete entirely blank lines.
 */
#include <stdio.h>
#define MAXLINE 1000


int getLine(char line[], int maxline);

/*
 * You must terminate this program manually by hitting CTRL-D.
 */
int main() {
	int i, c, len, blankLine;
	char inputLine[MAXLINE];

	while ((lineContainsChar = getLine(inputLine, MAXLINE)) != 0) {
		if (lineContainsChar)
			printf("%s", inputLine);
	}

	return 0;
}

/*
 * Return -1 if the input line is entirely blank.
 * Return 1 otherwise.
 */
int getLine(char line[], int maxline) {
	int i, c, lineContainsChar, trailSpace;

	lineContainsChar = -1;
	trailSpace = 0;
	for (i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; i++) {
		line[i] = c;
		if (c != '\n' || c != '\t' || c != ' ') {
			trailSpace = 0;
			lineContainsChar = 1;
		} else {
			trailSpace++;
		}
	}
	if (c == '\n') {
		line[i - trailSpace] = c;
		i++;
	}
	line[i - trailSpace] = '\0';

	return lineContainsChar;
}


/* OUTPUT
 *
 * >>> cc ex1_18.c
 * >>> ./a.out
 *
 * >>>
 */
