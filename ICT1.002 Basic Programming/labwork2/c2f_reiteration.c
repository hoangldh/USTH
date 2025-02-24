#include <stdio.h>

int main()
{
    // prompt for temperature
    printf("Enter temperature in C to convert: ");
    int c_temp; scanf("%d", &c_temp);

    // convert and print
    float f_temp = (9.0 / 5.0) * c_temp + 32; printf("%d Celcius degrees in Fahrenheit: %.2f", c_temp, f_temp);
}