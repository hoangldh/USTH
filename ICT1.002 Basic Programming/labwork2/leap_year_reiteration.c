#include <stdio.h>

int main()
{
    // prompt for year
    printf("Enter year to check for leap year: ");
    int year; scanf("%d", &year);

    // check for leap year
    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    {
        printf("%d is a leap year.", year);
    }
    else
    {
        printf("%d is NOT a leap year.", year);
    }

    return 0;
}