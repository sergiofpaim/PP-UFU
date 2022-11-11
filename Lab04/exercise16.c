#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    float keep = 1, n1, n2, r = 0;

    while (keep == 1)
    {
        printf("Digite um numero: ");
        scanf("%f", &n1);
        printf("Digite um numero: ");
        scanf("%f", &n2);
        printf("Escolha uma operacao, sendo 1 (Adicao), 2 (Subtracao), 3 (Multiplicacao), 4 (Divisao) e 5 (Saida)\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            r = (n1 + n2);
            break;
        case 2:
            r = (n1 - n2);
            break;
        case 3:
            r = (n1 * n2);
            break;
        case 4:
            r = (n1 / n2);
            break;
        case 5:
            keep = 0;
            break;
        }
        if (r != 0)
            printf("O resultado eh: %f\n", r);

        r = 0;
    }

    return 0;
}