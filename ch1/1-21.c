/*
 * 1-21: Write a program *entab* that replaces strings of blanks 
 * by the minimum number of tabs and blanks to achieve the same 
 * spacing. Use the same tab stops as for detab. \when either a 
 * tab or a single blank would suffice to reach a tab stop, which
 * should be given preference?
 * */

#include <stdio.h> 

#define MAX_CHARS 11
#define TAB_STOP 4

int line[MAX_CHARS];
int len;

int get_line(void);

int main(void) {
	extern int len;

	while ((len = get_line()) > 0) {
	}
	return 0;
}
