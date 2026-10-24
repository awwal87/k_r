/*
 * 1-17: Write a program to print all input lines 
 * that are longer than 80 characters.
 * */

#include <stdio.h>

#define MAX_CHARS 12

int get_line(char buffer[], int max_chars);

int main(void) {
	char buffer[MAX_CHARS];
	int line_len, c;

	while ((line_len = get_line(buffer, MAX_CHARS)) > 0) {
		if (line_len > MAX_CHARS - 2) {
			printf("%s", buffer);
			if (buffer[line_len - 1] != '\n') {
				while ((c = getchar()) != EOF && c != '\n') {
					putchar(c);
					++line_len;
				}
				if (c == '\n') {
					putchar(c);
					++line_len;
				}
			}
			printf("%d characters\n", line_len);
		}
	}
	return 0;
}

int get_line(char buffer[], int max_chars) {
	int i, c;

	for (i = 0; i < (max_chars - 1) && (c = getchar()) != EOF && c != '\n'; ++i)
		buffer[i] = c;
	if (c == '\n') {
		buffer[i] = c;
		++i;
	}
	buffer[i] = '\0';
	return i;
}
