#include <stdio.h>

int main()
{
    // prompt for year
    printf("\nEnter a year: ");
    int year = 0; scanf("%d", &year);

    // check for leap and print
    if ((year % 400 == 0) || (year % 100 == 0))
        printf("%d is a leap year.", year);
    else printf("%d is not a leap year.", year);
}