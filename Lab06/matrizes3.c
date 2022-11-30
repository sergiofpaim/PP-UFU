#include <stdlib.h>
#include <stdio.h>
int main()
{
    int matrix[4][4], value, positionI = 0, positionJ = 0;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o numero da %da linha e %da coluna: ", i + 1, j + 1);
            scanf("%d", &value);
            matrix[i][j] = value;
        }

    printf("Os numeros na matriz sao:\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%d ", matrix[i][j]);

        printf("\n");
    }

    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; j++)
            if (matrix[positionI][positionJ] < matrix[i][j])
            {
                positionI = i;
                positionJ = j;
            }

    printf("O maior numero esta na %da linha e %da coluna", positionI + 1, positionJ + 1);
}