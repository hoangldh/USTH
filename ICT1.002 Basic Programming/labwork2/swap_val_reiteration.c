#include <stdio.h>

#define MAX_LENGTH 100

int main()
{
    // prompt for values
    printf("Enter two values to swap: ");

    char num_list[MAX_LENGTH]; int num1, num2;
    fgets(num_list, MAX_LENGTH, stdin);
    sscanf(num_list, "%d %d", &num1, &num2);

    // swap and print
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("Swapped values: %d %d", num1, num2);
}