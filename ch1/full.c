#include <stdio.h>
#define MAXCHARS 8
#define LENBUFF 1

char getln(char s[], int lenArr[], int lim);

int main(void) {
	int status;
	char line[MAXCHARS];
	int lenArr[LENBUFF];
	int len;

	len = 0;
	lenArr[0] = 0;
	while ((status = getln(line, lenArr, MAXCHARS)) != '\n') {
		printf("%s", line);
		len += lenArr[0];
		putchar(status);
	}
	len += lenArr[0];
	if (status == '\n') printf("%s[%d characters]\n", line, len);

	return 0;
}

char getln(char s[], int lenArr[], int lim) { 
	int i, c;
	for (i = 0; (c = getchar()) != EOF && c != '\n' && i < lim - 2; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		if (i < lim - 2) {
			s[i] = c;
			s[i + 1] = '\0';
			++i;
		}
		else {
			s[lim - 2] = c;
			s[lim - 1] = '\0';
			++i;
		}
	}
	else if (c == EOF && i > 0) {
		if (i < lim - 2) {
			s[i] = '\n';
			s[i + 1] = '\0';
			++i;
		}
		else {
			s[lim - 2] = '\n';
			s[lim - 1] = '\0';
			++i;
		}
	}
	else ++i;
	lenArr[0] = i;
	return c;
}
