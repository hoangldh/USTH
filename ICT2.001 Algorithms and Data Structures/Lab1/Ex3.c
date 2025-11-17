#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} Complex;

Complex add (Complex a, Complex b) {
    Complex c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;
    return c;
}

Complex multiply (Complex a, Complex b) {
    Complex c;
    c.real = (a.real * b.real) - (a.imaginary * b.imaginary);
    c.imaginary = (a.imaginary * b.real) + (a.real * b.imaginary);
    return c;
}

int main() {
    Complex a, b;

    printf("a + bi\n");
    printf("a = ");
    scanf("%lf", &a.real);
    printf("b = ");
    scanf("%lf", &a.imaginary);

    printf("\nc + di\n");
    printf("c = ");
    scanf("%lf", &b.real);
    printf("d = ");
    scanf("%lf", &b.imaginary);

    printf("\n(a + bi) + (c + di) = %0.2lf + %0.2lfi\n", add(a,b).real, add(a, b).imaginary);
    printf("(a + bi) * (c + di) = %0.2lf + %0.2lfi\n\n", multiply(a,b).real, multiply(a, b).imaginary);

    return 0;
}