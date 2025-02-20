#include<stdio.h>
#include<math.h>

int main(){
    // set up polynomial
    float x = 0;
    int a = 1;
    int b = 2;
    int c = 1;

    // prompt for x
    printf("Enter x for polynomial x^2 + 2x + 1: ");
    scanf("%f", &x);

    // calculate and print
    float polynomial_value = (float)(a*pow(x,2) + b*x + c);
    printf("Value of polynomial ax^2 + bx + c: %f\n", polynomial_value);
}