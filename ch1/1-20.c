/*
 * 1-20: Write a program detab that replaces tabs in the input 
 * with the proper number of blanks to space to the next 
 * tab stop. Assume a fixed set of tab stops, say every n 
 * columns. Should n be a variable or a symbolic parameter?
 * */

#include <stdio.h>

#define MAX_CHARS 11
#define TABSTOP 4

char line[MAX_CHARS];
int len/*, column*/;

int get_line(void);
void detab(void);

int main(void) {
	extern int len;
	while ((len = get_line()) > 0) {
		detab();
	}
	return 0;
}

int get_line(void) {
	extern char line[];
	int i, c;

	for (i = 0; i < MAX_CHARS - 1
			&& (c = getchar()) != EOF
			&& c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void detab(void) {
	extern char line[];
	extern int len;
	int i, j, column, next_tabstop;

	column = 0;
	for (i = 0; i < len; i++) {
		if (line[i] == '\t') {
			next_tabstop = TABSTOP - (column % TABSTOP);
			for (j = 0; j < next_tabstop; ++j) {
				putchar('.');
				++column;
			}
		}
		else {
			putchar(line[i]);
			++column;
		}
	}
}
