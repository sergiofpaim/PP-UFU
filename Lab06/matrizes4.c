#include <stdlib.h>
#include <stdio.h>
int main()
{
    int matrix[5][5], value, counter = 0;

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o numero da %da linha e %da coluna: ", i + 1, j + 1);
            scanf("%d", &value);
            matrix[i][j] = value;
        }

    printf("Os numeros na matriz sao:\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%d ", matrix[i][j]);

        printf("\n");
    }

    printf("Digite um numero para encontra-lo na matriz: ");
    scanf("%d", &value);

    printf("O(s) numero(s) esta(o) na(s)");

    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; j++)
            if (matrix[i][j] == value)
            {
                printf("%da linha e %da coluna\n", i + 1, j + 1);
                counter++;
            }

    if (counter == 0)
        printf("Numero nao encontrado");
}