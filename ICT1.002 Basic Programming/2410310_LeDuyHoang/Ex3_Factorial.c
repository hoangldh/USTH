#include "Ex3_Factorial.h"

long factorial(int n)
{
    if (n == 0) return 1;
    if (n == 1) return 1;
    return (n * factorial(n - 1));
}