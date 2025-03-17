#include <stdio.h>

int main()
{
    // prompt for number array
    printf("Enter number of elements: ");
    int n; scanf("%d", &n);
    if (n <= 0) n = -n;

    printf("Enter each element in order:\n");
    int arr[n]; for (int i = 0; i < n; i++)
    {
        printf("%d> ", i + 1);
        scanf("%d", &arr[i]);
    }

    // compute for array sum
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    printf("Sum of all array elements: %d\n", sum);
}