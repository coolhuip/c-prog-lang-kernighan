/*
 * "The C Programming Language" - Brian W. Kernighan, Dennis M. Ritchie
 * Second Edition
 *
 * Exercise 1-14: Write a program to print a histogram of the frequencies of
 *                different characters in its input.
 */
#include <stdio.h>
#include <ctype.h>
// <ctype.h> defines isprint().
//     --> isprint() returns 0 (false) or a non-zero (true) depending on
//         whether the argument character is printable or not. 

#define MAXHIST 15   // max. histogram length
#define MAXCHAR 128  // max. different characters


/*
 * Print horizontal histogram freq. of different characters.
 * ---------------------------------------------------------
 * Modified solution from:
 * https://seriouscomputerist.atariverse.com/media/pdf/book/C%20Answer%20Book.pdf
 */
int main() {	
	int c, i;
	int len;      // length of each bar
	int maxVal;   // max. value for cc[]
	int charCounter[MAXCHAR] = {0} ;  // character counter; init to 0's

	while ((c = getchar()) != EOF)
		if (c < MAXCHAR)
			charCounter[c]++;
	maxVal = 0;
	for (i = 1; i < MAXCHAR; i++)
		if (charCounter[i] > maxVal)
			maxVal = charCounter[i];

	for (i = 1; i < MAXCHAR; i++) {
		if (isprint(i))   /* Some special characters (e.g., newline) are NOT printable */
			printf("%5d - %c - %5d : ", i, i, charCounter[i]);
		else
			printf("%5d -   - %5d : ", i, charCounter[i]);

		if (charCounter[i] > 0) {
			if ((len=charCounter[i] * MAXHIST / maxVal) <= 0)
				len = 1;
		} else len = 0;

		while (len > 0) {
			putchar('*');
			len--;
		}
		putchar('\n');
	}
}

/* OUTPUT

>>> cc ex1_14.c
>>> ./a.out
___Lorem ipsum dolor sit amet, consectetur adipiscing elit. Cras vel sollicitudin tellus. Donec nisi massa, commodo vel metus ut, porta semper mauris. Praesent porta mauris molestie mauris rhoncus viverra. Curabitur interdum tincidunt nunc a sollicitudin. Ut bibendum rutrum efficitur. Nam eget nisi dui. Praesent nisl orci, tincidunt non purus tempor, mollis dapibus leo.
___CTRL-D
    1 -   -     0 :
    2 -   -     0 :
    3 -   -     0 :
    4 -   -     0 :
    5 -   -     0 :
    6 -   -     0 :
    7 -   -     0 :
    8 -   -     0 :
    9 -   -     0 :
   10 -   -     1 : *
   11 -   -     0 :
   12 -   -     0 :
   13 -   -     0 :
   14 -   -     0 :
   15 -   -     0 :
   16 -   -     0 :
   17 -   -     0 :
   18 -   -     0 :
   19 -   -     0 :
   20 -   -     0 :
   21 -   -     0 :
   22 -   -     0 :
   23 -   -     0 :
   24 -   -     0 :
   25 -   -     0 :
   26 -   -     0 :
   27 -   -     0 :
   28 -   -     0 :
   29 -   -     0 :
   30 -   -     0 :
   31 -   -     0 :
   32 -   -    52 : ***************
   33 - ! -     0 :
   34 - " -     0 :
   35 - # -     0 :
   36 - $ -     0 :
   37 - % -     0 :
   38 - & -     0 :
   39 - ' -     0 :
   40 - ( -     0 :
   41 - ) -     0 :
   42 - * -     0 :
   43 - + -     0 :
   44 - , -     5 : *
   45 - - -     0 :
   46 - . -     8 : **
   47 - / -     0 :
   48 - 0 -     0 :
   49 - 1 -     0 :
   50 - 2 -     0 :
   51 - 3 -     0 :
   52 - 4 -     0 :
   53 - 5 -     0 :
   54 - 6 -     0 :
   55 - 7 -     0 :
   56 - 8 -     0 :
   57 - 9 -     0 :
   58 - : -     0 :
   59 - ; -     0 :
   60 - < -     0 :
   61 - = -     0 :
   62 - > -     0 :
   63 - ? -     0 :
   64 - @ -     0 :
   65 - A -     0 :
   66 - B -     0 :
   67 - C -     2 : *
   68 - D -     1 : *
   69 - E -     0 :
   70 - F -     0 :
   71 - G -     0 :
   72 - H -     0 :
   73 - I -     0 :
   74 - J -     0 :
   75 - K -     0 :
   76 - L -     1 : *
   77 - M -     0 :
   78 - N -     1 : *
   79 - O -     0 :
   80 - P -     2 : *
   81 - Q -     0 :
   82 - R -     0 :
   83 - S -     0 :
   84 - T -     0 :
   85 - U -     1 : *
   86 - V -     0 :
   87 - W -     0 :
   88 - X -     0 :
   89 - Y -     0 :
   90 - Z -     0 :
   91 - [ -     0 :
   92 - \ -     0 :
   93 - ] -     0 :
   94 - ^ -     0 :
   95 - _ -     0 :
   96 - ` -     0 :
   97 - a -    17 : ****
   98 - b -     4 : *
   99 - c -    13 : ***
  100 - d -    11 : ***
  101 - e -    26 : *******
  102 - f -     2 : *
  103 - g -     2 : *
  104 - h -     1 : *
  105 - i -    35 : **********
  106 - j -     0 :
  107 - k -     0 :
  108 - l -    15 : ****
  109 - m -    18 : *****
  110 - n -    21 : ******
  111 - o -    19 : *****
  112 - p -     8 : **
  113 - q -     0 :
  114 - r -    24 : ******
  115 - s -    25 : *******
  116 - t -    26 : *******
  117 - u -    25 : *******
  118 - v -     4 : *
  119 - w -     0 :
  120 - x -     0 :
  121 - y -     0 :
  122 - z -     0 :
  123 - { -     0 :
  124 - | -     0 :
  125 - } -     0 :
  126 - ~ -     0 :
  127 -   -     0 :
>>>

 */
