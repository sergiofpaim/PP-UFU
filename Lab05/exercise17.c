#include <stdio.h>
#include <stdlib.h>

void calculateSum(int n1, int n2);

void main()
{
    int n1, n2;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n1);
    printf("Digite outro numero inteiro positivo: ");
    scanf("%d", &n2);

    if (n1 < 0 || n2 < 0)
        printf("Erro.");
    else
        calculateSum(n1, n2);
}

void calculateSum(int n1, int n2)
{
    int sum = 0, temp;

    if (n2 > n1)
    {
        temp = n2;
        n2 = n1;
        n1 = temp;
    }

    for (int i = n2; i < n1; i++)
        sum += i;

    printf("A soma dos numeros inteiros entre estes numeros eh: %d", sum);
}