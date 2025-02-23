#include <stdio.h>
#include <winbase.h>

int main()
{
    /* prompt for parameters */
    char input[100]; // buffer for input
    int a, b, c, d, e, f; 

    printf("Given linear equations: \n");
    printf("\tax + by = c\n"); printf("\tdx + ey = f\n");
    printf("Enter parameters (a b c d e f): ");

    fgets(input, sizeof(input), stdin); // read entire input line as string

    if (sscanf(input, "%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != 6)
    {
        printf("Invalid input. Please enter 6 integers.\n");
        return 1;
    }

    printf("Calculating the linear equations:\n");
    printf("\t%dx + %dy = %d\n", a, b, c); printf("\t%dx + %dy = %d\n", d, e, f);
    Sleep(1000);

    /* solve equations */
    // compute determinants
    float D = (a * e) - (b * d);
    float Dx = (c * e) - (b * f);
    float Dy = (a * f) - (c * d);

    // check for unique solutions
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
    else
    {
        float x = Dx / D;
        float y = Dy / D;
        printf("Solution:\n"); printf("\tx = %.2f\n", x); printf("\ty = %.2f", y);
    }

    return 0;
}