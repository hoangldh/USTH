#include <stdio.h>
#include <math.h>

int main()
{
    float a = 1, b = 2, c = 1;
    float x; scanf("%f", &x);

    float result = a * (pow(x, 2)) + b * x + c;
    printf("%.2f", result);

    return 0;
}