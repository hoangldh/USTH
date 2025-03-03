#include <stdio.h>

int fibonnaci(int num)
{
    if (num == 0) return 0;
    if (num == 1) return 1;
    return fibonnaci(num - 1) + fibonnaci(num - 2);
}

int main()
{
    // prompt for positive integer
    printf("Enter a non-negative integer (n >= 0): ");
    int num; scanf("%d", &num);
    while (num < 0)
    {
        printf("Invalid input. Please enter a non-negative integer (n >= 0): ");
        scanf("%d", &num);
    }

    // print fibonnaci series and sum
    int fibonnaci_series_sum = 0;
    for (int i = 0; i <= num; i++)
    {
        fibonnaci_series_sum += fibonnaci(i);
        printf(" %d", fibonnaci(i));
    }
    printf("\nFibonnaci sum: %d", fibonnaci_series_sum);
}