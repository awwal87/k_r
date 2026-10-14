#include <stdio.h>

float convert(float fahrenheit);

/*celsius = convert(fahrenheit);
  printf("%.3f\n", celsius);*/
int main(void) {
	int step;
	float fahrenheit, celsius;
	
	fahrenheit = 300;
	step = 20;
	
	while ((fahrenheit >= 0)) {
		celsius = convert(fahrenheit);
		printf("%6.1f ", fahrenheit);
		printf("%9.4f\n", celsius);
		fahrenheit -= step;
	}
	
	return 0;
}

float convert(float fahrenheit) {
	float celsius;
	celsius = (5.0/9.0) * (fahrenheit - 32);
	return celsius;
}

