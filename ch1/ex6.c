/* program to verify that the expression getchar() != EOF is 0 or 1 */

#include <stdio.h>

int main(void) {
    int value, c;
    printf("Enter a value: \n");
    value = (c = getchar() != EOF);
    printf("getchar() != EOF is %d \n", value);
    return 0;
}
