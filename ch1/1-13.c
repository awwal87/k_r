/*
 * 1-13: Write a program to print a histogram of the lengths of words in its input. 
 * */

#include <stdio.h>

int main(void) {
	int c, wordLen, i;
	wordLen = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			printf(": ");
			for (i = 0; i < wordLen; ++i)
				putchar('|');
			putchar('\n');	
			wordLen = 0;
			while ((c = getchar()) == ' ' || c == '\t' || c == '\n');
			if (c != EOF) putchar(c);
			++wordLen;
		}
		else {
			putchar(c);
			++wordLen;
		}
	}
	return 0;
}
