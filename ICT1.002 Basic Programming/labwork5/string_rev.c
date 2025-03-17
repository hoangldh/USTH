#include <stdio.h>

int main()
{
    // prompt for string
    printf("Enter string length (n): ");
    int n; scanf("%d", &n);
    if (n <= 0) n = -n;

    printf("Enter string: ");
    char string[n]; scanf("%s", string);

    // print string in reverse
    printf("Reversed string: ");
    for (int i = n; i >= 0; i--)
        printf("%c", string[i]);
}