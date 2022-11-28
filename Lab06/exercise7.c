#include <stdio.h>

void main()
{
    int value, sum = 0, total = 0;
    int vector[6];

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um valor para a %da posicao: ", (i + 1));
        scanf("%d", &value);
        vector[i] = value;
    }

    printf("Os numeros pares sao\n");
    for (int i = 0; i < 6; i++)
        if ((vector[i] % 2) == 0)
        {
            printf("%d\n", vector[i]);
            sum += vector[i];
        }
    printf("A soma dos numeros pares eh: %d\n\n", sum);

    printf("Os numeros impares sao\n");
    for (int i = 0; i < 6; i++)
        if ((vector[i] % 2) != 0)
        {
            printf("%d\n", vector[i]);
            total++;
        }
    printf("A quantidade de numeros impares digitados eh: %d\n", total);
}
