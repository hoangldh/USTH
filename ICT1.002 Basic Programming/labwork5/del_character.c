#include <stdio.h>

int main()
{
    // prompt for string and character
    printf("Enter string length: ");
    int n; scanf("%d", &n);
    while (n <= 0) scanf("%d", &n);

    printf("Enter a string: ");
    char string[n]; scanf("%s", string);

    printf("Enter a character to remove from string: ");
    char character; scanf(" %c", &character);

    // delete character from string
    char string_sub[n + 1]; int j = 0;
    for (int i = 0; i <= n; i++)
        string_sub[i] = '\0';
    for (int i = 0; i < n; i++)
    {
        if (string[i] != character)
        {
            string_sub[j] = string[i];
            j++;
        }
    }
    printf("New string: %s\n", string_sub);
}