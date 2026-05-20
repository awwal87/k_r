#include <stdio.h> 
#define MAXCHARS 8

int main(void) {
	int i, c;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; i++);
	putchar('A' - i);
	int j = 65;
	putchar(j);
	return 0;
}
