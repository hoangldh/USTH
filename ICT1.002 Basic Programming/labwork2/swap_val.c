#include <stdio.h>
#include <winbase.h>

int main()
{
    // prompt for two numbers
    printf("\nEnter two numbers to swap: ");
    int num1, num2; scanf("%d %d", &num1, &num2);
    printf("You entered: %d, %d\n", num1, num2); Sleep(1000);

    // swap values
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("Swapped: %d, %d", num1, num2);
}