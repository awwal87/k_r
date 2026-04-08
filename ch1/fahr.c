#include <stdio.h>

int main(void) {
    /* c = 5/9 * (fahr-32) */
    float celsius, fahr;
    int upper, lower, step;

    upper = 300;
    lower = 0;
    step = 20;

    fahr = lower;
    printf("==== TEMPERATURE CONVERTER ====\n");
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%3.f %6.1f \n", fahr, celsius);
        fahr += step;
    }
}
