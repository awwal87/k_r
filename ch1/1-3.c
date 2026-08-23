/*
 * Modify the temperature conversion program to print a heading above the table.
 * */

#include <stdio.h>

/* 
 * print Fahrenheit-Celsius table for fahr = 0, 20, ..., 300;
 * floating-point version
 * */

int main(void) {
	float fahr, celsius;
	float lower, upper, step;

	printf("=========================================================\n");
	printf("Fahrenheit-Celsius conversion Table (0 - 300F, step = 20)\n");
	printf("=========================================================\n");
	
	lower = 0;	/* lower limit of temperature scale */
	upper = 300;	/* upper limit */
	step = 20;	/* step size */

	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}
