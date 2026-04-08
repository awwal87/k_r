/* celsius to farenheit converter with user input (version 2);
 * this is a basic implementation, it's extremely unsafe. just for practicing  the basics...
 * */

#include <stdio.h>

int main(void) {
    float fahrLower, fahrUpper, celsius;
    int step;
    printf("==== FAHRENHEIT TO CELSIUS CONVERTER ==== \n");

    printf("Enter lower limit: \n");
    scanf("%f", &fahrLower);

    printf("Enter upper limit: \n");
    scanf("%f", &fahrUpper);

    printf("Enter step: \n");
    scanf("%d", &step);

    printf("Fahr. Celsius\n");
    while(fahrLower <= fahrUpper) {
        celsius = 5.0/9.0 * (fahrLower - 32);
        printf("%4.0f %8.2f \n", fahrLower, celsius);
        fahrLower += step;
    }

    return 0;
}
