#include "lcd_func.h"

int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcd(int a, int b)
{
    if (a == b) return a;
    return ((a * b) / gcd(a,b));
}