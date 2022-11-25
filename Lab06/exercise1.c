#include <stdio.h>
#include <math.h>

void main()
{
    int sum;
    int A[] = {1, 0, 5, -2, -5, 7};

    sum = A[0] + A[1] + A[5];
    printf("A soma eh: %d\n", sum);

    A[4] = 100;
    printf("Os valores sao\n");

    for (int i = 0; i < 6; i++)
        printf("%d\n", A[i]);
}