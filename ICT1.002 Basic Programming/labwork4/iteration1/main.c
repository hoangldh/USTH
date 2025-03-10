#include <stdio.h>
#include "math_functions.h"
#include <winbase.h>

int main()
{
    // initial setup
    int time = 1000;
    
    // prompt for four positive integers
    printf("\nGREATEST COMMON DIVISOR\n");
    printf("Enter four positive integers (N > 0):\n");
    int num[4];
    for (int i = 0; i < 4; i++)
    {
        printf("%d> ", i + 1); scanf("%d", &num[i]);
        while (num[i] <= 0)
        {
            printf("%d> ", i + 1); scanf("%d", &num[i]);
        }
    }

    // find greatest common divisor (gcd) of four integers
    int gcd_num = gcd_four(num[0], num[1], num[2], num[3]);
    printf("Greatest common divisor of %d; %d; %d; %d is %d.\n", num[0], num[1], num[2], num[3], gcd_num);
    Sleep(time);

    // prompt for number input
    printf("\nf(x) = 2.5x\n");
    printf("Enter any number: ");
    float num_two; scanf("%f", &num_two);
    
    // compute f(x) = 2.5x
    float f_result = f(num_two); printf("f(x) = 2.5x = %.2lf\n", f_result);
    Sleep(time);

    // prompt for two number inputs
    printf("\ng(x,y) = xy\n");
    printf("Enter two numbers:\n");
    float num_three[2];
    for (int i = 0; i < 2; i++)
    {
        printf("%d> ", i + 1);
        scanf("%f", &num_three[i]);
    }

    // compute g(x,y) = xy
    float g_result = g(num_three[0], num_three[1]);
    printf("g(x,y) = xy = %.2f\n", g_result);
    Sleep(time);

    // prompt for positive integer
    printf("\nFACTORIAL\n");
    printf("Enter a positive integer (N > 0): ");
    int num_four; scanf("%d", &num_four);
    while (num_four < 0)
    {
        printf("Invalid input. Enter a positive integer (N > 0): ");
        scanf("%d", &num_four);
    }

    // compute n factorial (n!)
    long long factorial_result = factorial (num_four);
    printf("%d! = %llu\n", num_four, factorial_result);
    Sleep(time);

    // prompt for two number inputs
    printf("\nPOWER\n");
    printf("Enter x and n:\n");
    double x; printf("x> "); scanf("%lf", &x);
    int n; printf("n> "); scanf("%d", &n);

    // calculate x^n (no recursion)
    double power_result = power(x, n);
    printf("Non-recursive method: %.2f^%d = %.2f\n", x, n, power_result);
    Sleep(time);

    // calculate x^n (with recursion)
    double power_recursive_result = power_recursive(x, n);
    printf("Recursive method: %.2f^%d = %.2f\n", x, n, power_recursive_result);
    Sleep(time);
}