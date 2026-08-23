/*
 * Write a program to count blanks, tabs, and newlines.
 * */

#include <stdio.h>

int main(void) {
	int c;
	int blank, tab, newline;
	
	blank = tab = newline = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++blank;
		if (c == '\t')
			++tab;
		if (c == '\n')
			++newline;
	}
	printf("Blanks: %d\n", blank);
	printf("Tabs: %d\n", tab);
	printf("Lines: %d\n", newline);
	return 0;
}
