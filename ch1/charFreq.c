#include <stdio.h>

#define SIZE 26
#define NUM 10

int main(void) {
	int c, i, j, other;
	int letters[SIZE];
	int numbers[NUM];

	for (i = 0; i < SIZE; ++i) letters[i] = 0;
	for (i = 0; i < NUM; ++i) numbers[i] = 0;
	other = 0;

	while ((c = getchar()) != EOF) {
		if (c >= 'a' && c <= 'z') ++letters[c - 'a'];
		else if (c >= 'A' && c <= 'Z') ++letters[c - 'A'];
		else if (c >= '0' && c <= '9') ++numbers[c - '0'];
		else if (c != ' ' && c != '\t' && c != '\n') ++other;
	}
	for (i = 0; i < SIZE; ++i) {
		printf("%c(%c): ", 'A' + i, 'a' + i);
		for (j = 0; j < letters[i]; ++j) putchar('|');
		putchar('\n');
	}
	for (i = 0; i < NUM; ++i) {
		printf("%c: ", '0' + i);
		for (j = 0; j < numbers[i]; ++j) putchar('|');
		putchar('\n');
	}
	printf("Other: ");
	for (i = 0; i < other; ++i) putchar('|');
	putchar('\n');
	
	printf("Alphabets: ");
	for (i = 0; i < SIZE; ++i) printf("%d ", letters[i]);
	printf("\nNumbers: ");
	for (i = 0; i < NUM; ++i) printf("%d ", numbers[i]);
	printf("\nOthers: %d\n", other);

	return 0;
}
