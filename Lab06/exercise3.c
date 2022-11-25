#include <stdio.h>

void main()
{
    int value, temp = 0;
    int vector[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um valor para a %da posicao: ", (i + 1));
        scanf("%d", &value);
        vector[i] = value;
    }

    for (int i = 5; i > -1; i--)
        printf("%d\n", vector[i]);
}