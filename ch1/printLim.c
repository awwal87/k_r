#include <stdio.h>
#define BUFF 10
#define INFO 2

int getLn(char s[], int info[], int sLim, int infoLim);

int main(void) {
	int end, charCount;
	char buffer[BUFF];
	int info[INFO];

	for (int i = 0; i < INFO; ++i)
		info[i] = 0;

	charCount = end = 0;
	while ((end = getLn(buffer, info, BUFF, INFO)) != EOF) {
		if (info[0] != '\n') {
			charCount += info[1];
			printf("%s", buffer);
		}
		else {
			if (charCount > 0) {
				charCount += info[1];
				printf("%s", buffer);
				printf("[%d characters]\n", charCount);
				charCount = 0;
			}
		}
	}
	return 0;
}

int getLn(char s[], int info[], int sLim, int infoLim) {
	int i, c;
	for (i = 0; (c = getchar()) != EOF && c != '\n' && i < sLim - 2; ++i)
		s[i] = c;

	if (c == '\n') {
		if (i < sLim - 2) {
			s[i] = c;
			s[i + 1] = '\0';
			++i;
			info[0] = c;
			info[1] = i;
		}
		else {
			s[sLim - 2] = c;
			s[sLim - 1] = '\0';
			++i;
			info[0] = c;
			info[1] = i;
		}
	}

	else if (c == EOF && i > 0) {
		if (i < sLim - 2) {
			s[i] = c;
			s[i + 1] = '\0';
			++i;
			info[0] = c;
			info[1] = i;
		}
		else {
			s[sLim - 2] = c;
			s[sLim - 1] = '\0';
			++i;
			info[0] = c;
			info[1] = i;
		}
	}

	else {
		s[i] = c;
		s[i + 1] = '\0';
		++i;
		info[0] = c;
		info[1] = i;
	}

	return c;
}
