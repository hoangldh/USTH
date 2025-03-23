#include <stdio.h>

int main()
{
    // init
    int a = 5, b = 7, temp;
    int* pa = &a; int* pb = &b; int* ptemp = &temp;

    // swap using ptr
    *ptemp = *pa;
    *pa = *pb; printf("a = %d\n", *pa);
    *pb = *ptemp; printf("b = %d", *pb);
}