#include <stdio.h>

int main(void) {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			while ((c = getchar()) == ' ' || c == '\t' || c == '\n');
			putchar('\n');
			putchar(c);
		}
		else putchar(c);
	}
	return 0;
}
