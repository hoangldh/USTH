#include <stdio.h>

int main()
{
    // prompt for integer
    printf("Enter an integer number (n > 0): ");
    int num; scanf("%d", &num);
    while (num <= 0)
    {
        printf("Invalid input. Please enter an integer number (n > 0): ");
        scanf("%d", &num);
    }

    // calculate series sum
    float summation = 0; for (int i = 1; i <= num; i++)
    {
        summation += (1.0 / (float)i);
    }
    printf("Sum of series: %.2f", summation);
}