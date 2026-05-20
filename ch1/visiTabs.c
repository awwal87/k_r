#include <stdio.h> 

int main(void) {
	int c;
	char tab, bspace, bslash;
	tab = '\t';
	bspace = '\b';
	bslash = '\\';
	while ((c = getchar()) != EOF) {
		if (c == tab) {
			putchar('\\');
			putchar('t');
		}
		else if (c == bspace) {
			putchar('\\');
			putchar('b');
		}
		else if (c == bslash) {
			putchar('\\');
			putchar('\\');
		}
		else if (c == ' ') {
			while ((c = getchar()) == ' ');
			putchar(' ');
			putchar(c);
		}
		else if (c == '\n') {
			putchar('\\');
			putchar('n');
		}
		else putchar(c);
	}
	return 0;
}
