#include <stdio.h>
#include "Ex4_gcd.h"

int main()
{
    // prompt for input
    printf("Enter two positive integers (n > 0 || n = 0):\n");
    int a[2];
    for (int i = 0; i < 2; i++)
    {
        printf("%d> ", i + 1); scanf("%d", &a[i]);
        while (a[i] < 0)
        {
            printf("%d> ", i + 1); scanf("%d", &a[i]);
        }
    }

    // find gcd
    int result = gcd(a[0], a[1]);
    printf("GCD = %d", result);

    return 0;
}