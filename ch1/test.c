#include <stdio.h> 

int main(void) {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '1') {
			c = EOF;
		}
		else putchar(c);
	}
	return 0;
}
