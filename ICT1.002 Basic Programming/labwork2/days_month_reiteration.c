#include <stdio.h>

struct Month
{
    int month_num;
    const char *month_name;
    const float day_num;
};

int main()
{
    // define months
    struct Month months[] = {
        {1, "January", 31}, {2, "February", 28.5}, {3, "March", 31}, {4, "April", 30},
        {5, "May", 31}, {6, "June", 30}, {7, "July", 31}, {8, "August", 31},
        {9, "September", 30}, {10, "October", 31}, {11, "November", 30}, {12, "December", 31}
    };
    
    // prompt user for month
    printf("Enter a month (1-12): ");
    int month_number; scanf("%d", &month_number);

    // determine number of days in month
    printf("%s has %.0f days.", months[month_number - 1].month_name, months[month_number - 1].day_num);
}