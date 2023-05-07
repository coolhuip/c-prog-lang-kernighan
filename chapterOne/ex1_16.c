/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-16: Revise the main routine of the longest-line program so it
 *                will correctly print the length of arbitrarily long input
 *                lines, and as much as possible of the text.
 *
 * "Don't over think shit." - Kenny Beats
 *
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

	max = 0;
	while ((len = getLine(currLine, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longestLine, currLine);
		}
	printf("Characters in Longest Line: %d\n", max);
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
 * >>> cc ex1_16.c
 * >>> ./a.out
 * ___hello,
 * ___world
 * ___will the real
 * ___slim shady please
 * ___stand up
 * ___idk what to write here
 * ___CTRL-D
 * Characters in Longest Line: 23
 * idk what to write here
 * >>>
 */
