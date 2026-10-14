/*
 * 1-14: Write a program to print a histogram of the 
 * frequencies of different characters in its input.
 * */

#include <stdio.h> 

#define ALPHA_ARR_BUFF 26
#define DIGIT_ARR_BUFF 10
#define OTHER_STR_BUFF 6

int main(void) {
	int c, i, j, other;
	int a, A, zero;
	int alphaArr[ALPHA_ARR_BUFF];
	int digitArr[DIGIT_ARR_BUFF];

	for (i = 0; i < ALPHA_ARR_BUFF; ++i)
		alphaArr[i] = 0;
	for (i = 0; i < DIGIT_ARR_BUFF; ++i)
		digitArr[i] = 0;
	other = 0;

	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z')
			++alphaArr[c - 'a'];
		else if (c >= 'A' && c <= 'Z')
			++alphaArr[c - 'A'];
		else if (c >= '0' && c <= '9')
			++digitArr[c - '0'];
		else
			++other;
	}	

	a = 'a';
	A = 'A';
	for (i = 0; i < ALPHA_ARR_BUFF; i++) {
		printf("%4c/%c: ", a, A);
		for (j = 0; j < alphaArr[i]; j++)
			putchar('|');
		putchar('\n');
		++a;
		++A;
	}

	zero = '0';
	for (i = 0; i < DIGIT_ARR_BUFF; ++i) {
		printf("%6c: ", zero);
		for (j = 0; j < digitArr[i]; j++)
			putchar('|');
		putchar('\n');
		++zero;
	}

	printf(" Other: ");
	for (i = 0; i < other; ++i) {
		putchar('|');
	}
	putchar('\n');

	return 0;
}
