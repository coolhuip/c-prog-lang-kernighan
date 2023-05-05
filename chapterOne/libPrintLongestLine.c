/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Pertains to Exercise 1-16
 *
 * IMPORTANT NOTE: The book uses 'getline()' instead of 'getLine()'.
 *                 getline(), however, now conflicts with an existing
 *                 function already defined within <stdio.h>.
 *
 *                 This is why I use 'getLine()' here, instead.
 */
#include <stdio.h>

#define MAXLINE 1000  // max input line size


int getLine(char line[], int maxline);
void copy(char to[], char from[]);

/*
 * Print the longest input line.
 */
int main() {
	int len;    // current line length
	int max;    // maximum length seen so far
	char line[MAXLINE];       // current input line
	char longest[MAXLINE];    // longest line saved here

	max = 0;
	while ((len = getLine(line, MAXLINE)) > 0)
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	if (max > 0)    // there was a line
		printf("%s", longest);
	return 0;
}

/*
 * Read a line into s, return length.
 */
int getLine(char line[], int maxline) {
	int c, i;

	for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; i++)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		i++;
	}
	line[i] = '\0';
	return i;
}

/*
 * Copy 'from' into 'to'
 * Assume that 'to' is big enough.
 */
void copy(char to[], char from[]) {
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0')
		i++;
}
