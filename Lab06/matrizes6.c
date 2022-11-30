#include <stdlib.h>
#include <stdio.h>
int main()
{
    int matrix[4][4], value, keep = 0, counter = 0;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
        {
            while (keep == 0)
            {
                printf("Digite um numero entre 1 e 20 para a %da linha e %da coluna: ", i + 1, j + 1);
                scanf("%d", &value);
                if (value <= 0 || value > 20)
                    printf("Numero invalido, digite novamente\n");
                else
                {
                    matrix[i][j] = value;
                    keep++;
                }
            }
            keep = 0;
        }

    printf("Os numeros na matriz sao:\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j > i)
                matrix[i][j] = 0;

            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }
}