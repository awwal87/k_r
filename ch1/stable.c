/* celsius to farenheit converter with user input (version 3);
 * this is a basic implementation, it's extremely unsafe. just for practicing  the basics...
 * */

#include <stdio.h>

int main(void) {
    float lower, upper, temp;
    int conversion, step;
    printf("==== TEMPERATURE CONVERTER ==== \n");

    do {
        printf("Choose conversion. \n");
        printf("Enter 1 for Fahrenheit to Celcius\n");
        printf("Enter 2 for Celsius to Fahrenheit\n");
        scanf("%d", &conversion);

        if (conversion == 1) {
            printf("Fahrenheit to Celsius conversion \n");
        }
        else if (conversion == 2) {
            printf("Celsius to Fahrenheit conversion \n");
        }
        else printf("Invalid option \n");
    } while (conversion < 1 || conversion > 2);

    printf("Enter lower limit: \n");
    scanf("%f", &lower);

    printf("Enter upper limit: \n");
    scanf("%f", &upper);

    printf("Enter step: \n");
    scanf("%d", &step);

    if (conversion == 1) {
        printf("Fahr.  Cels.\n");
        while(lower <= upper) {
            temp = 5.0/9.0 * (lower - 32);
            printf("%4.0f %8.2f \n", lower, temp);
            lower += step;
        }
    }

    else {
        printf("Cels.  Fahr.\n");
        while(lower <= upper) {
            temp  = (9.0/5.0 * lower) + 32;
            printf("%4.0f %8.2f \n", lower, temp);
            lower += step;
        }
    }

    return 0;
}
