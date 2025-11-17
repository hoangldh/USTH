#include <stdio.h>

int main () {
    int number = -1;
    while (number <= 0) {
        printf("Enter a positive integer: ");
        scanf("%d", &number);
    }
    
    int last = number % 10;

    int temp = number;
    int power = 1;
    while (temp >= 10) {
        temp /= 10;
        power *= 10;
    }
    int first = temp;

    int middle = number - (first * power) - last;
    int result = last * power + middle + first;
    
    printf("%d", result);
    return 0;
}