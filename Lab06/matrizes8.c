#include <stdlib.h>
#include <stdio.h>
int main()
{
    int matrix1[2][2], matrix2[2][2], keep = 0, choice, value, constant;

    printf("\n\nPRIMEIRA MATRIZ\n");

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
        {
            while (keep == 0)
            {
                printf("Digite um numero para a %da linha e %da coluna: ", i + 1, j + 1);
                scanf("%d", &value);

                matrix1[i][j] = value;
                keep++;
            }
            keep = 0;
        }

    printf("\n\nSEGUNDA MATRIZ\n");

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
        {
            while (keep == 0)
            {
                printf("Digite um numero para a %da linha e %da coluna: ", i + 1, j + 1);
                scanf("%d", &value);

                matrix2[i][j] = value;
                keep++;
            }
            keep = 0;
        }

    printf("\n\nEscolha 1 para somar as duas matrizes, 2 para subtrair a primeira matriz da segunda,\n3 para adicionar uma constante as duas matrizes e 4 para imprimir as matrizes\n");

    printf("\nDIGITE A ESCOLHA\n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
                printf("%d  ", matrix1[i][j] + matrix2[i][j]);

            printf("\n");
        }
        break;
    case 2:
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
                printf("%d  ", matrix1[i][j] - matrix2[i][j]);

            printf("\n");
        }
        break;
    case 3:
        printf("Digite a constante: ");
        scanf("%d", &constant);

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
                printf("%d  ", matrix1[i][j] + constant);

            printf("\n");
        }

        printf("\n\n");

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
                printf("%d  ", matrix2[i][j] + constant);

            printf("\n");
        }
        break;
    case 4:
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
                printf("%d  ", matrix1[i][j]);

            printf("\n");
        }
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
                printf("%d  ", matrix2[i][j]);

            printf("\n");
        }
        break;
    }
}