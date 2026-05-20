/* program usage info: after running the program type in something then press enter. 
 * the program echoes whatever you type to the screen.
 * use ctrl + d to terminate the program.
 * */

#include <stdio.h>

int main(void) {
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    return 0;
}
