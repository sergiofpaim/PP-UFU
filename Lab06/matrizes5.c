#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int matrix[10][10];

    printf("MATRIZ\n\n");

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++)
        {
            if (i < 7)
                matrix[i][j] = (2 * i) + (7 * j) - 2;
            else if (i == j)
                matrix[i][j] = (3 * pow(i, 2)) - 1;
            else if (i > j)
                matrix[i][j] = (4 * pow(i, 3)) - (5 * pow(j, 2)) + 1;
        }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == j)
                matrix[i][j] = 1;

            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}