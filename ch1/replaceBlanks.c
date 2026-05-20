#include <stdio.h>

int main(void) {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t') {
			while ((c = getchar()) == ' ' || c == '\t');
			putchar(' ');
			putchar(c);
		}
		else putchar(c);
	}
	return 0;
}
