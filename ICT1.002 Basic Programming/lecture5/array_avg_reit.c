#include <stdio.h>

#define ARRAY_LENGTH 5

int main()
{
    // init
    int numbers[ARRAY_LENGTH];
    int count = ARRAY_LENGTH;
    long sum = 0L;
    float average = 0.0f;

    // prompt for input
    printf("Enter %d numbers to compute for average: ", ARRAY_LENGTH);
    for (int i = 0; i < count; i++)
    {
        printf("%2d>", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // compute for average
    average = (float) sum / count;
    printf("Average: %.2f", average);
}