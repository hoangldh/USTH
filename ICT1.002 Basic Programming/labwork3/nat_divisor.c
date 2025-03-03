#include <stdio.h>

int main()
{
    // prompt for input
    int nat_num = -1; printf("Enter a natural number (n > 1): "); scanf("%d", &nat_num);
    while (nat_num <= 1)
    {
        printf("Please enter a natural number (n > 1): ");
        scanf("%d", &nat_num);
    };

    // find all divisors of input
    int divisor_arr[sizeof(nat_num)] = {}; int i;
    for (i = 1; i <= nat_num; i++)
    {
        if (nat_num % i == 0) divisor_arr[i - 1] = i;
    }
    for (i = 0; i <= sizeof(divisor_arr); i++)
    {
        printf("%d", divisor_arr[i]);
    }
}