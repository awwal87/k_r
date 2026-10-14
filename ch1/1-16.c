/*
 * 1-16: Revise the main routine of the longest-line program
 * so it will correctly print the length of arbitrary long
 * input lines, and as much as possible of the text.
 * */

#include <stdio.h>

#define MAX_CHARS 10 // intentionally set to low number for
					 // testing purposes.

int get_line(char buffer[], int max_chars);
void copy(char to[], char from[]);

int main(void) {
	char longest_buffer[MAX_CHARS];
	char processing_buffer[MAX_CHARS];
	int longest_length, processing_length, c;

	longest_length = 0;

	while ((processing_length = get_line(processing_buffer, MAX_CHARS)) > 0) {
		if (processing_buffer[processing_length - 1] != '\n') {
			while ((c = getchar()) != EOF && c != '\n')
				++processing_length;
			if (c == '\n') 
				++processing_length;
		}
		
		if (processing_length >= longest_length) {
			longest_length = processing_length;
			copy(longest_buffer, processing_buffer);
		}
	}
	printf("Longest line: %s [%d characters]\n", longest_buffer, longest_length);
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

void copy(char to[], char from[]) {
	int i;
	i = 0;

	while ((to[i] = from[i]) != '\0')
		++i;
}
