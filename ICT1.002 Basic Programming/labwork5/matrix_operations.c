#include <stdio.h>

int m,n;

void printMatrix(float A[m][n])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.1f\t", A[i][j]);
        }
        printf("\n");
    }
}

double sumMatrix(float A[m][n])
{
    double sum = 0.0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += A[i][j];
        }
    }
    return sum;
}

void transposeMatrix(float A[m][n], float B[n][m])
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            B[j][i] = A[i][j];
        }
    }
}

float determinantMatrix(float A[m][n], int m)
{
    if (m != n) return 1;
    
    if (m == n)
    {
        if (m == 1) return A[0][0];
        if (m == 2) return ((A[0][0] * A[1][1]) - (A[0][1] * A[1][0]));
        
        float determinant = 0;
        float temp[m][n];
        int sign = 1;

        for (int f = 0; f < m; f++)
        {
            // create minor matrix
            int subi = 0;
            for (int i = 0; i < m; i++)
            {
                int subj = 0;
                for (int j = 0; j < m; j++)
                {
                    if (j == f) continue;
                    temp[subi][subj] = A[i][j];
                    subj++;
                }
                subi++;
            }

            // recursive call and add to determinant
            determinant += sign * A[0][f] * determinantMatrix(temp, m - 1);
            sign = -sign;
        }
        return determinant;
    }
}

void inverseMatrix(float A[m][n], float inverse[m][n], int m)
{
    float temp;
    float augmented[m][2 * n]; // augmented matrix [A|I]

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; i++)
        {
            augmented[i][j] = A[i][j];
            augmented[i][j + m] = (i == j) ? 1 : 0; // identity matrix
        }
    }

    // row operations to compute for [I|A^-1]
    for (int i = 0; i < m; i++)
    {
        if (augmented[i][i] == 0)
        {
            int swap_row = i + 1;
            while (swap_row < m && augmented[swap_row][i] == 0) swap_row++;
            if (swap_row == m) return 0; // singular matrix (no inverse)
            for (int j = 0; j < (2 * m); j++)
            {
                float temp = augmented[i][j];
                augmented[i][j] = augmented[swap_row][j];
                augmented[swap_row][j] = temp;
            }
        }

        // normalise pivot row
        temp = augmented[i][i];
        for (int j = 0; j < (2 * m); j++)
            augmented[i][j] /= temp;
        
        // make all other elements in column zero
        for (int k = 0; k < m; k++)
        {
            if (k != 1)
            {
                temp = augmented[k][i];
                for (int j = 0; j < (2 * m); j++)
                {
                    augmented[k][j] -= augmented[i][j] * temp;
                }
            }
        }

    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; i++)
        {
            inverse[i][j] = augmented[i][j + m];
        }
    }
}

int main()
{
    // prompt for matrix
    printf("Enter matrix size (m x n):\n");
    printf("m> "); scanf("%d", &m);
    while (m <= 0)
    {
        printf("m> ");
        scanf("%d", &m);
    }
    printf("n> "); scanf("%d", &n);
    while (n <= 0)
    {
        printf("n> ");
        scanf("%d", &n);
    }
    printf("\n");

    float A[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("A[%d][%d]> ", i + 1, j + 1);
            scanf("%f", &A[i][j]);
        }
    }
    printf("\n"); printMatrix(A);

    // sum all elements of matrix
    double sum = sumMatrix(A);
    printf("\nSum of all elements in matrix: %.1f\n", sum);

    // compute for transpose of matrix
    float B[m][n];
    transposeMatrix(A, B);
    printf("\nTranspose matrix:\n"); printMatrix(B);

    // compute for determinant of matrix
    if (m != n) printf("\nNo determinant for non-square matrix.");
    if (m == n)
    {
        float determinant = determinantMatrix(A, m);
        printf("\nDeterminant of A: %.1f\n", determinant);
    }

    // compute for inverse matrix
    if (m != n) printf("\nNo inverse for non-square matrix.");
    if (m == n)
    {
        float inverse[m][n];
        inverseMatrix(A, inverse, m);
        printMatrix(inverse);
    }
}