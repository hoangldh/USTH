#include <stdio.h>

#define MAX_LENGTH 100

int main()
{
    // prompt for three numbers
    printf("Enter three numbers to find min, max: ");
    char num_list[MAX_LENGTH]; int num1, num2, num3;

    fgets(num_list, MAX_LENGTH, stdin);
    if (sscanf(num_list, "%d %d %d", &num1, &num2, &num3) != 3)
    {
        printf("Invalid input. Please enter three numbers.");
        return 1;
    }

    // find max
    int max = num1;
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;
    printf("Max: %d\n", max);

    // find min
    int min = num1;
    if (num2 < min) min = num2;
    if (num3 < min) min = num3;
    printf("Min: %d", min);

    return 0;
}