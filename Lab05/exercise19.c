#include <stdio.h>
#include <math.h>

int convertOperation(int n);

void main()
{
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Erro.");
    else
        printf("O resultado eh %d", convertOperation(n));
}

int convertOperation(int n)
{
    for (int i = n - 1; i > 1; i--)
        n *= i;

    return n;
}