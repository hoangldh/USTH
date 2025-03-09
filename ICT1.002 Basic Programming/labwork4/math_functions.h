#ifndef MATH_FUNCTIONS_H
#define MATH_FUNCTIONS_H

// function to find greatest common divisor (gcd)
int gcd(int num1, int num2);
int gcd_four(int num1, int num2, int num3, int num4);

// function to compute f(x) = 2.5x
float f(float x);

// function to compute g(x,y) = xy
float g(float x, float y);

// recursive function to compute n factorial (n!)
long long factorial(int num);

// function to compute x^n
double power(double x, int n);

// recursive function to compute x^n
double power_recursive(double x, int n);

#endif