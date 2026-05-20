#include <stdio.h>

int main(void) {
    int c, nl;
    nl = 0;
    printf("Enter multi-line string: \n");
    while ((c = getchar()) != EOF) {
        if (c == '\n') ++nl;
    }
    printf("Text entered has %i lines \n", nl);
    return 0;
}
