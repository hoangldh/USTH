#include "math_functions.h"
#include <stdio.h>
#include <math.h>

// functions to find greatest common divisor (gcd)
int gcd(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    return gcd(num2, num1 % num2);
}

int gcd_four(int num1, int num2, int num3, int num4)
{
    return gcd(gcd(num1, num2), gcd(num3, num4));
}

// function to compute f(x) = 2.5x
float f(float x)
{
    return 2.5 * x;
}

// function to compute g(x,y) = xy
float g(float x, float y)
{
    return x * y;
}

// recursive function to compute n factorial (n!)
long long factorial(int num)
{
    if (num == 0 || num == 1)
        return 1;
    return num * factorial(num - 1);
}

// function to compute x^n
double power(double x, int n)
{
    return pow(x, n);
}

// recursive function to compute x^n
double power_recursive(double x, int n)
{
    if (n == 0) return 1;

    return x * power_recursive(x, n - 1);
}