#include <stdio.h>

int main(void) {
    /* cels = 5.0/9.0 * (fahr - 32) 
     * (cels * 9.0/5.0) + 32 = fahr
     * */
    
    float celsius, fahr;
    float upper, lower, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("==== FAHRENHEIT TO CELSIUS CONVERTER ====\n");
    while (celsius <= upper) {
        fahr = (celsius * 9.0/5.0) + 32;
        printf("%3.0f %6.1f \n", celsius, fahr);
        celsius += step;
    }
    return 0;
}
