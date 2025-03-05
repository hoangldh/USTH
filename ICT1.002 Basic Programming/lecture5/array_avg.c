#include <stdio.h>

int main()
{
    // init
    int numbers[10];
    int count = 10;
    long sum = 0L;
    float average = 0.0f;

    // prompt for input
    printf("Enter 10 numbers to compute for average: ");
    for (int i = 0; i < count; i++)
    {
        printf("%2d>", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // find average, print
    average = (float)sum/count;
    printf("Average: %.2f\n", average);
    return 0;
}