/*
 * Write a program to print the corresponding Celsius-Farenheit table. 
 * */

#include <stdio.h>

/* 
 * print Celsius-Farenheit table for fahr = 0, 20, ..., 300;
 * floating-point version
 * */

int main(void) {
	float fahr, celsius;
	float lower, upper, step;

	printf("=========================================================\n");
	printf("Celsius-Fahrenheit conversion Table (0 - 300C, step = 20)\n");
	printf("=========================================================\n");
	
	lower = 0;		/* lower limit of temperature scale */
	upper = 300;	/* upper limit */
	step = 20;		/* step size */

	celsius = lower;
	while (celsius <= upper) {
		fahr = ((9.0/5.0) * celsius) + 32;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	return 0;
}
