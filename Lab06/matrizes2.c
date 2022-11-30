#include <stdlib.h>
#include <stdio.h>
int main()
{
    int matrix[5][5];

    printf("MATRIZ\n\n");

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            matrix[i][j] = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
                matrix[i][j] = 1;

            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}