#include <stdio.h>

int main()
{
    // prompt for temp
    printf("\nTEMPERATURE CONVERSION: C TO F\n\n");
    int c_temp = 0; printf("Enter temperature in C: "); scanf("%d", &c_temp);

    // convert and print
    float conversion_fraction = 9.0 / 5.0;
    float f_temp = conversion_fraction * c_temp + 32; printf("\nConverted temperature in F: %.2f", f_temp);
}