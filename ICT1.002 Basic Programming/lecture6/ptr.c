#include <stdio.h>

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    int* p = A;  // ✅ Allowed but points beyond the array
    printf("%d", --p[2]);  // ❌ Undefined behavior
}