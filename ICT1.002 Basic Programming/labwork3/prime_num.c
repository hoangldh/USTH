#include <stdio.h>
#include <math.h>

int is_prime(int num)
{
    if (num < 2) return 0;
    for (int i = 2; i <= sqrt(num); i++)
        if ((num % i) == 0) return 0;
    return 1;
}

int main()
{
    // prompt for natural number
    printf("Enter a natural number (n > 1): ");
    int nat_num; scanf("%d", &nat_num);
    while (nat_num <= 1)
    {
        printf("Invalid input. Please enter a natural number (n > 1): ");
        scanf("%d", &nat_num);
    }

    // find prime
    for (int i = 2; i <= nat_num; i++)
    {
        if (is_prime(i))
        {
            printf(" %d", i);
        }
    }
}