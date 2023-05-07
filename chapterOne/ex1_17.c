/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-17: Write a program to print all input lines that are longer
 *                than 80 characters.
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
		if (len > 80) {
			printf("%d characters:\n", len);
			printf("%s", currLine);
		}
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

/* OUTPUT

>>> cc ex1_17.c
>>> ./a.out
___This is some line that is supposed to be longer than 80 characters. So, here it is.
84 characters:
This is some line that is supposed to be longer than 80 characters. So, here it is.
___This line is NOT longer than 80 characters
___abcdefghijklmnop
___lllllllllllllllllllllljffffffffffffffffffffffffffffffffsksssssssssssssssssssssssssssssssssssssssssssssssssssssiiiiiiiiiiiiiiiiiiiiiiiaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
190 characters:
lllllllllllllllllllllljffffffffffffffffffffffffffffffffsksssssssssssssssssssssssssssssssssssssssssssssssssssssiiiiiiiiiiiiiiiiiiiiiiiaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
___                                                                                                                                                                                                            
200 characters:
                                                                                                                                                                                                            
___last input line
___CTRL-D
>>>

 */
