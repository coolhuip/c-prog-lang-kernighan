/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-10: Write a program to copy its input to its output, replacing
 *                each tab by \t, each backspace by \b, and each backslash by
 *                \\. This makes tabs and backspaces visible in an unambiguous
 *                way.
 */
#include <stdio.h>


int main() {
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\t') printf("\\t");
		else if (c == '\b') printf("\\b");
		else if (c == '\\') printf("\\\\");
		else putchar(c);
	}
	printf("\n");
}

/* OUTPUT
 *
 * >>> cc ex1_10.c
 * >>> ./a.out
 * ___Hello,	a tab character preceeds. Also, each \ is replaced by \\.
 * Hello,\ta tab character preceeds. Also, each \\ is replaced by \\\\.
 * ___CTRL-D
 *
 * >>>
 */
