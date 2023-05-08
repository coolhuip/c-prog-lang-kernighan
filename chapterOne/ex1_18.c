/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-18: Write a program to remove trailing blanks and tabs from each
 *                line of input, and to delete entirely blank lines.
 *
 * Modified solution from:
 * https://seriouscomputerist.atariverse.com/media/pdf/book/C%20Answer%20Book.pdf
 *
 */
#include <stdio.h>
#define MAXLINE 1000


int getLine(char line[],int maxline);
int removeBlanks(char s[]);

/*
 * Remove trailing blank lines & tabs.
 * Remove blank lines altogether.
 */
int main() {
	char line[MAXLINE];

	while (getLine(line, MAXLINE) > 0)
		if (removeBlanks(line) > 0)
			printf("%s", line);

	return 0;
}

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
 * Remove trailing blanks and tabs from character string s.
 */
int removeBlanks(char s[]) {
	int i;

	i = 0;
	while (s[i] != '\n')    // find newline character
		i++;
	i--;                    // back off from '\n'
	while (i >= 0 && (s[i] == ' ' || s[i]  == '\t'))
		i--;
	if (i >= 0) {           // is it a non-blank line?
		i++;
		s[i] = '\n';    // put newline character back
		i++;
		s[i] = '\0';    // terminate the string
	}

	return i;
}

/* OUTPUT

>>> cc ex1_18.c
>>> ./a.out
jldaksfjdlksf
jldaksfjdlksf
sdklfjdskaf adjsklf jdsaf
sdklfjdskaf adjsklf jdsaf

sdlakfjadslkfjadsl;kfjdsal;fkajdsflk
sdlakfjadslkfjadsl;kfjdsal;fkajdsflk

sdakfjadslkf jdlkf jasdlfkj ldks
sdakfjadslkf jdlkf jasdlfkj ldks
asldkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkjfkladsjfldksfjlkdasjf  sdaffadfs                                                                 lkjdasfkdjsflk;dsajfklad;sfjkladsfjadlksfj
asldkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkkjfkladsjfldksfjlkdasjf  sdaffadfs                                                                 lkjdasfkdjsflk;dsajfklad;sfjkladsfjadlksfj
adsfjl           jfad sssssssssssssssssssssssssssssssssssssssssssssssssssssss                                                              kjlkjjlkdjslfk

adsfjl           jfad sssssssssssssssssssssssssssssssssssssssssssssssssssssss                                                                              kjlkjjlkdjslfk
sadfsdf
sadfsdf
jsdlfkadjklf
jsdlfkadjklf
kjfdasfffffffffffffffffffffffffffffffffffffffffaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
kjfdasfffffffffffffffffffffffffffffffffffffffffaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa

aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
>>>

 */
