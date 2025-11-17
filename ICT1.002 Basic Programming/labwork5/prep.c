#include <stdio.h>

int main()
{
    printf("Enter number of elements: ");
    int n; scanf("%d", &n);
    
    printf("Enter array: ");
    int array[n];
    for (int i = 0; i < n; i++)
    {
        while(scanf("%d", &array[i]) != 1)
        {
            printf("")
        }
    }
    

    int max = array[0];
    for (int i = 0; i < (sizeof(array)/sizeof(int)); i++)
    {
        if (array[i] > max) max = array[i];
    }
    printf("Max = %d", max);
}