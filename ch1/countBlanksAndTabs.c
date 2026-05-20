#include <stdio.h>

int main(void) {
	int c, tabs, blanks, lines;
	tabs = 0;
	blanks = 0;
	lines = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\t') tabs++;
		if (c == ' ') blanks++;
		if (c == '\n') lines++;
	}
	printf("Your entry has %d tabs, %d blanks, and %d lines. \n", tabs, blanks, lines);
	return 0;
}
