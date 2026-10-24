/*
 * 1-19: Write a function reverse(s) that reverses the 
 * character string s. Use it to write a program that
 * reverses its input a line at a time.
 * */

#include <stdio.h>

#define BUFFER_SIZE 101

int get_line(char s[], int buffer_size);
void reverse(char s[]);

int main(void) {

	char s[BUFFER_SIZE];
	int len, c;

	while ((len = get_line(s, BUFFER_SIZE)) > 0) {
		if (s[len - 1] != '\n') {
			while ((c = getchar()) != '\n' && c != EOF);
		}
		reverse(s);
		printf("%s", s);
		putchar('\n');
	}
	return 0;
}

int get_line(char s[], int buffer_size) {
	int i, c;

	for (i = 0; i < BUFFER_SIZE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void reverse(char s[]) {
	char tmp[BUFFER_SIZE];
	int i, j, k;
	i = j = k = 0;

	// find length of string
	while (s[i] != '\0') 
		++i;

	// reverse string using helper buffer
	for (j = i; j >= 0; --j) {
		if (s[j] != '\0' && s[j] != '\n') {
			tmp[k] = s[j];
			++k;
		}
	}

	tmp[k] = '\0';

	i = 0;
	while ((s[i] = tmp[i]) != '\0')
		++i;
}
