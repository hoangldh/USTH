#include <stdio.h>

int main()
{
    // prompt for positive integer
    printf("Enter a positive integer (n > 0): ");
    int num; scanf("%d", &num);
    while (num <= 0)
    {
        printf("Please enter a positive integer (n > 0): ");
        scanf("%d", &num);
    }

    // compute for sum of even, odd
    int sum_even = 0, sum_odd = 0;
    for (int i = 1; i <= num; i++)
    {
        if (i % 2 == 0) sum_even += i;
        if (i % 2 == 1) sum_odd += i;
    }
    printf("Sum of even numbers (1-n): %d\n", sum_even);
    printf("Sum of odd numbers (1-n): %d", sum_odd);
}