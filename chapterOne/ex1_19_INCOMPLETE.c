/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-19: Write a function reverse(s) that reverses the character
 *                string s. Use it to write a program that reverses its input
 *                a line at a time.
 */
#include <stdio.h>
#define MAXLINE 1000


int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/*
 * Print the longest input line.
 */
int main() {
	int len, max;
	char currLine[MAXLINE], longestLine[MAXLINE];

	while ((len = getLine(currLine, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longestLine, currLine);
		}
	if (max > 0)   // If there was a line at all
		printf("%s", longestLine);

	return 0;
}

/*
 * Read a line into 'line'. Return length.
 */
int getLine(char line[], int maxline) {
	int i, c;

	for (i=0; i<maxline-1 && (c=getchar())!=EOF && c!='\n'; i++)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}

/*
 * Copy 'from' into 'to'. Assume 'to' is large enough.
 */
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		i++;

}

/* OUTPUT
 *
 * >>> cc ex1_19.c
 * >>> ./a.out
 *
 * >>>
 */
