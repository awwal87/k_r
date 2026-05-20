#include <stdio.h>

#define SIZE 20

int main(void) {
	int c, i, j;
	int len[SIZE];

	printf("==== %d word histogram plotter ====\n", SIZE);
	for (i = 0; i < SIZE; i++) len[i] = 0;
	i = 0;
	while ((c = getchar()) != EOF && i < SIZE) {
		if (c == ' ' || c == '\t' || c == '\n') {
			++i;
		}
		else ++len[i];
	}
	for (i = 0; i < SIZE; ++i) {
		// printf("Word %d:\t", i + 1);
		for (j = 0; j < len[i]; ++j) putchar('|');
		putchar('\n');
	}
	for (i = 0; i < SIZE; i++) printf("%d ", len[i]);
	printf("\n");
	return 0;
}
