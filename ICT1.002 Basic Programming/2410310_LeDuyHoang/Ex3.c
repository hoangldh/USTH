#include <stdio.h>
#include "Ex3_Factorial.h"

int main()
{
    // prompt for input
    printf("Enter non-negative integer (n >= 0):");
    int n; scanf("%d", &n);
    while (n < 0)
    {
        printf("Positive integer required (n > 0): ");
        scanf("%d", &n);
    }

    // find factorial
    printf("%d! = %ld", n, factorial(n));
    return 0;
}