#include<stdio.h>

int main()
{
    // prompt for input
    int num1, num2;
    printf("Enter first number: "); scanf("%d", &num1);
    printf("Enter second number: "); scanf("%d", &num2);

    // sort low to high
    if (num1 > num2)
    {
        printf("Low to high order: %d, %d", num2, num1);
    }
    else
    {
        printf("Low to high order: %d, %d", num1, num2);
    }
}