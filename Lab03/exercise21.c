#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    float n1, n2, r;

    printf("Digite 2 numberos entre virgulas e espacos: ");
    scanf("%f, %f", &n1, &n2);

    printf("Escolha uma operacao matematica, digite 1 para adicao, 2 para subtracao, 3 para multiplicacao e 4 para divisao: \n");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        r = (n1 + n2);
        break;
    case 2:
        r = abs((n1 - n2));
        break;
    case 3:
        r = (n1 * n2);
        break;
    case 4:
        if (n2 == 0)
            printf("O denominador nao pode ser 0\n");
        else
            r = (n1 / n2);
        break;
    }

    printf("O resultado eh: %f", r);

    return 0;
}
