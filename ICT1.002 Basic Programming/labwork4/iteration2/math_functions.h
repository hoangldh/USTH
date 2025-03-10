#ifndef MATH_FUNCTIONS_H
#define MATH_FUNCTIONS_H

// functions to find greatest common divisor
int gcd(int num1, int num2);
int gcd_four(int num1, int num2);

// functions to compute f(x), g(x,y)
float f(float x);
float g(float x, float y);

// factorial function (recursive)
long long factorial(int n);

// functions to compute x power n
double power(float x, int n);
double power_recurse(float x, int n);

#endif