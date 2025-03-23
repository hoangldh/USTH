#include <stdio.h>
#include <stdlib.h>

int main()
{
    // init
    int size, arr[size];

    // prompt for input
    printf("Enter array size: ");
    scanf("%d", &size);
    while (size < 0) scanf("%d", &size);

    // allocate array (dynamic)
    int* parr = (int*)malloc(size * sizeof(int));
    if (parr == NULL)
    {
        printf("Memory allocation failed!");
        return 1;
    }
    free(parr); parr = NULL;
}