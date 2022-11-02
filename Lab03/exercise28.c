#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int choice;
    float n1, n2, n3, r;

    printf("Digite 3 numeros inteiros positivos\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    if (n1 <= 0 || n2 <= 0 || n3 <= 0)
        printf("Numero invalido");
    else
    {
        printf("Escolha uma media, sendo 1 geometrica, 2 ponderada, 3 harmonica e 4 aritmetica: \n");
        scanf("%d", &choice);

        if (choice < 1 || choice > 4)
            printf("Escolha invalida");

        else
        {
            switch (choice)
            {
            case 1:
                r = pow(((n1 * n2) * n3), 1 / 3);
                break;
            case 2:
                r = ((n1 + (n2 * 2) + (n3 * 3))) / 6;
                break;
            case 3:
                r = 1 / ((1 / n1) + (1 / n2) + (1 / n3));
                break;
            case 4:
                r = ((n1 + n2) + n3) / 3;
                break;
            }

            printf("Resultado eh: %f", r);
        }
    }

    return 0;
}