#include <stdio.h>

int main()
{
    // prompt for set of three
    int num1, num2, num3; printf("\nEnter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // find max
    int max = num1;
    if (num2 > max) max = num2;
    if (num3 > max) max = num3;
    printf("\nMaximum: %d\n", max);
    
    // find min
    int min = num1;
    if (num2 < min) min = num2;
    if (num3 < min) min = num3;
    printf("Minimum: %d", min);
}