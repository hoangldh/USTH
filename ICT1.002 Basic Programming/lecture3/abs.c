#include <stdio.h>

int main()
{
    // prompt for number
    float num = (float)0; printf("Enter any number: ");
    scanf("%f", &num);

    // flip sign and print
    if (num < 0)
    {
        num = -num;
        printf("Absolute value: %f", num);
    }
    else
    {
        printf("Absolute value: %f", num);
    }
}