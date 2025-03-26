#include <stdio.h>

void bubble_sort(int array[], int size)
{
    int i,j;
    int swap;

    for (int i = 0; i < (size - 1); i++)
    {
        for (int j = 0; j < (size - i - 1); j++)
        {
            
            if (array[j] > array[j + 1])
            {
                printf("array[%d] = %d\t", j, array[j]); printf("array[%d] = %d\t", j + 1, array[j + 1]);
                swap = array[j];
                array[j] = array[j + 1]; printf("array_sorted[%d] = %d\t", j, array[j]);
                array[j + 1] = swap; printf("array_sorted[%d] = %d\t\n", j + 1, array[j + 1]);
            }
        }
        printf("#%d sort: ", i + 1);
        for (int k = 0; k < size; k++)
        {
            printf("%d\t", array[k]);
        }
        printf("\n\n");
    }
}

void selection_sort(int array[], int size)
{
    int i, j, position;
    int swap;

    for (int i = 0; i < (size - 1); i++)
    {
        position = i;

        for (int j = i + 1; j < size; j++)
        {
            printf("array[%d] = %d\t", position, array[position]); printf("array[%d] = %d\t", j, array[j]);
            
            if (array[position] > array[j])
            {
                position = j;
            }

            if (position != i)
            {
                swap = array[i];
                array[i] = array[position]; printf("array_sorted[%d] = %d\t", i, array[i]);
                array[position] = swap; printf("array_sorted[%d] = %d\t\n", position, array[position]);
            }
        }

        printf("#%d sort: ", i + 1);
        for (int k = 0; k < size; k++)
        {
            printf("%d\t", array[k]);
        }
        printf("\n\n");
    }
}

void insertion_sort(int array[], int size)
{
    int i, j, swap;

    for (i = 1; i < size; i++)
    {
        swap = array[i];

        for (j = i - 1; (j >= 0) && (array[j] > swap); j--)
        {
            printf("array[%d] = %d\t", j + 1, array[j + 1]);
            
            array[j + 1] = array[j];
            printf("array_sorted[%d] = %d\n", j + 1, array[j + 1]);
        }

        printf("array[%d] = %d\t", j + 1, array[j + 1]);
        array[j + 1] = swap;
        printf("array_sorted[%d] = %d\n", j + 1, array[j + 1]);

        printf("#%d sort: ", i);
        for (int k = 0; k < size; k++)
        {
            printf("%d\t", array[k]);
        }
        printf("\n\n");
    }
}

int main()
{
    int array[8] = {29, 22, 8, 7, 4, 2, 1, 0};
    int size = 8;

    insertion_sort(array, size);

    printf("\nSorted array: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", array[i]);
    }
}