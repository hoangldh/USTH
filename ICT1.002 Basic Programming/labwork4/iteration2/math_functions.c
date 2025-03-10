#include "math_functions.h"
#include <stdio.h>
#include <math.h>

// functions to find greatest common divisor
int gcd(int num1, int num2)
{
    if (num2 == 0)
        return num1;
    return gcd(num2, num1 % num2);
}

int gcd_four(int num1, int num2)
{
    return gcd(num1, num2);
}

// functions to compute f(x), g(x,y)
float f(float x)
{
    return 2.5 * x;
}

float g(float x, float y)
{
    return x * y;
}

// factorial function (recursive)
long long factorial(int n)
{
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

// functions to compute x power n
double power(float x, int n)
{
    return pow(x, n);
}

double power_recurse(float x, int n)
{
    if (n == 0) return 1;
    return x * power_recurse(x, n - 1);
}