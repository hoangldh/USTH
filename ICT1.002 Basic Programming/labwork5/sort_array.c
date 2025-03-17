#include <stdio.h>

int size;

void printArray(float array[size])
{
    for (int i = 0; i < size; i++)
    {
        printf("%.1f\t", array[i]);
    }
}

void bubbleSort(float array[size])
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < (size - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void insertionSort(float array[size])
{
    for (int i = 1; i < size; i++)
    {
        int key = array[i], j = (i - 1);
        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

void selectionSort(float array[size])
{
    for (int i = 0; i < (size - 1); i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < (size); j++)
        {
            if (array[j] < array[minIndex])
                minIndex = j;
        }
        int temp = array[i];
        array[i] = array[minIndex];
        array[minIndex] = temp;
    }
}

int main()
{
    // prompt for array
    printf("Enter array size (n > 0): "); scanf("%d", &size);
    while (size <= 0) scanf("%d", &size);

    float array[size];
    for (int i = 0; i < size; i++)
    {
        printf("%d> ", i + 1);
        scanf("%f", &array[i]);
    }
    printf("\nUnsorted array:\n");
    printArray(array); printf("\n");

    // sort array (increasing)
    // bubble sort
    printf("\nBubble sorted array:\n");
    bubbleSort(array); printArray(array); printf("\n");

    // insertion sort
    printf("\nInsertion sorted array:\n");
    insertionSort(array); printArray(array); printf("\n");

    // selection sort
    printf("\nSelection sorted array:\n");
    selectionSort(array); printArray(array);
}