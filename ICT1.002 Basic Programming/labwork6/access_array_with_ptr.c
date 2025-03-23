#include <stdio.h>

int main()
{
    // init
    int a[] = {5, 10, 15, 20, 25}; printf("a[] = {5, 10, 15, 20, 25}\n");
    int* pa = a;

    // access array using ptr
    printf("Enter index of a[]: ");
    int index; scanf("%d", &index);
    printf("a[%d] = %d", index, *(pa + index));
}