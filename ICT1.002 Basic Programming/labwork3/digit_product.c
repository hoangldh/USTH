#include <stdio.h>

int main()
{
    // prompt for positive integer
    printf("Enter a positive integer: ");
    int num; scanf("%d", &num);
    while (num <= 0)
    {
        printf("Invalid input. Please enter a positive integer: ");
        scanf("%d", &num);
    }

    // calculate product of digits
    int product = 1, digit;
    while (num > 0)
    {
        digit = num % 10;
        product *= digit;
        num /= 10; printf("%d\n", num);
    }
    printf("Product of the digits: %d", product);
}