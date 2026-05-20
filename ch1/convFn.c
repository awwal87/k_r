#include <stdio.h>

#define UPPER 300 
#define LOWER 0 
#define STEP 20

float conv(float);

int main(void) {
	float fahr;
	fahr = LOWER;

	printf("===== FAHRENHEIT TO CELSIUS CONVERTER =====\n");
	printf("Fahrenheit Celsius\n");
	while (fahr <= UPPER) {
		printf("%10.2f %7.2f \n", fahr, conv(fahr));
		fahr += STEP;
	}
	return 0;
}

float conv(float fahr) {
	float celsius;
	celsius = 5.0/9.0 * (fahr - 32);
	return celsius;
}
