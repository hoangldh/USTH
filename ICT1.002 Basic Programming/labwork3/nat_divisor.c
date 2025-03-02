#include <stdio.h>

int main()
{
    // prompt for input
    int nat_num;
    do
    {
        printf("Enter a natural number (n > 1): ");
        scanf("%d", &nat_num);
    }
    while (nat_num <= 0);

    // find all divisors of input
}