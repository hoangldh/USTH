#include "prep_func.h"
#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter a number (N > 1): ");
    int n; scanf("%d", &n);
    while (n <= 0)
    {
        printf("Please enter a valid number (N > 1): ");
        scanf("%d", &n);
    }

    printf("Factorial of %d is %d", n, n);
}