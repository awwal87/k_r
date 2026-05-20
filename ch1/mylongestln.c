#include <stdio.h>
#define MAXCHARS 8

int getln(char s[], int lim);
void copy(char to[], char from[]);

int main(void) {
	int curr, longest;
	char currln[MAXCHARS];
	char longestln[MAXCHARS];

	while ((curr = getln(currln, MAXCHARS)) > 0) {
		if (curr > longest) {
			longest = curr;
			copy(longestln, currln);
		}
	}
	printf("longest line: %s[%d characters]\n", longestln, longest);

	return 0;
}

int getln(char s[], int lim) {
	int c, i;

	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i) {
		if (i < lim - 2)
			s[i] = c;
	}
	if (c == '\n') {
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
	return i;
}

void copy(char to[], char from[]) {
	int i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}
