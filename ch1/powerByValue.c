#include <stdio.h>

int power(int base, int n);

int main(void) {
	int i;
	printf("base   2^base  -3^base\n");
	for (i = 0; i < 10; ++i)
		printf("%4d %8d %8d\n", i, power(2, i), power(-3, i));
	return 0;
}

int power(int base, int n) {
	int p;
	for (p = 1; n > 0; --n) p = p * base;
	return p;
}
