#include <stdio.h>

void main()
{
    int value, temp1 = 0, temp2 = 0;
    int vector[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor para a %da posicao: ", (i + 1));
        scanf("%d", &value);
        vector[i] = value;
    }

    for (int i = 1; i < 5; ++i)
        if (vector[temp1] < vector[i])
            temp1 = i;

    for (int i = 1; i < 5; ++i)
        if (vector[temp2] > vector[i])
            temp2 = i;

    printf("O maior numero esta na posicao: %d\n", temp1 + 1);
    printf("O menor numero esta na posicao: %d\n", temp2 + 1);
}
