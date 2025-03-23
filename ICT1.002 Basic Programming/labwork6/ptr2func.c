#include <stdio.h>

long add (int* x, int* y)
{
    return (*x + *y);
}

int main()
{
    // init
    int x = 5, y = 10;
    int* px = &x;
    int* py = &y;

    // call function using ptr
    long sum = add(px, py);
    printf("%d + %d = %ld", *px, *py, sum);
}