#include <stdio.h>

void findMax (int *max, int a) {
    if (a > *max) {
        *max = a;
    }
}

int main() {
    int a, max;
    printf("a = "); scanf("%d", &a);
    printf("max = "); scanf("%d", &max);

    findMax(&max, a);
    printf("new max = %d", max);

    return 0;
}