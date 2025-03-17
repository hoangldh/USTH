#include <stdio.h>
#include <string.h>

int main()
{
    // prompt for string
    printf("Enter string length: ");
    int n; scanf("%d", &n);
    while (n <= 0) scanf("%d", &n);

    printf("Enter string: ");
    char string[n]; scanf("%s", string);

    // print number of 'a' and order
    int position[n], count = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        position[i] = 0;
        if (string[i] == 'a')
        {
            count++; 
            position[i] = i + 1;
        }
    }
    printf("'a' appeared %d times in positions ", count);
    for (int i = 0; i < n; i++)
    {
        if (position[i] == 0) continue;
        if (i == n - 1)
        {
            printf("%d.", position[i]);
            continue;
        }
        printf("%d, ", position[i]);
    }
}