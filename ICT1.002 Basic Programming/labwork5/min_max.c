#include <stdio.h>

int main()
{
    // prompt for number series
    printf("Enter number of elements: ");
    int n; scanf("%d", &n);

    printf("Enter elements in order: \n");
    int series[n]; for (int i = 0; i < n; i++)
    {
        printf("%d> ", i + 1);
        while (scanf("%d", &series[i]) != 1)
        {
            printf("%d> ", i + 1); scanf("%d", &series[i]);
        }
    }

    // find min, max
    int min, max = series[0];
    for (int i = 0; i < n; i++)
    {
        if (min > series[i])
            min = series[i];
        if (max < series[i])
            max = series[i];
    }
    printf("Min: %d\n", min); printf("Max: %d", max);
}