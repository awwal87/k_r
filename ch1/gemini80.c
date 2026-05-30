#include <stdio.h>

#define LIMIT 80
#define MAXLINE 100

int get_line(char s[], int lim);

int main(void) {
    int len;
    char line[MAXLINE];

    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > LIMIT) {
            printf("%s", line);
            
            // If the line was longer than our buffer, finish printing the rest of it
            if (line[len - 1] != '\n') {
                int c;
                while ((c = getchar()) != EOF && c != '\n') {
                    putchar(c);
                }
                if (c == '\n') {
                    putchar('\n');
                }
            }
        }
    }
    return 0;
}

/* Reads a line into s, returns its length */
int get_line(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
