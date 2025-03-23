#include <stdio.h>

int main()
{
    // declare p1 as ptr to int
    int num = 1; int* p1 = &num; printf("ptr to int: %p\n", *p1);

    // declare p2 as ptr to ptr to int
    int* p2a = &num;
    int** p2b = &p2a; printf("ptr to ptr to int: %p\n", **p2b);

    // delcare p3 as array of 10 ptr to int
    int size = 10;
    int* p3a = &num;
    int** p3b = &p3a;
    int* p3c[size]; p3c[0] = &num; printf("array of 10 ptr to int: %p", *p3c[0]);
}