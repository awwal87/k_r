/*
 * 1-18: Write a program to remove trailing blanks and tabs
 * from each line of input, and to delete entirely blank lines.
 * */

#include <stdio.h>

#define MAX_BLANKS 1000 // buffer size for white-space characters

int getBlanks(char blanksbuffer[], int lim);

int main(void) {
	int loop, c, retVal;
	int prevChar, lastChar;
	int nonEmptyLine;
	char blanksBuffer[MAX_BLANKS];
	loop = 1;
	retVal = prevChar = nonEmptyLine = 0;

	while (loop) {
		c = getchar(); // ingest characters

		// put c in an array and trigger whitespace handling function if whitespace
		if (c == ' ' || c == '\t') {
			blanksBuffer[0] = c;
			retVal = getBlanks(blanksBuffer, MAX_BLANKS); // whitespace handling function
			if (retVal == MAX_BLANKS - 1) {
				printf("ERROR: blanks exceeded buffer capacity\n");
				loop = 0;
			}
			else {
				lastChar = blanksBuffer[retVal - 1];
				if (lastChar == '\n') {
					if (nonEmptyLine) {
						putchar(lastChar);
					}
					nonEmptyLine = 0;
				}
				else {
					printf("%s", blanksBuffer);
					nonEmptyLine = 1;
				}
			}
		}
		else if (c == '\n') {
			if (nonEmptyLine) {
				putchar(c);
				nonEmptyLine = 0;
			}
		}
		else if (c == EOF)
			loop = 0;
		else {
			putchar(c);
			nonEmptyLine = 1;
		}
		prevChar = c;
	}
	printf("%d\n", retVal);
	int i;
	for (i = 0; i < retVal; ++i) {
		printf("%d\n", blanksBuffer[i]);
	}
	printf("%d\n", blanksBuffer[i]);

	return 0;
}

int getBlanks(char blanksBuffer[], int lim) {
	int i, c;
	for (i = 1; i < lim - 1 && (c = getchar()) != EOF && c != '\n' && (c == ' ' || c == '\t'); ++i)
		blanksBuffer[i] = c;
	if (c == '\n' || c != EOF) {
		blanksBuffer[i] = c;
		++i;
	}

	blanksBuffer[i] = '\0';
	return i;
}
