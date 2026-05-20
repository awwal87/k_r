#include <stdio.h>

int main(void) {
    int c;
    long nc;
    nc = 0;
    printf("Enter a stream of characters: \n");
    while((c = getchar()) != EOF && c != '\n') {
        ++nc;
    }
    printf("You entered %ld characters. \n", nc);
    return 0;
}
