#include <stdio.h>

int main(void) {
    long count;
    char c;
    printf("Enter a string of integers: \n");
    for (count = 0; (c = getchar()) != EOF && c != '\n'; ++count) {
        putchar(c);
    }
    printf(" has %ld letters \n", count);
    return 0;
}
