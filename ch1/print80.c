#include <stdio.h>
#define MAXCHARS 80

int getln(char ln[], int maxchars);

int main(void) {
	int lnlen, i;
	char ln[MAXCHARS];

	i = 1;
	printf("Lines greater than 80 characters: \n");
	while ((lnlen = getln(ln, MAXCHARS)) > 0) {
		if (lnlen > MAXCHARS) {
			printf("%d: %s", i, ln);
			++i;
		}
	}

	return 0;
}

int getln(char ln[], int maxchars) {
	int c, i;
	for (i = 0; (c = getchar()) != '\n' && c != EOF; ++i) {
		if (i < maxchars - 2) ln[i] = c;
	}
	if (i < maxchars -2)
	ln[maxchars - 2] = '\n';
	ln[maxchars - 1] = '\0';

	return i;
}
