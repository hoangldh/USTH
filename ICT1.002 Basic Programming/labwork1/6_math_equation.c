#include<stdio.h>
#include<math.h>

int main(){
    // prompt for a, b, c
    printf("We have the equation 3a - b^3 - 2sqrt(c).\n");
    float a, b, c;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);

    // calculate and print
    float equation_value = (float)(3*a - pow(b,3) -2*sqrt(c));
    printf("Value of equation 3a - b^3 -2sqrt(c): %f", equation_value);

    return 0;
}