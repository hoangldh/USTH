#include <stdio.h>

int main()
{
    // var init
    printf("Enter two numbers:\n");
    int size = 2, num[size];
    for (int i = 0; i < size; i++)
    {
        printf("%d> ", i + 1); scanf("%d", &num[i]);
    }

    // ptr init
    int* pnum[size];
    for (int i = 0; i < size; i++)
    {
        pnum[i] = &num[i];
    }

    // add numbers using pointers
    int sum = *pnum[0] + *pnum[1];
    printf("%d + %d = %d", *pnum[0], *pnum[1], sum);
}