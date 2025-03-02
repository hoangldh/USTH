#include <stdio.h>
#include "average_header.h"

#define MAX_LENGTH 100

int main()
{
    // prompt for input
    printf("Enter two random integers to find their average: ");
    float num1, num2; char num_list[MAX_LENGTH];
    fgets(num_list, sizeof(num_list), stdin);

    if (sscanf(num_list, "%f %f", &num1, &num2) != 2)
    {
        printf("Invalid input. Two integers needed.");
        return 1;
    }
    
    // find average
    float average_val = average(num1, num2);
    printf("%.1f", average_val);
}