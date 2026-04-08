/* celsius to farenheit converter with user input;
 * this is a basic implementation, it's extremely unsafe. just for practicing  the basics...
 * */

#include <stdio.h>

int main(void) {
    float fahr, celsius;
    printf("Enter temperature in fahrenheit: \n");
    scanf("%f", &fahr);

    celsius = 5.0/9.0 * (fahr - 32);
    printf("%.2f fahrenheit is %.2f degree celsius! \n", fahr, celsius);

    return 0;
}
