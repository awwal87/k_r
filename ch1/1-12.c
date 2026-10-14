/*
 * 1-11: Write a program that prints its input one word per line
 * */

#include <stdio.h>

int main(void) {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar('\n');
			while ((c = getchar()) == ' ');
			putchar(c);
		}
		else 
			putchar(c);
	}

	return 0;
}
