#include<stdio.h>

int main()
{
    // ask for string input
    printf("Enter a string: ");
    char string[100];
    scanf("%99s", string);

    // print
    printf("%s\n", string);
    return 0;
}