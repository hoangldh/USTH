#include <stdio.h>

int main()
{
    // prompt for input
    printf("Enter a natural number (n > 1): ");
    int nat_num; while (scanf("%d", &nat_num) <= 0)
    {
        printf("Wrong input. Please enter a natural number!");
        return 1; // wrong input
    }

    // find all divisors of input
}