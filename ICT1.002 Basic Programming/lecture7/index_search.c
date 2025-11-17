#include <stdio.h>

void index_search(int array[], int size, int num)
{    
    int found = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (num == array[i])
        {
            printf("%d has the index [%d] in the array.", num, i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("%d is NOT in the given array.", num);
    }
}



int main()
{
    int array[] = {8, 3, 9, 10, 22, 3, 7, 0};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Enter number to search: ");
    int num; scanf("%d", &num);

    index_search(array, size, num);
}