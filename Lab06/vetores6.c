#include <stdio.h>

void main()
{
    int value;
    int vector[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor para a %da posicao: ", (i + 1));
        scanf("%d", &value);
        vector[i] = value;
    }

    printf("Numero(s) primo(s) esta(o) em\n");

    for (int i = 0; i < 10; i++)
    {
        if (vector[i] == 2 || vector[i] == 3)
            printf("%d\n", i + 1);
        if (((vector[i] % 2) != 0) && ((vector[i] % 3) != 0))
            printf("%d\n", i + 1);
    }
}
