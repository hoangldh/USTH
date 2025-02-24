#include <stdio.h>

#define MAX_LENGTH 100

int main() // Gauss-Jordan reduction
{
    // prompt for parameters
    printf("Enter parameters for the system of linear equations:\n");
    printf("\tax + by = c\n");
    printf("\tdx + ey = f\n");

    char parameter_list[MAX_LENGTH]; float a, b, c, d, e, f;
    fgets(parameter_list, MAX_LENGTH, stdin);
    if (sscanf(parameter_list, "%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f) != 6)
    {
        printf("Invalid input. Six parameters needed.");
        return 1;
    }

    // check for unique solutions
    float determinant = (a * e) - (b * d);
    
    printf("\na = %.2f, b = %.2f, c = %.2f\n", a, b, c);
    printf("c = %.2f, d = %.2f, f = %.2f\n\n", d, e, f);
    
    if (determinant == 0)
    {
        printf("Cannot find solutions. The system either has no solution or infinitely many solutions."); printf("\nDeterminant = %.2f", determinant);
    }
    else
    {
        // elimination
        while ((a != 1) || (d != 1))
        {
            b /= a; c /= a; a /= a; printf("a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
            e /= d; f /= d; d /= d; printf("c = %.2f, d = %.2f, f = %.2f\n\n", d, e, f);
        }
        
        d = a - d; e = b - e; f = c - f;

        printf("a = %.2f, b = %.2f, c = %.2f\n", a, b, c);
        printf("c = %.2f, d = %.2f, f = %.2f\n\n", d, e, f);
        
        float x, y;
        y = f / e; x = c - (b * y); // find x,y
        
        printf("Solution:\n");
        printf("\tx = %.2f", x);
        printf("\ty = %.2f", y);
    }

    return 0;
}