#include<stdio.h>

#define PI 3.141592653589793

int main()
{
    /* calculate AREA and CIRCUMFERENCE with PREASSIGNED radius */
    int radius1 = 10;
    float area1 = (float)(PI * radius1 * radius1);
    float circumference1 = (float)(2 * PI * radius1);
    printf("Area of circle with radius %d: %f\n", radius1, area1);
    printf("Circumference of circle with radius %d: %f\n\n", radius1, circumference1);

    /* calculate AREA and CIRCUMFERENCE with input radius */
    // prompt for input
    printf("Enter circle radius: ");
    int radius2;
    scanf("%d", &radius2);

    // calculate and print
    float area2 = (float)(PI * radius2 * radius2);
    float circumference2 = (float)(2 * PI * radius2);
    printf("Area: %f\n", area2);
    printf("Circumference: %f\n", circumference2);
    return 0;
}