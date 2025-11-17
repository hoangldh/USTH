#include "prep_func.h"
#include <stdio.h>
#include <math.h>

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd (b, a % b);
}

int power(int x, int n)
{
    if (n == 0) return 1;
    return x * power(x, n - 1);
}