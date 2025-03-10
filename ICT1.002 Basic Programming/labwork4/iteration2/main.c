#include "math_functions.h"
#include <stdio.h>
#include <winbase.h>

int main()
{
    // set up
    int size1st = 4;
    int size2nd = 2;
    int size3rd = 1;
    int wait_time = 1000;
    
    // prompt for four positive integers
    printf("\nGREATEST COMMON DIVISOR (GCD)\n");
    printf("Enter four positive integers (N > 0):\n");
    int num1st[size1st];
    for (int i = 0; i < size1st; i++)
    {
        printf("%d> ", i + 1); scanf("%d", &num1st[i]);
        while (num1st[i] <= 0)
        {
            printf("%d> ", i + 1);
            scanf("%d", &num1st[i]);
        }
    }

    // compute gcd of four positive integers
    int gcd_result = gcd_four(gcd(num1st[0], num1st[1]), gcd(num1st[2], num1st[3]));
    printf("Greatest common divisor: %d\n", gcd_result);
    Sleep(wait_time);

    // prompt for two number inputs
    printf("\nCompute for f(x) = 2.5x, g(x,y) = xy\n");
    printf("Enter two numbers:\n");
    float x2nd; float y;
    printf("x> "); scanf("%f", &x2nd);
    printf("y> "); scanf("%f", &y);

    // compute for f(x), g(x)
    float f_result = f(x2nd); float g_result = g(x2nd,y);
    printf("f(x) = 2.5x = %.1f\n", f_result);
    printf("g(x) = xy = %.1f\n", g_result);
    Sleep(wait_time);

    // prompt for a positive integer
    printf("\nFACTORIAL\n");
    printf("Enter a positive integer (N > 0):\n");
    int num3rd[size3rd];
    printf("%d> ", size3rd); scanf("%d", &num3rd[size3rd - 1]);
    while (num3rd[size3rd - 1] <= 0)
    {
        printf("%d> ", size3rd);
        scanf("%d", &num3rd[size3rd - 1]);
    }

    // compute for factorial
    long long factorial_result = factorial(num3rd[size3rd - 1]);
    printf("N = %llu\n", factorial_result);
    Sleep(wait_time);

    // prompt for two number inputs
    printf("\nCompute for x power n\n");
    printf("Enter two numbers:\n");
    float x; int n;
    printf("x> "); scanf("%f", &x);
    printf("n> "); scanf("%d", &n);

    // compute for x power n (non-recursive)
    double power_result = power(x, n);
    printf("Non-recursive: %.1f power %d is %.1lf\n", x, n, power_result);
    Sleep(wait_time);

    // compute for x power n (recursive)
    double power_recurse_result = power_recurse(x, n);
    printf("Recursive: %.1f power %d is %.1lf\n\n", x, n, power_recurse_result);
}