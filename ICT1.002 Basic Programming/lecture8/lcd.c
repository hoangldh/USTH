#include <stdio.h>
#include "lcd_func.h"

int main()
{
    printf("Enter two positive integers (n > 0 || n = 0):\n");
    int num[2];
    for (int i = 0; i < 2; i++)
    {
        printf("%d> ", i + 1); scanf("%d", &num[i]);
        while (num[i] < 0)
        {
            printf("%d> ", i + 1); scanf("%d", &num[i]);
        } 
    }

    int result = lcd(num[0], num[1]);
    printf("LCD(%d, %d)= %d", num[0], num[1], result);
}