/* Swap the first and last digits of an integer */

#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int main()
{
    // prompt for integer input
    printf("Enter any integer: ");
    int num; scanf("%d", &num);

    // swap first and last digits
    char* num_in_char = itoa(num);
    int first_digit = num_in_char[0]; printf("First digit: %d", first_digit);
    int last_digit = num_in_char[-1]; printf("Last digit: %d", last_digit);
    
}