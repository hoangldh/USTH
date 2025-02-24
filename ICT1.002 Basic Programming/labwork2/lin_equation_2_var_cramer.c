#include <stdio.h>

#define MAX_LENGTH 100

int main()
{
    // prompt for paramters
    printf("Enter parameters for the system of linear equations:\n");
    printf("\tax + by = c\n");
    printf("\tdx + ey = f\n");

    char parameter_list[MAX_LENGTH]; int a, b, c, d, e, f;
    fgets(parameter_list, MAX_LENGTH, stdin);
    sscanf(parameter_list, "%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

    // calculate determinant
    float D = (a * e) - (b * d);
    float Dx = (c * e) - (b * f);
    float Dy = (a * f) - (c * d);

    // check for number of solutions
    if (D == 0)
    {
        if ((Dx == 0) && (Dy == 0))
        {
            printf("The system has infinitely many solutions.");
        }
        else
        {
            printf("The system has no solution.");
        }
    }

    // solve for variables and print
    float x = Dx / D;
    float y = Dy / D;

    printf("Solution:\n");
    printf("\tx = %.2f\n", x);
    printf("\ty = %.2f", y);
}