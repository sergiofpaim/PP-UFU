#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float n1, n2, r;

    printf("Digite 2 numberos entre virgulas e espacos: ");
    scanf("%f, %f", &n1, &n2);

    printf("Escolha uma operacao matematica, digite 1 para subtracao, 2 para adicao, 3 para divisao e 4 para multiplicacao: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        r = (n1 - n2);
        break;
    case 2:
        r = (n1 + n2);
        break;
    case 3:
        r = (n1 / n2);
        break;
    case 4:
        r = (n1 * n2);
        break;
    }

    printf("O resultado eh: %f", r);

    return 0;
}