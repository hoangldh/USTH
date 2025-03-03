#include <stdio.h>

int factorial(int num)
{
    if (num == 0) return 1;
    int factorial_product = 1;
    for (int i = 1; i <= num; i++)
    {
        factorial_product *= i;
    }
    return factorial_product;
}

int main()
{
    // prompt for non-negative integer
    printf("Enter a non-negative integer (n >= 0): ");
    int num; scanf("%d", &num);
    while (num < 0)
    {
        printf("Invalid input. Please enter a non-negative integer (n >= 0): ");
        scanf("%d", &num);
    }

    // find factorial
    int factorial_product = factorial(num);
    printf("Factorial of %d: %d", num, factorial_product);
}